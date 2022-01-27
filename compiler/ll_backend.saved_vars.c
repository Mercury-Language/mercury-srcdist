/*
** Automatically generated from `saved_vars.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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


/* :- module ll_backend.saved_vars. */
/* :- implementation. */

/*
INIT mercury__ll_backend__saved_vars__init
ENDINIT
*/

#include "ll_backend.saved_vars.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 194 "saved_vars.m"
struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s {
#line 197 "saved_vars.m"
  MR_bool ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded;
#line 200 "saved_vars.m"
  MR_Word ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27;
#line 203 "saved_vars.m"
  jmp_buf ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0;
#line 203 "saved_vars.m"
  MR_Word ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28;
#line 205 "saved_vars.m"
  MR_Box ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28;
#line 194 "saved_vars.m"
};


#line 158 "ll_backend.saved_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "ll_backend.saved_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "ll_backend.saved_vars.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 167 "ll_backend.saved_vars.c"
static const MR_PseudoTypeInfo ll_backend__saved_vars__ll_backend__saved_vars__field_types_slot_info_0_0[4];

#line 170 "ll_backend.saved_vars.c"
static const MR_DuFunctorDesc ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0;

#line 173 "ll_backend.saved_vars.c"
static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0[1];

#line 176 "ll_backend.saved_vars.c"
static const MR_DuPtagLayout ll_backend__saved_vars__ll_backend__saved_vars__du_ptag_ordered_slot_info_0[1];

#line 179 "ll_backend.saved_vars.c"
static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_name_ordered_slot_info_0[1];

#line 182 "ll_backend.saved_vars.c"
static const MR_Integer ll_backend__saved_vars__ll_backend__saved_vars__functor_number_map_slot_info_0[1];

#line 185 "ll_backend.saved_vars.c"
static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0_10001(
#line 188 "ll_backend.saved_vars.c"
  MR_Box ll_backend__saved_vars__wrapper_arg_1,
#line 190 "ll_backend.saved_vars.c"
  MR_Box ll_backend__saved_vars__wrapper_arg_2);

#line 193 "ll_backend.saved_vars.c"
static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0_10001(
#line 196 "ll_backend.saved_vars.c"
  MR_Box * ll_backend__saved_vars__wrapper_arg_1,
#line 198 "ll_backend.saved_vars.c"
  MR_Box ll_backend__saved_vars__wrapper_arg_2,
#line 200 "ll_backend.saved_vars.c"
  MR_Box ll_backend__saved_vars__wrapper_arg_3);

#line 577 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0(
#line 577 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__1_1,
#line 577 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__2_2,
#line 577 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__3_3);

#line 577 "saved_vars.m"
static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0(
#line 577 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 577 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__2_2);

#line 597 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_rename_var_5_p_0(
#line 597 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Var_6,
#line 597 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__NewVar_7,
#line 597 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Substitution_8,
#line 597 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18,
#line 597 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19);

#line 565 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_switch_4_p_0(
#line 565 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 565 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 565 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3,
#line 565 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4);

#line 556 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(
#line 556 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 556 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 556 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3,
#line 556 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4);

#line 539 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__push_into_cases_rename_6_p_0(
#line 539 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 539 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 539 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__3_3,
#line 539 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
#line 539 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5,
#line 539 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6);

#line 527 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__push_into_goals_rename_6_p_0(
#line 527 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 527 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 527 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__3_3,
#line 527 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
#line 527 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5,
#line 527 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6);

#line 509 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__push_into_goal_rename_6_p_0(
#line 509 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Goal0_7,
#line 509 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Goal_8,
#line 509 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Construct_9,
#line 509 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Var_10,
#line 509 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19,
#line 509 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_20);

#line 494 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__push_into_goal_6_p_0(
#line 494 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Goal0_7,
#line 494 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Goal_8,
#line 494 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Construct_9,
#line 494 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Var_10,
#line 494 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_17,
#line 494 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_18);

#line 362 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 362 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Goals_2,
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Construct_3,
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__IsNonLocal_5,
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6,
#line 362 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);

#line 284 "saved_vars.m"
static MR_Word MR_CALL 
ll_backend__saved_vars__can_push_2_f_0(
#line 284 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Var_4,
#line 284 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Goal_5);

#line 259 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__skip_constant_constructs_3_p_0(
#line 259 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 259 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 259 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__3_3);

#line 203 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(
#line 203 "saved_vars.m"
  void * ll_backend__saved_vars__env_ptr_arg);

#line 205 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3(
#line 205 "saved_vars.m"
  void * ll_backend__saved_vars__env_ptr_arg);

#line 203 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(
#line 203 "saved_vars.m"
  void * ll_backend__saved_vars__env_ptr_arg);

#line 203 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(
#line 203 "saved_vars.m"
  void * ll_backend__saved_vars__env_ptr_arg);

#line 194 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0(
#line 194 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 194 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 194 "saved_vars.m"
  MR_Word ll_backend__saved_vars__NonLocals_3,
#line 194 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4,
#line 194 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_5);

#line 118 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_goal_4_p_0(
#line 118 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Goal0_5,
#line 118 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Goal_6,
#line 118 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56,
#line 118 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);


static /* final */ const MR_Box ll_backend__saved_vars_scalar_common_1[2][2];




static /* final */ const MR_Box ll_backend__saved_vars_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 445 "ll_backend.saved_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 453 "ll_backend.saved_vars.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 461 "ll_backend.saved_vars.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 470 "ll_backend.saved_vars.c"
static const MR_PseudoTypeInfo ll_backend__saved_vars__ll_backend__saved_vars__field_types_slot_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 478 "ll_backend.saved_vars.c"
static const MR_DuFunctorDesc ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0 = {
  (MR_String) "slot_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__saved_vars__ll_backend__saved_vars__field_types_slot_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 493 "ll_backend.saved_vars.c"
static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0[1] = {
  &ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0
};

#line 498 "ll_backend.saved_vars.c"
static const MR_DuPtagLayout ll_backend__saved_vars__ll_backend__saved_vars__du_ptag_ordered_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0
  }
};

#line 507 "ll_backend.saved_vars.c"
static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_name_ordered_slot_info_0[1] = {
  &ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0
};

#line 512 "ll_backend.saved_vars.c"
static const MR_Integer ll_backend__saved_vars__ll_backend__saved_vars__functor_number_map_slot_info_0[1] = {
  (MR_Integer) 0
};

#line 517 "ll_backend.saved_vars.c"
const MR_TypeCtorInfo_Struct ll_backend__saved_vars__ll_backend__saved_vars__type_ctor_info_slot_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__saved_vars____Unify____slot_info_0_0_10001)),
  ((MR_Box) (ll_backend__saved_vars____Compare____slot_info_0_0_10001)),
  (MR_String) "ll_backend.saved_vars",
  (MR_String) "slot_info",
  {     ll_backend__saved_vars__ll_backend__saved_vars__du_name_ordered_slot_info_0 },
  {     ll_backend__saved_vars__ll_backend__saved_vars__du_ptag_ordered_slot_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__saved_vars__ll_backend__saved_vars__functor_number_map_slot_info_0
};

#line 534 "ll_backend.saved_vars.c"
static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0_10001(
#line 537 "ll_backend.saved_vars.c"
  MR_Box ll_backend__saved_vars__wrapper_arg_1,
#line 539 "ll_backend.saved_vars.c"
  MR_Box ll_backend__saved_vars__wrapper_arg_2)
#line 541 "ll_backend.saved_vars.c"
{
#line 543 "ll_backend.saved_vars.c"
  {
#line 545 "ll_backend.saved_vars.c"
    MR_bool ll_backend__saved_vars__succeeded;

#line 548 "ll_backend.saved_vars.c"
    {
#line 550 "ll_backend.saved_vars.c"
      ll_backend__saved_vars__succeeded = ll_backend__saved_vars____Unify____slot_info_0_0(((MR_Word) ll_backend__saved_vars__wrapper_arg_1), ((MR_Word) ll_backend__saved_vars__wrapper_arg_2));
    }
#line 553 "ll_backend.saved_vars.c"
    return ll_backend__saved_vars__succeeded;
#line 555 "ll_backend.saved_vars.c"
  }
#line 557 "ll_backend.saved_vars.c"
}

#line 560 "ll_backend.saved_vars.c"
static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0_10001(
#line 563 "ll_backend.saved_vars.c"
  MR_Box * ll_backend__saved_vars__wrapper_arg_1,
#line 565 "ll_backend.saved_vars.c"
  MR_Box ll_backend__saved_vars__wrapper_arg_2,
#line 567 "ll_backend.saved_vars.c"
  MR_Box ll_backend__saved_vars__wrapper_arg_3)
#line 569 "ll_backend.saved_vars.c"
{
#line 571 "ll_backend.saved_vars.c"
  {
#line 573 "ll_backend.saved_vars.c"
    MR_Word ll_backend__saved_vars__conv0_HeadVar__1_1;

#line 576 "ll_backend.saved_vars.c"
    {
#line 578 "ll_backend.saved_vars.c"
      ll_backend__saved_vars____Compare____slot_info_0_0(&ll_backend__saved_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__saved_vars__wrapper_arg_2), ((MR_Word) ll_backend__saved_vars__wrapper_arg_3));
    }
#line 581 "ll_backend.saved_vars.c"
    *ll_backend__saved_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__saved_vars__conv0_HeadVar__1_1));
#line 583 "ll_backend.saved_vars.c"
  }
#line 585 "ll_backend.saved_vars.c"
}

#line 577 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0(
#line 577 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__1_1,
#line 577 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__2_2,
#line 577 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__3_3)
#line 577 "saved_vars.m"
{
#line 577 "saved_vars.m"
  {
#line 577 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;
#line 577 "saved_vars.m"
    MR_Integer ll_backend__saved_vars__CastX_15 = (MR_Integer) ll_backend__saved_vars__HeadVar__2_2;
#line 577 "saved_vars.m"
    MR_Integer ll_backend__saved_vars__CastY_16 = (MR_Integer) ll_backend__saved_vars__HeadVar__3_3;

#line 577 "saved_vars.m"
    ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__CastX_15 == ll_backend__saved_vars__CastY_16);
#line 577 "saved_vars.m"
    if (ll_backend__saved_vars__succeeded)
#line 612 "ll_backend.saved_vars.c"
      *ll_backend__saved_vars__HeadVar__1_1 = (MR_Integer) 0;
#line 577 "saved_vars.m"
    else
#line 577 "saved_vars.m"
      {
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 3)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__3_3, (MR_Integer) 0)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__3_3, (MR_Integer) 1)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__3_3, (MR_Integer) 2)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__3_3, (MR_Integer) 3)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_12_12;

#line 577 "saved_vars.m"
        {
#line 577 "saved_vars.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_1[1], &ll_backend__saved_vars__V_12_12, ((MR_Box) (ll_backend__saved_vars__V_4_4)), ((MR_Box) (ll_backend__saved_vars__V_8_8)));
        }
#line 642 "ll_backend.saved_vars.c"
        ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_12_12 == (MR_Integer) 0);
#line 577 "saved_vars.m"
        ll_backend__saved_vars__succeeded = !(ll_backend__saved_vars__succeeded);
#line 577 "saved_vars.m"
        if (ll_backend__saved_vars__succeeded)
#line 577 "saved_vars.m"
          *ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__V_12_12;
#line 577 "saved_vars.m"
        else
#line 577 "saved_vars.m"
          {
#line 577 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_13_13;

#line 577 "saved_vars.m"
            {
#line 577 "saved_vars.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &ll_backend__saved_vars__V_13_13, ((MR_Box) (ll_backend__saved_vars__V_5_5)), ((MR_Box) (ll_backend__saved_vars__V_9_9)));
            }
#line 662 "ll_backend.saved_vars.c"
            ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_13_13 == (MR_Integer) 0);
#line 577 "saved_vars.m"
            ll_backend__saved_vars__succeeded = !(ll_backend__saved_vars__succeeded);
#line 577 "saved_vars.m"
            if (ll_backend__saved_vars__succeeded)
#line 577 "saved_vars.m"
              *ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__V_13_13;
#line 577 "saved_vars.m"
            else
#line 577 "saved_vars.m"
              {
#line 577 "saved_vars.m"
                MR_Word ll_backend__saved_vars__V_14_14;

#line 577 "saved_vars.m"
                {
#line 577 "saved_vars.m"
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&ll_backend__saved_vars__V_14_14, ll_backend__saved_vars__V_6_6, ll_backend__saved_vars__V_10_10);
                }
#line 682 "ll_backend.saved_vars.c"
                ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_14_14 == (MR_Integer) 0);
#line 577 "saved_vars.m"
                ll_backend__saved_vars__succeeded = !(ll_backend__saved_vars__succeeded);
#line 577 "saved_vars.m"
                if (ll_backend__saved_vars__succeeded)
