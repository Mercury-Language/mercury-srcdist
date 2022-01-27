/*
** Automatically generated from `saved_vars.m'
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


/* :- module ll_backend.saved_vars. */
/* :- implementation. */

/*
INIT mercury__ll_backend__saved_vars__init
ENDINIT
*/

#include "ll_backend.saved_vars.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s {
  MR_bool ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded;
  MR_Word ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27;
  jmp_buf ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0;
  MR_Word ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28;
  MR_Box ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ll_backend__saved_vars__ll_backend__saved_vars__field_types_slot_info_0_0[4];

static const MR_DuFunctorDesc ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0[1];

static const MR_DuPtagLayout ll_backend__saved_vars__ll_backend__saved_vars__du_ptag_ordered_slot_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_name_ordered_slot_info_0[1];

static const MR_Integer ll_backend__saved_vars__ll_backend__saved_vars__functor_number_map_slot_info_0[1];

static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0_10001(
  MR_Box ll_backend__saved_vars__wrapper_arg_1,
  MR_Box ll_backend__saved_vars__wrapper_arg_2);

static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0_10001(
  MR_Box * ll_backend__saved_vars__wrapper_arg_1,
  MR_Box ll_backend__saved_vars__wrapper_arg_2,
  MR_Box ll_backend__saved_vars__wrapper_arg_3);

static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0(
  MR_Word * ll_backend__saved_vars__HeadVar__1_1,
  MR_Word ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word ll_backend__saved_vars__HeadVar__2_2);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_rename_var_5_p_0(
  MR_Word ll_backend__saved_vars__Var_6,
  MR_Word * ll_backend__saved_vars__NewVar_7,
  MR_Word * ll_backend__saved_vars__Substitution_8,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_switch_4_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4);

static void MR_CALL 
ll_backend__saved_vars__push_into_cases_rename_6_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__HeadVar__3_3,
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6);

static void MR_CALL 
ll_backend__saved_vars__push_into_goals_rename_6_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__HeadVar__3_3,
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6);

static void MR_CALL 
ll_backend__saved_vars__push_into_goal_rename_6_p_0(
  MR_Word ll_backend__saved_vars__Goal0_7,
  MR_Word * ll_backend__saved_vars__Goal_8,
  MR_Word ll_backend__saved_vars__Construct_9,
  MR_Word ll_backend__saved_vars__Var_10,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_20);

static void MR_CALL 
ll_backend__saved_vars__push_into_goal_6_p_0(
  MR_Word ll_backend__saved_vars__Goal0_7,
  MR_Word * ll_backend__saved_vars__Goal_8,
  MR_Word ll_backend__saved_vars__Construct_9,
  MR_Word ll_backend__saved_vars__Var_10,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_17,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_18);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__Goals_2,
  MR_Word ll_backend__saved_vars__Construct_3,
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
  MR_Word ll_backend__saved_vars__IsNonLocal_5,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);

static MR_Word MR_CALL 
ll_backend__saved_vars__can_push_2_f_0(
  MR_Word ll_backend__saved_vars__Var_4,
  MR_Word ll_backend__saved_vars__Goal_5);

