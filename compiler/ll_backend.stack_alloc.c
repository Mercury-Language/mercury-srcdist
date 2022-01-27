/*
** Automatically generated from `stack_alloc.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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
#include "tree_bitset.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 149 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0;

#line 152 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 161 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "ll_backend.stack_alloc.c"
static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1];

#line 167 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "ll_backend.stack_alloc.c"
static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0;

#line 176 "ll_backend.stack_alloc.c"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001(
#line 179 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 181 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2);

#line 184 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001(
#line 187 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_1,
#line 189 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 191 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3);

#line 194 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_10001(
#line 197 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 199 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 201 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 203 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 205 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 208 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_10001(
#line 211 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 213 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 215 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 217 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 219 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 222 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_10001(
#line 225 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 227 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 229 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 231 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 233 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 236 "ll_backend.stack_alloc.c"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_10001(
#line 239 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 241 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 243 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 245 "ll_backend.stack_alloc.c"
  MR_Box ll_backend__stack_alloc__wrapper_arg_3,
#line 247 "ll_backend.stack_alloc.c"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_4);

#line 290 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__290__1_2_p_0(
#line 290 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 290 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_29);

#line 205 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 205 "stack_alloc.m"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3);

#line 155 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 155 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 155 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 155 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 155 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 221 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 154 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 154 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 154 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 154 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 154 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 221 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 153 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 153 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 153 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 153 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 153 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 221 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 152 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 152 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 152 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 152 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 152 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4);

#line 144 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
#line 144 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
#line 144 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 144 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3);

#line 144 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
#line 144 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 144 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2);

#line 337 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
#line 337 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 337 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_2,
#line 337 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_3,
#line 337 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
#line 337 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5);

#line 318 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(
#line 318 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 318 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 318 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
#line 318 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4);

#line 313 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
#line 313 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 313 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4);

#line 290 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1(
#line 290 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg);

#line 280 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Vars_9,
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_10,
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_12,
#line 280 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_N_0_20,
#line 280 "stack_alloc.m"
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_N_21,
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
#line 280 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);

#line 290 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_2(
#line 290 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg);

#line 258 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1(
#line 258 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 258 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 245 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_2,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__FloatWidth_4,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_5,
#line 245 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_6,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7,
#line 245 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8);

#line 223 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
#line 223 "stack_alloc.m"
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
#line 223 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4);

#line 221 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1);

#line 207 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
#line 207 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__AllocData_5,
#line 207 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Set0_6,
#line 207 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
#line 207 "stack_alloc.m"
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
    ((MR_Box) (&ll_backend__stack_alloc__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 591 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__array__pti_array_1__plain_check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

#line 599 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 607 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 615 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__stack_alloc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 624 "ll_backend.stack_alloc.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__stack_alloc__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__stack_alloc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 632 "ll_backend.stack_alloc.c"
static const MR_Integer ll_backend__stack_alloc__ll_backend__stack_alloc__functor_number_map_stack_alloc_0[1] = {
  (MR_Integer) 0
};

#line 637 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 645 "ll_backend.stack_alloc.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__stack_alloc__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 653 "ll_backend.stack_alloc.c"
static const MR_NotagFunctorDesc ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0 = {
  (MR_String) "stack_alloc",
  (MR_PseudoTypeInfo) &ll_backend__stack_alloc__set_ordlist__ti_set_ordlist_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  NULL
};

#line 660 "ll_backend.stack_alloc.c"
const MR_TypeCtorInfo_Struct ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__stack_alloc____Unify____stack_alloc_0_0_10001)),
  ((MR_Box) (ll_backend__stack_alloc____Compare____stack_alloc_0_0_10001)),
  (MR_String) "ll_backend.stack_alloc",
  (MR_String) "stack_alloc",
  {
    &ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0
  },
  {
    &ll_backend__stack_alloc__ll_backend__stack_alloc__notag_functor_desc_stack_alloc_0
  },
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

#line 290 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__290__1_2_p_0(
#line 290 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 290 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_29)
#line 290 "stack_alloc.m"
{
#line 290 "stack_alloc.m"
  {
#line 290 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__StackSlotWidth_11 == ll_backend__stack_alloc__HeadVar__2_29);

#line 290 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 290 "stack_alloc.m"
  }
#line 290 "stack_alloc.m"
}

#line 205 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1(
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1,
#line 205 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_2,
#line 205 "stack_alloc.m"
  MR_Box * ll_backend__stack_alloc__wrapper_arg_3)
#line 205 "stack_alloc.m"
{
#line 205 "stack_alloc.m"
  {
#line 205 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;
#line 205 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12;

#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__set_for_loop_control_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_2), &ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12);
    }
#line 205 "stack_alloc.m"
    *ll_backend__stack_alloc__wrapper_arg_3 = ((MR_Box) (ll_backend__stack_alloc__conv0_STATE_VARIABLE_StackAlloc_12));
#line 205 "stack_alloc.m"
  }
#line 205 "stack_alloc.m"
}

#line 155 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0(
#line 155 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 155 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 155 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 155 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 155 "stack_alloc.m"
{
#line 203 "stack_alloc.m"
  {
#line 203 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 203 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVarsSets_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 203 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_11_11;
#line 205 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv1_HeadVar__4_4;

#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      ll_backend__stack_alloc__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_4[0]));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_recursive_call_for_loop_control_4_4_p_0_1));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 205 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_11_11, 3) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
#line 205 "stack_alloc.m"
    }
#line 205 "stack_alloc.m"
    {
#line 205 "stack_alloc.m"
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], (MR_Word) &ll_backend__stack_alloc__ll_backend__stack_alloc__type_ctor_info_stack_alloc_0, ll_backend__stack_alloc__V_11_11, ll_backend__stack_alloc__StackVarsSets_10, ((MR_Box) (ll_backend__stack_alloc__HeadVar__3_3)), &ll_backend__stack_alloc__conv1_HeadVar__4_4);
    }
#line 205 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = ((MR_Word) ll_backend__stack_alloc__conv1_HeadVar__4_4);
#line 203 "stack_alloc.m"
  }
#line 155 "stack_alloc.m"
}

#line 221 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1(
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 221 "stack_alloc.m"
{
#line 221 "stack_alloc.m"
  {
#line 221 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 221 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 221 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 221 "stack_alloc.m"
  }
#line 221 "stack_alloc.m"
}

#line 154 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0(
#line 154 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 154 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 154 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 154 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 154 "stack_alloc.m"
{
#line 192 "stack_alloc.m"
  {
#line 192 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 192 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVars0_10 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 192 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackVars_11;
#line 192 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_12;
#line 192 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_13;
#line 192 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 192 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_20_20;
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));

#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      ll_backend__stack_alloc__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_par_conj_4_4_p_0_1));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_20_20, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_19));
#line 221 "stack_alloc.m"
    }
#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_20_20, ll_backend__stack_alloc__StackVars0_10, &ll_backend__stack_alloc__StackVars_11);
    }
#line 196 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_12 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 197 "stack_alloc.m"
    {
#line 197 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_13 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], ll_backend__stack_alloc__LiveSets0_12, ((MR_Box) (ll_backend__stack_alloc__StackVars_11)));
    }
#line 198 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_13;
#line 192 "stack_alloc.m"
  }
#line 154 "stack_alloc.m"
}

#line 221 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1(
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 221 "stack_alloc.m"
{
#line 221 "stack_alloc.m"
  {
#line 221 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 221 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 221 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 221 "stack_alloc.m"
  }
#line 221 "stack_alloc.m"
}

#line 153 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0(
#line 153 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 153 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 153 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 153 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 153 "stack_alloc.m"
{
#line 175 "stack_alloc.m"
  {
#line 175 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 175 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeOnStack_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 175 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 175 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));

#line 179 "stack_alloc.m"
    if ((ll_backend__stack_alloc__ResumeOnStack_10 == (MR_Integer) 0))
#line 178 "stack_alloc.m"
      *ll_backend__stack_alloc__HeadVar__4_4 = ll_backend__stack_alloc__HeadVar__3_3;
#line 179 "stack_alloc.m"
    else
#line 180 "stack_alloc.m"
      {
#line 180 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__LiveSet0_13;
#line 180 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__LiveSet_14;
#line 180 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__LiveSets0_15;
#line 180 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__LiveSets_16;
#line 180 "stack_alloc.m"
        MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_23;
#line 180 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_24_24;
#line 220 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_25_25;
#line 220 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_26_26;
#line 220 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_27_27;
#line 220 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_28_28;
#line 220 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_29_29;

#line 181 "stack_alloc.m"
        {
#line 181 "stack_alloc.m"
          ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__ResumeVars_11, ll_backend__stack_alloc__NondetLiveVars_12);
        }
#line 220 "stack_alloc.m"
        ll_backend__stack_alloc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "stack_alloc.m"
        ll_backend__stack_alloc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "stack_alloc.m"
        ll_backend__stack_alloc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "stack_alloc.m"
        ll_backend__stack_alloc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 220 "stack_alloc.m"
        ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
#line 220 "stack_alloc.m"
        ll_backend__stack_alloc__DummyVarArray_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 221 "stack_alloc.m"
        {
#line 221 "stack_alloc.m"
          ll_backend__stack_alloc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 221 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 221 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_resume_site_4_4_p_0_1));
#line 221 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_23));
#line 221 "stack_alloc.m"
        }
#line 221 "stack_alloc.m"
        {
#line 221 "stack_alloc.m"
          parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_24_24, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
        }
#line 184 "stack_alloc.m"
        ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 185 "stack_alloc.m"
        {
#line 185 "stack_alloc.m"
          ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
        }
#line 186 "stack_alloc.m"
        *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
#line 180 "stack_alloc.m"
      }
#line 175 "stack_alloc.m"
  }
#line 153 "stack_alloc.m"
}

#line 221 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1(
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 221 "stack_alloc.m"
{
#line 221 "stack_alloc.m"
  {
#line 221 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 221 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 221 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 221 "stack_alloc.m"
  }
#line 221 "stack_alloc.m"
}

#line 152 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0(
#line 152 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 152 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 152 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3,
#line 152 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__4_4)
#line 152 "stack_alloc.m"
{
#line 162 "stack_alloc.m"
  {
#line 162 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ForwardVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResumeVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 2)));
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSet0_13;
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSet_14;
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_15;
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_16;
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_17_17;
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_18_18;
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_19_19;
#line 162 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_27;
#line 162 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_28_28;
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_29_29;
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_30_30;
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_31_31;
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_32_32;
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_33_33;

#line 164 "stack_alloc.m"
    {
#line 164 "stack_alloc.m"
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (ll_backend__stack_alloc__NondetLiveVars_12));
#line 164 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "stack_alloc.m"
    }
#line 164 "stack_alloc.m"
    {
#line 164 "stack_alloc.m"
      ll_backend__stack_alloc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 0) = ((MR_Box) (ll_backend__stack_alloc__ResumeVars_11));
#line 164 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_18_18, 1) = ((MR_Box) (ll_backend__stack_alloc__V_19_19));
#line 164 "stack_alloc.m"
    }
#line 164 "stack_alloc.m"
    {
#line 164 "stack_alloc.m"
      ll_backend__stack_alloc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 0) = ((MR_Box) (ll_backend__stack_alloc__ForwardVars_10));
#line 164 "stack_alloc.m"
      MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__V_17_17, 1) = ((MR_Box) (ll_backend__stack_alloc__V_18_18));
#line 164 "stack_alloc.m"
    }
#line 164 "stack_alloc.m"
    {
#line 164 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSet0_13 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_17_17);
    }
#line 220 "stack_alloc.m"
    ll_backend__stack_alloc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "stack_alloc.m"
    ll_backend__stack_alloc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "stack_alloc.m"
    ll_backend__stack_alloc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "stack_alloc.m"
    ll_backend__stack_alloc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 3)));
#line 220 "stack_alloc.m"
    ll_backend__stack_alloc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 4)));
#line 220 "stack_alloc.m"
    ll_backend__stack_alloc__DummyVarArray_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 5)));
#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      ll_backend__stack_alloc__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 1) = ((MR_Box) (ll_backend__stack_alloc__ClassMethod_for_ll_backend__live_vars__stack_alloc_info____ll_backend__stack_alloc__stack_alloc__arity0______ll_backend__live_vars__at_call_site_4_4_p_0_1));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_28_28, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_27));
#line 221 "stack_alloc.m"
    }
#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_28_28, ll_backend__stack_alloc__LiveSet0_13, &ll_backend__stack_alloc__LiveSet_14);
    }
#line 168 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_15 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;
#line 169 "stack_alloc.m"
    {
#line 169 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_16 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], ll_backend__stack_alloc__LiveSets0_15, ((MR_Box) (ll_backend__stack_alloc__LiveSet_14)));
    }
#line 170 "stack_alloc.m"
    *ll_backend__stack_alloc__HeadVar__4_4 = (MR_Word) ll_backend__stack_alloc__LiveSets_16;
#line 162 "stack_alloc.m"
  }
#line 152 "stack_alloc.m"
}

#line 144 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc____Compare____stack_alloc_0_0(
#line 144 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__HeadVar__1_1,
#line 144 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 144 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__3_3)
#line 144 "stack_alloc.m"
{
#line 144 "stack_alloc.m"
  {
#line 144 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 144 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastX_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;
#line 144 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastY_7 = (MR_Integer) ll_backend__stack_alloc__HeadVar__3_3;

#line 144 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_6 == ll_backend__stack_alloc__CastY_7);
#line 144 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 1415 "ll_backend.stack_alloc.c"
      *ll_backend__stack_alloc__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "stack_alloc.m"
    else
#line 144 "stack_alloc.m"
      {
#line 144 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;
#line 144 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_5_5 = (MR_Word) ll_backend__stack_alloc__HeadVar__3_3;

#line 144 "stack_alloc.m"
        {
#line 144 "stack_alloc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ll_backend__stack_alloc__HeadVar__1_1, ((MR_Box) (ll_backend__stack_alloc__V_4_4)), ((MR_Box) (ll_backend__stack_alloc__V_5_5)));
#line 144 "stack_alloc.m"
          return;
        }
#line 144 "stack_alloc.m"
      }
#line 144 "stack_alloc.m"
  }
#line 144 "stack_alloc.m"
}

#line 144 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc____Unify____stack_alloc_0_0(
#line 144 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 144 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2)
#line 144 "stack_alloc.m"
{
#line 144 "stack_alloc.m"
  {
#line 144 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 144 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastX_5 = (MR_Integer) ll_backend__stack_alloc__HeadVar__1_1;
#line 144 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__CastY_6 = (MR_Integer) ll_backend__stack_alloc__HeadVar__2_2;

#line 144 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__CastX_5 == ll_backend__stack_alloc__CastY_6);
#line 144 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 144 "stack_alloc.m"
      ll_backend__stack_alloc__succeeded = MR_TRUE;
#line 144 "stack_alloc.m"
    else
#line 144 "stack_alloc.m"
      {
#line 144 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_3_3 = (MR_Word) ll_backend__stack_alloc__HeadVar__1_1;
#line 144 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_4_4 = (MR_Word) ll_backend__stack_alloc__HeadVar__2_2;

#line 1473 "ll_backend.stack_alloc.c"
        {
#line 1475 "ll_backend.stack_alloc.c"
          return ll_backend__stack_alloc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[3], ((MR_Box) (ll_backend__stack_alloc__V_3_3)), ((MR_Box) (ll_backend__stack_alloc__V_4_4)));
        }
#line 144 "stack_alloc.m"
      }
#line 144 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 144 "stack_alloc.m"
  }
#line 144 "stack_alloc.m"
}

#line 337 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(
#line 337 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 337 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_2,
#line 337 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_3,
#line 337 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4,
#line 337 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5)
#line 337 "stack_alloc.m"
{
#line 340 "stack_alloc.m"
  while (MR_TRUE)
#line 340 "stack_alloc.m"
    {
#line 340 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 340 "stack_alloc.m"
      {
#line 340 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 340 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_5 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4;
#line 340 "stack_alloc.m"
        else
#line 341 "stack_alloc.m"
          {
#line 341 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 341 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Locn_16;
#line 341 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_22_22;
#line 341 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__V_24_24;
#line 341 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));

#line 345 "stack_alloc.m"
            if ((ll_backend__stack_alloc__MainStack_2 == (MR_Integer) 0))
#line 343 "stack_alloc.m"
              {
#line 344 "stack_alloc.m"
                {
#line 344 "stack_alloc.m"
                  ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
#line 344 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 344 "stack_alloc.m"
                }
#line 343 "stack_alloc.m"
              }
#line 345 "stack_alloc.m"
            else
#line 346 "stack_alloc.m"
              {
#line 347 "stack_alloc.m"
                {
#line 347 "stack_alloc.m"
                  ll_backend__stack_alloc__Locn_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "stack_alloc.m"
                  MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_16, 0) = ((MR_Box) (ll_backend__stack_alloc__N0_3));
#line 347 "stack_alloc.m"
                  MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 347 "stack_alloc.m"
                }
#line 346 "stack_alloc.m"
              }
#line 323 "stack_alloc.m"
            {
#line 323 "stack_alloc.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_31)), ((MR_Box) (ll_backend__stack_alloc__Locn_16)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_22_22);
            }
#line 350 "stack_alloc.m"
            ll_backend__stack_alloc__V_24_24 = (ll_backend__stack_alloc__N0_3 - (MR_Integer) 1);
#line 350 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 350 "stack_alloc.m"
            {
#line 350 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__Vars_12;
#line 350 "stack_alloc.m"
              MR_Integer ll_backend__stack_alloc__N0__tmp_copy_3 = ll_backend__stack_alloc__V_24_24;
#line 350 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_22_22;

#line 350 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_4;
#line 350 "stack_alloc.m"
              ll_backend__stack_alloc__N0_3 = ll_backend__stack_alloc__N0__tmp_copy_3;
#line 350 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 350 "stack_alloc.m"
            }
#line 350 "stack_alloc.m"
            continue;
#line 341 "stack_alloc.m"
          }
#line 340 "stack_alloc.m"
      }
#line 340 "stack_alloc.m"
      break;
#line 340 "stack_alloc.m"
    }
#line 337 "stack_alloc.m"
}

#line 318 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(
#line 318 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 318 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__2_2,
#line 318 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3,
#line 318 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4)
#line 318 "stack_alloc.m"
{
#line 321 "stack_alloc.m"
  while (MR_TRUE)
#line 321 "stack_alloc.m"
    {
#line 321 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 321 "stack_alloc.m"
      {
#line 321 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 321 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_4 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3;
#line 321 "stack_alloc.m"
        else
#line 322 "stack_alloc.m"
          {
#line 322 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 322 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 322 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

#line 323 "stack_alloc.m"
            {
#line 323 "stack_alloc.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, ((MR_Box) (ll_backend__stack_alloc__Var_9)), ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2)), ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15);
            }
#line 324 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 324 "stack_alloc.m"
            {
#line 324 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__Vars_10;
#line 324 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_15_15;

#line 324 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_3 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_3;
#line 324 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 324 "stack_alloc.m"
            }
#line 324 "stack_alloc.m"
            continue;
#line 322 "stack_alloc.m"
          }
#line 321 "stack_alloc.m"
      }
#line 321 "stack_alloc.m"
      break;
#line 321 "stack_alloc.m"
    }
#line 318 "stack_alloc.m"
}

#line 313 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_float_2_p_0(
#line 313 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 313 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4)
#line 313 "stack_alloc.m"
{
#line 315 "stack_alloc.m"
  {
#line 315 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 315 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_5_5;
#line 315 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_6_6;

#line 316 "stack_alloc.m"
    {
#line 316 "stack_alloc.m"
      ll_backend__stack_alloc__V_5_5 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 316 "stack_alloc.m"
    {
#line 316 "stack_alloc.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__stack_alloc__VarTypes_3, ll_backend__stack_alloc__Var_4, &ll_backend__stack_alloc__V_6_6);
    }
#line 316 "stack_alloc.m"
    {
#line 316 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ll_backend__stack_alloc__V_5_5, ll_backend__stack_alloc__V_6_6);
    }
#line 315 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 315 "stack_alloc.m"
  }
#line 313 "stack_alloc.m"
}

#line 290 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1(
#line 290 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg)
#line 290 "stack_alloc.m"
{
#line 290 "stack_alloc.m"
  {
#line 290 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 290 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 290 "stack_alloc.m"
    {
#line 290 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__290__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
#line 290 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 290 "stack_alloc.m"
  }
#line 290 "stack_alloc.m"
}

#line 280 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Vars_9,
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_10,
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__StackSlotWidth_11,
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_12,
#line 280 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__STATE_VARIABLE_N_0_20,
#line 280 "stack_alloc.m"
  MR_Integer * ll_backend__stack_alloc__STATE_VARIABLE_N_21,
#line 280 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22,
#line 280 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23)
#line 280 "stack_alloc.m"
{
#line 285 "stack_alloc.m"
  {
#line 285 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_12)) == (MR_mktag((MR_Integer) 1)));
#line 285 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__SlotNum_17;
#line 285 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Locn_18;
#line 285 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__VarList_19;
#line 293 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__ResSlotNum_16;
#line 287 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_35_35;
#line 287 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ResVar_15;
#line 287 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24;

#line 287 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 287 "stack_alloc.m"
      {
#line 287 "stack_alloc.m"
        ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_12, (MR_Integer) 0)));
#line 287 "stack_alloc.m"
        ll_backend__stack_alloc__ResVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 0)));
#line 287 "stack_alloc.m"
        ll_backend__stack_alloc__ResSlotNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_24_24, (MR_Integer) 1)));
#line 1791 "ll_backend.stack_alloc.c"
        ll_backend__stack_alloc__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 288 "stack_alloc.m"
        {
#line 288 "stack_alloc.m"
          ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_35_35, ll_backend__stack_alloc__Vars_9, ll_backend__stack_alloc__ResVar_15);
        }
#line 287 "stack_alloc.m"
      }
#line 293 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 291 "stack_alloc.m"
      {
#line 291 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_25_25;

#line 290 "stack_alloc.m"
        {
#line 290 "stack_alloc.m"
          ll_backend__stack_alloc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 290 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[2]));
#line 290 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0_1));
#line 290 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 290 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 3) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_11));
#line 290 "stack_alloc.m"
          MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_25_25, 4) = ((MR_Box) ((MR_Integer) 0));
#line 290 "stack_alloc.m"
        }
#line 290 "stack_alloc.m"
        {
#line 290 "stack_alloc.m"
          mercury__require__expect_4_p_0(ll_backend__stack_alloc__V_25_25, (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_stack_slots_3\'/8", (MR_String) "reserved multiple stack slots");
        }
#line 292 "stack_alloc.m"
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__ResSlotNum_16;
#line 292 "stack_alloc.m"
        *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = ll_backend__stack_alloc__STATE_VARIABLE_N_0_20;
#line 291 "stack_alloc.m"
      }
#line 293 "stack_alloc.m"
    else
#line 294 "stack_alloc.m"
      {
#line 294 "stack_alloc.m"
        ll_backend__stack_alloc__SlotNum_17 = ll_backend__stack_alloc__STATE_VARIABLE_N_0_20;
#line 298 "stack_alloc.m"
        if ((ll_backend__stack_alloc__StackSlotWidth_11 == (MR_Integer) 1))
#line 299 "stack_alloc.m"
          {
#line 300 "stack_alloc.m"
            *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = (ll_backend__stack_alloc__STATE_VARIABLE_N_0_20 + (MR_Integer) 2);
#line 299 "stack_alloc.m"
          }
#line 298 "stack_alloc.m"
        else
#line 296 "stack_alloc.m"
          {
#line 297 "stack_alloc.m"
            *ll_backend__stack_alloc__STATE_VARIABLE_N_21 = (ll_backend__stack_alloc__STATE_VARIABLE_N_0_20 + (MR_Integer) 1);
#line 296 "stack_alloc.m"
          }
#line 294 "stack_alloc.m"
      }
#line 306 "stack_alloc.m"
    if ((ll_backend__stack_alloc__MainStack_10 == (MR_Integer) 0))
#line 305 "stack_alloc.m"
      {
#line 305 "stack_alloc.m"
        ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "stack_alloc.m"
        MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
#line 305 "stack_alloc.m"
        MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_18, 1) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_11));
#line 305 "stack_alloc.m"
      }
#line 306 "stack_alloc.m"
    else
#line 308 "stack_alloc.m"
      {
#line 308 "stack_alloc.m"
        ll_backend__stack_alloc__Locn_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "stack_alloc.m"
        MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_18, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_17));
#line 308 "stack_alloc.m"
        MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_18, 1) = ((MR_Box) (ll_backend__stack_alloc__StackSlotWidth_11));
#line 308 "stack_alloc.m"
      }
#line 310 "stack_alloc.m"
    {
#line 310 "stack_alloc.m"
      ll_backend__stack_alloc__VarList_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__Vars_9);
    }
#line 311 "stack_alloc.m"
    {
#line 311 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(ll_backend__stack_alloc__VarList_19, ll_backend__stack_alloc__Locn_18, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_22, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_23);
#line 311 "stack_alloc.m"
      return;
    }
#line 285 "stack_alloc.m"
  }
#line 280 "stack_alloc.m"
}

#line 290 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_2(
#line 290 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg)
#line 290 "stack_alloc.m"
{
#line 290 "stack_alloc.m"
  {
#line 290 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 290 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 290 "stack_alloc.m"
    {
#line 290 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__IntroducedFrom__pred__allocate_stack_slots_3__290__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 4))));
    }
#line 290 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 290 "stack_alloc.m"
  }
#line 290 "stack_alloc.m"
}

#line 258 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1(
#line 258 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 258 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 258 "stack_alloc.m"
{
#line 258 "stack_alloc.m"
  {
#line 258 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 258 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 258 "stack_alloc.m"
    {
#line 258 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_float_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 258 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 258 "stack_alloc.m"
  }
#line 258 "stack_alloc.m"
}

#line 245 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__HeadVar__1_1,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MainStack_2,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__VarTypes_3,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__FloatWidth_4,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_5,
#line 245 "stack_alloc.m"
  MR_Integer ll_backend__stack_alloc__N0_6,
#line 245 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7,
#line 245 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8)
#line 245 "stack_alloc.m"
{
#line 249 "stack_alloc.m"
  while (MR_TRUE)
#line 249 "stack_alloc.m"
    {
#line 249 "stack_alloc.m"
      /* tailcall optimized into a loop */