#line 577 "saved_vars.m"
                  *ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__V_14_14;
#line 577 "saved_vars.m"
                else
#line 577 "saved_vars.m"
                  {
#line 577 "saved_vars.m"
                    MR_Integer ll_backend__saved_vars__V_21_21 = (MR_Integer) ll_backend__saved_vars__V_7_7;
#line 577 "saved_vars.m"
                    MR_Integer ll_backend__saved_vars__V_22_22 = (MR_Integer) ll_backend__saved_vars__V_11_11;

#line 577 "saved_vars.m"
                    {
#line 577 "saved_vars.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__saved_vars__HeadVar__1_1, ll_backend__saved_vars__V_21_21, ll_backend__saved_vars__V_22_22);
#line 577 "saved_vars.m"
                      return;
                    }
#line 577 "saved_vars.m"
                  }
#line 577 "saved_vars.m"
              }
#line 577 "saved_vars.m"
          }
#line 577 "saved_vars.m"
      }
#line 577 "saved_vars.m"
  }
#line 577 "saved_vars.m"
}

#line 577 "saved_vars.m"
static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0(
#line 577 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 577 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__2_2)
#line 577 "saved_vars.m"
{
#line 577 "saved_vars.m"
  {
#line 577 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;
#line 577 "saved_vars.m"
    MR_Integer ll_backend__saved_vars__CastX_11 = (MR_Integer) ll_backend__saved_vars__HeadVar__1_1;
#line 577 "saved_vars.m"
    MR_Integer ll_backend__saved_vars__CastY_12 = (MR_Integer) ll_backend__saved_vars__HeadVar__2_2;

#line 577 "saved_vars.m"
    ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__CastX_11 == ll_backend__saved_vars__CastY_12);
#line 577 "saved_vars.m"
    if (ll_backend__saved_vars__succeeded)
#line 577 "saved_vars.m"
      ll_backend__saved_vars__succeeded = MR_TRUE;
#line 577 "saved_vars.m"
    else
#line 577 "saved_vars.m"
      {
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__TypeCtorInfo_14_14;
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 2)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 3)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 0)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 1)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 2)));
#line 577 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 3)));

#line 766 "ll_backend.saved_vars.c"
        {
#line 768 "ll_backend.saved_vars.c"
          ll_backend__saved_vars__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_1[1], ((MR_Box) (ll_backend__saved_vars__V_3_3)), ((MR_Box) (ll_backend__saved_vars__V_7_7)));
        }
#line 577 "saved_vars.m"
        if (ll_backend__saved_vars__succeeded)
#line 577 "saved_vars.m"
          {
#line 775 "ll_backend.saved_vars.c"
            ll_backend__saved_vars__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 777 "ll_backend.saved_vars.c"
            {
#line 779 "ll_backend.saved_vars.c"
              ll_backend__saved_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__saved_vars__TypeCtorInfo_14_14, ((MR_Box) (ll_backend__saved_vars__V_4_4)), ((MR_Box) (ll_backend__saved_vars__V_8_8)));
            }
#line 577 "saved_vars.m"
            if (ll_backend__saved_vars__succeeded)
#line 577 "saved_vars.m"
              {
#line 786 "ll_backend.saved_vars.c"
                {
#line 788 "ll_backend.saved_vars.c"
                  ll_backend__saved_vars__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ll_backend__saved_vars__V_5_5, ll_backend__saved_vars__V_9_9);
                }
#line 577 "saved_vars.m"
                if (ll_backend__saved_vars__succeeded)
#line 793 "ll_backend.saved_vars.c"
                  ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_6_6 == ll_backend__saved_vars__V_10_10);
#line 577 "saved_vars.m"
              }
#line 577 "saved_vars.m"
          }
#line 577 "saved_vars.m"
      }
#line 577 "saved_vars.m"
    return ll_backend__saved_vars__succeeded;
#line 577 "saved_vars.m"
  }
#line 577 "saved_vars.m"
}

#line 597 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_rename_var_5_p_0(
#line 597 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Var_6,
#line 597 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__NewVar_7,
#line 597 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Substitution_8,
#line 597 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18,
#line 597 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19)
#line 597 "saved_vars.m"
{
#line 600 "saved_vars.m"
  {
#line 600 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__TypeInfo_25_25;
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Varset0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 0)));
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 1)));
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__RttiVarMaps0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 2)));
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__TypeInfoLiveness_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 3)));
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Varset_14;
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Type_15;
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__VarTypes_16;
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__RttiVarMaps_17;
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__V_20_20;
#line 600 "saved_vars.m"
    MR_Word ll_backend__saved_vars__V_21_21;

#line 602 "saved_vars.m"
    {
#line 602 "saved_vars.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__NewVar_7, ll_backend__saved_vars__Varset0_10, &ll_backend__saved_vars__Varset_14);
    }
#line 603 "saved_vars.m"
    {
#line 603 "saved_vars.m"
      ll_backend__saved_vars__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "saved_vars.m"
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__V_21_21, 0) = ((MR_Box) (ll_backend__saved_vars__Var_6));
#line 603 "saved_vars.m"
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__V_21_21, 1) = ((MR_Box) (*ll_backend__saved_vars__NewVar_7));
#line 603 "saved_vars.m"
    }
#line 603 "saved_vars.m"
    {
#line 603 "saved_vars.m"
      ll_backend__saved_vars__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "saved_vars.m"
      MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_20_20, 0) = ((MR_Box) (ll_backend__saved_vars__V_21_21));
#line 603 "saved_vars.m"
      MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "saved_vars.m"
    }
#line 875 "ll_backend.saved_vars.c"
    ll_backend__saved_vars__TypeInfo_25_25 = (MR_Word) &ll_backend__saved_vars_scalar_common_1[0];
#line 603 "saved_vars.m"
    {
#line 603 "saved_vars.m"
      mercury__map__from_assoc_list_2_p_0(ll_backend__saved_vars__TypeInfo_25_25, ll_backend__saved_vars__TypeInfo_25_25, ll_backend__saved_vars__V_20_20, ll_backend__saved_vars__Substitution_8);
    }
#line 604 "saved_vars.m"
    {
#line 604 "saved_vars.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__saved_vars__VarTypes0_11, ll_backend__saved_vars__Var_6, &ll_backend__saved_vars__Type_15);
    }
#line 605 "saved_vars.m"
    {
#line 605 "saved_vars.m"
      parse_tree__prog_data__add_var_type_4_p_0(*ll_backend__saved_vars__NewVar_7, ll_backend__saved_vars__Type_15, ll_backend__saved_vars__VarTypes0_11, &ll_backend__saved_vars__VarTypes_16);
    }
#line 606 "saved_vars.m"
    {
#line 606 "saved_vars.m"
      hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(ll_backend__saved_vars__Var_6, *ll_backend__saved_vars__NewVar_7, ll_backend__saved_vars__RttiVarMaps0_12, &ll_backend__saved_vars__RttiVarMaps_17);
    }
#line 607 "saved_vars.m"
    {
#line 607 "saved_vars.m"
      MR_Word base;
#line 607 "saved_vars.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 607 "saved_vars.m"
      *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19 = base;
#line 607 "saved_vars.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__Varset_14));
#line 607 "saved_vars.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__VarTypes_16));
#line 607 "saved_vars.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__saved_vars__RttiVarMaps_17));
#line 607 "saved_vars.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__saved_vars__TypeInfoLiveness_13));
#line 607 "saved_vars.m"
    }
#line 600 "saved_vars.m"
  }
#line 597 "saved_vars.m"
}

#line 565 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_switch_4_p_0(
#line 565 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 565 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 565 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3,
#line 565 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4)
#line 565 "saved_vars.m"
{
#line 568 "saved_vars.m"
  {
#line 568 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;

#line 568 "saved_vars.m"
    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "saved_vars.m"
      {
#line 568 "saved_vars.m"
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 568 "saved_vars.m"
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3;
#line 568 "saved_vars.m"
      }
#line 568 "saved_vars.m"
    else
#line 569 "saved_vars.m"
      {
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Case_10;
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Cases_11;
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_8, (MR_Integer) 0)));
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_8, (MR_Integer) 1)));
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_8, (MR_Integer) 2)));
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal_16;
#line 569 "saved_vars.m"
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19;

#line 571 "saved_vars.m"
        {
#line 571 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_15, &ll_backend__saved_vars__Goal_16, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19);
        }
#line 572 "saved_vars.m"
        {
#line 572 "saved_vars.m"
          ll_backend__saved_vars__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 572 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_10, 0) = ((MR_Box) (ll_backend__saved_vars__MainConsId_13));
#line 572 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_10, 1) = ((MR_Box) (ll_backend__saved_vars__OtherConsIds_14));
#line 572 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_10, 2) = ((MR_Box) (ll_backend__saved_vars__Goal_16));
#line 572 "saved_vars.m"
        }
#line 573 "saved_vars.m"
        {
#line 573 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_switch_4_p_0(ll_backend__saved_vars__Cases0_9, &ll_backend__saved_vars__Cases_11, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4);
        }
#line 569 "saved_vars.m"
        {
#line 569 "saved_vars.m"
          MR_Word base;
#line 569 "saved_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "saved_vars.m"
          *ll_backend__saved_vars__HeadVar__2_2 = base;
#line 569 "saved_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Case_10));
#line 569 "saved_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Cases_11));
#line 569 "saved_vars.m"
        }
#line 569 "saved_vars.m"
      }
#line 568 "saved_vars.m"
  }
#line 565 "saved_vars.m"
}

#line 556 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(
#line 556 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 556 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 556 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3,
#line 556 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4)
#line 556 "saved_vars.m"
{
#line 559 "saved_vars.m"
  {
#line 559 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;

#line 559 "saved_vars.m"
    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "saved_vars.m"
      {
#line 559 "saved_vars.m"
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "saved_vars.m"
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3;
#line 559 "saved_vars.m"
      }
#line 559 "saved_vars.m"
    else
#line 561 "saved_vars.m"
      {
#line 561 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 561 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 561 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal_10;
#line 561 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goals_11;
#line 561 "saved_vars.m"
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_15_15;

#line 562 "saved_vars.m"
        {
#line 562 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_8, &ll_backend__saved_vars__Goal_10, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_15_15);
        }
#line 563 "saved_vars.m"
        {
#line 563 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(ll_backend__saved_vars__Goals0_9, &ll_backend__saved_vars__Goals_11, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_15_15, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4);
        }
#line 560 "saved_vars.m"
        {
#line 560 "saved_vars.m"
          MR_Word base;
#line 560 "saved_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "saved_vars.m"
          *ll_backend__saved_vars__HeadVar__2_2 = base;
#line 560 "saved_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal_10));
#line 560 "saved_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals_11));
#line 560 "saved_vars.m"
        }
#line 561 "saved_vars.m"
      }
#line 559 "saved_vars.m"
  }
#line 556 "saved_vars.m"
}

#line 539 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__push_into_cases_rename_6_p_0(
#line 539 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 539 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 539 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__3_3,
#line 539 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
#line 539 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5,
#line 539 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6)
#line 539 "saved_vars.m"
{
#line 542 "saved_vars.m"
  {
#line 542 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;

#line 542 "saved_vars.m"
    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "saved_vars.m"
      {
#line 542 "saved_vars.m"
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "saved_vars.m"
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5;
#line 542 "saved_vars.m"
      }
#line 542 "saved_vars.m"
    else
#line 544 "saved_vars.m"
      {
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Case_14;
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Cases_15;
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_12, (MR_Integer) 0)));
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_12, (MR_Integer) 1)));
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_12, (MR_Integer) 2)));
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal_22;
#line 544 "saved_vars.m"
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_25_25;

#line 546 "saved_vars.m"
        {
#line 546 "saved_vars.m"
          ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Goal0_21, &ll_backend__saved_vars__Goal_22, ll_backend__saved_vars__HeadVar__3_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_25_25);
        }
#line 547 "saved_vars.m"
        {
#line 547 "saved_vars.m"
          ll_backend__saved_vars__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 547 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_14, 0) = ((MR_Box) (ll_backend__saved_vars__MainConsId_19));
#line 547 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_14, 1) = ((MR_Box) (ll_backend__saved_vars__OtherConsIds_20));
#line 547 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_14, 2) = ((MR_Box) (ll_backend__saved_vars__Goal_22));
#line 547 "saved_vars.m"
        }
#line 548 "saved_vars.m"
        {
#line 548 "saved_vars.m"
          ll_backend__saved_vars__push_into_cases_rename_6_p_0(ll_backend__saved_vars__Cases0_13, &ll_backend__saved_vars__Cases_15, ll_backend__saved_vars__HeadVar__3_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_25_25, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6);
        }
