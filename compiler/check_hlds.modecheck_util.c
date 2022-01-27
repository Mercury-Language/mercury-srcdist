/*
** Automatically generated from `modecheck_util.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module check_hlds.modecheck_util. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_util__init
ENDINIT
*/

#include "check_hlds.modecheck_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
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




#line 137 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0;

#line 140 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 143 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2];

#line 146 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2];

#line 149 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1;

#line 152 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1];

#line 155 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1];

#line 158 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2];

#line 161 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0[2];

#line 164 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0[2];

#line 167 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0;

#line 170 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2];

#line 173 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2];

#line 176 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1;

#line 179 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1];

#line 182 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1];

#line 185 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2];

#line 188 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0[2];

#line 191 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0[2];

#line 194 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
#line 197 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 199 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

#line 202 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
#line 205 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 207 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 209 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

#line 212 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
#line 215 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 217 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

#line 220 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
#line 223 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 225 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 227 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

#line 914 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__build_call_11_p_0(
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__CalleeModuleName_12,
#line 914 "modecheck_util.m"
  MR_String check_hlds__modecheck_util__CalleePredName_13,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgVars_14,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgTypes_15,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NonLocals_16,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMapDelta_17,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_18,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_19,
#line 914 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_20,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51,
#line 914 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52);

#line 721 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_implied_mode_8_p_0(
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_9,
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarInst0_10,
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst0_11,
#line 721 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Var_12,
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_34,
#line 721 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35,
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36,
#line 721 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37);

#line 581 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 581 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum0_4,
#line 581 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__5_5,
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6,
#line 581 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7,
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 581 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);

#line 489 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
#line 489 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 489 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 489 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 489 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 489 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 489 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 489 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7);

#line 472 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
#line 472 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 472 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 472 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 472 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 472 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 472 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 472 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7);

#line 357 "modecheck_util.m"
static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
#line 357 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_5,
#line 357 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_6,
#line 357 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_7);

#line 319 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
#line 319 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 319 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 319 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3);

#line 300 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
#line 300 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 300 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 300 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 300 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);

#line 349 "modecheck_util.m"
static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
#line 349 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 349 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][7];




static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 430 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0 = {
  (MR_String) "no_after_goals",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 445 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 453 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 459 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2] = {
  (MR_String) "after_instmap",
  (MR_String) "after_goals"
};

#line 465 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1 = {
  (MR_String) "after_goals",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1,
  NULL,
  NULL
};

#line 480 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

#line 485 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1
};

#line 490 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1
  }
};

#line 504 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0[2] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1,
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

#line 510 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 516 "check_hlds.modecheck_util.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_after_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____after_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____after_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "after_goals",
  {
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0
  },
  {
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0
};

#line 537 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0 = {
  (MR_String) "no_extra_goals",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 552 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 558 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2] = {
  (MR_String) "extra_before_main",
  (MR_String) "extra_after_main"
};

#line 564 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1 = {
  (MR_String) "extra_goals",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1,
  NULL,
  NULL
};

#line 579 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

#line 584 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1
};

#line 589 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1
  }
};

#line 603 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0[2] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1,
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

#line 609 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 615 "check_hlds.modecheck_util.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____extra_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____extra_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "extra_goals",
  {
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0
  },
  {
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0
};

#line 636 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
#line 639 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 641 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
#line 643 "check_hlds.modecheck_util.c"
{
#line 645 "check_hlds.modecheck_util.c"
  {
#line 647 "check_hlds.modecheck_util.c"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 650 "check_hlds.modecheck_util.c"
    {
#line 652 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____after_goals_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 655 "check_hlds.modecheck_util.c"
    return check_hlds__modecheck_util__succeeded;
#line 657 "check_hlds.modecheck_util.c"
  }
#line 659 "check_hlds.modecheck_util.c"
}

#line 662 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
#line 665 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 667 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 669 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
#line 671 "check_hlds.modecheck_util.c"
{
#line 673 "check_hlds.modecheck_util.c"
  {
#line 675 "check_hlds.modecheck_util.c"
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

#line 678 "check_hlds.modecheck_util.c"
    {
#line 680 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util____Compare____after_goals_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
#line 683 "check_hlds.modecheck_util.c"
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
#line 685 "check_hlds.modecheck_util.c"
  }
#line 687 "check_hlds.modecheck_util.c"
}

#line 690 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
#line 693 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 695 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
#line 697 "check_hlds.modecheck_util.c"
{
#line 699 "check_hlds.modecheck_util.c"
  {
#line 701 "check_hlds.modecheck_util.c"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 704 "check_hlds.modecheck_util.c"
    {
#line 706 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 709 "check_hlds.modecheck_util.c"
    return check_hlds__modecheck_util__succeeded;
#line 711 "check_hlds.modecheck_util.c"
  }
#line 713 "check_hlds.modecheck_util.c"
}

#line 716 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
#line 719 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 721 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 723 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
#line 725 "check_hlds.modecheck_util.c"
{
#line 727 "check_hlds.modecheck_util.c"
  {
#line 729 "check_hlds.modecheck_util.c"
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

#line 732 "check_hlds.modecheck_util.c"
    {
#line 734 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util____Compare____extra_goals_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
#line 737 "check_hlds.modecheck_util.c"
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
#line 739 "check_hlds.modecheck_util.c"
  }
#line 741 "check_hlds.modecheck_util.c"
}

#line 170 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(
#line 170 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModeContext_5,
#line 170 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__UnifyContext_6)
#line 170 "modecheck_util.m"
{
#line 991 "modecheck_util.m"
  {
#line 991 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 991 "modecheck_util.m"
    if ((check_hlds__modecheck_util__ModeContext_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "modecheck_util.m"
      {
#line 997 "modecheck_util.m"
        {
#line 997 "modecheck_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.mode_context_to_unify_context\'/3", (MR_String) "uninitialized context");
#line 997 "modecheck_util.m"
          return;
        }
#line 996 "modecheck_util.m"
      }
#line 991 "modecheck_util.m"
    else
#line 991 "modecheck_util.m"
      if (((MR_tag((MR_Word) check_hlds__modecheck_util__ModeContext_5)) == (MR_mktag((MR_Integer) 1))))
#line 993 "modecheck_util.m"
        {
#line 993 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__CallId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 0)));
#line 993 "modecheck_util.m"
          MR_Integer check_hlds__modecheck_util__Arg_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 1)));
#line 993 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_13_13;

#line 994 "modecheck_util.m"
          {
#line 994 "modecheck_util.m"
            check_hlds__modecheck_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "modecheck_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__V_13_13, 0) = ((MR_Box) (check_hlds__modecheck_util__CallId_8));
#line 994 "modecheck_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__V_13_13, 1) = ((MR_Box) (check_hlds__modecheck_util__Arg_9));
#line 994 "modecheck_util.m"
          }
#line 994 "modecheck_util.m"
          {
#line 994 "modecheck_util.m"
            MR_Word base;
#line 994 "modecheck_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 994 "modecheck_util.m"
            *check_hlds__modecheck_util__UnifyContext_6 = base;
#line 994 "modecheck_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_util__V_13_13));
#line 994 "modecheck_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 994 "modecheck_util.m"
          }
#line 993 "modecheck_util.m"
        }
#line 991 "modecheck_util.m"
      else
#line 991 "modecheck_util.m"
        {
#line 991 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_7_7;

#line 991 "modecheck_util.m"
          *check_hlds__modecheck_util__UnifyContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 0)));
#line 991 "modecheck_util.m"
          check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 1)));
#line 991 "modecheck_util.m"
        }
#line 991 "modecheck_util.m"
  }
#line 170 "modecheck_util.m"
}

#line 29 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0(
#line 29 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 29 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 29 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
#line 29 "modecheck_util.m"
{
#line 29 "modecheck_util.m"
  {
#line 29 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 29 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_13 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;
#line 29 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_14 = (MR_Integer) check_hlds__modecheck_util__HeadVar__3_3;

#line 29 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_13 == check_hlds__modecheck_util__CastY_14);
#line 29 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 852 "check_hlds.modecheck_util.c"
      *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 29 "modecheck_util.m"
    else
#line 29 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 29 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 29 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 29 "modecheck_util.m"
        else
#line 864 "check_hlds.modecheck_util.c"
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "modecheck_util.m"
      else
#line 29 "modecheck_util.m"
        {
#line 29 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 29 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));

#line 29 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 877 "check_hlds.modecheck_util.c"
            *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "modecheck_util.m"
          else
#line 29 "modecheck_util.m"
            {
#line 29 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 29 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 29 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__V_12_12;

#line 29 "modecheck_util.m"
              {
#line 29 "modecheck_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], &check_hlds__modecheck_util__V_12_12, ((MR_Box) (check_hlds__modecheck_util__V_18_18)), ((MR_Box) (check_hlds__modecheck_util__V_10_10)));
              }
#line 895 "check_hlds.modecheck_util.c"
              check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_12_12 == (MR_Integer) 0);
#line 29 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 29 "modecheck_util.m"
              if (check_hlds__modecheck_util__succeeded)
#line 29 "modecheck_util.m"
                *check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__V_12_12;
#line 29 "modecheck_util.m"
              else
#line 29 "modecheck_util.m"
                {
#line 29 "modecheck_util.m"
                  {
#line 29 "modecheck_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__V_17_17)), ((MR_Box) (check_hlds__modecheck_util__V_11_11)));
#line 29 "modecheck_util.m"
                    return;
                  }
#line 29 "modecheck_util.m"
                }
#line 29 "modecheck_util.m"
            }
#line 29 "modecheck_util.m"
        }
#line 29 "modecheck_util.m"
  }
#line 29 "modecheck_util.m"
}

#line 29 "modecheck_util.m"
MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0(
#line 29 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 29 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
#line 29 "modecheck_util.m"
{
#line 29 "modecheck_util.m"
  {
#line 29 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 29 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_9 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 29 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_10 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 29 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_9 == check_hlds__modecheck_util__CastY_10);
#line 29 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 29 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 29 "modecheck_util.m"
    else
#line 29 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 29 "modecheck_util.m"
        {
#line 29 "modecheck_util.m"
          MR_Integer check_hlds__modecheck_util__CastX_3 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 29 "modecheck_util.m"
          MR_Integer check_hlds__modecheck_util__CastY_4 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 29 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastY_4 == check_hlds__modecheck_util__CastX_3);
#line 29 "modecheck_util.m"
        }
#line 29 "modecheck_util.m"
      else
#line 29 "modecheck_util.m"
        {
#line 29 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__TypeInfo_11_11;
#line 29 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__TypeInfo_12_12;
#line 29 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 29 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 29 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_7_7;
#line 29 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_8_8;

#line 29 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 29 "modecheck_util.m"
          if (check_hlds__modecheck_util__succeeded)
#line 29 "modecheck_util.m"
            {
#line 29 "modecheck_util.m"
              check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 29 "modecheck_util.m"
              check_hlds__modecheck_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 991 "check_hlds.modecheck_util.c"
              check_hlds__modecheck_util__TypeInfo_11_11 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1];
#line 993 "check_hlds.modecheck_util.c"
              {
#line 995 "check_hlds.modecheck_util.c"
                check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_11_11, ((MR_Box) (check_hlds__modecheck_util__V_5_5)), ((MR_Box) (check_hlds__modecheck_util__V_7_7)));
              }
#line 29 "modecheck_util.m"
              if (check_hlds__modecheck_util__succeeded)
#line 29 "modecheck_util.m"
                {
#line 1002 "check_hlds.modecheck_util.c"
                  check_hlds__modecheck_util__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1];
#line 1004 "check_hlds.modecheck_util.c"
                  {
#line 1006 "check_hlds.modecheck_util.c"
                    return check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_util__V_6_6)), ((MR_Box) (check_hlds__modecheck_util__V_8_8)));
                  }
#line 29 "modecheck_util.m"
                }
#line 29 "modecheck_util.m"
            }
#line 29 "modecheck_util.m"
        }
#line 29 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 29 "modecheck_util.m"
  }
#line 29 "modecheck_util.m"
}

#line 39 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0(
#line 39 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 39 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 39 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
#line 39 "modecheck_util.m"
{
#line 39 "modecheck_util.m"
  {
#line 39 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 39 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_13 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;
#line 39 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_14 = (MR_Integer) check_hlds__modecheck_util__HeadVar__3_3;

#line 39 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_13 == check_hlds__modecheck_util__CastY_14);
#line 39 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1046 "check_hlds.modecheck_util.c"
      *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "modecheck_util.m"
    else
#line 39 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 39 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 39 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "modecheck_util.m"
        else
#line 1058 "check_hlds.modecheck_util.c"
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 1;
#line 39 "modecheck_util.m"
      else
#line 39 "modecheck_util.m"
        {
#line 39 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));

#line 39 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1071 "check_hlds.modecheck_util.c"
            *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 2;
#line 39 "modecheck_util.m"
          else
#line 39 "modecheck_util.m"
            {
#line 39 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__V_12_12;

#line 39 "modecheck_util.m"
              {
#line 39 "modecheck_util.m"
                hlds__instmap____Compare____instmap_0_0(&check_hlds__modecheck_util__V_12_12, check_hlds__modecheck_util__V_18_18, check_hlds__modecheck_util__V_10_10);
              }
#line 1089 "check_hlds.modecheck_util.c"
              check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_12_12 == (MR_Integer) 0);
#line 39 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 39 "modecheck_util.m"
              if (check_hlds__modecheck_util__succeeded)
#line 39 "modecheck_util.m"
                *check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__V_12_12;
#line 39 "modecheck_util.m"
              else
#line 39 "modecheck_util.m"
                {
#line 39 "modecheck_util.m"
                  {
#line 39 "modecheck_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__V_17_17)), ((MR_Box) (check_hlds__modecheck_util__V_11_11)));
#line 39 "modecheck_util.m"
                    return;
                  }
#line 39 "modecheck_util.m"
                }
#line 39 "modecheck_util.m"
            }
#line 39 "modecheck_util.m"
        }
#line 39 "modecheck_util.m"
  }