#line 249 "stack_alloc.m"
      {
#line 249 "stack_alloc.m"
        MR_bool ll_backend__stack_alloc__succeeded;

#line 249 "stack_alloc.m"
        if ((ll_backend__stack_alloc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "stack_alloc.m"
          *ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_8 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7;
#line 249 "stack_alloc.m"
        else
#line 251 "stack_alloc.m"
          {
#line 251 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 0)));
#line 251 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__VarSets_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__HeadVar__1_1, (MR_Integer) 1)));
#line 251 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__SingleWidthVars_25;
#line 251 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__DoubleWidthVars_26;
#line 251 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__N1_27;
#line 251 "stack_alloc.m"
            MR_Integer ll_backend__stack_alloc__N_28;
#line 251 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_33_33;
#line 251 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35;

#line 256 "stack_alloc.m"
            if ((ll_backend__stack_alloc__FloatWidth_4 == (MR_Integer) 1))
#line 257 "stack_alloc.m"
              {
#line 257 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__V_31_31;

#line 258 "stack_alloc.m"
                {
#line 258 "stack_alloc.m"
                  ll_backend__stack_alloc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 258 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_31_31, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[1]));
#line 258 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_31_31, 1) = ((MR_Box) (ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0_1));
#line 258 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 258 "stack_alloc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_31_31, 3) = ((MR_Box) (ll_backend__stack_alloc__VarTypes_3));
#line 258 "stack_alloc.m"
                }
#line 258 "stack_alloc.m"
                {
#line 258 "stack_alloc.m"
                  parse_tree__set_of_var__divide_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_31_31, ll_backend__stack_alloc__Vars_17, &ll_backend__stack_alloc__DoubleWidthVars_26, &ll_backend__stack_alloc__SingleWidthVars_25);
                }
#line 257 "stack_alloc.m"
              }
#line 256 "stack_alloc.m"
            else
#line 253 "stack_alloc.m"
              {
#line 254 "stack_alloc.m"
                ll_backend__stack_alloc__SingleWidthVars_25 = ll_backend__stack_alloc__Vars_17;
#line 255 "stack_alloc.m"
                {
#line 255 "stack_alloc.m"
                  ll_backend__stack_alloc__DoubleWidthVars_26 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                }
#line 253 "stack_alloc.m"
              }
#line 261 "stack_alloc.m"
            {
#line 261 "stack_alloc.m"
              ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__SingleWidthVars_25);
            }