#line 543 "saved_vars.m"
        {
#line 543 "saved_vars.m"
          MR_Word base;
#line 543 "saved_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "saved_vars.m"
          *ll_backend__saved_vars__HeadVar__2_2 = base;
#line 543 "saved_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Case_14));
#line 543 "saved_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Cases_15));
#line 543 "saved_vars.m"
        }
#line 544 "saved_vars.m"
      }
#line 542 "saved_vars.m"
  }
#line 539 "saved_vars.m"
}

#line 527 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__push_into_goals_rename_6_p_0(
#line 527 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 527 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 527 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__3_3,
#line 527 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
#line 527 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5,
#line 527 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6)
#line 527 "saved_vars.m"
{
#line 530 "saved_vars.m"
  {
#line 530 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;

#line 530 "saved_vars.m"
    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "saved_vars.m"
      {
#line 530 "saved_vars.m"
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 530 "saved_vars.m"
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5;
#line 530 "saved_vars.m"
      }
#line 530 "saved_vars.m"
    else
#line 532 "saved_vars.m"
      {
#line 532 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 532 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal_14;
#line 532 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goals_15;
#line 532 "saved_vars.m"
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21;

#line 533 "saved_vars.m"
        {
#line 533 "saved_vars.m"
          ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Goal0_12, &ll_backend__saved_vars__Goal_14, ll_backend__saved_vars__HeadVar__3_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21);
        }
#line 534 "saved_vars.m"
        {
#line 534 "saved_vars.m"
          ll_backend__saved_vars__push_into_goals_rename_6_p_0(ll_backend__saved_vars__Goals0_13, &ll_backend__saved_vars__Goals_15, ll_backend__saved_vars__HeadVar__3_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6);
        }
#line 531 "saved_vars.m"
        {
#line 531 "saved_vars.m"
          MR_Word base;
#line 531 "saved_vars.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "saved_vars.m"
          *ll_backend__saved_vars__HeadVar__2_2 = base;
#line 531 "saved_vars.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal_14));
#line 531 "saved_vars.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals_15));
#line 531 "saved_vars.m"
        }
#line 532 "saved_vars.m"
      }
#line 530 "saved_vars.m"
  }
#line 527 "saved_vars.m"
}

#line 509 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__push_into_goal_rename_6_p_0(
#line 509 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Goal0_7,
#line 509 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Goal_8,
#line 509 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Construct_9,
#line 509 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Var_10,
#line 509 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19,
#line 509 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_20)
#line 509 "saved_vars.m"
{
#line 512 "saved_vars.m"
  {
#line 512 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;
#line 512 "saved_vars.m"
    MR_Word ll_backend__saved_vars__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_7, (MR_Integer) 1)));
#line 512 "saved_vars.m"
    MR_Word ll_backend__saved_vars__NonLocals_14;
#line 513 "saved_vars.m"
    MR_Word ll_backend__saved_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_7, (MR_Integer) 0)));

#line 514 "saved_vars.m"
    {
#line 514 "saved_vars.m"
      ll_backend__saved_vars__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__saved_vars__GoalInfo0_13);
    }
#line 515 "saved_vars.m"
    {
#line 515 "saved_vars.m"
      ll_backend__saved_vars__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__NonLocals_14, ll_backend__saved_vars__Var_10);
    }
#line 520 "saved_vars.m"
    if (ll_backend__saved_vars__succeeded)
#line 516 "saved_vars.m"
      {
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__TypeInfo_25_44;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__NewVar_15;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Subst_16;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__NewConstruct_17;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal1_18;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Varset0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 0)));
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__VarTypes0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 1)));
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__RttiVarMaps0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 2)));
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__TypeInfoLiveness_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 3)));
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Varset_35;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Type_36;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__VarTypes_37;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__RttiVarMaps_38;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_39_39;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_40_40;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal1_52;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__GoalInfo1_54;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Conj1_55;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Conj_56;
#line 516 "saved_vars.m"
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_57;
#line 499 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_53_53;

#line 602 "saved_vars.m"
        {
#line 602 "saved_vars.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &ll_backend__saved_vars__NewVar_15, ll_backend__saved_vars__Varset0_31, &ll_backend__saved_vars__Varset_35);
        }
#line 603 "saved_vars.m"
        {
#line 603 "saved_vars.m"
          ll_backend__saved_vars__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__V_40_40, 0) = ((MR_Box) (ll_backend__saved_vars__Var_10));
#line 603 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__V_40_40, 1) = ((MR_Box) (ll_backend__saved_vars__NewVar_15));
#line 603 "saved_vars.m"
        }
#line 603 "saved_vars.m"
        {
#line 603 "saved_vars.m"
          ll_backend__saved_vars__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "saved_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, 0) = ((MR_Box) (ll_backend__saved_vars__V_40_40));
#line 603 "saved_vars.m"
          MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "saved_vars.m"
        }
#line 1376 "ll_backend.saved_vars.c"
        ll_backend__saved_vars__TypeInfo_25_44 = (MR_Word) &ll_backend__saved_vars_scalar_common_1[0];
#line 603 "saved_vars.m"
        {
#line 603 "saved_vars.m"
          mercury__map__from_assoc_list_2_p_0(ll_backend__saved_vars__TypeInfo_25_44, ll_backend__saved_vars__TypeInfo_25_44, ll_backend__saved_vars__V_39_39, &ll_backend__saved_vars__Subst_16);
        }
#line 604 "saved_vars.m"
        {
#line 604 "saved_vars.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__saved_vars__VarTypes0_32, ll_backend__saved_vars__Var_10, &ll_backend__saved_vars__Type_36);
        }
#line 605 "saved_vars.m"
        {
#line 605 "saved_vars.m"
          parse_tree__prog_data__add_var_type_4_p_0(ll_backend__saved_vars__NewVar_15, ll_backend__saved_vars__Type_36, ll_backend__saved_vars__VarTypes0_32, &ll_backend__saved_vars__VarTypes_37);
        }
#line 606 "saved_vars.m"
        {
#line 606 "saved_vars.m"
          hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(ll_backend__saved_vars__Var_10, ll_backend__saved_vars__NewVar_15, ll_backend__saved_vars__RttiVarMaps0_33, &ll_backend__saved_vars__RttiVarMaps_38);
        }
#line 607 "saved_vars.m"
        {
#line 607 "saved_vars.m"
          ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 607 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, 0) = ((MR_Box) (ll_backend__saved_vars__Varset_35));
#line 607 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, 1) = ((MR_Box) (ll_backend__saved_vars__VarTypes_37));
#line 607 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, 2) = ((MR_Box) (ll_backend__saved_vars__RttiVarMaps_38));
#line 607 "saved_vars.m"
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, 3) = ((MR_Box) (ll_backend__saved_vars__TypeInfoLiveness_34));
#line 607 "saved_vars.m"
        }
#line 517 "saved_vars.m"
        {
#line 517 "saved_vars.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_16, ll_backend__saved_vars__Construct_9, &ll_backend__saved_vars__NewConstruct_17);
        }
#line 518 "saved_vars.m"
        {
#line 518 "saved_vars.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_16, ll_backend__saved_vars__Goal0_7, &ll_backend__saved_vars__Goal1_18);
        }
#line 498 "saved_vars.m"
        {
#line 498 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal1_18, &ll_backend__saved_vars__Goal1_52, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_57);
        }
#line 499 "saved_vars.m"
        ll_backend__saved_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_52, (MR_Integer) 0)));
#line 499 "saved_vars.m"
        ll_backend__saved_vars__GoalInfo1_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_52, (MR_Integer) 1)));
#line 500 "saved_vars.m"
        {
#line 500 "saved_vars.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__saved_vars__Goal1_52, &ll_backend__saved_vars__Conj1_55);
        }
#line 501 "saved_vars.m"
        {
#line 501 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Conj1_55, &ll_backend__saved_vars__Conj_56, ll_backend__saved_vars__NewConstruct_17, ll_backend__saved_vars__NewVar_15, (MR_Integer) 0, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_57, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_20);
        }
#line 502 "saved_vars.m"
        {
#line 502 "saved_vars.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(ll_backend__saved_vars__Conj_56, ll_backend__saved_vars__GoalInfo1_54, ll_backend__saved_vars__Goal_8);
#line 502 "saved_vars.m"
          return;
        }
#line 516 "saved_vars.m"
      }
#line 520 "saved_vars.m"
    else
#line 521 "saved_vars.m"
      {
#line 521 "saved_vars.m"
        ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_7, ll_backend__saved_vars__Goal_8, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_20);
#line 521 "saved_vars.m"
        return;
      }
#line 512 "saved_vars.m"
  }
#line 509 "saved_vars.m"
}

#line 494 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__push_into_goal_6_p_0(
#line 494 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Goal0_7,
#line 494 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Goal_8,
#line 494 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Construct_9,
#line 494 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Var_10,
#line 494 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_17,
#line 494 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_18)
#line 494 "saved_vars.m"
{
#line 497 "saved_vars.m"
  {
#line 497 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;
#line 497 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Goal1_12;
#line 497 "saved_vars.m"
    MR_Word ll_backend__saved_vars__GoalInfo1_14;
#line 497 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Conj1_15;
#line 497 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Conj_16;
#line 497 "saved_vars.m"
    MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19;
#line 499 "saved_vars.m"
    MR_Word ll_backend__saved_vars__V_13_13;

#line 498 "saved_vars.m"
    {
#line 498 "saved_vars.m"
      ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_7, &ll_backend__saved_vars__Goal1_12, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_17, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19);
    }
#line 499 "saved_vars.m"
    ll_backend__saved_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_12, (MR_Integer) 0)));
#line 499 "saved_vars.m"
    ll_backend__saved_vars__GoalInfo1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_12, (MR_Integer) 1)));
#line 500 "saved_vars.m"
    {
#line 500 "saved_vars.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__saved_vars__Goal1_12, &ll_backend__saved_vars__Conj1_15);
    }
#line 501 "saved_vars.m"
    {
#line 501 "saved_vars.m"
      ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Conj1_15, &ll_backend__saved_vars__Conj_16, ll_backend__saved_vars__Construct_9, ll_backend__saved_vars__Var_10, (MR_Integer) 0, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_18);
    }
#line 502 "saved_vars.m"
    {
#line 502 "saved_vars.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(ll_backend__saved_vars__Conj_16, ll_backend__saved_vars__GoalInfo1_14, ll_backend__saved_vars__Goal_8);
#line 502 "saved_vars.m"
      return;
    }
#line 497 "saved_vars.m"
  }
#line 494 "saved_vars.m"
}