#line 39 "modecheck_util.m"
}

#line 39 "modecheck_util.m"
MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0(
#line 39 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 39 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
#line 39 "modecheck_util.m"
{
#line 39 "modecheck_util.m"
  {
#line 39 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 39 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_9 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 39 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_10 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 39 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_9 == check_hlds__modecheck_util__CastY_10);
#line 39 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 39 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 39 "modecheck_util.m"
    else
#line 39 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 39 "modecheck_util.m"
        {
#line 39 "modecheck_util.m"
          MR_Integer check_hlds__modecheck_util__CastX_3 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 39 "modecheck_util.m"
          MR_Integer check_hlds__modecheck_util__CastY_4 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 39 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastY_4 == check_hlds__modecheck_util__CastX_3);
#line 39 "modecheck_util.m"
        }
#line 39 "modecheck_util.m"
      else
#line 39 "modecheck_util.m"
        {
#line 39 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__TypeInfo_12_12;
#line 39 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_7_7;
#line 39 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_8_8;

#line 39 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 39 "modecheck_util.m"
          if (check_hlds__modecheck_util__succeeded)
#line 39 "modecheck_util.m"
            {
#line 39 "modecheck_util.m"
              check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "modecheck_util.m"
              check_hlds__modecheck_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1183 "check_hlds.modecheck_util.c"
              {
#line 1185 "check_hlds.modecheck_util.c"
                check_hlds__modecheck_util__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__modecheck_util__V_5_5, check_hlds__modecheck_util__V_7_7);
              }
#line 39 "modecheck_util.m"
              if (check_hlds__modecheck_util__succeeded)
#line 39 "modecheck_util.m"
                {
#line 1192 "check_hlds.modecheck_util.c"
                  check_hlds__modecheck_util__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1];
#line 1194 "check_hlds.modecheck_util.c"
                  {
#line 1196 "check_hlds.modecheck_util.c"
                    return check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_util__V_6_6)), ((MR_Box) (check_hlds__modecheck_util__V_8_8)));
                  }
#line 39 "modecheck_util.m"
                }
#line 39 "modecheck_util.m"
            }
#line 39 "modecheck_util.m"
        }
#line 39 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 39 "modecheck_util.m"
  }
#line 39 "modecheck_util.m"
}

#line 914 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__build_call_11_p_0(
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__CalleeModuleName_12,
#line 914 "modecheck_util.m"
  MR_String check_hlds__modecheck_util__CalleePredName_13,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgVars_14,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgTypes_15,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NonLocals_16,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMapDelta_17,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_18,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_19,
#line 914 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_20,
#line 914 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51,
#line 914 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52)
#line 914 "modecheck_util.m"
{
#line 920 "modecheck_util.m"
  {
#line 920 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_22;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredId_23;
#line 920 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ProcId_24;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredInfo0_25;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo0_26;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TVarSet_27;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ExistQTVars_28;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__HeadTypeParams_29;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__SymName_30;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleePredId_31;
#line 920 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CalleeProcId_32;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleePredInfo_33;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleeProcInfo_34;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarSet0_35;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes0_36;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo1_37;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo2_38;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PolyInfo0_39;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo0_40;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo1_41;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo2_42;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo_43;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PolyInfo_44;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredInfo_45;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo_46;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo1_47;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_48;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarSet_49;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_50;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_55_55;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_56_56;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_57_57;
#line 920 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_59_59;
#line 920 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__V_60_60;

#line 921 "modecheck_util.m"
    {
#line 921 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__ModuleInfo0_22);
    }
#line 925 "modecheck_util.m"
    {
#line 925 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__PredId_23);
    }
#line 926 "modecheck_util.m"
    {
#line 926 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__ProcId_24);
    }
#line 927 "modecheck_util.m"
    {
#line 927 "modecheck_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__PredId_23, check_hlds__modecheck_util__ProcId_24, &check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__ProcInfo0_26);
    }
#line 929 "modecheck_util.m"
    {
#line 929 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__TVarSet_27);
    }
#line 930 "modecheck_util.m"
    {
#line 930 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__ExistQTVars_28);
    }
#line 931 "modecheck_util.m"
    {
#line 931 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__HeadTypeParams_29);
    }
#line 934 "modecheck_util.m"
    {
#line 934 "modecheck_util.m"
      check_hlds__modecheck_util__SymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, 0) = ((MR_Box) (check_hlds__modecheck_util__CalleeModuleName_12));
#line 934 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, 1) = ((MR_Box) (check_hlds__modecheck_util__CalleePredName_13));
#line 934 "modecheck_util.m"
    }
#line 935 "modecheck_util.m"
    {
#line 935 "modecheck_util.m"
      hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0((MR_Integer) 0, check_hlds__modecheck_util__SymName_30, (MR_Integer) 0, check_hlds__modecheck_util__TVarSet_27, check_hlds__modecheck_util__ExistQTVars_28, check_hlds__modecheck_util__ArgTypes_15, check_hlds__modecheck_util__HeadTypeParams_29, check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__Context_18, &check_hlds__modecheck_util__CalleePredId_31, &check_hlds__modecheck_util__CalleeProcId_32);
    }
#line 938 "modecheck_util.m"
    {
#line 938 "modecheck_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__CalleePredId_31, check_hlds__modecheck_util__CalleeProcId_32, &check_hlds__modecheck_util__CalleePredInfo_33, &check_hlds__modecheck_util__CalleeProcInfo_34);
    }
#line 945 "modecheck_util.m"
    {
#line 945 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__VarSet0_35);
    }
#line 946 "modecheck_util.m"
    {
#line 946 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__VarTypes0_36);
    }
#line 947 "modecheck_util.m"
    {
#line 947 "modecheck_util.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet0_35, check_hlds__modecheck_util__ProcInfo0_26, &check_hlds__modecheck_util__ProcInfo1_37);
    }
#line 948 "modecheck_util.m"
    {
#line 948 "modecheck_util.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modecheck_util__VarTypes0_36, check_hlds__modecheck_util__ProcInfo1_37, &check_hlds__modecheck_util__ProcInfo2_38);
    }
#line 949 "modecheck_util.m"
    {
#line 949 "modecheck_util.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__PredInfo0_25, check_hlds__modecheck_util__ProcInfo2_38, &check_hlds__modecheck_util__PolyInfo0_39);
    }
#line 953 "modecheck_util.m"
    {
#line 953 "modecheck_util.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__modecheck_util__GoalInfo0_40);
    }
#line 954 "modecheck_util.m"
    {
#line 954 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_util__Context_18, check_hlds__modecheck_util__GoalInfo0_40, &check_hlds__modecheck_util__GoalInfo1_41);
    }
#line 955 "modecheck_util.m"
    {
#line 955 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_util__NonLocals_16, check_hlds__modecheck_util__GoalInfo1_41, &check_hlds__modecheck_util__GoalInfo2_42);
    }
#line 956 "modecheck_util.m"
    {
#line 956 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_util__InstMapDelta_17, check_hlds__modecheck_util__GoalInfo2_42, &check_hlds__modecheck_util__GoalInfo_43);
    }
#line 959 "modecheck_util.m"
    check_hlds__modecheck_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, (MR_Integer) 0)));
#line 959 "modecheck_util.m"
    check_hlds__modecheck_util__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, (MR_Integer) 1)));
#line 959 "modecheck_util.m"
    {
#line 959 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__modecheck_util__CalleeModuleName_12, check_hlds__modecheck_util__V_59_59);
    }
#line 920 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 920 "modecheck_util.m"
      {
#line 959 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (strcmp(check_hlds__modecheck_util__CalleePredName_13, check_hlds__modecheck_util__V_60_60) == 0);
#line 920 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 920 "modecheck_util.m"
          {
#line 960 "modecheck_util.m"
            check_hlds__modecheck_util__V_55_55 = (MR_Integer) 2;
#line 960 "modecheck_util.m"
            {
#line 960 "modecheck_util.m"
              check_hlds__polymorphism__polymorphism_process_new_call_12_p_0(check_hlds__modecheck_util__CalleePredInfo_33, check_hlds__modecheck_util__CalleeProcInfo_34, check_hlds__modecheck_util__CalleePredId_31, check_hlds__modecheck_util__CalleeProcId_32, check_hlds__modecheck_util__ArgVars_14, check_hlds__modecheck_util__V_55_55, check_hlds__modecheck_util__MaybeCallUnifyContext_19, check_hlds__modecheck_util__SymName_30, check_hlds__modecheck_util__GoalInfo_43, check_hlds__modecheck_util__Goal_20, check_hlds__modecheck_util__PolyInfo0_39, &check_hlds__modecheck_util__PolyInfo_44);
            }
#line 965 "modecheck_util.m"
            {
#line 965 "modecheck_util.m"
              check_hlds__polymorphism__poly_info_extract_6_p_0(check_hlds__modecheck_util__PolyInfo_44, check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__PredInfo_45, check_hlds__modecheck_util__ProcInfo2_38, &check_hlds__modecheck_util__ProcInfo_46, &check_hlds__modecheck_util__ModuleInfo1_47);
            }
#line 967 "modecheck_util.m"
            {
#line 967 "modecheck_util.m"
              hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__modecheck_util__PredId_23, check_hlds__modecheck_util__ProcId_24, check_hlds__modecheck_util__PredInfo_45, check_hlds__modecheck_util__ProcInfo_46, check_hlds__modecheck_util__ModuleInfo1_47, &check_hlds__modecheck_util__ModuleInfo_48);
            }
#line 971 "modecheck_util.m"
            {
#line 971 "modecheck_util.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__modecheck_util__ProcInfo_46, &check_hlds__modecheck_util__VarSet_49);
            }
#line 972 "modecheck_util.m"
            {
#line 972 "modecheck_util.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__modecheck_util__ProcInfo_46, &check_hlds__modecheck_util__VarTypes_50);
            }
#line 973 "modecheck_util.m"
            {
#line 973 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet_49, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_56_56);
            }
#line 974 "modecheck_util.m"
            {
#line 974 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_util__VarTypes_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_56_56, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_57_57);
            }
#line 975 "modecheck_util.m"
            {
#line 975 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_48, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_57_57, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52);
            }
#line 975 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 920 "modecheck_util.m"
          }
#line 920 "modecheck_util.m"
      }
#line 920 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 920 "modecheck_util.m"
  }
#line 914 "modecheck_util.m"
}

#line 721 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_implied_mode_8_p_0(
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_9,
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarInst0_10,
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst0_11,
#line 721 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Var_12,
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_34,
#line 721 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35,
#line 721 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36,
#line 721 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37)
#line 721 "modecheck_util.m"
{
#line 726 "modecheck_util.m"
  {
#line 726 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 726 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_15;
#line 726 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InitialInst_16;
#line 726 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarInst1_17;
#line 726 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes0_18;
#line 726 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarType_19;

#line 727 "modecheck_util.m"
    {
#line 727 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_util__ModuleInfo0_15);
    }
#line 728 "modecheck_util.m"
    {
#line 728 "modecheck_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__InitialInst0_11, &check_hlds__modecheck_util__InitialInst_16);
    }
#line 729 "modecheck_util.m"
    {
#line 729 "modecheck_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarInst0_10, &check_hlds__modecheck_util__VarInst1_17);
    }
#line 731 "modecheck_util.m"
    {
#line 731 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_util__VarTypes0_18);
    }
#line 732 "modecheck_util.m"
    {
#line 732 "modecheck_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes0_18, check_hlds__modecheck_util__Var0_9, &check_hlds__modecheck_util__VarType_19);
    }
#line 737 "modecheck_util.m"
    {
#line 737 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(check_hlds__modecheck_util__VarInst1_17, check_hlds__modecheck_util__InitialInst_16, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__ModuleInfo0_15);
    }
#line 741 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 740 "modecheck_util.m"
      {
#line 740 "modecheck_util.m"
        *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 740 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36;
#line 740 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_34;
#line 740 "modecheck_util.m"
      }
#line 741 "modecheck_util.m"
    else
#line 787 "modecheck_util.m"
      {
#line 747 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_20_20;
#line 747 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_21_21;

#line 747 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__InitialInst_16)) == (MR_mktag((MR_Integer) 2)));
#line 747 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 747 "modecheck_util.m"
          {
#line 747 "modecheck_util.m"
            check_hlds__modecheck_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__InitialInst_16, (MR_Integer) 0)));
#line 747 "modecheck_util.m"
            check_hlds__modecheck_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__InitialInst_16, (MR_Integer) 1)));
#line 748 "modecheck_util.m"
            {
#line 748 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarInst1_17);
            }
#line 747 "modecheck_util.m"
          }
