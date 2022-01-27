/*
** Automatically generated from `stack_alloc.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 154 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0;

#line 157 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 166 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "ll_backend.stack_alloc.c"
static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1];

#line 172 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "ll_backend.stack_alloc.c"
static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0;

#line 181 "ll_backend.stack_alloc.c"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
#line 184 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 186 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2);

#line 189 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
#line 192 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
#line 194 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 196 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3);

#line 199 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 202 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 204 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 206 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 208 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 210 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 213 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 216 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 218 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 220 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 222 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 224 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 227 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 230 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 232 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 234 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 236 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 238 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 241 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 244 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 246 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 248 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 250 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 252 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 307 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__307__1_2_p_0(
#line 307 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 307 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_29);

#line 185 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
#line 185 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 185 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 185 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 185 "stack_alloc.m"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3);

#line 135 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 135 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 201 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 134 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 134 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 201 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 133 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 133 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 201 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 132 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 132 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 132 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 132 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 132 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 124 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
#line 124 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
#line 124 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 124 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3);

#line 124 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
#line 124 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 124 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2);

#line 348 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
#line 348 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 348 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_2,
#line 348 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_3,
#line 348 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
#line 348 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5);

#line 329 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(
#line 329 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 329 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 329 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
#line 329 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4);

#line 307 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1(
#line 307 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg);

#line 297 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Vars_9,
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_10,
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_12,
#line 297 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_N_0_20,
#line 297 "stack_alloc.m"
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_N_21,
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
#line 297 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);

#line 292 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
#line 292 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 292 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4);

#line 307 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_2(
#line 307 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg);

#line 233 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1(
#line 233 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 233 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 225 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Globals_2,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_3,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_4,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_5,
#line 225 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_6,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7,
#line 225 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8);

#line 203 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
#line 203 "stack_alloc.m"
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
#line 203 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4);

#line 201 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 187 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
#line 187 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__AllocData_5,
#line 187 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Set0_6,
#line 187 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
#line 187 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12);


static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__stack_alloc_scalar_common_3[4][5];

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
    ((MR_Box) (&ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[2])),
    ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
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
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 592 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

#line 600 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 608 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 616 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 625 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 633 "ll_backend.stack_alloc.c"
static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1] = {
  (MR_Integer) 0
};

#line 638 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 646 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 654 "ll_backend.stack_alloc.c"
static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 = {
  (MR_String) "stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  NULL
};

#line 661 "ll_backend.stack_alloc.c"
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

#line 678 "ll_backend.stack_alloc.c"
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

#line 691 "ll_backend.stack_alloc.c"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
#line 694 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 696 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2)
#line 698 "ll_backend.stack_alloc.c"
{
#line 700 "ll_backend.stack_alloc.c"
  {
#line 702 "ll_backend.stack_alloc.c"
    MR_bool ll_backend__stack_alloc__succeeded;

#line 705 "ll_backend.stack_alloc.c"
    {
#line 707 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc____Unify____stack_alloc_0_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2));
    }
#line 710 "ll_backend.stack_alloc.c"
    return ll_backend__stack_alloc__succeeded;
#line 712 "ll_backend.stack_alloc.c"
  }
#line 714 "ll_backend.stack_alloc.c"
}

#line 717 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
#line 720 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
#line 722 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 724 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3)
#line 726 "ll_backend.stack_alloc.c"
{
#line 728 "ll_backend.stack_alloc.c"
  {
#line 730 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__1_1;

#line 733 "ll_backend.stack_alloc.c"
    {
#line 735 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc____Compare____stack_alloc_0_0(&ll_backend__stack_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3));
    }
#line 738 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__1_1));
#line 740 "ll_backend.stack_alloc.c"
  }
#line 742 "ll_backend.stack_alloc.c"
}

#line 745 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 748 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 750 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 752 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 754 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 756 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 758 "ll_backend.stack_alloc.c"
{
#line 760 "ll_backend.stack_alloc.c"
  {
#line 762 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 764 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 767 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 769 "ll_backend.stack_alloc.c"
    {
#line 771 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 774 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 776 "ll_backend.stack_alloc.c"
  }
#line 778 "ll_backend.stack_alloc.c"
}

#line 781 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 784 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 786 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 788 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 790 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 792 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 794 "ll_backend.stack_alloc.c"
{
#line 796 "ll_backend.stack_alloc.c"
  {
#line 798 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 800 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 803 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 805 "ll_backend.stack_alloc.c"
    {
#line 807 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 810 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 812 "ll_backend.stack_alloc.c"
  }
#line 814 "ll_backend.stack_alloc.c"
}

#line 817 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 820 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 822 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 824 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 826 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 828 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 830 "ll_backend.stack_alloc.c"
{
#line 832 "ll_backend.stack_alloc.c"
  {
#line 834 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 836 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 839 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 841 "ll_backend.stack_alloc.c"
    {
#line 843 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 846 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 848 "ll_backend.stack_alloc.c"
  }
#line 850 "ll_backend.stack_alloc.c"
}

#line 853 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 856 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 858 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 860 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 862 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 864 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 866 "ll_backend.stack_alloc.c"
{
#line 868 "ll_backend.stack_alloc.c"
  {
#line 870 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 872 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 875 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 877 "ll_backend.stack_alloc.c"
    {
#line 879 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 882 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 884 "ll_backend.stack_alloc.c"
  }
#line 886 "ll_backend.stack_alloc.c"
}

#line 307 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__307__1_2_p_0(
#line 307 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 307 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_29)
#line 307 "stack_alloc.m"
{
#line 307 "stack_alloc.m"
  {
#line 307 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__StackSlotWidth_11 == ll_backend__stack_alloc__HeadVar__2_29);

#line 307 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 307 "stack_alloc.m"
  }
#line 307 "stack_alloc.m"
}

#line 185 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
#line 185 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 185 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 185 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 185 "stack_alloc.m"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3)
#line 185 "stack_alloc.m"
{
#line 185 "stack_alloc.m"
  {
#line 185 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 185 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12;

#line 185 "stack_alloc.m"
    {
#line 185 "stack_alloc.m"
      ll_backend__stack_alloc__set_for_loop_control_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), &ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12);
    }
#line 185 "stack_alloc.m"
    *ll_backend__stack_alloc__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12));
#line 185 "stack_alloc.m"
  }
#line 185 "stack_alloc.m"
}

#line 135 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 135 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 135 "stack_alloc.m"
{
#line 183 "stack_alloc.m"
  {
#line 183 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 183 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVarsSets_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 183 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_11_11;
#line 185 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv1_HeadVar__4_4;

#line 185 "stack_alloc.m"
    {
#line 185 "stack_alloc.m"
      ll_backend__stack_alloc__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 185 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_4[0]));
#line 185 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1));
#line 185 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 185 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 3) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
#line 185 "stack_alloc.m"
    }
#line 185 "stack_alloc.m"
    {
#line 185 "stack_alloc.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0, ll_backend__stack_alloc__V_11_11, ll_backend__stack_alloc__StackVarsSets_10, ((MR_Box) (ll_backend__stack_alloc__HeadVar__3_3)), &ll_backend__stack_alloc__conv1_HeadVar__4_4);
    }
#line 185 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = ((MR_Word) ll_backend__stack_alloc__conv1_HeadVar__4_4);
#line 183 "stack_alloc.m"
  }
#line 135 "stack_alloc.m"
}

#line 201 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 201 "stack_alloc.m"
{
#line 201 "stack_alloc.m"
  {
#line 201 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 201 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 201 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 201 "stack_alloc.m"
  }
#line 201 "stack_alloc.m"
}

#line 134 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 134 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 134 "stack_alloc.m"
{
#line 172 "stack_alloc.m"
  {
#line 172 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 172 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVars0_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 172 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVars_11;
#line 172 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_12;
#line 172 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_13;
#line 172 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 172 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_20_20;
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));

#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      ll_backend__stack_alloc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_19));
#line 201 "stack_alloc.m"
    }
#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_20_20, ll_backend__stack_alloc__StackVars0_10, &ll_backend__stack_alloc__StackVars_11);
    }
#line 176 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_12 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 177 "stack_alloc.m"
    {
#line 177 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_13 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], ll_backend__stack_alloc__LiveSets0_12, ((MR_Box) (ll_backend__stack_alloc__StackVars_11)));
    }
#line 178 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_13;
#line 172 "stack_alloc.m"
  }
#line 134 "stack_alloc.m"
}

#line 201 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 201 "stack_alloc.m"
{
#line 201 "stack_alloc.m"
  {
#line 201 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 201 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 201 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 201 "stack_alloc.m"
  }
#line 201 "stack_alloc.m"
}

#line 133 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 133 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 133 "stack_alloc.m"
{
#line 155 "stack_alloc.m"
  {
#line 155 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 155 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeOnStack_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));

#line 159 "stack_alloc.m"
#line 159 "stack_alloc.m"
    switch (ll_backend__stack_alloc__ResumeOnStack_10) {
#line 159 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 159 "stack_alloc.m"
      case (MR_Integer) 0:
#line 158 "stack_alloc.m"
        *ll_backend__stack_alloc__HeadVar__4_4 = ll_backend__stack_alloc__HeadVar__3_3;
#line 159 "stack_alloc.m"
        break;
#line 159 "stack_alloc.m"
      case (MR_Integer) 1:
#line 160 "stack_alloc.m"
        {
#line 160 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSet0_13;
#line 160 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSet_14;
#line 160 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSets0_15;
#line 160 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSets_16;
#line 160 "stack_alloc.m"
          MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_23;
#line 160 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_24_24;
#line 200 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_25_25;
#line 200 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_26_26;
#line 200 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_27_27;
#line 200 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_28_28;
#line 200 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_29_29;

#line 161 "stack_alloc.m"
          {
#line 161 "stack_alloc.m"
            ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__ResumeVars_11, ll_backend__stack_alloc__NondetLiveVars_12);
          }
#line 200 "stack_alloc.m"
          ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "stack_alloc.m"
          ll_backend__stack_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "stack_alloc.m"
          ll_backend__stack_alloc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "stack_alloc.m"
          ll_backend__stack_alloc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 200 "stack_alloc.m"
          ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
#line 200 "stack_alloc.m"
          ll_backend__stack_alloc__DummyVarArray_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 201 "stack_alloc.m"
          {
#line 201 "stack_alloc.m"
            ll_backend__stack_alloc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 201 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1));
#line 201 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_23));
#line 201 "stack_alloc.m"
          }
#line 201 "stack_alloc.m"
          {
#line 201 "stack_alloc.m"
            parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_24_24, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
          }
#line 164 "stack_alloc.m"
          ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 165 "stack_alloc.m"
          {
#line 165 "stack_alloc.m"
            ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
          }
#line 166 "stack_alloc.m"
          *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
#line 160 "stack_alloc.m"
        }
#line 159 "stack_alloc.m"
        break;
#line 159 "stack_alloc.m"
    }
#line 155 "stack_alloc.m"
  }
#line 133 "stack_alloc.m"
}

#line 201 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 201 "stack_alloc.m"
{
#line 201 "stack_alloc.m"
  {
#line 201 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 201 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 201 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 201 "stack_alloc.m"
  }
#line 201 "stack_alloc.m"
}

#line 132 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 132 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 132 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 132 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 132 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 132 "stack_alloc.m"
{
#line 142 "stack_alloc.m"
  {
#line 142 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ForwardVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSet0_13;
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSet_14;
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_15;
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_16;
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_17_17;
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_18_18;
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_19_19;
#line 142 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_27;
#line 142 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_28_28;
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_29_29;
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_30_30;
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_31_31;
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_32_32;
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_33_33;

#line 145 "stack_alloc.m"
    {
#line 145 "stack_alloc.m"
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (ll_backend__stack_alloc__NondetLiveVars_12));
#line 145 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "stack_alloc.m"
    }
#line 144 "stack_alloc.m"
    {
#line 144 "stack_alloc.m"
      ll_backend__stack_alloc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 0) = ((MR_Box) (ll_backend__stack_alloc__ResumeVars_11));
#line 144 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 1) = ((MR_Box) (ll_backend__stack_alloc__V_19_19));
#line 144 "stack_alloc.m"
    }
#line 144 "stack_alloc.m"
    {
#line 144 "stack_alloc.m"
      ll_backend__stack_alloc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 0) = ((MR_Box) (ll_backend__stack_alloc__ForwardVars_10));
#line 144 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 1) = ((MR_Box) (ll_backend__stack_alloc__V_18_18));
#line 144 "stack_alloc.m"
    }
#line 144 "stack_alloc.m"
    {
#line 144 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_17_17);
    }
#line 200 "stack_alloc.m"
    ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "stack_alloc.m"
    ll_backend__stack_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "stack_alloc.m"
    ll_backend__stack_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "stack_alloc.m"
    ll_backend__stack_alloc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 200 "stack_alloc.m"
    ll_backend__stack_alloc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
#line 200 "stack_alloc.m"
    ll_backend__stack_alloc__DummyVarArray_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      ll_backend__stack_alloc__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_27));
#line 201 "stack_alloc.m"
    }
#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_28_28, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
    }
#line 148 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 149 "stack_alloc.m"
    {
#line 149 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
    }
#line 150 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
#line 142 "stack_alloc.m"
  }
#line 132 "stack_alloc.m"
}

#line 124 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
#line 124 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
#line 124 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 124 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3)
#line 124 "stack_alloc.m"
{
#line 124 "stack_alloc.m"
  {
#line 124 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 124 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastX_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;
#line 124 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastY_7 = (MR_Integer) ll_backend__stack_alloc__HeadVar__3_3;

#line 124 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_6 == ll_backend__stack_alloc__CastY_7);
#line 124 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 1423 "ll_backend.stack_alloc.c"
      *ll_backend__stack_alloc__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "stack_alloc.m"
    else
#line 124 "stack_alloc.m"
      {
#line 124 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;
#line 124 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_5_5 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;

#line 124 "stack_alloc.m"
        {
#line 124 "stack_alloc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ll_backend__stack_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__stack_alloc__V_4_4)), ((MR_Box) (ll_backend__stack_alloc__V_5_5)));
#line 124 "stack_alloc.m"
          return;
        }
#line 124 "stack_alloc.m"
      }
#line 124 "stack_alloc.m"
  }
#line 124 "stack_alloc.m"
}

#line 124 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
#line 124 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 124 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2)
#line 124 "stack_alloc.m"
{
#line 124 "stack_alloc.m"
  {
#line 124 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 124 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastX_5 = (MR_Integer) ll_backend__stack_alloc__HeadVar__1_1;
#line 124 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastY_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;

#line 124 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_5 == ll_backend__stack_alloc__CastY_6);
#line 124 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 124 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = MR_TRUE;
#line 124 "stack_alloc.m"
    else
#line 124 "stack_alloc.m"
      {
#line 124 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_3_3 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 124 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;

#line 1481 "ll_backend.stack_alloc.c"
        {
#line 1483 "ll_backend.stack_alloc.c"
          return ll_backend__stack_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ((MR_Box) (ll_backend__stack_alloc__V_3_3)), ((MR_Box) (ll_backend__stack_alloc__V_4_4)));
        }
#line 124 "stack_alloc.m"
      }
#line 124 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 124 "stack_alloc.m"
  }
#line 124 "stack_alloc.m"
}

#line 348 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
#line 348 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 348 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_2,
#line 348 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_3,
#line 348 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
#line 348 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5)
#line 348 "stack_alloc.m"
{
#line 351 "stack_alloc.m"
  while (MR_TRUE)
#line 351 "stack_alloc.m"
    {
#line 351 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 351 "stack_alloc.m"
      {
#line 351 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 351 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4;
#line 351 "stack_alloc.m"
        else
#line 352 "stack_alloc.m"
          {
#line 352 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 352 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Locn_16;
#line 352 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21;
#line 352 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__V_23_23;
#line 352 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));

#line 356 "stack_alloc.m"
#line 356 "stack_alloc.m"
            switch (ll_backend__stack_alloc__MainStack_2) {
#line 356 "stack_alloc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 356 "stack_alloc.m"
              case (MR_Integer) 0:
#line 354 "stack_alloc.m"
                {
#line 355 "stack_alloc.m"
                  {
#line 355 "stack_alloc.m"
                    ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 355 "stack_alloc.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
#line 355 "stack_alloc.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 355 "stack_alloc.m"
                  }
#line 354 "stack_alloc.m"
                }
#line 356 "stack_alloc.m"
                break;
#line 356 "stack_alloc.m"
              case (MR_Integer) 1:
#line 358 "stack_alloc.m"
                {
#line 358 "stack_alloc.m"
                  ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 358 "stack_alloc.m"
                  MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
#line 358 "stack_alloc.m"
                }
#line 356 "stack_alloc.m"
                break;
#line 356 "stack_alloc.m"
            }
#line 334 "stack_alloc.m"
            {
#line 334 "stack_alloc.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_30)), ((MR_Box) (ll_backend__stack_alloc__Locn_16)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21);
            }
#line 361 "stack_alloc.m"
            ll_backend__stack_alloc__V_23_23 = (ll_backend__stack_alloc__N0_3 - (MR_Integer) 1);
#line 361 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 361 "stack_alloc.m"
            {
#line 361 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__Vars_12;
#line 361 "stack_alloc.m"
              MR_Integer ll_backend__stack_alloc__N0__tmp_copy_3 = ll_backend__stack_alloc__V_23_23;
#line 361 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21;

#line 361 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4;
#line 361 "stack_alloc.m"
              ll_backend__stack_alloc__N0_3 = ll_backend__stack_alloc__N0__tmp_copy_3;
#line 361 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 361 "stack_alloc.m"
            }
#line 361 "stack_alloc.m"
            continue;
#line 352 "stack_alloc.m"
          }
#line 351 "stack_alloc.m"
      }
#line 351 "stack_alloc.m"
      break;
#line 351 "stack_alloc.m"
    }
#line 348 "stack_alloc.m"
}

#line 329 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(
#line 329 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 329 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 329 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
#line 329 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4)
#line 329 "stack_alloc.m"
{
#line 332 "stack_alloc.m"
  while (MR_TRUE)
#line 332 "stack_alloc.m"
    {
#line 332 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 332 "stack_alloc.m"
      {
#line 332 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 332 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3;
#line 332 "stack_alloc.m"
        else
#line 333 "stack_alloc.m"
          {
#line 333 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 333 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 333 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

#line 334 "stack_alloc.m"
            {
#line 334 "stack_alloc.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_9)), ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15);
            }
#line 335 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 335 "stack_alloc.m"
            {
#line 335 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__Vars_10;
#line 335 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

#line 335 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3;
#line 335 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 335 "stack_alloc.m"
            }
#line 335 "stack_alloc.m"
            continue;
#line 333 "stack_alloc.m"
          }
#line 332 "stack_alloc.m"
      }
#line 332 "stack_alloc.m"
      break;
#line 332 "stack_alloc.m"
    }
#line 329 "stack_alloc.m"
}

#line 307 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1(
#line 307 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg)
#line 307 "stack_alloc.m"
{
#line 307 "stack_alloc.m"
  {
#line 307 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 307 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 307 "stack_alloc.m"
    {
#line 307 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__307__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
#line 307 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 307 "stack_alloc.m"
  }
#line 307 "stack_alloc.m"
}

#line 297 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Vars_9,
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_10,
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_12,
#line 297 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_N_0_20,
#line 297 "stack_alloc.m"
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_N_21,
#line 297 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
#line 297 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23)
#line 297 "stack_alloc.m"
{
#line 302 "stack_alloc.m"
  {
#line 302 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_12)) == (MR_mktag((MR_Integer) 1)));
#line 302 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__SlotNum_17;
#line 302 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Locn_18;
#line 302 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__VarList_19;
#line 310 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__ResSlotNum_16;
#line 304 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_32_32;
#line 304 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResVar_15;
#line 304 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24;

#line 304 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 304 "stack_alloc.m"
      {
#line 304 "stack_alloc.m"
        ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_12, (MR_Integer) 0)));
#line 304 "stack_alloc.m"
        ll_backend__stack_alloc__ResVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 0)));
#line 304 "stack_alloc.m"
        ll_backend__stack_alloc__ResSlotNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 1)));
#line 1764 "ll_backend.stack_alloc.c"
        ll_backend__stack_alloc__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 305 "stack_alloc.m"
        {
#line 305 "stack_alloc.m"
          ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_32_32, ll_backend__stack_alloc__Vars_9, ll_backend__stack_alloc__ResVar_15);
        }
#line 304 "stack_alloc.m"
      }
#line 310 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 308 "stack_alloc.m"
      {
#line 308 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_25_25;

#line 307 "stack_alloc.m"
        {
#line 307 "stack_alloc.m"
          ll_backend__stack_alloc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 307 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[2]));
#line 307 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1));
#line 307 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 307 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 3) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_11));
#line 307 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 4) = ((MR_Box) ((MR_Integer) 0));
#line 307 "stack_alloc.m"
        }
#line 307 "stack_alloc.m"
        {
#line 307 "stack_alloc.m"
          mercury__require__expect_4_p_0(ll_backend__stack_alloc__V_25_25, (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_stack_slots_3\'/8", (MR_String) "reserved multiple stack slots");
        }
#line 309 "stack_alloc.m"
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__ResSlotNum_16;
#line 308 "stack_alloc.m"
        *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = ll_backend__stack_alloc__STATE_VARIABLE_N_0_20;
#line 308 "stack_alloc.m"
      }
#line 310 "stack_alloc.m"
    else
#line 311 "stack_alloc.m"
      {
#line 311 "stack_alloc.m"
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__STATE_VARIABLE_N_0_20;
#line 326 "stack_alloc.m"
#line 326 "stack_alloc.m"
        switch (ll_backend__stack_alloc__StackSlotWidth_11) {
#line 326 "stack_alloc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 326 "stack_alloc.m"
          case (MR_Integer) 1:
#line 327 "stack_alloc.m"
            {
#line 327 "stack_alloc.m"
              *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = (ll_backend__stack_alloc__STATE_VARIABLE_N_0_20 + (MR_Integer) 2);
#line 327 "stack_alloc.m"
            }
#line 326 "stack_alloc.m"
            break;
#line 326 "stack_alloc.m"
          case (MR_Integer) 0:
#line 326 "stack_alloc.m"
            {
#line 326 "stack_alloc.m"
              *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = (ll_backend__stack_alloc__STATE_VARIABLE_N_0_20 + (MR_Integer) 1);
#line 326 "stack_alloc.m"
            }
#line 326 "stack_alloc.m"
            break;
#line 326 "stack_alloc.m"
        }
#line 311 "stack_alloc.m"
      }
#line 317 "stack_alloc.m"
#line 317 "stack_alloc.m"
    switch (ll_backend__stack_alloc__MainStack_10) {
#line 317 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 317 "stack_alloc.m"
      case (MR_Integer) 0:
#line 316 "stack_alloc.m"
        {
#line 316 "stack_alloc.m"
          ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
#line 316 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 1) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_11));
#line 316 "stack_alloc.m"
        }
#line 317 "stack_alloc.m"
        break;
#line 317 "stack_alloc.m"
      case (MR_Integer) 1:
#line 319 "stack_alloc.m"
        {
#line 319 "stack_alloc.m"
          ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "stack_alloc.m"
          MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
#line 319 "stack_alloc.m"
        }
#line 317 "stack_alloc.m"
        break;
#line 317 "stack_alloc.m"
    }
#line 321 "stack_alloc.m"
    {
#line 321 "stack_alloc.m"
      ll_backend__stack_alloc__VarList_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__Vars_9);
    }
#line 322 "stack_alloc.m"
    {
#line 322 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(ll_backend__stack_alloc__VarList_19, ll_backend__stack_alloc__Locn_18, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);
#line 322 "stack_alloc.m"
      return;
    }
#line 302 "stack_alloc.m"
  }
#line 297 "stack_alloc.m"
}

#line 292 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
#line 292 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 292 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4)
#line 292 "stack_alloc.m"
{
#line 294 "stack_alloc.m"
  {
#line 294 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 294 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_5_5;
#line 294 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_6_6;

#line 295 "stack_alloc.m"
    {
#line 295 "stack_alloc.m"
      ll_backend__stack_alloc__V_5_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 295 "stack_alloc.m"
    {
#line 295 "stack_alloc.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__stack_alloc__VarTypes_3, ll_backend__stack_alloc__Var_4, &ll_backend__stack_alloc__V_6_6);
    }
#line 295 "stack_alloc.m"
    {
#line 295 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__stack_alloc__V_5_5, ll_backend__stack_alloc__V_6_6);
    }
#line 294 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 294 "stack_alloc.m"
  }
#line 292 "stack_alloc.m"
}

#line 307 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_2(
#line 307 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg)
#line 307 "stack_alloc.m"
{
#line 307 "stack_alloc.m"
  {
#line 307 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 307 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 307 "stack_alloc.m"
    {
#line 307 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__307__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
#line 307 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 307 "stack_alloc.m"
  }
#line 307 "stack_alloc.m"
}

#line 233 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1(
#line 233 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 233 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 233 "stack_alloc.m"
{
#line 233 "stack_alloc.m"
  {
#line 233 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 233 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 233 "stack_alloc.m"
    {
#line 233 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_float_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 233 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 233 "stack_alloc.m"
  }
#line 233 "stack_alloc.m"
}

#line 225 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Globals_2,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_3,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_4,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_5,
#line 225 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_6,
#line 225 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7,
#line 225 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8)
#line 225 "stack_alloc.m"
{
#line 229 "stack_alloc.m"
  while (MR_TRUE)
#line 229 "stack_alloc.m"
    {
#line 229 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 229 "stack_alloc.m"
      {
#line 229 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 229 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7;
#line 229 "stack_alloc.m"
        else
#line 231 "stack_alloc.m"
          {
#line 231 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__VarSets_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__DoubleWidthVars_25;
#line 231 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__SingleWidthVars_26;
#line 231 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__N1_27;
#line 231 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__N_29;
#line 231 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35;
#line 231 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_37_37;
#line 271 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__V_47_47;
#line 271 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__V_48_48;

#line 267 "stack_alloc.m"
            ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__MainStack_3 == (MR_Integer) 0);
#line 271 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 271 "stack_alloc.m"
              {
#line 268 "stack_alloc.m"
                ll_backend__stack_alloc__V_47_47 = (MR_Integer) 1;
#line 268 "stack_alloc.m"
                {
#line 268 "stack_alloc.m"
                  libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__stack_alloc__Globals_2, &ll_backend__stack_alloc__V_48_48);
                }
#line 268 "stack_alloc.m"
                ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__V_47_47 == ll_backend__stack_alloc__V_48_48);
#line 271 "stack_alloc.m"
              }
#line 235 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 233 "stack_alloc.m"
              {
#line 233 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__V_33_33;

#line 233 "stack_alloc.m"
                {
#line 233 "stack_alloc.m"
                  ll_backend__stack_alloc__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 233 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_33_33, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[1]));
#line 233 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_33_33, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1));
#line 233 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 233 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_33_33, 3) = ((MR_Box) (ll_backend__stack_alloc__VarTypes_4));
#line 233 "stack_alloc.m"
                }
#line 233 "stack_alloc.m"
                {
#line 233 "stack_alloc.m"
                  parse_tree__set_of_var__divide_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_33_33, ll_backend__stack_alloc__Vars_17, &ll_backend__stack_alloc__DoubleWidthVars_25, &ll_backend__stack_alloc__SingleWidthVars_26);
                }
#line 233 "stack_alloc.m"
              }
#line 235 "stack_alloc.m"
            else
#line 236 "stack_alloc.m"
              {
#line 236 "stack_alloc.m"
                ll_backend__stack_alloc__SingleWidthVars_26 = ll_backend__stack_alloc__Vars_17;
#line 237 "stack_alloc.m"
                {
#line 237 "stack_alloc.m"
                  ll_backend__stack_alloc__DoubleWidthVars_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                }
#line 236 "stack_alloc.m"
              }
#line 239 "stack_alloc.m"
            {
#line 239 "stack_alloc.m"
              ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__SingleWidthVars_26);
            }
#line 242 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 240 "stack_alloc.m"
              {
#line 240 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__SlotNum_61;
#line 240 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__Locn_62;
#line 240 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__VarList_63;
#line 310 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__ResSlotNum_60;
#line 304 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__TypeCtorInfo_32_72;
#line 304 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__ResVar_59;
#line 304 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__V_64_64;

#line 304 "stack_alloc.m"
                ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 304 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 304 "stack_alloc.m"
                  {
#line 304 "stack_alloc.m"
                    ll_backend__stack_alloc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_5, (MR_Integer) 0)));
#line 304 "stack_alloc.m"
                    ll_backend__stack_alloc__ResVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_64_64, (MR_Integer) 0)));
#line 304 "stack_alloc.m"
                    ll_backend__stack_alloc__ResSlotNum_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_64_64, (MR_Integer) 1)));
#line 2141 "ll_backend.stack_alloc.c"
                    ll_backend__stack_alloc__TypeCtorInfo_32_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 305 "stack_alloc.m"
                    {
#line 305 "stack_alloc.m"
                      ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_32_72, ll_backend__stack_alloc__SingleWidthVars_26, ll_backend__stack_alloc__ResVar_59);
                    }
#line 304 "stack_alloc.m"
                  }
#line 310 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 308 "stack_alloc.m"
                  {
#line 307 "stack_alloc.m"
                    {
#line 307 "stack_alloc.m"
                      mercury__require__expect_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_3[3], (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_stack_slots_3\'/8", (MR_String) "reserved multiple stack slots");
                    }
#line 309 "stack_alloc.m"
                    ll_backend__stack_alloc__SlotNum_61 = ll_backend__stack_alloc__ResSlotNum_60;
#line 308 "stack_alloc.m"
                    ll_backend__stack_alloc__N1_27 = ll_backend__stack_alloc__N0_6;
#line 308 "stack_alloc.m"
                  }
#line 310 "stack_alloc.m"
                else
#line 311 "stack_alloc.m"
                  {
#line 311 "stack_alloc.m"
                    ll_backend__stack_alloc__SlotNum_61 = ll_backend__stack_alloc__N0_6;
#line 326 "stack_alloc.m"
                    ll_backend__stack_alloc__N1_27 = (ll_backend__stack_alloc__N0_6 + (MR_Integer) 1);
#line 311 "stack_alloc.m"
                  }
#line 317 "stack_alloc.m"
#line 317 "stack_alloc.m"
                switch (ll_backend__stack_alloc__MainStack_3) {
#line 317 "stack_alloc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 317 "stack_alloc.m"
                  case (MR_Integer) 0:
#line 316 "stack_alloc.m"
                    {
#line 316 "stack_alloc.m"
                      ll_backend__stack_alloc__Locn_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "stack_alloc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_62, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_61));
#line 316 "stack_alloc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_62, 1) = ((MR_Box) ((MR_Integer) 0));
#line 316 "stack_alloc.m"
                    }
#line 317 "stack_alloc.m"
                    break;
#line 317 "stack_alloc.m"
                  case (MR_Integer) 1:
#line 319 "stack_alloc.m"
                    {
#line 319 "stack_alloc.m"
                      ll_backend__stack_alloc__Locn_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "stack_alloc.m"
                      MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_62, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_61));
#line 319 "stack_alloc.m"
                    }
#line 317 "stack_alloc.m"
                    break;
#line 317 "stack_alloc.m"
                }
#line 321 "stack_alloc.m"
                {
#line 321 "stack_alloc.m"
                  ll_backend__stack_alloc__VarList_63 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__SingleWidthVars_26);
                }
#line 322 "stack_alloc.m"
                {
#line 322 "stack_alloc.m"
                  ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(ll_backend__stack_alloc__VarList_63, ll_backend__stack_alloc__Locn_62, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35);
                }
#line 240 "stack_alloc.m"
              }
#line 242 "stack_alloc.m"
            else
#line 243 "stack_alloc.m"
              {
#line 243 "stack_alloc.m"
                ll_backend__stack_alloc__N1_27 = ll_backend__stack_alloc__N0_6;
#line 243 "stack_alloc.m"
                ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7;
#line 243 "stack_alloc.m"
              }
#line 245 "stack_alloc.m"
            {
#line 245 "stack_alloc.m"
              ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__DoubleWidthVars_25);
            }
#line 253 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 250 "stack_alloc.m"
              {
#line 250 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__N2_28;

#line 286 "stack_alloc.m"
                {
#line 286 "stack_alloc.m"
                  ll_backend__stack_alloc__succeeded = mercury__int__even_1_p_0(ll_backend__stack_alloc__N1_27);
                }
#line 288 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 287 "stack_alloc.m"
                  ll_backend__stack_alloc__N2_28 = ll_backend__stack_alloc__N1_27;
#line 288 "stack_alloc.m"
                else
#line 289 "stack_alloc.m"
                  {
#line 289 "stack_alloc.m"
                    ll_backend__stack_alloc__N2_28 = (ll_backend__stack_alloc__N1_27 + (MR_Integer) 1);
#line 289 "stack_alloc.m"
                  }
#line 251 "stack_alloc.m"
                {
#line 251 "stack_alloc.m"
                  ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(ll_backend__stack_alloc__DoubleWidthVars_25, ll_backend__stack_alloc__MainStack_3, (MR_Integer) 1, ll_backend__stack_alloc__MaybeReservedVarInfo_5, ll_backend__stack_alloc__N2_28, &ll_backend__stack_alloc__N_29, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_37_37);
                }
#line 250 "stack_alloc.m"
              }
#line 253 "stack_alloc.m"
            else
#line 254 "stack_alloc.m"
              {
#line 254 "stack_alloc.m"
                ll_backend__stack_alloc__N_29 = ll_backend__stack_alloc__N1_27;
#line 254 "stack_alloc.m"
                ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_37_37 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35;
#line 254 "stack_alloc.m"
              }
#line 256 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 256 "stack_alloc.m"
            {
#line 256 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__VarSets_18;
#line 256 "stack_alloc.m"
              MR_Integer ll_backend__stack_alloc__N0__tmp_copy_6 = ll_backend__stack_alloc__N_29;
#line 256 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_7 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_37_37;

#line 256 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_7;
#line 256 "stack_alloc.m"
              ll_backend__stack_alloc__N0_6 = ll_backend__stack_alloc__N0__tmp_copy_6;
#line 256 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 256 "stack_alloc.m"
            }
#line 256 "stack_alloc.m"
            continue;
#line 231 "stack_alloc.m"
          }
#line 229 "stack_alloc.m"
      }
#line 229 "stack_alloc.m"
      break;
#line 229 "stack_alloc.m"
    }
#line 225 "stack_alloc.m"
}

#line 203 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
#line 203 "stack_alloc.m"
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
#line 203 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4)
#line 203 "stack_alloc.m"
{
#line 205 "stack_alloc.m"
  {
#line 205 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeClassInfo_for_enum_7 = (MR_Word) &ll_backend__stack_alloc_scalar_common_2[0];
#line 205 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__VarNum_5;
#line 205 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__IsDummy_6;
#line 2327 "ll_backend.stack_alloc.c"
    MR_Box MR_CALL (* ll_backend__stack_alloc__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__TypeClassInfo_for_enum_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2329 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__conv1_VarNum_5;
#line 207 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv2_IsDummy_6;

#line 2334 "ll_backend.stack_alloc.c"
    {
#line 2336 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__conv1_VarNum_5 = ll_backend__stack_alloc__func_0(((MR_Box) ll_backend__stack_alloc__TypeClassInfo_for_enum_7), ((MR_Box) (ll_backend__stack_alloc__Var_4)));
    }
#line 2339 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__VarNum_5 = ((MR_Integer) ll_backend__stack_alloc__conv1_VarNum_5);
#line 207 "stack_alloc.m"
    {
#line 207 "stack_alloc.m"
      mercury__array__lookup_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_ArrayPtr) ll_backend__stack_alloc__DummyVarArray_3, ll_backend__stack_alloc__VarNum_5, &ll_backend__stack_alloc__conv2_IsDummy_6);
    }
#line 207 "stack_alloc.m"
    ll_backend__stack_alloc__IsDummy_6 = ((MR_Word) ll_backend__stack_alloc__conv2_IsDummy_6);
#line 208 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__IsDummy_6 == (MR_Integer) 1);
#line 205 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 205 "stack_alloc.m"
  }
#line 203 "stack_alloc.m"
}

#line 201 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 201 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 201 "stack_alloc.m"
{
#line 201 "stack_alloc.m"
  {
#line 201 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 201 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 201 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 201 "stack_alloc.m"
  }
#line 201 "stack_alloc.m"
}

#line 187 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
#line 187 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__AllocData_5,
#line 187 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Set0_6,
#line 187 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
#line 187 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12)
#line 187 "stack_alloc.m"
{
#line 190 "stack_alloc.m"
  {
#line 190 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 190 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_8 = (MR_Word) ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11;
#line 190 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Set_9;
#line 190 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_10;
#line 190 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 5)));
#line 190 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_19_19;
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 0)));
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 1)));
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 2)));
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 3)));
#line 200 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 4)));

#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (ll_backend__stack_alloc__set_for_loop_control_4_p_0_1));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_18));
#line 201 "stack_alloc.m"
    }
#line 201 "stack_alloc.m"
    {
#line 201 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_19_19, ll_backend__stack_alloc__Set0_6, &ll_backend__stack_alloc__Set_9);
    }
#line 193 "stack_alloc.m"
    {
#line 193 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_10 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], ll_backend__stack_alloc__LiveSets0_8, ((MR_Box) (ll_backend__stack_alloc__Set_9)));
    }
#line 194 "stack_alloc.m"
    *ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12 = (MR_Word) ll_backend__stack_alloc__LiveSets_10;
#line 190 "stack_alloc.m"
  }
#line 187 "stack_alloc.m"
}

#line 33 "stack_alloc.m"
void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(
#line 33 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__ModuleInfo_5,
#line 33 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 33 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41,
#line 33 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_42)
#line 33 "stack_alloc.m"
{
#line 69 "stack_alloc.m"
  {
#line 69 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_52_52;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeInfo_53_53;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Liveness0_9;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__PredInfo_10;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Globals_11;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TraceLevel_12;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NeedFailVars_13;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__FailVars_14;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeInfoLiveness_15;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__OptNoReturnCalls_16;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__VarTypes_17;
#line 69 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyTypeArray_18;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__DummyVars_19;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__AllocData_20;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveness0_21;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc0_22;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Goal0_23;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Goal_24;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc_25;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_28;
#line 69 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__NumReservedSlots_29;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_30;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_34;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ColourSets_35;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ColourList_36;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__CodeModel_37;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MainStack_38;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackSlots1_39;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackSlots_40;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_45_45;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47;
#line 69 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__FirstVarSlot_62;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_64_64;
#line 69 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc___Liveness_26;
#line 93 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc___NondetLiveness_27;
#line 93 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv0_SimpleStackAlloc_25;

#line 70 "stack_alloc.m"
    {
#line 70 "stack_alloc.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, ll_backend__stack_alloc__PredId_6, ll_backend__stack_alloc__ModuleInfo_5, &ll_backend__stack_alloc__Liveness0_9);
    }
#line 71 "stack_alloc.m"
    {
#line 71 "stack_alloc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredId_6, &ll_backend__stack_alloc__PredInfo_10);
    }
#line 72 "stack_alloc.m"
    {
#line 72 "stack_alloc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_alloc__ModuleInfo_5, &ll_backend__stack_alloc__Globals_11);
    }
#line 73 "stack_alloc.m"
    {
#line 73 "stack_alloc.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TraceLevel_12);
    }
#line 74 "stack_alloc.m"
    {
#line 74 "stack_alloc.m"
      ll_backend__stack_alloc__NeedFailVars_13 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, ll_backend__stack_alloc__TraceLevel_12);
    }
#line 79 "stack_alloc.m"
#line 79 "stack_alloc.m"
    switch (ll_backend__stack_alloc__NeedFailVars_13) {
#line 79 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 79 "stack_alloc.m"
      case (MR_Integer) 0:
#line 80 "stack_alloc.m"
        {
#line 81 "stack_alloc.m"
          {
#line 81 "stack_alloc.m"
            ll_backend__stack_alloc__FailVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 80 "stack_alloc.m"
        }
#line 79 "stack_alloc.m"
        break;
#line 79 "stack_alloc.m"
      case (MR_Integer) 1:
#line 78 "stack_alloc.m"
        {
#line 78 "stack_alloc.m"
          ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__FailVars_14);
        }
#line 79 "stack_alloc.m"
        break;
#line 79 "stack_alloc.m"
    }
#line 83 "stack_alloc.m"
    {
#line 83 "stack_alloc.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TypeInfoLiveness_15);
    }
#line 84 "stack_alloc.m"
    {
#line 84 "stack_alloc.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_alloc__Globals_11, (MR_Integer) 325, &ll_backend__stack_alloc__OptNoReturnCalls_16);
    }
#line 86 "stack_alloc.m"
    {
#line 86 "stack_alloc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__VarTypes_17);
    }
#line 87 "stack_alloc.m"
    {
#line 87 "stack_alloc.m"
      ll_backend__live_vars__build_dummy_type_array_4_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__VarTypes_17, &ll_backend__stack_alloc__DummyTypeArray_18, &ll_backend__stack_alloc__DummyVars_19);
    }
#line 88 "stack_alloc.m"
    {
#line 88 "stack_alloc.m"
      ll_backend__stack_alloc__AllocData_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 88 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 0) = ((MR_Box) (ll_backend__stack_alloc__ModuleInfo_5));
#line 88 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 1) = ((MR_Box) (ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41));
#line 88 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 2) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
#line 88 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 3) = ((MR_Box) (ll_backend__stack_alloc__TypeInfoLiveness_15));
#line 88 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 4) = ((MR_Box) (ll_backend__stack_alloc__OptNoReturnCalls_16));
#line 88 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 5) = ((MR_Box) (ll_backend__stack_alloc__DummyTypeArray_18));
#line 88 "stack_alloc.m"
    }
#line 2642 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 90 "stack_alloc.m"
    {
#line 90 "stack_alloc.m"
      ll_backend__stack_alloc__NondetLiveness0_21 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_alloc__TypeCtorInfo_52_52);
    }
#line 2649 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__TypeInfo_53_53 = (MR_Word) &ll_backend__stack_alloc_scalar_common_1[0];
#line 91 "stack_alloc.m"
    {
#line 91 "stack_alloc.m"
      ll_backend__stack_alloc__V_45_45 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_alloc__TypeInfo_53_53, ((MR_Box) (ll_backend__stack_alloc__FailVars_14)));
    }
#line 91 "stack_alloc.m"
    ll_backend__stack_alloc__SimpleStackAlloc0_22 = (MR_Word) ll_backend__stack_alloc__V_45_45;
#line 92 "stack_alloc.m"
    {
#line 92 "stack_alloc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__Goal0_23);
    }
#line 93 "stack_alloc.m"
    {
#line 93 "stack_alloc.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__Goal0_23, &ll_backend__stack_alloc__Goal_24, ll_backend__stack_alloc__FailVars_14, ll_backend__stack_alloc__AllocData_20, ((MR_Box) (ll_backend__stack_alloc__SimpleStackAlloc0_22)), &ll_backend__stack_alloc__conv0_SimpleStackAlloc_25, ll_backend__stack_alloc__Liveness0_9, &ll_backend__stack_alloc___Liveness_26, ll_backend__stack_alloc__NondetLiveness0_21, &ll_backend__stack_alloc___NondetLiveness_27);
    }
#line 93 "stack_alloc.m"
    ll_backend__stack_alloc__SimpleStackAlloc_25 = ((MR_Word) ll_backend__stack_alloc__conv0_SimpleStackAlloc_25);
#line 96 "stack_alloc.m"
    {
#line 96 "stack_alloc.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_alloc__Goal_24, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 97 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_28 = (MR_Word) ll_backend__stack_alloc__SimpleStackAlloc_25;
#line 99 "stack_alloc.m"
    {
#line 99 "stack_alloc.m"
      ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(ll_backend__stack_alloc__Globals_11, ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
#line 100 "stack_alloc.m"
    {
#line 100 "stack_alloc.m"
      ll_backend__trace_gen__trace_reserved_slots_6_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__NumReservedSlots_29, &ll_backend__stack_alloc__MaybeReservedVarInfo_30);
    }
#line 106 "stack_alloc.m"
    if ((ll_backend__stack_alloc__MaybeReservedVarInfo_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_34 = ll_backend__stack_alloc__LiveSets0_28;
#line 106 "stack_alloc.m"
    else
#line 103 "stack_alloc.m"
      {
#line 103 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__ResVar_31;
#line 103 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__ResVarSet_33;
#line 103 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_30, (MR_Integer) 0)));
#line 103 "stack_alloc.m"
        MR_Integer ll_backend__stack_alloc__V_32_32;

#line 103 "stack_alloc.m"
        ll_backend__stack_alloc__ResVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_48_48, (MR_Integer) 0)));
#line 103 "stack_alloc.m"
        ll_backend__stack_alloc__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_48_48, (MR_Integer) 1)));
#line 104 "stack_alloc.m"
        {
#line 104 "stack_alloc.m"
          ll_backend__stack_alloc__ResVarSet_33 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__stack_alloc__TypeCtorInfo_52_52, ll_backend__stack_alloc__ResVar_31);
        }
#line 105 "stack_alloc.m"
        {
#line 105 "stack_alloc.m"
          mercury__set__insert_3_p_0(ll_backend__stack_alloc__TypeInfo_53_53, ((MR_Box) (ll_backend__stack_alloc__ResVarSet_33)), ll_backend__stack_alloc__LiveSets0_28, &ll_backend__stack_alloc__LiveSets_34);
        }
#line 103 "stack_alloc.m"
      }
#line 110 "stack_alloc.m"
    {
#line 110 "stack_alloc.m"
      parse_tree__set_of_var__graph_colour_group_elements_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_52_52, ll_backend__stack_alloc__LiveSets_34, &ll_backend__stack_alloc__ColourSets_35);
    }
#line 111 "stack_alloc.m"
    {
#line 111 "stack_alloc.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_alloc__TypeInfo_53_53, ll_backend__stack_alloc__ColourSets_35, &ll_backend__stack_alloc__ColourList_36);
    }
#line 113 "stack_alloc.m"
    {
#line 113 "stack_alloc.m"
      ll_backend__stack_alloc__CodeModel_37 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
#line 114 "stack_alloc.m"
    {
#line 114 "stack_alloc.m"
      ll_backend__stack_alloc__MainStack_38 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__stack_alloc__CodeModel_37);
    }
#line 221 "stack_alloc.m"
    ll_backend__stack_alloc__FirstVarSlot_62 = (ll_backend__stack_alloc__NumReservedSlots_29 + (MR_Integer) 1);
#line 223 "stack_alloc.m"
    {
#line 223 "stack_alloc.m"
      ll_backend__stack_alloc__V_64_64 = mercury__map__init_0_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0);
    }
#line 222 "stack_alloc.m"
    {
#line 222 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(ll_backend__stack_alloc__ColourList_36, ll_backend__stack_alloc__Globals_11, ll_backend__stack_alloc__MainStack_38, ll_backend__stack_alloc__VarTypes_17, ll_backend__stack_alloc__MaybeReservedVarInfo_30, ll_backend__stack_alloc__FirstVarSlot_62, ll_backend__stack_alloc__V_64_64, &ll_backend__stack_alloc__StackSlots1_39);
    }
#line 117 "stack_alloc.m"
    {
#line 117 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(ll_backend__stack_alloc__DummyVars_19, ll_backend__stack_alloc__MainStack_38, (MR_Integer) -1, ll_backend__stack_alloc__StackSlots1_39, &ll_backend__stack_alloc__StackSlots_40);
    }
#line 119 "stack_alloc.m"
    {
#line 119 "stack_alloc.m"
      hlds__hlds_pred__proc_info_set_stack_slots_3_p_0(ll_backend__stack_alloc__StackSlots_40, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_42);
#line 119 "stack_alloc.m"
      return;
    }
#line 69 "stack_alloc.m"
  }
#line 33 "stack_alloc.m"
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