#line 362 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 362 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Goals_2,
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Construct_3,
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__IsNonLocal_5,
#line 362 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6,
#line 362 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7)
#line 362 "saved_vars.m"
{
#line 366 "saved_vars.m"
  while (MR_TRUE)
#line 366 "saved_vars.m"
    {
#line 366 "saved_vars.m"
      /* tailcall optimized into a loop */
#line 366 "saved_vars.m"
      {
#line 366 "saved_vars.m"
        MR_bool ll_backend__saved_vars__succeeded;

#line 366 "saved_vars.m"
        if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "saved_vars.m"
          {
#line 370 "saved_vars.m"
            if ((ll_backend__saved_vars__IsNonLocal_5 == (MR_Integer) 0))
#line 372 "saved_vars.m"
              *ll_backend__saved_vars__Goals_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 370 "saved_vars.m"
            else
#line 368 "saved_vars.m"
              {
#line 369 "saved_vars.m"
                {
#line 369 "saved_vars.m"
                  MR_Word base;
#line 369 "saved_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "saved_vars.m"
                  *ll_backend__saved_vars__Goals_2 = base;
#line 369 "saved_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Construct_3));
#line 369 "saved_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "saved_vars.m"
                }
#line 368 "saved_vars.m"
              }
#line 366 "saved_vars.m"
            *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6;
#line 366 "saved_vars.m"
          }
#line 366 "saved_vars.m"
        else
#line 375 "saved_vars.m"
          {
#line 375 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 375 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 375 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goal0Expr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_16, (MR_Integer) 0)));
#line 375 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goal0Info_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_16, (MR_Integer) 1)));
#line 375 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goal0NonLocals_25;

#line 377 "saved_vars.m"
            {
#line 377 "saved_vars.m"
              ll_backend__saved_vars__Goal0NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__saved_vars__Goal0Info_24);
            }
#line 378 "saved_vars.m"
            {
#line 378 "saved_vars.m"
              ll_backend__saved_vars__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__Goal0NonLocals_25, ll_backend__saved_vars__HeadVar__4_4);
            }
#line 485 "saved_vars.m"
            if (ll_backend__saved_vars__succeeded)
#line 387 "saved_vars.m"
              if (((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 0))))
#line 439 "saved_vars.m"
                {
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NegGoal0_62 = (MR_Word) MR_body(((MR_Word) ll_backend__saved_vars__Goal0Expr_23), (MR_Integer) 0);
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NegGoal1_63;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NegGoal_64;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_97_97;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_98_98;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_99_99;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Subst_151;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NewConstruct_152;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goal1_153;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goals1_154;
#line 439 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NewVar_155;

#line 440 "saved_vars.m"
                  {
#line 440 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars__NewVar_155, &ll_backend__saved_vars__Subst_151, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_97_97);
                  }
#line 441 "saved_vars.m"
                  {
#line 441 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_151, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_152);
                  }
#line 442 "saved_vars.m"
                  {
#line 442 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_151, ll_backend__saved_vars__NegGoal0_62, &ll_backend__saved_vars__NegGoal1_63);
                  }
#line 443 "saved_vars.m"
                  {
#line 443 "saved_vars.m"
                    ll_backend__saved_vars__push_into_goal_6_p_0(ll_backend__saved_vars__NegGoal1_63, &ll_backend__saved_vars__NegGoal_64, ll_backend__saved_vars__NewConstruct_152, ll_backend__saved_vars__NewVar_155, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_97_97, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_98_98);
                  }
#line 445 "saved_vars.m"
                  ll_backend__saved_vars__V_99_99 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__saved_vars__NegGoal_64);
#line 445 "saved_vars.m"
                  {
#line 445 "saved_vars.m"
                    ll_backend__saved_vars__Goal1_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "saved_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_153, 0) = ((MR_Box) (ll_backend__saved_vars__V_99_99));
#line 445 "saved_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_153, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
#line 445 "saved_vars.m"
                  }
#line 446 "saved_vars.m"
                  {
#line 446 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_154, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_98_98, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                  }
#line 448 "saved_vars.m"
                  {
#line 448 "saved_vars.m"
                    MR_Word base;
#line 448 "saved_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "saved_vars.m"
                    *ll_backend__saved_vars__Goals_2 = base;
#line 448 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_153));
#line 448 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_154));
#line 448 "saved_vars.m"
                  }
#line 439 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 2))))
#line 388 "saved_vars.m"
                {
#line 388 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_115_115;
#line 388 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_117_117;
#line 388 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Subst_124;
#line 388 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NewConstruct_125;
#line 388 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goal1_126;
#line 388 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goals1_127;
#line 389 "saved_vars.m"
                  MR_Word ll_backend__saved_vars___NewVar_122;

#line 389 "saved_vars.m"
                  {
#line 389 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars___NewVar_122, &ll_backend__saved_vars__Subst_124, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_115_115);
                  }
#line 390 "saved_vars.m"
                  {
#line 390 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_124, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_125);
                  }
#line 391 "saved_vars.m"
                  {
#line 391 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_124, ll_backend__saved_vars__Goal0_16, &ll_backend__saved_vars__Goal1_126);
                  }
#line 392 "saved_vars.m"
                  {
#line 392 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_127, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_115_115, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                  }
#line 394 "saved_vars.m"
                  {
#line 394 "saved_vars.m"
                    ll_backend__saved_vars__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_117_117, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_126));
#line 394 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_117_117, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_127));
#line 394 "saved_vars.m"
                  }
#line 394 "saved_vars.m"
                  {
#line 394 "saved_vars.m"
                    MR_Word base;
#line 394 "saved_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "saved_vars.m"
                    *ll_backend__saved_vars__Goals_2 = base;
#line 394 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__NewConstruct_125));
#line 394 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_117_117));
#line 394 "saved_vars.m"
                  }
#line 388 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 1))))
#line 380 "saved_vars.m"
                {
#line 380 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Subst_32;
#line 380 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NewConstruct_33;
#line 380 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goal1_34;
#line 380 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goals1_35;
#line 380 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_118_118;
#line 380 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_120_120;
#line 381 "saved_vars.m"
                  MR_Word ll_backend__saved_vars___NewVar_31;

#line 381 "saved_vars.m"
                  {
#line 381 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars___NewVar_31, &ll_backend__saved_vars__Subst_32, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_118_118);
                  }
#line 382 "saved_vars.m"
                  {
#line 382 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_32, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_33);
                  }
#line 383 "saved_vars.m"
                  {
#line 383 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_32, ll_backend__saved_vars__Goal0_16, &ll_backend__saved_vars__Goal1_34);
                  }
#line 384 "saved_vars.m"
                  {
#line 384 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_35, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_118_118, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                  }
#line 386 "saved_vars.m"
                  {
#line 386 "saved_vars.m"
                    ll_backend__saved_vars__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_120_120, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_34));
#line 386 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_120_120, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_35));
#line 386 "saved_vars.m"
                  }
#line 386 "saved_vars.m"
                  {
#line 386 "saved_vars.m"
                    MR_Word base;
#line 386 "saved_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "saved_vars.m"
                    *ll_backend__saved_vars__Goals_2 = base;
#line 386 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__NewConstruct_33));
#line 386 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_120_120));
#line 386 "saved_vars.m"
                  }
#line 380 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 404 "saved_vars.m"
                {
#line 404 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_109_109;
#line 404 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_111_111;
#line 404 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Subst_136;
#line 404 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NewConstruct_137;
#line 404 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goal1_138;
#line 404 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goals1_139;
#line 405 "saved_vars.m"
                  MR_Word ll_backend__saved_vars___NewVar_134;

#line 405 "saved_vars.m"
                  {
#line 405 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars___NewVar_134, &ll_backend__saved_vars__Subst_136, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_109_109);
                  }
#line 406 "saved_vars.m"
                  {
#line 406 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_136, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_137);
                  }
#line 407 "saved_vars.m"
                  {
#line 407 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_136, ll_backend__saved_vars__Goal0_16, &ll_backend__saved_vars__Goal1_138);
                  }
#line 408 "saved_vars.m"
                  {
#line 408 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_139, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_109_109, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                  }
#line 410 "saved_vars.m"
                  {
#line 410 "saved_vars.m"
                    ll_backend__saved_vars__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_111_111, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_138));
#line 410 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_111_111, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_139));
#line 410 "saved_vars.m"
                  }
#line 410 "saved_vars.m"
                  {
#line 410 "saved_vars.m"
                    MR_Word base;
#line 410 "saved_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "saved_vars.m"
                    *ll_backend__saved_vars__Goals_2 = base;
#line 410 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__NewConstruct_137));
#line 410 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_111_111));
#line 410 "saved_vars.m"
                  }
#line 404 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 412 "saved_vars.m"
                {
#line 412 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__ConjType_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
#line 412 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Conj0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 2)));

#line 418 "saved_vars.m"
                  if ((ll_backend__saved_vars__ConjType_54 == (MR_Integer) 1))
#line 419 "saved_vars.m"
                    {
#line 419 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__Conj_56;
#line 419 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_105_105;
#line 419 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__V_106_106;
#line 419 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__Goal1_141;
#line 419 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__Goals1_142;

#line 420 "saved_vars.m"
                      {
#line 420 "saved_vars.m"
                        ll_backend__saved_vars__push_into_goals_rename_6_p_0(ll_backend__saved_vars__Conj0_55, &ll_backend__saved_vars__Conj_56, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_105_105);
                      }
#line 422 "saved_vars.m"
                      {
#line 422 "saved_vars.m"
                        ll_backend__saved_vars__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 422 "saved_vars.m"
                        MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 422 "saved_vars.m"
                        MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_106_106, 1) = ((MR_Box) (ll_backend__saved_vars__ConjType_54));
#line 422 "saved_vars.m"
                        MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_106_106, 2) = ((MR_Box) (ll_backend__saved_vars__Conj_56));
#line 422 "saved_vars.m"
                      }
#line 422 "saved_vars.m"
                      {
#line 422 "saved_vars.m"
                        ll_backend__saved_vars__Goal1_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "saved_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_141, 0) = ((MR_Box) (ll_backend__saved_vars__V_106_106));
#line 422 "saved_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_141, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
#line 422 "saved_vars.m"
                      }
#line 423 "saved_vars.m"
                      {
#line 423 "saved_vars.m"
                        ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_142, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_105_105, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                      }
#line 425 "saved_vars.m"
                      {
#line 425 "saved_vars.m"
                        MR_Word base;
#line 425 "saved_vars.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "saved_vars.m"
                        *ll_backend__saved_vars__Goals_2 = base;
#line 425 "saved_vars.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_141));
#line 425 "saved_vars.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_142));
#line 425 "saved_vars.m"
                      }
#line 419 "saved_vars.m"
                    }
#line 418 "saved_vars.m"
                  else
#line 414 "saved_vars.m"
                    {
#line 414 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__Goals1_140;

#line 415 "saved_vars.m"
                      {
#line 415 "saved_vars.m"
                        mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__saved_vars__Conj0_55, ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_140);
                      }
#line 416 "saved_vars.m"
                      /* direct tailcall eliminated */
#line 416 "saved_vars.m"
                      {
#line 416 "saved_vars.m"
                        MR_Word ll_backend__saved_vars__HeadVar__1__tmp_copy_1 = ll_backend__saved_vars__Goals1_140;

#line 416 "saved_vars.m"
                        ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__HeadVar__1__tmp_copy_1;
#line 416 "saved_vars.m"
                      }
#line 416 "saved_vars.m"
                      continue;
#line 414 "saved_vars.m"
                    }
#line 412 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 450 "saved_vars.m"
                {
#line 450 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Disjuncts0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
#line 450 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Disjuncts_66;
#line 450 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_94_94;
#line 450 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_95_95;
#line 450 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goal1_156;
#line 450 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goals1_157;

#line 451 "saved_vars.m"
                  {
#line 451 "saved_vars.m"
                    ll_backend__saved_vars__push_into_goals_rename_6_p_0(ll_backend__saved_vars__Disjuncts0_65, &ll_backend__saved_vars__Disjuncts_66, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_94_94);
                  }
#line 453 "saved_vars.m"
                  {
#line 453 "saved_vars.m"
                    ll_backend__saved_vars__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 453 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_95_95, 1) = ((MR_Box) (ll_backend__saved_vars__Disjuncts_66));
#line 453 "saved_vars.m"
                  }
#line 453 "saved_vars.m"
                  {
#line 453 "saved_vars.m"
                    ll_backend__saved_vars__Goal1_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 453 "saved_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_156, 0) = ((MR_Box) (ll_backend__saved_vars__V_95_95));
#line 453 "saved_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_156, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
#line 453 "saved_vars.m"
                  }
#line 454 "saved_vars.m"
                  {
#line 454 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_157, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_94_94, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                  }
#line 456 "saved_vars.m"
                  {
#line 456 "saved_vars.m"
                    MR_Word base;
#line 456 "saved_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "saved_vars.m"
                    *ll_backend__saved_vars__Goals_2 = base;
#line 456 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_156));
#line 456 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_157));
#line 456 "saved_vars.m"
                  }
#line 450 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 396 "saved_vars.m"
                {
#line 396 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_112_112;
#line 396 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_114_114;
#line 396 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Subst_130;
#line 396 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NewConstruct_131;
#line 396 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goal1_132;
#line 396 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goals1_133;
#line 397 "saved_vars.m"
                  MR_Word ll_backend__saved_vars___NewVar_128;

#line 397 "saved_vars.m"
                  {
#line 397 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars___NewVar_128, &ll_backend__saved_vars__Subst_130, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_112_112);
                  }
#line 398 "saved_vars.m"
                  {
#line 398 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_130, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_131);
                  }
#line 399 "saved_vars.m"
                  {
#line 399 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_130, ll_backend__saved_vars__Goal0_16, &ll_backend__saved_vars__Goal1_132);
                  }
#line 400 "saved_vars.m"
                  {
#line 400 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_133, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_112_112, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                  }
#line 402 "saved_vars.m"
                  {
#line 402 "saved_vars.m"
                    ll_backend__saved_vars__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_114_114, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_132));
#line 402 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_114_114, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_133));
#line 402 "saved_vars.m"
                  }
#line 402 "saved_vars.m"
                  {
#line 402 "saved_vars.m"
                    MR_Word base;
#line 402 "saved_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "saved_vars.m"
                    *ll_backend__saved_vars__Goals_2 = base;
#line 402 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__NewConstruct_131));
#line 402 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_114_114));
#line 402 "saved_vars.m"
                  }
#line 396 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 472 "saved_vars.m"
                {
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Cond0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 2)));
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Then0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 3)));
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Else0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 4)));
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Cond_75;
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Then_76;
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Else_77;
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_84_84;
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_85_85;
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_86_86;
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_87_87;
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goal1_165;
#line 472 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goals1_166;

#line 473 "saved_vars.m"
                  {
#line 473 "saved_vars.m"
                    ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Cond0_72, &ll_backend__saved_vars__Cond_75, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_84_84);
                  }