#line 787 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 753 "modecheck_util.m"
          {
#line 753 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Context_22;
#line 753 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModeContext_23;
#line 753 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__UnifyContext_24;
#line 753 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__CallUnifyContext_25;
#line 753 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_38_38;
#line 753 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_39_39;
#line 770 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModeErrors_26;

#line 753 "modecheck_util.m"
            *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 764 "modecheck_util.m"
            {
#line 764 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_util__Context_22);
            }
#line 765 "modecheck_util.m"
            {
#line 765 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_util__ModeContext_23);
            }
#line 766 "modecheck_util.m"
            {
#line 766 "modecheck_util.m"
              check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(check_hlds__modecheck_util__ModeContext_23, &check_hlds__modecheck_util__UnifyContext_24);
            }
#line 767 "modecheck_util.m"
            {
#line 767 "modecheck_util.m"
              check_hlds__modecheck_util__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 767 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_39_39, 0) = ((MR_Box) (*check_hlds__modecheck_util__Var_12));
#line 767 "modecheck_util.m"
            }
#line 767 "modecheck_util.m"
            {
#line 767 "modecheck_util.m"
              check_hlds__modecheck_util__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 767 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_38_38, 0) = ((MR_Box) (*check_hlds__modecheck_util__Var_12));
#line 767 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_38_38, 1) = ((MR_Box) (check_hlds__modecheck_util__V_39_39));
#line 767 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_38_38, 2) = ((MR_Box) (check_hlds__modecheck_util__UnifyContext_24));
#line 767 "modecheck_util.m"
            }
#line 767 "modecheck_util.m"
            {
#line 767 "modecheck_util.m"
              check_hlds__modecheck_util__CallUnifyContext_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 767 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__CallUnifyContext_25, 0) = ((MR_Box) (check_hlds__modecheck_util__V_38_38));
#line 767 "modecheck_util.m"
            }
#line 770 "modecheck_util.m"
            {
#line 770 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_util__ModeErrors_26);
            }
#line 771 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__ModeErrors_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 770 "modecheck_util.m"
              {
#line 772 "modecheck_util.m"
                {
#line 772 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36);
                }
#line 770 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 770 "modecheck_util.m"
                  {
#line 773 "modecheck_util.m"
                    {
#line 773 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36);
                    }
#line 770 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 774 "modecheck_util.m"
                      {
#line 774 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarType_19);
                      }
#line 770 "modecheck_util.m"
                  }
#line 770 "modecheck_util.m"
              }
#line 780 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 857 "modecheck_util.m"
              {
#line 857 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InitVarGoal_68;
#line 857 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NewExtraGoal_69;
#line 857 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__V_71_71;

#line 858 "modecheck_util.m"
                {
#line 858 "modecheck_util.m"
                  check_hlds__modecheck_util__construct_initialisation_call_8_p_0(*check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__InitialInst_16, check_hlds__modecheck_util__Context_22, check_hlds__modecheck_util__CallUnifyContext_25, &check_hlds__modecheck_util__InitVarGoal_68, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37);
                }
#line 860 "modecheck_util.m"
                {
#line 860 "modecheck_util.m"
                  check_hlds__modecheck_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_71_71, 0) = ((MR_Box) (check_hlds__modecheck_util__InitVarGoal_68));
#line 860 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "modecheck_util.m"
                }
#line 860 "modecheck_util.m"
                {
#line 860 "modecheck_util.m"
                  check_hlds__modecheck_util__NewExtraGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewExtraGoal_69, 0) = ((MR_Box) (check_hlds__modecheck_util__V_71_71));
#line 860 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewExtraGoal_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "modecheck_util.m"
                }
#line 861 "modecheck_util.m"
                {
#line 861 "modecheck_util.m"
                  check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_34, check_hlds__modecheck_util__NewExtraGoal_69, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35);
#line 861 "modecheck_util.m"
                  return;
                }
#line 857 "modecheck_util.m"
              }
#line 780 "modecheck_util.m"
            else
#line 783 "modecheck_util.m"
              {
#line 783 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__WaitingVars_27;
#line 783 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModeError_28;

#line 783 "modecheck_util.m"
                {
#line 783 "modecheck_util.m"
                  check_hlds__modecheck_util__WaitingVars_27 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_9);
                }
#line 784 "modecheck_util.m"
                {
#line 784 "modecheck_util.m"
                  check_hlds__modecheck_util__ModeError_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 784 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 784 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_28, 1) = ((MR_Box) (check_hlds__modecheck_util__Var0_9));
#line 784 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_28, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst0_10));
#line 784 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_28, 3) = ((MR_Box) (check_hlds__modecheck_util__InitialInst_16));
#line 784 "modecheck_util.m"
                }
#line 785 "modecheck_util.m"
                {
#line 785 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_27, check_hlds__modecheck_util__ModeError_28, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37);
                }
#line 785 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_34;
#line 783 "modecheck_util.m"
              }
#line 753 "modecheck_util.m"
          }
#line 787 "modecheck_util.m"
        else
#line 795 "modecheck_util.m"
          {
#line 788 "modecheck_util.m"
            {
#line 788 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__InitialInst_16);
            }
#line 795 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 791 "modecheck_util.m"
              {
#line 791 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__WaitingVars_50;
#line 791 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModeError_51;

#line 791 "modecheck_util.m"
                *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 792 "modecheck_util.m"
                {
#line 792 "modecheck_util.m"
                  check_hlds__modecheck_util__WaitingVars_50 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_9);
                }
#line 793 "modecheck_util.m"
                {
#line 793 "modecheck_util.m"
                  check_hlds__modecheck_util__ModeError_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 793 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 793 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_51, 1) = ((MR_Box) (check_hlds__modecheck_util__Var0_9));
#line 793 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_51, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst0_10));
#line 793 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_51, 3) = ((MR_Box) (check_hlds__modecheck_util__InitialInst_16));
#line 793 "modecheck_util.m"
                }
#line 794 "modecheck_util.m"
                {
#line 794 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_50, check_hlds__modecheck_util__ModeError_51, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37);
                }
#line 794 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_34;
#line 791 "modecheck_util.m"
              }
#line 795 "modecheck_util.m"
            else
#line 800 "modecheck_util.m"
              {
#line 800 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarSet0_29;
#line 800 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarSet_30;
#line 800 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_31;
#line 800 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ExtraGoal_32;
#line 800 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NewUnifyExtraGoal_33;
#line 800 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_44_44;
#line 800 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__V_47_47;

#line 800 "modecheck_util.m"
                {
#line 800 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_util__VarSet0_29);
                }
#line 801 "modecheck_util.m"
                {
#line 801 "modecheck_util.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarSet0_29, &check_hlds__modecheck_util__VarSet_30);
                }
#line 802 "modecheck_util.m"
                {
#line 802 "modecheck_util.m"
                  parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__VarTypes0_18, &check_hlds__modecheck_util__VarTypes_31);
                }
#line 803 "modecheck_util.m"
                {
#line 803 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet_30, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_44_44);
                }
#line 804 "modecheck_util.m"
                {
#line 804 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_util__VarTypes_31, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_44_44, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37);
                }
#line 807 "modecheck_util.m"
                {
#line 807 "modecheck_util.m"
                  check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_util__Var0_9, *check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37, &check_hlds__modecheck_util__ExtraGoal_32);
                }
#line 811 "modecheck_util.m"
                {
#line 811 "modecheck_util.m"
                  check_hlds__modecheck_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_47_47, 0) = ((MR_Box) (check_hlds__modecheck_util__ExtraGoal_32));
#line 811 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "modecheck_util.m"
                }
#line 811 "modecheck_util.m"
                {
#line 811 "modecheck_util.m"
                  check_hlds__modecheck_util__NewUnifyExtraGoal_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewUnifyExtraGoal_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewUnifyExtraGoal_33, 1) = ((MR_Box) (check_hlds__modecheck_util__V_47_47));
#line 811 "modecheck_util.m"
                }
#line 812 "modecheck_util.m"
                {
#line 812 "modecheck_util.m"
                  check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_34, check_hlds__modecheck_util__NewUnifyExtraGoal_33, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35);
#line 812 "modecheck_util.m"
                  return;
                }
#line 800 "modecheck_util.m"
              }
#line 795 "modecheck_util.m"
          }
#line 787 "modecheck_util.m"
      }
#line 726 "modecheck_util.m"
  }
#line 721 "modecheck_util.m"
}

#line 581 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 581 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum0_4,
#line 581 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__5_5,
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6,
#line 581 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7,
#line 581 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 581 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9)
#line 581 "modecheck_util.m"
{
#line 586 "modecheck_util.m"
  {
#line 586 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 586 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 586 "modecheck_util.m"
      {
#line 586 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 586 "modecheck_util.m"
          {
#line 586 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 586 "modecheck_util.m"
              {
#line 586 "modecheck_util.m"
                *check_hlds__modecheck_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 586 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 586 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6;
#line 586 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 586 "modecheck_util.m"
              }
#line 586 "modecheck_util.m"
          }
#line 586 "modecheck_util.m"
      }
#line 586 "modecheck_util.m"
    else
#line 589 "modecheck_util.m"
      {
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InitialInst_19;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InitialInsts_20;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__FinalInst_21;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__FinalInsts_22;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var_24;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars_25;
#line 589 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__ArgNum_28;
#line 589 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__V_33_33;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36;
#line 589 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap0_49;

#line 589 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 589 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 589 "modecheck_util.m"
          {
#line 589 "modecheck_util.m"
            check_hlds__modecheck_util__InitialInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 589 "modecheck_util.m"
            check_hlds__modecheck_util__InitialInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 589 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 589 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 589 "modecheck_util.m"
              {
#line 589 "modecheck_util.m"
                check_hlds__modecheck_util__FinalInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 589 "modecheck_util.m"
                check_hlds__modecheck_util__FinalInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 590 "modecheck_util.m"
                check_hlds__modecheck_util__V_33_33 = (MR_Integer) 1;
#line 590 "modecheck_util.m"
                check_hlds__modecheck_util__ArgNum_28 = (check_hlds__modecheck_util__ArgNum0_4 + check_hlds__modecheck_util__V_33_33);
#line 591 "modecheck_util.m"
                {
#line 591 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_28, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34);
                }
#line 603 "modecheck_util.m"
                {
#line 603 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_util__InstMap0_49);
                }
#line 604 "modecheck_util.m"
                {
#line 604 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__InstMap0_49);
                }
#line 616 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 607 "modecheck_util.m"
                  {
#line 607 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__VarInst0_50;
#line 607 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52;
#line 607 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54;

#line 607 "modecheck_util.m"
                    {
#line 607 "modecheck_util.m"
                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap0_49, check_hlds__modecheck_util__Var0_17, &check_hlds__modecheck_util__VarInst0_50);
                    }
#line 608 "modecheck_util.m"
                    {
#line 608 "modecheck_util.m"
                      check_hlds__modecheck_util__handle_implied_mode_8_p_0(check_hlds__modecheck_util__Var0_17, check_hlds__modecheck_util__VarInst0_50, check_hlds__modecheck_util__InitialInst_19, &check_hlds__modecheck_util__Var_24, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52);
                    }
#line 610 "modecheck_util.m"
                    {
#line 610 "modecheck_util.m"
                      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var0_17, check_hlds__modecheck_util__FinalInst_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54);
                    }
#line 611 "modecheck_util.m"
                    {
#line 611 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[2], ((MR_Box) (check_hlds__modecheck_util__Var_24)), ((MR_Box) (check_hlds__modecheck_util__Var0_17)));
                    }
#line 613 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 611 "modecheck_util.m"
                      check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54;
#line 613 "modecheck_util.m"
                    else
#line 614 "modecheck_util.m"
                      {
#line 614 "modecheck_util.m"
                        {
#line 614 "modecheck_util.m"
                          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_24, check_hlds__modecheck_util__FinalInst_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36);
                        }
#line 614 "modecheck_util.m"
                      }
#line 607 "modecheck_util.m"
                  }
#line 616 "modecheck_util.m"
                else
#line 617 "modecheck_util.m"
                  {
#line 617 "modecheck_util.m"
                    check_hlds__modecheck_util__Var_24 = check_hlds__modecheck_util__Var0_17;
#line 617 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34;
#line 617 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6;
#line 617 "modecheck_util.m"
                  }
#line 594 "modecheck_util.m"
                {
#line 594 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(check_hlds__modecheck_util__Vars0_18, check_hlds__modecheck_util__InitialInsts_20, check_hlds__modecheck_util__FinalInsts_22, check_hlds__modecheck_util__ArgNum_28, &check_hlds__modecheck_util__Vars_25, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);
                }
#line 589 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 589 "modecheck_util.m"
                  {
#line 589 "modecheck_util.m"
                    {
#line 589 "modecheck_util.m"
                      MR_Word base;
#line 589 "modecheck_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "modecheck_util.m"
                      *check_hlds__modecheck_util__HeadVar__5_5 = base;
#line 589 "modecheck_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_24));
#line 589 "modecheck_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_25));
#line 589 "modecheck_util.m"
                    }
#line 589 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 589 "modecheck_util.m"
                  }
#line 589 "modecheck_util.m"
              }
#line 589 "modecheck_util.m"
          }
#line 589 "modecheck_util.m"
      }
#line 586 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 586 "modecheck_util.m"
  }
#line 581 "modecheck_util.m"
}