#line 264 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 262 "stack_alloc.m"
              {
#line 262 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__SlotNum_54;
#line 262 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__Locn_55;
#line 262 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__VarList_56;
#line 293 "stack_alloc.m"
                MR_Integer ll_backend__stack_alloc__ResSlotNum_53;
#line 287 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__TypeCtorInfo_35_68;
#line 287 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__ResVar_52;
#line 287 "stack_alloc.m"
                MR_Word ll_backend__stack_alloc__V_57_57;

#line 287 "stack_alloc.m"
                ll_backend__stack_alloc__succeeded = ((MR_tag((MR_Word) ll_backend__stack_alloc__MaybeReservedVarInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 287 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 287 "stack_alloc.m"
                  {
#line 287 "stack_alloc.m"
                    ll_backend__stack_alloc__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_5, (MR_Integer) 0)));
#line 287 "stack_alloc.m"
                    ll_backend__stack_alloc__ResVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_57_57, (MR_Integer) 0)));
#line 287 "stack_alloc.m"
                    ll_backend__stack_alloc__ResSlotNum_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_57_57, (MR_Integer) 1)));
#line 2087 "ll_backend.stack_alloc.c"
                    ll_backend__stack_alloc__TypeCtorInfo_35_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 288 "stack_alloc.m"
                    {
#line 288 "stack_alloc.m"
                      ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__member_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_35_68, ll_backend__stack_alloc__SingleWidthVars_25, ll_backend__stack_alloc__ResVar_52);
                    }