#line 474 "saved_vars.m"
                  {
#line 474 "saved_vars.m"
                    ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Then0_73, &ll_backend__saved_vars__Then_76, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_84_84, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_85_85);
                  }
#line 475 "saved_vars.m"
                  {
#line 475 "saved_vars.m"
                    ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Else0_74, &ll_backend__saved_vars__Else_77, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_85_85, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_86_86);
                  }
#line 476 "saved_vars.m"
                  {
#line 476 "saved_vars.m"
                    ll_backend__saved_vars__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 476 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 476 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 1) = ((MR_Box) (ll_backend__saved_vars__V_71));
#line 476 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 2) = ((MR_Box) (ll_backend__saved_vars__Cond_75));
#line 476 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 3) = ((MR_Box) (ll_backend__saved_vars__Then_76));
#line 476 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 4) = ((MR_Box) (ll_backend__saved_vars__Else_77));
#line 476 "saved_vars.m"
                  }
#line 476 "saved_vars.m"
                  {
#line 476 "saved_vars.m"
                    ll_backend__saved_vars__Goal1_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "saved_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_165, 0) = ((MR_Box) (ll_backend__saved_vars__V_87_87));
#line 476 "saved_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_165, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
#line 476 "saved_vars.m"
                  }
#line 477 "saved_vars.m"
                  {
#line 477 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_166, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_86_86, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                  }
#line 479 "saved_vars.m"
                  {
#line 479 "saved_vars.m"
                    MR_Word base;
#line 479 "saved_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "saved_vars.m"
                    *ll_backend__saved_vars__Goals_2 = base;
#line 479 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_165));
#line 479 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_166));
#line 479 "saved_vars.m"
                  }
#line 472 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 428 "saved_vars.m"
                {
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Reason_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__SomeGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 2)));
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NewVar_59;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__SomeGoal1_60;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__SomeGoal_61;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_101_101;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_102_102;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__V_103_103;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Subst_147;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__NewConstruct_148;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goal1_149;
#line 428 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Goals1_150;

#line 429 "saved_vars.m"
                  {
#line 429 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars__NewVar_59, &ll_backend__saved_vars__Subst_147, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_101_101);
                  }
#line 430 "saved_vars.m"
                  {
#line 430 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_147, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_148);
                  }
#line 431 "saved_vars.m"
                  {
#line 431 "saved_vars.m"
                    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_147, ll_backend__saved_vars__SomeGoal0_58, &ll_backend__saved_vars__SomeGoal1_60);
                  }
#line 432 "saved_vars.m"
                  {
#line 432 "saved_vars.m"
                    ll_backend__saved_vars__push_into_goal_6_p_0(ll_backend__saved_vars__SomeGoal1_60, &ll_backend__saved_vars__SomeGoal_61, ll_backend__saved_vars__NewConstruct_148, ll_backend__saved_vars__NewVar_59, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_101_101, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_102_102);
                  }
#line 434 "saved_vars.m"
                  {
#line 434 "saved_vars.m"
                    ll_backend__saved_vars__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 434 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 434 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_103_103, 1) = ((MR_Box) (ll_backend__saved_vars__Reason_57));
#line 434 "saved_vars.m"
                    MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_103_103, 2) = ((MR_Box) (ll_backend__saved_vars__SomeGoal_61));
#line 434 "saved_vars.m"
                  }
#line 434 "saved_vars.m"
                  {
#line 434 "saved_vars.m"
                    ll_backend__saved_vars__Goal1_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 434 "saved_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_149, 0) = ((MR_Box) (ll_backend__saved_vars__V_103_103));
#line 434 "saved_vars.m"
                    MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_149, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
#line 434 "saved_vars.m"
                  }
#line 435 "saved_vars.m"
                  {
#line 435 "saved_vars.m"
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_150, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_102_102, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                  }
#line 437 "saved_vars.m"
                  {
#line 437 "saved_vars.m"
                    MR_Word base;
#line 437 "saved_vars.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "saved_vars.m"
                    *ll_backend__saved_vars__Goals_2 = base;
#line 437 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_149));
#line 437 "saved_vars.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_150));
#line 437 "saved_vars.m"
                  }
#line 428 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 387 "saved_vars.m"
              if (((((MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 481 "saved_vars.m"
                {
#line 483 "saved_vars.m"
                  {
#line 483 "saved_vars.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "predicate \140ll_backend.saved_vars.saved_vars_delay_goal\'/7", (MR_String) "shorthand");
#line 483 "saved_vars.m"
                    return;
                  }
#line 481 "saved_vars.m"
                }
#line 387 "saved_vars.m"
              else
#line 458 "saved_vars.m"
                {
#line 458 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__SwitchVar_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
#line 458 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__CF_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 2)));
#line 458 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__Cases0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 3)));

#line 459 "saved_vars.m"
                  {
#line 459 "saved_vars.m"
                    ll_backend__saved_vars__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_1[0], ((MR_Box) (ll_backend__saved_vars__SwitchVar_67)), ((MR_Box) (ll_backend__saved_vars__HeadVar__4_4)));
                  }
#line 463 "saved_vars.m"
                  if (ll_backend__saved_vars__succeeded)
#line 461 "saved_vars.m"
                    {
#line 461 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__V_90_90;
#line 461 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__Goals1_158;

#line 460 "saved_vars.m"
                      {
#line 460 "saved_vars.m"
                        ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_158, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                      }
#line 462 "saved_vars.m"
                      {
#line 462 "saved_vars.m"
                        ll_backend__saved_vars__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "saved_vars.m"
                        MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_90_90, 0) = ((MR_Box) (ll_backend__saved_vars__Goal0_16));
#line 462 "saved_vars.m"
                        MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_90_90, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_158));
#line 462 "saved_vars.m"
                      }
#line 462 "saved_vars.m"
                      {
#line 462 "saved_vars.m"
                        MR_Word base;
#line 462 "saved_vars.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "saved_vars.m"
                        *ll_backend__saved_vars__Goals_2 = base;
#line 462 "saved_vars.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Construct_3));
#line 462 "saved_vars.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_90_90));
#line 462 "saved_vars.m"
                      }
#line 461 "saved_vars.m"
                    }
#line 463 "saved_vars.m"
                  else
#line 465 "saved_vars.m"
                    {
#line 465 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__Cases_70;
#line 465 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_91_91;
#line 465 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__V_92_92;
#line 465 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__Goal1_159;
#line 465 "saved_vars.m"
                      MR_Word ll_backend__saved_vars__Goals1_160;

#line 464 "saved_vars.m"
                      {
#line 464 "saved_vars.m"
                        ll_backend__saved_vars__push_into_cases_rename_6_p_0(ll_backend__saved_vars__Cases0_69, &ll_backend__saved_vars__Cases_70, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_91_91);
                      }
#line 466 "saved_vars.m"
                      {
#line 466 "saved_vars.m"
                        ll_backend__saved_vars__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 466 "saved_vars.m"
                        MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 466 "saved_vars.m"
                        MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_92_92, 1) = ((MR_Box) (ll_backend__saved_vars__SwitchVar_67));
#line 466 "saved_vars.m"
                        MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_92_92, 2) = ((MR_Box) (ll_backend__saved_vars__CF_68));
#line 466 "saved_vars.m"
                        MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_92_92, 3) = ((MR_Box) (ll_backend__saved_vars__Cases_70));
#line 466 "saved_vars.m"
                      }
#line 466 "saved_vars.m"
                      {
#line 466 "saved_vars.m"
                        ll_backend__saved_vars__Goal1_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "saved_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_159, 0) = ((MR_Box) (ll_backend__saved_vars__V_92_92));
#line 466 "saved_vars.m"
                        MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_159, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
#line 466 "saved_vars.m"
                      }
#line 467 "saved_vars.m"
                      {
#line 467 "saved_vars.m"
                        ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_160, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_91_91, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                      }
#line 469 "saved_vars.m"
                      {
#line 469 "saved_vars.m"
                        MR_Word base;
#line 469 "saved_vars.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "saved_vars.m"
                        *ll_backend__saved_vars__Goals_2 = base;
#line 469 "saved_vars.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_159));
#line 469 "saved_vars.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_160));
#line 469 "saved_vars.m"
                      }
#line 465 "saved_vars.m"
                    }
#line 458 "saved_vars.m"
                }
#line 485 "saved_vars.m"
            else
#line 487 "saved_vars.m"
              {
#line 487 "saved_vars.m"
                MR_Word ll_backend__saved_vars__Goals1_167;

#line 486 "saved_vars.m"
                {
#line 486 "saved_vars.m"
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_167, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                }
#line 488 "saved_vars.m"
                {
#line 488 "saved_vars.m"
                  MR_Word base;
#line 488 "saved_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "saved_vars.m"
                  *ll_backend__saved_vars__Goals_2 = base;
#line 488 "saved_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal0_16));
#line 488 "saved_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_167));
#line 488 "saved_vars.m"
                }
#line 487 "saved_vars.m"
              }
#line 375 "saved_vars.m"
          }
#line 366 "saved_vars.m"
      }
#line 366 "saved_vars.m"
      break;
#line 366 "saved_vars.m"
    }
#line 362 "saved_vars.m"
}

#line 284 "saved_vars.m"
static MR_Word MR_CALL 
ll_backend__saved_vars__can_push_2_f_0(
#line 284 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Var_4,
#line 284 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Goal_5)
#line 284 "saved_vars.m"
{
#line 286 "saved_vars.m"
  {
#line 286 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;
#line 286 "saved_vars.m"
    MR_Word ll_backend__saved_vars__CanPush_6;
#line 286 "saved_vars.m"
    MR_Word ll_backend__saved_vars__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal_5, (MR_Integer) 0)));
#line 286 "saved_vars.m"
    MR_Word ll_backend__saved_vars__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal_5, (MR_Integer) 1)));
#line 286 "saved_vars.m"
    MR_Word ll_backend__saved_vars__NonLocals_9;

#line 288 "saved_vars.m"
    {
#line 288 "saved_vars.m"
      ll_backend__saved_vars__NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__saved_vars__GoalInfo_8);
    }
#line 289 "saved_vars.m"
    {
#line 289 "saved_vars.m"
      ll_backend__saved_vars__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__NonLocals_9, ll_backend__saved_vars__Var_4);
    }
#line 344 "saved_vars.m"
    if (ll_backend__saved_vars__succeeded)
#line 297 "saved_vars.m"
      if (((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 296 "saved_vars.m"
        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 304 "saved_vars.m"
        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 304 "saved_vars.m"
        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 304 "saved_vars.m"
        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 297 "saved_vars.m"
        {
#line 297 "saved_vars.m"
          MR_Word ll_backend__saved_vars__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 1)));
#line 298 "saved_vars.m"
          MR_Word ll_backend__saved_vars__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 2)));

#line 297 "saved_vars.m"
          if ((ll_backend__saved_vars__V_92_92 == (MR_Integer) 1))
#line 304 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 297 "saved_vars.m"
          else
#line 296 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 297 "saved_vars.m"
        }
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 296 "saved_vars.m"
        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 304 "saved_vars.m"
        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 296 "saved_vars.m"
        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 306 "saved_vars.m"
        {
#line 306 "saved_vars.m"
          MR_Word ll_backend__saved_vars__Reason_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 1)));
#line 306 "saved_vars.m"
          MR_Word ll_backend__saved_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 2)));

#line 313 "saved_vars.m"
          if (((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 0))))
#line 312 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 2))))
#line 322 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 1))))
#line 322 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 322 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 322 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 313 "saved_vars.m"
            {
#line 313 "saved_vars.m"
              MR_Word ll_backend__saved_vars__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 2)));
#line 327 "saved_vars.m"
              MR_Word ll_backend__saved_vars__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 1)));

#line 313 "saved_vars.m"
              if ((ll_backend__saved_vars__V_93_93 == (MR_Integer) 1))
#line 322 "saved_vars.m"
                ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 313 "saved_vars.m"
              else
#line 313 "saved_vars.m"
              if ((ll_backend__saved_vars__V_93_93 == (MR_Integer) 2))
#line 312 "saved_vars.m"
                ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 313 "saved_vars.m"
              else
#line 313 "saved_vars.m"
              if ((ll_backend__saved_vars__V_93_93 == (MR_Integer) 0))
#line 328 "saved_vars.m"
                {
#line 330 "saved_vars.m"
                  {
#line 330 "saved_vars.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                  }
#line 328 "saved_vars.m"
                }
#line 313 "saved_vars.m"
              else
#line 312 "saved_vars.m"
                ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 313 "saved_vars.m"
            }
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 322 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 328 "saved_vars.m"
            {
#line 330 "saved_vars.m"
              {
#line 330 "saved_vars.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
              }
#line 328 "saved_vars.m"
            }
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 328 "saved_vars.m"
            {
#line 330 "saved_vars.m"
              {
#line 330 "saved_vars.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
              }
#line 328 "saved_vars.m"
            }
