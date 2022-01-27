/*
** Automatically generated from `stack_alloc.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
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




#line 157 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0;

#line 160 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 169 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "ll_backend.stack_alloc.c"
static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1];

#line 175 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "ll_backend.stack_alloc.c"
static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0;

#line 184 "ll_backend.stack_alloc.c"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
#line 187 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 189 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2);

#line 192 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
#line 195 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
#line 197 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 199 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3);

#line 202 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 205 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 207 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 209 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 211 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 213 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 216 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 219 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 223 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 225 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 227 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 230 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 233 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 235 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 237 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 239 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 241 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 244 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 247 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 249 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 251 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 253 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 255 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 308 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__308__1_2_p_0(
#line 308 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 308 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_29);

#line 186 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
#line 186 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 186 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 186 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 186 "stack_alloc.m"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3);

#line 136 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 136 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 136 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 202 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 135 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 135 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 135 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 202 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 134 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 134 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 134 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 202 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 133 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 133 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 133 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 125 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
#line 125 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
#line 125 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 125 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3);

#line 125 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
#line 125 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 125 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2);

#line 349 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
#line 349 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 349 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_2,
#line 349 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_3,
#line 349 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
#line 349 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5);

#line 330 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(
#line 330 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 330 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 330 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
#line 330 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4);

#line 308 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1(
#line 308 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg);

#line 298 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Vars_9,
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_10,
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_12,
#line 298 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_N_0_20,
#line 298 "stack_alloc.m"
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_N_21,
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
#line 298 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);

#line 293 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
#line 293 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 293 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4);

#line 308 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_2(
#line 308 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg);

#line 234 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1(
#line 234 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 234 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 226 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Globals_2,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_3,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_4,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_5,
#line 226 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_6,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7,
#line 226 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8);

#line 204 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
#line 204 "stack_alloc.m"
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
#line 204 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4);

#line 202 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 188 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
#line 188 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__AllocData_5,
#line 188 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Set0_6,
#line 188 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
#line 188 "stack_alloc.m"
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



#line 595 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

#line 603 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 611 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 619 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 628 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 636 "ll_backend.stack_alloc.c"
static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1] = {
  (MR_Integer) 0
};

#line 641 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 649 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_alloc__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 657 "ll_backend.stack_alloc.c"
static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 = {
  (MR_String) "stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  NULL
};

#line 664 "ll_backend.stack_alloc.c"
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

#line 681 "ll_backend.stack_alloc.c"
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

#line 694 "ll_backend.stack_alloc.c"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
#line 697 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 699 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2)
#line 701 "ll_backend.stack_alloc.c"
{
#line 703 "ll_backend.stack_alloc.c"
  {
#line 705 "ll_backend.stack_alloc.c"
    MR_bool ll_backend__stack_alloc__succeeded;

#line 708 "ll_backend.stack_alloc.c"
    {
#line 710 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc____Unify____stack_alloc_0_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2));
    }
#line 713 "ll_backend.stack_alloc.c"
    return ll_backend__stack_alloc__succeeded;
#line 715 "ll_backend.stack_alloc.c"
  }
#line 717 "ll_backend.stack_alloc.c"
}

#line 720 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
#line 723 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
#line 725 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 727 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3)
#line 729 "ll_backend.stack_alloc.c"
{
#line 731 "ll_backend.stack_alloc.c"
  {
#line 733 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__1_1;

#line 736 "ll_backend.stack_alloc.c"
    {
#line 738 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc____Compare____stack_alloc_0_0(&ll_backend__stack_alloc__conv0_HeadVar__1_1, ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3));
    }
#line 741 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_1 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__1_1));
#line 743 "ll_backend.stack_alloc.c"
  }
#line 745 "ll_backend.stack_alloc.c"
}

#line 748 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 751 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 753 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 755 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 757 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 759 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 761 "ll_backend.stack_alloc.c"
{
#line 763 "ll_backend.stack_alloc.c"
  {
#line 765 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 767 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 770 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 772 "ll_backend.stack_alloc.c"
    {
#line 774 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 777 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 779 "ll_backend.stack_alloc.c"
  }
#line 781 "ll_backend.stack_alloc.c"
}

#line 784 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 787 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 789 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 791 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 793 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 795 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 797 "ll_backend.stack_alloc.c"
{
#line 799 "ll_backend.stack_alloc.c"
  {
#line 801 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 803 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 806 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 808 "ll_backend.stack_alloc.c"
    {
#line 810 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 813 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 815 "ll_backend.stack_alloc.c"
  }
#line 817 "ll_backend.stack_alloc.c"
}

#line 820 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 823 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 825 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 827 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 829 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 831 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 833 "ll_backend.stack_alloc.c"
{
#line 835 "ll_backend.stack_alloc.c"
  {
#line 837 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 839 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 842 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 844 "ll_backend.stack_alloc.c"
    {
#line 846 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 849 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 851 "ll_backend.stack_alloc.c"
  }
#line 853 "ll_backend.stack_alloc.c"
}

#line 856 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 859 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 861 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 863 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 865 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 867 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4)
#line 869 "ll_backend.stack_alloc.c"
{
#line 871 "ll_backend.stack_alloc.c"
  {
#line 873 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__closure;
#line 875 "ll_backend.stack_alloc.c"
    MR_Word ll_backend__stack_alloc__conv0_HeadVar__4_4;

#line 878 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 880 "ll_backend.stack_alloc.c"
    {
#line 882 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_3), &ll_backend__stack_alloc__conv0_HeadVar__4_4);
    }
#line 885 "ll_backend.stack_alloc.c"
    *ll_backend__stack_alloc__wrapper_arg_4 = ((MR_Box) (ll_backend__stack_alloc__conv0_HeadVar__4_4));
#line 887 "ll_backend.stack_alloc.c"
  }
#line 889 "ll_backend.stack_alloc.c"
}

#line 308 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__308__1_2_p_0(
#line 308 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 308 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_29)
#line 308 "stack_alloc.m"
{
#line 308 "stack_alloc.m"
  {
#line 308 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__StackSlotWidth_11 == ll_backend__stack_alloc__HeadVar__2_29);

#line 308 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 308 "stack_alloc.m"
  }
#line 308 "stack_alloc.m"
}

#line 186 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
#line 186 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 186 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 186 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 186 "stack_alloc.m"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3)
#line 186 "stack_alloc.m"
{
#line 186 "stack_alloc.m"
  {
#line 186 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 186 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12;

#line 186 "stack_alloc.m"
    {
#line 186 "stack_alloc.m"
      ll_backend__stack_alloc__set_for_loop_control_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), &ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12);
    }
#line 186 "stack_alloc.m"
    *ll_backend__stack_alloc__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12));
#line 186 "stack_alloc.m"
  }
#line 186 "stack_alloc.m"
}

#line 136 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
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
#line 184 "stack_alloc.m"
  {
#line 184 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 184 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVarsSets_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 184 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_11_11;
#line 186 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv1_HeadVar__4_4;

#line 186 "stack_alloc.m"
    {
#line 186 "stack_alloc.m"
      ll_backend__stack_alloc__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 186 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_4[0]));
#line 186 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1));
#line 186 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 186 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 3) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
#line 186 "stack_alloc.m"
    }
#line 186 "stack_alloc.m"
    {
#line 186 "stack_alloc.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], (MR_Word) &ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0, ll_backend__stack_alloc__V_11_11, ll_backend__stack_alloc__StackVarsSets_10, ((MR_Box) (ll_backend__stack_alloc__HeadVar__3_3)), &ll_backend__stack_alloc__conv1_HeadVar__4_4);
    }
#line 186 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = ((MR_Word) ll_backend__stack_alloc__conv1_HeadVar__4_4);
#line 184 "stack_alloc.m"
  }
#line 136 "stack_alloc.m"
}

#line 202 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 202 "stack_alloc.m"
{
#line 202 "stack_alloc.m"
  {
#line 202 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 202 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 202 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 202 "stack_alloc.m"
  }
#line 202 "stack_alloc.m"
}

#line 135 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
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
#line 173 "stack_alloc.m"
  {
#line 173 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 173 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVars0_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 173 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVars_11;
#line 173 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_12;
#line 173 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_13;
#line 173 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 173 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_20_20;
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));

#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      ll_backend__stack_alloc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_19));
#line 202 "stack_alloc.m"
    }
#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_20_20, ll_backend__stack_alloc__StackVars0_10, &ll_backend__stack_alloc__StackVars_11);
    }
#line 177 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_12 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 178 "stack_alloc.m"
    {
#line 178 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_13 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_12, ((MR_Box) (ll_backend__stack_alloc__StackVars_11)));
    }
#line 179 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_13;
#line 173 "stack_alloc.m"
  }
#line 135 "stack_alloc.m"
}

#line 202 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 202 "stack_alloc.m"
{
#line 202 "stack_alloc.m"
  {
#line 202 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 202 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 202 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 202 "stack_alloc.m"
  }
#line 202 "stack_alloc.m"
}

#line 134 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
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
#line 156 "stack_alloc.m"
  {
#line 156 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 156 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeOnStack_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));

#line 160 "stack_alloc.m"
#line 160 "stack_alloc.m"
    switch (ll_backend__stack_alloc__ResumeOnStack_10) {
#line 160 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 160 "stack_alloc.m"
      case (MR_Integer) 0:
#line 159 "stack_alloc.m"
        *ll_backend__stack_alloc__HeadVar__4_4 = ll_backend__stack_alloc__HeadVar__3_3;
#line 160 "stack_alloc.m"
        break;
#line 160 "stack_alloc.m"
      case (MR_Integer) 1:
#line 161 "stack_alloc.m"
        {
#line 161 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSet0_13;
#line 161 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSet_14;
#line 161 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSets0_15;
#line 161 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__LiveSets_16;
#line 161 "stack_alloc.m"
          MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_23;
#line 161 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_24_24;
#line 201 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_25_25;
#line 201 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_26_26;
#line 201 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_27_27;
#line 201 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_28_28;
#line 201 "stack_alloc.m"
          MR_Word ll_backend__stack_alloc__V_29_29;

#line 162 "stack_alloc.m"
          {
#line 162 "stack_alloc.m"
            ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__ResumeVars_11, ll_backend__stack_alloc__NondetLiveVars_12);
          }
#line 201 "stack_alloc.m"
          ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "stack_alloc.m"
          ll_backend__stack_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "stack_alloc.m"
          ll_backend__stack_alloc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 201 "stack_alloc.m"
          ll_backend__stack_alloc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 201 "stack_alloc.m"
          ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
#line 201 "stack_alloc.m"
          ll_backend__stack_alloc__DummyVarArray_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 202 "stack_alloc.m"
          {
#line 202 "stack_alloc.m"
            ll_backend__stack_alloc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 202 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1));
#line 202 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 202 "stack_alloc.m"
            MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_23));
#line 202 "stack_alloc.m"
          }
#line 202 "stack_alloc.m"
          {
#line 202 "stack_alloc.m"
            parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_24_24, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
          }
#line 165 "stack_alloc.m"
          ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 166 "stack_alloc.m"
          {
#line 166 "stack_alloc.m"
            ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
          }
#line 167 "stack_alloc.m"
          *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
#line 161 "stack_alloc.m"
        }
#line 160 "stack_alloc.m"
        break;
#line 160 "stack_alloc.m"
    }
#line 156 "stack_alloc.m"
  }
#line 134 "stack_alloc.m"
}

#line 202 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 202 "stack_alloc.m"
{
#line 202 "stack_alloc.m"
  {
#line 202 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 202 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 202 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 202 "stack_alloc.m"
  }
#line 202 "stack_alloc.m"
}

#line 133 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
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
#line 143 "stack_alloc.m"
  {
#line 143 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ForwardVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSet0_13;
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSet_14;
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_15;
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_16;
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_17_17;
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_18_18;
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_19_19;
#line 143 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_27;
#line 143 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_28_28;
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_29_29;
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_30_30;
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_31_31;
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_32_32;
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_33_33;

#line 146 "stack_alloc.m"
    {
#line 146 "stack_alloc.m"
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (ll_backend__stack_alloc__NondetLiveVars_12));
#line 146 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 146 "stack_alloc.m"
    }
#line 145 "stack_alloc.m"
    {
#line 145 "stack_alloc.m"
      ll_backend__stack_alloc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 0) = ((MR_Box) (ll_backend__stack_alloc__ResumeVars_11));
#line 145 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 1) = ((MR_Box) (ll_backend__stack_alloc__V_19_19));
#line 145 "stack_alloc.m"
    }
#line 145 "stack_alloc.m"
    {
#line 145 "stack_alloc.m"
      ll_backend__stack_alloc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 0) = ((MR_Box) (ll_backend__stack_alloc__ForwardVars_10));
#line 145 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 1) = ((MR_Box) (ll_backend__stack_alloc__V_18_18));
#line 145 "stack_alloc.m"
    }
#line 145 "stack_alloc.m"
    {
#line 145 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_17_17);
    }
#line 201 "stack_alloc.m"
    ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "stack_alloc.m"
    ll_backend__stack_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "stack_alloc.m"
    ll_backend__stack_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 201 "stack_alloc.m"
    ll_backend__stack_alloc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 201 "stack_alloc.m"
    ll_backend__stack_alloc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
#line 201 "stack_alloc.m"
    ll_backend__stack_alloc__DummyVarArray_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      ll_backend__stack_alloc__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_27));
#line 202 "stack_alloc.m"
    }
#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_28_28, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
    }
#line 149 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 150 "stack_alloc.m"
    {
#line 150 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
    }
#line 151 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
#line 143 "stack_alloc.m"
  }
#line 133 "stack_alloc.m"
}

#line 125 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
#line 125 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
#line 125 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 125 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3)
#line 125 "stack_alloc.m"
{
#line 125 "stack_alloc.m"
  {
#line 125 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 125 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastX_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;
#line 125 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastY_7 = (MR_Integer) ll_backend__stack_alloc__HeadVar__3_3;

#line 125 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_6 == ll_backend__stack_alloc__CastY_7);
#line 125 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 1426 "ll_backend.stack_alloc.c"
      *ll_backend__stack_alloc__HeadVar__1_1 = (MR_Integer) 0;
#line 125 "stack_alloc.m"
    else
#line 125 "stack_alloc.m"
      {
#line 125 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;
#line 125 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_5_5 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;

#line 125 "stack_alloc.m"
        {
#line 125 "stack_alloc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ll_backend__stack_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__stack_alloc__V_4_4)), ((MR_Box) (ll_backend__stack_alloc__V_5_5)));
#line 125 "stack_alloc.m"
          return;
        }
#line 125 "stack_alloc.m"
      }
#line 125 "stack_alloc.m"
  }
#line 125 "stack_alloc.m"
}

#line 125 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
#line 125 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 125 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2)
#line 125 "stack_alloc.m"
{
#line 125 "stack_alloc.m"
  {
#line 125 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 125 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastX_5 = (MR_Integer) ll_backend__stack_alloc__HeadVar__1_1;
#line 125 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastY_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;

#line 125 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_5 == ll_backend__stack_alloc__CastY_6);
#line 125 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 125 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = MR_TRUE;
#line 125 "stack_alloc.m"
    else
#line 125 "stack_alloc.m"
      {
#line 125 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_3_3 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 125 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;

#line 1484 "ll_backend.stack_alloc.c"
        {
#line 1486 "ll_backend.stack_alloc.c"
          return ll_backend__stack_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ((MR_Box) (ll_backend__stack_alloc__V_3_3)), ((MR_Box) (ll_backend__stack_alloc__V_4_4)));
        }
#line 125 "stack_alloc.m"
      }
#line 125 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 125 "stack_alloc.m"
  }
#line 125 "stack_alloc.m"
}

#line 349 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
#line 349 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 349 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_2,
#line 349 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_3,
#line 349 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
#line 349 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5)
#line 349 "stack_alloc.m"
{
#line 352 "stack_alloc.m"
  while (MR_TRUE)
#line 352 "stack_alloc.m"
    {
#line 352 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 352 "stack_alloc.m"
      {
#line 352 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 352 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4;
#line 352 "stack_alloc.m"
        else
#line 353 "stack_alloc.m"
          {
#line 353 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 353 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Locn_16;
#line 353 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21;
#line 353 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__V_23_23;
#line 353 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));

#line 357 "stack_alloc.m"
#line 357 "stack_alloc.m"
            switch (ll_backend__stack_alloc__MainStack_2) {
#line 357 "stack_alloc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "stack_alloc.m"
              case (MR_Integer) 0:
#line 355 "stack_alloc.m"
                {
#line 356 "stack_alloc.m"
                  {
#line 356 "stack_alloc.m"
                    ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 356 "stack_alloc.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
#line 356 "stack_alloc.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 356 "stack_alloc.m"
                  }
#line 355 "stack_alloc.m"
                }
#line 357 "stack_alloc.m"
                break;
#line 357 "stack_alloc.m"
              case (MR_Integer) 1:
#line 359 "stack_alloc.m"
                {
#line 359 "stack_alloc.m"
                  ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "stack_alloc.m"
                  MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
#line 359 "stack_alloc.m"
                }
#line 357 "stack_alloc.m"
                break;
#line 357 "stack_alloc.m"
            }
#line 335 "stack_alloc.m"
            {
#line 335 "stack_alloc.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_30)), ((MR_Box) (ll_backend__stack_alloc__Locn_16)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21);
            }
#line 362 "stack_alloc.m"
            ll_backend__stack_alloc__V_23_23 = (ll_backend__stack_alloc__N0_3 - (MR_Integer) 1);
#line 362 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 362 "stack_alloc.m"
            {
#line 362 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__Vars_12;
#line 362 "stack_alloc.m"
              MR_Integer ll_backend__stack_alloc__N0__tmp_copy_3 = ll_backend__stack_alloc__V_23_23;
#line 362 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_21_21;

#line 362 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4;
#line 362 "stack_alloc.m"
              ll_backend__stack_alloc__N0_3 = ll_backend__stack_alloc__N0__tmp_copy_3;
#line 362 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 362 "stack_alloc.m"
            }
#line 362 "stack_alloc.m"
            continue;
#line 353 "stack_alloc.m"
          }
#line 352 "stack_alloc.m"
      }
#line 352 "stack_alloc.m"
      break;
#line 352 "stack_alloc.m"
    }
#line 349 "stack_alloc.m"
}

#line 330 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(
#line 330 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 330 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 330 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
#line 330 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4)
#line 330 "stack_alloc.m"
{
#line 333 "stack_alloc.m"
  while (MR_TRUE)
#line 333 "stack_alloc.m"
    {
#line 333 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 333 "stack_alloc.m"
      {
#line 333 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 333 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3;
#line 333 "stack_alloc.m"
        else
#line 334 "stack_alloc.m"
          {
#line 334 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

#line 335 "stack_alloc.m"
            {
#line 335 "stack_alloc.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_9)), ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15);
            }
#line 336 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 336 "stack_alloc.m"
            {
#line 336 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__Vars_10;
#line 336 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

#line 336 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3;
#line 336 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 336 "stack_alloc.m"
            }
#line 336 "stack_alloc.m"
            continue;
#line 334 "stack_alloc.m"
          }
#line 333 "stack_alloc.m"
      }
#line 333 "stack_alloc.m"
      break;
#line 333 "stack_alloc.m"
    }
#line 330 "stack_alloc.m"
}

#line 308 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1(
#line 308 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg)
#line 308 "stack_alloc.m"
{
#line 308 "stack_alloc.m"
  {
#line 308 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 308 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 308 "stack_alloc.m"
    {
#line 308 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__308__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
#line 308 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 308 "stack_alloc.m"
  }
#line 308 "stack_alloc.m"
}

#line 298 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Vars_9,
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_10,
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_12,
#line 298 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_N_0_20,
#line 298 "stack_alloc.m"
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_N_21,
#line 298 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
#line 298 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23)
#line 298 "stack_alloc.m"
{
#line 303 "stack_alloc.m"
  {
#line 303 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_12)) == (MR_mktag((MR_Integer) 1)));
#line 303 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__SlotNum_17;
#line 303 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Locn_18;
#line 303 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__VarList_19;
#line 311 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__ResSlotNum_16;
#line 305 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_32_32;
#line 305 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResVar_15;
#line 305 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24;

#line 305 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 305 "stack_alloc.m"
      {
#line 305 "stack_alloc.m"
        ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_12, (MR_Integer) 0)));
#line 305 "stack_alloc.m"
        ll_backend__stack_alloc__ResVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 0)));
#line 305 "stack_alloc.m"
        ll_backend__stack_alloc__ResSlotNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 1)));
#line 1767 "ll_backend.stack_alloc.c"
        ll_backend__stack_alloc__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 306 "stack_alloc.m"
        {
#line 306 "stack_alloc.m"
          ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_32_32, ll_backend__stack_alloc__Vars_9, ll_backend__stack_alloc__ResVar_15);
        }
#line 305 "stack_alloc.m"
      }
#line 311 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 309 "stack_alloc.m"
      {
#line 309 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_25_25;

#line 308 "stack_alloc.m"
        {
#line 308 "stack_alloc.m"
          ll_backend__stack_alloc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 308 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[2]));
#line 308 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1));
#line 308 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 308 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 3) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_11));
#line 308 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 4) = ((MR_Box) ((MR_Integer) 0));
#line 308 "stack_alloc.m"
        }
#line 308 "stack_alloc.m"
        {
#line 308 "stack_alloc.m"
          mercury__require__expect_4_p_0(ll_backend__stack_alloc__V_25_25, (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_stack_slots_3\'/8", (MR_String) "reserved multiple stack slots");
        }
#line 310 "stack_alloc.m"
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__ResSlotNum_16;
#line 309 "stack_alloc.m"
        *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = ll_backend__stack_alloc__STATE_VARIABLE_N_0_20;
#line 309 "stack_alloc.m"
      }
#line 311 "stack_alloc.m"
    else
#line 312 "stack_alloc.m"
      {
#line 312 "stack_alloc.m"
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__STATE_VARIABLE_N_0_20;
#line 327 "stack_alloc.m"
#line 327 "stack_alloc.m"
        switch (ll_backend__stack_alloc__StackSlotWidth_11) {
#line 327 "stack_alloc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 327 "stack_alloc.m"
          case (MR_Integer) 1:
#line 328 "stack_alloc.m"
            {
#line 328 "stack_alloc.m"
              *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = (ll_backend__stack_alloc__STATE_VARIABLE_N_0_20 + (MR_Integer) 2);
#line 328 "stack_alloc.m"
            }
#line 327 "stack_alloc.m"
            break;
#line 327 "stack_alloc.m"
          case (MR_Integer) 0:
#line 327 "stack_alloc.m"
            {
#line 327 "stack_alloc.m"
              *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = (ll_backend__stack_alloc__STATE_VARIABLE_N_0_20 + (MR_Integer) 1);
#line 327 "stack_alloc.m"
            }
#line 327 "stack_alloc.m"
            break;
#line 327 "stack_alloc.m"
        }
#line 312 "stack_alloc.m"
      }
#line 318 "stack_alloc.m"
#line 318 "stack_alloc.m"
    switch (ll_backend__stack_alloc__MainStack_10) {
#line 318 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 318 "stack_alloc.m"
      case (MR_Integer) 0:
#line 317 "stack_alloc.m"
        {
#line 317 "stack_alloc.m"
          ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
#line 317 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 1) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_11));
#line 317 "stack_alloc.m"
        }
#line 318 "stack_alloc.m"
        break;
#line 318 "stack_alloc.m"
      case (MR_Integer) 1:
#line 320 "stack_alloc.m"
        {
#line 320 "stack_alloc.m"
          ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "stack_alloc.m"
          MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
#line 320 "stack_alloc.m"
        }
#line 318 "stack_alloc.m"
        break;
#line 318 "stack_alloc.m"
    }
#line 322 "stack_alloc.m"
    {
#line 322 "stack_alloc.m"
      ll_backend__stack_alloc__VarList_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__Vars_9);
    }
#line 323 "stack_alloc.m"
    {
#line 323 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(ll_backend__stack_alloc__VarList_19, ll_backend__stack_alloc__Locn_18, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);
#line 323 "stack_alloc.m"
      return;
    }
#line 303 "stack_alloc.m"
  }
#line 298 "stack_alloc.m"
}

#line 293 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
#line 293 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 293 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4)
#line 293 "stack_alloc.m"
{
#line 295 "stack_alloc.m"
  {
#line 295 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 295 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_5_5;
#line 295 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_6_6;

#line 296 "stack_alloc.m"
    {
#line 296 "stack_alloc.m"
      ll_backend__stack_alloc__V_5_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 296 "stack_alloc.m"
    {
#line 296 "stack_alloc.m"
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__stack_alloc__VarTypes_3, ll_backend__stack_alloc__Var_4, &ll_backend__stack_alloc__V_6_6);
    }
#line 296 "stack_alloc.m"
    {
#line 296 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__stack_alloc__V_5_5, ll_backend__stack_alloc__V_6_6);
    }
#line 295 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 295 "stack_alloc.m"
  }
#line 293 "stack_alloc.m"
}

#line 308 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_2(
#line 308 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg)
#line 308 "stack_alloc.m"
{
#line 308 "stack_alloc.m"
  {
#line 308 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 308 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 308 "stack_alloc.m"
    {
#line 308 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__308__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
#line 308 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 308 "stack_alloc.m"
  }
#line 308 "stack_alloc.m"
}

#line 234 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1(
#line 234 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 234 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 234 "stack_alloc.m"
{
#line 234 "stack_alloc.m"
  {
#line 234 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 234 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 234 "stack_alloc.m"
    {
#line 234 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_float_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 234 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 234 "stack_alloc.m"
  }
#line 234 "stack_alloc.m"
}

#line 226 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Globals_2,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_3,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_4,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_5,
#line 226 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_6,
#line 226 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7,
#line 226 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8)
#line 226 "stack_alloc.m"
{
#line 230 "stack_alloc.m"
  while (MR_TRUE)
#line 230 "stack_alloc.m"
    {
#line 230 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 230 "stack_alloc.m"
      {
#line 230 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 230 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7;
#line 230 "stack_alloc.m"
        else
#line 232 "stack_alloc.m"
          {
#line 232 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 232 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__VarSets_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 232 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__DoubleWidthVars_25;
#line 232 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__SingleWidthVars_26;
#line 232 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__N1_27;
#line 232 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__N_29;
#line 232 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35;
#line 232 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_37_37;
#line 272 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__V_47_47;
#line 272 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__V_48_48;

#line 268 "stack_alloc.m"
            ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__MainStack_3 == (MR_Integer) 0);
#line 272 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 272 "stack_alloc.m"
              {
#line 269 "stack_alloc.m"
                ll_backend__stack_alloc__V_47_47 = (MR_Integer) 1;
#line 269 "stack_alloc.m"
                {
#line 269 "stack_alloc.m"
                  libs__globals__double_width_floats_on_det_stack_2_p_0(ll_backend__stack_alloc__Globals_2, &ll_backend__stack_alloc__V_48_48);
                }
#line 269 "stack_alloc.m"
                ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__V_47_47 == ll_backend__stack_alloc__V_48_48);
#line 272 "stack_alloc.m"
              }
#line 236 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 234 "stack_alloc.m"
              {
#line 234 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__V_33_33;

#line 234 "stack_alloc.m"
                {
#line 234 "stack_alloc.m"
                  ll_backend__stack_alloc__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 234 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_33_33, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[1]));
#line 234 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_33_33, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1));
#line 234 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 234 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_33_33, 3) = ((MR_Box) (ll_backend__stack_alloc__VarTypes_4));
#line 234 "stack_alloc.m"
                }
#line 234 "stack_alloc.m"
                {
#line 234 "stack_alloc.m"
                  parse_tree__set_of_var__divide_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_33_33, ll_backend__stack_alloc__Vars_17, &ll_backend__stack_alloc__DoubleWidthVars_25, &ll_backend__stack_alloc__SingleWidthVars_26);
                }
#line 234 "stack_alloc.m"
              }
#line 236 "stack_alloc.m"
            else
#line 237 "stack_alloc.m"
              {
#line 237 "stack_alloc.m"
                ll_backend__stack_alloc__SingleWidthVars_26 = ll_backend__stack_alloc__Vars_17;
#line 238 "stack_alloc.m"
                {
#line 238 "stack_alloc.m"
                  ll_backend__stack_alloc__DoubleWidthVars_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                }
#line 237 "stack_alloc.m"
              }
#line 240 "stack_alloc.m"
            {
#line 240 "stack_alloc.m"
              ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__SingleWidthVars_26);
            }
#line 243 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 241 "stack_alloc.m"
              {
#line 241 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__SlotNum_61;
#line 241 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__Locn_62;
#line 241 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__VarList_63;
#line 311 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__ResSlotNum_60;
#line 305 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__TypeCtorInfo_32_72;
#line 305 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__ResVar_59;
#line 305 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__V_64_64;

#line 305 "stack_alloc.m"
                ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 305 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 305 "stack_alloc.m"
                  {
#line 305 "stack_alloc.m"
                    ll_backend__stack_alloc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_5, (MR_Integer) 0)));
#line 305 "stack_alloc.m"
                    ll_backend__stack_alloc__ResVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_64_64, (MR_Integer) 0)));
#line 305 "stack_alloc.m"
                    ll_backend__stack_alloc__ResSlotNum_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_64_64, (MR_Integer) 1)));
#line 2144 "ll_backend.stack_alloc.c"
                    ll_backend__stack_alloc__TypeCtorInfo_32_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 306 "stack_alloc.m"
                    {
#line 306 "stack_alloc.m"
                      ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_32_72, ll_backend__stack_alloc__SingleWidthVars_26, ll_backend__stack_alloc__ResVar_59);
                    }
#line 305 "stack_alloc.m"
                  }
#line 311 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 309 "stack_alloc.m"
                  {
#line 308 "stack_alloc.m"
                    {
#line 308 "stack_alloc.m"
                      mercury__require__expect_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_3[3], (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_stack_slots_3\'/8", (MR_String) "reserved multiple stack slots");
                    }
#line 310 "stack_alloc.m"
                    ll_backend__stack_alloc__SlotNum_61 = ll_backend__stack_alloc__ResSlotNum_60;
#line 309 "stack_alloc.m"
                    ll_backend__stack_alloc__N1_27 = ll_backend__stack_alloc__N0_6;
#line 309 "stack_alloc.m"
                  }
#line 311 "stack_alloc.m"
                else
#line 312 "stack_alloc.m"
                  {
#line 312 "stack_alloc.m"
                    ll_backend__stack_alloc__SlotNum_61 = ll_backend__stack_alloc__N0_6;
#line 327 "stack_alloc.m"
                    ll_backend__stack_alloc__N1_27 = (ll_backend__stack_alloc__N0_6 + (MR_Integer) 1);
#line 312 "stack_alloc.m"
                  }
#line 318 "stack_alloc.m"
#line 318 "stack_alloc.m"
                switch (ll_backend__stack_alloc__MainStack_3) {
#line 318 "stack_alloc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 318 "stack_alloc.m"
                  case (MR_Integer) 0:
#line 317 "stack_alloc.m"
                    {
#line 317 "stack_alloc.m"
                      ll_backend__stack_alloc__Locn_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "stack_alloc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_62, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_61));
#line 317 "stack_alloc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_62, 1) = ((MR_Box) ((MR_Integer) 0));
#line 317 "stack_alloc.m"
                    }
#line 318 "stack_alloc.m"
                    break;
#line 318 "stack_alloc.m"
                  case (MR_Integer) 1:
#line 320 "stack_alloc.m"
                    {
#line 320 "stack_alloc.m"
                      ll_backend__stack_alloc__Locn_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "stack_alloc.m"
                      MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_62, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_61));
#line 320 "stack_alloc.m"
                    }
#line 318 "stack_alloc.m"
                    break;
#line 318 "stack_alloc.m"
                }
#line 322 "stack_alloc.m"
                {
#line 322 "stack_alloc.m"
                  ll_backend__stack_alloc__VarList_63 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__SingleWidthVars_26);
                }
#line 323 "stack_alloc.m"
                {
#line 323 "stack_alloc.m"
                  ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(ll_backend__stack_alloc__VarList_63, ll_backend__stack_alloc__Locn_62, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35);
                }
#line 241 "stack_alloc.m"
              }
#line 243 "stack_alloc.m"
            else
#line 244 "stack_alloc.m"
              {
#line 244 "stack_alloc.m"
                ll_backend__stack_alloc__N1_27 = ll_backend__stack_alloc__N0_6;
#line 244 "stack_alloc.m"
                ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7;
#line 244 "stack_alloc.m"
              }
#line 246 "stack_alloc.m"
            {
#line 246 "stack_alloc.m"
              ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__DoubleWidthVars_25);
            }
#line 254 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 251 "stack_alloc.m"
              {
#line 251 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__N2_28;

#line 287 "stack_alloc.m"
                {
#line 287 "stack_alloc.m"
                  ll_backend__stack_alloc__succeeded = mercury__int__even_1_p_0(ll_backend__stack_alloc__N1_27);
                }
#line 289 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 288 "stack_alloc.m"
                  ll_backend__stack_alloc__N2_28 = ll_backend__stack_alloc__N1_27;
#line 289 "stack_alloc.m"
                else
#line 290 "stack_alloc.m"
                  {
#line 290 "stack_alloc.m"
                    ll_backend__stack_alloc__N2_28 = (ll_backend__stack_alloc__N1_27 + (MR_Integer) 1);
#line 290 "stack_alloc.m"
                  }
#line 252 "stack_alloc.m"
                {
#line 252 "stack_alloc.m"
                  ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(ll_backend__stack_alloc__DoubleWidthVars_25, ll_backend__stack_alloc__MainStack_3, (MR_Integer) 1, ll_backend__stack_alloc__MaybeReservedVarInfo_5, ll_backend__stack_alloc__N2_28, &ll_backend__stack_alloc__N_29, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_37_37);
                }
#line 251 "stack_alloc.m"
              }
#line 254 "stack_alloc.m"
            else
#line 255 "stack_alloc.m"
              {
#line 255 "stack_alloc.m"
                ll_backend__stack_alloc__N_29 = ll_backend__stack_alloc__N1_27;
#line 255 "stack_alloc.m"
                ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_37_37 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35;
#line 255 "stack_alloc.m"
              }
#line 257 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 257 "stack_alloc.m"
            {
#line 257 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__VarSets_18;
#line 257 "stack_alloc.m"
              MR_Integer ll_backend__stack_alloc__N0__tmp_copy_6 = ll_backend__stack_alloc__N_29;
#line 257 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_7 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_37_37;

#line 257 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_7;
#line 257 "stack_alloc.m"
              ll_backend__stack_alloc__N0_6 = ll_backend__stack_alloc__N0__tmp_copy_6;
#line 257 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 257 "stack_alloc.m"
            }
#line 257 "stack_alloc.m"
            continue;
#line 232 "stack_alloc.m"
          }
#line 230 "stack_alloc.m"
      }
#line 230 "stack_alloc.m"
      break;
#line 230 "stack_alloc.m"
    }
#line 226 "stack_alloc.m"
}

#line 204 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
#line 204 "stack_alloc.m"
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
#line 204 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4)
#line 204 "stack_alloc.m"
{
#line 206 "stack_alloc.m"
  {
#line 206 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 206 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeClassInfo_for_enum_7 = (MR_Word) &ll_backend__stack_alloc_scalar_common_2[0];
#line 206 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__VarNum_5;
#line 206 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__IsDummy_6;
#line 2330 "ll_backend.stack_alloc.c"
    MR_Box MR_CALL (* ll_backend__stack_alloc__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__TypeClassInfo_for_enum_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2332 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__conv1_VarNum_5;
#line 208 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv2_IsDummy_6;

#line 2337 "ll_backend.stack_alloc.c"
    {
#line 2339 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__conv1_VarNum_5 = ll_backend__stack_alloc__func_0(((MR_Box) ll_backend__stack_alloc__TypeClassInfo_for_enum_7), ((MR_Box) (ll_backend__stack_alloc__Var_4)));
    }
#line 2342 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__VarNum_5 = ((MR_Integer) ll_backend__stack_alloc__conv1_VarNum_5);
#line 208 "stack_alloc.m"
    {
#line 208 "stack_alloc.m"
      mercury__array__lookup_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_ArrayPtr) ll_backend__stack_alloc__DummyVarArray_3, ll_backend__stack_alloc__VarNum_5, &ll_backend__stack_alloc__conv2_IsDummy_6);
    }
#line 208 "stack_alloc.m"
    ll_backend__stack_alloc__IsDummy_6 = ((MR_Word) ll_backend__stack_alloc__conv2_IsDummy_6);
#line 209 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__IsDummy_6 == (MR_Integer) 1);
#line 206 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 206 "stack_alloc.m"
  }
#line 204 "stack_alloc.m"
}

#line 202 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 202 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 202 "stack_alloc.m"
{
#line 202 "stack_alloc.m"
  {
#line 202 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 202 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 202 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 202 "stack_alloc.m"
  }
#line 202 "stack_alloc.m"
}

#line 188 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
#line 188 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__AllocData_5,
#line 188 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Set0_6,
#line 188 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
#line 188 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12)
#line 188 "stack_alloc.m"
{
#line 191 "stack_alloc.m"
  {
#line 191 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 191 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_8 = (MR_Word) ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11;
#line 191 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Set_9;
#line 191 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_10;
#line 191 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 5)));
#line 191 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_19_19;
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 0)));
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 1)));
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 2)));
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 3)));
#line 201 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 4)));

#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (ll_backend__stack_alloc__set_for_loop_control_4_p_0_1));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 202 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_18));
#line 202 "stack_alloc.m"
    }
#line 202 "stack_alloc.m"
    {
#line 202 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_19_19, ll_backend__stack_alloc__Set0_6, &ll_backend__stack_alloc__Set_9);
    }
#line 194 "stack_alloc.m"
    {
#line 194 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_10 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__LiveSets0_8, ((MR_Box) (ll_backend__stack_alloc__Set_9)));
    }
#line 195 "stack_alloc.m"
    *ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12 = (MR_Word) ll_backend__stack_alloc__LiveSets_10;
#line 191 "stack_alloc.m"
  }
#line 188 "stack_alloc.m"
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
#line 70 "stack_alloc.m"
  {
#line 70 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_52_52;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeInfo_53_53;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Liveness0_9;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__PredInfo_10;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Globals_11;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TraceLevel_12;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NeedFailVars_13;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__FailVars_14;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeInfoLiveness_15;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__OptNoReturnCalls_16;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__VarTypes_17;
#line 70 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyTypeArray_18;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__DummyVars_19;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__AllocData_20;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveness0_21;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc0_22;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Goal0_23;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Goal_24;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc_25;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_28;
#line 70 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__NumReservedSlots_29;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_30;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_34;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ColourSets_35;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ColourList_36;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__CodeModel_37;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MainStack_38;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackSlots1_39;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackSlots_40;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_45_45;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47;
#line 70 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__FirstVarSlot_62;
#line 70 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_64_64;
#line 70 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc___Liveness_26;
#line 94 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc___NondetLiveness_27;
#line 94 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv0_SimpleStackAlloc_25;

#line 71 "stack_alloc.m"
    {
#line 71 "stack_alloc.m"
      ll_backend__liveness__initial_liveness_4_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, ll_backend__stack_alloc__PredId_6, ll_backend__stack_alloc__ModuleInfo_5, &ll_backend__stack_alloc__Liveness0_9);
    }
#line 72 "stack_alloc.m"
    {
#line 72 "stack_alloc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredId_6, &ll_backend__stack_alloc__PredInfo_10);
    }
#line 73 "stack_alloc.m"
    {
#line 73 "stack_alloc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__stack_alloc__ModuleInfo_5, &ll_backend__stack_alloc__Globals_11);
    }
#line 74 "stack_alloc.m"
    {
#line 74 "stack_alloc.m"
      libs__globals__get_trace_level_2_p_0(ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TraceLevel_12);
    }
#line 75 "stack_alloc.m"
    {
#line 75 "stack_alloc.m"
      ll_backend__stack_alloc__NeedFailVars_13 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, ll_backend__stack_alloc__TraceLevel_12);
    }
#line 80 "stack_alloc.m"
#line 80 "stack_alloc.m"
    switch (ll_backend__stack_alloc__NeedFailVars_13) {
#line 80 "stack_alloc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 80 "stack_alloc.m"
      case (MR_Integer) 0:
#line 81 "stack_alloc.m"
        {
#line 82 "stack_alloc.m"
          {
#line 82 "stack_alloc.m"
            ll_backend__stack_alloc__FailVars_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
#line 81 "stack_alloc.m"
        }
#line 80 "stack_alloc.m"
        break;
#line 80 "stack_alloc.m"
      case (MR_Integer) 1:
#line 79 "stack_alloc.m"
        {
#line 79 "stack_alloc.m"
          ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__FailVars_14);
        }
#line 80 "stack_alloc.m"
        break;
#line 80 "stack_alloc.m"
    }
#line 84 "stack_alloc.m"
    {
#line 84 "stack_alloc.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TypeInfoLiveness_15);
    }
#line 85 "stack_alloc.m"
    {
#line 85 "stack_alloc.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_alloc__Globals_11, (MR_Integer) 325, &ll_backend__stack_alloc__OptNoReturnCalls_16);
    }
#line 87 "stack_alloc.m"
    {
#line 87 "stack_alloc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__VarTypes_17);
    }
#line 88 "stack_alloc.m"
    {
#line 88 "stack_alloc.m"
      ll_backend__live_vars__build_dummy_type_array_4_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__VarTypes_17, &ll_backend__stack_alloc__DummyTypeArray_18, &ll_backend__stack_alloc__DummyVars_19);
    }
#line 89 "stack_alloc.m"
    {
#line 89 "stack_alloc.m"
      ll_backend__stack_alloc__AllocData_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 89 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 0) = ((MR_Box) (ll_backend__stack_alloc__ModuleInfo_5));
#line 89 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 1) = ((MR_Box) (ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41));
#line 89 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 2) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
#line 89 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 3) = ((MR_Box) (ll_backend__stack_alloc__TypeInfoLiveness_15));
#line 89 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 4) = ((MR_Box) (ll_backend__stack_alloc__OptNoReturnCalls_16));
#line 89 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_20, 5) = ((MR_Box) (ll_backend__stack_alloc__DummyTypeArray_18));
#line 89 "stack_alloc.m"
    }
#line 2645 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 91 "stack_alloc.m"
    {
#line 91 "stack_alloc.m"
      ll_backend__stack_alloc__NondetLiveness0_21 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_alloc__TypeCtorInfo_52_52);
    }
#line 2652 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__TypeInfo_53_53 = (MR_Word) &ll_backend__stack_alloc_scalar_common_1[1];
#line 92 "stack_alloc.m"
    {
#line 92 "stack_alloc.m"
      ll_backend__stack_alloc__V_45_45 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_alloc__TypeInfo_53_53, ((MR_Box) (ll_backend__stack_alloc__FailVars_14)));
    }
#line 92 "stack_alloc.m"
    ll_backend__stack_alloc__SimpleStackAlloc0_22 = (MR_Word) ll_backend__stack_alloc__V_45_45;
#line 93 "stack_alloc.m"
    {
#line 93 "stack_alloc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__Goal0_23);
    }
#line 94 "stack_alloc.m"
    {
#line 94 "stack_alloc.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], ll_backend__stack_alloc__Goal0_23, &ll_backend__stack_alloc__Goal_24, ll_backend__stack_alloc__FailVars_14, ll_backend__stack_alloc__AllocData_20, ((MR_Box) (ll_backend__stack_alloc__SimpleStackAlloc0_22)), &ll_backend__stack_alloc__conv0_SimpleStackAlloc_25, ll_backend__stack_alloc__Liveness0_9, &ll_backend__stack_alloc___Liveness_26, ll_backend__stack_alloc__NondetLiveness0_21, &ll_backend__stack_alloc___NondetLiveness_27);
    }
#line 94 "stack_alloc.m"
    ll_backend__stack_alloc__SimpleStackAlloc_25 = ((MR_Word) ll_backend__stack_alloc__conv0_SimpleStackAlloc_25);
#line 97 "stack_alloc.m"
    {
#line 97 "stack_alloc.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_alloc__Goal_24, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46);
    }
#line 98 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_28 = (MR_Word) ll_backend__stack_alloc__SimpleStackAlloc_25;
#line 100 "stack_alloc.m"
    {
#line 100 "stack_alloc.m"
      ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(ll_backend__stack_alloc__Globals_11, ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_46_46, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
#line 101 "stack_alloc.m"
    {
#line 101 "stack_alloc.m"
      ll_backend__trace_gen__trace_reserved_slots_6_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__NumReservedSlots_29, &ll_backend__stack_alloc__MaybeReservedVarInfo_30);
    }
#line 107 "stack_alloc.m"
    if ((ll_backend__stack_alloc__MaybeReservedVarInfo_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 109 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_34 = ll_backend__stack_alloc__LiveSets0_28;
#line 107 "stack_alloc.m"
    else
#line 104 "stack_alloc.m"
      {
#line 104 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__ResVar_31;
#line 104 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__ResVarSet_33;
#line 104 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_30, (MR_Integer) 0)));
#line 104 "stack_alloc.m"
        MR_Integer ll_backend__stack_alloc__V_32_32;

#line 104 "stack_alloc.m"
        ll_backend__stack_alloc__ResVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_48_48, (MR_Integer) 0)));
#line 104 "stack_alloc.m"
        ll_backend__stack_alloc__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_48_48, (MR_Integer) 1)));
#line 105 "stack_alloc.m"
        {
#line 105 "stack_alloc.m"
          ll_backend__stack_alloc__ResVarSet_33 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__stack_alloc__TypeCtorInfo_52_52, ll_backend__stack_alloc__ResVar_31);
        }
#line 106 "stack_alloc.m"
        {
#line 106 "stack_alloc.m"
          mercury__set__insert_3_p_0(ll_backend__stack_alloc__TypeInfo_53_53, ((MR_Box) (ll_backend__stack_alloc__ResVarSet_33)), ll_backend__stack_alloc__LiveSets0_28, &ll_backend__stack_alloc__LiveSets_34);
        }
#line 104 "stack_alloc.m"
      }
#line 111 "stack_alloc.m"
    {
#line 111 "stack_alloc.m"
      parse_tree__set_of_var__graph_colour_group_elements_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_52_52, ll_backend__stack_alloc__LiveSets_34, &ll_backend__stack_alloc__ColourSets_35);
    }
#line 112 "stack_alloc.m"
    {
#line 112 "stack_alloc.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_alloc__TypeInfo_53_53, ll_backend__stack_alloc__ColourSets_35, &ll_backend__stack_alloc__ColourList_36);
    }
#line 114 "stack_alloc.m"
    {
#line 114 "stack_alloc.m"
      ll_backend__stack_alloc__CodeModel_37 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
#line 115 "stack_alloc.m"
    {
#line 115 "stack_alloc.m"
      ll_backend__stack_alloc__MainStack_38 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__stack_alloc__CodeModel_37);
    }
#line 222 "stack_alloc.m"
    ll_backend__stack_alloc__FirstVarSlot_62 = (ll_backend__stack_alloc__NumReservedSlots_29 + (MR_Integer) 1);
#line 224 "stack_alloc.m"
    {
#line 224 "stack_alloc.m"
      ll_backend__stack_alloc__V_64_64 = mercury__map__init_0_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0);
    }
#line 223 "stack_alloc.m"
    {
#line 223 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(ll_backend__stack_alloc__ColourList_36, ll_backend__stack_alloc__Globals_11, ll_backend__stack_alloc__MainStack_38, ll_backend__stack_alloc__VarTypes_17, ll_backend__stack_alloc__MaybeReservedVarInfo_30, ll_backend__stack_alloc__FirstVarSlot_62, ll_backend__stack_alloc__V_64_64, &ll_backend__stack_alloc__StackSlots1_39);
    }
#line 118 "stack_alloc.m"
    {
#line 118 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(ll_backend__stack_alloc__DummyVars_19, ll_backend__stack_alloc__MainStack_38, (MR_Integer) -1, ll_backend__stack_alloc__StackSlots1_39, &ll_backend__stack_alloc__StackSlots_40);
    }
#line 120 "stack_alloc.m"
    {
#line 120 "stack_alloc.m"
      hlds__hlds_pred__proc_info_set_stack_slots_3_p_0(ll_backend__stack_alloc__StackSlots_40, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_42);
#line 120 "stack_alloc.m"
      return;
    }
#line 70 "stack_alloc.m"
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