static void MR_CALL 
ll_backend__saved_vars__skip_constant_constructs_3_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word * ll_backend__saved_vars__HeadVar__3_3);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(
  void * ll_backend__saved_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3(
  void * ll_backend__saved_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(
  void * ll_backend__saved_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(
  void * ll_backend__saved_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__NonLocals_3,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_5);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_goal_4_p_0(
  MR_Word ll_backend__saved_vars__Goal0_5,
  MR_Word * ll_backend__saved_vars__Goal_6,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);


static /* final */ const MR_Box ll_backend__saved_vars_scalar_common_1[2][2];

static /* final */ const MR_Box ll_backend__saved_vars_scalar_common_2[1][3];


/* sealed */ struct ll_backend__saved_vars__vector_common_type_3_0_s {
  const MR_Word ll_backend__saved_vars__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ll_backend__saved_vars__vector_common_type_3_0_s ll_backend__saved_vars_vector_common_3[24];



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

static /* final */ const MR_Box ll_backend__saved_vars_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__saved_vars_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};


static /* final */ const struct ll_backend__saved_vars__vector_common_type_3_0_s ll_backend__saved_vars_vector_common_3[24] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 0 },
  /* row 8 */   {     (MR_Integer) 0 },
  /* row 9 */   {     (MR_Integer) 0 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 0 },
  /* row 12 */   {     (MR_Integer) 1 },
  /* row 13 */   {     (MR_Integer) 1 },
  /* row 14 */   {     (MR_Integer) 1 },
  /* row 15 */   {     (MR_Integer) 1 },
  /* row 16 */   {     (MR_Integer) 1 },
  /* row 17 */   {     (MR_Integer) 1 },
  /* row 18 */   {     (MR_Integer) 1 },
  /* row 19 */   {     (MR_Integer) 1 },
  /* row 20 */   {     (MR_Integer) 1 },
  /* row 21 */   {     (MR_Integer) 1 },
  /* row 22 */   {     (MR_Integer) 0 },
  /* row 23 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__saved_vars__ll_backend__saved_vars__field_types_slot_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0[1] = {
  &ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0
};

static const MR_DuPtagLayout ll_backend__saved_vars__ll_backend__saved_vars__du_ptag_ordered_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_name_ordered_slot_info_0[1] = {
  &ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0
};

static const MR_Integer ll_backend__saved_vars__ll_backend__saved_vars__functor_number_map_slot_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__saved_vars__ll_backend__saved_vars__type_ctor_info_slot_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0_10001(
  MR_Box ll_backend__saved_vars__wrapper_arg_1,
  MR_Box ll_backend__saved_vars__wrapper_arg_2)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;

    {
      ll_backend__saved_vars__succeeded = ll_backend__saved_vars____Unify____slot_info_0_0(((MR_Word) ll_backend__saved_vars__wrapper_arg_1), ((MR_Word) ll_backend__saved_vars__wrapper_arg_2));
    }
    return ll_backend__saved_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0_10001(
  MR_Box * ll_backend__saved_vars__wrapper_arg_1,
  MR_Box ll_backend__saved_vars__wrapper_arg_2,
  MR_Box ll_backend__saved_vars__wrapper_arg_3)
{
  {
    MR_Word ll_backend__saved_vars__conv0_HeadVar__1_1;

    {
      ll_backend__saved_vars____Compare____slot_info_0_0(&ll_backend__saved_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__saved_vars__wrapper_arg_2), ((MR_Word) ll_backend__saved_vars__wrapper_arg_3));
    }
    *ll_backend__saved_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__saved_vars__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0(
  MR_Word * ll_backend__saved_vars__HeadVar__1_1,
  MR_Word ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__HeadVar__3_3)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;
    MR_Integer ll_backend__saved_vars__CastX_15 = (MR_Integer) ll_backend__saved_vars__HeadVar__2_2;
    MR_Integer ll_backend__saved_vars__CastY_16 = (MR_Integer) ll_backend__saved_vars__HeadVar__3_3;

    ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__CastX_15 == ll_backend__saved_vars__CastY_16);
    if (ll_backend__saved_vars__succeeded)
      *ll_backend__saved_vars__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__saved_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__saved_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__saved_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__saved_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__saved_vars__V_12_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_1[1], &ll_backend__saved_vars__V_12_12, ((MR_Box) (ll_backend__saved_vars__V_4_4)), ((MR_Box) (ll_backend__saved_vars__V_8_8)));
        }
        ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_12_12 == (MR_Integer) 0);
        ll_backend__saved_vars__succeeded = !(ll_backend__saved_vars__succeeded);
        if (ll_backend__saved_vars__succeeded)
          *ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__V_12_12;
        else
          {
            MR_Word ll_backend__saved_vars__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_2[0], &ll_backend__saved_vars__V_13_13, ((MR_Box) (ll_backend__saved_vars__V_5_5)), ((MR_Box) (ll_backend__saved_vars__V_9_9)));
            }
            ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_13_13 == (MR_Integer) 0);
            ll_backend__saved_vars__succeeded = !(ll_backend__saved_vars__succeeded);
            if (ll_backend__saved_vars__succeeded)
              *ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__V_13_13;
            else
              {
                MR_Word ll_backend__saved_vars__V_14_14;

                {
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&ll_backend__saved_vars__V_14_14, ll_backend__saved_vars__V_6_6, ll_backend__saved_vars__V_10_10);
                }
                ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_14_14 == (MR_Integer) 0);
                ll_backend__saved_vars__succeeded = !(ll_backend__saved_vars__succeeded);
                if (ll_backend__saved_vars__succeeded)
                  *ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__V_14_14;
                else
                  {
                    MR_Integer ll_backend__saved_vars__V_21_21 = (MR_Integer) ll_backend__saved_vars__V_7_7;
                    MR_Integer ll_backend__saved_vars__V_22_22 = (MR_Integer) ll_backend__saved_vars__V_11_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__saved_vars__HeadVar__1_1, ll_backend__saved_vars__V_21_21, ll_backend__saved_vars__V_22_22);
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word ll_backend__saved_vars__HeadVar__2_2)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;
    MR_Integer ll_backend__saved_vars__CastX_11 = (MR_Integer) ll_backend__saved_vars__HeadVar__1_1;
    MR_Integer ll_backend__saved_vars__CastY_12 = (MR_Integer) ll_backend__saved_vars__HeadVar__2_2;

    ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__CastX_11 == ll_backend__saved_vars__CastY_12);
    if (ll_backend__saved_vars__succeeded)
      ll_backend__saved_vars__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__saved_vars__TypeInfo_14_14;
        MR_Word ll_backend__saved_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__saved_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__saved_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__saved_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__2_2, (MR_Integer) 3)));

        {
          ll_backend__saved_vars__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_1[1], ((MR_Box) (ll_backend__saved_vars__V_3_3)), ((MR_Box) (ll_backend__saved_vars__V_7_7)));
        }
        if (ll_backend__saved_vars__succeeded)
          {
            ll_backend__saved_vars__TypeInfo_14_14 = (MR_Word) &ll_backend__saved_vars_scalar_common_2[0];
            {
              ll_backend__saved_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__saved_vars__TypeInfo_14_14, ((MR_Box) (ll_backend__saved_vars__V_4_4)), ((MR_Box) (ll_backend__saved_vars__V_8_8)));
            }
            if (ll_backend__saved_vars__succeeded)
              {
                {
                  ll_backend__saved_vars__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ll_backend__saved_vars__V_5_5, ll_backend__saved_vars__V_9_9);
                }
                if (ll_backend__saved_vars__succeeded)
                  ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_6_6 == ll_backend__saved_vars__V_10_10);
              }
          }
      }
    return ll_backend__saved_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_rename_var_5_p_0(
  MR_Word ll_backend__saved_vars__Var_6,
  MR_Word * ll_backend__saved_vars__NewVar_7,
  MR_Word * ll_backend__saved_vars__Substitution_8,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;
    MR_Word ll_backend__saved_vars__TypeInfo_25_25;
    MR_Word ll_backend__saved_vars__Varset0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 0)));
    MR_Word ll_backend__saved_vars__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 1)));
    MR_Word ll_backend__saved_vars__RttiVarMaps0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 2)));
    MR_Word ll_backend__saved_vars__TypeInfoLiveness_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 3)));
    MR_Word ll_backend__saved_vars__Varset_14;
    MR_Word ll_backend__saved_vars__Type_15;
    MR_Word ll_backend__saved_vars__VarTypes_16;
    MR_Word ll_backend__saved_vars__RttiVarMaps_17;
    MR_Word ll_backend__saved_vars__V_20_20;
    MR_Word ll_backend__saved_vars__V_21_21;

    {
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__NewVar_7, ll_backend__saved_vars__Varset0_10, &ll_backend__saved_vars__Varset_14);
    }
    {
      ll_backend__saved_vars__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__V_21_21, 0) = ((MR_Box) (ll_backend__saved_vars__Var_6));
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__V_21_21, 1) = ((MR_Box) (*ll_backend__saved_vars__NewVar_7));
    }
    {
      ll_backend__saved_vars__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_20_20, 0) = ((MR_Box) (ll_backend__saved_vars__V_21_21));
      MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ll_backend__saved_vars__TypeInfo_25_25 = (MR_Word) &ll_backend__saved_vars_scalar_common_1[0];
    {
      mercury__map__from_assoc_list_2_p_0(ll_backend__saved_vars__TypeInfo_25_25, ll_backend__saved_vars__TypeInfo_25_25, ll_backend__saved_vars__V_20_20, ll_backend__saved_vars__Substitution_8);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(ll_backend__saved_vars__VarTypes0_11, ll_backend__saved_vars__Var_6, &ll_backend__saved_vars__Type_15);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*ll_backend__saved_vars__NewVar_7, ll_backend__saved_vars__Type_15, ll_backend__saved_vars__VarTypes0_11, &ll_backend__saved_vars__VarTypes_16);
    }
    {
      hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(ll_backend__saved_vars__Var_6, *ll_backend__saved_vars__NewVar_7, ll_backend__saved_vars__RttiVarMaps0_12, &ll_backend__saved_vars__RttiVarMaps_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__Varset_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__VarTypes_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__saved_vars__RttiVarMaps_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__saved_vars__TypeInfoLiveness_13));
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_switch_4_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;

    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3;
      }
    else
      {
        MR_Word ll_backend__saved_vars__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__Case_10;
        MR_Word ll_backend__saved_vars__Cases_11;
        MR_Word ll_backend__saved_vars__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_8, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_8, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_8, (MR_Integer) 2)));
        MR_Word ll_backend__saved_vars__Goal_16;
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19;

        {
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_15, &ll_backend__saved_vars__Goal_16, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19);
        }
        {
          ll_backend__saved_vars__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_10, 0) = ((MR_Box) (ll_backend__saved_vars__MainConsId_13));
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_10, 1) = ((MR_Box) (ll_backend__saved_vars__OtherConsIds_14));
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_10, 2) = ((MR_Box) (ll_backend__saved_vars__Goal_16));
        }
        {
          ll_backend__saved_vars__saved_vars_in_switch_4_p_0(ll_backend__saved_vars__Cases0_9, &ll_backend__saved_vars__Cases_11, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__saved_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Case_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Cases_11));
        }
      }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;

    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3;
      }
    else
      {
        MR_Word ll_backend__saved_vars__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__Goal_10;
        MR_Word ll_backend__saved_vars__Goals_11;
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_15_15;

        {
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_8, &ll_backend__saved_vars__Goal_10, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_3, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_15_15);
        }
        {
          ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(ll_backend__saved_vars__Goals0_9, &ll_backend__saved_vars__Goals_11, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_15_15, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__saved_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals_11));
        }
      }
  }
}

static void MR_CALL 
ll_backend__saved_vars__push_into_cases_rename_6_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__HeadVar__3_3,
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;

    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5;
      }
    else
      {
        MR_Word ll_backend__saved_vars__Case0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__Cases0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__Case_14;
        MR_Word ll_backend__saved_vars__Cases_15;
        MR_Word ll_backend__saved_vars__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_12, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_12, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case0_12, (MR_Integer) 2)));
        MR_Word ll_backend__saved_vars__Goal_22;
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_25_25;

        {
          ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Goal0_21, &ll_backend__saved_vars__Goal_22, ll_backend__saved_vars__HeadVar__3_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_25_25);
        }
        {
          ll_backend__saved_vars__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_14, 0) = ((MR_Box) (ll_backend__saved_vars__MainConsId_19));
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_14, 1) = ((MR_Box) (ll_backend__saved_vars__OtherConsIds_20));
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Case_14, 2) = ((MR_Box) (ll_backend__saved_vars__Goal_22));
        }
        {
          ll_backend__saved_vars__push_into_cases_rename_6_p_0(ll_backend__saved_vars__Cases0_13, &ll_backend__saved_vars__Cases_15, ll_backend__saved_vars__HeadVar__3_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_25_25, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__saved_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Case_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Cases_15));
        }
      }
  }
}

static void MR_CALL 
ll_backend__saved_vars__push_into_goals_rename_6_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__HeadVar__3_3,
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;

    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5;
      }
    else
      {
        MR_Word ll_backend__saved_vars__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__Goal_14;
        MR_Word ll_backend__saved_vars__Goals_15;
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21;

        {
          ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Goal0_12, &ll_backend__saved_vars__Goal_14, ll_backend__saved_vars__HeadVar__3_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_5, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21);
        }
        {
          ll_backend__saved_vars__push_into_goals_rename_6_p_0(ll_backend__saved_vars__Goals0_13, &ll_backend__saved_vars__Goals_15, ll_backend__saved_vars__HeadVar__3_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__saved_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals_15));
        }
      }
  }
}

static void MR_CALL 
ll_backend__saved_vars__push_into_goal_rename_6_p_0(
  MR_Word ll_backend__saved_vars__Goal0_7,
  MR_Word * ll_backend__saved_vars__Goal_8,
  MR_Word ll_backend__saved_vars__Construct_9,
  MR_Word ll_backend__saved_vars__Var_10,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_20)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;
    MR_Word ll_backend__saved_vars__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_7, (MR_Integer) 1)));
    MR_Word ll_backend__saved_vars__NonLocals_14;
    MR_Word ll_backend__saved_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_7, (MR_Integer) 0)));

    {
      ll_backend__saved_vars__NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__saved_vars__GoalInfo0_13);
    }
    {
      ll_backend__saved_vars__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__NonLocals_14, ll_backend__saved_vars__Var_10);
    }
    if (ll_backend__saved_vars__succeeded)
      {
        MR_Word ll_backend__saved_vars__TypeInfo_25_44;
        MR_Word ll_backend__saved_vars__NewVar_15;
        MR_Word ll_backend__saved_vars__Subst_16;
        MR_Word ll_backend__saved_vars__NewConstruct_17;
        MR_Word ll_backend__saved_vars__Goal1_18;
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21;
        MR_Word ll_backend__saved_vars__Varset0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__VarTypes0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__RttiVarMaps0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 2)));
        MR_Word ll_backend__saved_vars__TypeInfoLiveness_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 3)));
        MR_Word ll_backend__saved_vars__Varset_35;
        MR_Word ll_backend__saved_vars__Type_36;
        MR_Word ll_backend__saved_vars__VarTypes_37;
        MR_Word ll_backend__saved_vars__RttiVarMaps_38;
        MR_Word ll_backend__saved_vars__V_39_39;
        MR_Word ll_backend__saved_vars__V_40_40;
        MR_Word ll_backend__saved_vars__Goal1_52;
        MR_Word ll_backend__saved_vars__GoalInfo1_54;
        MR_Word ll_backend__saved_vars__Conj1_55;
        MR_Word ll_backend__saved_vars__Conj_56;
        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_57;
        MR_Word ll_backend__saved_vars__V_53_53;

        {
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &ll_backend__saved_vars__NewVar_15, ll_backend__saved_vars__Varset0_31, &ll_backend__saved_vars__Varset_35);
        }
        {
          ll_backend__saved_vars__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__V_40_40, 0) = ((MR_Box) (ll_backend__saved_vars__Var_10));
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__V_40_40, 1) = ((MR_Box) (ll_backend__saved_vars__NewVar_15));
        }
        {
          ll_backend__saved_vars__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, 0) = ((MR_Box) (ll_backend__saved_vars__V_40_40));
          MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ll_backend__saved_vars__TypeInfo_25_44 = (MR_Word) &ll_backend__saved_vars_scalar_common_1[0];
        {
          mercury__map__from_assoc_list_2_p_0(ll_backend__saved_vars__TypeInfo_25_44, ll_backend__saved_vars__TypeInfo_25_44, ll_backend__saved_vars__V_39_39, &ll_backend__saved_vars__Subst_16);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(ll_backend__saved_vars__VarTypes0_32, ll_backend__saved_vars__Var_10, &ll_backend__saved_vars__Type_36);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(ll_backend__saved_vars__NewVar_15, ll_backend__saved_vars__Type_36, ll_backend__saved_vars__VarTypes0_32, &ll_backend__saved_vars__VarTypes_37);
        }
        {
          hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(ll_backend__saved_vars__Var_10, ll_backend__saved_vars__NewVar_15, ll_backend__saved_vars__RttiVarMaps0_33, &ll_backend__saved_vars__RttiVarMaps_38);
        }
        {
          ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, 0) = ((MR_Box) (ll_backend__saved_vars__Varset_35));
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, 1) = ((MR_Box) (ll_backend__saved_vars__VarTypes_37));
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, 2) = ((MR_Box) (ll_backend__saved_vars__RttiVarMaps_38));
          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, 3) = ((MR_Box) (ll_backend__saved_vars__TypeInfoLiveness_34));
        }
        {
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_16, ll_backend__saved_vars__Construct_9, &ll_backend__saved_vars__NewConstruct_17);
        }
        {
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_16, ll_backend__saved_vars__Goal0_7, &ll_backend__saved_vars__Goal1_18);
        }
        {
          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal1_18, &ll_backend__saved_vars__Goal1_52, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_21_21, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_57);
        }
        ll_backend__saved_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_52, (MR_Integer) 0)));
        ll_backend__saved_vars__GoalInfo1_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_52, (MR_Integer) 1)));
        {
          hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__saved_vars__Goal1_52, &ll_backend__saved_vars__Conj1_55);
        }
        {
          ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Conj1_55, &ll_backend__saved_vars__Conj_56, ll_backend__saved_vars__NewConstruct_17, ll_backend__saved_vars__NewVar_15, (MR_Integer) 0, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_57, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_20);
        }
        {
          hlds__hlds_goal__conj_list_to_goal_3_p_0(ll_backend__saved_vars__Conj_56, ll_backend__saved_vars__GoalInfo1_54, ll_backend__saved_vars__Goal_8);
        }
      }
    else
      {
        ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_7, ll_backend__saved_vars__Goal_8, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_19, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_20);
      }
  }
}

static void MR_CALL 
ll_backend__saved_vars__push_into_goal_6_p_0(
  MR_Word ll_backend__saved_vars__Goal0_7,
  MR_Word * ll_backend__saved_vars__Goal_8,
  MR_Word ll_backend__saved_vars__Construct_9,
  MR_Word ll_backend__saved_vars__Var_10,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_17,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_18)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;
    MR_Word ll_backend__saved_vars__Goal1_12;
    MR_Word ll_backend__saved_vars__GoalInfo1_14;
    MR_Word ll_backend__saved_vars__Conj1_15;
    MR_Word ll_backend__saved_vars__Conj_16;
    MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19;
    MR_Word ll_backend__saved_vars__V_13_13;

    {
      ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_7, &ll_backend__saved_vars__Goal1_12, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_17, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19);
    }
    ll_backend__saved_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_12, (MR_Integer) 0)));
    ll_backend__saved_vars__GoalInfo1_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_12, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(ll_backend__saved_vars__Goal1_12, &ll_backend__saved_vars__Conj1_15);
    }
    {
      ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Conj1_15, &ll_backend__saved_vars__Conj_16, ll_backend__saved_vars__Construct_9, ll_backend__saved_vars__Var_10, (MR_Integer) 0, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_19_19, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_18);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(ll_backend__saved_vars__Conj_16, ll_backend__saved_vars__GoalInfo1_14, ll_backend__saved_vars__Goal_8);
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__Goals_2,
  MR_Word ll_backend__saved_vars__Construct_3,
  MR_Word ll_backend__saved_vars__HeadVar__4_4,
  MR_Word ll_backend__saved_vars__IsNonLocal_5,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__saved_vars__succeeded;

        if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            switch (ll_backend__saved_vars__IsNonLocal_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__saved_vars__Goals_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__saved_vars__Goals_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Construct_3));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
            }
            *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6;
          }
        else
          {
            MR_Word ll_backend__saved_vars__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__saved_vars__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__saved_vars__Goal0Expr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_16, (MR_Integer) 0)));
            MR_Word ll_backend__saved_vars__Goal0Info_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_16, (MR_Integer) 1)));
            MR_Word ll_backend__saved_vars__Goal0NonLocals_25;

            {
              ll_backend__saved_vars__Goal0NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__saved_vars__Goal0Info_24);
            }
            {
              ll_backend__saved_vars__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__Goal0NonLocals_25, ll_backend__saved_vars__HeadVar__4_4);
            }
            if (ll_backend__saved_vars__succeeded)
              switch (MR_tag((MR_Word) ll_backend__saved_vars__Goal0Expr_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__saved_vars__NegGoal0_62 = (MR_Word) MR_body(((MR_Word) ll_backend__saved_vars__Goal0Expr_23), (MR_Integer) 0);
                    MR_Word ll_backend__saved_vars__NegGoal1_63;
                    MR_Word ll_backend__saved_vars__NegGoal_64;
                    MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_97_97;
                    MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_98_98;
                    MR_Word ll_backend__saved_vars__V_99_99;
                    MR_Word ll_backend__saved_vars__Subst_151;
                    MR_Word ll_backend__saved_vars__NewConstruct_152;
                    MR_Word ll_backend__saved_vars__Goal1_153;
                    MR_Word ll_backend__saved_vars__Goals1_154;
                    MR_Word ll_backend__saved_vars__NewVar_155;

                    {
                      ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars__NewVar_155, &ll_backend__saved_vars__Subst_151, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_97_97);
                    }
                    {
                      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_151, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_152);
                    }
                    {
                      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_151, ll_backend__saved_vars__NegGoal0_62, &ll_backend__saved_vars__NegGoal1_63);
                    }
                    {
                      ll_backend__saved_vars__push_into_goal_6_p_0(ll_backend__saved_vars__NegGoal1_63, &ll_backend__saved_vars__NegGoal_64, ll_backend__saved_vars__NewConstruct_152, ll_backend__saved_vars__NewVar_155, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_97_97, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_98_98);
                    }
                    ll_backend__saved_vars__V_99_99 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__saved_vars__NegGoal_64);
                    {
                      ll_backend__saved_vars__Goal1_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_153, 0) = ((MR_Box) (ll_backend__saved_vars__V_99_99));
                      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_153, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
                    }
                    {
                      ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_154, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_98_98, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__saved_vars__Goals_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_153));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_154));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__saved_vars__Subst_32;
                    MR_Word ll_backend__saved_vars__NewConstruct_33;
                    MR_Word ll_backend__saved_vars__Goal1_34;
                    MR_Word ll_backend__saved_vars__Goals1_35;
                    MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_118_118;
                    MR_Word ll_backend__saved_vars__V_120_120;
                    MR_Word ll_backend__saved_vars___NewVar_31;

                    {
                      ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars___NewVar_31, &ll_backend__saved_vars__Subst_32, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_118_118);
                    }
                    {
                      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_32, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_33);
                    }
                    {
                      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_32, ll_backend__saved_vars__Goal0_16, &ll_backend__saved_vars__Goal1_34);
                    }
                    {
                      ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_35, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_118_118, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                    }
                    {
                      ll_backend__saved_vars__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_120_120, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_34));
                      MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_120_120, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_35));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__saved_vars__Goals_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__NewConstruct_33));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_120_120));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_115_115;
                    MR_Word ll_backend__saved_vars__V_117_117;
                    MR_Word ll_backend__saved_vars__Subst_124;
                    MR_Word ll_backend__saved_vars__NewConstruct_125;
                    MR_Word ll_backend__saved_vars__Goal1_126;
                    MR_Word ll_backend__saved_vars__Goals1_127;
                    MR_Word ll_backend__saved_vars___NewVar_122;

                    {
                      ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars___NewVar_122, &ll_backend__saved_vars__Subst_124, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_115_115);
                    }
                    {
                      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_124, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_125);
                    }
                    {
                      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_124, ll_backend__saved_vars__Goal0_16, &ll_backend__saved_vars__Goal1_126);
                    }
                    {
                      ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_127, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_115_115, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                    }
                    {
                      ll_backend__saved_vars__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_117_117, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_126));
                      MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_117_117, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_127));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__saved_vars__Goals_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__NewConstruct_125));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_117_117));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_112_112;
                        MR_Word ll_backend__saved_vars__V_114_114;
                        MR_Word ll_backend__saved_vars__Subst_130;
                        MR_Word ll_backend__saved_vars__NewConstruct_131;
                        MR_Word ll_backend__saved_vars__Goal1_132;
                        MR_Word ll_backend__saved_vars__Goals1_133;
                        MR_Word ll_backend__saved_vars___NewVar_128;

                        {
                          ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars___NewVar_128, &ll_backend__saved_vars__Subst_130, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_112_112);
                        }
                        {
                          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_130, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_131);
                        }
                        {
                          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_130, ll_backend__saved_vars__Goal0_16, &ll_backend__saved_vars__Goal1_132);
                        }
                        {
                          ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_133, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_112_112, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                        }
                        {
                          ll_backend__saved_vars__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_114_114, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_132));
                          MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_114_114, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_133));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__saved_vars__Goals_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__NewConstruct_131));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_114_114));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_109_109;
                        MR_Word ll_backend__saved_vars__V_111_111;
                        MR_Word ll_backend__saved_vars__Subst_136;
                        MR_Word ll_backend__saved_vars__NewConstruct_137;
                        MR_Word ll_backend__saved_vars__Goal1_138;
                        MR_Word ll_backend__saved_vars__Goals1_139;
                        MR_Word ll_backend__saved_vars___NewVar_134;

                        {
                          ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars___NewVar_134, &ll_backend__saved_vars__Subst_136, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_109_109);
                        }
                        {
                          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_136, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_137);
                        }
                        {
                          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_136, ll_backend__saved_vars__Goal0_16, &ll_backend__saved_vars__Goal1_138);
                        }
                        {
                          ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_139, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_109_109, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                        }
                        {
                          ll_backend__saved_vars__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_111_111, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_138));
                          MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_111_111, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_139));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__saved_vars__Goals_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__NewConstruct_137));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_111_111));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ll_backend__saved_vars__ConjType_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
                        MR_Word ll_backend__saved_vars__Conj0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 2)));

                        switch (ll_backend__saved_vars__ConjType_54) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word ll_backend__saved_vars__Conj_56;
                              MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_105_105;
                              MR_Word ll_backend__saved_vars__V_106_106;
                              MR_Word ll_backend__saved_vars__Goal1_141;
                              MR_Word ll_backend__saved_vars__Goals1_142;

                              {
                                ll_backend__saved_vars__push_into_goals_rename_6_p_0(ll_backend__saved_vars__Conj0_55, &ll_backend__saved_vars__Conj_56, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_105_105);
                              }
                              {
                                ll_backend__saved_vars__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_106_106, 1) = ((MR_Box) (ll_backend__saved_vars__ConjType_54));
                                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_106_106, 2) = ((MR_Box) (ll_backend__saved_vars__Conj_56));
                              }
                              {
                                ll_backend__saved_vars__Goal1_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_141, 0) = ((MR_Box) (ll_backend__saved_vars__V_106_106));
                                MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_141, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
                              }
                              {
                                ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_142, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_105_105, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *ll_backend__saved_vars__Goals_2 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_141));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_142));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word ll_backend__saved_vars__Goals1_140;

                              {
                                mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__saved_vars__Conj0_55, ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_140);
                              }
                              /* direct tailcall eliminated */
                              {
                                MR_Word ll_backend__saved_vars__HeadVar__1__tmp_copy_1 = ll_backend__saved_vars__Goals1_140;

                                ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__HeadVar__1__tmp_copy_1;
                              }
                              continue;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ll_backend__saved_vars__Disjuncts0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
                        MR_Word ll_backend__saved_vars__Disjuncts_66;
                        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_94_94;
                        MR_Word ll_backend__saved_vars__V_95_95;
                        MR_Word ll_backend__saved_vars__Goal1_156;
                        MR_Word ll_backend__saved_vars__Goals1_157;

                        {
                          ll_backend__saved_vars__push_into_goals_rename_6_p_0(ll_backend__saved_vars__Disjuncts0_65, &ll_backend__saved_vars__Disjuncts_66, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_94_94);
                        }
                        {
                          ll_backend__saved_vars__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_95_95, 1) = ((MR_Box) (ll_backend__saved_vars__Disjuncts_66));
                        }
                        {
                          ll_backend__saved_vars__Goal1_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_156, 0) = ((MR_Box) (ll_backend__saved_vars__V_95_95));
                          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_156, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
                        }
                        {
                          ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_157, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_94_94, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__saved_vars__Goals_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_156));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_157));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ll_backend__saved_vars__SwitchVar_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
                        MR_Word ll_backend__saved_vars__CF_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 2)));
                        MR_Word ll_backend__saved_vars__Cases0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 3)));

                        {
                          ll_backend__saved_vars__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_1[0], ((MR_Box) (ll_backend__saved_vars__SwitchVar_67)), ((MR_Box) (ll_backend__saved_vars__HeadVar__4_4)));
                        }
                        if (ll_backend__saved_vars__succeeded)
                          {
                            MR_Word ll_backend__saved_vars__V_90_90;
                            MR_Word ll_backend__saved_vars__Goals1_158;

                            {
                              ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_158, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                            }
                            {
                              ll_backend__saved_vars__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_90_90, 0) = ((MR_Box) (ll_backend__saved_vars__Goal0_16));
                              MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_90_90, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_158));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *ll_backend__saved_vars__Goals_2 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Construct_3));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__V_90_90));
                            }
                          }
                        else
                          {
                            MR_Word ll_backend__saved_vars__Cases_70;
                            MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_91_91;
                            MR_Word ll_backend__saved_vars__V_92_92;
                            MR_Word ll_backend__saved_vars__Goal1_159;
                            MR_Word ll_backend__saved_vars__Goals1_160;

                            {
                              ll_backend__saved_vars__push_into_cases_rename_6_p_0(ll_backend__saved_vars__Cases0_69, &ll_backend__saved_vars__Cases_70, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_91_91);
                            }
                            {
                              ll_backend__saved_vars__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_92_92, 1) = ((MR_Box) (ll_backend__saved_vars__SwitchVar_67));
                              MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_92_92, 2) = ((MR_Box) (ll_backend__saved_vars__CF_68));
                              MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_92_92, 3) = ((MR_Box) (ll_backend__saved_vars__Cases_70));
                            }
                            {
                              ll_backend__saved_vars__Goal1_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_159, 0) = ((MR_Box) (ll_backend__saved_vars__V_92_92));
                              MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_159, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
                            }
                            {
                              ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_160, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_91_91, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              *ll_backend__saved_vars__Goals_2 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_159));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_160));
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ll_backend__saved_vars__Reason_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
                        MR_Word ll_backend__saved_vars__SomeGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 2)));
                        MR_Word ll_backend__saved_vars__NewVar_59;
                        MR_Word ll_backend__saved_vars__SomeGoal1_60;
                        MR_Word ll_backend__saved_vars__SomeGoal_61;
                        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_101_101;
                        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_102_102;
                        MR_Word ll_backend__saved_vars__V_103_103;
                        MR_Word ll_backend__saved_vars__Subst_147;
                        MR_Word ll_backend__saved_vars__NewConstruct_148;
                        MR_Word ll_backend__saved_vars__Goal1_149;
                        MR_Word ll_backend__saved_vars__Goals1_150;

                        {
                          ll_backend__saved_vars__saved_vars_rename_var_5_p_0(ll_backend__saved_vars__HeadVar__4_4, &ll_backend__saved_vars__NewVar_59, &ll_backend__saved_vars__Subst_147, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_101_101);
                        }
                        {
                          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_147, ll_backend__saved_vars__Construct_3, &ll_backend__saved_vars__NewConstruct_148);
                        }
                        {
                          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(ll_backend__saved_vars__Subst_147, ll_backend__saved_vars__SomeGoal0_58, &ll_backend__saved_vars__SomeGoal1_60);
                        }
                        {
                          ll_backend__saved_vars__push_into_goal_6_p_0(ll_backend__saved_vars__SomeGoal1_60, &ll_backend__saved_vars__SomeGoal_61, ll_backend__saved_vars__NewConstruct_148, ll_backend__saved_vars__NewVar_59, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_101_101, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_102_102);
                        }
                        {
                          ll_backend__saved_vars__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_103_103, 1) = ((MR_Box) (ll_backend__saved_vars__Reason_57));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_103_103, 2) = ((MR_Box) (ll_backend__saved_vars__SomeGoal_61));
                        }
                        {
                          ll_backend__saved_vars__Goal1_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_149, 0) = ((MR_Box) (ll_backend__saved_vars__V_103_103));
                          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_149, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
                        }
                        {
                          ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_150, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_102_102, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__saved_vars__Goals_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_149));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_150));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word ll_backend__saved_vars__V_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 1)));
                        MR_Word ll_backend__saved_vars__Cond0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 2)));
                        MR_Word ll_backend__saved_vars__Then0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 3)));
                        MR_Word ll_backend__saved_vars__Else0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Goal0Expr_23, (MR_Integer) 4)));
                        MR_Word ll_backend__saved_vars__Cond_75;
                        MR_Word ll_backend__saved_vars__Then_76;
                        MR_Word ll_backend__saved_vars__Else_77;
                        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_84_84;
                        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_85_85;
                        MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_86_86;
                        MR_Word ll_backend__saved_vars__V_87_87;
                        MR_Word ll_backend__saved_vars__Goal1_165;
                        MR_Word ll_backend__saved_vars__Goals1_166;

                        {
                          ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Cond0_72, &ll_backend__saved_vars__Cond_75, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_84_84);
                        }
                        {
                          ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Then0_73, &ll_backend__saved_vars__Then_76, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_84_84, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_85_85);
                        }
                        {
                          ll_backend__saved_vars__push_into_goal_rename_6_p_0(ll_backend__saved_vars__Else0_74, &ll_backend__saved_vars__Else_77, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_85_85, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_86_86);
                        }
                        {
                          ll_backend__saved_vars__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 1) = ((MR_Box) (ll_backend__saved_vars__V_71));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 2) = ((MR_Box) (ll_backend__saved_vars__Cond_75));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 3) = ((MR_Box) (ll_backend__saved_vars__Then_76));
                          MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_87_87, 4) = ((MR_Box) (ll_backend__saved_vars__Else_77));
                        }
                        {
                          ll_backend__saved_vars__Goal1_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_165, 0) = ((MR_Box) (ll_backend__saved_vars__V_87_87));
                          MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal1_165, 1) = ((MR_Box) (ll_backend__saved_vars__Goal0Info_24));
                        }
                        {
                          ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_166, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_86_86, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__saved_vars__Goals_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_165));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_166));
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "predicate \140ll_backend.saved_vars.saved_vars_delay_goal\'/7", (MR_String) "shorthand");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
            else
              {
                MR_Word ll_backend__saved_vars__Goals1_167;

                {
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__Goals0_17, &ll_backend__saved_vars__Goals1_167, ll_backend__saved_vars__Construct_3, ll_backend__saved_vars__HeadVar__4_4, ll_backend__saved_vars__IsNonLocal_5, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_6, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_7);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__saved_vars__Goals_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal0_16));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_167));
                }
              }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__saved_vars__can_push_2_f_0(
  MR_Word ll_backend__saved_vars__Var_4,
  MR_Word ll_backend__saved_vars__Goal_5)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;
    MR_Word ll_backend__saved_vars__CanPush_6;
    MR_Word ll_backend__saved_vars__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal_5, (MR_Integer) 0)));
    MR_Word ll_backend__saved_vars__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal_5, (MR_Integer) 1)));
    MR_Word ll_backend__saved_vars__NonLocals_9;

    {
      ll_backend__saved_vars__NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__saved_vars__GoalInfo_8);
    }
    {
      ll_backend__saved_vars__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__NonLocals_9, ll_backend__saved_vars__Var_4);
    }
    if (ll_backend__saved_vars__succeeded)
      switch (MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ll_backend__saved_vars__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 1)));
                MR_Word ll_backend__saved_vars__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 2)));

                switch (ll_backend__saved_vars__V_92_92) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              {
                MR_Word ll_backend__saved_vars__SwitchVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 1)));
                MR_Word ll_backend__saved_vars__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 2)));
                MR_Word ll_backend__saved_vars__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 3)));

                {
                  ll_backend__saved_vars__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__saved_vars_scalar_common_1[0], ((MR_Box) (ll_backend__saved_vars__Var_4)), ((MR_Box) (ll_backend__saved_vars__SwitchVar_65)));
                }
                if (ll_backend__saved_vars__succeeded)
                  ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                else
                  ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ll_backend__saved_vars__Reason_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 1)));
                MR_Word ll_backend__saved_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_7, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) ll_backend__saved_vars__Reason_41)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 4:
                        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word ll_backend__saved_vars__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 2)));
                          MR_Word ll_backend__saved_vars__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_41, (MR_Integer) 1)));

                          switch (ll_backend__saved_vars__V_93_93) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                                }
                              }
                              break;
                            case (MR_Integer) 3:
                              ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 7:
                        ll_backend__saved_vars__CanPush_6 = (MR_Integer) 0;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "shorthand");
                }
              }
              break;
          }
          break;
      }
    else
      ll_backend__saved_vars__CanPush_6 = (MR_Integer) 1;
    return ll_backend__saved_vars__CanPush_6;
  }
}