#line 313 "saved_vars.m"
          else
#line 313 "saved_vars.m"
          if (((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 328 "saved_vars.m"
            {
#line 330 "saved_vars.m"
              {
#line 330 "saved_vars.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
              }
#line 328 "saved_vars.m"
            }
#line 313 "saved_vars.m"
          else
#line 322 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 306 "saved_vars.m"
        }
#line 297 "saved_vars.m"
      else
#line 297 "saved_vars.m"
      if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 340 "saved_vars.m"
        {
#line 342 "saved_vars.m"
          {
#line 342 "saved_vars.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "shorthand");
          }
#line 340 "saved_vars.m"
        }
#line 297 "saved_vars.m"
      else
#line 333 "saved_vars.m"
        {
#line 333 "saved_vars.m"
          MR_Word ll_backend__saved_vars__SwitchVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 1)));
#line 333 "saved_vars.m"
          MR_Word ll_backend__saved_vars__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 2)));
#line 333 "saved_vars.m"
          MR_Word ll_backend__saved_vars__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 3)));

#line 334 "saved_vars.m"
          {
#line 334 "saved_vars.m"
            ll_backend__saved_vars__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_1[0], ((MR_Box) (ll_backend__saved_vars__Var_4)), ((MR_Box) (ll_backend__saved_vars__SwitchVar_65)));
          }
#line 336 "saved_vars.m"
          if (ll_backend__saved_vars__succeeded)
#line 335 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
#line 336 "saved_vars.m"
          else
#line 337 "saved_vars.m"
            ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 333 "saved_vars.m"
        }
#line 344 "saved_vars.m"
    else
#line 345 "saved_vars.m"
      ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
#line 286 "saved_vars.m"
    return ll_backend__saved_vars__CanPush_6;
#line 286 "saved_vars.m"
  }
#line 284 "saved_vars.m"
}

#line 259 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__skip_constant_constructs_3_p_0(
#line 259 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 259 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 259 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__3_3)
#line 259 "saved_vars.m"
{
#line 262 "saved_vars.m"
  {
#line 262 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;

#line 262 "saved_vars.m"
    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 262 "saved_vars.m"
      {
#line 262 "saved_vars.m"
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "saved_vars.m"
        *ll_backend__saved_vars__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "saved_vars.m"
      }
#line 262 "saved_vars.m"
    else
#line 263 "saved_vars.m"
      {
#line 263 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goal0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goals0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 265 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Unif_11;
#line 265 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_4, (MR_Integer) 0)));
#line 265 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_22_22;
#line 265 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_4, (MR_Integer) 1)));
#line 265 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_8_8;
#line 265 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_9_9;
#line 265 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_10_10;
#line 265 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_12_12;
#line 266 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_14_14;
#line 266 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_15_15;
#line 266 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_16_16;
#line 266 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_17_17;
#line 266 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_18_18;
#line 266 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_19_19;

#line 265 "saved_vars.m"
        ll_backend__saved_vars__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 265 "saved_vars.m"
        if (ll_backend__saved_vars__succeeded)
#line 265 "saved_vars.m"
          {
#line 265 "saved_vars.m"
            ll_backend__saved_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 0)));
#line 265 "saved_vars.m"
            ll_backend__saved_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 1)));
#line 265 "saved_vars.m"
            ll_backend__saved_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 2)));
#line 265 "saved_vars.m"
            ll_backend__saved_vars__Unif_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 3)));
#line 265 "saved_vars.m"
            ll_backend__saved_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 4)));
#line 266 "saved_vars.m"
            ll_backend__saved_vars__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__Unif_11)) == (MR_mktag((MR_Integer) 0)));
#line 266 "saved_vars.m"
            if (ll_backend__saved_vars__succeeded)
#line 266 "saved_vars.m"
              {
#line 266 "saved_vars.m"
                ll_backend__saved_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 0)));
#line 266 "saved_vars.m"
                ll_backend__saved_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 1)));
#line 266 "saved_vars.m"
                ll_backend__saved_vars__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 2)));
#line 266 "saved_vars.m"
                ll_backend__saved_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 3)));
#line 266 "saved_vars.m"
                ll_backend__saved_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 4)));
#line 266 "saved_vars.m"
                ll_backend__saved_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 5)));
#line 266 "saved_vars.m"
                ll_backend__saved_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 6)));
#line 266 "saved_vars.m"
                ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "saved_vars.m"
              }
#line 265 "saved_vars.m"
          }
#line 270 "saved_vars.m"
        if (ll_backend__saved_vars__succeeded)
#line 268 "saved_vars.m"
          {
#line 268 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Constants1_20;

#line 268 "saved_vars.m"
            {
#line 268 "saved_vars.m"
              ll_backend__saved_vars__skip_constant_constructs_3_p_0(ll_backend__saved_vars__Goals0_5, &ll_backend__saved_vars__Constants1_20, ll_backend__saved_vars__HeadVar__3_3);
            }
#line 269 "saved_vars.m"
            {
#line 269 "saved_vars.m"
              MR_Word base;
#line 269 "saved_vars.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "saved_vars.m"
              *ll_backend__saved_vars__HeadVar__2_2 = base;
#line 269 "saved_vars.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal0_4));
#line 269 "saved_vars.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Constants1_20));
#line 269 "saved_vars.m"
            }
#line 268 "saved_vars.m"
          }
#line 270 "saved_vars.m"
        else
#line 271 "saved_vars.m"
          {
#line 271 "saved_vars.m"
            *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "saved_vars.m"
            *ll_backend__saved_vars__HeadVar__3_3 = ll_backend__saved_vars__HeadVar__1_1;
#line 271 "saved_vars.m"
          }
#line 263 "saved_vars.m"
      }
#line 262 "saved_vars.m"
  }
#line 259 "saved_vars.m"
}

#line 203 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(
#line 203 "saved_vars.m"
  void * ll_backend__saved_vars__env_ptr_arg)
#line 203 "saved_vars.m"
{
#line 203 "saved_vars.m"
  {
#line 203 "saved_vars.m"
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * ll_backend__saved_vars__env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) ll_backend__saved_vars__env_ptr_arg;

#line 203 "saved_vars.m"
    MR_builtin_longjmp((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0, 1);
#line 203 "saved_vars.m"
  }
#line 203 "saved_vars.m"
}

#line 205 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3(
#line 205 "saved_vars.m"
  void * ll_backend__saved_vars__env_ptr_arg)
#line 205 "saved_vars.m"
{
#line 205 "saved_vars.m"
  {
#line 205 "saved_vars.m"
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * ll_backend__saved_vars__env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) ll_backend__saved_vars__env_ptr_arg;

#line 205 "saved_vars.m"
    (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 = ((MR_Word) (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28);
#line 205 "saved_vars.m"
    {
#line 205 "saved_vars.m"
      ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(ll_backend__saved_vars__env_ptr);
#line 205 "saved_vars.m"
      return;
    }
#line 205 "saved_vars.m"
  }
#line 205 "saved_vars.m"
}

#line 203 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(
#line 203 "saved_vars.m"
  void * ll_backend__saved_vars__env_ptr_arg)
#line 203 "saved_vars.m"
{
#line 203 "saved_vars.m"
  {
#line 203 "saved_vars.m"
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * ll_backend__saved_vars__env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) ll_backend__saved_vars__env_ptr_arg;

#line 203 "saved_vars.m"
    {
#line 207 "saved_vars.m"
      MR_Word ll_backend__saved_vars__V_41_41;

#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 5))
#line 237 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 0))
#line 232 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 21))
#line 253 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 17))
#line 249 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 10))
#line 241 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 9))
#line 240 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 22))
#line 254 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 12))
#line 244 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 13))
#line 245 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 1))
#line 233 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 8))
#line 239 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 11))
#line 242 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 20))
#line 252 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 14))
#line 246 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 2))
#line 234 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 6))
#line 238 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 18))
#line 250 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 19))
#line 251 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 7))
#line 243 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 3))
#line 235 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 4))
#line 236 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 0;
#line 232 "saved_vars.m"
      else
#line 232 "saved_vars.m"
      if (((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 == (MR_Integer) 16))
#line 248 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 232 "saved_vars.m"
      else
#line 247 "saved_vars.m"
        ll_backend__saved_vars__V_41_41 = (MR_Integer) 1;
#line 207 "saved_vars.m"
      (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (ll_backend__saved_vars__V_41_41 == (MR_Integer) 1);
#line 206 "saved_vars.m"
      (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
#line 206 "saved_vars.m"
      if ((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 206 "saved_vars.m"
        {
#line 206 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(ll_backend__saved_vars__env_ptr);
#line 206 "saved_vars.m"
          return;
        }
#line 203 "saved_vars.m"
    }
#line 203 "saved_vars.m"
  }
#line 203 "saved_vars.m"
}

#line 203 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(
#line 203 "saved_vars.m"
  void * ll_backend__saved_vars__env_ptr_arg)
#line 203 "saved_vars.m"
{
#line 203 "saved_vars.m"
  {
#line 203 "saved_vars.m"
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * ll_backend__saved_vars__env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) ll_backend__saved_vars__env_ptr_arg;

#line 203 "saved_vars.m"
    if (MR_builtin_setjmp((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0) == 0)
#line 203 "saved_vars.m"
      {
#line 203 "saved_vars.m"
        {
#line 205 "saved_vars.m"
          {
#line 205 "saved_vars.m"
            mercury__set__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, &(ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28, (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27, ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3, ll_backend__saved_vars__env_ptr);
          }
#line 203 "saved_vars.m"
        }
#line 203 "saved_vars.m"
        (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = MR_FALSE;
#line 203 "saved_vars.m"
      }
#line 203 "saved_vars.m"
    else
#line 203 "saved_vars.m"
      (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = MR_TRUE;
#line 203 "saved_vars.m"
  }
#line 203 "saved_vars.m"
}

#line 194 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0(
#line 194 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 194 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
#line 194 "saved_vars.m"
  MR_Word ll_backend__saved_vars__NonLocals_3,
#line 194 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4,
#line 194 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_5)
#line 194 "saved_vars.m"
{
#line 194 "saved_vars.m"
  {
#line 194 "saved_vars.m"
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s ll_backend__saved_vars__env;

#line 197 "saved_vars.m"
    while (MR_TRUE)
#line 197 "saved_vars.m"
      {
#line 197 "saved_vars.m"
        /* tailcall optimized into a loop */
#line 197 "saved_vars.m"
        if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "saved_vars.m"
          {
#line 197 "saved_vars.m"
            *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "saved_vars.m"
            *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_5 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4;
#line 197 "saved_vars.m"
          }
#line 197 "saved_vars.m"
        else
#line 198 "saved_vars.m"
          {
#line 198 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Var_21;
#line 220 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Constants_29;
#line 220 "saved_vars.m"
            MR_Word ll_backend__saved_vars__OtherGoals_30;
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Unif_18;
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_10, (MR_Integer) 1)));
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__First_31;
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_10, (MR_Integer) 0)));
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_40_40;
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_42_42;
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_15_15;
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_16_16;
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_17_17;
#line 200 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_19_19;
#line 201 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_22_22;
#line 201 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_23_23;
#line 201 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_24_24;
#line 201 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_25_25;
#line 201 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_26_26;
#line 621 "saved_vars.m"
            MR_Word ll_backend__saved_vars__VarTypes_54;
#line 621 "saved_vars.m"
            MR_Word ll_backend__saved_vars__TypeInfoLiveness_56;
#line 621 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Type_57;
#line 622 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_53_53;
#line 622 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_55_55;
#line 212 "saved_vars.m"
            MR_Word ll_backend__saved_vars___Rest_32;

#line 200 "saved_vars.m"
            (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 200 "saved_vars.m"
            if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 200 "saved_vars.m"
              {
#line 200 "saved_vars.m"
                ll_backend__saved_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 0)));
#line 200 "saved_vars.m"
                ll_backend__saved_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 1)));
#line 200 "saved_vars.m"
                ll_backend__saved_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 2)));
#line 200 "saved_vars.m"
                ll_backend__saved_vars__Unif_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 3)));
#line 200 "saved_vars.m"
                ll_backend__saved_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 4)));
#line 201 "saved_vars.m"
                (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__Unif_18)) == (MR_mktag((MR_Integer) 0)));
#line 201 "saved_vars.m"
                if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 201 "saved_vars.m"
                  {
#line 201 "saved_vars.m"
                    ll_backend__saved_vars__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 0)));
#line 201 "saved_vars.m"
                    ll_backend__saved_vars__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 1)));
#line 201 "saved_vars.m"
                    ll_backend__saved_vars__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 2)));
#line 201 "saved_vars.m"
                    ll_backend__saved_vars__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 3)));
#line 201 "saved_vars.m"
                    ll_backend__saved_vars__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 4)));