#line 489 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
#line 489 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 489 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 489 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 489 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 489 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 489 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 489 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7)
#line 489 "modecheck_util.m"
{
#line 494 "modecheck_util.m"
  while (MR_TRUE)
#line 494 "modecheck_util.m"
    {
#line 494 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 494 "modecheck_util.m"
      {
#line 494 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 494 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "modecheck_util.m"
            {
#line 499 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6;
#line 499 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Subst_5 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 499 "modecheck_util.m"
            }
#line 494 "modecheck_util.m"
          else
#line 497 "modecheck_util.m"
            {
#line 498 "modecheck_util.m"
              {
#line 498 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
#line 498 "modecheck_util.m"
                return;
              }
#line 497 "modecheck_util.m"
            }
#line 494 "modecheck_util.m"
        else
#line 494 "modecheck_util.m"
          {
#line 494 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 494 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 494 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "modecheck_util.m"
              {
#line 495 "modecheck_util.m"
                {
#line 495 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
#line 495 "modecheck_util.m"
                  return;
                }
#line 494 "modecheck_util.m"
              }
#line 494 "modecheck_util.m"
            else
#line 502 "modecheck_util.m"
              {
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Insts_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 502 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_46 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_67;
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarInst_68;
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_69;
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Type_70;
#line 502 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo0_71;
#line 545 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo_72;
#line 545 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_23_75;

#line 504 "modecheck_util.m"
                {
#line 504 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_46, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
                }
#line 535 "modecheck_util.m"
                {
#line 535 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__InstMap_67);
                }
#line 536 "modecheck_util.m"
                {
#line 536 "modecheck_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_67, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__VarInst_68);
                }
#line 537 "modecheck_util.m"
                {
#line 537 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__VarTypes_69);
                }
#line 538 "modecheck_util.m"
                {
#line 538 "modecheck_util.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_69, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__Type_70);
                }
#line 539 "modecheck_util.m"
                {
#line 539 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__ModuleInfo0_71);
                }
#line 541 "modecheck_util.m"
                {
#line 541 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__modecheck_util__VarInst_68, check_hlds__modecheck_util__Inst_41, check_hlds__modecheck_util__Type_70, check_hlds__modecheck_util__ModuleInfo0_71, &check_hlds__modecheck_util__ModuleInfo_72, check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_Subst_23_75);
                }
#line 545 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 544 "modecheck_util.m"
                  {
#line 544 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_23_75;
#line 544 "modecheck_util.m"
                    {
#line 544 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_72, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 544 "modecheck_util.m"
                  }
#line 545 "modecheck_util.m"
                else
#line 546 "modecheck_util.m"
                  {
#line 546 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_73;
#line 546 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_74;

#line 546 "modecheck_util.m"
                    {
#line 546 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_73 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_58_58);
                    }
#line 547 "modecheck_util.m"
                    {
#line 547 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 547 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 547 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_74, 1) = ((MR_Box) (check_hlds__modecheck_util__V_58_58));
#line 547 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_74, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_68));
#line 547 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_74, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_41));
#line 547 "modecheck_util.m"
                    }
#line 548 "modecheck_util.m"
                    {
#line 548 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_73, check_hlds__modecheck_util__ModeError_74, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 548 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 546 "modecheck_util.m"
                  }
#line 506 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 506 "modecheck_util.m"
                {
#line 506 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_57_57;
#line 506 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__Insts_42;
#line 506 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_46;
#line 506 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 506 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;

#line 506 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6;
#line 506 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 506 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 506 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 506 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 506 "modecheck_util.m"
                }
#line 506 "modecheck_util.m"
                continue;
#line 502 "modecheck_util.m"
              }
#line 494 "modecheck_util.m"
          }
#line 494 "modecheck_util.m"
      }
#line 494 "modecheck_util.m"
      break;
#line 494 "modecheck_util.m"
    }
#line 489 "modecheck_util.m"
}

#line 472 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
#line 472 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 472 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 472 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 472 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 472 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 472 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 472 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7)
#line 472 "modecheck_util.m"
{
#line 476 "modecheck_util.m"
  while (MR_TRUE)
#line 476 "modecheck_util.m"
    {
#line 476 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 476 "modecheck_util.m"
      {
#line 476 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 476 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "modecheck_util.m"
            {
#line 480 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6;
#line 480 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Subst_5 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 480 "modecheck_util.m"
            }
#line 476 "modecheck_util.m"
          else
#line 478 "modecheck_util.m"
            {
#line 479 "modecheck_util.m"
              {
#line 479 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
#line 479 "modecheck_util.m"
                return;
              }
#line 478 "modecheck_util.m"
            }
#line 476 "modecheck_util.m"
        else
#line 476 "modecheck_util.m"
          {
#line 476 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 476 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "modecheck_util.m"
              {
#line 477 "modecheck_util.m"
                {
#line 477 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
#line 477 "modecheck_util.m"
                  return;
                }
#line 476 "modecheck_util.m"
              }
#line 476 "modecheck_util.m"
            else
#line 482 "modecheck_util.m"
              {
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Insts_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 482 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_46 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_67;
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarInst_68;
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_69;
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Type_70;
#line 482 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo0_71;
#line 524 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo_72;
#line 524 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_23_75;

#line 484 "modecheck_util.m"
                {
#line 484 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_46, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
                }
#line 514 "modecheck_util.m"
                {
#line 514 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__InstMap_67);
                }
#line 515 "modecheck_util.m"
                {
#line 515 "modecheck_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_67, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__VarInst_68);
                }
#line 516 "modecheck_util.m"
                {
#line 516 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__VarTypes_69);
                }
#line 517 "modecheck_util.m"
                {
#line 517 "modecheck_util.m"
                  parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_69, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__Type_70);
                }
#line 518 "modecheck_util.m"
                {
#line 518 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__ModuleInfo0_71);
                }
#line 520 "modecheck_util.m"
                {
#line 520 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(check_hlds__modecheck_util__VarInst_68, check_hlds__modecheck_util__Inst_41, check_hlds__modecheck_util__Type_70, check_hlds__modecheck_util__ModuleInfo0_71, &check_hlds__modecheck_util__ModuleInfo_72, check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_Subst_23_75);
                }
#line 524 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 523 "modecheck_util.m"
                  {
#line 523 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_23_75;
#line 523 "modecheck_util.m"
                    {
#line 523 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_72, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 523 "modecheck_util.m"
                  }
#line 524 "modecheck_util.m"
                else
#line 525 "modecheck_util.m"
                  {
#line 525 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_73;
#line 525 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_74;

#line 525 "modecheck_util.m"
                    {
#line 525 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_73 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_58_58);
                    }
#line 526 "modecheck_util.m"
                    {
#line 526 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 526 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 526 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_74, 1) = ((MR_Box) (check_hlds__modecheck_util__V_58_58));
#line 526 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_74, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_68));
#line 526 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_74, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_41));
#line 526 "modecheck_util.m"
                    }
#line 527 "modecheck_util.m"
                    {
#line 527 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_73, check_hlds__modecheck_util__ModeError_74, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 527 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 525 "modecheck_util.m"
                  }
#line 486 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 486 "modecheck_util.m"
                {
#line 486 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_57_57;
#line 486 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__Insts_42;
#line 486 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_46;
#line 486 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 486 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;

#line 486 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6;
#line 486 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 486 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 486 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 486 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 486 "modecheck_util.m"
                }
#line 486 "modecheck_util.m"
                continue;
#line 482 "modecheck_util.m"
              }
#line 476 "modecheck_util.m"
          }
#line 476 "modecheck_util.m"
      }
#line 476 "modecheck_util.m"
      break;
#line 476 "modecheck_util.m"
    }
#line 472 "modecheck_util.m"
}

#line 357 "modecheck_util.m"
static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
#line 357 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_5,
#line 357 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_6,
#line 357 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_7)
#line 357 "modecheck_util.m"
{
#line 359 "modecheck_util.m"
  {
#line 359 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 359 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInst_8;
#line 359 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ConsIdAdjustedArity_9;
#line 359 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgInsts_10;

#line 360 "modecheck_util.m"
    {
#line 360 "modecheck_util.m"
      check_hlds__modecheck_util__ConsIdAdjustedArity_9 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(check_hlds__modecheck_util__ModuleInfo_5, check_hlds__modecheck_util__Type_6, check_hlds__modecheck_util__ConsId_7);
    }
#line 361 "modecheck_util.m"
    {
#line 361 "modecheck_util.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__ConsIdAdjustedArity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modecheck_util__ArgInsts_10);
    }
#line 362 "modecheck_util.m"
    {
#line 362 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, 0) = ((MR_Box) (check_hlds__modecheck_util__ConsId_7));
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, 1) = ((MR_Box) (check_hlds__modecheck_util__ArgInsts_10));
#line 362 "modecheck_util.m"
    }
#line 359 "modecheck_util.m"
    return check_hlds__modecheck_util__BoundInst_8;
#line 359 "modecheck_util.m"
  }
#line 357 "modecheck_util.m"
}

#line 319 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
#line 319 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 319 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 319 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 319 "modecheck_util.m"
{
#line 322 "modecheck_util.m"
  {
#line 322 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 322 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 322 "modecheck_util.m"
      *check_hlds__modecheck_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "modecheck_util.m"
    else
#line 323 "modecheck_util.m"
      {
#line 323 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 323 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_8;
#line 323 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_9;
#line 323 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_5, (MR_Integer) 0)));
#line 323 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_5, (MR_Integer) 1)));
#line 323 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalInfo_12;

#line 325 "modecheck_util.m"
        {
#line 325 "modecheck_util.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_util__HeadVar__2_2, check_hlds__modecheck_util__GoalInfo0_11, &check_hlds__modecheck_util__GoalInfo_12);
        }
#line 326 "modecheck_util.m"
        {
#line 326 "modecheck_util.m"
          check_hlds__modecheck_util__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_8, 0) = ((MR_Box) (check_hlds__modecheck_util__GoalExpr_10));
#line 326 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_8, 1) = ((MR_Box) (check_hlds__modecheck_util__GoalInfo_12));
#line 326 "modecheck_util.m"
        }
#line 327 "modecheck_util.m"
        {
#line 327 "modecheck_util.m"
          check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__Goals0_6, check_hlds__modecheck_util__HeadVar__2_2, &check_hlds__modecheck_util__Goals_9);
        }
#line 323 "modecheck_util.m"
        {
#line 323 "modecheck_util.m"
          MR_Word base;
#line 323 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 323 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_8));
#line 323 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_9));
#line 323 "modecheck_util.m"
        }
#line 323 "modecheck_util.m"
      }
#line 322 "modecheck_util.m"
  }
#line 319 "modecheck_util.m"
}

#line 300 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
#line 300 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 300 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 300 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 300 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 300 "modecheck_util.m"
{
#line 303 "modecheck_util.m"
  {
#line 303 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 303 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "modecheck_util.m"
      {
#line 303 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 303 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 303 "modecheck_util.m"
      }
#line 303 "modecheck_util.m"
    else
#line 304 "modecheck_util.m"
      {
#line 304 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 304 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 304 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_10;
#line 304 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_11;
#line 304 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_13;
#line 304 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_14;
#line 304 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;
#line 304 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;

#line 305 "modecheck_util.m"
        {
#line 305 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal0_8);
        }
#line 306 "modecheck_util.m"
        {
#line 306 "modecheck_util.m"
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
        }
#line 307 "modecheck_util.m"
        {
#line 307 "modecheck_util.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_util__Goal0_8, &check_hlds__modecheck_util__Goal_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18);
        }
#line 308 "modecheck_util.m"
        {
#line 308 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__modecheck_util__InstMap_14);
        }
#line 309 "modecheck_util.m"
        {
#line 309 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_util__InstMap_14);
        }
#line 315 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 313 "modecheck_util.m"
          {
#line 313 "modecheck_util.m"
            {
#line 313 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_util__Goals0_9, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
            }
#line 314 "modecheck_util.m"
            check_hlds__modecheck_util__Goals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 313 "modecheck_util.m"
          }
#line 315 "modecheck_util.m"
        else
#line 316 "modecheck_util.m"
          {
#line 316 "modecheck_util.m"
            check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(check_hlds__modecheck_util__Goals0_9, &check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
          }
#line 304 "modecheck_util.m"
        {
#line 304 "modecheck_util.m"
          MR_Word base;
#line 304 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__2_2 = base;
#line 304 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_10));
#line 304 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_11));
#line 304 "modecheck_util.m"
        }
#line 304 "modecheck_util.m"
      }
#line 303 "modecheck_util.m"
  }
#line 300 "modecheck_util.m"
}

#line 176 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__get_live_vars_3_p_0(
#line 176 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 176 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 176 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 176 "modecheck_util.m"
{
#line 1002 "modecheck_util.m"
  {
#line 1002 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1002 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1002 "modecheck_util.m"
      else
#line 1005 "modecheck_util.m"
        {
#line 1006 "modecheck_util.m"
          {
#line 1006 "modecheck_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
#line 1006 "modecheck_util.m"
            return;
          }
#line 1005 "modecheck_util.m"
        }
#line 1002 "modecheck_util.m"
    else
#line 1002 "modecheck_util.m"
      {
#line 1002 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1002 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1002 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1003 "modecheck_util.m"
          {
#line 1004 "modecheck_util.m"
            {
#line 1004 "modecheck_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
#line 1004 "modecheck_util.m"
              return;
            }
#line 1003 "modecheck_util.m"
          }
#line 1002 "modecheck_util.m"
        else
#line 1007 "modecheck_util.m"
          {
#line 1007 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1007 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1007 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__LiveVars0_21;

#line 1015 "modecheck_util.m"
            {
#line 1015 "modecheck_util.m"
              check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modecheck_util__V_22_22, check_hlds__modecheck_util__IsLives_19, &check_hlds__modecheck_util__LiveVars0_21);
            }
#line 1011 "modecheck_util.m"
            if ((check_hlds__modecheck_util__IsLive_18 == (MR_Integer) 1))
#line 1012 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__LiveVars0_21;
#line 1011 "modecheck_util.m"
            else
#line 1009 "modecheck_util.m"
              {
#line 1009 "modecheck_util.m"
                MR_Word base;
#line 1009 "modecheck_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "modecheck_util.m"
                *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 1009 "modecheck_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__V_23_23));
#line 1009 "modecheck_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__LiveVars0_21));
#line 1009 "modecheck_util.m"
              }
#line 1007 "modecheck_util.m"
          }
#line 1002 "modecheck_util.m"
      }
#line 1002 "modecheck_util.m"
  }
#line 176 "modecheck_util.m"
}