#line 287 "stack_alloc.m"
                  }
#line 293 "stack_alloc.m"
                if (ll_backend__stack_alloc__succeeded)
#line 291 "stack_alloc.m"
                  {
#line 290 "stack_alloc.m"
                    {
#line 290 "stack_alloc.m"
                      mercury__require__expect_4_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_3[3], (MR_String) "ll_backend.stack_alloc", (MR_String) "predicate \140ll_backend.stack_alloc.allocate_stack_slots_3\'/8", (MR_String) "reserved multiple stack slots");
                    }
#line 292 "stack_alloc.m"
                    ll_backend__stack_alloc__SlotNum_54 = ll_backend__stack_alloc__ResSlotNum_53;
#line 292 "stack_alloc.m"
                    ll_backend__stack_alloc__N1_27 = ll_backend__stack_alloc__N0_6;
#line 291 "stack_alloc.m"
                  }
#line 293 "stack_alloc.m"
                else
#line 294 "stack_alloc.m"
                  {
#line 294 "stack_alloc.m"
                    ll_backend__stack_alloc__SlotNum_54 = ll_backend__stack_alloc__N0_6;
#line 297 "stack_alloc.m"
                    ll_backend__stack_alloc__N1_27 = (ll_backend__stack_alloc__N0_6 + (MR_Integer) 1);
#line 294 "stack_alloc.m"
                  }