#line 201 "saved_vars.m"
                    ll_backend__saved_vars__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 5)));
#line 201 "saved_vars.m"
                    ll_backend__saved_vars__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 6)));
#line 201 "saved_vars.m"
                    (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (ll_backend__saved_vars__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "saved_vars.m"
                    if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 200 "saved_vars.m"
                      {
#line 202 "saved_vars.m"
                        {
#line 202 "saved_vars.m"
                          (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__saved_vars__GoalInfo_20);
                        }
#line 203 "saved_vars.m"
                        {
#line 203 "saved_vars.m"
                          ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(&ll_backend__saved_vars__env);
                        }
#line 203 "saved_vars.m"
                        (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
#line 200 "saved_vars.m"
                        if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 200 "saved_vars.m"
                          {
#line 622 "saved_vars.m"
                            ll_backend__saved_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 0)));
#line 622 "saved_vars.m"
                            ll_backend__saved_vars__VarTypes_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 1)));
#line 622 "saved_vars.m"
                            ll_backend__saved_vars__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 2)));
#line 622 "saved_vars.m"
                            ll_backend__saved_vars__TypeInfoLiveness_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 3)));
#line 623 "saved_vars.m"
                            (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (ll_backend__saved_vars__TypeInfoLiveness_56 == (MR_Integer) 1);
#line 621 "saved_vars.m"
                            if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 621 "saved_vars.m"
                              {
#line 624 "saved_vars.m"
                                {
#line 624 "saved_vars.m"
                                  parse_tree__prog_data__lookup_var_type_3_p_0(ll_backend__saved_vars__VarTypes_54, ll_backend__saved_vars__Var_21, &ll_backend__saved_vars__Type_57);
                                }
#line 625 "saved_vars.m"
                                {
#line 625 "saved_vars.m"
                                  (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = check_hlds__polymorphism__type_is_type_info_or_ctor_type_1_p_0(ll_backend__saved_vars__Type_57);
                                }
#line 621 "saved_vars.m"
                              }
#line 210 "saved_vars.m"
                            (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
#line 200 "saved_vars.m"
                            if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 200 "saved_vars.m"
                              {
#line 211 "saved_vars.m"
                                {
#line 211 "saved_vars.m"
                                  ll_backend__saved_vars__skip_constant_constructs_3_p_0(ll_backend__saved_vars__Goals0_11, &ll_backend__saved_vars__Constants_29, &ll_backend__saved_vars__OtherGoals_30);
                                }
#line 212 "saved_vars.m"
                                (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__OtherGoals_30)) == (MR_mktag((MR_Integer) 1)));
#line 212 "saved_vars.m"
                                if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 212 "saved_vars.m"
                                  {
#line 212 "saved_vars.m"
                                    ll_backend__saved_vars__First_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__OtherGoals_30, (MR_Integer) 0)));
#line 212 "saved_vars.m"
                                    ll_backend__saved_vars___Rest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__OtherGoals_30, (MR_Integer) 1)));
#line 213 "saved_vars.m"
                                    {
#line 213 "saved_vars.m"
                                      ll_backend__saved_vars__V_42_42 = ll_backend__saved_vars__can_push_2_f_0(ll_backend__saved_vars__Var_21, ll_backend__saved_vars__First_31);
                                    }
#line 213 "saved_vars.m"
                                    (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (ll_backend__saved_vars__V_42_42 == (MR_Integer) 1);
#line 212 "saved_vars.m"
                                  }
#line 200 "saved_vars.m"
                              }
#line 200 "saved_vars.m"
                          }
#line 200 "saved_vars.m"
                      }
#line 201 "saved_vars.m"
                  }
#line 200 "saved_vars.m"
              }
#line 220 "saved_vars.m"
            if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
#line 215 "saved_vars.m"
              {
#line 215 "saved_vars.m"
                MR_Word ll_backend__saved_vars__IsNonLocal_33;
#line 215 "saved_vars.m"
                MR_Word ll_backend__saved_vars__Goals1_34;
#line 215 "saved_vars.m"
                MR_Word ll_backend__saved_vars__Goals2_35;
#line 215 "saved_vars.m"
                MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_43_43;

#line 215 "saved_vars.m"
                {
#line 215 "saved_vars.m"
                  parse_tree__set_of_var__is_member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__NonLocals_3, ll_backend__saved_vars__Var_21, &ll_backend__saved_vars__IsNonLocal_33);
                }
#line 216 "saved_vars.m"
                {
#line 216 "saved_vars.m"
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__OtherGoals_30, &ll_backend__saved_vars__Goals1_34, ll_backend__saved_vars__Goal0_10, ll_backend__saved_vars__Var_21, ll_backend__saved_vars__IsNonLocal_33, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_43_43);
                }
#line 218 "saved_vars.m"
                {
#line 218 "saved_vars.m"
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__saved_vars__Constants_29, ll_backend__saved_vars__Goals1_34, &ll_backend__saved_vars__Goals2_35);
                }
#line 219 "saved_vars.m"
                /* direct tailcall eliminated */
#line 219 "saved_vars.m"
                {
#line 219 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__HeadVar__1__tmp_copy_1 = ll_backend__saved_vars__Goals2_35;
#line 219 "saved_vars.m"
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0__tmp_copy_4 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_43_43;

#line 219 "saved_vars.m"
                  ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0__tmp_copy_4;
#line 219 "saved_vars.m"
                  ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__HeadVar__1__tmp_copy_1;
#line 219 "saved_vars.m"
                }
#line 219 "saved_vars.m"
                continue;
#line 215 "saved_vars.m"
              }
#line 220 "saved_vars.m"
            else
#line 221 "saved_vars.m"
              {
#line 221 "saved_vars.m"
                MR_Word ll_backend__saved_vars__Goal1_36;
#line 221 "saved_vars.m"
                MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_45_45;
#line 221 "saved_vars.m"
                MR_Word ll_backend__saved_vars__Goals1_47;

#line 221 "saved_vars.m"
                {
#line 221 "saved_vars.m"
                  ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_10, &ll_backend__saved_vars__Goal1_36, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_45_45);
                }
#line 222 "saved_vars.m"
                {
#line 222 "saved_vars.m"
                  ll_backend__saved_vars__saved_vars_in_conj_5_p_0(ll_backend__saved_vars__Goals0_11, &ll_backend__saved_vars__Goals1_47, ll_backend__saved_vars__NonLocals_3, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_45_45, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_5);
                }
#line 223 "saved_vars.m"
                {
#line 223 "saved_vars.m"
                  MR_Word base;
#line 223 "saved_vars.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "saved_vars.m"
                  *ll_backend__saved_vars__HeadVar__2_2 = base;
#line 223 "saved_vars.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_36));
#line 223 "saved_vars.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_47));
#line 223 "saved_vars.m"
                }
#line 221 "saved_vars.m"
              }
#line 198 "saved_vars.m"
          }
#line 197 "saved_vars.m"
        break;
#line 197 "saved_vars.m"
      }
#line 194 "saved_vars.m"
  }
#line 194 "saved_vars.m"
}

#line 118 "saved_vars.m"
static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_goal_4_p_0(
#line 118 "saved_vars.m"
  MR_Word ll_backend__saved_vars__Goal0_5,
#line 118 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__Goal_6,
#line 118 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56,
#line 118 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57)
#line 118 "saved_vars.m"
{
#line 121 "saved_vars.m"
  {
#line 121 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;
#line 121 "saved_vars.m"
    MR_Word ll_backend__saved_vars__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_5, (MR_Integer) 0)));
#line 121 "saved_vars.m"
    MR_Word ll_backend__saved_vars__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_5, (MR_Integer) 1)));

#line 135 "saved_vars.m"
    if (((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 141 "saved_vars.m"
      {
#line 141 "saved_vars.m"
        MR_Word ll_backend__saved_vars__NegGoal0_15 = (MR_Word) MR_body(((MR_Word) ll_backend__saved_vars__GoalExpr0_8), (MR_Integer) 0);
#line 141 "saved_vars.m"
        MR_Word ll_backend__saved_vars__NegGoal_16;
#line 141 "saved_vars.m"
        MR_Word ll_backend__saved_vars__GoalExpr_75;

#line 142 "saved_vars.m"
        {
#line 142 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__NegGoal0_15, &ll_backend__saved_vars__NegGoal_16, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
        }
#line 143 "saved_vars.m"
        ll_backend__saved_vars__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__saved_vars__NegGoal_16);
#line 144 "saved_vars.m"
        {
#line 144 "saved_vars.m"
          MR_Word base;
#line 144 "saved_vars.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "saved_vars.m"
          *ll_backend__saved_vars__Goal_6 = base;
#line 144 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_75));
#line 144 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
#line 144 "saved_vars.m"
        }
#line 141 "saved_vars.m"
      }
#line 135 "saved_vars.m"
    else
#line 135 "saved_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 124 "saved_vars.m"
      {
#line 124 "saved_vars.m"
        MR_Word ll_backend__saved_vars__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
#line 124 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 2)));

#line 130 "saved_vars.m"
        if ((ll_backend__saved_vars__ConjType_10 == (MR_Integer) 1))
#line 131 "saved_vars.m"
          {
#line 131 "saved_vars.m"
            MR_Word ll_backend__saved_vars__V_70_70;
#line 131 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goals_72;

#line 132 "saved_vars.m"
            {
#line 132 "saved_vars.m"
              ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(ll_backend__saved_vars__Goals0_11, &ll_backend__saved_vars__Goals_72, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
            }
#line 133 "saved_vars.m"
            {
#line 133 "saved_vars.m"
              ll_backend__saved_vars__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 133 "saved_vars.m"
              MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 133 "saved_vars.m"
              MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_70_70, 1) = ((MR_Box) (ll_backend__saved_vars__ConjType_10));
#line 133 "saved_vars.m"
              MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_70_70, 2) = ((MR_Box) (ll_backend__saved_vars__Goals_72));
#line 133 "saved_vars.m"
            }
#line 133 "saved_vars.m"
            {
#line 133 "saved_vars.m"
              MR_Word base;
#line 133 "saved_vars.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "saved_vars.m"
              *ll_backend__saved_vars__Goal_6 = base;
#line 133 "saved_vars.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__V_70_70));
#line 133 "saved_vars.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
#line 133 "saved_vars.m"
            }
#line 131 "saved_vars.m"
          }
#line 130 "saved_vars.m"
        else
#line 126 "saved_vars.m"
          {
#line 126 "saved_vars.m"
            MR_Word ll_backend__saved_vars__NonLocals_12;
#line 126 "saved_vars.m"
            MR_Word ll_backend__saved_vars__Goals_13;

#line 127 "saved_vars.m"
            {
#line 127 "saved_vars.m"
              ll_backend__saved_vars__NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__saved_vars__GoalInfo0_9);
            }
#line 128 "saved_vars.m"
            {
#line 128 "saved_vars.m"
              ll_backend__saved_vars__saved_vars_in_conj_5_p_0(ll_backend__saved_vars__Goals0_11, &ll_backend__saved_vars__Goals_13, ll_backend__saved_vars__NonLocals_12, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
            }
#line 129 "saved_vars.m"
            {
#line 129 "saved_vars.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(ll_backend__saved_vars__Goals_13, ll_backend__saved_vars__GoalInfo0_9, ll_backend__saved_vars__Goal_6);
#line 129 "saved_vars.m"
              return;
            }
#line 126 "saved_vars.m"
          }
#line 124 "saved_vars.m"
      }
#line 135 "saved_vars.m"
    else
#line 135 "saved_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 136 "saved_vars.m"
      {
#line 136 "saved_vars.m"
        MR_Word ll_backend__saved_vars__GoalExpr_14;
#line 136 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goals0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
#line 136 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Goals_74;

#line 137 "saved_vars.m"
        {
#line 137 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(ll_backend__saved_vars__Goals0_73, &ll_backend__saved_vars__Goals_74, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
        }
#line 138 "saved_vars.m"
        {
#line 138 "saved_vars.m"
          ll_backend__saved_vars__GoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 138 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_14, 1) = ((MR_Box) (ll_backend__saved_vars__Goals_74));
#line 138 "saved_vars.m"
        }
#line 139 "saved_vars.m"
        {
#line 139 "saved_vars.m"
          MR_Word base;
#line 139 "saved_vars.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 139 "saved_vars.m"
          *ll_backend__saved_vars__Goal_6 = base;
#line 139 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_14));
#line 139 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
#line 139 "saved_vars.m"
        }
#line 136 "saved_vars.m"
      }
#line 135 "saved_vars.m"
    else
#line 135 "saved_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 151 "saved_vars.m"
      {
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Cond0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 2)));
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Then0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 3)));
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Else0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 4)));
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Cond_25;
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Then_26;
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Else_27;
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_63_63;
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_64_64;
#line 151 "saved_vars.m"
        MR_Word ll_backend__saved_vars__GoalExpr_77;