#line 170 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(
#line 170 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util___ModeInfo_4,
#line 170 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModeContext_5,
#line 170 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__UnifyContext_6)
#line 170 "modecheck_util.m"
{
#line 991 "modecheck_util.m"
  {
#line 991 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 991 "modecheck_util.m"
    {
#line 991 "modecheck_util.m"
      check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(check_hlds__modecheck_util__ModeContext_5, check_hlds__modecheck_util__UnifyContext_6);
#line 991 "modecheck_util.m"
      return;
    }
#line 991 "modecheck_util.m"
  }
#line 170 "modecheck_util.m"
}

#line 167 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(
#line 167 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_8,
#line 167 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarType_9,
#line 167 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst_10,
#line 167 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Goal0_11,
#line 167 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_12,
#line 167 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_20,
#line 167 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21)
#line 167 "modecheck_util.m"
{
#line 978 "modecheck_util.m"
  {
#line 978 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_11, (MR_Integer) 1)));
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Context_16;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InitVarGoal_18;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ConjList0_19;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_23_23;
#line 979 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_11, (MR_Integer) 0)));

#line 980 "modecheck_util.m"
    {
#line 980 "modecheck_util.m"
      check_hlds__modecheck_util__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_util__GoalInfo0_15);
    }
#line 982 "modecheck_util.m"
    {
#line 982 "modecheck_util.m"
      check_hlds__modecheck_util__construct_initialisation_call_8_p_0(check_hlds__modecheck_util__Var_8, check_hlds__modecheck_util__VarType_9, check_hlds__modecheck_util__InitialInst_10, check_hlds__modecheck_util__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__InitVarGoal_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_20, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21);
    }
#line 984 "modecheck_util.m"
    {
#line 984 "modecheck_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__modecheck_util__Goal0_11, &check_hlds__modecheck_util__ConjList0_19);
    }
#line 985 "modecheck_util.m"
    {
#line 985 "modecheck_util.m"
      check_hlds__modecheck_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_23_23, 0) = ((MR_Box) (check_hlds__modecheck_util__InitVarGoal_18));
#line 985 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_23_23, 1) = ((MR_Box) (check_hlds__modecheck_util__ConjList0_19));
#line 985 "modecheck_util.m"
    }
#line 985 "modecheck_util.m"
    {
#line 985 "modecheck_util.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__modecheck_util__V_23_23, check_hlds__modecheck_util__GoalInfo0_15, check_hlds__modecheck_util__Goal_12);
#line 985 "modecheck_util.m"
      return;
    }
#line 978 "modecheck_util.m"
  }
#line 167 "modecheck_util.m"
}

#line 164 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(
#line 164 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 164 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 164 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 164 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 164 "modecheck_util.m"
{
#line 863 "modecheck_util.m"
  {
#line 863 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 863 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 863 "modecheck_util.m"
      {
#line 863 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 863 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 863 "modecheck_util.m"
      }
#line 863 "modecheck_util.m"
    else
#line 864 "modecheck_util.m"
      {
#line 864 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 864 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 864 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_10;
#line 864 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_11;
#line 864 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarTypes_13;
#line 864 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarType_14;
#line 864 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Context_16;
#line 864 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20;

#line 865 "modecheck_util.m"
        {
#line 865 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__VarTypes_13);
        }
#line 866 "modecheck_util.m"
        {
#line 866 "modecheck_util.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_13, check_hlds__modecheck_util__Var_8, &check_hlds__modecheck_util__VarType_14);
        }
#line 868 "modecheck_util.m"
        {
#line 868 "modecheck_util.m"
          check_hlds__modecheck_util__Context_16 = mercury__term__context_init_0_f_0();
        }
#line 870 "modecheck_util.m"
        {
#line 870 "modecheck_util.m"
          check_hlds__modecheck_util__construct_initialisation_call_8_p_0(check_hlds__modecheck_util__Var_8, check_hlds__modecheck_util__VarType_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__Goal_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20);
        }
#line 872 "modecheck_util.m"
        {
#line 872 "modecheck_util.m"
          check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_util__Vars_9, &check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
        }
#line 864 "modecheck_util.m"
        {
#line 864 "modecheck_util.m"
          MR_Word base;
#line 864 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__2_2 = base;
#line 864 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_10));
#line 864 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_11));
#line 864 "modecheck_util.m"
        }
#line 864 "modecheck_util.m"
      }
#line 863 "modecheck_util.m"
  }
#line 164 "modecheck_util.m"
}

#line 158 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__construct_initialisation_call_8_p_0(
#line 158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_9,
#line 158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarType_10,
#line 158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_11,
#line 158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_12,
#line 158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_13,
#line 158 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__InitVarGoal_14,
#line 158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27,
#line 158 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_28)
#line 158 "modecheck_util.m"
{
#line 910 "modecheck_util.m"
  {
#line 910 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 910 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_36_36;
#line 910 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TypeCtorInfo_49_49;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TypeCtor_16;
#line 877 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__PredName_17;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleName_18;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__NonLocals_22;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMapDeltaAL_23;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMapDelta_24;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_29_29;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_32_32;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_33_33;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_34_34;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_35_35;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_38_38;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_39_39;
#line 877 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_51_51;
#line 880 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__V_50_50;

#line 877 "modecheck_util.m"
    {
#line 877 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__modecheck_util__VarType_10, &check_hlds__modecheck_util__TypeCtor_16);
    }
#line 877 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 877 "modecheck_util.m"
      {
#line 878 "modecheck_util.m"
        check_hlds__modecheck_util__V_29_29 = (MR_Integer) 3;
#line 878 "modecheck_util.m"
        {
#line 878 "modecheck_util.m"
          check_hlds__modecheck_util__PredName_17 = hlds__special_pred__special_pred_name_2_f_0(check_hlds__modecheck_util__V_29_29, check_hlds__modecheck_util__TypeCtor_16);
        }
#line 880 "modecheck_util.m"
        check_hlds__modecheck_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__TypeCtor_16, (MR_Integer) 0)));
#line 880 "modecheck_util.m"
        check_hlds__modecheck_util__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__TypeCtor_16, (MR_Integer) 1)));
#line 881 "modecheck_util.m"
        if (((MR_tag((MR_Word) check_hlds__modecheck_util__V_51_51)) == (MR_mktag((MR_Integer) 1))))
#line 880 "modecheck_util.m"
          {
#line 880 "modecheck_util.m"
            MR_String check_hlds__modecheck_util___TypeName_19;

#line 880 "modecheck_util.m"
            check_hlds__modecheck_util__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_51_51, (MR_Integer) 0)));
#line 880 "modecheck_util.m"
            check_hlds__modecheck_util___TypeName_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_51_51, (MR_Integer) 1)));
#line 880 "modecheck_util.m"
          }
#line 881 "modecheck_util.m"
        else
#line 882 "modecheck_util.m"
          {
#line 882 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModuleInfo_21;

#line 883 "modecheck_util.m"
            {
#line 883 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modecheck_util__ModuleInfo_21);
            }
#line 884 "modecheck_util.m"
            {
#line 884 "modecheck_util.m"
              hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__modecheck_util__ModuleInfo_21, &check_hlds__modecheck_util__ModuleName_18);
            }
#line 882 "modecheck_util.m"
          }
#line 3265 "check_hlds.modecheck_util.c"
        check_hlds__modecheck_util__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 886 "modecheck_util.m"
        {
#line 886 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_22 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__modecheck_util__TypeCtorInfo_49_49, check_hlds__modecheck_util__Var_9);
        }
#line 887 "modecheck_util.m"
        check_hlds__modecheck_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 887 "modecheck_util.m"
        {
#line 887 "modecheck_util.m"
          check_hlds__modecheck_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 887 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_32_32, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_9));
#line 887 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_32_32, 1) = ((MR_Box) (check_hlds__modecheck_util__Inst_11));
#line 887 "modecheck_util.m"
        }
#line 887 "modecheck_util.m"
        {
#line 887 "modecheck_util.m"
          check_hlds__modecheck_util__InstMapDeltaAL_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstMapDeltaAL_23, 0) = ((MR_Box) (check_hlds__modecheck_util__V_32_32));
#line 887 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstMapDeltaAL_23, 1) = ((MR_Box) (check_hlds__modecheck_util__V_33_33));
#line 887 "modecheck_util.m"
        }
#line 888 "modecheck_util.m"
        {
#line 888 "modecheck_util.m"
          check_hlds__modecheck_util__InstMapDelta_24 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_util__InstMapDeltaAL_23);
        }
#line 889 "modecheck_util.m"
        check_hlds__modecheck_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 889 "modecheck_util.m"
        check_hlds__modecheck_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 889 "modecheck_util.m"
        {
#line 889 "modecheck_util.m"
          check_hlds__modecheck_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_34_34, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_9));
#line 889 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_34_34, 1) = ((MR_Box) (check_hlds__modecheck_util__V_38_38));
#line 889 "modecheck_util.m"
        }
#line 889 "modecheck_util.m"
        {
#line 889 "modecheck_util.m"
          check_hlds__modecheck_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_util__VarType_10));
#line 889 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_35_35, 1) = ((MR_Box) (check_hlds__modecheck_util__V_39_39));
#line 889 "modecheck_util.m"
        }
#line 889 "modecheck_util.m"
        {
#line 889 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__build_call_11_p_0(check_hlds__modecheck_util__ModuleName_18, check_hlds__modecheck_util__PredName_17, check_hlds__modecheck_util__V_34_34, check_hlds__modecheck_util__V_35_35, check_hlds__modecheck_util__NonLocals_22, check_hlds__modecheck_util__InstMapDelta_24, check_hlds__modecheck_util__Context_12, check_hlds__modecheck_util__MaybeCallUnifyContext_13, &check_hlds__modecheck_util__V_36_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37);
        }
#line 877 "modecheck_util.m"
      }
#line 910 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 893 "modecheck_util.m"
      {
#line 893 "modecheck_util.m"
        *check_hlds__modecheck_util__InitVarGoal_14 = check_hlds__modecheck_util__V_36_36;
#line 909 "modecheck_util.m"
        {
#line 909 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_28);
#line 909 "modecheck_util.m"
          return;
        }
#line 893 "modecheck_util.m"
      }
#line 910 "modecheck_util.m"
    else
#line 911 "modecheck_util.m"
      {
#line 911 "modecheck_util.m"
        {
#line 911 "modecheck_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.construct_initialisation_call\'/8", (MR_String) "condition failed");
#line 911 "modecheck_util.m"
          return;
        }
#line 911 "modecheck_util.m"
      }
#line 910 "modecheck_util.m"
  }
#line 158 "modecheck_util.m"
}

#line 150 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(
#line 150 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMap0_7,
#line 150 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__GoalExpr_8,
#line 150 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15,
#line 150 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_16,
#line 150 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17,
#line 150 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18)
#line 150 "modecheck_util.m"
{
#line 364 "modecheck_util.m"
  {
#line 364 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 364 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__DeltaInstMap_12;
#line 365 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_19_19;
#line 365 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_11_11;

#line 365 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 365 "modecheck_util.m"
      {
#line 365 "modecheck_util.m"
        check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 1)));
#line 365 "modecheck_util.m"
        check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 2)));
#line 365 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "modecheck_util.m"
      }
#line 374 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 372 "modecheck_util.m"
      {
#line 372 "modecheck_util.m"
        {
#line 372 "modecheck_util.m"
          hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__modecheck_util__DeltaInstMap_12);
        }
#line 373 "modecheck_util.m"
        {
#line 373 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap0_7, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
        }
#line 372 "modecheck_util.m"
      }
#line 374 "modecheck_util.m"
    else
#line 375 "modecheck_util.m"
      {
#line 375 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_13;
#line 375 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_14;

#line 375 "modecheck_util.m"
        {
#line 375 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15);
        }
#line 376 "modecheck_util.m"
        {
#line 376 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__InstMap_14);
        }
#line 377 "modecheck_util.m"
        {
#line 377 "modecheck_util.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modecheck_util__InstMap0_7, check_hlds__modecheck_util__InstMap_14, check_hlds__modecheck_util__NonLocals_13, &check_hlds__modecheck_util__DeltaInstMap_12);
        }
#line 377 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17;
#line 375 "modecheck_util.m"
      }
#line 379 "modecheck_util.m"
    {
#line 379 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_util__DeltaInstMap_12, check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15, check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_16);
#line 379 "modecheck_util.m"
      return;
    }
#line 364 "modecheck_util.m"
  }
#line 150 "modecheck_util.m"
}

#line 349 "modecheck_util.m"
static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
#line 349 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 349 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1)
#line 349 "modecheck_util.m"
{
#line 349 "modecheck_util.m"
  {
#line 349 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__wrapper_arg_2;
#line 349 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 349 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_BoundInst_8;

#line 349 "modecheck_util.m"
    {
#line 349 "modecheck_util.m"
      check_hlds__modecheck_util__conv0_BoundInst_8 = check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1));
    }