#line 306 "stack_alloc.m"
                if ((ll_backend__stack_alloc__MainStack_2 == (MR_Integer) 0))
#line 305 "stack_alloc.m"
                  {
#line 305 "stack_alloc.m"
                    ll_backend__stack_alloc__Locn_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "stack_alloc.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_55, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_54));
#line 305 "stack_alloc.m"
                    MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__Locn_55, 1) = ((MR_Box) ((MR_Integer) 0));
#line 305 "stack_alloc.m"
                  }
#line 306 "stack_alloc.m"
                else
#line 308 "stack_alloc.m"
                  {
#line 308 "stack_alloc.m"
                    ll_backend__stack_alloc__Locn_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "stack_alloc.m"
                    MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_55, 0) = ((MR_Box) (ll_backend__stack_alloc__SlotNum_54));
#line 308 "stack_alloc.m"
                    MR_hl_field(MR_mktag(2), ll_backend__stack_alloc__Locn_55, 1) = ((MR_Box) ((MR_Integer) 0));
#line 308 "stack_alloc.m"
                  }
#line 310 "stack_alloc.m"
                {
#line 310 "stack_alloc.m"
                  ll_backend__stack_alloc__VarList_56 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__SingleWidthVars_25);
                }
#line 311 "stack_alloc.m"
                {
#line 311 "stack_alloc.m"
                  ll_backend__stack_alloc__allocate_same_stack_slot_4_p_0(ll_backend__stack_alloc__VarList_56, ll_backend__stack_alloc__Locn_55, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_33_33);
                }
#line 262 "stack_alloc.m"
              }
#line 264 "stack_alloc.m"
            else
#line 265 "stack_alloc.m"
              {
#line 265 "stack_alloc.m"
                ll_backend__stack_alloc__N1_27 = ll_backend__stack_alloc__N0_6;
#line 265 "stack_alloc.m"
                ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_33_33 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7;
#line 265 "stack_alloc.m"
              }
#line 267 "stack_alloc.m"
            {
#line 267 "stack_alloc.m"
              ll_backend__stack_alloc__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__DoubleWidthVars_26);
            }
#line 274 "stack_alloc.m"
            if (ll_backend__stack_alloc__succeeded)
#line 272 "stack_alloc.m"
              {
#line 272 "stack_alloc.m"
                {
#line 272 "stack_alloc.m"
                  ll_backend__stack_alloc__allocate_stack_slots_3_8_p_0(ll_backend__stack_alloc__DoubleWidthVars_26, ll_backend__stack_alloc__MainStack_2, (MR_Integer) 1, ll_backend__stack_alloc__MaybeReservedVarInfo_5, ll_backend__stack_alloc__N1_27, &ll_backend__stack_alloc__N_28, ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_33_33, &ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35);
                }
#line 272 "stack_alloc.m"
              }