#line 152 "saved_vars.m"
        {
#line 152 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Cond0_22, &ll_backend__saved_vars__Cond_25, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_63_63);
        }
#line 153 "saved_vars.m"
        {
#line 153 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Then0_23, &ll_backend__saved_vars__Then_26, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_63_63, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_64_64);
        }
#line 154 "saved_vars.m"
        {
#line 154 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Else0_24, &ll_backend__saved_vars__Else_27, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_64_64, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
        }
#line 155 "saved_vars.m"
        {
#line 155 "saved_vars.m"
          ll_backend__saved_vars__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 155 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 155 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 1) = ((MR_Box) (ll_backend__saved_vars__Vars_21));
#line 155 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 2) = ((MR_Box) (ll_backend__saved_vars__Cond_25));
#line 155 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 3) = ((MR_Box) (ll_backend__saved_vars__Then_26));
#line 155 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 4) = ((MR_Box) (ll_backend__saved_vars__Else_27));
#line 155 "saved_vars.m"
        }
#line 156 "saved_vars.m"
        {
#line 156 "saved_vars.m"
          MR_Word base;
#line 156 "saved_vars.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 156 "saved_vars.m"
          *ll_backend__saved_vars__Goal_6 = base;
#line 156 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_77));
#line 156 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
#line 156 "saved_vars.m"
        }
#line 151 "saved_vars.m"
      }
#line 135 "saved_vars.m"
    else
#line 135 "saved_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 158 "saved_vars.m"
      {
#line 158 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
#line 158 "saved_vars.m"
        MR_Word ll_backend__saved_vars__SubGoal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 2)));
#line 158 "saved_vars.m"
        MR_Word ll_backend__saved_vars__SubGoal_31;
#line 158 "saved_vars.m"
        MR_Word ll_backend__saved_vars__GoalExpr_78;
#line 159 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_61_61;
#line 159 "saved_vars.m"
        MR_Word ll_backend__saved_vars__V_30_30;

#line 159 "saved_vars.m"
        ll_backend__saved_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_28, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 159 "saved_vars.m"
        if (ll_backend__saved_vars__succeeded)
#line 159 "saved_vars.m"
          {
#line 159 "saved_vars.m"
            ll_backend__saved_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_28, (MR_Integer) 1)));
#line 159 "saved_vars.m"
            ll_backend__saved_vars__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_28, (MR_Integer) 2)));
#line 159 "saved_vars.m"
            ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_61_61 == (MR_Integer) 1);
#line 159 "saved_vars.m"
          }
#line 164 "saved_vars.m"
        if (ll_backend__saved_vars__succeeded)
#line 163 "saved_vars.m"
          {
#line 163 "saved_vars.m"
            ll_backend__saved_vars__SubGoal_31 = ll_backend__saved_vars__SubGoal0_29;
#line 163 "saved_vars.m"
            *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56;
#line 163 "saved_vars.m"
          }
#line 164 "saved_vars.m"
        else
#line 165 "saved_vars.m"
          {
#line 165 "saved_vars.m"
            ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__SubGoal0_29, &ll_backend__saved_vars__SubGoal_31, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
          }
#line 167 "saved_vars.m"
        {
#line 167 "saved_vars.m"
          ll_backend__saved_vars__GoalExpr_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 167 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 167 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_78, 1) = ((MR_Box) (ll_backend__saved_vars__Reason_28));
#line 167 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_78, 2) = ((MR_Box) (ll_backend__saved_vars__SubGoal_31));
#line 167 "saved_vars.m"
        }
#line 168 "saved_vars.m"
        {
#line 168 "saved_vars.m"
          MR_Word base;
#line 168 "saved_vars.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 168 "saved_vars.m"
          *ll_backend__saved_vars__Goal_6 = base;
#line 168 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_78));
#line 168 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
#line 168 "saved_vars.m"
        }
#line 158 "saved_vars.m"
      }
#line 135 "saved_vars.m"
    else
#line 135 "saved_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 177 "saved_vars.m"
      {
#line 179 "saved_vars.m"
        {
#line 179 "saved_vars.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "predicate \140ll_backend.saved_vars.saved_vars_in_goal\'/4", (MR_String) "shorthand");
#line 179 "saved_vars.m"
          return;
        }
#line 177 "saved_vars.m"
      }
#line 135 "saved_vars.m"
    else
#line 135 "saved_vars.m"
    if (((((MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 146 "saved_vars.m"
      {
#line 146 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
#line 146 "saved_vars.m"
        MR_Word ll_backend__saved_vars__CanFail_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 2)));
#line 146 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Cases0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 3)));
#line 146 "saved_vars.m"
        MR_Word ll_backend__saved_vars__Cases_20;
#line 146 "saved_vars.m"
        MR_Word ll_backend__saved_vars__GoalExpr_76;

#line 147 "saved_vars.m"
        {
#line 147 "saved_vars.m"
          ll_backend__saved_vars__saved_vars_in_switch_4_p_0(ll_backend__saved_vars__Cases0_19, &ll_backend__saved_vars__Cases_20, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
        }
#line 148 "saved_vars.m"
        {
#line 148 "saved_vars.m"
          ll_backend__saved_vars__GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 148 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 148 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_76, 1) = ((MR_Box) (ll_backend__saved_vars__Var_17));
#line 148 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_76, 2) = ((MR_Box) (ll_backend__saved_vars__CanFail_18));
#line 148 "saved_vars.m"
          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_76, 3) = ((MR_Box) (ll_backend__saved_vars__Cases_20));
#line 148 "saved_vars.m"
        }
#line 149 "saved_vars.m"
        {
#line 149 "saved_vars.m"
          MR_Word base;
#line 149 "saved_vars.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 149 "saved_vars.m"
          *ll_backend__saved_vars__Goal_6 = base;
#line 149 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_76));
#line 149 "saved_vars.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
#line 149 "saved_vars.m"
        }
#line 146 "saved_vars.m"
      }
#line 135 "saved_vars.m"
    else
#line 174 "saved_vars.m"
      {
#line 175 "saved_vars.m"
        *ll_backend__saved_vars__Goal_6 = ll_backend__saved_vars__Goal0_5;
#line 174 "saved_vars.m"
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56;
#line 174 "saved_vars.m"
      }
#line 121 "saved_vars.m"
  }
#line 118 "saved_vars.m"
}

#line 35 "saved_vars.m"
void MR_CALL 
ll_backend__saved_vars__saved_vars_proc_5_p_0(
#line 35 "saved_vars.m"
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
#line 35 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34,
#line 35 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_35,
#line 35 "saved_vars.m"
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36,
#line 35 "saved_vars.m"
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_37)
#line 35 "saved_vars.m"
{
#line 67 "saved_vars.m"
  {
#line 67 "saved_vars.m"
    MR_bool ll_backend__saved_vars__succeeded;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "saved_vars.m"
    MR_Integer ll_backend__saved_vars__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Globals_11;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__PredInfo_12;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__TypeInfoLiveness_13;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Goal0_14;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Varset0_15;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__VarTypes0_16;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__RttiVarMaps0_17;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__SlotInfo0_18;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Goal1_19;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__SlotInfo_20;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Varset1_21;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__VarTypes1_22;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__RttiVarMaps1_23;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__HeadVars_24;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Goal2_26;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Varset_27;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__VarTypes_28;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__RttiVarMaps_29;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__InstMap0_30;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__InstVarSet_31;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__Goal_32;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_63_63;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_64_64;
#line 67 "saved_vars.m"
    MR_Word ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_65_65;
#line 595 "saved_vars.m"
    MR_Word ll_backend__saved_vars__V_76_76;
#line 90 "saved_vars.m"
    MR_Word ll_backend__saved_vars___Warnings_25;

#line 69 "saved_vars.m"
    {
#line 69 "saved_vars.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Minimizing saved vars in ", ll_backend__saved_vars__PredId_6, ll_backend__saved_vars__ProcId_7, ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36);
    }
#line 73 "saved_vars.m"
    {
#line 73 "saved_vars.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36, &ll_backend__saved_vars__Globals_11);
    }
#line 74 "saved_vars.m"
    {
#line 74 "saved_vars.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36, ll_backend__saved_vars__PredId_6, &ll_backend__saved_vars__PredInfo_12);
    }
#line 75 "saved_vars.m"
    {
#line 75 "saved_vars.m"
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__saved_vars__PredInfo_12, ll_backend__saved_vars__Globals_11, &ll_backend__saved_vars__TypeInfoLiveness_13);
    }
#line 77 "saved_vars.m"
    {
#line 77 "saved_vars.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__Goal0_14);
    }
#line 78 "saved_vars.m"
    {
#line 78 "saved_vars.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__Varset0_15);
    }
#line 79 "saved_vars.m"
    {
#line 79 "saved_vars.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__VarTypes0_16);
    }
#line 80 "saved_vars.m"
    {
#line 80 "saved_vars.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__RttiVarMaps0_17);
    }
#line 589 "saved_vars.m"
    {
#line 589 "saved_vars.m"
      ll_backend__saved_vars__SlotInfo0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 589 "saved_vars.m"
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo0_18, 0) = ((MR_Box) (ll_backend__saved_vars__Varset0_15));
#line 589 "saved_vars.m"
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo0_18, 1) = ((MR_Box) (ll_backend__saved_vars__VarTypes0_16));
#line 589 "saved_vars.m"
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo0_18, 2) = ((MR_Box) (ll_backend__saved_vars__RttiVarMaps0_17));
#line 589 "saved_vars.m"
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo0_18, 3) = ((MR_Box) (ll_backend__saved_vars__TypeInfoLiveness_13));
#line 589 "saved_vars.m"
    }
#line 84 "saved_vars.m"
    {
#line 84 "saved_vars.m"
      ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_14, &ll_backend__saved_vars__Goal1_19, ll_backend__saved_vars__SlotInfo0_18, &ll_backend__saved_vars__SlotInfo_20);
    }
#line 595 "saved_vars.m"
    ll_backend__saved_vars__Varset1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo_20, (MR_Integer) 0)));
#line 595 "saved_vars.m"
    ll_backend__saved_vars__VarTypes1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo_20, (MR_Integer) 1)));
#line 595 "saved_vars.m"
    ll_backend__saved_vars__RttiVarMaps1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo_20, (MR_Integer) 2)));
#line 595 "saved_vars.m"
    ll_backend__saved_vars__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo_20, (MR_Integer) 3)));
#line 87 "saved_vars.m"
    {
#line 87 "saved_vars.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__HeadVars_24);
    }
#line 90 "saved_vars.m"
    {
#line 90 "saved_vars.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, ll_backend__saved_vars__HeadVars_24, &ll_backend__saved_vars___Warnings_25, ll_backend__saved_vars__Goal1_19, &ll_backend__saved_vars__Goal2_26, ll_backend__saved_vars__Varset1_21, &ll_backend__saved_vars__Varset_27, ll_backend__saved_vars__VarTypes1_22, &ll_backend__saved_vars__VarTypes_28, ll_backend__saved_vars__RttiVarMaps1_23, &ll_backend__saved_vars__RttiVarMaps_29);
    }
#line 93 "saved_vars.m"
    {
#line 93 "saved_vars.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36, &ll_backend__saved_vars__InstMap0_30);
    }
#line 94 "saved_vars.m"
    {
#line 94 "saved_vars.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__InstVarSet_31);
    }
#line 95 "saved_vars.m"
    {
#line 95 "saved_vars.m"
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, ll_backend__saved_vars__Goal2_26, &ll_backend__saved_vars__Goal_32, ll_backend__saved_vars__VarTypes_28, ll_backend__saved_vars__InstVarSet_31, ll_backend__saved_vars__InstMap0_30, ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36, ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_37);
    }
#line 111 "saved_vars.m"
    {
#line 111 "saved_vars.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__saved_vars__Goal_32, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_63_63);
    }
#line 112 "saved_vars.m"
    {
#line 112 "saved_vars.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__saved_vars__Varset_27, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_63_63, &ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_64_64);
    }
#line 113 "saved_vars.m"
    {
#line 113 "saved_vars.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__saved_vars__VarTypes_28, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_64_64, &ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_65_65);
    }
#line 114 "saved_vars.m"
    {
#line 114 "saved_vars.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(ll_backend__saved_vars__RttiVarMaps_29, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_65_65, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_35);
#line 114 "saved_vars.m"
      return;
    }
#line 67 "saved_vars.m"
  }
#line 35 "saved_vars.m"
}

void mercury__ll_backend__saved_vars__init(void)
{
}

void mercury__ll_backend__saved_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__saved_vars__ll_backend__saved_vars__type_ctor_info_slot_info_0);
}

void mercury__ll_backend__saved_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.saved_vars. */