#line 349 "modecheck_util.m"
    check_hlds__modecheck_util__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_util__conv0_BoundInst_8));
#line 349 "modecheck_util.m"
    return check_hlds__modecheck_util__wrapper_arg_2;
#line 349 "modecheck_util.m"
  }
#line 349 "modecheck_util.m"
}

#line 141 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0(
#line 141 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_6,
#line 141 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MainConsId_7,
#line 141 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__OtherConsIds_8,
#line 141 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15,
#line 141 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_16)
#line 141 "modecheck_util.m"
{
#line 343 "modecheck_util.m"
  {
#line 343 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_10;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_11;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Type_12;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInsts_13;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Inst_14;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_17_17;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_18_18;

#line 346 "modecheck_util.m"
    {
#line 346 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_util__ModuleInfo_10);
    }
#line 347 "modecheck_util.m"
    {
#line 347 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_util__VarTypes_11);
    }
#line 348 "modecheck_util.m"
    {
#line 348 "modecheck_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_11, check_hlds__modecheck_util__Var_6, &check_hlds__modecheck_util__Type_12);
    }
#line 349 "modecheck_util.m"
    {
#line 349 "modecheck_util.m"
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 349 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_2[0]));
#line 349 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1));
#line 349 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 349 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_10));
#line 349 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 4) = ((MR_Box) (check_hlds__modecheck_util__Type_12));
#line 349 "modecheck_util.m"
    }
#line 349 "modecheck_util.m"
    {
#line 349 "modecheck_util.m"
      check_hlds__modecheck_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_18_18, 0) = ((MR_Box) (check_hlds__modecheck_util__MainConsId_7));
#line 349 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_18_18, 1) = ((MR_Box) (check_hlds__modecheck_util__OtherConsIds_8));
#line 349 "modecheck_util.m"
    }
#line 349 "modecheck_util.m"
    {
#line 349 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInsts_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__modecheck_util__V_17_17, check_hlds__modecheck_util__V_18_18);
    }
#line 354 "modecheck_util.m"
    {
#line 354 "modecheck_util.m"
      check_hlds__modecheck_util__Inst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 354 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 354 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 1) = ((MR_Box) ((MR_Integer) 1));
#line 354 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 3) = ((MR_Box) (check_hlds__modecheck_util__BoundInsts_13));
#line 354 "modecheck_util.m"
    }
#line 355 "modecheck_util.m"
    {
#line 355 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_6, check_hlds__modecheck_util__Inst_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_16);
#line 355 "modecheck_util.m"
      return;
    }
#line 343 "modecheck_util.m"
  }
#line 141 "modecheck_util.m"
}

#line 132 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_functor_test_4_p_0(
#line 132 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_5,
#line 132 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_6,
#line 132 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13,
#line 132 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_14)
#line 132 "modecheck_util.m"
{
#line 331 "modecheck_util.m"
  {
#line 331 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 331 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_8;
#line 331 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_9;
#line 331 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Type_10;
#line 331 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInst_11;
#line 331 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Inst_12;
#line 331 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_17_17;
#line 331 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ConsIdAdjustedArity_25;
#line 331 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgInsts_26;

#line 334 "modecheck_util.m"
    {
#line 334 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__modecheck_util__ModuleInfo_8);
    }
#line 335 "modecheck_util.m"
    {
#line 335 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__modecheck_util__VarTypes_9);
    }
#line 336 "modecheck_util.m"
    {
#line 336 "modecheck_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_9, check_hlds__modecheck_util__Var_5, &check_hlds__modecheck_util__Type_10);
    }
#line 360 "modecheck_util.m"
    {
#line 360 "modecheck_util.m"
      check_hlds__modecheck_util__ConsIdAdjustedArity_25 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(check_hlds__modecheck_util__ModuleInfo_8, check_hlds__modecheck_util__Type_10, check_hlds__modecheck_util__ConsId_6);
    }
#line 361 "modecheck_util.m"
    {
#line 361 "modecheck_util.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__ConsIdAdjustedArity_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modecheck_util__ArgInsts_26);
    }
#line 362 "modecheck_util.m"
    {
#line 362 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInst_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_11, 0) = ((MR_Box) (check_hlds__modecheck_util__ConsId_6));
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_11, 1) = ((MR_Box) (check_hlds__modecheck_util__ArgInsts_26));
#line 362 "modecheck_util.m"
    }
#line 340 "modecheck_util.m"
    {
#line 340 "modecheck_util.m"
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (check_hlds__modecheck_util__BoundInst_11));
#line 340 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "modecheck_util.m"
    }
#line 340 "modecheck_util.m"
    {
#line 340 "modecheck_util.m"
      check_hlds__modecheck_util__Inst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 340 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 340 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 1) = ((MR_Box) ((MR_Integer) 1));
#line 340 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 3) = ((MR_Box) (check_hlds__modecheck_util__V_17_17));
#line 340 "modecheck_util.m"
    }
#line 341 "modecheck_util.m"
    {
#line 341 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_5, check_hlds__modecheck_util__Inst_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_14);
#line 341 "modecheck_util.m"
      return;
    }
#line 331 "modecheck_util.m"
  }
#line 132 "modecheck_util.m"
}

#line 124 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(
#line 124 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 124 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2,
#line 124 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_3)
#line 124 "modecheck_util.m"
{
#line 836 "modecheck_util.m"
  while (MR_TRUE)
#line 836 "modecheck_util.m"
    {
#line 836 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 836 "modecheck_util.m"
      {
#line 836 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 836 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "modecheck_util.m"
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2;
#line 836 "modecheck_util.m"
        else
#line 837 "modecheck_util.m"
          {
#line 837 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 837 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 837 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;
#line 844 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ConjGoals_10;
#line 841 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_7, (MR_Integer) 0)));
#line 841 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_16_16;
#line 841 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_7, (MR_Integer) 1)));

#line 841 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__V_15_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 841 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 841 "modecheck_util.m"
              {
#line 841 "modecheck_util.m"
                check_hlds__modecheck_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 1)));
#line 841 "modecheck_util.m"
                check_hlds__modecheck_util__ConjGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 2)));
#line 841 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_16_16 == (MR_Integer) 0);
#line 841 "modecheck_util.m"
              }
#line 844 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 843 "modecheck_util.m"
              {
#line 843 "modecheck_util.m"
                check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_util__ConjGoals_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
              }
#line 844 "modecheck_util.m"
            else
#line 845 "modecheck_util.m"
              {
#line 845 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NonLocals_12;

#line 845 "modecheck_util.m"
                {
#line 845 "modecheck_util.m"
                  check_hlds__modecheck_util__NonLocals_12 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal_7);
                }
#line 846 "modecheck_util.m"
                {
#line 846 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_12, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
                }
#line 845 "modecheck_util.m"
              }
#line 848 "modecheck_util.m"
            /* direct tailcall eliminated */
#line 848 "modecheck_util.m"
            {
#line 848 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__Goals_8;
#line 848 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_2 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;

#line 848 "modecheck_util.m"
              check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_2;
#line 848 "modecheck_util.m"
              check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 848 "modecheck_util.m"
            }
#line 848 "modecheck_util.m"
            continue;
#line 837 "modecheck_util.m"
          }
#line 836 "modecheck_util.m"
      }
#line 836 "modecheck_util.m"
      break;
#line 836 "modecheck_util.m"
    }
#line 124 "modecheck_util.m"
}

#line 121 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(
#line 121 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 121 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 121 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 121 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 121 "modecheck_util.m"
{
#line 817 "modecheck_util.m"
  while (MR_TRUE)
#line 817 "modecheck_util.m"
    {
#line 817 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 817 "modecheck_util.m"
      {
#line 817 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 817 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "modecheck_util.m"
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 817 "modecheck_util.m"
        else
#line 818 "modecheck_util.m"
          {
#line 818 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 818 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 818 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;
#line 831 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ConjGoals_13;
#line 828 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_19_19;
#line 828 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_22_22;
#line 828 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_14_14;

#line 824 "modecheck_util.m"
            {
#line 824 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_util__HeadVar__1_1, check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18);
            }
#line 828 "modecheck_util.m"
            check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_10, (MR_Integer) 0)));
#line 828 "modecheck_util.m"
            check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_10, (MR_Integer) 1)));
#line 828 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 828 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 828 "modecheck_util.m"
              {
#line 828 "modecheck_util.m"
                check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 1)));
#line 828 "modecheck_util.m"
                check_hlds__modecheck_util__ConjGoals_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 2)));
#line 828 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__1_1 == check_hlds__modecheck_util__V_22_22);
#line 828 "modecheck_util.m"
              }
#line 831 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 830 "modecheck_util.m"
              {
#line 830 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 830 "modecheck_util.m"
                {
#line 830 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__ConjGoals_13;
#line 830 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;

#line 830 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_3;
#line 830 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 830 "modecheck_util.m"
                }
#line 830 "modecheck_util.m"
                continue;
#line 830 "modecheck_util.m"
              }
#line 831 "modecheck_util.m"
            else
#line 832 "modecheck_util.m"
              {
#line 832 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NonLocals_15;

#line 832 "modecheck_util.m"
                {
#line 832 "modecheck_util.m"
                  check_hlds__modecheck_util__NonLocals_15 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal_10);
                }
#line 833 "modecheck_util.m"
                {
#line 833 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
#line 833 "modecheck_util.m"
                  return;
                }
#line 832 "modecheck_util.m"
              }
#line 818 "modecheck_util.m"
          }
#line 817 "modecheck_util.m"
      }
#line 817 "modecheck_util.m"
      break;
#line 817 "modecheck_util.m"
    }
#line 121 "modecheck_util.m"
}