#line 274 "stack_alloc.m"
            else
#line 275 "stack_alloc.m"
              {
#line 275 "stack_alloc.m"
                ll_backend__stack_alloc__N_28 = ll_backend__stack_alloc__N1_27;
#line 275 "stack_alloc.m"
                ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_33_33;
#line 275 "stack_alloc.m"
              }
#line 277 "stack_alloc.m"
            /* direct tailcall eliminated */
#line 277 "stack_alloc.m"
            {
#line 277 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__HeadVar__1__tmp_copy_1 = ll_backend__stack_alloc__VarSets_18;
#line 277 "stack_alloc.m"
              MR_Integer ll_backend__stack_alloc__N0__tmp_copy_6 = ll_backend__stack_alloc__N_28;
#line 277 "stack_alloc.m"
              MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_7 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_35_35;

#line 277 "stack_alloc.m"
              ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0_7 = ll_backend__stack_alloc__STATE_VARIABLE_StackSlots_0__tmp_copy_7;
#line 277 "stack_alloc.m"
              ll_backend__stack_alloc__N0_6 = ll_backend__stack_alloc__N0__tmp_copy_6;
#line 277 "stack_alloc.m"
              ll_backend__stack_alloc__HeadVar__1_1 = ll_backend__stack_alloc__HeadVar__1__tmp_copy_1;
#line 277 "stack_alloc.m"
            }
#line 277 "stack_alloc.m"
            continue;
#line 251 "stack_alloc.m"
          }
#line 249 "stack_alloc.m"
      }
#line 249 "stack_alloc.m"
      break;
#line 249 "stack_alloc.m"
    }
#line 245 "stack_alloc.m"
}

#line 223 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__var_is_not_dummy_2_p_0(
#line 223 "stack_alloc.m"
  MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_3,
#line 223 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Var_4)
#line 223 "stack_alloc.m"
{
#line 225 "stack_alloc.m"
  {
#line 225 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 225 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeClassInfo_for_enum_7 = (MR_Word) &ll_backend__stack_alloc_scalar_common_2[0];
#line 225 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__VarNum_5;
#line 225 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__IsDummy_6;
#line 2244 "ll_backend.stack_alloc.c"
    MR_Box MR_CALL (* ll_backend__stack_alloc__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__TypeClassInfo_for_enum_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2246 "ll_backend.stack_alloc.c"
    MR_Box ll_backend__stack_alloc__conv1_VarNum_5;
#line 227 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv2_IsDummy_6;

#line 2251 "ll_backend.stack_alloc.c"
    {
#line 2253 "ll_backend.stack_alloc.c"
      ll_backend__stack_alloc__conv1_VarNum_5 = ll_backend__stack_alloc__func_0(((MR_Box) ll_backend__stack_alloc__TypeClassInfo_for_enum_7), ((MR_Box) (ll_backend__stack_alloc__Var_4)));
    }
#line 2256 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__VarNum_5 = ((MR_Integer) ll_backend__stack_alloc__conv1_VarNum_5);
#line 227 "stack_alloc.m"
    {
#line 227 "stack_alloc.m"
      mercury__array__lookup_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, (MR_ArrayPtr) ll_backend__stack_alloc__DummyVarArray_3, ll_backend__stack_alloc__VarNum_5, &ll_backend__stack_alloc__conv2_IsDummy_6);
    }
#line 227 "stack_alloc.m"
    ll_backend__stack_alloc__IsDummy_6 = ((MR_Word) ll_backend__stack_alloc__conv2_IsDummy_6);
#line 228 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__IsDummy_6 == (MR_Integer) 1);
#line 225 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 225 "stack_alloc.m"
  }
#line 223 "stack_alloc.m"
}

#line 221 "stack_alloc.m"
static MR_bool MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0_1(
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__closure_arg,
#line 221 "stack_alloc.m"
  MR_Box ll_backend__stack_alloc__wrapper_arg_1)
#line 221 "stack_alloc.m"
{
#line 221 "stack_alloc.m"
  {
#line 221 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 221 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__closure = ll_backend__stack_alloc__closure_arg;

#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      return ll_backend__stack_alloc__succeeded = ll_backend__stack_alloc__var_is_not_dummy_2_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__stack_alloc__wrapper_arg_1));
    }
#line 221 "stack_alloc.m"
    return ll_backend__stack_alloc__succeeded;
#line 221 "stack_alloc.m"
  }
#line 221 "stack_alloc.m"
}

#line 207 "stack_alloc.m"
static void MR_CALL 
ll_backend__stack_alloc__set_for_loop_control_4_p_0(
#line 207 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__AllocData_5,
#line 207 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__Set0_6,
#line 207 "stack_alloc.m"
  MR_Word ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11,
#line 207 "stack_alloc.m"
  MR_Word * ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12)
#line 207 "stack_alloc.m"
{
#line 210 "stack_alloc.m"
  {
#line 210 "stack_alloc.m"
    MR_bool ll_backend__stack_alloc__succeeded;
#line 210 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_8 = (MR_Word) ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_0_11;
#line 210 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Set_9;
#line 210 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_10;
#line 210 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyVarArray_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 5)));
#line 210 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_19_19;
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 0)));
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 1)));
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 2)));
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 3)));
#line 220 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_5, (MR_Integer) 4)));

#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      ll_backend__stack_alloc__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 0) = ((MR_Box) (&ll_backend__stack_alloc_scalar_common_3[0]));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 1) = ((MR_Box) (ll_backend__stack_alloc__set_for_loop_control_4_p_0_1));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_19_19, 3) = ((MR_Box) (ll_backend__stack_alloc__DummyVarArray_18));
#line 221 "stack_alloc.m"
    }
#line 221 "stack_alloc.m"
    {
#line 221 "stack_alloc.m"
      parse_tree__set_of_var__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__stack_alloc__V_19_19, ll_backend__stack_alloc__Set0_6, &ll_backend__stack_alloc__Set_9);
    }
#line 213 "stack_alloc.m"
    {
#line 213 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_10 = mercury__set__insert_2_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[0], ll_backend__stack_alloc__LiveSets0_8, ((MR_Box) (ll_backend__stack_alloc__Set_9)));
    }
#line 214 "stack_alloc.m"
    *ll_backend__stack_alloc__STATE_VARIABLE_StackAlloc_12 = (MR_Word) ll_backend__stack_alloc__LiveSets_10;
#line 210 "stack_alloc.m"
  }
#line 207 "stack_alloc.m"
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
    MR_Word ll_backend__stack_alloc__TypeCtorInfo_53_53;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeInfo_54_54;
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
    MR_Word ll_backend__stack_alloc__FailVars_13;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__TypeInfoLiveness_14;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__OptNoReturnCalls_15;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__VarTypes_16;