static void MR_CALL 
ll_backend__saved_vars__skip_constant_constructs_3_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word * ll_backend__saved_vars__HeadVar__3_3)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;

    if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__saved_vars__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__saved_vars__Goal0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__Goals0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__Unif_11;
        MR_Word ll_backend__saved_vars__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_4, (MR_Integer) 0)));
        MR_Word ll_backend__saved_vars__V_22_22;
        MR_Word ll_backend__saved_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_4, (MR_Integer) 1)));
        MR_Word ll_backend__saved_vars__V_8_8;
        MR_Word ll_backend__saved_vars__V_9_9;
        MR_Word ll_backend__saved_vars__V_10_10;
        MR_Word ll_backend__saved_vars__V_12_12;
        MR_Word ll_backend__saved_vars__V_14_14;
        MR_Word ll_backend__saved_vars__V_15_15;
        MR_Word ll_backend__saved_vars__V_16_16;
        MR_Word ll_backend__saved_vars__V_17_17;
        MR_Word ll_backend__saved_vars__V_18_18;
        MR_Word ll_backend__saved_vars__V_19_19;

        ll_backend__saved_vars__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__V_21_21)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__saved_vars__succeeded)
          {
            ll_backend__saved_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 0)));
            ll_backend__saved_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 1)));
            ll_backend__saved_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 2)));
            ll_backend__saved_vars__Unif_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 3)));
            ll_backend__saved_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_21_21, (MR_Integer) 4)));
            ll_backend__saved_vars__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__Unif_11)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__saved_vars__succeeded)
              {
                ll_backend__saved_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 0)));
                ll_backend__saved_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 1)));
                ll_backend__saved_vars__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 2)));
                ll_backend__saved_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 3)));
                ll_backend__saved_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 4)));
                ll_backend__saved_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 5)));
                ll_backend__saved_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_11, (MR_Integer) 6)));
                ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
        if (ll_backend__saved_vars__succeeded)
          {
            MR_Word ll_backend__saved_vars__Constants1_20;

            {
              ll_backend__saved_vars__skip_constant_constructs_3_p_0(ll_backend__saved_vars__Goals0_5, &ll_backend__saved_vars__Constants1_20, ll_backend__saved_vars__HeadVar__3_3);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__saved_vars__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal0_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Constants1_20));
            }
          }
        else
          {
            *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__saved_vars__HeadVar__3_3 = ll_backend__saved_vars__HeadVar__1_1;
          }
      }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(
  void * ll_backend__saved_vars__env_ptr_arg)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * ll_backend__saved_vars__env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) ll_backend__saved_vars__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3(
  void * ll_backend__saved_vars__env_ptr_arg)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * ll_backend__saved_vars__env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) ll_backend__saved_vars__env_ptr_arg;

    (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 = ((MR_Word) (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28);
    {
      ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(ll_backend__saved_vars__env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(
  void * ll_backend__saved_vars__env_ptr_arg)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * ll_backend__saved_vars__env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) ll_backend__saved_vars__env_ptr_arg;

    {
      MR_Word ll_backend__saved_vars__V_41_41;

      ll_backend__saved_vars__V_41_41 = ((&ll_backend__saved_vars_vector_common_3[0 + (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28]))->ll_backend__saved_vars__vector_common_type_3_0__vct_3_f_0;
      (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (ll_backend__saved_vars__V_41_41 == (MR_Integer) 1);
      (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
      if ((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
        {
          ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(ll_backend__saved_vars__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(
  void * ll_backend__saved_vars__env_ptr_arg)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * ll_backend__saved_vars__env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) ll_backend__saved_vars__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__set__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, &(ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28, (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27, ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3, ll_backend__saved_vars__env_ptr);
          }
        }
        (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ll_backend__saved_vars__env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word * ll_backend__saved_vars__HeadVar__2_2,
  MR_Word ll_backend__saved_vars__NonLocals_3,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_5)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s ll_backend__saved_vars__env;

    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((ll_backend__saved_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__saved_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_5 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4;
          }
        else
          {
            MR_Word ll_backend__saved_vars__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__saved_vars__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__saved_vars__Var_21;
            MR_Word ll_backend__saved_vars__Constants_29;
            MR_Word ll_backend__saved_vars__OtherGoals_30;
            MR_Word ll_backend__saved_vars__Unif_18;
            MR_Word ll_backend__saved_vars__GoalInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_10, (MR_Integer) 1)));
            MR_Word ll_backend__saved_vars__First_31;
            MR_Word ll_backend__saved_vars__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_10, (MR_Integer) 0)));
            MR_Word ll_backend__saved_vars__V_40_40;
            MR_Word ll_backend__saved_vars__V_42_42;
            MR_Word ll_backend__saved_vars__V_15_15;
            MR_Word ll_backend__saved_vars__V_16_16;
            MR_Word ll_backend__saved_vars__V_17_17;
            MR_Word ll_backend__saved_vars__V_19_19;
            MR_Word ll_backend__saved_vars__V_22_22;
            MR_Word ll_backend__saved_vars__V_23_23;
            MR_Word ll_backend__saved_vars__V_24_24;
            MR_Word ll_backend__saved_vars__V_25_25;
            MR_Word ll_backend__saved_vars__V_26_26;
            MR_Word ll_backend__saved_vars__VarTypes_54;
            MR_Word ll_backend__saved_vars__TypeInfoLiveness_56;
            MR_Word ll_backend__saved_vars__Type_57;
            MR_Word ll_backend__saved_vars__V_53_53;
            MR_Word ll_backend__saved_vars__V_55_55;
            MR_Word ll_backend__saved_vars___Rest_32;

            (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__V_39_39)) == (MR_mktag((MR_Integer) 1)));
            if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
              {
                ll_backend__saved_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 0)));
                ll_backend__saved_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 1)));
                ll_backend__saved_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 2)));
                ll_backend__saved_vars__Unif_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 3)));
                ll_backend__saved_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__V_39_39, (MR_Integer) 4)));
                (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__Unif_18)) == (MR_mktag((MR_Integer) 0)));
                if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                  {
                    ll_backend__saved_vars__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 0)));
                    ll_backend__saved_vars__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 1)));
                    ll_backend__saved_vars__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 2)));
                    ll_backend__saved_vars__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 3)));
                    ll_backend__saved_vars__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 4)));
                    ll_backend__saved_vars__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 5)));
                    ll_backend__saved_vars__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Unif_18, (MR_Integer) 6)));
                    (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (ll_backend__saved_vars__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                      {
                        {
                          (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27 = hlds__hlds_goal__goal_info_get_features_1_f_0(ll_backend__saved_vars__GoalInfo_20);
                        }
                        {
                          ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(&ll_backend__saved_vars__env);
                        }
                        (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
                        if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                          {
                            ll_backend__saved_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 0)));
                            ll_backend__saved_vars__VarTypes_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 1)));
                            ll_backend__saved_vars__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 2)));
                            ll_backend__saved_vars__TypeInfoLiveness_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 3)));
                            (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (ll_backend__saved_vars__TypeInfoLiveness_56 == (MR_Integer) 1);
                            if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                              {
                                {
                                  hlds__vartypes__lookup_var_type_3_p_0(ll_backend__saved_vars__VarTypes_54, ll_backend__saved_vars__Var_21, &ll_backend__saved_vars__Type_57);
                                }
                                {
                                  (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = check_hlds__polymorphism__type_is_type_info_or_ctor_type_1_p_0(ll_backend__saved_vars__Type_57);
                                }
                              }
                            (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
                            if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                              {
                                {
                                  ll_backend__saved_vars__skip_constant_constructs_3_p_0(ll_backend__saved_vars__Goals0_11, &ll_backend__saved_vars__Constants_29, &ll_backend__saved_vars__OtherGoals_30);
                                }
                                (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) ll_backend__saved_vars__OtherGoals_30)) == (MR_mktag((MR_Integer) 1)));
                                if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                                  {
                                    ll_backend__saved_vars__First_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__OtherGoals_30, (MR_Integer) 0)));
                                    ll_backend__saved_vars___Rest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__saved_vars__OtherGoals_30, (MR_Integer) 1)));
                                    {
                                      ll_backend__saved_vars__V_42_42 = ll_backend__saved_vars__can_push_2_f_0(ll_backend__saved_vars__Var_21, ll_backend__saved_vars__First_31);
                                    }
                                    (ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (ll_backend__saved_vars__V_42_42 == (MR_Integer) 1);
                                  }
                              }
                          }
                      }
                  }
              }
            if ((ll_backend__saved_vars__env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
              {
                MR_Word ll_backend__saved_vars__IsNonLocal_33;
                MR_Word ll_backend__saved_vars__Goals1_34;
                MR_Word ll_backend__saved_vars__Goals2_35;
                MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_43_43;

                {
                  parse_tree__set_of_var__is_member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__saved_vars__NonLocals_3, ll_backend__saved_vars__Var_21, &ll_backend__saved_vars__IsNonLocal_33);
                }
                {
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(ll_backend__saved_vars__OtherGoals_30, &ll_backend__saved_vars__Goals1_34, ll_backend__saved_vars__Goal0_10, ll_backend__saved_vars__Var_21, ll_backend__saved_vars__IsNonLocal_33, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_43_43);
                }
                {
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ll_backend__saved_vars__Constants_29, ll_backend__saved_vars__Goals1_34, &ll_backend__saved_vars__Goals2_35);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__saved_vars__HeadVar__1__tmp_copy_1 = ll_backend__saved_vars__Goals2_35;
                  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0__tmp_copy_4 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_43_43;

                  ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0__tmp_copy_4;
                  ll_backend__saved_vars__HeadVar__1_1 = ll_backend__saved_vars__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                MR_Word ll_backend__saved_vars__Goal1_36;
                MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_45_45;
                MR_Word ll_backend__saved_vars__Goals1_47;

                {
                  ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_10, &ll_backend__saved_vars__Goal1_36, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_4, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_45_45);
                }
                {
                  ll_backend__saved_vars__saved_vars_in_conj_5_p_0(ll_backend__saved_vars__Goals0_11, &ll_backend__saved_vars__Goals1_47, ll_backend__saved_vars__NonLocals_3, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_45_45, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_5);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__saved_vars__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__saved_vars__Goal1_36));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__saved_vars__Goals1_47));
                }
              }
          }
        break;
      }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_goal_4_p_0(
  MR_Word ll_backend__saved_vars__Goal0_5,
  MR_Word * ll_backend__saved_vars__Goal_6,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;
    MR_Word ll_backend__saved_vars__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_5, (MR_Integer) 0)));
    MR_Word ll_backend__saved_vars__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__Goal0_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) ll_backend__saved_vars__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__saved_vars__NegGoal0_15 = (MR_Word) MR_body(((MR_Word) ll_backend__saved_vars__GoalExpr0_8), (MR_Integer) 0);
          MR_Word ll_backend__saved_vars__NegGoal_16;
          MR_Word ll_backend__saved_vars__GoalExpr_75;

          {
            ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__NegGoal0_15, &ll_backend__saved_vars__NegGoal_16, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
          }
          ll_backend__saved_vars__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__saved_vars__NegGoal_16);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__saved_vars__Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_75));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *ll_backend__saved_vars__Goal_6 = ll_backend__saved_vars__Goal0_5;
          *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *ll_backend__saved_vars__Goal_6 = ll_backend__saved_vars__Goal0_5;
              *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__saved_vars__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word ll_backend__saved_vars__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 2)));

              switch (ll_backend__saved_vars__ConjType_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__saved_vars__V_70_70;
                    MR_Word ll_backend__saved_vars__Goals_72;

                    {
                      ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(ll_backend__saved_vars__Goals0_11, &ll_backend__saved_vars__Goals_72, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
                    }
                    {
                      ll_backend__saved_vars__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_70_70, 1) = ((MR_Box) (ll_backend__saved_vars__ConjType_10));
                      MR_hl_field(MR_mktag(3), ll_backend__saved_vars__V_70_70, 2) = ((MR_Box) (ll_backend__saved_vars__Goals_72));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *ll_backend__saved_vars__Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__V_70_70));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__saved_vars__NonLocals_12;
                    MR_Word ll_backend__saved_vars__Goals_13;

                    {
                      ll_backend__saved_vars__NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ll_backend__saved_vars__GoalInfo0_9);
                    }
                    {
                      ll_backend__saved_vars__saved_vars_in_conj_5_p_0(ll_backend__saved_vars__Goals0_11, &ll_backend__saved_vars__Goals_13, ll_backend__saved_vars__NonLocals_12, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
                    }
                    {
                      hlds__hlds_goal__conj_list_to_goal_3_p_0(ll_backend__saved_vars__Goals_13, ll_backend__saved_vars__GoalInfo0_9, ll_backend__saved_vars__Goal_6);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__saved_vars__GoalExpr_14;
              MR_Word ll_backend__saved_vars__Goals0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word ll_backend__saved_vars__Goals_74;

              {
                ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(ll_backend__saved_vars__Goals0_73, &ll_backend__saved_vars__Goals_74, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
              }
              {
                ll_backend__saved_vars__GoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_14, 1) = ((MR_Box) (ll_backend__saved_vars__Goals_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__saved_vars__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_14));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__saved_vars__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word ll_backend__saved_vars__CanFail_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word ll_backend__saved_vars__Cases0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word ll_backend__saved_vars__Cases_20;
              MR_Word ll_backend__saved_vars__GoalExpr_76;

              {
                ll_backend__saved_vars__saved_vars_in_switch_4_p_0(ll_backend__saved_vars__Cases0_19, &ll_backend__saved_vars__Cases_20, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
              }
              {
                ll_backend__saved_vars__GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_76, 1) = ((MR_Box) (ll_backend__saved_vars__Var_17));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_76, 2) = ((MR_Box) (ll_backend__saved_vars__CanFail_18));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_76, 3) = ((MR_Box) (ll_backend__saved_vars__Cases_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__saved_vars__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_76));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__saved_vars__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word ll_backend__saved_vars__SubGoal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word ll_backend__saved_vars__SubGoal_31;
              MR_Word ll_backend__saved_vars__GoalExpr_78;
              MR_Word ll_backend__saved_vars__V_61_61;
              MR_Word ll_backend__saved_vars__V_30_30;

              ll_backend__saved_vars__succeeded = ((((MR_tag((MR_Word) ll_backend__saved_vars__Reason_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_28, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (ll_backend__saved_vars__succeeded)
                {
                  ll_backend__saved_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_28, (MR_Integer) 1)));
                  ll_backend__saved_vars__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__Reason_28, (MR_Integer) 2)));
                  ll_backend__saved_vars__succeeded = (ll_backend__saved_vars__V_61_61 == (MR_Integer) 1);
                }
              if (ll_backend__saved_vars__succeeded)
                {
                  ll_backend__saved_vars__SubGoal_31 = ll_backend__saved_vars__SubGoal0_29;
                  *ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57 = ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56;
                }
              else
                {
                  ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__SubGoal0_29, &ll_backend__saved_vars__SubGoal_31, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
                }
              {
                ll_backend__saved_vars__GoalExpr_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_78, 1) = ((MR_Box) (ll_backend__saved_vars__Reason_28));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_78, 2) = ((MR_Box) (ll_backend__saved_vars__SubGoal_31));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__saved_vars__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_78));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__saved_vars__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word ll_backend__saved_vars__Cond0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word ll_backend__saved_vars__Then0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word ll_backend__saved_vars__Else0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word ll_backend__saved_vars__Cond_25;
              MR_Word ll_backend__saved_vars__Then_26;
              MR_Word ll_backend__saved_vars__Else_27;
              MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_63_63;
              MR_Word ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_64_64;
              MR_Word ll_backend__saved_vars__GoalExpr_77;

              {
                ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Cond0_22, &ll_backend__saved_vars__Cond_25, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_0_56, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_63_63);
              }
              {
                ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Then0_23, &ll_backend__saved_vars__Then_26, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_63_63, &ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_64_64);
              }
              {
                ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Else0_24, &ll_backend__saved_vars__Else_27, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_64_64, ll_backend__saved_vars__STATE_VARIABLE_SlotInfo_57);
              }
              {
                ll_backend__saved_vars__GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 1) = ((MR_Box) (ll_backend__saved_vars__Vars_21));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 2) = ((MR_Box) (ll_backend__saved_vars__Cond_25));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 3) = ((MR_Box) (ll_backend__saved_vars__Then_26));
                MR_hl_field(MR_mktag(3), ll_backend__saved_vars__GoalExpr_77, 4) = ((MR_Box) (ll_backend__saved_vars__Else_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ll_backend__saved_vars__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__saved_vars__GoalExpr_77));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__saved_vars__GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.saved_vars", (MR_String) "predicate \140ll_backend.saved_vars.saved_vars_in_goal\'/4", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__saved_vars__saved_vars_proc_5_p_0(
  MR_Word ll_backend__saved_vars__HeadVar__1_1,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_35,
  MR_Word ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_37)
{
  {
    MR_bool ll_backend__saved_vars__succeeded;
    MR_Word ll_backend__saved_vars__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer ll_backend__saved_vars__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__saved_vars__Globals_11;
    MR_Word ll_backend__saved_vars__PredInfo_12;
    MR_Word ll_backend__saved_vars__TypeInfoLiveness_13;
    MR_Word ll_backend__saved_vars__Goal0_14;
    MR_Word ll_backend__saved_vars__Varset0_15;
    MR_Word ll_backend__saved_vars__VarTypes0_16;
    MR_Word ll_backend__saved_vars__RttiVarMaps0_17;
    MR_Word ll_backend__saved_vars__SlotInfo0_18;
    MR_Word ll_backend__saved_vars__Goal1_19;
    MR_Word ll_backend__saved_vars__SlotInfo_20;
    MR_Word ll_backend__saved_vars__Varset1_21;
    MR_Word ll_backend__saved_vars__VarTypes1_22;
    MR_Word ll_backend__saved_vars__RttiVarMaps1_23;
    MR_Word ll_backend__saved_vars__HeadVars_24;
    MR_Word ll_backend__saved_vars__Goal2_26;
    MR_Word ll_backend__saved_vars__Varset_27;
    MR_Word ll_backend__saved_vars__VarTypes_28;
    MR_Word ll_backend__saved_vars__RttiVarMaps_29;
    MR_Word ll_backend__saved_vars__InstMap0_30;
    MR_Word ll_backend__saved_vars__InstVarSet_31;
    MR_Word ll_backend__saved_vars__Goal_32;
    MR_Word ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_64_64;
    MR_Word ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_65_65;
    MR_Word ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_66_66;
    MR_Word ll_backend__saved_vars__V_77_77;
    MR_Word ll_backend__saved_vars___Warnings_25;

    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Minimizing saved vars in ", ll_backend__saved_vars__PredId_6, ll_backend__saved_vars__ProcId_7, ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36, &ll_backend__saved_vars__Globals_11);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36, ll_backend__saved_vars__PredId_6, &ll_backend__saved_vars__PredInfo_12);
    }
    {
      hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(ll_backend__saved_vars__PredInfo_12, ll_backend__saved_vars__Globals_11, &ll_backend__saved_vars__TypeInfoLiveness_13);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__Goal0_14);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__Varset0_15);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__VarTypes0_16);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__RttiVarMaps0_17);
    }
    {
      ll_backend__saved_vars__SlotInfo0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo0_18, 0) = ((MR_Box) (ll_backend__saved_vars__Varset0_15));
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo0_18, 1) = ((MR_Box) (ll_backend__saved_vars__VarTypes0_16));
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo0_18, 2) = ((MR_Box) (ll_backend__saved_vars__RttiVarMaps0_17));
      MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo0_18, 3) = ((MR_Box) (ll_backend__saved_vars__TypeInfoLiveness_13));
    }
    {
      ll_backend__saved_vars__saved_vars_in_goal_4_p_0(ll_backend__saved_vars__Goal0_14, &ll_backend__saved_vars__Goal1_19, ll_backend__saved_vars__SlotInfo0_18, &ll_backend__saved_vars__SlotInfo_20);
    }
    ll_backend__saved_vars__Varset1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo_20, (MR_Integer) 0)));
    ll_backend__saved_vars__VarTypes1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo_20, (MR_Integer) 1)));
    ll_backend__saved_vars__RttiVarMaps1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo_20, (MR_Integer) 2)));
    ll_backend__saved_vars__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__saved_vars__SlotInfo_20, (MR_Integer) 3)));
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__HeadVars_24);
    }
    {
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, ll_backend__saved_vars__HeadVars_24, &ll_backend__saved_vars___Warnings_25, ll_backend__saved_vars__Goal1_19, &ll_backend__saved_vars__Goal2_26, ll_backend__saved_vars__Varset1_21, &ll_backend__saved_vars__Varset_27, ll_backend__saved_vars__VarTypes1_22, &ll_backend__saved_vars__VarTypes_28, ll_backend__saved_vars__RttiVarMaps1_23, &ll_backend__saved_vars__RttiVarMaps_29);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36, &ll_backend__saved_vars__InstMap0_30);
    }
    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__InstVarSet_31);
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, ll_backend__saved_vars__Goal2_26, &ll_backend__saved_vars__Goal_32, ll_backend__saved_vars__VarTypes_28, ll_backend__saved_vars__InstVarSet_31, ll_backend__saved_vars__InstMap0_30, ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_0_36, ll_backend__saved_vars__STATE_VARIABLE_ModuleInfo_37);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ll_backend__saved_vars__Goal_32, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_0_34, &ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_64_64);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ll_backend__saved_vars__Varset_27, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_64_64, &ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_65_65);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ll_backend__saved_vars__VarTypes_28, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_65_65, &ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_66_66);
    }
    {
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(ll_backend__saved_vars__RttiVarMaps_29, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_66_66, ll_backend__saved_vars__STATE_VARIABLE_ProcInfo_35);
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__saved_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.saved_vars. */