#line 117 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(
#line 117 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars0_9,
#line 117 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInsts_10,
#line 117 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__FinalInsts_11,
#line 117 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgOffset_12,
#line 117 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Vars_13,
#line 117 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goals_14,
#line 117 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_18,
#line 117 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_19)
#line 117 "modecheck_util.m"
{
#line 577 "modecheck_util.m"
  {
#line 577 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 577 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Vars1_16;
#line 577 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Goals1_17;
#line 577 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21;

#line 572 "modecheck_util.m"
    {
#line 572 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(check_hlds__modecheck_util__Vars0_9, check_hlds__modecheck_util__InitialInsts_10, check_hlds__modecheck_util__FinalInsts_11, check_hlds__modecheck_util__ArgOffset_12, &check_hlds__modecheck_util__Vars1_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__Goals1_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 577 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 575 "modecheck_util.m"
      {
#line 575 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_19 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21;
#line 575 "modecheck_util.m"
        *check_hlds__modecheck_util__Vars_13 = check_hlds__modecheck_util__Vars1_16;
#line 576 "modecheck_util.m"
        *check_hlds__modecheck_util__Goals_14 = check_hlds__modecheck_util__Goals1_17;
#line 575 "modecheck_util.m"
      }
#line 577 "modecheck_util.m"
    else
#line 578 "modecheck_util.m"
      {
#line 578 "modecheck_util.m"
        {
#line 578 "modecheck_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst_list\'/8", (MR_String) "length mismatch");
#line 578 "modecheck_util.m"
          return;
        }
#line 578 "modecheck_util.m"
      }
#line 577 "modecheck_util.m"
  }
#line 117 "modecheck_util.m"
}

#line 114 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(
#line 114 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_6,
#line 114 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NewInst_7,
#line 114 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeUInst_8,
#line 114 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33,
#line 114 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34)
#line 114 "modecheck_util.m"
{
#line 620 "modecheck_util.m"
  {
#line 620 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 620 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PVars0_10;
#line 620 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMap0_11;
#line 620 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42;

#line 626 "modecheck_util.m"
    {
#line 626 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__PVars0_10);
    }
#line 627 "modecheck_util.m"
    {
#line 627 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__InstMap0_11);
    }
#line 628 "modecheck_util.m"
    {
#line 628 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__InstMap0_11);
    }
#line 702 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 629 "modecheck_util.m"
      {
#line 629 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__OldInst_12;
#line 629 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModuleInfo0_13;
#line 629 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModuleInfo_14;
#line 629 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Inst_15;
#line 629 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarTypes_19;
#line 629 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Type_20;
#line 629 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40;
#line 656 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_57_57;

#line 629 "modecheck_util.m"
        {
#line 629 "modecheck_util.m"
          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap0_11, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__OldInst_12);
        }
#line 630 "modecheck_util.m"
        {
#line 630 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__ModuleInfo0_13);
        }
#line 637 "modecheck_util.m"
        {
#line 637 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__NewInst_7);
        }
#line 641 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 639 "modecheck_util.m"
          {
#line 639 "modecheck_util.m"
            check_hlds__modecheck_util__ModuleInfo_14 = check_hlds__modecheck_util__ModuleInfo0_13;
#line 640 "modecheck_util.m"
            check_hlds__modecheck_util__Inst_15 = check_hlds__modecheck_util__OldInst_12;
#line 639 "modecheck_util.m"
          }
#line 641 "modecheck_util.m"
        else
#line 647 "modecheck_util.m"
          {
#line 647 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__UnifyInst_16;
#line 647 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModuleInfo1_18;
#line 642 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util___Det_17;

#line 642 "modecheck_util.m"
            {
#line 642 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__NewInst_7, (MR_Integer) 1, &check_hlds__modecheck_util__UnifyInst_16, &check_hlds__modecheck_util___Det_17, check_hlds__modecheck_util__ModuleInfo0_13, &check_hlds__modecheck_util__ModuleInfo1_18);
            }
#line 647 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 645 "modecheck_util.m"
              {
#line 645 "modecheck_util.m"
                check_hlds__modecheck_util__ModuleInfo_14 = check_hlds__modecheck_util__ModuleInfo1_18;
#line 646 "modecheck_util.m"
                check_hlds__modecheck_util__Inst_15 = check_hlds__modecheck_util__UnifyInst_16;
#line 645 "modecheck_util.m"
              }
#line 647 "modecheck_util.m"
            else
#line 648 "modecheck_util.m"
              {
#line 648 "modecheck_util.m"
                {
#line 648 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst\'/5", (MR_String) "unify_inst failed");
#line 648 "modecheck_util.m"
                  return;
                }
#line 648 "modecheck_util.m"
              }
#line 647 "modecheck_util.m"
          }
#line 650 "modecheck_util.m"
        {
#line 650 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_14, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40);
        }
#line 651 "modecheck_util.m"
        {
#line 651 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__VarTypes_19);
        }
#line 652 "modecheck_util.m"
        {
#line 652 "modecheck_util.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_19, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__Type_20);
        }
#line 656 "modecheck_util.m"
        {
#line 656 "modecheck_util.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo_14, check_hlds__modecheck_util__Inst_15, &check_hlds__modecheck_util__V_57_57);
        }
#line 656 "modecheck_util.m"
        {
#line 656 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_util__V_57_57);
        }
#line 660 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 658 "modecheck_util.m"
          {
#line 658 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__InstMap_21;

#line 658 "modecheck_util.m"
            {
#line 658 "modecheck_util.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_util__InstMap_21);
            }
#line 659 "modecheck_util.m"
            {
#line 659 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_21, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
            }
#line 658 "modecheck_util.m"
          }
#line 660 "modecheck_util.m"
        else
#line 668 "modecheck_util.m"
          {
#line 664 "modecheck_util.m"
            {
#line 664 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
            }
#line 668 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 666 "modecheck_util.m"
              {
#line 666 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_50;

#line 666 "modecheck_util.m"
                {
#line 666 "modecheck_util.m"
                  hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__InstMap0_11, &check_hlds__modecheck_util__InstMap_50);
                }
#line 667 "modecheck_util.m"
                {
#line 667 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                }
#line 666 "modecheck_util.m"
              }
#line 668 "modecheck_util.m"
            else
#line 695 "modecheck_util.m"
              {
#line 695 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Reason0_22;
#line 685 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__UInst_23;

#line 673 "modecheck_util.m"
                {
#line 673 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                }
#line 673 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 673 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 673 "modecheck_util.m"
                  {
#line 677 "modecheck_util.m"
                    {
#line 677 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__Reason0_22);
                    }
#line 673 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 673 "modecheck_util.m"
                      {
#line 685 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__MaybeUInst_8)) == (MR_mktag((MR_Integer) 1)));
#line 685 "modecheck_util.m"
                        if (check_hlds__modecheck_util__succeeded)
#line 685 "modecheck_util.m"
                          {
#line 685 "modecheck_util.m"
                            check_hlds__modecheck_util__UInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__MaybeUInst_8, (MR_Integer) 0)));
#line 686 "modecheck_util.m"
                            {
#line 686 "modecheck_util.m"
                              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__UInst_23, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                            }
#line 685 "modecheck_util.m"
                            if (check_hlds__modecheck_util__succeeded)
#line 688 "modecheck_util.m"
                              {
#line 688 "modecheck_util.m"
                                check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                              }
#line 685 "modecheck_util.m"
                          }
#line 678 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 673 "modecheck_util.m"
                      }
#line 673 "modecheck_util.m"
                  }
#line 695 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 692 "modecheck_util.m"
                  {
#line 692 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_24;
#line 692 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_25;

#line 692 "modecheck_util.m"
                    {
#line 692 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_6);
                    }
#line 693 "modecheck_util.m"
                    {
#line 693 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 693 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 693 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 1) = ((MR_Box) (check_hlds__modecheck_util__Reason0_22));
#line 693 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 2) = ((MR_Box) (check_hlds__modecheck_util__Var0_6));
#line 693 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 3) = ((MR_Box) (check_hlds__modecheck_util__OldInst_12));
#line 693 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 4) = ((MR_Box) (check_hlds__modecheck_util__Inst_15));
#line 693 "modecheck_util.m"
                    }
#line 694 "modecheck_util.m"
                    {
#line 694 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_24, check_hlds__modecheck_util__ModeError_25, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                    }
#line 692 "modecheck_util.m"
                  }
#line 695 "modecheck_util.m"
                else
#line 696 "modecheck_util.m"
                  {
#line 696 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__DelayInfo0_26;
#line 696 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__DelayInfo_27;
#line 696 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45;
#line 696 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__InstMap_51;

#line 696 "modecheck_util.m"
                    {
#line 696 "modecheck_util.m"
                      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__InstMap0_11, &check_hlds__modecheck_util__InstMap_51);
                    }
#line 697 "modecheck_util.m"
                    {
#line 697 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_51, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45);
                    }
#line 698 "modecheck_util.m"
                    {
#line 698 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_util__DelayInfo0_26);
                    }
#line 699 "modecheck_util.m"
                    {
#line 699 "modecheck_util.m"
                      check_hlds__delay_info__delay_info_bind_var_3_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__DelayInfo0_26, &check_hlds__modecheck_util__DelayInfo_27);
                    }
#line 700 "modecheck_util.m"
                    {
#line 700 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_util__DelayInfo_27, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                    }
#line 696 "modecheck_util.m"
                  }
#line 695 "modecheck_util.m"
              }
#line 668 "modecheck_util.m"
          }
#line 629 "modecheck_util.m"
      }
#line 702 "modecheck_util.m"
    else
#line 700 "modecheck_util.m"
      check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33;
#line 707 "modecheck_util.m"
    if ((check_hlds__modecheck_util__PVars0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "modecheck_util.m"
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42;
#line 707 "modecheck_util.m"
    else
#line 708 "modecheck_util.m"
      {
#line 708 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_28;
#line 708 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Bound0_29;
#line 708 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__PVars1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars0_10, (MR_Integer) 1)));
#line 708 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__PVars_32;
#line 708 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars0_10, (MR_Integer) 0)));

#line 708 "modecheck_util.m"
        check_hlds__modecheck_util__NonLocals_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_47_47, (MR_Integer) 0)));
#line 708 "modecheck_util.m"
        check_hlds__modecheck_util__Bound0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_47_47, (MR_Integer) 1)));
#line 709 "modecheck_util.m"
        {
#line 709 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__NonLocals_28, check_hlds__modecheck_util__Var0_6);
        }
#line 712 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 710 "modecheck_util.m"
          {
#line 710 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Bound_31;
#line 710 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_48_48;

#line 710 "modecheck_util.m"
            {
#line 710 "modecheck_util.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Bound0_29, &check_hlds__modecheck_util__Bound_31);
            }
#line 711 "modecheck_util.m"
            {
#line 711 "modecheck_util.m"
              check_hlds__modecheck_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 711 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_48_48, 0) = ((MR_Box) (check_hlds__modecheck_util__NonLocals_28));
#line 711 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_48_48, 1) = ((MR_Box) (check_hlds__modecheck_util__Bound_31));
#line 711 "modecheck_util.m"
            }
#line 711 "modecheck_util.m"
            {
#line 711 "modecheck_util.m"
              check_hlds__modecheck_util__PVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars_32, 0) = ((MR_Box) (check_hlds__modecheck_util__V_48_48));
#line 711 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars_32, 1) = ((MR_Box) (check_hlds__modecheck_util__PVars1_30));
#line 711 "modecheck_util.m"
            }
#line 710 "modecheck_util.m"
          }
#line 712 "modecheck_util.m"
        else
#line 713 "modecheck_util.m"
          check_hlds__modecheck_util__PVars_32 = check_hlds__modecheck_util__PVars0_10;
#line 715 "modecheck_util.m"
        {
#line 715 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(check_hlds__modecheck_util__PVars_32, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34);
#line 715 "modecheck_util.m"
          return;
        }
#line 708 "modecheck_util.m"
      }
#line 620 "modecheck_util.m"
  }
#line 114 "modecheck_util.m"
}

#line 99 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(
#line 99 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_6,
#line 99 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_7,
#line 99 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_8,
#line 99 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17,
#line 99 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18)
#line 99 "modecheck_util.m"
{
#line 552 "modecheck_util.m"
  {
#line 552 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 552 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMap_10;
#line 552 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarInst_11;
#line 552 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_12;
#line 561 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_13;
#line 557 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_19_19;
#line 557 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___Subst_14;

#line 553 "modecheck_util.m"
    {
#line 553 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__InstMap_10);
    }
#line 554 "modecheck_util.m"
    {
#line 554 "modecheck_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_10, check_hlds__modecheck_util__Var_6, &check_hlds__modecheck_util__VarInst_11);
    }
#line 555 "modecheck_util.m"
    {
#line 555 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__ModuleInfo0_12);
    }
#line 557 "modecheck_util.m"
    {
#line 557 "modecheck_util.m"
      check_hlds__modecheck_util__V_19_19 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 557 "modecheck_util.m"
    {
#line 557 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__modecheck_util__VarInst_11, check_hlds__modecheck_util__Inst_8, check_hlds__modecheck_util__Type_7, check_hlds__modecheck_util__ModuleInfo0_12, &check_hlds__modecheck_util__ModuleInfo_13, check_hlds__modecheck_util__V_19_19, &check_hlds__modecheck_util___Subst_14);
    }
#line 561 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 560 "modecheck_util.m"
      {
#line 560 "modecheck_util.m"
        check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
#line 560 "modecheck_util.m"
        return;
      }
#line 561 "modecheck_util.m"
    else
#line 562 "modecheck_util.m"
      {
#line 562 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__WaitingVars_15;
#line 562 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModeError_16;

#line 562 "modecheck_util.m"
        {
#line 562 "modecheck_util.m"
          check_hlds__modecheck_util__WaitingVars_15 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var_6);
        }
#line 563 "modecheck_util.m"
        {
#line 563 "modecheck_util.m"
          check_hlds__modecheck_util__ModeError_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 563 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 563 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 1) = ((MR_Box) (check_hlds__modecheck_util__Var_6));
#line 563 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_11));
#line 563 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_8));
#line 563 "modecheck_util.m"
        }
#line 564 "modecheck_util.m"
        {
#line 564 "modecheck_util.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_15, check_hlds__modecheck_util__ModeError_16, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
#line 564 "modecheck_util.m"
          return;
        }
#line 562 "modecheck_util.m"
      }
#line 552 "modecheck_util.m"
  }
#line 99 "modecheck_util.m"
}