#line 69 "stack_alloc.m"
    MR_ArrayPtr ll_backend__stack_alloc__DummyTypeArray_17;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__DummyVars_18;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__AllocData_19;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__NondetLiveness0_20;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc0_21;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Goal0_22;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__Goal_23;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__SimpleStackAlloc_24;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets0_27;
#line 69 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__NumReservedSlots_28;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MaybeReservedVarInfo_29;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__LiveSets_33;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ColourSets_34;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__ColourList_35;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__CodeModel_36;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__MainStack_37;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__FloatWidth_38;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackSlots1_39;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__StackSlots_40;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_46_46;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_48_48;
#line 69 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__TargetWordBits_58;
#line 69 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__FirstVarSlot_72;
#line 69 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_74_74;
#line 69 "stack_alloc.m"
    MR_Integer ll_backend__stack_alloc__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc__V_43_43;
#line 92 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc___Liveness_25;
#line 92 "stack_alloc.m"
    MR_Word ll_backend__stack_alloc___NondetLiveness_26;
#line 92 "stack_alloc.m"
    MR_Box ll_backend__stack_alloc__conv0_SimpleStackAlloc_24;

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
#line 76 "stack_alloc.m"
    {
#line 76 "stack_alloc.m"
      ll_backend__stack_alloc__V_43_43 = libs__trace_params__eff_trace_level_needs_fail_vars_4_f_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, ll_backend__stack_alloc__TraceLevel_12);
    }
#line 76 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__V_43_43 == (MR_Integer) 1);
#line 79 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 78 "stack_alloc.m"
      {
#line 78 "stack_alloc.m"
        ll_backend__trace_gen__trace_fail_vars_3_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__FailVars_13);
      }
#line 79 "stack_alloc.m"
    else
#line 80 "stack_alloc.m"
      {
#line 80 "stack_alloc.m"
        {
#line 80 "stack_alloc.m"
          ll_backend__stack_alloc__FailVars_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 80 "stack_alloc.m"
      }
#line 82 "stack_alloc.m"
    {
#line 82 "stack_alloc.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__TypeInfoLiveness_14);
    }
#line 83 "stack_alloc.m"
    {
#line 83 "stack_alloc.m"
      libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_alloc__Globals_11, (MR_Integer) 321, &ll_backend__stack_alloc__OptNoReturnCalls_15);
    }
#line 85 "stack_alloc.m"
    {
#line 85 "stack_alloc.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__VarTypes_16);
    }
#line 86 "stack_alloc.m"
    {
#line 86 "stack_alloc.m"
      ll_backend__live_vars__build_dummy_type_array_4_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__VarTypes_16, &ll_backend__stack_alloc__DummyTypeArray_17, &ll_backend__stack_alloc__DummyVars_18);
    }
#line 87 "stack_alloc.m"
    {
#line 87 "stack_alloc.m"
      ll_backend__stack_alloc__AllocData_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 87 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_19, 0) = ((MR_Box) (ll_backend__stack_alloc__ModuleInfo_5));
#line 87 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_19, 1) = ((MR_Box) (ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41));
#line 87 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_19, 2) = ((MR_Box) (ll_backend__stack_alloc__HeadVar__2_2));
#line 87 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_19, 3) = ((MR_Box) (ll_backend__stack_alloc__TypeInfoLiveness_14));
#line 87 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_19, 4) = ((MR_Box) (ll_backend__stack_alloc__OptNoReturnCalls_15));
#line 87 "stack_alloc.m"
      MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__AllocData_19, 5) = ((MR_Box) (ll_backend__stack_alloc__DummyTypeArray_17));
#line 87 "stack_alloc.m"
    }
#line 2554 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 89 "stack_alloc.m"
    {
#line 89 "stack_alloc.m"
      ll_backend__stack_alloc__NondetLiveness0_20 = parse_tree__set_of_var__init_0_f_0(ll_backend__stack_alloc__TypeCtorInfo_53_53);
    }
#line 2561 "ll_backend.stack_alloc.c"
    ll_backend__stack_alloc__TypeInfo_54_54 = (MR_Word) &ll_backend__stack_alloc_scalar_common_1[0];
#line 90 "stack_alloc.m"
    {
#line 90 "stack_alloc.m"
      ll_backend__stack_alloc__V_46_46 = mercury__set__make_singleton_set_1_f_0(ll_backend__stack_alloc__TypeInfo_54_54, ((MR_Box) (ll_backend__stack_alloc__FailVars_13)));
    }
#line 90 "stack_alloc.m"
    ll_backend__stack_alloc__SimpleStackAlloc0_21 = (MR_Word) ll_backend__stack_alloc__V_46_46;
#line 91 "stack_alloc.m"
    {
#line 91 "stack_alloc.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__Goal0_22);
    }
#line 92 "stack_alloc.m"
    {
#line 92 "stack_alloc.m"
      ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[1], ll_backend__stack_alloc__Goal0_22, &ll_backend__stack_alloc__Goal_23, ll_backend__stack_alloc__FailVars_13, ll_backend__stack_alloc__AllocData_19, ((MR_Box) (ll_backend__stack_alloc__SimpleStackAlloc0_21)), &ll_backend__stack_alloc__conv0_SimpleStackAlloc_24, ll_backend__stack_alloc__Liveness0_9, &ll_backend__stack_alloc___Liveness_25, ll_backend__stack_alloc__NondetLiveness0_20, &ll_backend__stack_alloc___NondetLiveness_26);
    }
#line 92 "stack_alloc.m"
    ll_backend__stack_alloc__SimpleStackAlloc_24 = ((MR_Word) ll_backend__stack_alloc__conv0_SimpleStackAlloc_24);
#line 95 "stack_alloc.m"
    {
#line 95 "stack_alloc.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__stack_alloc__Goal_23, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_0_41, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47);
    }
#line 96 "stack_alloc.m"
    ll_backend__stack_alloc__LiveSets0_27 = (MR_Word) ll_backend__stack_alloc__SimpleStackAlloc_24;
#line 98 "stack_alloc.m"
    {
#line 98 "stack_alloc.m"
      ll_backend__trace_gen__do_we_need_maxfr_slot_5_p_0(ll_backend__stack_alloc__Globals_11, ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_47_47, &ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 99 "stack_alloc.m"
    {
#line 99 "stack_alloc.m"
      ll_backend__trace_gen__trace_reserved_slots_6_p_0(ll_backend__stack_alloc__ModuleInfo_5, ll_backend__stack_alloc__PredInfo_10, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_48_48, ll_backend__stack_alloc__Globals_11, &ll_backend__stack_alloc__NumReservedSlots_28, &ll_backend__stack_alloc__MaybeReservedVarInfo_29);
    }
#line 105 "stack_alloc.m"
    if ((ll_backend__stack_alloc__MaybeReservedVarInfo_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 107 "stack_alloc.m"
      ll_backend__stack_alloc__LiveSets_33 = ll_backend__stack_alloc__LiveSets0_27;
#line 105 "stack_alloc.m"
    else
#line 102 "stack_alloc.m"
      {
#line 102 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__ResVar_30;
#line 102 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__ResVarSet_32;
#line 102 "stack_alloc.m"
        MR_Word ll_backend__stack_alloc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__stack_alloc__MaybeReservedVarInfo_29, (MR_Integer) 0)));
#line 102 "stack_alloc.m"
        MR_Integer ll_backend__stack_alloc__V_31_31;

#line 102 "stack_alloc.m"
        ll_backend__stack_alloc__ResVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_49_49, (MR_Integer) 0)));