#line 91 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(
#line 91 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars_7,
#line 91 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Insts_8,
#line 91 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum_9,
#line 91 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Subst_10,
#line 91 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12,
#line 91 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13)
#line 91 "modecheck_util.m"
{
#line 468 "modecheck_util.m"
  {
#line 468 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 468 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_14_14;

#line 469 "modecheck_util.m"
    {
#line 469 "modecheck_util.m"
      check_hlds__modecheck_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 469 "modecheck_util.m"
    {
#line 469 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(check_hlds__modecheck_util__Vars_7, check_hlds__modecheck_util__Insts_8, check_hlds__modecheck_util__ArgNum_9, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__Subst_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13);
#line 469 "modecheck_util.m"
      return;
    }
#line 468 "modecheck_util.m"
  }
#line 91 "modecheck_util.m"
}

#line 88 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(
#line 88 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars_7,
#line 88 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Insts_8,
#line 88 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum_9,
#line 88 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Subst_10,
#line 88 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12,
#line 88 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13)
#line 88 "modecheck_util.m"
{
#line 463 "modecheck_util.m"
  {
#line 463 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 463 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_14_14;

#line 464 "modecheck_util.m"
    {
#line 464 "modecheck_util.m"
      check_hlds__modecheck_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 464 "modecheck_util.m"
    {
#line 464 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(check_hlds__modecheck_util__Vars_7, check_hlds__modecheck_util__Insts_8, check_hlds__modecheck_util__ArgNum_9, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__Subst_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13);
#line 464 "modecheck_util.m"
      return;
    }
#line 463 "modecheck_util.m"
  }
#line 88 "modecheck_util.m"
}

#line 79 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(
#line 79 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 79 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 79 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 79 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4,
#line 79 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5)
#line 79 "modecheck_util.m"
{
#line 403 "modecheck_util.m"
  while (MR_TRUE)
#line 403 "modecheck_util.m"
    {
#line 403 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 403 "modecheck_util.m"
      {
#line 403 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 403 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4;
#line 403 "modecheck_util.m"
          else
#line 405 "modecheck_util.m"
            {
#line 406 "modecheck_util.m"
              {
#line 406 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
#line 406 "modecheck_util.m"
                return;
              }
#line 405 "modecheck_util.m"
            }
#line 403 "modecheck_util.m"
        else
#line 403 "modecheck_util.m"
          {
#line 403 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 403 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 403 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "modecheck_util.m"
              {
#line 404 "modecheck_util.m"
                {
#line 404 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
#line 404 "modecheck_util.m"
                  return;
                }
#line 403 "modecheck_util.m"
              }
#line 403 "modecheck_util.m"
            else
#line 409 "modecheck_util.m"
              {
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLive_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLives_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 409 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_34 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarIsLive_48;

#line 411 "modecheck_util.m"
                {
#line 411 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_34, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38);
                }
#line 430 "modecheck_util.m"
                {
#line 430 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_util__V_42_42, &check_hlds__modecheck_util__VarIsLive_48);
                }
#line 432 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__IsLive_30 == (MR_Integer) 1);
#line 432 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 433 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__VarIsLive_48 == (MR_Integer) 0);
#line 438 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 435 "modecheck_util.m"
                  {
#line 435 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_49;
#line 435 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_50;

#line 435 "modecheck_util.m"
                    {
#line 435 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_42_42);
                    }
#line 436 "modecheck_util.m"
                    {
#line 436 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 436 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
#line 436 "modecheck_util.m"
                    }
#line 437 "modecheck_util.m"
                    {
#line 437 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_49, check_hlds__modecheck_util__ModeError_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39);
                    }
#line 435 "modecheck_util.m"
                  }
#line 438 "modecheck_util.m"
                else
#line 437 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 413 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 413 "modecheck_util.m"
                {
#line 413 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_41_41;
#line 413 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__IsLives_31;
#line 413 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_34;
#line 413 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;

#line 413 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 413 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 413 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 413 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 413 "modecheck_util.m"
                }
#line 413 "modecheck_util.m"
                continue;
#line 409 "modecheck_util.m"
              }
#line 403 "modecheck_util.m"
          }
#line 403 "modecheck_util.m"
      }
#line 403 "modecheck_util.m"
      break;
#line 403 "modecheck_util.m"
    }
#line 79 "modecheck_util.m"
}

#line 77 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_p_0(
#line 77 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 77 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 77 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 77 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4,
#line 77 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5)
#line 77 "modecheck_util.m"
{
#line 391 "modecheck_util.m"
  while (MR_TRUE)
#line 391 "modecheck_util.m"
    {
#line 391 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 391 "modecheck_util.m"
      {
#line 391 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 391 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4;
#line 391 "modecheck_util.m"
          else
#line 393 "modecheck_util.m"
            {
#line 394 "modecheck_util.m"
              {
#line 394 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
#line 394 "modecheck_util.m"
                return;
              }
#line 393 "modecheck_util.m"
            }
#line 391 "modecheck_util.m"
        else
#line 391 "modecheck_util.m"
          {
#line 391 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 391 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 391 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "modecheck_util.m"
              {
#line 392 "modecheck_util.m"
                {
#line 392 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
#line 392 "modecheck_util.m"
                  return;
                }
#line 391 "modecheck_util.m"
              }
#line 391 "modecheck_util.m"
            else
#line 397 "modecheck_util.m"
              {
#line 397 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLive_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 397 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLives_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_34 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 397 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 397 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;
#line 397 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarIsLive_48;

#line 399 "modecheck_util.m"
                {
#line 399 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_34, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38);
                }
#line 448 "modecheck_util.m"
                {
#line 448 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_util__V_42_42, &check_hlds__modecheck_util__VarIsLive_48);
                }
#line 449 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__VarIsLive_48 == check_hlds__modecheck_util__IsLive_30);
#line 451 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 449 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 451 "modecheck_util.m"
                else
#line 452 "modecheck_util.m"
                  {
#line 452 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_49;
#line 452 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_50;

#line 452 "modecheck_util.m"
                    {
#line 452 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_42_42);
                    }
#line 453 "modecheck_util.m"
                    {
#line 453 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 453 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
#line 453 "modecheck_util.m"
                    }
#line 454 "modecheck_util.m"
                    {
#line 454 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_49, check_hlds__modecheck_util__ModeError_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39);
                    }
#line 452 "modecheck_util.m"
                  }
#line 401 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 401 "modecheck_util.m"
                {
#line 401 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_41_41;
#line 401 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__IsLives_31;
#line 401 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_34;
#line 401 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;

#line 401 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 401 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 401 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 401 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 401 "modecheck_util.m"
                }
#line 401 "modecheck_util.m"
                continue;
#line 397 "modecheck_util.m"
              }
#line 391 "modecheck_util.m"
          }
#line 391 "modecheck_util.m"
      }
#line 391 "modecheck_util.m"
      break;
#line 391 "modecheck_util.m"
    }
#line 77 "modecheck_util.m"
}

#line 71 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__compute_arg_offset_2_p_0(
#line 71 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PredInfo_3,
#line 71 "modecheck_util.m"
  MR_Integer * check_hlds__modecheck_util__ArgOffset_4)
#line 71 "modecheck_util.m"
{
#line 383 "modecheck_util.m"
  {
#line 383 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 383 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__OrigArity_5;
#line 383 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgTypes_6;
#line 383 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CurrentArity_7;

#line 384 "modecheck_util.m"
    {
#line 384 "modecheck_util.m"
      check_hlds__modecheck_util__OrigArity_5 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modecheck_util__PredInfo_3);
    }
#line 385 "modecheck_util.m"
    {
#line 385 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_util__PredInfo_3, &check_hlds__modecheck_util__ArgTypes_6);
    }
#line 386 "modecheck_util.m"
    {
#line 386 "modecheck_util.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__modecheck_util__ArgTypes_6, &check_hlds__modecheck_util__CurrentArity_7);
    }
#line 387 "modecheck_util.m"
    *check_hlds__modecheck_util__ArgOffset_4 = (check_hlds__modecheck_util__OrigArity_5 - check_hlds__modecheck_util__CurrentArity_7);
#line 383 "modecheck_util.m"
  }
#line 71 "modecheck_util.m"
}

#line 59 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_9_p_0(
#line 59 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MainGoal_1,
#line 59 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 59 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 59 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__4_4,
#line 59 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__5_5,
#line 59 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__6_6,
#line 59 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__7_7,
#line 59 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 59 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9)
#line 59 "modecheck_util.m"
{
#line 221 "modecheck_util.m"
  {
#line 221 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 221 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "modecheck_util.m"
      {
#line 221 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__7_7 = check_hlds__modecheck_util__MainGoal_1;
#line 221 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 221 "modecheck_util.m"
      }
#line 221 "modecheck_util.m"
    else
#line 224 "modecheck_util.m"
      {
#line 224 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__BeforeGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__AfterGoals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Errors_27;

#line 225 "modecheck_util.m"
        {
#line 225 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__Errors_27);
        }
#line 229 "modecheck_util.m"
        {
#line 229 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__HeadVar__6_6);
        }
#line 229 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 233 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__Errors_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 248 "modecheck_util.m"
          {
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__TypeCtorInfo_57_57;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NonLocals0_28;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__OldArgVars_29;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NewArgVars_30;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IntroducedVars_31;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__OutsideVars_32;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NonLocals_33;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalInfo_34;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal0_35;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Context_36;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals_37;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals_38;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalList0_39;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__MayChangeCalledProc0_40;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalList_41;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_44_44;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 248 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55;

#line 248 "modecheck_util.m"
            {
#line 248 "modecheck_util.m"
              check_hlds__modecheck_util__NonLocals0_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_util__HeadVar__3_3);
            }
#line 5124 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 249 "modecheck_util.m"
            {
#line 249 "modecheck_util.m"
              parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__HeadVar__4_4, &check_hlds__modecheck_util__OldArgVars_29);
            }
#line 250 "modecheck_util.m"
            {
#line 250 "modecheck_util.m"
              parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__HeadVar__5_5, &check_hlds__modecheck_util__NewArgVars_30);
            }
#line 251 "modecheck_util.m"
            {
#line 251 "modecheck_util.m"
              parse_tree__set_of_var__difference_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__NewArgVars_30, check_hlds__modecheck_util__OldArgVars_29, &check_hlds__modecheck_util__IntroducedVars_31);
            }
#line 252 "modecheck_util.m"
            {
#line 252 "modecheck_util.m"
              parse_tree__set_of_var__union_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__NonLocals0_28, check_hlds__modecheck_util__IntroducedVars_31, &check_hlds__modecheck_util__OutsideVars_32);
            }
#line 253 "modecheck_util.m"
            {
#line 253 "modecheck_util.m"
              parse_tree__set_of_var__intersect_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__OutsideVars_32, check_hlds__modecheck_util__NewArgVars_30, &check_hlds__modecheck_util__NonLocals_33);
            }
#line 254 "modecheck_util.m"
            {
#line 254 "modecheck_util.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_util__NonLocals_33, check_hlds__modecheck_util__HeadVar__3_3, &check_hlds__modecheck_util__GoalInfo_34);
            }
#line 257 "modecheck_util.m"
            {
#line 257 "modecheck_util.m"
              check_hlds__modecheck_util__Goal0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_35, 0) = ((MR_Box) (check_hlds__modecheck_util__MainGoal_1));
#line 257 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_35, 1) = ((MR_Box) (check_hlds__modecheck_util__GoalInfo_34));
#line 257 "modecheck_util.m"
            }
#line 258 "modecheck_util.m"
            {
#line 258 "modecheck_util.m"
              check_hlds__modecheck_util__Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_util__HeadVar__3_3);
            }
#line 259 "modecheck_util.m"
            {
#line 259 "modecheck_util.m"
              check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__BeforeGoals0_19, check_hlds__modecheck_util__Context_36, &check_hlds__modecheck_util__BeforeGoals_37);
            }
#line 260 "modecheck_util.m"
            {
#line 260 "modecheck_util.m"
              check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__AfterGoals0_20, check_hlds__modecheck_util__Context_36, &check_hlds__modecheck_util__AfterGoals_38);
            }
#line 261 "modecheck_util.m"
            {
#line 261 "modecheck_util.m"
              check_hlds__modecheck_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_44_44, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal0_35));
#line 261 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_util__AfterGoals_38));
#line 261 "modecheck_util.m"
            }
#line 261 "modecheck_util.m"
            {
#line 261 "modecheck_util.m"
              check_hlds__modecheck_util__GoalList0_39 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_util__BeforeGoals_37, check_hlds__modecheck_util__V_44_44);
            }
#line 263 "modecheck_util.m"
            {
#line 263 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__MayChangeCalledProc0_40);
            }
#line 267 "modecheck_util.m"
            {
#line 267 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 1, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46);
            }
#line 271 "modecheck_util.m"
            {
#line 271 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0((MR_Integer) 1, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48);
            }
#line 274 "modecheck_util.m"
            {
#line 274 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__HeadVar__6_6, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49);
            }
#line 288 "modecheck_util.m"
            {
#line 288 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0((MR_Integer) 0, check_hlds__modecheck_util__GoalList0_39, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51);
            }
#line 289 "modecheck_util.m"
            {
#line 289 "modecheck_util.m"
              check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(check_hlds__modecheck_util__GoalList0_39, &check_hlds__modecheck_util__GoalList_41, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
            }
#line 290 "modecheck_util.m"
            {
#line 290 "modecheck_util.m"
              MR_Word base;
#line 290 "modecheck_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 290 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__7_7 = base;
#line 290 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 290 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 290 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_util__GoalList_41));
#line 290 "modecheck_util.m"
            }
#line 291 "modecheck_util.m"
            {
#line 291 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 0, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55);
            }
#line 292 "modecheck_util.m"
            {
#line 292 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(check_hlds__modecheck_util__MayChangeCalledProc0_40, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);
#line 292 "modecheck_util.m"
              return;
            }
#line 248 "modecheck_util.m"
          }
#line 293 "modecheck_util.m"
        else
#line 294 "modecheck_util.m"
          {
#line 294 "modecheck_util.m"
            *check_hlds__modecheck_util__HeadVar__7_7 = check_hlds__modecheck_util__MainGoal_1;
#line 294 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 294 "modecheck_util.m"
          }
#line 224 "modecheck_util.m"
      }
#line 221 "modecheck_util.m"
  }
#line 59 "modecheck_util.m"
}

#line 52 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__append_extra_goals_3_p_0(
#line 52 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 52 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 52 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 52 "modecheck_util.m"
{
#line 212 "modecheck_util.m"
  {
#line 212 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 212 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "modecheck_util.m"
      *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__2_2;
#line 212 "modecheck_util.m"
    else
#line 212 "modecheck_util.m"
      {
#line 212 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 212 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 212 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__1_1;
#line 212 "modecheck_util.m"
        else
#line 217 "modecheck_util.m"
          {
#line 217 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 217 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 217 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals_11;
#line 217 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals_12;

#line 218 "modecheck_util.m"
            {
#line 218 "modecheck_util.m"
              check_hlds__modecheck_util__BeforeGoals_11 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_util__TypeCtorInfo_13_13, check_hlds__modecheck_util__V_15_15, check_hlds__modecheck_util__BeforeGoals1_9);
            }
#line 219 "modecheck_util.m"
            {
#line 219 "modecheck_util.m"
              check_hlds__modecheck_util__AfterGoals_12 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_util__TypeCtorInfo_13_13, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__AfterGoals1_10);
            }
#line 217 "modecheck_util.m"
            {
#line 217 "modecheck_util.m"
              MR_Word base;
#line 217 "modecheck_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 217 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__BeforeGoals_11));
#line 217 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__AfterGoals_12));
#line 217 "modecheck_util.m"
            }
#line 217 "modecheck_util.m"
          }
#line 212 "modecheck_util.m"
      }
#line 212 "modecheck_util.m"
  }
#line 52 "modecheck_util.m"
}

void mercury__check_hlds__modecheck_util__init(void)
{
}

void mercury__check_hlds__modecheck_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_after_goals_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0);
}

void mercury__check_hlds__modecheck_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.modecheck_util. */