#line 102 "stack_alloc.m"
        ll_backend__stack_alloc__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__stack_alloc__V_49_49, (MR_Integer) 1)));
#line 103 "stack_alloc.m"
        {
#line 103 "stack_alloc.m"
          ll_backend__stack_alloc__ResVarSet_32 = parse_tree__set_of_var__make_singleton_1_f_0(ll_backend__stack_alloc__TypeCtorInfo_53_53, ll_backend__stack_alloc__ResVar_30);
        }
#line 104 "stack_alloc.m"
        {
#line 104 "stack_alloc.m"
          mercury__set__insert_3_p_0(ll_backend__stack_alloc__TypeInfo_54_54, ((MR_Box) (ll_backend__stack_alloc__ResVarSet_32)), ll_backend__stack_alloc__LiveSets0_27, &ll_backend__stack_alloc__LiveSets_33);
        }
#line 102 "stack_alloc.m"
      }
#line 109 "stack_alloc.m"
    {
#line 109 "stack_alloc.m"
      parse_tree__set_of_var__graph_colour_group_elements_2_p_0(ll_backend__stack_alloc__TypeCtorInfo_53_53, ll_backend__stack_alloc__LiveSets_33, &ll_backend__stack_alloc__ColourSets_34);
    }
#line 110 "stack_alloc.m"
    {
#line 110 "stack_alloc.m"
      mercury__set__to_sorted_list_2_p_0(ll_backend__stack_alloc__TypeInfo_54_54, ll_backend__stack_alloc__ColourSets_34, &ll_backend__stack_alloc__ColourList_35);
    }
#line 112 "stack_alloc.m"
    {
#line 112 "stack_alloc.m"
      ll_backend__stack_alloc__CodeModel_36 = hlds__code_model__proc_info_interface_code_model_1_f_0(ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_48_48);
    }
#line 113 "stack_alloc.m"
    {
#line 113 "stack_alloc.m"
      ll_backend__stack_alloc__MainStack_37 = ll_backend__llds__code_model_to_main_stack_1_f_0(ll_backend__stack_alloc__CodeModel_36);
    }
#line 124 "stack_alloc.m"
    {
#line 124 "stack_alloc.m"
      libs__globals__lookup_int_option_3_p_0(ll_backend__stack_alloc__Globals_11, (MR_Integer) 236, &ll_backend__stack_alloc__TargetWordBits_58);
    }
#line 125 "stack_alloc.m"
    ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__TargetWordBits_58 == (MR_Integer) 64);
#line 127 "stack_alloc.m"
    if (ll_backend__stack_alloc__succeeded)
#line 126 "stack_alloc.m"
      ll_backend__stack_alloc__FloatWidth_38 = (MR_Integer) 0;
#line 127 "stack_alloc.m"
    else
#line 137 "stack_alloc.m"
      {
#line 127 "stack_alloc.m"
        ll_backend__stack_alloc__succeeded = (ll_backend__stack_alloc__TargetWordBits_58 == (MR_Integer) 32);
#line 137 "stack_alloc.m"
        if (ll_backend__stack_alloc__succeeded)
#line 129 "stack_alloc.m"
          {
#line 129 "stack_alloc.m"
            MR_Word ll_backend__stack_alloc__SinglePrecFloat_59;

#line 128 "stack_alloc.m"
            {
#line 128 "stack_alloc.m"
              libs__globals__lookup_bool_option_3_p_0(ll_backend__stack_alloc__Globals_11, (MR_Integer) 220, &ll_backend__stack_alloc__SinglePrecFloat_59);
            }
#line 133 "stack_alloc.m"
            if ((ll_backend__stack_alloc__SinglePrecFloat_59 == (MR_Integer) 0))
#line 135 "stack_alloc.m"
              ll_backend__stack_alloc__FloatWidth_38 = (MR_Integer) 1;
#line 133 "stack_alloc.m"
            else
#line 132 "stack_alloc.m"
              ll_backend__stack_alloc__FloatWidth_38 = (MR_Integer) 0;
#line 129 "stack_alloc.m"
          }
#line 137 "stack_alloc.m"
        else
#line 138 "stack_alloc.m"
          {
#line 138 "stack_alloc.m"
            {
#line 138 "stack_alloc.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.stack_alloc", (MR_String) "function \140ll_backend.stack_alloc.get_float_width\'/1", (MR_String) "bits_per_word not 32 or 64");
#line 138 "stack_alloc.m"
              return;
            }
#line 138 "stack_alloc.m"
          }
#line 137 "stack_alloc.m"
      }
#line 241 "stack_alloc.m"
    ll_backend__stack_alloc__FirstVarSlot_72 = (ll_backend__stack_alloc__NumReservedSlots_28 + (MR_Integer) 1);
#line 242 "stack_alloc.m"
    {
#line 242 "stack_alloc.m"
      ll_backend__stack_alloc__V_74_74 = mercury__map__init_0_f_0((MR_Word) &ll_backend__stack_alloc_scalar_common_1[2], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0);
    }
#line 242 "stack_alloc.m"
    {
#line 242 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_stack_slots_2_8_p_0(ll_backend__stack_alloc__ColourList_35, ll_backend__stack_alloc__MainStack_37, ll_backend__stack_alloc__VarTypes_16, ll_backend__stack_alloc__FloatWidth_38, ll_backend__stack_alloc__MaybeReservedVarInfo_29, ll_backend__stack_alloc__FirstVarSlot_72, ll_backend__stack_alloc__V_74_74, &ll_backend__stack_alloc__StackSlots1_39);
    }
#line 117 "stack_alloc.m"
    {
#line 117 "stack_alloc.m"
      ll_backend__stack_alloc__allocate_dummy_stack_slots_5_p_0(ll_backend__stack_alloc__DummyVars_18, ll_backend__stack_alloc__MainStack_37, (MR_Integer) -1, ll_backend__stack_alloc__StackSlots1_39, &ll_backend__stack_alloc__StackSlots_40);
    }
#line 119 "stack_alloc.m"
    {
#line 119 "stack_alloc.m"
      hlds__hlds_pred__proc_info_set_stack_slots_3_p_0(ll_backend__stack_alloc__StackSlots_40, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_48_48, ll_backend__stack_alloc__STATE_VARIABLE_ProcInfo_42);
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
