/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module check_hlds.post_typecheck. */
/* :- implementation. */

/*
INIT mercury__check_hlds__post_typecheck__init
ENDINIT
*/

#include "check_hlds.post_typecheck.mih"


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
#include "cord.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.assertion.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 427 "post_typecheck.m"
struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s {
#line 427 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__Clauses_10;
#line 427 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__HeadVar__3_25;
#line 427 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__cont;
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__cont_env_ptr;
#line 427 "post_typecheck.m"
  MR_bool check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__succeeded;
#line 427 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__ConstraintId_17;
#line 427 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__ConstraintGoalId_19;
#line 428 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__conv0_ConstraintId_17;
#line 431 "post_typecheck.m"
  jmp_buf check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__commit_0;
#line 431 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__Clause_21;
#line 431 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__GoalInfo_23;
#line 431 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__GoalId_24;
#line 431 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_26_26;
#line 431 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_35_35;
#line 431 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_36_36;
#line 431 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__conv1_Clause_21;
#line 427 "post_typecheck.m"
};

#line 883 "post_typecheck.m"
struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s {
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1;
#line 887 "post_typecheck.m"
  MR_bool check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded;
#line 889 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24;
#line 898 "post_typecheck.m"
  jmp_buf check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0;
#line 883 "post_typecheck.m"
};

#line 427 "post_typecheck.m"
struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s {
#line 427 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1;
#line 427 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont;
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr;
#line 427 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_HeadVar__3_25;
#line 427 "post_typecheck.m"
};


#line 220 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 223 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 226 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 229 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 232 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 235 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 238 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 241 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 244 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 247 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 250 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 253 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

#line 256 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0;

#line 259 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 262 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 265 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 268 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0;

#line 271 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1;

#line 274 "check_hlds.post_typecheck.c"
static const MR_PseudoTypeInfo check_hlds__post_typecheck__check_hlds__post_typecheck__field_types_is_plain_unify_0_2[1];

#line 277 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2;

#line 280 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_0[2];

#line 283 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_1[1];

#line 286 "check_hlds.post_typecheck.c"
static const MR_DuPtagLayout check_hlds__post_typecheck__check_hlds__post_typecheck__du_ptag_ordered_is_plain_unify_0[2];

#line 289 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_name_ordered_is_plain_unify_0[3];

#line 292 "check_hlds.post_typecheck.c"
static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_is_plain_unify_0[3];

#line 295 "check_hlds.post_typecheck.c"
static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0_10001(
#line 298 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 300 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2);

#line 303 "check_hlds.post_typecheck.c"
static void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0_10001(
#line 306 "check_hlds.post_typecheck.c"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 308 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 310 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3);

#line 1428 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1428__1_1_f_0(
#line 1428 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_51);

#line 1265 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1265__1_1_f_0(
#line 1265 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_31);

#line 428 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_2(
#line 428 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_3(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_5(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_6(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_4(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_7(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 427 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_1(
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 427 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0(
#line 427 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Clauses_10,
#line 427 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConstraintIds_14,
#line 427 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__3_25,
#line 427 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr);

#line 354 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__354__1_3_p_0(
#line 354 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_23,
#line 354 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_24,
#line 354 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__3_25);

#line 1624 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_4_p_0(
#line 1624 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_5,
#line 1624 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeDefn_6,
#line 1624 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 1624 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20);

#line 1610 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_var_6_p_0(
#line 1610 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_7,
#line 1610 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Var_8,
#line 1610 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11,
#line 1610 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12,
#line 1610 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13,
#line 1610 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14);

#line 1602 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_vars_6_p_0(
#line 1602 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Types_7,
#line 1602 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Vars_8,
#line 1602 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12,
#line 1602 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13,
#line 1602 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14,
#line 1602 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15);

#line 1578 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_8,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_9,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_10,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RestrictNonLocals_11,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarsList_12,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_13,
#line 1578 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_14);

#line 1561 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__search_for_named_field_4_p_0(
#line 1561 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1561 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_7,
#line 1561 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__CurFieldNumber_8,
#line 1561 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NamedFieldNumber_9);

#line 1545 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_2_5_p_0(
#line 1545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_1,
#line 1545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1545 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_3,
#line 1545 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_4,
#line 1545 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_5);

#line 1522 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(
#line 1522 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1522 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_7,
#line 1522 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldSymName_8,
#line 1522 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_9,
#line 1522 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_10);

#line 1502 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__split_list_at_index_5_p_0(
#line 1502 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeInfo_for_T_20,
#line 1502 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__Index_6,
#line 1502 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__List_7,
#line 1502 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Before_8,
#line 1502 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__At_9,
#line 1502 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__After_10);

#line 1491 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__unify_constraint_list_5_p_0(
#line 1491 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1491 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1491 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVars_3,
#line 1491 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4,
#line 1491 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Subst_5);

#line 1428 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
#line 1428 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1428 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 1417 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_9,
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalId_10,
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_11,
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_12,
#line 1417 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualArgTypes_13,
#line 1417 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualExistQVars_14,
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48,
#line 1417 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49);

#line 1350 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_set_function_14_p_0(
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55,
#line 1350 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57,
#line 1350 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59,
#line 1350 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_19,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_20,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_21,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_22,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermOutputVar_23,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_24,
#line 1350 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_25);

#line 1301 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_get_function_13_p_0(
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_14,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45,
#line 1301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47,
#line 1301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49,
#line 1301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_18,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_19,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_20,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_21,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_22,
#line 1301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__GoalExpr_23);

#line 1279 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__finish_field_access_function_14_p_0(
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29,
#line 1279 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31,
#line 1279 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33,
#line 1279 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__AccessType_19,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_20,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_21,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_22,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args_23,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo_24,
#line 1279 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__14_14);

#line 1265 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0_1(
#line 1265 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1265 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 1249 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0(
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_7,
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_8,
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_9,
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_10);

#line 986 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 986 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId1_3,
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__4_4,
#line 986 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__5_5,
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6,
#line 986 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7,
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8,
#line 986 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_9);

#line 966 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PrevProcIds_4,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5,
#line 966 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7,
#line 966 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_8);

#line 923 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
#line 923 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 923 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 923 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId_10,
#line 923 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Procs0_11,
#line 923 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Procs_12,
#line 923 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20,
#line 923 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_21);

#line 918 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 918 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 918 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5);

#line 907 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ErrorProcIds_10,
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17,
#line 907 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18,
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 907 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20);

#line 898 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
#line 898 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 898 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
#line 898 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 883 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_3,
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4,
#line 883 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5,
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6,
#line 883 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Procs_7);

#line 834 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
#line 834 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 834 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13,
#line 834 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_14);

#line 813 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_7,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IdPieces_8,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 813 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16);

#line 803 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_list_5_p_0(
#line 803 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 803 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 803 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 803 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4,
#line 803 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_5);

#line 770 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_unify_rhs_7_p_0(
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_10,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_11,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36,
#line 770 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);

#line 688 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_5_p_0(
#line 688 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 688 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_7,
#line 688 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_8,
#line 688 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64,
#line 688 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);

#line 547 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
#line 547 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_5,
#line 547 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_6,
#line 547 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3);

#line 518 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
#line 518 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 518 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 506 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_10,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_11,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Errs_12,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24,
#line 506 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_25);

#line 464 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
#line 464 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_4,
#line 464 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_5);

#line 440 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
#line 440 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 440 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2);

#line 427 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 427 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
#line 427 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 427 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 427 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr);

#line 413 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
#line 413 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 413 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_5);

#line 402 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
#line 402 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarset_4,
#line 402 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraint_5);

#line 385 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
#line 385 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 385 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 368 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_10,
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22,
#line 368 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_23);

#line 320 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_2_8_p_0(
#line 320 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 320 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_2,
#line 320 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__VarsToDo_3,
#line 320 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 320 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5,
#line 320 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6,
#line 320 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7,
#line 320 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Set_8);

#line 303 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_6_p_0(
#line 303 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarTypes_7,
#line 303 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_8,
#line 303 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14,
#line 303 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15,
#line 303 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0_16,
#line 303 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Set_17);

#line 354 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0_1(
#line 354 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 354 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 354 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 354 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3);

#line 255 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(
#line 255 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 255 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 255 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 255 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33,
#line 255 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_10,
#line 255 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34);

#line 918 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1(
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 918 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 918 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5);

#line 213 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(
#line 213 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 213 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 213 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15,
#line 213 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16,
#line 213 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_11,
#line 213 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17,
#line 213 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18);

#line 187 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(
#line 187 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 187 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ValidPredIdSet_2,
#line 187 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 187 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 187 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__HeadVar__5_5,
#line 187 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__6_6,
#line 187 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__7_7);

#line 1105 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1(
#line 1105 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1105 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1105 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_2);

#line 658 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1(
#line 658 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 658 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 658 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 658 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3);

#line 1621 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0_1(
#line 1621 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1621 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1621 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 1621 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3,
#line 1621 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_4);


static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[86][2];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[3][7];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][10];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[3][6];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_9[1][1];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_10[1][5];


#line 1046 "post_typecheck.m"
/* sealed */ struct check_hlds__post_typecheck__vector_common_type_5_0_s {
#line 1046 "post_typecheck.m"
  const MR_String check_hlds__post_typecheck__vector_common_type_5_0__vct_5_f_0;
#line 1046 "post_typecheck.m"
  const MR_Word check_hlds__post_typecheck__vector_common_type_5_0__vct_5_f_1;
#line 1046 "post_typecheck.m"
};

static /* final */ const struct check_hlds__post_typecheck__vector_common_type_5_0_s check_hlds__post_typecheck_vector_common_5[4];



static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[86][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "void"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "will be implicitly bound to the builtin type"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "My apologies.)"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but I\'m afraid you\'ll have to work it out yourself."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(I ought to tell you which call caused the problem,"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "because the type variables listed above didn\'t get bound."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but I can\'t determine which version should be called,"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to a polymorphic predicate,"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The body of the clause contains a call"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: exported promise refers to"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or move the definition into the interface."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Either move the promise into the implementation section"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "io.state"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must have type"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: arguments of main/2"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(Sorry, polymorphic modes are not supported.)"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: unbound inst variable(s)."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has no corresponding definition."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: reference to"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "undeclared function or predicate"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ", and"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the call to"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a goal here"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a higher-order call here"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: unresolved polymorphism."))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The unbound type"))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[26])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "constructor"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is defined in the implementation section of module"))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_9[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: abstract declaration for type"))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[5]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[0])),
    ((MR_Box) (check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[0])),
    ((MR_Box) (check_hlds__post_typecheck__check_pred_type_bindings_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_10[0])),
    ((MR_Box) (check_hlds__post_typecheck__find_matching_constructor_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_10[0])),
    ((MR_Box) (check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 39)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_type_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_9[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[41])))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_10[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};


static /* final */ const struct check_hlds__post_typecheck__vector_common_type_5_0_s check_hlds__post_typecheck_vector_common_5[4] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "apply",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "impure_apply",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "semipure_apply",
    (MR_Integer) 1
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1793 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1801 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1809 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1818 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1827 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1835 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1844 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1852 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1860 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1869 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1877 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1885 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

#line 1893 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0
  }
};

#line 1901 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1909 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1917 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1926 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0 = {
  (MR_String) "is_not_plain_unify",
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

#line 1941 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1 = {
  (MR_String) "is_plain_unify",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1956 "check_hlds.post_typecheck.c"
static const MR_PseudoTypeInfo check_hlds__post_typecheck__check_hlds__post_typecheck__field_types_is_plain_unify_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1961 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2 = {
  (MR_String) "is_unknown_ref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__post_typecheck__check_hlds__post_typecheck__field_types_is_plain_unify_0_2,
  NULL,
  NULL,
  NULL
};

#line 1976 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_0[2] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1
};

#line 1982 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_1[1] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2
};

#line 1987 "check_hlds.post_typecheck.c"
static const MR_DuPtagLayout check_hlds__post_typecheck__check_hlds__post_typecheck__du_ptag_ordered_is_plain_unify_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_1
  }
};

#line 2001 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_name_ordered_is_plain_unify_0[3] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2
};

#line 2008 "check_hlds.post_typecheck.c"
static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_is_plain_unify_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2015 "check_hlds.post_typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_is_plain_unify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__post_typecheck____Unify____is_plain_unify_0_0_10001)),
  ((MR_Box) (check_hlds__post_typecheck____Compare____is_plain_unify_0_0_10001)),
  (MR_String) "check_hlds.post_typecheck",
  (MR_String) "is_plain_unify",
  {     check_hlds__post_typecheck__check_hlds__post_typecheck__du_name_ordered_is_plain_unify_0 },
  {     check_hlds__post_typecheck__check_hlds__post_typecheck__du_ptag_ordered_is_plain_unify_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_is_plain_unify_0
};

#line 2032 "check_hlds.post_typecheck.c"
static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0_10001(
#line 2035 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 2037 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2)
#line 2039 "check_hlds.post_typecheck.c"
{
#line 2041 "check_hlds.post_typecheck.c"
  {
#line 2043 "check_hlds.post_typecheck.c"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 2046 "check_hlds.post_typecheck.c"
    {
#line 2048 "check_hlds.post_typecheck.c"
      check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck____Unify____is_plain_unify_0_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2));
    }
#line 2051 "check_hlds.post_typecheck.c"
    return check_hlds__post_typecheck__succeeded;
#line 2053 "check_hlds.post_typecheck.c"
  }
#line 2055 "check_hlds.post_typecheck.c"
}

#line 2058 "check_hlds.post_typecheck.c"
static void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0_10001(
#line 2061 "check_hlds.post_typecheck.c"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 2063 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 2065 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3)
#line 2067 "check_hlds.post_typecheck.c"
{
#line 2069 "check_hlds.post_typecheck.c"
  {
#line 2071 "check_hlds.post_typecheck.c"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__1_1;

#line 2074 "check_hlds.post_typecheck.c"
    {
#line 2076 "check_hlds.post_typecheck.c"
      check_hlds__post_typecheck____Compare____is_plain_unify_0_0(&check_hlds__post_typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_3));
    }
#line 2079 "check_hlds.post_typecheck.c"
    *check_hlds__post_typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__1_1));
#line 2081 "check_hlds.post_typecheck.c"
  }
#line 2083 "check_hlds.post_typecheck.c"
}

#line 1428 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1428__1_1_f_0(
#line 1428 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_51)
#line 1428 "post_typecheck.m"
{
#line 1428 "post_typecheck.m"
  {
#line 1428 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1428 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__2_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_51, (MR_Integer) 1)));
#line 1428 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_51, (MR_Integer) 0)));
#line 1428 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_51, (MR_Integer) 2)));
#line 1428 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_51, (MR_Integer) 3)));

#line 1428 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__2_52;
#line 1428 "post_typecheck.m"
  }
#line 1428 "post_typecheck.m"
}

#line 1265 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1265__1_1_f_0(
#line 1265 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_31)
#line 1265 "post_typecheck.m"
{
#line 1265 "post_typecheck.m"
  {
#line 1265 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1265 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_31, (MR_Integer) 1)));
#line 1265 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_31, (MR_Integer) 0)));
#line 1265 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_31, (MR_Integer) 2)));
#line 1265 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_31, (MR_Integer) 3)));

#line 1265 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__2_32;
#line 1265 "post_typecheck.m"
  }
#line 1265 "post_typecheck.m"
}

#line 428 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_2(
#line 428 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 428 "post_typecheck.m"
{
#line 428 "post_typecheck.m"
  {
#line 428 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 428 "post_typecheck.m"
    (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__ConstraintId_17 = ((MR_Word) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__conv0_ConstraintId_17);
#line 428 "post_typecheck.m"
    {
#line 428 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_1(check_hlds__post_typecheck__env_ptr);
#line 428 "post_typecheck.m"
      return;
    }
#line 428 "post_typecheck.m"
  }
#line 428 "post_typecheck.m"
}

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_3(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 431 "post_typecheck.m"
{
#line 431 "post_typecheck.m"
  {
#line 431 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 431 "post_typecheck.m"
    MR_builtin_longjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__commit_0, 1);
#line 431 "post_typecheck.m"
  }
#line 431 "post_typecheck.m"
}

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_5(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 431 "post_typecheck.m"
{
#line 431 "post_typecheck.m"
  {
#line 431 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 431 "post_typecheck.m"
    (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__Clause_21 = ((MR_Word) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__conv1_Clause_21);
#line 431 "post_typecheck.m"
    {
#line 431 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_4(check_hlds__post_typecheck__env_ptr);
#line 431 "post_typecheck.m"
      return;
    }
#line 431 "post_typecheck.m"
  }
#line 431 "post_typecheck.m"
}

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_6(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 431 "post_typecheck.m"
{
#line 431 "post_typecheck.m"
  {
#line 431 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 431 "post_typecheck.m"
    {
#line 433 "post_typecheck.m"
      MR_Word check_hlds__post_typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__HeadVar__3_25), (MR_Integer) 0)));

#line 433 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__HeadVar__3_25), (MR_Integer) 1)));
#line 434 "post_typecheck.m"
      {
#line 434 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__GoalInfo_23);
      }
#line 435 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_35_35 = (MR_Integer) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__GoalId_24;
#line 435 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_36_36 = (MR_Integer) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__ConstraintGoalId_19;
#line 435 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__succeeded = ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_35_35 == (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_36_36);
#line 435 "post_typecheck.m"
      if ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__succeeded)
#line 435 "post_typecheck.m"
        {
#line 435 "post_typecheck.m"
          check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_3(check_hlds__post_typecheck__env_ptr);
#line 435 "post_typecheck.m"
          return;
        }
#line 431 "post_typecheck.m"
    }
#line 431 "post_typecheck.m"
  }
#line 431 "post_typecheck.m"
}

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_4(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 431 "post_typecheck.m"
{
#line 431 "post_typecheck.m"
  {
#line 431 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 432 "post_typecheck.m"
    {
#line 432 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_26_26 = hlds__hlds_clauses__clause_body_1_f_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__Clause_21);
    }
#line 432 "post_typecheck.m"
    {
#line 432 "post_typecheck.m"
      hlds__goal_util__goal_contains_goal_2_p_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__V_26_26, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__HeadVar__3_25, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_6, check_hlds__post_typecheck__env_ptr);
    }
#line 431 "post_typecheck.m"
  }
#line 431 "post_typecheck.m"
}

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_7(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 431 "post_typecheck.m"
{
#line 431 "post_typecheck.m"
  {
#line 431 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 431 "post_typecheck.m"
    if (MR_builtin_setjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__commit_0) == 0)
#line 431 "post_typecheck.m"
      {
#line 431 "post_typecheck.m"
        {
#line 431 "post_typecheck.m"
          {
#line 431 "post_typecheck.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__conv1_Clause_21, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__Clauses_10, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_5, check_hlds__post_typecheck__env_ptr);
          }
#line 431 "post_typecheck.m"
        }
#line 431 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__succeeded = MR_FALSE;
#line 431 "post_typecheck.m"
      }
#line 431 "post_typecheck.m"
    else
#line 431 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__succeeded = MR_TRUE;
#line 431 "post_typecheck.m"
  }
#line 431 "post_typecheck.m"
}

#line 427 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_1(
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 427 "post_typecheck.m"
{
#line 427 "post_typecheck.m"
  {
#line 427 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 427 "post_typecheck.m"
    {
#line 429 "post_typecheck.m"
      MR_Word check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0)));
#line 429 "post_typecheck.m"
      MR_Integer check_hlds__post_typecheck__V_20_20;

#line 429 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__ConstraintGoalId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 1)));
#line 429 "post_typecheck.m"
      check_hlds__post_typecheck__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 2)));
#line 431 "post_typecheck.m"
      {
#line 431 "post_typecheck.m"
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_7(check_hlds__post_typecheck__env_ptr);
      }
#line 430 "post_typecheck.m"
      if ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__succeeded)
#line 430 "post_typecheck.m"
        {
#line 430 "post_typecheck.m"
          ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__cont)((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__cont_env_ptr);
#line 430 "post_typecheck.m"
          return;
        }
#line 427 "post_typecheck.m"
    }
#line 427 "post_typecheck.m"
  }
#line 427 "post_typecheck.m"
}

#line 427 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0(
#line 427 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Clauses_10,
#line 427 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConstraintIds_14,
#line 427 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__3_25,
#line 427 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr)
#line 427 "post_typecheck.m"
{
#line 427 "post_typecheck.m"
  {
#line 427 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0_s check_hlds__post_typecheck__env;

#line 427 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__Clauses_10 = check_hlds__post_typecheck__Clauses_10;
#line 427 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__HeadVar__3_25 = check_hlds__post_typecheck__HeadVar__3_25;
#line 427 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__cont = check_hlds__post_typecheck__cont;
#line 427 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__cont_env_ptr = check_hlds__post_typecheck__cont_env_ptr;
#line 428 "post_typecheck.m"
    {
#line 428 "post_typecheck.m"
      mercury__set__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_env_0__conv0_ConstraintId_17, check_hlds__post_typecheck__ConstraintIds_14, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0_2, &check_hlds__post_typecheck__env);
    }
#line 427 "post_typecheck.m"
  }
#line 427 "post_typecheck.m"
}

#line 354 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__354__1_3_p_0(
#line 354 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_23,
#line 354 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_24,
#line 354 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__3_25)
#line 354 "post_typecheck.m"
{
#line 354 "post_typecheck.m"
  {
#line 354 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 354 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_26_26;

#line 355 "post_typecheck.m"
    {
#line 355 "post_typecheck.m"
      check_hlds__post_typecheck__V_26_26 = parse_tree__builtin_lib_types__void_type_0_f_0();
    }
#line 355 "post_typecheck.m"
    {
#line 355 "post_typecheck.m"
      mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__post_typecheck__HeadVar__1_23)), ((MR_Box) (check_hlds__post_typecheck__V_26_26)), check_hlds__post_typecheck__HeadVar__2_24, check_hlds__post_typecheck__HeadVar__3_25);
#line 355 "post_typecheck.m"
      return;
    }
#line 354 "post_typecheck.m"
  }
#line 354 "post_typecheck.m"
}

#line 111 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0(
#line 111 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__1_1,
#line 111 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 111 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3)
#line 111 "post_typecheck.m"
{
#line 111 "post_typecheck.m"
  {
#line 111 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 111 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastX_10 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;
#line 111 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastY_11 = (MR_Integer) check_hlds__post_typecheck__HeadVar__3_3;

#line 111 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastX_10 == check_hlds__post_typecheck__CastY_11);
#line 111 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 2463 "check_hlds.post_typecheck.c"
      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "post_typecheck.m"
    else
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
      switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__2_2)) {
#line 111 "post_typecheck.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
        case (MR_Integer) 0:
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
          switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__2_2)) {
#line 111 "post_typecheck.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
            case (MR_Integer) 0:
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__3_3)) {
#line 111 "post_typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
                case (MR_Integer) 0:
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
                  switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__3_3)) {
#line 111 "post_typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
                    case (MR_Integer) 0:
#line 111 "post_typecheck.m"
                      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "post_typecheck.m"
                      break;
#line 111 "post_typecheck.m"
                    case (MR_Integer) 1:
#line 111 "post_typecheck.m"
                      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "post_typecheck.m"
                      break;
#line 111 "post_typecheck.m"
                  }
#line 111 "post_typecheck.m"
                  break;
#line 111 "post_typecheck.m"
                case (MR_Integer) 1:
#line 2511 "check_hlds.post_typecheck.c"
                  *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "post_typecheck.m"
                  break;
#line 111 "post_typecheck.m"
              }
#line 111 "post_typecheck.m"
              break;
#line 111 "post_typecheck.m"
            case (MR_Integer) 1:
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__3_3)) {
#line 111 "post_typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
                case (MR_Integer) 0:
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
                  switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__3_3)) {
#line 111 "post_typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
                    case (MR_Integer) 0:
#line 111 "post_typecheck.m"
                      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "post_typecheck.m"
                      break;
#line 111 "post_typecheck.m"
                    case (MR_Integer) 1:
#line 111 "post_typecheck.m"
                      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "post_typecheck.m"
                      break;
#line 111 "post_typecheck.m"
                  }
#line 111 "post_typecheck.m"
                  break;
#line 111 "post_typecheck.m"
                case (MR_Integer) 1:
#line 2551 "check_hlds.post_typecheck.c"
                  *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 111 "post_typecheck.m"
                  break;
#line 111 "post_typecheck.m"
              }
#line 111 "post_typecheck.m"
              break;
#line 111 "post_typecheck.m"
          }
#line 111 "post_typecheck.m"
          break;
#line 111 "post_typecheck.m"
        case (MR_Integer) 1:
#line 111 "post_typecheck.m"
          {
#line 111 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
            switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__3_3)) {
#line 111 "post_typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
              case (MR_Integer) 0:
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
                switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__3_3)) {
#line 111 "post_typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
                  case (MR_Integer) 0:
#line 2584 "check_hlds.post_typecheck.c"
                    *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "post_typecheck.m"
                    break;
#line 111 "post_typecheck.m"
                  case (MR_Integer) 1:
#line 2590 "check_hlds.post_typecheck.c"
                    *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 111 "post_typecheck.m"
                    break;
#line 111 "post_typecheck.m"
                }
#line 111 "post_typecheck.m"
                break;
#line 111 "post_typecheck.m"
              case (MR_Integer) 1:
#line 111 "post_typecheck.m"
                {
#line 111 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));

#line 111 "post_typecheck.m"
                  {
#line 111 "post_typecheck.m"
                    parse_tree__error_util____Compare____error_spec_0_0(check_hlds__post_typecheck__HeadVar__1_1, check_hlds__post_typecheck__V_13_13, check_hlds__post_typecheck__V_9_9);
#line 111 "post_typecheck.m"
                    return;
                  }
#line 111 "post_typecheck.m"
                }
#line 111 "post_typecheck.m"
                break;
#line 111 "post_typecheck.m"
            }
#line 111 "post_typecheck.m"
          }
#line 111 "post_typecheck.m"
          break;
#line 111 "post_typecheck.m"
      }
#line 111 "post_typecheck.m"
  }
#line 111 "post_typecheck.m"
}

#line 111 "post_typecheck.m"
MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0(
#line 111 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 111 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2)
#line 111 "post_typecheck.m"
{
#line 111 "post_typecheck.m"
  {
#line 111 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 111 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastX_9 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 111 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastY_10 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 111 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastX_9 == check_hlds__post_typecheck__CastY_10);
#line 111 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 111 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 111 "post_typecheck.m"
    else
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
      switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__1_1)) {
#line 111 "post_typecheck.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
        case (MR_Integer) 0:
#line 111 "post_typecheck.m"
#line 111 "post_typecheck.m"
          switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__1_1)) {
#line 111 "post_typecheck.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 111 "post_typecheck.m"
            case (MR_Integer) 0:
#line 111 "post_typecheck.m"
              {
#line 111 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__CastX_3 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 111 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__CastY_4 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 111 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastY_4 == check_hlds__post_typecheck__CastX_3);
#line 111 "post_typecheck.m"
              }
#line 111 "post_typecheck.m"
              break;
#line 111 "post_typecheck.m"
            case (MR_Integer) 1:
#line 111 "post_typecheck.m"
              {
#line 111 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__CastX_5 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 111 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__CastY_6 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 111 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastY_6 == check_hlds__post_typecheck__CastX_5);
#line 111 "post_typecheck.m"
              }
#line 111 "post_typecheck.m"
              break;
#line 111 "post_typecheck.m"
          }
#line 111 "post_typecheck.m"
          break;
#line 111 "post_typecheck.m"
        case (MR_Integer) 1:
#line 111 "post_typecheck.m"
          {
#line 111 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_8_8;

#line 111 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 111 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 111 "post_typecheck.m"
              {
#line 111 "post_typecheck.m"
                check_hlds__post_typecheck__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2718 "check_hlds.post_typecheck.c"
                {
#line 2720 "check_hlds.post_typecheck.c"
                  return check_hlds__post_typecheck__succeeded = parse_tree__error_util____Unify____error_spec_0_0(check_hlds__post_typecheck__V_7_7, check_hlds__post_typecheck__V_8_8);
                }
#line 111 "post_typecheck.m"
              }
#line 111 "post_typecheck.m"
          }
#line 111 "post_typecheck.m"
          break;
#line 111 "post_typecheck.m"
      }
#line 111 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 111 "post_typecheck.m"
  }
#line 111 "post_typecheck.m"
}

#line 1624 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_4_p_0(
#line 1624 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_5,
#line 1624 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeDefn_6,
#line 1624 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 1624 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20)
#line 1624 "post_typecheck.m"
{
#line 1671 "post_typecheck.m"
  {
#line 1671 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1629 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeStatus_8;
#line 1629 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeBody_9;
#line 1629 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 1632 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_10_10;

#line 1629 "post_typecheck.m"
    {
#line 1629 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__TypeStatus_8);
    }
#line 1630 "post_typecheck.m"
    {
#line 1630 "post_typecheck.m"
      check_hlds__post_typecheck__V_21_21 = hlds__status__type_status_defined_in_this_module_1_f_0(check_hlds__post_typecheck__TypeStatus_8);
    }
#line 1630 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_21_21 == (MR_Integer) 1);
#line 1629 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1629 "post_typecheck.m"
      {
#line 1631 "post_typecheck.m"
        {
#line 1631 "post_typecheck.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__TypeBody_9);
        }
#line 1632 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__TypeBody_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeBody_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1632 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1632 "post_typecheck.m"
          check_hlds__post_typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeBody_9, (MR_Integer) 1)));
#line 1629 "post_typecheck.m"
      }
#line 1671 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1646 "post_typecheck.m"
      {
#line 1646 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtor_5, (MR_Integer) 0)));
#line 1646 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtor_5, (MR_Integer) 1)));
#line 1646 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__BuiltinTypeCtors_13;
#line 1649 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ModuleName_14;
#line 1649 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_23_23;
#line 1649 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_44_44;
#line 1654 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__V_22_22;
#line 1655 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_43_43;

#line 1647 "post_typecheck.m"
        {
#line 1647 "post_typecheck.m"
          check_hlds__post_typecheck__BuiltinTypeCtors_13 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
#line 1649 "post_typecheck.m"
        {
#line 1649 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(check_hlds__post_typecheck__SymName_11, &check_hlds__post_typecheck__ModuleName_14);
        }
#line 1649 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1649 "post_typecheck.m"
          {
#line 1650 "post_typecheck.m"
            {
#line 1650 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(check_hlds__post_typecheck__ModuleName_14);
            }
#line 1650 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1649 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1649 "post_typecheck.m"
              {
#line 1654 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ModuleName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1654 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1654 "post_typecheck.m"
                  {
#line 1654 "post_typecheck.m"
                    check_hlds__post_typecheck__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ModuleName_14, (MR_Integer) 0)));
#line 1654 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__V_22_22, (MR_String) "type_desc") == 0);
#line 1654 "post_typecheck.m"
                  }
#line 1654 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1649 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1649 "post_typecheck.m"
                  {
#line 2857 "check_hlds.post_typecheck.c"
                    check_hlds__post_typecheck__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1655 "post_typecheck.m"
                    {
#line 1655 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_43_43, ((MR_Box) (check_hlds__post_typecheck__TypeCtor_5)), check_hlds__post_typecheck__BuiltinTypeCtors_13);
                    }
#line 1655 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1649 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1649 "post_typecheck.m"
                      {
#line 1659 "post_typecheck.m"
                        check_hlds__post_typecheck__V_23_23 = (MR_Integer) 0;
#line 1659 "post_typecheck.m"
                        {
#line 1659 "post_typecheck.m"
                          hlds__hlds_data__get_type_defn_prev_errors_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__V_44_44);
                        }
#line 1659 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_23_23 == check_hlds__post_typecheck__V_44_44);
#line 1649 "post_typecheck.m"
                      }
#line 1649 "post_typecheck.m"
                  }
#line 1649 "post_typecheck.m"
              }
#line 1649 "post_typecheck.m"
          }
#line 1668 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1661 "post_typecheck.m"
          {
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeContext_15;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Pieces_16;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Msg_17;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Spec_18;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_26_26;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_27_27;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_28_28;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_35_35;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_36_36;
#line 1661 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_40_40;

#line 1661 "post_typecheck.m"
            {
#line 1661 "post_typecheck.m"
              hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__TypeContext_15);
            }
#line 1663 "post_typecheck.m"
            {
#line 1663 "post_typecheck.m"
              check_hlds__post_typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1663 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_28_28, 0) = ((MR_Box) (check_hlds__post_typecheck__SymName_11));
#line 1663 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_28_28, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_12));
#line 1663 "post_typecheck.m"
            }
#line 1663 "post_typecheck.m"
            {
#line 1663 "post_typecheck.m"
              check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1663 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1663 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__post_typecheck__V_28_28));
#line 1663 "post_typecheck.m"
            }
#line 1663 "post_typecheck.m"
            {
#line 1663 "post_typecheck.m"
              check_hlds__post_typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1663 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__post_typecheck__V_27_27));
#line 1663 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[56])));
#line 1663 "post_typecheck.m"
            }
#line 1662 "post_typecheck.m"
            {
#line 1662 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1662 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[85])));
#line 1662 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_26_26));
#line 1662 "post_typecheck.m"
            }
#line 1665 "post_typecheck.m"
            {
#line 1665 "post_typecheck.m"
              check_hlds__post_typecheck__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1665 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_36_36, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_16));
#line 1665 "post_typecheck.m"
            }
#line 1665 "post_typecheck.m"
            {
#line 1665 "post_typecheck.m"
              check_hlds__post_typecheck__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1665 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_36_36));
#line 1665 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1665 "post_typecheck.m"
            }
#line 1665 "post_typecheck.m"
            {
#line 1665 "post_typecheck.m"
              check_hlds__post_typecheck__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1665 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeContext_15));
#line 1665 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_35_35));
#line 1665 "post_typecheck.m"
            }
#line 1666 "post_typecheck.m"
            {
#line 1666 "post_typecheck.m"
              check_hlds__post_typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1666 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_40_40, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_17));
#line 1666 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1666 "post_typecheck.m"
            }
#line 1666 "post_typecheck.m"
            {
#line 1666 "post_typecheck.m"
              check_hlds__post_typecheck__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1666 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1666 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1666 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 2) = ((MR_Box) (check_hlds__post_typecheck__V_40_40));
#line 1666 "post_typecheck.m"
            }
#line 1667 "post_typecheck.m"
            {
#line 1667 "post_typecheck.m"
              MR_Word base;
#line 1667 "post_typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = base;
#line 1667 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_18));
#line 1667 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19));
#line 1667 "post_typecheck.m"
            }
#line 1661 "post_typecheck.m"
          }
#line 1668 "post_typecheck.m"
        else
#line 1668 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 1646 "post_typecheck.m"
      }
#line 1671 "post_typecheck.m"
    else
#line 1671 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 1671 "post_typecheck.m"
  }
#line 1624 "post_typecheck.m"
}

#line 1610 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_var_6_p_0(
#line 1610 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_7,
#line 1610 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Var_8,
#line 1610 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11,
#line 1610 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12,
#line 1610 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13,
#line 1610 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14)
#line 1610 "post_typecheck.m"
{
#line 1613 "post_typecheck.m"
  {
#line 1613 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 1614 "post_typecheck.m"
    {
#line 1614 "post_typecheck.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14);
    }
#line 1615 "post_typecheck.m"
    {
#line 1615 "post_typecheck.m"
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__Type_7, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12);
#line 1615 "post_typecheck.m"
      return;
    }
#line 1613 "post_typecheck.m"
  }
#line 1610 "post_typecheck.m"
}

#line 1602 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_vars_6_p_0(
#line 1602 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Types_7,
#line 1602 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Vars_8,
#line 1602 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12,
#line 1602 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13,
#line 1602 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14,
#line 1602 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15)
#line 1602 "post_typecheck.m"
{
#line 1605 "post_typecheck.m"
  {
#line 1605 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1605 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__NumVars_11;

#line 1606 "post_typecheck.m"
    {
#line 1606 "post_typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__Types_7, &check_hlds__post_typecheck__NumVars_11);
    }
#line 1607 "post_typecheck.m"
    {
#line 1607 "post_typecheck.m"
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__NumVars_11, check_hlds__post_typecheck__Vars_8, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15);
    }
#line 1608 "post_typecheck.m"
    {
#line 1608 "post_typecheck.m"
      hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(*check_hlds__post_typecheck__Vars_8, check_hlds__post_typecheck__Types_7, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13);
#line 1608 "post_typecheck.m"
      return;
    }
#line 1605 "post_typecheck.m"
  }
#line 1602 "post_typecheck.m"
}

#line 1578 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_8,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_9,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_10,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RestrictNonLocals_11,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarsList_12,
#line 1578 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_13,
#line 1578 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_14)
#line 1578 "post_typecheck.m"
{
#line 1583 "post_typecheck.m"
  {
#line 1583 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_26_26;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_16;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnifyMainContext_17;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnifySubContext_18;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goal0_19;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr0_20;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo0_21;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocals1_22;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocals_23;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo1_24;
#line 1583 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo_25;

#line 1584 "post_typecheck.m"
    {
#line 1584 "post_typecheck.m"
      check_hlds__post_typecheck__Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__OldGoalInfo_10);
    }
#line 1585 "post_typecheck.m"
    {
#line 1585 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_16 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_10);
    }
#line 1586 "post_typecheck.m"
    check_hlds__post_typecheck__UnifyMainContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__UnifyContext_13, (MR_Integer) 0)));
#line 1586 "post_typecheck.m"
    check_hlds__post_typecheck__UnifySubContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__UnifyContext_13, (MR_Integer) 1)));
#line 1587 "post_typecheck.m"
    {
#line 1587 "post_typecheck.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__RHS_9, check_hlds__post_typecheck__Context_15, check_hlds__post_typecheck__UnifyMainContext_17, check_hlds__post_typecheck__UnifySubContext_18, &check_hlds__post_typecheck__Goal0_19);
    }
#line 1589 "post_typecheck.m"
    check_hlds__post_typecheck__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal0_19, (MR_Integer) 0)));
#line 1589 "post_typecheck.m"
    check_hlds__post_typecheck__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal0_19, (MR_Integer) 1)));
#line 3194 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1592 "post_typecheck.m"
    {
#line 1592 "post_typecheck.m"
      parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_26_26, check_hlds__post_typecheck__VarsList_12, &check_hlds__post_typecheck__NonLocals1_22);
    }
#line 1593 "post_typecheck.m"
    {
#line 1593 "post_typecheck.m"
      parse_tree__set_of_var__intersect_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_26_26, check_hlds__post_typecheck__RestrictNonLocals_11, check_hlds__post_typecheck__NonLocals1_22, &check_hlds__post_typecheck__NonLocals_23);
    }
#line 1594 "post_typecheck.m"
    {
#line 1594 "post_typecheck.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__post_typecheck__NonLocals_23, check_hlds__post_typecheck__GoalInfo0_21, &check_hlds__post_typecheck__GoalInfo1_24);
    }
#line 1599 "post_typecheck.m"
    {
#line 1599 "post_typecheck.m"
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(check_hlds__post_typecheck__GoalId_16, check_hlds__post_typecheck__GoalInfo1_24, &check_hlds__post_typecheck__GoalInfo_25);
    }
#line 1600 "post_typecheck.m"
    {
#line 1600 "post_typecheck.m"
      MR_Word base;
#line 1600 "post_typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1600 "post_typecheck.m"
      *check_hlds__post_typecheck__Goal_14 = base;
#line 1600 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr0_20));
#line 1600 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo_25));
#line 1600 "post_typecheck.m"
    }
#line 1583 "post_typecheck.m"
  }
#line 1578 "post_typecheck.m"
}

#line 1561 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__search_for_named_field_4_p_0(
#line 1561 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1561 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_7,
#line 1561 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__CurFieldNumber_8,
#line 1561 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NamedFieldNumber_9)
#line 1561 "post_typecheck.m"
{
#line 1565 "post_typecheck.m"
  while (MR_TRUE)
#line 1565 "post_typecheck.m"
    {
#line 1565 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1565 "post_typecheck.m"
      {
#line 1565 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__CtorArg_5;
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__CtorArgs_6;
#line 1567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgFieldName_10;
#line 1567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_12_12;
#line 1567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_13_13;
#line 1567 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__V_19_19;
#line 1567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_16_16;
#line 1567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_17_17;
#line 1567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_18_18;
#line 1567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_11_11;

#line 1564 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1564 "post_typecheck.m"
          {
#line 1564 "post_typecheck.m"
            check_hlds__post_typecheck__CtorArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1564 "post_typecheck.m"
            check_hlds__post_typecheck__CtorArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1567 "post_typecheck.m"
            check_hlds__post_typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 0)));
#line 1567 "post_typecheck.m"
            check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 1)));
#line 1567 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 2)));
#line 1567 "post_typecheck.m"
            check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 3)));
#line 1567 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1567 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1567 "post_typecheck.m"
              {
#line 1567 "post_typecheck.m"
                check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, (MR_Integer) 0)));
#line 1567 "post_typecheck.m"
                check_hlds__post_typecheck__ArgFieldName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_13_13, (MR_Integer) 0)));
#line 1567 "post_typecheck.m"
                check_hlds__post_typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_13_13, (MR_Integer) 1)));
#line 1568 "post_typecheck.m"
                {
#line 1568 "post_typecheck.m"
                  check_hlds__post_typecheck__V_19_19 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__ArgFieldName_10);
                }
#line 1568 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__UnqualFieldName_7, check_hlds__post_typecheck__V_19_19) == 0);
#line 1567 "post_typecheck.m"
              }
#line 1571 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1570 "post_typecheck.m"
              {
#line 1570 "post_typecheck.m"
                *check_hlds__post_typecheck__NamedFieldNumber_9 = check_hlds__post_typecheck__CurFieldNumber_8;
#line 1570 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1570 "post_typecheck.m"
              }
#line 1571 "post_typecheck.m"
            else
#line 1572 "post_typecheck.m"
              {
#line 1572 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_14_14 = (check_hlds__post_typecheck__CurFieldNumber_8 + (MR_Integer) 1);

#line 1572 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1572 "post_typecheck.m"
                {
#line 1572 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__CtorArgs_6;
#line 1572 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__CurFieldNumber__tmp_copy_8 = check_hlds__post_typecheck__V_14_14;

#line 1572 "post_typecheck.m"
                  check_hlds__post_typecheck__CurFieldNumber_8 = check_hlds__post_typecheck__CurFieldNumber__tmp_copy_8;
#line 1572 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 1572 "post_typecheck.m"
                }
#line 1572 "post_typecheck.m"
                continue;
#line 1572 "post_typecheck.m"
              }
#line 1564 "post_typecheck.m"
          }
#line 1565 "post_typecheck.m"
        return check_hlds__post_typecheck__succeeded;
#line 1565 "post_typecheck.m"
      }
#line 1565 "post_typecheck.m"
      break;
#line 1565 "post_typecheck.m"
    }
#line 1561 "post_typecheck.m"
}

#line 1545 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_2_5_p_0(
#line 1545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_1,
#line 1545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1545 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_3,
#line 1545 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_4,
#line 1545 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_5)
#line 1545 "post_typecheck.m"
{
#line 1548 "post_typecheck.m"
  while (MR_TRUE)
#line 1548 "post_typecheck.m"
    {
#line 1548 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1548 "post_typecheck.m"
      {
#line 1548 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 1548 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1548 "post_typecheck.m"
          {
#line 1549 "post_typecheck.m"
            {
#line 1549 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field_2\'/5", (MR_String) "can\'t find field");
#line 1549 "post_typecheck.m"
              return;
            }
#line 1548 "post_typecheck.m"
          }
#line 1548 "post_typecheck.m"
        else
#line 1551 "post_typecheck.m"
          {
#line 1551 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 1551 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 1551 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 2)));
#line 1551 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 3)));
#line 1551 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 4)));
#line 1552 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 0)));
#line 1552 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 1)));
#line 1552 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 5)));
#line 1556 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__FieldNumberPrime_25;

#line 1553 "post_typecheck.m"
            {
#line 1553 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__search_for_named_field_4_p_0(check_hlds__post_typecheck__CtorArgs_22, check_hlds__post_typecheck__UnqualFieldName_3, (MR_Integer) 1, &check_hlds__post_typecheck__FieldNumberPrime_25);
            }
#line 1556 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1554 "post_typecheck.m"
              {
#line 1554 "post_typecheck.m"
                {
#line 1554 "post_typecheck.m"
                  MR_Word base;
#line 1554 "post_typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "post_typecheck.m"
                  *check_hlds__post_typecheck__ConsId_4 = base;
#line 1554 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1554 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_21));
#line 1554 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_23));
#line 1554 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtor_1));
#line 1554 "post_typecheck.m"
                }
#line 1555 "post_typecheck.m"
                *check_hlds__post_typecheck__FieldNumber_5 = check_hlds__post_typecheck__FieldNumberPrime_25;
#line 1554 "post_typecheck.m"
              }
#line 1556 "post_typecheck.m"
            else
#line 1557 "post_typecheck.m"
              {
#line 1557 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1557 "post_typecheck.m"
                {
#line 1557 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__Ctors_15;

#line 1557 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 1557 "post_typecheck.m"
                }
#line 1557 "post_typecheck.m"
                continue;
#line 1557 "post_typecheck.m"
              }
#line 1551 "post_typecheck.m"
          }
#line 1548 "post_typecheck.m"
      }
#line 1548 "post_typecheck.m"
      break;
#line 1548 "post_typecheck.m"
    }
#line 1545 "post_typecheck.m"
}

#line 1522 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(
#line 1522 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1522 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_7,
#line 1522 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldSymName_8,
#line 1522 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_9,
#line 1522 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_10)
#line 1522 "post_typecheck.m"
{
#line 1526 "post_typecheck.m"
  {
#line 1526 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1526 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeCtor_11;
#line 1526 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_12;
#line 1526 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeDefn_13;
#line 1526 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeBody_14;

#line 1527 "post_typecheck.m"
    {
#line 1527 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_7, &check_hlds__post_typecheck__TermTypeCtor_11);
    }
#line 1528 "post_typecheck.m"
    {
#line 1528 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__TypeTable_12);
    }
#line 1529 "post_typecheck.m"
    {
#line 1529 "post_typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_12, check_hlds__post_typecheck__TermTypeCtor_11, &check_hlds__post_typecheck__TermTypeDefn_13);
    }
#line 1530 "post_typecheck.m"
    {
#line 1530 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TermTypeDefn_13, &check_hlds__post_typecheck__TermTypeBody_14);
    }
#line 1536 "post_typecheck.m"
#line 1536 "post_typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__post_typecheck__TermTypeBody_14)) {
#line 1536 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1536 "post_typecheck.m"
      case (MR_Integer) 0:
#line 1541 "post_typecheck.m"
        {
#line 1542 "post_typecheck.m"
          {
#line 1542 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1542 "post_typecheck.m"
            return;
          }
#line 1541 "post_typecheck.m"
        }
#line 1536 "post_typecheck.m"
        break;
#line 1536 "post_typecheck.m"
      case (MR_Integer) 1:
#line 1532 "post_typecheck.m"
        {
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 0)));
#line 1532 "post_typecheck.m"
          MR_String check_hlds__post_typecheck__FieldName_24;
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 1)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 2)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 3)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 4)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 5)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 7)));

#line 1533 "post_typecheck.m"
          {
#line 1533 "post_typecheck.m"
            check_hlds__post_typecheck__FieldName_24 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__FieldSymName_8);
          }
#line 1534 "post_typecheck.m"
          {
#line 1534 "post_typecheck.m"
            check_hlds__post_typecheck__get_constructor_containing_field_2_5_p_0(check_hlds__post_typecheck__TermTypeCtor_11, check_hlds__post_typecheck__Ctors_15, check_hlds__post_typecheck__FieldName_24, check_hlds__post_typecheck__ConsId_9, check_hlds__post_typecheck__FieldNumber_10);
#line 1534 "post_typecheck.m"
            return;
          }
#line 1532 "post_typecheck.m"
        }
#line 1536 "post_typecheck.m"
        break;
#line 1536 "post_typecheck.m"
      case (MR_Integer) 2:
#line 1541 "post_typecheck.m"
        {
#line 1542 "post_typecheck.m"
          {
#line 1542 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1542 "post_typecheck.m"
            return;
          }
#line 1541 "post_typecheck.m"
        }
#line 1536 "post_typecheck.m"
        break;
#line 1536 "post_typecheck.m"
      case (MR_Integer) 3:
#line 1541 "post_typecheck.m"
        {
#line 1542 "post_typecheck.m"
          {
#line 1542 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1542 "post_typecheck.m"
            return;
          }
#line 1541 "post_typecheck.m"
        }
#line 1536 "post_typecheck.m"
        break;
#line 1536 "post_typecheck.m"
    }
#line 1526 "post_typecheck.m"
  }
#line 1522 "post_typecheck.m"
}

#line 1502 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__split_list_at_index_5_p_0(
#line 1502 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeInfo_for_T_20,
#line 1502 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__Index_6,
#line 1502 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__List_7,
#line 1502 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Before_8,
#line 1502 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__At_9,
#line 1502 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__After_10)
#line 1502 "post_typecheck.m"
{
#line 1513 "post_typecheck.m"
  {
#line 1513 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1513 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Before0_11;
#line 1513 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__At0_13;
#line 1513 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__After0_14;
#line 1507 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__AtAndAfter_12;
#line 1507 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_15_15 = (check_hlds__post_typecheck__Index_6 - (MR_Integer) 1);

#line 1507 "post_typecheck.m"
    {
#line 1507 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = mercury__list__split_list_4_p_0(check_hlds__post_typecheck__TypeInfo_for_T_20, check_hlds__post_typecheck__V_15_15, check_hlds__post_typecheck__List_7, &check_hlds__post_typecheck__Before0_11, &check_hlds__post_typecheck__AtAndAfter_12);
    }
#line 1507 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1507 "post_typecheck.m"
      {
#line 1508 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__AtAndAfter_12)) == (MR_mktag((MR_Integer) 1)));
#line 1508 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1508 "post_typecheck.m"
          {
#line 1508 "post_typecheck.m"
            check_hlds__post_typecheck__At0_13 = (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__AtAndAfter_12, (MR_Integer) 0));
#line 1508 "post_typecheck.m"
            check_hlds__post_typecheck__After0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__AtAndAfter_12, (MR_Integer) 1)));
#line 1508 "post_typecheck.m"
          }
#line 1507 "post_typecheck.m"
      }
#line 1513 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1510 "post_typecheck.m"
      {
#line 1510 "post_typecheck.m"
        *check_hlds__post_typecheck__Before_8 = check_hlds__post_typecheck__Before0_11;
#line 1511 "post_typecheck.m"
        *check_hlds__post_typecheck__At_9 = check_hlds__post_typecheck__At0_13;
#line 1512 "post_typecheck.m"
        *check_hlds__post_typecheck__After_10 = check_hlds__post_typecheck__After0_14;
#line 1510 "post_typecheck.m"
      }
#line 1513 "post_typecheck.m"
    else
#line 1514 "post_typecheck.m"
      {
#line 1514 "post_typecheck.m"
        {
#line 1514 "post_typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.split_list_at_index\'/5", (MR_String) "split_list_at_index");
#line 1514 "post_typecheck.m"
          return;
        }
#line 1514 "post_typecheck.m"
      }
#line 1513 "post_typecheck.m"
  }
#line 1502 "post_typecheck.m"
}

#line 1491 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__unify_constraint_list_5_p_0(
#line 1491 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1491 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1491 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVars_3,
#line 1491 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4,
#line 1491 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Subst_5)
#line 1491 "post_typecheck.m"
{
#line 1495 "post_typecheck.m"
  while (MR_TRUE)
#line 1495 "post_typecheck.m"
    {
#line 1495 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1495 "post_typecheck.m"
      {
#line 1495 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 1495 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "post_typecheck.m"
          {
#line 1495 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1495 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1495 "post_typecheck.m"
              {
#line 1495 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_Subst_5 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4;
#line 1495 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1495 "post_typecheck.m"
              }
#line 1495 "post_typecheck.m"
          }
#line 1495 "post_typecheck.m"
        else
#line 1496 "post_typecheck.m"
          {
#line 1496 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1496 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__As_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1496 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__B_12;
#line 1496 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Bs_13;
#line 1496 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypesA_17;
#line 1496 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypesB_19;
#line 1496 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22;
#line 1497 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___ClassNameA_16;
#line 1498 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___ClassNameB_18;

#line 1496 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1496 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1496 "post_typecheck.m"
              {
#line 1496 "post_typecheck.m"
                check_hlds__post_typecheck__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 1496 "post_typecheck.m"
                check_hlds__post_typecheck__Bs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 1497 "post_typecheck.m"
                check_hlds__post_typecheck___ClassNameA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__A_10, (MR_Integer) 0)));
#line 1497 "post_typecheck.m"
                check_hlds__post_typecheck__ArgTypesA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__A_10, (MR_Integer) 1)));
#line 1498 "post_typecheck.m"
                check_hlds__post_typecheck___ClassNameB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__B_12, (MR_Integer) 0)));
#line 1498 "post_typecheck.m"
                check_hlds__post_typecheck__ArgTypesB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__B_12, (MR_Integer) 1)));
#line 1499 "post_typecheck.m"
                {
#line 1499 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__post_typecheck__ArgTypesA_17, check_hlds__post_typecheck__ArgTypesB_19, check_hlds__post_typecheck__TVars_3, check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4, &check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22);
                }
#line 1496 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1500 "post_typecheck.m"
                  {
#line 1500 "post_typecheck.m"
                    /* direct tailcall eliminated */
#line 1500 "post_typecheck.m"
                    {
#line 1500 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__As_11;
#line 1500 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__Bs_13;
#line 1500 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22;

#line 1500 "post_typecheck.m"
                      check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 1500 "post_typecheck.m"
                      check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 1500 "post_typecheck.m"
                      check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 1500 "post_typecheck.m"
                    }
#line 1500 "post_typecheck.m"
                    continue;
#line 1500 "post_typecheck.m"
                  }
#line 1496 "post_typecheck.m"
              }
#line 1496 "post_typecheck.m"
          }
#line 1495 "post_typecheck.m"
        return check_hlds__post_typecheck__succeeded;
#line 1495 "post_typecheck.m"
      }
#line 1495 "post_typecheck.m"
      break;
#line 1495 "post_typecheck.m"
    }
#line 1491 "post_typecheck.m"
}

#line 1428 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
#line 1428 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1428 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 1428 "post_typecheck.m"
{
#line 1428 "post_typecheck.m"
  {
#line 1428 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 1428 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1428 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__2_52;

#line 1428 "post_typecheck.m"
    {
#line 1428 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_HeadVar__2_52 = check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1428__1_1_f_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 1428 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__2_52));
#line 1428 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 1428 "post_typecheck.m"
  }
#line 1428 "post_typecheck.m"
}

#line 1417 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_9,
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalId_10,
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_11,
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_12,
#line 1417 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualArgTypes_13,
#line 1417 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualExistQVars_14,
#line 1417 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48,
#line 1417 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49)
#line 1417 "post_typecheck.m"
{
#line 1422 "post_typecheck.m"
  {
#line 1422 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_63_63;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtor_16;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsDefn_17;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeParams_20;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsExistQVars_22;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsConstraints_23;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgs_24;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgTypes_26;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ActualArgTypes0_28;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeArgs_46;
#line 1422 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnivTSubst_47;
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_18_18;
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_25_25;
#line 1472 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_45_45;

#line 1424 "post_typecheck.m"
    {
#line 1424 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_12, &check_hlds__post_typecheck__TypeCtor_16);
    }
#line 1425 "post_typecheck.m"
    {
#line 1425 "post_typecheck.m"
      check_hlds__type_util__get_cons_defn_det_4_p_0(check_hlds__post_typecheck__ModuleInfo_9, check_hlds__post_typecheck__TypeCtor_16, check_hlds__post_typecheck__ConsId_11, &check_hlds__post_typecheck__ConsDefn_17);
    }
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 0)));
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 1)));
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 2)));
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 3)));
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__ConsExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 4)));
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__ConsConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 5)));
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__ConsArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 6)));
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 7)));
#line 3967 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1428 "post_typecheck.m"
    {
#line 1428 "post_typecheck.m"
      check_hlds__post_typecheck__ConsArgTypes_26 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__post_typecheck__TypeCtorInfo_63_63, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[7], check_hlds__post_typecheck__ConsArgs_24);
    }
#line 1434 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ConsExistQVars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1431 "post_typecheck.m"
      {
#line 1432 "post_typecheck.m"
        check_hlds__post_typecheck__ActualArgTypes0_28 = check_hlds__post_typecheck__ConsArgTypes_26;
#line 1433 "post_typecheck.m"
        *check_hlds__post_typecheck__ActualExistQVars_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1431 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48;
#line 1431 "post_typecheck.m"
      }
#line 1434 "post_typecheck.m"
    else
#line 1435 "post_typecheck.m"
      {
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeInfo_64_64 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 1435 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__NumExistQVars_31;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet0_32;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentExistQVars_33;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_34;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConsToParentRenaming_35;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentArgTypes_36;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentConstraints_37;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_38;
#line 1435 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__NumConstraints_39;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualConstraints_40;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistTSubst_41;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__KindMap_42;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualExistQVarTypes_43;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarsB_72;
#line 1435 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Subst0_73;
#line 1487 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Subst1_74;
#line 1468 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualExistQVars0_44;

#line 1437 "post_typecheck.m"
        {
#line 1437 "post_typecheck.m"
          mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__ConsExistQVars_22, &check_hlds__post_typecheck__NumExistQVars_31);
        }
#line 1438 "post_typecheck.m"
        {
#line 1438 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48, &check_hlds__post_typecheck__TVarSet0_32);
        }
#line 1439 "post_typecheck.m"
        {
#line 1439 "post_typecheck.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__post_typecheck__NumExistQVars_31, &check_hlds__post_typecheck__ParentExistQVars_33, check_hlds__post_typecheck__TVarSet0_32, &check_hlds__post_typecheck__TVarSet_34);
        }
#line 1440 "post_typecheck.m"
        {
#line 1440 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__post_typecheck__TVarSet_34, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49);
        }
#line 1441 "post_typecheck.m"
        {
#line 1441 "post_typecheck.m"
          mercury__map__from_corresponding_lists_3_p_0(check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__ConsExistQVars_22, check_hlds__post_typecheck__ParentExistQVars_33, &check_hlds__post_typecheck__ConsToParentRenaming_35);
        }
#line 1443 "post_typecheck.m"
        {
#line 1443 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__post_typecheck__ConsToParentRenaming_35, check_hlds__post_typecheck__ConsArgTypes_26, &check_hlds__post_typecheck__ParentArgTypes_36);
        }
#line 1445 "post_typecheck.m"
        {
#line 1445 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__post_typecheck__ConsToParentRenaming_35, check_hlds__post_typecheck__ConsConstraints_23, &check_hlds__post_typecheck__ParentConstraints_37);
        }
#line 1453 "post_typecheck.m"
        {
#line 1453 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49, &check_hlds__post_typecheck__ConstraintMap_38);
        }
#line 1454 "post_typecheck.m"
        {
#line 1454 "post_typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__post_typecheck__ConsConstraints_23, &check_hlds__post_typecheck__NumConstraints_39);
        }
#line 1455 "post_typecheck.m"
        {
#line 1455 "post_typecheck.m"
          hlds__hlds_data__lookup_hlds_constraint_list_5_p_0(check_hlds__post_typecheck__ConstraintMap_38, (MR_Integer) 1, check_hlds__post_typecheck__GoalId_10, check_hlds__post_typecheck__NumConstraints_39, &check_hlds__post_typecheck__ActualConstraints_40);
        }
#line 1480 "post_typecheck.m"
        {
#line 1480 "post_typecheck.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__post_typecheck__ActualConstraints_40, &check_hlds__post_typecheck__TVarsB_72);
        }
#line 1481 "post_typecheck.m"
        {
#line 1481 "post_typecheck.m"
          mercury__map__init_1_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__post_typecheck__Subst0_73);
        }
#line 1483 "post_typecheck.m"
        {
#line 1483 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__unify_constraint_list_5_p_0(check_hlds__post_typecheck__ParentConstraints_37, check_hlds__post_typecheck__ActualConstraints_40, check_hlds__post_typecheck__TVarsB_72, check_hlds__post_typecheck__Subst0_73, &check_hlds__post_typecheck__Subst1_74);
        }
#line 1487 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1486 "post_typecheck.m"
          check_hlds__post_typecheck__ExistTSubst_41 = check_hlds__post_typecheck__Subst1_74;
#line 1487 "post_typecheck.m"
        else
#line 1488 "post_typecheck.m"
          {
#line 1488 "post_typecheck.m"
            {
#line 1488 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.constraint_list_subsumes_det\'/3", (MR_String) "failed");
#line 1488 "post_typecheck.m"
              return;
            }
#line 1488 "post_typecheck.m"
          }
#line 1459 "post_typecheck.m"
        {
#line 1459 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__post_typecheck__ExistTSubst_41, check_hlds__post_typecheck__ParentArgTypes_36, &check_hlds__post_typecheck__ActualArgTypes0_28);
        }
#line 1463 "post_typecheck.m"
        {
#line 1463 "post_typecheck.m"
          mercury__map__init_1_p_0(check_hlds__post_typecheck__TypeInfo_64_64, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &check_hlds__post_typecheck__KindMap_42);
        }
#line 1464 "post_typecheck.m"
        {
#line 1464 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(check_hlds__post_typecheck__KindMap_42, check_hlds__post_typecheck__ExistTSubst_41, check_hlds__post_typecheck__ParentExistQVars_33, &check_hlds__post_typecheck__ActualExistQVarTypes_43);
        }
#line 1466 "post_typecheck.m"
        {
#line 1466 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(check_hlds__post_typecheck__ActualExistQVarTypes_43, &check_hlds__post_typecheck__ActualExistQVars0_44);
        }
#line 1468 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1467 "post_typecheck.m"
          *check_hlds__post_typecheck__ActualExistQVars_14 = check_hlds__post_typecheck__ActualExistQVars0_44;
#line 1468 "post_typecheck.m"
        else
#line 1469 "post_typecheck.m"
          {
#line 1469 "post_typecheck.m"
            {
#line 1469 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_cons_id_arg_types_adding_existq_tvars\'/8", (MR_String) "existq_tvar bound to non-var");
#line 1469 "post_typecheck.m"
              return;
            }
#line 1469 "post_typecheck.m"
          }
#line 1435 "post_typecheck.m"
      }
#line 1472 "post_typecheck.m"
    {
#line 1472 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__post_typecheck__TermType_12, &check_hlds__post_typecheck__V_45_45, &check_hlds__post_typecheck__TypeArgs_46);
    }
#line 1473 "post_typecheck.m"
    {
#line 1473 "post_typecheck.m"
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], check_hlds__post_typecheck__TypeCtorInfo_63_63, check_hlds__post_typecheck__TypeParams_20, check_hlds__post_typecheck__TypeArgs_46, &check_hlds__post_typecheck__UnivTSubst_47);
    }
#line 1474 "post_typecheck.m"
    {
#line 1474 "post_typecheck.m"
      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__post_typecheck__UnivTSubst_47, check_hlds__post_typecheck__ActualArgTypes0_28, check_hlds__post_typecheck__ActualArgTypes_13);
#line 1474 "post_typecheck.m"
      return;
    }
#line 1422 "post_typecheck.m"
  }
#line 1417 "post_typecheck.m"
}

#line 1350 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_set_function_14_p_0(
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55,
#line 1350 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57,
#line 1350 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59,
#line 1350 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_19,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_20,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_21,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_22,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermOutputVar_23,
#line 1350 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_24,
#line 1350 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_25)
#line 1350 "post_typecheck.m"
{
#line 1357 "post_typecheck.m"
  {
#line 1357 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_86_86;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_87_87;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermType_26;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId0_27;
#line 1357 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__FieldNumber_28;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_29;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_30;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_31;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesBeforeField_32;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermFieldType_33;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesAfterField_34;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsBeforeField_35;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__SingletonFieldVar_36;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsAfterField_37;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructArgs_38;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__OldNonLocals_39;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocalArgs_40;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructRestrictNonLocals_41;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructGoal_42;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructArgs_43;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructRestrictNonLocals_44;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId_45;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructGoal_52;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConjExpr_53;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Conj_54;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_68_68;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_69_69;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_70_70;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_72_72;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_76_76;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_77_77;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_80_80;
#line 1357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_81_81;
#line 1366 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_TermFieldType_33;

#line 1358 "post_typecheck.m"
    {
#line 1358 "post_typecheck.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57, check_hlds__post_typecheck__TermInputVar_22, &check_hlds__post_typecheck__TermType_26);
    }
#line 1359 "post_typecheck.m"
    {
#line 1359 "post_typecheck.m"
      check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__TermType_26, check_hlds__post_typecheck__FieldName_19, &check_hlds__post_typecheck__ConsId0_27, &check_hlds__post_typecheck__FieldNumber_28);
    }
#line 1362 "post_typecheck.m"
    {
#line 1362 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_29 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_24);
    }
#line 1363 "post_typecheck.m"
    {
#line 1363 "post_typecheck.m"
      check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__GoalId_29, check_hlds__post_typecheck__ConsId0_27, check_hlds__post_typecheck__TermType_26, &check_hlds__post_typecheck__ArgTypes_30, &check_hlds__post_typecheck__ExistQVars_31, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56);
    }
#line 1366 "post_typecheck.m"
    {
#line 1366 "post_typecheck.m"
      check_hlds__post_typecheck__split_list_at_index_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__FieldNumber_28, check_hlds__post_typecheck__ArgTypes_30, &check_hlds__post_typecheck__TypesBeforeField_32, &check_hlds__post_typecheck__conv0_TermFieldType_33, &check_hlds__post_typecheck__TypesAfterField_34);
    }
#line 1366 "post_typecheck.m"
    check_hlds__post_typecheck__TermFieldType_33 = ((MR_Word) check_hlds__post_typecheck__conv0_TermFieldType_33);
#line 1369 "post_typecheck.m"
    {
#line 1369 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesBeforeField_32, &check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63);
    }
#line 1370 "post_typecheck.m"
    {
#line 1370 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_var_6_p_0(check_hlds__post_typecheck__TermFieldType_33, &check_hlds__post_typecheck__SingletonFieldVar_36, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65);
    }
#line 1371 "post_typecheck.m"
    {
#line 1371 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesAfterField_34, &check_hlds__post_typecheck__VarsAfterField_37, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60);
    }
#line 4326 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_86_86 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[1];
#line 1374 "post_typecheck.m"
    {
#line 1374 "post_typecheck.m"
      check_hlds__post_typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__post_typecheck__SingletonFieldVar_36));
#line 1374 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_68_68, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_37));
#line 1374 "post_typecheck.m"
    }
#line 1374 "post_typecheck.m"
    {
#line 1374 "post_typecheck.m"
      check_hlds__post_typecheck__DeconstructArgs_38 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__V_68_68);
    }
#line 1375 "post_typecheck.m"
    {
#line 1375 "post_typecheck.m"
      check_hlds__post_typecheck__OldNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__post_typecheck__OldGoalInfo_24);
    }
#line 1376 "post_typecheck.m"
    {
#line 1376 "post_typecheck.m"
      check_hlds__post_typecheck__NonLocalArgs_40 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__VarsAfterField_37);
    }
#line 4353 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1377 "post_typecheck.m"
    {
#line 1377 "post_typecheck.m"
      parse_tree__set_of_var__insert_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_87_87, check_hlds__post_typecheck__NonLocalArgs_40, check_hlds__post_typecheck__OldNonLocals_39, &check_hlds__post_typecheck__DeconstructRestrictNonLocals_41);
    }
#line 1381 "post_typecheck.m"
    {
#line 1381 "post_typecheck.m"
      check_hlds__post_typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId0_27));
#line 1381 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1381 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 2) = ((MR_Box) (check_hlds__post_typecheck__DeconstructArgs_38));
#line 1381 "post_typecheck.m"
    }
#line 1383 "post_typecheck.m"
    {
#line 1383 "post_typecheck.m"
      check_hlds__post_typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_70_70, 0) = ((MR_Box) (check_hlds__post_typecheck__TermInputVar_22));
#line 1383 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_70_70, 1) = ((MR_Box) (check_hlds__post_typecheck__DeconstructArgs_38));
#line 1383 "post_typecheck.m"
    }
#line 1380 "post_typecheck.m"
    {
#line 1380 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermInputVar_22, check_hlds__post_typecheck__V_69_69, check_hlds__post_typecheck__OldGoalInfo_24, check_hlds__post_typecheck__DeconstructRestrictNonLocals_41, check_hlds__post_typecheck__V_70_70, check_hlds__post_typecheck__UnifyContext_20, &check_hlds__post_typecheck__DeconstructGoal_42);
    }
#line 1386 "post_typecheck.m"
    {
#line 1386 "post_typecheck.m"
      check_hlds__post_typecheck__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_21));
#line 1386 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_37));
#line 1386 "post_typecheck.m"
    }
#line 1386 "post_typecheck.m"
    {
#line 1386 "post_typecheck.m"
      check_hlds__post_typecheck__ConstructArgs_43 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__V_72_72);
    }
#line 1387 "post_typecheck.m"
    {
#line 1387 "post_typecheck.m"
      parse_tree__set_of_var__insert_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_87_87, check_hlds__post_typecheck__NonLocalArgs_40, check_hlds__post_typecheck__OldNonLocals_39, &check_hlds__post_typecheck__ConstructRestrictNonLocals_44);
    }
#line 1395 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ExistQVars_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1394 "post_typecheck.m"
      check_hlds__post_typecheck__ConsId_45 = check_hlds__post_typecheck__ConsId0_27;
#line 1395 "post_typecheck.m"
    else
#line 1400 "post_typecheck.m"
      {
#line 1400 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConsName0_48;
#line 1400 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__ConsArity_49;
#line 1400 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtor_50;

#line 1397 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1397 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1397 "post_typecheck.m"
          {
#line 1397 "post_typecheck.m"
            check_hlds__post_typecheck__ConsName0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 1)));
#line 1397 "post_typecheck.m"
            check_hlds__post_typecheck__ConsArity_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 2)));
#line 1397 "post_typecheck.m"
            check_hlds__post_typecheck__TypeCtor_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 3)));
#line 1398 "post_typecheck.m"
            {
#line 1398 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__ConsName_51;

#line 1398 "post_typecheck.m"
              {
#line 1398 "post_typecheck.m"
                parse_tree__prog_type__add_new_prefix_2_p_0(check_hlds__post_typecheck__ConsName0_48, &check_hlds__post_typecheck__ConsName_51);
              }
#line 1399 "post_typecheck.m"
              {
#line 1399 "post_typecheck.m"
                check_hlds__post_typecheck__ConsId_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1399 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 1) = ((MR_Box) (check_hlds__post_typecheck__ConsName_51));
#line 1399 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 2) = ((MR_Box) (check_hlds__post_typecheck__ConsArity_49));
#line 1399 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtor_50));
#line 1399 "post_typecheck.m"
              }
#line 1398 "post_typecheck.m"
            }
#line 1397 "post_typecheck.m"
          }
#line 1397 "post_typecheck.m"
        else
#line 1401 "post_typecheck.m"
          {
#line 1401 "post_typecheck.m"
            {
#line 1401 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.translate_set_function\'/14", (MR_String) "invalid cons_id");
#line 1401 "post_typecheck.m"
              return;
            }
#line 1401 "post_typecheck.m"
          }
#line 1400 "post_typecheck.m"
      }
#line 1406 "post_typecheck.m"
    {
#line 1406 "post_typecheck.m"
      check_hlds__post_typecheck__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_45));
#line 1406 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1406 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 2) = ((MR_Box) (check_hlds__post_typecheck__ConstructArgs_43));
#line 1406 "post_typecheck.m"
    }
#line 1407 "post_typecheck.m"
    {
#line 1407 "post_typecheck.m"
      check_hlds__post_typecheck__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_77_77, 0) = ((MR_Box) (check_hlds__post_typecheck__TermOutputVar_23));
#line 1407 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_77_77, 1) = ((MR_Box) (check_hlds__post_typecheck__ConstructArgs_43));
#line 1407 "post_typecheck.m"
    }
#line 1405 "post_typecheck.m"
    {
#line 1405 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermOutputVar_23, check_hlds__post_typecheck__V_76_76, check_hlds__post_typecheck__OldGoalInfo_24, check_hlds__post_typecheck__ConstructRestrictNonLocals_44, check_hlds__post_typecheck__V_77_77, check_hlds__post_typecheck__UnifyContext_20, &check_hlds__post_typecheck__ConstructGoal_52);
    }
#line 1410 "post_typecheck.m"
    {
#line 1410 "post_typecheck.m"
      check_hlds__post_typecheck__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_81_81, 0) = ((MR_Box) (check_hlds__post_typecheck__ConstructGoal_52));
#line 1410 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "post_typecheck.m"
    }
#line 1410 "post_typecheck.m"
    {
#line 1410 "post_typecheck.m"
      check_hlds__post_typecheck__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_80_80, 0) = ((MR_Box) (check_hlds__post_typecheck__DeconstructGoal_42));
#line 1410 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_80_80, 1) = ((MR_Box) (check_hlds__post_typecheck__V_81_81));
#line 1410 "post_typecheck.m"
    }
#line 1410 "post_typecheck.m"
    {
#line 1410 "post_typecheck.m"
      check_hlds__post_typecheck__ConjExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1410 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1410 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 2) = ((MR_Box) (check_hlds__post_typecheck__V_80_80));
#line 1410 "post_typecheck.m"
    }
#line 1411 "post_typecheck.m"
    {
#line 1411 "post_typecheck.m"
      check_hlds__post_typecheck__Conj_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Conj_54, 0) = ((MR_Box) (check_hlds__post_typecheck__ConjExpr_53));
#line 1411 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Conj_54, 1) = ((MR_Box) (check_hlds__post_typecheck__OldGoalInfo_24));
#line 1411 "post_typecheck.m"
    }
#line 1415 "post_typecheck.m"
    {
#line 1415 "post_typecheck.m"
      MR_Word base;
#line 1415 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "post_typecheck.m"
      *check_hlds__post_typecheck__Goal_25 = base;
#line 1415 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1415 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[84])));
#line 1415 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__post_typecheck__Conj_54));
#line 1415 "post_typecheck.m"
    }
#line 1357 "post_typecheck.m"
  }
#line 1350 "post_typecheck.m"
}

#line 1301 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_get_function_13_p_0(
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_14,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45,
#line 1301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47,
#line 1301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49,
#line 1301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_18,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_19,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_20,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_21,
#line 1301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_22,
#line 1301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__GoalExpr_23)
#line 1301 "post_typecheck.m"
{
#line 1307 "post_typecheck.m"
  {
#line 1307 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermType_24;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId_25;
#line 1307 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__FieldNumber_26;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_27;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes0_28;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_29;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_35;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesBeforeField_36;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesAfterField_38;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsBeforeField_39;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsAfterField_40;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgVars_41;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RestrictNonLocals_42;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FunctorGoal_43;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_58_58;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeCtor_70;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_71;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeDefn_72;
#line 1307 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeBody_73;
#line 1335 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 1335 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_37_37;
#line 1348 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_44_44;

#line 1308 "post_typecheck.m"
    {
#line 1308 "post_typecheck.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, check_hlds__post_typecheck__TermInputVar_21, &check_hlds__post_typecheck__TermType_24);
    }
#line 1527 "post_typecheck.m"
    {
#line 1527 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_24, &check_hlds__post_typecheck__TermTypeCtor_70);
    }
#line 1528 "post_typecheck.m"
    {
#line 1528 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_14, &check_hlds__post_typecheck__TypeTable_71);
    }
#line 1529 "post_typecheck.m"
    {
#line 1529 "post_typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_71, check_hlds__post_typecheck__TermTypeCtor_70, &check_hlds__post_typecheck__TermTypeDefn_72);
    }
#line 1530 "post_typecheck.m"
    {
#line 1530 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TermTypeDefn_72, &check_hlds__post_typecheck__TermTypeBody_73);
    }
#line 1536 "post_typecheck.m"
#line 1536 "post_typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__post_typecheck__TermTypeBody_73)) {
#line 1536 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1536 "post_typecheck.m"
      case (MR_Integer) 0:
#line 1541 "post_typecheck.m"
        {
#line 1542 "post_typecheck.m"
          {
#line 1542 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1542 "post_typecheck.m"
            return;
          }
#line 1541 "post_typecheck.m"
        }
#line 1536 "post_typecheck.m"
        break;
#line 1536 "post_typecheck.m"
      case (MR_Integer) 1:
#line 1532 "post_typecheck.m"
        {
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Ctors_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 0)));
#line 1532 "post_typecheck.m"
          MR_String check_hlds__post_typecheck__FieldName_83;
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 1)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 2)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 3)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 4)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 5)));
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1532 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 7)));

#line 1533 "post_typecheck.m"
          {
#line 1533 "post_typecheck.m"
            check_hlds__post_typecheck__FieldName_83 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__FieldName_18);
          }
#line 1534 "post_typecheck.m"
          {
#line 1534 "post_typecheck.m"
            check_hlds__post_typecheck__get_constructor_containing_field_2_5_p_0(check_hlds__post_typecheck__TermTypeCtor_70, check_hlds__post_typecheck__Ctors_74, check_hlds__post_typecheck__FieldName_83, &check_hlds__post_typecheck__ConsId_25, &check_hlds__post_typecheck__FieldNumber_26);
          }
#line 1532 "post_typecheck.m"
        }
#line 1536 "post_typecheck.m"
        break;
#line 1536 "post_typecheck.m"
      case (MR_Integer) 2:
#line 1541 "post_typecheck.m"
        {
#line 1542 "post_typecheck.m"
          {
#line 1542 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1542 "post_typecheck.m"
            return;
          }
#line 1541 "post_typecheck.m"
        }
#line 1536 "post_typecheck.m"
        break;
#line 1536 "post_typecheck.m"
      case (MR_Integer) 3:
#line 1541 "post_typecheck.m"
        {
#line 1542 "post_typecheck.m"
          {
#line 1542 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1542 "post_typecheck.m"
            return;
          }
#line 1541 "post_typecheck.m"
        }
#line 1536 "post_typecheck.m"
        break;
#line 1536 "post_typecheck.m"
    }
#line 1312 "post_typecheck.m"
    {
#line 1312 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_22);
    }
#line 1313 "post_typecheck.m"
    {
#line 1313 "post_typecheck.m"
      check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(check_hlds__post_typecheck__ModuleInfo_14, check_hlds__post_typecheck__GoalId_27, check_hlds__post_typecheck__ConsId_25, check_hlds__post_typecheck__TermType_24, &check_hlds__post_typecheck__ArgTypes0_28, &check_hlds__post_typecheck__ExistQVars_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46);
    }
#line 1330 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ExistQVars_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1332 "post_typecheck.m"
      check_hlds__post_typecheck__ArgTypes_35 = check_hlds__post_typecheck__ArgTypes0_28;
#line 1330 "post_typecheck.m"
    else
#line 1325 "post_typecheck.m"
      {
#line 1325 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldType_32;
#line 1325 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldArgType_33;
#line 1325 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldSubst_34;
#line 1327 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv0_FieldArgType_33;

#line 1326 "post_typecheck.m"
        {
#line 1326 "post_typecheck.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, check_hlds__post_typecheck__FieldVar_20, &check_hlds__post_typecheck__FieldType_32);
        }
#line 1327 "post_typecheck.m"
        {
#line 1327 "post_typecheck.m"
          mercury__list__det_index1_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__ArgTypes0_28, check_hlds__post_typecheck__FieldNumber_26, &check_hlds__post_typecheck__conv0_FieldArgType_33);
        }
#line 1327 "post_typecheck.m"
        check_hlds__post_typecheck__FieldArgType_33 = ((MR_Word) check_hlds__post_typecheck__conv0_FieldArgType_33);
#line 1328 "post_typecheck.m"
        {
#line 1328 "post_typecheck.m"
          parse_tree__prog_type__type_subsumes_det_3_p_0(check_hlds__post_typecheck__FieldArgType_33, check_hlds__post_typecheck__FieldType_32, &check_hlds__post_typecheck__FieldSubst_34);
        }
#line 1329 "post_typecheck.m"
        {
#line 1329 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__post_typecheck__FieldSubst_34, check_hlds__post_typecheck__ArgTypes0_28, &check_hlds__post_typecheck__ArgTypes_35);
        }
#line 1325 "post_typecheck.m"
      }
#line 1335 "post_typecheck.m"
    {
#line 1335 "post_typecheck.m"
      check_hlds__post_typecheck__split_list_at_index_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__FieldNumber_26, check_hlds__post_typecheck__ArgTypes_35, &check_hlds__post_typecheck__TypesBeforeField_36, &check_hlds__post_typecheck__conv1_V_37_37, &check_hlds__post_typecheck__TypesAfterField_38);
    }
#line 1335 "post_typecheck.m"
    check_hlds__post_typecheck__V_37_37 = ((MR_Word) check_hlds__post_typecheck__conv1_V_37_37);
#line 1338 "post_typecheck.m"
    {
#line 1338 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesBeforeField_36, &check_hlds__post_typecheck__VarsBeforeField_39, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53);
    }
#line 1339 "post_typecheck.m"
    {
#line 1339 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesAfterField_38, &check_hlds__post_typecheck__VarsAfterField_40, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50);
    }
#line 1341 "post_typecheck.m"
    {
#line 1341 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_20));
#line 1341 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_40));
#line 1341 "post_typecheck.m"
    }
#line 1341 "post_typecheck.m"
    {
#line 1341 "post_typecheck.m"
      check_hlds__post_typecheck__ArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[1], check_hlds__post_typecheck__VarsBeforeField_39, check_hlds__post_typecheck__V_56_56);
    }
#line 1343 "post_typecheck.m"
    {
#line 1343 "post_typecheck.m"
      check_hlds__post_typecheck__RestrictNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__post_typecheck__OldGoalInfo_22);
    }
#line 1345 "post_typecheck.m"
    {
#line 1345 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_25));
#line 1345 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1345 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_41));
#line 1345 "post_typecheck.m"
    }
#line 1346 "post_typecheck.m"
    {
#line 1346 "post_typecheck.m"
      check_hlds__post_typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__post_typecheck__TermInputVar_21));
#line 1346 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1346 "post_typecheck.m"
    }
#line 1346 "post_typecheck.m"
    {
#line 1346 "post_typecheck.m"
      check_hlds__post_typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_20));
#line 1346 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 1) = ((MR_Box) (check_hlds__post_typecheck__V_60_60));
#line 1346 "post_typecheck.m"
    }
#line 1344 "post_typecheck.m"
    {
#line 1344 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermInputVar_21, check_hlds__post_typecheck__V_57_57, check_hlds__post_typecheck__OldGoalInfo_22, check_hlds__post_typecheck__RestrictNonLocals_42, check_hlds__post_typecheck__V_58_58, check_hlds__post_typecheck__UnifyContext_19, &check_hlds__post_typecheck__FunctorGoal_43);
    }
#line 1348 "post_typecheck.m"
    *check_hlds__post_typecheck__GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FunctorGoal_43, (MR_Integer) 0)));
#line 1348 "post_typecheck.m"
    check_hlds__post_typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FunctorGoal_43, (MR_Integer) 1)));
#line 1307 "post_typecheck.m"
  }
#line 1301 "post_typecheck.m"
}

#line 1279 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__finish_field_access_function_14_p_0(
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29,
#line 1279 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31,
#line 1279 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33,
#line 1279 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__AccessType_19,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_20,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_21,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_22,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args_23,
#line 1279 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo_24,
#line 1279 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__14_14)
#line 1279 "post_typecheck.m"
{
#line 1287 "post_typecheck.m"
  {
#line 1287 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1287 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr_25;

#line 1293 "post_typecheck.m"
#line 1293 "post_typecheck.m"
    switch (check_hlds__post_typecheck__AccessType_19) {
#line 1293 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1293 "post_typecheck.m"
      case (MR_Integer) 0:
#line 1289 "post_typecheck.m"
        {
#line 1289 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TermVar_26;

#line 1290 "post_typecheck.m"
          {
#line 1290 "post_typecheck.m"
            hlds__hlds_pred__field_extraction_function_args_2_p_0(check_hlds__post_typecheck__Args_23, &check_hlds__post_typecheck__TermVar_26);
          }
#line 1291 "post_typecheck.m"
          {
#line 1291 "post_typecheck.m"
            check_hlds__post_typecheck__translate_get_function_13_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34, check_hlds__post_typecheck__FieldName_20, check_hlds__post_typecheck__UnifyContext_21, check_hlds__post_typecheck__Var_22, check_hlds__post_typecheck__TermVar_26, check_hlds__post_typecheck__GoalInfo_24, &check_hlds__post_typecheck__GoalExpr_25);
          }
#line 1289 "post_typecheck.m"
        }
#line 1293 "post_typecheck.m"
        break;
#line 1293 "post_typecheck.m"
      case (MR_Integer) 1:
#line 1294 "post_typecheck.m"
        {
#line 1294 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TermInputVar_27;
#line 1294 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__FieldVar_28;

#line 1295 "post_typecheck.m"
          {
#line 1295 "post_typecheck.m"
            hlds__hlds_pred__field_update_function_args_3_p_0(check_hlds__post_typecheck__Args_23, &check_hlds__post_typecheck__TermInputVar_27, &check_hlds__post_typecheck__FieldVar_28);
          }
#line 1296 "post_typecheck.m"
          {
#line 1296 "post_typecheck.m"
            check_hlds__post_typecheck__translate_set_function_14_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34, check_hlds__post_typecheck__FieldName_20, check_hlds__post_typecheck__UnifyContext_21, check_hlds__post_typecheck__FieldVar_28, check_hlds__post_typecheck__TermInputVar_27, check_hlds__post_typecheck__Var_22, check_hlds__post_typecheck__GoalInfo_24, &check_hlds__post_typecheck__GoalExpr_25);
          }
#line 1294 "post_typecheck.m"
        }
#line 1293 "post_typecheck.m"
        break;
#line 1293 "post_typecheck.m"
    }
#line 1287 "post_typecheck.m"
    {
#line 1287 "post_typecheck.m"
      MR_Word base;
#line 1287 "post_typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1287 "post_typecheck.m"
      *check_hlds__post_typecheck__HeadVar__14_14 = base;
#line 1287 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_25));
#line 1287 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo_24));
#line 1287 "post_typecheck.m"
    }
#line 1287 "post_typecheck.m"
  }
#line 1279 "post_typecheck.m"
}

#line 1265 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0_1(
#line 1265 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1265 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 1265 "post_typecheck.m"
{
#line 1265 "post_typecheck.m"
  {
#line 1265 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 1265 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1265 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__2_32;

#line 1265 "post_typecheck.m"
    {
#line 1265 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_HeadVar__2_32 = check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1265__1_1_f_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 1265 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__2_32));
#line 1265 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 1265 "post_typecheck.m"
  }
#line 1265 "post_typecheck.m"
}

#line 1249 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0(
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_7,
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_8,
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_9,
#line 1249 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_10)
#line 1249 "post_typecheck.m"
{
#line 1252 "post_typecheck.m"
  {
#line 1252 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_37_37;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_38_38;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtor_11;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsTable_12;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsDefn_13;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsExistQVars_18;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgs_20;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_22;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeDefn_23;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTVarSet_24;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeKindMap_25;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgTypes_26;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_28;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadTypeParams_29;
#line 1252 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_30_30;
#line 1258 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_14_14;
#line 1258 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_15_15;
#line 1258 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_16_16;
#line 1258 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_17_17;
#line 1258 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 1258 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;

#line 1253 "post_typecheck.m"
    {
#line 1253 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__post_typecheck__Type_9, &check_hlds__post_typecheck__TypeCtor_11);
    }
#line 1252 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1252 "post_typecheck.m"
      {
#line 1254 "post_typecheck.m"
        {
#line 1254 "post_typecheck.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__ConsTable_12);
        }
#line 1255 "post_typecheck.m"
        {
#line 1255 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__post_typecheck__ConsTable_12, check_hlds__post_typecheck__TypeCtor_11, check_hlds__post_typecheck__ConsId_8, &check_hlds__post_typecheck__ConsDefn_13);
        }
#line 1252 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1252 "post_typecheck.m"
          {
#line 1258 "post_typecheck.m"
            check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 0)));
#line 1258 "post_typecheck.m"
            check_hlds__post_typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 1)));
#line 1258 "post_typecheck.m"
            check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 2)));
#line 1258 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 3)));
#line 1258 "post_typecheck.m"
            check_hlds__post_typecheck__ConsExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 4)));
#line 1258 "post_typecheck.m"
            check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 5)));
#line 1258 "post_typecheck.m"
            check_hlds__post_typecheck__ConsArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 6)));
#line 1258 "post_typecheck.m"
            check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 7)));
#line 1260 "post_typecheck.m"
            {
#line 1260 "post_typecheck.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__TypeTable_22);
            }
#line 1261 "post_typecheck.m"
            {
#line 1261 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_22, check_hlds__post_typecheck__TypeCtor_11, &check_hlds__post_typecheck__TypeDefn_23);
            }
#line 1252 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1252 "post_typecheck.m"
              {
#line 1262 "post_typecheck.m"
                {
#line 1262 "post_typecheck.m"
                  hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeTVarSet_24);
                }
#line 1263 "post_typecheck.m"
                {
#line 1263 "post_typecheck.m"
                  hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeKindMap_25);
                }
#line 5174 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 5176 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1265 "post_typecheck.m"
                check_hlds__post_typecheck__V_30_30 = (MR_Word) &check_hlds__post_typecheck_scalar_common_2[6];
#line 1265 "post_typecheck.m"
                {
#line 1265 "post_typecheck.m"
                  check_hlds__post_typecheck__ConsArgTypes_26 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_37_37, check_hlds__post_typecheck__TypeCtorInfo_38_38, check_hlds__post_typecheck__V_30_30, check_hlds__post_typecheck__ConsArgs_20);
                }
#line 1267 "post_typecheck.m"
                check_hlds__post_typecheck__ExistQVars_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1268 "post_typecheck.m"
                check_hlds__post_typecheck__HeadTypeParams_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1269 "post_typecheck.m"
                {
#line 1269 "post_typecheck.m"
                  return check_hlds__post_typecheck__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(check_hlds__post_typecheck__TVarSet_7, check_hlds__post_typecheck__ExistQVars_28, check_hlds__post_typecheck__ArgTypes_10, check_hlds__post_typecheck__HeadTypeParams_29, check_hlds__post_typecheck__TypeTVarSet_24, check_hlds__post_typecheck__TypeKindMap_25, check_hlds__post_typecheck__ConsExistQVars_18, check_hlds__post_typecheck__ConsArgTypes_26);
                }
#line 1252 "post_typecheck.m"
              }
#line 1252 "post_typecheck.m"
          }
#line 1252 "post_typecheck.m"
      }
#line 1252 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 1252 "post_typecheck.m"
  }
#line 1249 "post_typecheck.m"
}

#line 986 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 986 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId1_3,
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__4_4,
#line 986 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__5_5,
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6,
#line 986 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7,
#line 986 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8,
#line 986 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_9)
#line 986 "post_typecheck.m"
{
#line 991 "post_typecheck.m"
  while (MR_TRUE)
#line 991 "post_typecheck.m"
    {
#line 991 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 991 "post_typecheck.m"
      {
#line 991 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 991 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 991 "post_typecheck.m"
          {
#line 991 "post_typecheck.m"
            *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 0;
#line 991 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8;
#line 991 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6;
#line 991 "post_typecheck.m"
          }
#line 991 "post_typecheck.m"
        else
#line 993 "post_typecheck.m"
          {
#line 993 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 993 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, (MR_Integer) 1)));

#line 994 "post_typecheck.m"
            {
#line 994 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = check_hlds__modecheck_call__modes_are_indistinguishable_4_p_0(check_hlds__post_typecheck__ProcId_22, check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, check_hlds__post_typecheck__ModuleInfo_1);
            }
#line 1026 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 995 "post_typecheck.m"
              {
#line 995 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Status_27;
#line 995 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Globals_28;
#line 995 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IntermodOpt_29;
#line 995 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IntermodAnalysis_30;
#line 995 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__MakeOptInt_31;

#line 995 "post_typecheck.m"
                {
#line 995 "post_typecheck.m"
                  hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, &check_hlds__post_typecheck__Status_27);
                }
#line 996 "post_typecheck.m"
                {
#line 996 "post_typecheck.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__post_typecheck__ModuleInfo_1, &check_hlds__post_typecheck__Globals_28);
                }
#line 997 "post_typecheck.m"
                {
#line 997 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 330, &check_hlds__post_typecheck__IntermodOpt_29);
                }
#line 999 "post_typecheck.m"
                {
#line 999 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 335, &check_hlds__post_typecheck__IntermodAnalysis_30);
                }
#line 1001 "post_typecheck.m"
                {
#line 1001 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 87, &check_hlds__post_typecheck__MakeOptInt_31);
                }
#line 1008 "post_typecheck.m"
                {
#line 1008 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_40_40;

#line 1008 "post_typecheck.m"
                  {
#line 1008 "post_typecheck.m"
                    check_hlds__post_typecheck__V_40_40 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__post_typecheck__Status_27);
                  }
#line 1008 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_40_40 == (MR_Integer) 1);
#line 1008 "post_typecheck.m"
                }
#line 1009 "post_typecheck.m"
                if (!(check_hlds__post_typecheck__succeeded))
#line 1009 "post_typecheck.m"
                  {
#line 1010 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__IntermodOpt_29 == (MR_Integer) 0);
#line 1010 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1011 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__IntermodAnalysis_30 == (MR_Integer) 0);
#line 1009 "post_typecheck.m"
                    if (!(check_hlds__post_typecheck__succeeded))
#line 1013 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__MakeOptInt_31 == (MR_Integer) 1);
#line 1009 "post_typecheck.m"
                  }
#line 1021 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1019 "post_typecheck.m"
                  {
#line 1019 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Spec_32;

#line 1018 "post_typecheck.m"
                    {
#line 1018 "post_typecheck.m"
                      check_hlds__post_typecheck__Spec_32 = check_hlds__mode_errors__report_indistinguishable_modes_error_5_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__ProcId_22, check_hlds__post_typecheck__PredId_2, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6);
                    }
#line 1020 "post_typecheck.m"
                    {
#line 1020 "post_typecheck.m"
                      MR_Word base;
#line 1020 "post_typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "post_typecheck.m"
                      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = base;
#line 1020 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_32));
#line 1020 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8));
#line 1020 "post_typecheck.m"
                    }
#line 1019 "post_typecheck.m"
                  }
#line 1021 "post_typecheck.m"
                else
#line 1021 "post_typecheck.m"
                  *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8;
#line 1024 "post_typecheck.m"
                {
#line 1024 "post_typecheck.m"
                  hlds__hlds_pred__pred_info_remove_procid_3_p_0(check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7);
                }
#line 1025 "post_typecheck.m"
                *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 1;
#line 995 "post_typecheck.m"
              }
#line 1026 "post_typecheck.m"
            else
#line 1027 "post_typecheck.m"
              {
#line 1027 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1027 "post_typecheck.m"
                {
#line 1027 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__4__tmp_copy_4 = check_hlds__post_typecheck__ProcIds_23;

#line 1027 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__4_4 = check_hlds__post_typecheck__HeadVar__4__tmp_copy_4;
#line 1027 "post_typecheck.m"
                }
#line 1027 "post_typecheck.m"
                continue;
#line 1027 "post_typecheck.m"
              }
#line 993 "post_typecheck.m"
          }
#line 991 "post_typecheck.m"
      }
#line 991 "post_typecheck.m"
      break;
#line 991 "post_typecheck.m"
    }
#line 986 "post_typecheck.m"
}

#line 966 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PrevProcIds_4,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5,
#line 966 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6,
#line 966 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7,
#line 966 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_8)
#line 966 "post_typecheck.m"
{
#line 971 "post_typecheck.m"
  while (MR_TRUE)
#line 971 "post_typecheck.m"
    {
#line 971 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 971 "post_typecheck.m"
      {
#line 971 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 971 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "post_typecheck.m"
          {
#line 971 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Specs_8 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7;
#line 971 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5;
#line 971 "post_typecheck.m"
          }
#line 971 "post_typecheck.m"
        else
#line 973 "post_typecheck.m"
          {
#line 973 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 973 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 973 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Removed_25;
#line 973 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PrevProcIds1_26;
#line 973 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31;
#line 973 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32;

#line 974 "post_typecheck.m"
            {
#line 974 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__PredId_2, check_hlds__post_typecheck__ProcId_20, check_hlds__post_typecheck__PrevProcIds_4, &check_hlds__post_typecheck__Removed_25, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32);
            }
#line 979 "post_typecheck.m"
#line 979 "post_typecheck.m"
            switch (check_hlds__post_typecheck__Removed_25) {
#line 979 "post_typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 979 "post_typecheck.m"
              case (MR_Integer) 0:
#line 981 "post_typecheck.m"
                {
#line 981 "post_typecheck.m"
                  check_hlds__post_typecheck__PrevProcIds1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PrevProcIds1_26, 0) = ((MR_Box) (check_hlds__post_typecheck__ProcId_20));
#line 981 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PrevProcIds1_26, 1) = ((MR_Box) (check_hlds__post_typecheck__PrevProcIds_4));
#line 981 "post_typecheck.m"
                }
#line 979 "post_typecheck.m"
                break;
#line 979 "post_typecheck.m"
              case (MR_Integer) 1:
#line 978 "post_typecheck.m"
                check_hlds__post_typecheck__PrevProcIds1_26 = check_hlds__post_typecheck__PrevProcIds_4;
#line 979 "post_typecheck.m"
                break;
#line 979 "post_typecheck.m"
            }
#line 983 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 983 "post_typecheck.m"
            {
#line 983 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__3__tmp_copy_3 = check_hlds__post_typecheck__ProcIds_21;
#line 983 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PrevProcIds__tmp_copy_4 = check_hlds__post_typecheck__PrevProcIds1_26;
#line 983 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0__tmp_copy_5 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31;
#line 983 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32;

#line 983 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 983 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0__tmp_copy_5;
#line 983 "post_typecheck.m"
              check_hlds__post_typecheck__PrevProcIds_4 = check_hlds__post_typecheck__PrevProcIds__tmp_copy_4;
#line 983 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__3_3 = check_hlds__post_typecheck__HeadVar__3__tmp_copy_3;
#line 983 "post_typecheck.m"
            }
#line 983 "post_typecheck.m"
            continue;
#line 973 "post_typecheck.m"
          }
#line 971 "post_typecheck.m"
      }
#line 971 "post_typecheck.m"
      break;
#line 971 "post_typecheck.m"
    }
#line 966 "post_typecheck.m"
}

#line 923 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
#line 923 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 923 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 923 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId_10,
#line 923 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Procs0_11,
#line 923 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Procs_12,
#line 923 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20,
#line 923 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_21)
#line 923 "post_typecheck.m"
{
#line 928 "post_typecheck.m"
  {
#line 928 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_61_61;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcInfo_14;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_16;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_17;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_18;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_33_33;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_51_51;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_52_52;
#line 928 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 929 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_ProcInfo_14;
#line 940 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 940 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_19_19;

#line 929 "post_typecheck.m"
    {
#line 929 "post_typecheck.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_60_60, check_hlds__post_typecheck__Procs0_11, check_hlds__post_typecheck__ProcId_10, &check_hlds__post_typecheck__conv0_ProcInfo_14);
    }
#line 929 "post_typecheck.m"
    check_hlds__post_typecheck__ProcInfo_14 = ((MR_Word) check_hlds__post_typecheck__conv0_ProcInfo_14);
#line 930 "post_typecheck.m"
    {
#line 930 "post_typecheck.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__post_typecheck__ProcInfo_14, &check_hlds__post_typecheck__Context_15);
    }
#line 5601 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 932 "post_typecheck.m"
    {
#line 932 "post_typecheck.m"
      check_hlds__post_typecheck__V_33_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_8, (MR_Integer) 1, check_hlds__post_typecheck__PredId_9);
    }
#line 933 "post_typecheck.m"
    {
#line 933 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_61_61, check_hlds__post_typecheck__V_33_33, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[54]));
    }
#line 931 "post_typecheck.m"
    {
#line 931 "post_typecheck.m"
      check_hlds__post_typecheck__Pieces_16 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_61_61, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[47]), check_hlds__post_typecheck__V_32_32);
    }
#line 936 "post_typecheck.m"
    {
#line 936 "post_typecheck.m"
      check_hlds__post_typecheck__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 936 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_52_52, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_16));
#line 936 "post_typecheck.m"
    }
#line 936 "post_typecheck.m"
    {
#line 936 "post_typecheck.m"
      check_hlds__post_typecheck__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_51_51, 0) = ((MR_Box) (check_hlds__post_typecheck__V_52_52));
#line 936 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "post_typecheck.m"
    }
#line 936 "post_typecheck.m"
    {
#line 936 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_15));
#line 936 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_51_51));
#line 936 "post_typecheck.m"
    }
#line 937 "post_typecheck.m"
    {
#line 937 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_17));
#line 937 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 937 "post_typecheck.m"
    }
#line 937 "post_typecheck.m"
    {
#line 937 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 937 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 937 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 937 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 2) = ((MR_Box) (check_hlds__post_typecheck__V_56_56));
#line 937 "post_typecheck.m"
    }
#line 938 "post_typecheck.m"
    {
#line 938 "post_typecheck.m"
      MR_Word base;
#line 938 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_21 = base;
#line 938 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_18));
#line 938 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20));
#line 938 "post_typecheck.m"
    }
#line 940 "post_typecheck.m"
    {
#line 940 "post_typecheck.m"
      mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__TypeCtorInfo_60_60, ((MR_Box) (check_hlds__post_typecheck__ProcId_10)), &check_hlds__post_typecheck__conv1_V_19_19, check_hlds__post_typecheck__Procs0_11, check_hlds__post_typecheck__Procs_12);
    }
#line 940 "post_typecheck.m"
    check_hlds__post_typecheck__V_19_19 = ((MR_Word) check_hlds__post_typecheck__conv1_V_19_19);
#line 928 "post_typecheck.m"
  }
#line 923 "post_typecheck.m"
}

#line 918 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 918 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 918 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5)
#line 918 "post_typecheck.m"
{
#line 918 "post_typecheck.m"
  {
#line 918 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 918 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_Procs_12;
#line 918 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21;

#line 918 "post_typecheck.m"
    {
#line 918 "post_typecheck.m"
      check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv1_Procs_12, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_4), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21);
    }
#line 918 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv1_Procs_12));
#line 918 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21));
#line 918 "post_typecheck.m"
  }
#line 918 "post_typecheck.m"
}

#line 907 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ErrorProcIds_10,
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17,
#line 907 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18,
#line 907 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 907 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20)
#line 907 "post_typecheck.m"
{
#line 914 "post_typecheck.m"
  {
#line 914 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 914 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ErrorProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "post_typecheck.m"
      {
#line 914 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17;
#line 914 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 914 "post_typecheck.m"
      }
#line 914 "post_typecheck.m"
    else
#line 916 "post_typecheck.m"
      {
#line 916 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProcTable0_15;
#line 916 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProcTable_16;
#line 916 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_21_21;
#line 918 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv3_ProcTable_16;
#line 918 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20;

#line 917 "post_typecheck.m"
        {
#line 917 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17, &check_hlds__post_typecheck__ProcTable0_15);
        }
#line 918 "post_typecheck.m"
        {
#line 918 "post_typecheck.m"
          check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 918 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
#line 918 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1));
#line 918 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 918 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 3) = ((MR_Box) (check_hlds__post_typecheck__ModuleInfo_8));
#line 918 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 4) = ((MR_Box) (check_hlds__post_typecheck__PredId_9));
#line 918 "post_typecheck.m"
        }
#line 918 "post_typecheck.m"
        {
#line 918 "post_typecheck.m"
          mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[3], (MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], check_hlds__post_typecheck__V_21_21, check_hlds__post_typecheck__ErrorProcIds_10, ((MR_Box) (check_hlds__post_typecheck__ProcTable0_15)), &check_hlds__post_typecheck__conv3_ProcTable_16, ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19)), &check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20);
        }
#line 918 "post_typecheck.m"
        check_hlds__post_typecheck__ProcTable_16 = ((MR_Word) check_hlds__post_typecheck__conv3_ProcTable_16);
#line 918 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = ((MR_Word) check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20);
#line 920 "post_typecheck.m"
        {
#line 920 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__ProcTable_16, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18);
#line 920 "post_typecheck.m"
          return;
        }
#line 916 "post_typecheck.m"
      }
#line 914 "post_typecheck.m"
  }
#line 907 "post_typecheck.m"
}

#line 898 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
#line 898 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 898 "post_typecheck.m"
{
#line 898 "post_typecheck.m"
  {
#line 898 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 898 "post_typecheck.m"
    MR_builtin_longjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0, 1);
#line 898 "post_typecheck.m"
  }
#line 898 "post_typecheck.m"
}

#line 898 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
#line 898 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 898 "post_typecheck.m"
{
#line 898 "post_typecheck.m"
  {
#line 898 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 898 "post_typecheck.m"
    if (MR_builtin_setjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0) == 0)
#line 898 "post_typecheck.m"
      {
#line 898 "post_typecheck.m"
        {
#line 898 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck___InstVar_25;

#line 898 "post_typecheck.m"
          {
#line 898 "post_typecheck.m"
            check_hlds__inst_match__mode_list_contains_inst_var_3_p_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1, &check_hlds__post_typecheck___InstVar_25, check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1, check_hlds__post_typecheck__env_ptr);
          }
#line 898 "post_typecheck.m"
        }
#line 898 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_FALSE;
#line 898 "post_typecheck.m"
      }
#line 898 "post_typecheck.m"
    else
#line 898 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_TRUE;
#line 898 "post_typecheck.m"
  }
#line 898 "post_typecheck.m"
}

#line 883 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_3,
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4,
#line 883 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5,
#line 883 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6,
#line 883 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Procs_7)
#line 883 "post_typecheck.m"
{
#line 883 "post_typecheck.m"
  {
#line 883 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s check_hlds__post_typecheck__env;

#line 883 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1 = check_hlds__post_typecheck__ModuleInfo_1;
#line 887 "post_typecheck.m"
    while (MR_TRUE)
#line 887 "post_typecheck.m"
      {
#line 887 "post_typecheck.m"
        /* tailcall optimized into a loop */
#line 887 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 887 "post_typecheck.m"
          {
#line 887 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Procs_7 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6;
#line 887 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4;
#line 887 "post_typecheck.m"
          }
#line 887 "post_typecheck.m"
        else
#line 889 "post_typecheck.m"
          {
#line 889 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 889 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 889 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 889 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcInfo0_22;
#line 889 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgModes0_23;
#line 889 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31;
#line 889 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32;
#line 890 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv0_ProcInfo0_22;

#line 890 "post_typecheck.m"
            {
#line 890 "post_typecheck.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_36_36, check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6, check_hlds__post_typecheck__ProcId_17, &check_hlds__post_typecheck__conv0_ProcInfo0_22);
            }
#line 890 "post_typecheck.m"
            check_hlds__post_typecheck__ProcInfo0_22 = ((MR_Word) check_hlds__post_typecheck__conv0_ProcInfo0_22);
#line 891 "post_typecheck.m"
            {
#line 891 "post_typecheck.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__post_typecheck__ProcInfo0_22, &check_hlds__post_typecheck__ArgModes0_23);
            }
#line 892 "post_typecheck.m"
            {
#line 892 "post_typecheck.m"
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1, check_hlds__post_typecheck__ArgTypes_3, check_hlds__post_typecheck__ArgModes0_23, &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24);
            }
#line 898 "post_typecheck.m"
            {
#line 898 "post_typecheck.m"
              check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(&check_hlds__post_typecheck__env);
            }
#line 900 "post_typecheck.m"
            if ((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded)
#line 899 "post_typecheck.m"
              {
#line 899 "post_typecheck.m"
                {
#line 899 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31, 0) = ((MR_Box) (check_hlds__post_typecheck__ProcId_17));
#line 899 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4));
#line 899 "post_typecheck.m"
                }
#line 899 "post_typecheck.m"
                check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6;
#line 899 "post_typecheck.m"
              }
#line 900 "post_typecheck.m"
            else
#line 901 "post_typecheck.m"
              {
#line 901 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ProcInfo_26;

#line 901 "post_typecheck.m"
                {
#line 901 "post_typecheck.m"
                  hlds__hlds_pred__proc_info_set_argmodes_3_p_0((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, check_hlds__post_typecheck__ProcInfo0_22, &check_hlds__post_typecheck__ProcInfo_26);
                }
#line 902 "post_typecheck.m"
                {
#line 902 "post_typecheck.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__post_typecheck__TypeCtorInfo_36_36, check_hlds__post_typecheck__ProcId_17, ((MR_Box) (check_hlds__post_typecheck__ProcInfo_26)), check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6, &check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32);
                }
#line 901 "post_typecheck.m"
                check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4;
#line 901 "post_typecheck.m"
              }
#line 904 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 904 "post_typecheck.m"
            {
#line 904 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__ProcIds_18;
#line 904 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31;
#line 904 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0__tmp_copy_6 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32;

#line 904 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0__tmp_copy_6;
#line 904 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0__tmp_copy_4;
#line 904 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 904 "post_typecheck.m"
            }
#line 904 "post_typecheck.m"
            continue;
#line 889 "post_typecheck.m"
          }
#line 887 "post_typecheck.m"
        break;
#line 887 "post_typecheck.m"
      }
#line 883 "post_typecheck.m"
  }
#line 883 "post_typecheck.m"
}

#line 834 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
#line 834 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 834 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13,
#line 834 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_14)
#line 834 "post_typecheck.m"
{
#line 860 "post_typecheck.m"
  {
#line 860 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 840 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_15_15;
#line 840 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_16_16;

#line 840 "post_typecheck.m"
    {
#line 840 "post_typecheck.m"
      check_hlds__post_typecheck__V_15_15 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PredInfo_4);
    }
#line 840 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__V_15_15, (MR_String) "main") == 0);
#line 840 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 840 "post_typecheck.m"
      {
#line 841 "post_typecheck.m"
        {
#line 841 "post_typecheck.m"
          check_hlds__post_typecheck__V_16_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__PredInfo_4);
        }
#line 841 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_16_16 == (MR_Integer) 2);
#line 840 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 842 "post_typecheck.m"
          {
#line 842 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__post_typecheck__PredInfo_4);
          }
#line 840 "post_typecheck.m"
      }
#line 860 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 845 "post_typecheck.m"
      {
#line 845 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_6;
#line 847 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Arg1_7;
#line 847 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Arg2_8;
#line 847 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_17_17;
#line 847 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_18_18;

#line 845 "post_typecheck.m"
        {
#line 845 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ArgTypes_6);
        }
#line 847 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ArgTypes_6)) == (MR_mktag((MR_Integer) 1)));
#line 847 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 847 "post_typecheck.m"
          {
#line 847 "post_typecheck.m"
            check_hlds__post_typecheck__Arg1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgTypes_6, (MR_Integer) 0)));
#line 847 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgTypes_6, (MR_Integer) 1)));
#line 847 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 847 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 847 "post_typecheck.m"
              {
#line 847 "post_typecheck.m"
                check_hlds__post_typecheck__Arg2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, (MR_Integer) 0)));
#line 847 "post_typecheck.m"
                check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, (MR_Integer) 1)));
#line 847 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 847 "post_typecheck.m"
                  {
#line 848 "post_typecheck.m"
                    {
#line 848 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(check_hlds__post_typecheck__Arg1_7);
                    }
#line 847 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 849 "post_typecheck.m"
                      {
#line 849 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(check_hlds__post_typecheck__Arg2_8);
                      }
#line 847 "post_typecheck.m"
                  }
#line 847 "post_typecheck.m"
              }
#line 847 "post_typecheck.m"
          }
#line 852 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 852 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13;
#line 852 "post_typecheck.m"
        else
#line 853 "post_typecheck.m"
          {
#line 853 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Context_9;
#line 853 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Msg_11;
#line 853 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Spec_12;
#line 853 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_38_38;

#line 853 "post_typecheck.m"
            {
#line 853 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__Context_9);
            }
#line 856 "post_typecheck.m"
            {
#line 856 "post_typecheck.m"
              check_hlds__post_typecheck__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 856 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_11, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_9));
#line 856 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[83])));
#line 856 "post_typecheck.m"
            }
#line 857 "post_typecheck.m"
            {
#line 857 "post_typecheck.m"
              check_hlds__post_typecheck__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_38_38, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_11));
#line 857 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "post_typecheck.m"
            }
#line 857 "post_typecheck.m"
            {
#line 857 "post_typecheck.m"
              check_hlds__post_typecheck__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 857 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 857 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 2) = ((MR_Box) (check_hlds__post_typecheck__V_38_38));
#line 857 "post_typecheck.m"
            }
#line 858 "post_typecheck.m"
            {
#line 858 "post_typecheck.m"
              MR_Word base;
#line 858 "post_typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = base;
#line 858 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_12));
#line 858 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13));
#line 858 "post_typecheck.m"
            }
#line 853 "post_typecheck.m"
          }
#line 845 "post_typecheck.m"
      }
#line 860 "post_typecheck.m"
    else
#line 860 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13;
#line 860 "post_typecheck.m"
  }
#line 834 "post_typecheck.m"
}

#line 813 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_7,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IdPieces_8,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 813 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16)
#line 813 "post_typecheck.m"
{
#line 817 "post_typecheck.m"
  {
#line 817 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_62_62;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ModuleName_10;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__MainPieces_11;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msgs_13;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_14;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_17_17;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_20_20;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_31_31;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_35_35;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_51_51;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_58_58;
#line 817 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_59_59;

#line 818 "post_typecheck.m"
    {
#line 818 "post_typecheck.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__ModuleName_10);
    }
#line 6288 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 820 "post_typecheck.m"
    {
#line 820 "post_typecheck.m"
      check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 820 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__post_typecheck__ModuleName_10));
#line 820 "post_typecheck.m"
    }
#line 820 "post_typecheck.m"
    {
#line 820 "post_typecheck.m"
      check_hlds__post_typecheck__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_20_20, 0) = ((MR_Box) (check_hlds__post_typecheck__V_21_21));
#line 820 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[31])));
#line 820 "post_typecheck.m"
    }
#line 820 "post_typecheck.m"
    {
#line 820 "post_typecheck.m"
      check_hlds__post_typecheck__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[79])));
#line 820 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_20_20));
#line 820 "post_typecheck.m"
    }
#line 823 "post_typecheck.m"
    {
#line 823 "post_typecheck.m"
      check_hlds__post_typecheck__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_21_21));
#line 823 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])));
#line 823 "post_typecheck.m"
    }
#line 822 "post_typecheck.m"
    {
#line 822 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[80])));
#line 822 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_32_32, 1) = ((MR_Box) (check_hlds__post_typecheck__V_35_35));
#line 822 "post_typecheck.m"
    }
#line 821 "post_typecheck.m"
    {
#line 821 "post_typecheck.m"
      check_hlds__post_typecheck__V_31_31 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_62_62, check_hlds__post_typecheck__IdPieces_8, check_hlds__post_typecheck__V_32_32);
    }
#line 821 "post_typecheck.m"
    {
#line 821 "post_typecheck.m"
      check_hlds__post_typecheck__MainPieces_11 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_62_62, check_hlds__post_typecheck__V_17_17, check_hlds__post_typecheck__V_31_31);
    }
#line 827 "post_typecheck.m"
    {
#line 827 "post_typecheck.m"
      check_hlds__post_typecheck__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 827 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_51_51, 0) = ((MR_Box) (check_hlds__post_typecheck__MainPieces_11));
#line 827 "post_typecheck.m"
    }
#line 827 "post_typecheck.m"
    {
#line 827 "post_typecheck.m"
      check_hlds__post_typecheck__Msgs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msgs_13, 0) = ((MR_Box) (check_hlds__post_typecheck__V_51_51));
#line 827 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msgs_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[82])));
#line 827 "post_typecheck.m"
    }
#line 829 "post_typecheck.m"
    {
#line 829 "post_typecheck.m"
      check_hlds__post_typecheck__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 829 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_59_59, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_7));
#line 829 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_59_59, 1) = ((MR_Box) (check_hlds__post_typecheck__Msgs_13));
#line 829 "post_typecheck.m"
    }
#line 829 "post_typecheck.m"
    {
#line 829 "post_typecheck.m"
      check_hlds__post_typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__post_typecheck__V_59_59));
#line 829 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 829 "post_typecheck.m"
    }
#line 828 "post_typecheck.m"
    {
#line 828 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 828 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 828 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 2) = ((MR_Box) (check_hlds__post_typecheck__V_58_58));
#line 828 "post_typecheck.m"
    }
#line 830 "post_typecheck.m"
    {
#line 830 "post_typecheck.m"
      MR_Word base;
#line 830 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_16 = base;
#line 830 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_14));
#line 830 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15));
#line 830 "post_typecheck.m"
    }
#line 817 "post_typecheck.m"
  }
#line 813 "post_typecheck.m"
}

#line 803 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_list_5_p_0(
#line 803 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 803 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 803 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 803 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4,
#line 803 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_5)
#line 803 "post_typecheck.m"
{
#line 806 "post_typecheck.m"
  while (MR_TRUE)
#line 806 "post_typecheck.m"
    {
#line 806 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 806 "post_typecheck.m"
      {
#line 806 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 806 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_5 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4;
#line 806 "post_typecheck.m"
        else
#line 807 "post_typecheck.m"
          {
#line 807 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 807 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goal0s_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 807 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18;

#line 808 "post_typecheck.m"
            {
#line 808 "post_typecheck.m"
              check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__HeadVar__1_1, check_hlds__post_typecheck__HeadVar__2_2, check_hlds__post_typecheck__Goal0_13, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18);
            }
#line 809 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 809 "post_typecheck.m"
            {
#line 809 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__3__tmp_copy_3 = check_hlds__post_typecheck__Goal0s_14;
#line 809 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18;

#line 809 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 809 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__3_3 = check_hlds__post_typecheck__HeadVar__3__tmp_copy_3;
#line 809 "post_typecheck.m"
            }
#line 809 "post_typecheck.m"
            continue;
#line 807 "post_typecheck.m"
          }
#line 806 "post_typecheck.m"
      }
#line 806 "post_typecheck.m"
      break;
#line 806 "post_typecheck.m"
    }
#line 803 "post_typecheck.m"
}

#line 770 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_unify_rhs_7_p_0(
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_10,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_11,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 770 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36,
#line 770 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_37)
#line 770 "post_typecheck.m"
{
#line 777 "post_typecheck.m"
  {
#line 777 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 777 "post_typecheck.m"
#line 777 "post_typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__post_typecheck__RHS_10)) {
#line 777 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "post_typecheck.m"
      case (MR_Integer) 0:
#line 777 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_37 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36;
#line 777 "post_typecheck.m"
        break;
#line 777 "post_typecheck.m"
      case (MR_Integer) 1:
#line 779 "post_typecheck.m"
        {
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_10, (MR_Integer) 0)));
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesInfo_18;
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__VarTypes_19;
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Type_20;
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TypeCtor_21;
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TypeTable_22;
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TypeDefn_23;
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TypeStatus_24;
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__DefinedInImpl_25;
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_10, (MR_Integer) 1)));
#line 779 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_10, (MR_Integer) 2)));

#line 780 "post_typecheck.m"
          {
#line 780 "post_typecheck.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__ClausesInfo_18);
          }
#line 781 "post_typecheck.m"
          {
#line 781 "post_typecheck.m"
            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo_18, &check_hlds__post_typecheck__VarTypes_19);
          }
#line 782 "post_typecheck.m"
          {
#line 782 "post_typecheck.m"
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__VarTypes_19, check_hlds__post_typecheck__Var_11, &check_hlds__post_typecheck__Type_20);
          }
#line 783 "post_typecheck.m"
          {
#line 783 "post_typecheck.m"
            parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__Type_20, &check_hlds__post_typecheck__TypeCtor_21);
          }
#line 784 "post_typecheck.m"
          {
#line 784 "post_typecheck.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__TypeTable_22);
          }
#line 785 "post_typecheck.m"
          {
#line 785 "post_typecheck.m"
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_22, check_hlds__post_typecheck__TypeCtor_21, &check_hlds__post_typecheck__TypeDefn_23);
          }
#line 786 "post_typecheck.m"
          {
#line 786 "post_typecheck.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeStatus_24);
          }
#line 787 "post_typecheck.m"
          {
#line 787 "post_typecheck.m"
            check_hlds__post_typecheck__DefinedInImpl_25 = hlds__status__type_status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__TypeStatus_24);
          }
#line 793 "post_typecheck.m"
#line 793 "post_typecheck.m"
          switch (check_hlds__post_typecheck__DefinedInImpl_25) {
#line 793 "post_typecheck.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 793 "post_typecheck.m"
            case (MR_Integer) 0:
#line 794 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_37 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36;
#line 793 "post_typecheck.m"
              break;
#line 793 "post_typecheck.m"
            case (MR_Integer) 1:
#line 789 "post_typecheck.m"
              {
#line 789 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IdPieces_26;
#line 789 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_41_41;
#line 789 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_42_42;

#line 790 "post_typecheck.m"
                {
#line 790 "post_typecheck.m"
                  check_hlds__post_typecheck__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 790 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_42_42, 1) = ((MR_Box) (check_hlds__post_typecheck__ConsId_15));
#line 790 "post_typecheck.m"
                }
#line 790 "post_typecheck.m"
                {
#line 790 "post_typecheck.m"
                  check_hlds__post_typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_41_41, 0) = ((MR_Box) (check_hlds__post_typecheck__V_42_42));
#line 790 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "post_typecheck.m"
                }
#line 790 "post_typecheck.m"
                {
#line 790 "post_typecheck.m"
                  check_hlds__post_typecheck__IdPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[78])));
#line 790 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_26, 1) = ((MR_Box) (check_hlds__post_typecheck__V_41_41));
#line 790 "post_typecheck.m"
                }
#line 791 "post_typecheck.m"
                {
#line 791 "post_typecheck.m"
                  check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__Context_12, check_hlds__post_typecheck__IdPieces_26, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36, check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);
#line 791 "post_typecheck.m"
                  return;
                }
#line 789 "post_typecheck.m"
              }
#line 793 "post_typecheck.m"
              break;
#line 793 "post_typecheck.m"
          }
#line 779 "post_typecheck.m"
        }
#line 777 "post_typecheck.m"
        break;
#line 777 "post_typecheck.m"
      case (MR_Integer) 2:
#line 797 "post_typecheck.m"
        {
#line 797 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 6)));
#line 797 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 797 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 797 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 797 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 2)));
#line 797 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 3)));
#line 797 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 4)));
#line 797 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 5)));

#line 798 "post_typecheck.m"
          {
#line 798 "post_typecheck.m"
            check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredInfo_9, check_hlds__post_typecheck__Goal_35, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36, check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);
#line 798 "post_typecheck.m"
            return;
          }
#line 797 "post_typecheck.m"
        }
#line 777 "post_typecheck.m"
        break;
#line 777 "post_typecheck.m"
    }
#line 777 "post_typecheck.m"
  }
#line 770 "post_typecheck.m"
}

#line 688 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_5_p_0(
#line 688 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 688 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_7,
#line 688 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_8,
#line 688 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64,
#line 688 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_65)
#line 688 "post_typecheck.m"
{
#line 691 "post_typecheck.m"
  while (MR_TRUE)
#line 691 "post_typecheck.m"
    {
#line 691 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 691 "post_typecheck.m"
      {
#line 691 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;
#line 691 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_8, (MR_Integer) 0)));
#line 691 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_8, (MR_Integer) 1)));

#line 708 "post_typecheck.m"
#line 708 "post_typecheck.m"
        switch (MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) {
#line 708 "post_typecheck.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 708 "post_typecheck.m"
          case (MR_Integer) 0:
#line 742 "post_typecheck.m"
            {
#line 742 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__SubGoal_47 = (MR_Word) MR_body(((MR_Word) check_hlds__post_typecheck__GoalExpr_10), (MR_Integer) 0);

#line 743 "post_typecheck.m"
              /* direct tailcall eliminated */
#line 743 "post_typecheck.m"
              {
#line 743 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_47;

#line 743 "post_typecheck.m"
                check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 743 "post_typecheck.m"
              }
#line 743 "post_typecheck.m"
              continue;
#line 742 "post_typecheck.m"
            }
#line 708 "post_typecheck.m"
            break;
#line 708 "post_typecheck.m"
          case (MR_Integer) 1:
#line 711 "post_typecheck.m"
            {
#line 711 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)));
#line 711 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__RHS_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 711 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Context_92;
#line 711 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 711 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 711 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));

#line 712 "post_typecheck.m"
              {
#line 712 "post_typecheck.m"
                check_hlds__post_typecheck__Context_92 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
              }
#line 713 "post_typecheck.m"
              {
#line 713 "post_typecheck.m"
                check_hlds__post_typecheck__in_interface_check_unify_rhs_7_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__RHS_30, check_hlds__post_typecheck__Var_29, check_hlds__post_typecheck__Context_92, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 713 "post_typecheck.m"
                return;
              }
#line 711 "post_typecheck.m"
            }
#line 708 "post_typecheck.m"
            break;
#line 708 "post_typecheck.m"
          case (MR_Integer) 2:
#line 694 "post_typecheck.m"
            {
#line 694 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)));
#line 694 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 5)));
#line 694 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__CallPredInfo_18;
#line 694 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PredStatus_19;
#line 694 "post_typecheck.m"
              MR_Integer check_hlds__post_typecheck__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 694 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 694 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 694 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_87_87;

#line 695 "post_typecheck.m"
              {
#line 695 "post_typecheck.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredId_12, &check_hlds__post_typecheck__CallPredInfo_18);
              }
#line 696 "post_typecheck.m"
              {
#line 696 "post_typecheck.m"
                hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__post_typecheck__CallPredInfo_18, &check_hlds__post_typecheck__PredStatus_19);
              }
#line 697 "post_typecheck.m"
              {
#line 697 "post_typecheck.m"
                check_hlds__post_typecheck__V_87_87 = hlds__status__pred_status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__PredStatus_19);
              }
#line 697 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_87_87 == (MR_Integer) 1);
#line 705 "post_typecheck.m"
              if (check_hlds__post_typecheck__succeeded)
#line 698 "post_typecheck.m"
                {
#line 698 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Context_20;
#line 698 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__PredOrFunc_21;
#line 698 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__Arity_22;
#line 698 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__IdPieces_23;
#line 698 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_88_88;
#line 698 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_89_89;

#line 698 "post_typecheck.m"
                  {
#line 698 "post_typecheck.m"
                    check_hlds__post_typecheck__Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
                  }
#line 699 "post_typecheck.m"
                  {
#line 699 "post_typecheck.m"
                    check_hlds__post_typecheck__PredOrFunc_21 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__post_typecheck__CallPredInfo_18);
                  }
#line 700 "post_typecheck.m"
                  {
#line 700 "post_typecheck.m"
                    check_hlds__post_typecheck__Arity_22 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__CallPredInfo_18);
                  }
#line 702 "post_typecheck.m"
                  {
#line 702 "post_typecheck.m"
                    check_hlds__post_typecheck__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 702 "post_typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_89_89, 0) = ((MR_Box) (check_hlds__post_typecheck__PredOrFunc_21));
#line 702 "post_typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_89_89, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_17));
#line 702 "post_typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_89_89, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_22));
#line 702 "post_typecheck.m"
                  }
#line 702 "post_typecheck.m"
                  {
#line 702 "post_typecheck.m"
                    check_hlds__post_typecheck__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "post_typecheck.m"
                    MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 702 "post_typecheck.m"
                    MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_88_88, 1) = ((MR_Box) (check_hlds__post_typecheck__V_89_89));
#line 702 "post_typecheck.m"
                  }
#line 702 "post_typecheck.m"
                  {
#line 702 "post_typecheck.m"
                    check_hlds__post_typecheck__IdPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "post_typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_23, 0) = ((MR_Box) (check_hlds__post_typecheck__V_88_88));
#line 702 "post_typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "post_typecheck.m"
                  }
#line 703 "post_typecheck.m"
                  {
#line 703 "post_typecheck.m"
                    check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__Context_20, check_hlds__post_typecheck__IdPieces_23, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 703 "post_typecheck.m"
                    return;
                  }
#line 698 "post_typecheck.m"
                }
#line 705 "post_typecheck.m"
              else
#line 705 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_Specs_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64;
#line 694 "post_typecheck.m"
            }
#line 708 "post_typecheck.m"
            break;
#line 708 "post_typecheck.m"
          case (MR_Integer) 3:
#line 708 "post_typecheck.m"
#line 708 "post_typecheck.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) {
#line 708 "post_typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 708 "post_typecheck.m"
              case (MR_Integer) 0:
#line 709 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_Specs_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64;
#line 708 "post_typecheck.m"
                break;
#line 708 "post_typecheck.m"
              case (MR_Integer) 1:
#line 716 "post_typecheck.m"
                {
#line 716 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__PragmaPredInfo_40;
#line 716 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__PredId_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 716 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__PredStatus_105;
#line 716 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 716 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 716 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));
#line 716 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 5)));
#line 716 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 6)));
#line 716 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 7)));
#line 719 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_81_81;

#line 717 "post_typecheck.m"
                  {
#line 717 "post_typecheck.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredId_103, &check_hlds__post_typecheck__PragmaPredInfo_40);
                  }
#line 718 "post_typecheck.m"
                  {
#line 718 "post_typecheck.m"
                    hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__post_typecheck__PragmaPredInfo_40, &check_hlds__post_typecheck__PredStatus_105);
                  }
#line 719 "post_typecheck.m"
                  {
#line 719 "post_typecheck.m"
                    check_hlds__post_typecheck__V_81_81 = hlds__status__pred_status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__PredStatus_105);
                  }
#line 719 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_81_81 == (MR_Integer) 1);
#line 729 "post_typecheck.m"
                  if (check_hlds__post_typecheck__succeeded)
#line 720 "post_typecheck.m"
                    {
#line 720 "post_typecheck.m"
                      MR_String check_hlds__post_typecheck__Name_41;
#line 720 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__V_82_82;
#line 720 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__V_83_83;
#line 720 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__SymName_93;
#line 720 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__Context_94;
#line 720 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__PredOrFunc_95;
#line 720 "post_typecheck.m"
                      MR_Integer check_hlds__post_typecheck__Arity_96;
#line 720 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__IdPieces_97;

#line 720 "post_typecheck.m"
                      {
#line 720 "post_typecheck.m"
                        check_hlds__post_typecheck__Context_94 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
                      }
#line 721 "post_typecheck.m"
                      {
#line 721 "post_typecheck.m"
                        check_hlds__post_typecheck__PredOrFunc_95 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_40);
                      }
#line 722 "post_typecheck.m"
                      {
#line 722 "post_typecheck.m"
                        check_hlds__post_typecheck__Name_41 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_40);
                      }
#line 723 "post_typecheck.m"
                      {
#line 723 "post_typecheck.m"
                        check_hlds__post_typecheck__SymName_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 723 "post_typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__SymName_93, 0) = ((MR_Box) (check_hlds__post_typecheck__Name_41));
#line 723 "post_typecheck.m"
                      }
#line 724 "post_typecheck.m"
                      {
#line 724 "post_typecheck.m"
                        check_hlds__post_typecheck__Arity_96 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_40);
                      }
#line 726 "post_typecheck.m"
                      {
#line 726 "post_typecheck.m"
                        check_hlds__post_typecheck__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 726 "post_typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 0) = ((MR_Box) (check_hlds__post_typecheck__PredOrFunc_95));
#line 726 "post_typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_93));
#line 726 "post_typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_96));
#line 726 "post_typecheck.m"
                      }
#line 726 "post_typecheck.m"
                      {
#line 726 "post_typecheck.m"
                        check_hlds__post_typecheck__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "post_typecheck.m"
                        MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 726 "post_typecheck.m"
                        MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_82_82, 1) = ((MR_Box) (check_hlds__post_typecheck__V_83_83));
#line 726 "post_typecheck.m"
                      }
#line 726 "post_typecheck.m"
                      {
#line 726 "post_typecheck.m"
                        check_hlds__post_typecheck__IdPieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "post_typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_97, 0) = ((MR_Box) (check_hlds__post_typecheck__V_82_82));
#line 726 "post_typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "post_typecheck.m"
                      }
#line 727 "post_typecheck.m"
                      {
#line 727 "post_typecheck.m"
                        check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__Context_94, check_hlds__post_typecheck__IdPieces_97, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 727 "post_typecheck.m"
                        return;
                      }
#line 720 "post_typecheck.m"
                    }
#line 729 "post_typecheck.m"
                  else
#line 729 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_Specs_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64;
#line 716 "post_typecheck.m"
                }
#line 708 "post_typecheck.m"
                break;
#line 708 "post_typecheck.m"
              case (MR_Integer) 2:
#line 733 "post_typecheck.m"
                {
#line 733 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Goals_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 733 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 734 "post_typecheck.m"
                  {
#line 734 "post_typecheck.m"
                    check_hlds__post_typecheck__in_interface_check_list_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Goals_43, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 734 "post_typecheck.m"
                    return;
                  }
#line 733 "post_typecheck.m"
                }
#line 708 "post_typecheck.m"
                break;
#line 708 "post_typecheck.m"
              case (MR_Integer) 3:
#line 739 "post_typecheck.m"
                {
#line 739 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Goals_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 740 "post_typecheck.m"
                  {
#line 740 "post_typecheck.m"
                    check_hlds__post_typecheck__in_interface_check_list_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Goals_110, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 740 "post_typecheck.m"
                    return;
                  }
#line 739 "post_typecheck.m"
                }
#line 708 "post_typecheck.m"
                break;
#line 708 "post_typecheck.m"
              case (MR_Integer) 4:
#line 736 "post_typecheck.m"
                {
#line 737 "post_typecheck.m"
                  {
#line 737 "post_typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.in_interface_check\'/5", (MR_String) "assertion contains switch");
#line 737 "post_typecheck.m"
                    return;
                  }
#line 736 "post_typecheck.m"
                }
#line 708 "post_typecheck.m"
                break;
#line 708 "post_typecheck.m"
              case (MR_Integer) 5:
#line 745 "post_typecheck.m"
                {
#line 745 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__SubGoal_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 745 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 746 "post_typecheck.m"
                  /* direct tailcall eliminated */
#line 746 "post_typecheck.m"
                  {
#line 746 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_111;

#line 746 "post_typecheck.m"
                    check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 746 "post_typecheck.m"
                  }
#line 746 "post_typecheck.m"
                  continue;
#line 745 "post_typecheck.m"
                }
#line 708 "post_typecheck.m"
                break;
#line 708 "post_typecheck.m"
              case (MR_Integer) 6:
#line 748 "post_typecheck.m"
                {
#line 748 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Cond_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 748 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Then_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 748 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Else_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));
#line 748 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_71_71;
#line 748 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72;
#line 748 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 749 "post_typecheck.m"
                  {
#line 749 "post_typecheck.m"
                    check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Cond_50, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_71_71);
                  }
#line 750 "post_typecheck.m"
                  {
#line 750 "post_typecheck.m"
                    check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Then_51, check_hlds__post_typecheck__STATE_VARIABLE_Specs_71_71, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72);
                  }
#line 751 "post_typecheck.m"
                  /* direct tailcall eliminated */
#line 751 "post_typecheck.m"
                  {
#line 751 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__Else_52;
#line 751 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_64 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72;

#line 751 "post_typecheck.m"
                    check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_64;
#line 751 "post_typecheck.m"
                    check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 751 "post_typecheck.m"
                  }
#line 751 "post_typecheck.m"
                  continue;
#line 748 "post_typecheck.m"
                }
#line 708 "post_typecheck.m"
                break;
#line 708 "post_typecheck.m"
              case (MR_Integer) 7:
#line 753 "post_typecheck.m"
                {
#line 753 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__ShortHand_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 758 "post_typecheck.m"
#line 758 "post_typecheck.m"
                  switch (MR_tag((MR_Word) check_hlds__post_typecheck__ShortHand_53)) {
#line 758 "post_typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 758 "post_typecheck.m"
                    case (MR_Integer) 0:
#line 762 "post_typecheck.m"
                      {
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__LHS_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 0)));
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_66_66;
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__RHS_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 1)));

#line 763 "post_typecheck.m"
                        {
#line 763 "post_typecheck.m"
                          check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__LHS_63, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_66_66);
                        }
#line 764 "post_typecheck.m"
                        /* direct tailcall eliminated */
#line 764 "post_typecheck.m"
                        {
#line 764 "post_typecheck.m"
                          MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__RHS_113;
#line 764 "post_typecheck.m"
                          MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_64 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_66_66;

#line 764 "post_typecheck.m"
                          check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_64;
#line 764 "post_typecheck.m"
                          check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 764 "post_typecheck.m"
                        }
#line 764 "post_typecheck.m"
                        continue;
#line 762 "post_typecheck.m"
                      }
#line 758 "post_typecheck.m"
                      break;
#line 758 "post_typecheck.m"
                    case (MR_Integer) 1:
#line 755 "post_typecheck.m"
                      {
#line 755 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__MainGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 4)));
#line 755 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__OrElseGoals_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 5)));
#line 755 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_69_69;
#line 755 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 0)));
#line 755 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 1)));
#line 755 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 2)));
#line 755 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 3)));
#line 755 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 6)));

#line 756 "post_typecheck.m"
                        {
#line 756 "post_typecheck.m"
                          check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__MainGoal_58, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_69_69);
                        }
#line 757 "post_typecheck.m"
                        {
#line 757 "post_typecheck.m"
                          check_hlds__post_typecheck__in_interface_check_list_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__OrElseGoals_59, check_hlds__post_typecheck__STATE_VARIABLE_Specs_69_69, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 757 "post_typecheck.m"
                          return;
                        }
#line 755 "post_typecheck.m"
                      }
#line 758 "post_typecheck.m"
                      break;
#line 758 "post_typecheck.m"
                    case (MR_Integer) 2:
#line 759 "post_typecheck.m"
                      {
#line 759 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__SubGoal_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 2)));
#line 759 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 0)));
#line 759 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 1)));

#line 760 "post_typecheck.m"
                        /* direct tailcall eliminated */
#line 760 "post_typecheck.m"
                        {
#line 760 "post_typecheck.m"
                          MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_112;

#line 760 "post_typecheck.m"
                          check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 760 "post_typecheck.m"
                        }
#line 760 "post_typecheck.m"
                        continue;
#line 759 "post_typecheck.m"
                      }
#line 758 "post_typecheck.m"
                      break;
#line 758 "post_typecheck.m"
                  }
#line 753 "post_typecheck.m"
                }
#line 708 "post_typecheck.m"
                break;
#line 708 "post_typecheck.m"
            }
#line 708 "post_typecheck.m"
            break;
#line 708 "post_typecheck.m"
        }
#line 691 "post_typecheck.m"
      }
#line 691 "post_typecheck.m"
      break;
#line 691 "post_typecheck.m"
    }
#line 688 "post_typecheck.m"
}

#line 547 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
#line 547 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_5,
#line 547 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_6,
#line 547 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3)
#line 547 "post_typecheck.m"
{
#line 550 "post_typecheck.m"
  {
#line 550 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 550 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__4_4;
#line 550 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 550 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 550 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_9_9;
#line 550 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_10_10;
#line 550 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_12_12;
#line 550 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_15_15;
#line 550 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_16_16;
#line 550 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_17_17;

#line 551 "post_typecheck.m"
    {
#line 551 "post_typecheck.m"
      check_hlds__post_typecheck__V_10_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__VarSet_5, (MR_Integer) 0, check_hlds__post_typecheck__Var_7);
    }
#line 551 "post_typecheck.m"
    {
#line 551 "post_typecheck.m"
      check_hlds__post_typecheck__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 551 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_9_9, 1) = ((MR_Box) (check_hlds__post_typecheck__V_10_10));
#line 551 "post_typecheck.m"
    }
#line 552 "post_typecheck.m"
    {
#line 552 "post_typecheck.m"
      check_hlds__post_typecheck__V_17_17 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__post_typecheck__TVarSet_6, (MR_Integer) 0, check_hlds__post_typecheck__Type_8);
    }
#line 552 "post_typecheck.m"
    {
#line 552 "post_typecheck.m"
      check_hlds__post_typecheck__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 552 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_17_17));
#line 552 "post_typecheck.m"
    }
#line 552 "post_typecheck.m"
    {
#line 552 "post_typecheck.m"
      check_hlds__post_typecheck__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_15_15, 0) = ((MR_Box) (check_hlds__post_typecheck__V_16_16));
#line 552 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])));
#line 552 "post_typecheck.m"
    }
#line 551 "post_typecheck.m"
    {
#line 551 "post_typecheck.m"
      check_hlds__post_typecheck__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61])));
#line 551 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, 1) = ((MR_Box) (check_hlds__post_typecheck__V_15_15));
#line 551 "post_typecheck.m"
    }
#line 551 "post_typecheck.m"
    {
#line 551 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__post_typecheck__V_9_9));
#line 551 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, 1) = ((MR_Box) (check_hlds__post_typecheck__V_12_12));
#line 551 "post_typecheck.m"
    }
#line 550 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__4_4;
#line 550 "post_typecheck.m"
  }
#line 547 "post_typecheck.m"
}

#line 518 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
#line 518 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 518 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 518 "post_typecheck.m"
{
#line 518 "post_typecheck.m"
  {
#line 518 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 518 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 518 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__4_4;

#line 518 "post_typecheck.m"
    {
#line 518 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_HeadVar__4_4 = check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 518 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__4_4));
#line 518 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 518 "post_typecheck.m"
  }
#line 518 "post_typecheck.m"
}

#line 506 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_10,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_11,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Errs_12,
#line 506 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24,
#line 506 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_25)
#line 506 "post_typecheck.m"
{
#line 511 "post_typecheck.m"
  {
#line 511 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_117_117;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_121_121;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_122_122;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeVarSet_14;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdPieces_16;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypePieceLists_17;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypePieces_18;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__MainPieces_19;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_21;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_23;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_27_27;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_33_33;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_39_39;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_42_42;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_44_44;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_45_45;
#line 511 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_46_46;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_53_53;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_54_54;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61;
#line 511 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_62_62;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_98_98;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_99_99;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_102_102;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_103_103;
#line 511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_114_114;
#line 522 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_46_46;
#line 527 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv2_V_62_62;

#line 512 "post_typecheck.m"
    {
#line 512 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__PredInfo_10, &check_hlds__post_typecheck__TypeVarSet_14);
    }
#line 513 "post_typecheck.m"
    {
#line 513 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_10, &check_hlds__post_typecheck__Context_15);
    }
#line 516 "post_typecheck.m"
    {
#line 516 "post_typecheck.m"
      check_hlds__post_typecheck__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_8, (MR_Integer) 1, check_hlds__post_typecheck__PredId_9);
    }
#line 7571 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_117_117 = (MR_Word) &check_hlds__post_typecheck_scalar_common_2[1];
#line 518 "post_typecheck.m"
    {
#line 518 "post_typecheck.m"
      check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[2]));
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1));
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 3) = ((MR_Box) (check_hlds__post_typecheck__VarSet_11));
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 4) = ((MR_Box) (check_hlds__post_typecheck__TypeVarSet_14));
#line 518 "post_typecheck.m"
    }
#line 518 "post_typecheck.m"
    {
#line 518 "post_typecheck.m"
      check_hlds__post_typecheck__VarTypePieceLists_17 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeInfo_117_117, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[3], check_hlds__post_typecheck__V_27_27, check_hlds__post_typecheck__Errs_12);
    }
#line 7594 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 519 "post_typecheck.m"
    {
#line 519 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__VarTypePieceLists_17, &check_hlds__post_typecheck__VarTypePieces_18);
    }
#line 7601 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 522 "post_typecheck.m"
    {
#line 522 "post_typecheck.m"
      check_hlds__post_typecheck__conv1_V_46_46 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeInfo_117_117, check_hlds__post_typecheck__TypeCtorInfo_122_122, check_hlds__post_typecheck__Errs_12, ((MR_Box) ((MR_String) "The variable with an unbound type was:")), ((MR_Box) ((MR_String) "The variables with unbound types were:")));
    }
#line 522 "post_typecheck.m"
    check_hlds__post_typecheck__V_46_46 = ((MR_String) check_hlds__post_typecheck__conv1_V_46_46);
#line 522 "post_typecheck.m"
    {
#line 522 "post_typecheck.m"
      check_hlds__post_typecheck__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 522 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_45_45, 1) = ((MR_Box) (check_hlds__post_typecheck__V_46_46));
#line 522 "post_typecheck.m"
    }
#line 524 "post_typecheck.m"
    {
#line 524 "post_typecheck.m"
      check_hlds__post_typecheck__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_44_44, 0) = ((MR_Box) (check_hlds__post_typecheck__V_45_45));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[63])));
#line 524 "post_typecheck.m"
    }
#line 521 "post_typecheck.m"
    {
#line 521 "post_typecheck.m"
      check_hlds__post_typecheck__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_42_42, 1) = ((MR_Box) (check_hlds__post_typecheck__V_44_44));
#line 521 "post_typecheck.m"
    }
#line 521 "post_typecheck.m"
    {
#line 521 "post_typecheck.m"
      check_hlds__post_typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[74])));
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 1) = ((MR_Box) (check_hlds__post_typecheck__V_42_42));
#line 521 "post_typecheck.m"
    }
#line 520 "post_typecheck.m"
    {
#line 520 "post_typecheck.m"
      check_hlds__post_typecheck__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 520 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 1) = ((MR_Box) (check_hlds__post_typecheck__V_39_39));
#line 520 "post_typecheck.m"
    }
#line 520 "post_typecheck.m"
    {
#line 520 "post_typecheck.m"
      check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61])));
#line 520 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (check_hlds__post_typecheck__V_37_37));
#line 520 "post_typecheck.m"
    }
#line 527 "post_typecheck.m"
    {
#line 527 "post_typecheck.m"
      check_hlds__post_typecheck__conv2_V_62_62 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeInfo_117_117, check_hlds__post_typecheck__TypeCtorInfo_122_122, check_hlds__post_typecheck__Errs_12, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
#line 527 "post_typecheck.m"
    check_hlds__post_typecheck__V_62_62 = ((MR_String) check_hlds__post_typecheck__conv2_V_62_62);
#line 527 "post_typecheck.m"
    {
#line 527 "post_typecheck.m"
      check_hlds__post_typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 527 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_61_61, 1) = ((MR_Box) (check_hlds__post_typecheck__V_62_62));
#line 527 "post_typecheck.m"
    }
#line 527 "post_typecheck.m"
    {
#line 527 "post_typecheck.m"
      check_hlds__post_typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__post_typecheck__V_61_61));
#line 527 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[12])));
#line 527 "post_typecheck.m"
    }
#line 526 "post_typecheck.m"
    {
#line 526 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[75])));
#line 526 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 1) = ((MR_Box) (check_hlds__post_typecheck__V_60_60));
#line 526 "post_typecheck.m"
    }
#line 526 "post_typecheck.m"
    {
#line 526 "post_typecheck.m"
      check_hlds__post_typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[64])));
#line 526 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_54_54, 1) = ((MR_Box) (check_hlds__post_typecheck__V_57_57));
#line 526 "post_typecheck.m"
    }
#line 525 "post_typecheck.m"
    {
#line 525 "post_typecheck.m"
      check_hlds__post_typecheck__V_53_53 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__VarTypePieces_18, check_hlds__post_typecheck__V_54_54);
    }
#line 524 "post_typecheck.m"
    {
#line 524 "post_typecheck.m"
      check_hlds__post_typecheck__V_33_33 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__V_34_34, check_hlds__post_typecheck__V_53_53);
    }
#line 520 "post_typecheck.m"
    {
#line 520 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__PredIdPieces_16, check_hlds__post_typecheck__V_33_33);
    }
#line 520 "post_typecheck.m"
    {
#line 520 "post_typecheck.m"
      check_hlds__post_typecheck__MainPieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[60]), check_hlds__post_typecheck__V_32_32);
    }
#line 541 "post_typecheck.m"
    {
#line 541 "post_typecheck.m"
      check_hlds__post_typecheck__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 541 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_103_103, 0) = ((MR_Box) (check_hlds__post_typecheck__MainPieces_19));
#line 541 "post_typecheck.m"
    }
#line 541 "post_typecheck.m"
    {
#line 541 "post_typecheck.m"
      check_hlds__post_typecheck__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_102_102, 0) = ((MR_Box) (check_hlds__post_typecheck__V_103_103));
#line 541 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[77])));
#line 541 "post_typecheck.m"
    }
#line 540 "post_typecheck.m"
    {
#line 540 "post_typecheck.m"
      check_hlds__post_typecheck__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_99_99, 0) = ((MR_Box) (((MR_Integer) 39 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 540 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_99_99, 1) = ((MR_Box) (check_hlds__post_typecheck__V_102_102));
#line 540 "post_typecheck.m"
    }
#line 541 "post_typecheck.m"
    {
#line 541 "post_typecheck.m"
      check_hlds__post_typecheck__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_98_98, 0) = ((MR_Box) (check_hlds__post_typecheck__V_99_99));
#line 541 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "post_typecheck.m"
    }
#line 539 "post_typecheck.m"
    {
#line 539 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_21, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_15));
#line 539 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_21, 1) = ((MR_Box) (check_hlds__post_typecheck__V_98_98));
#line 539 "post_typecheck.m"
    }
#line 544 "post_typecheck.m"
    {
#line 544 "post_typecheck.m"
      check_hlds__post_typecheck__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_114_114, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_21));
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "post_typecheck.m"
    }
#line 544 "post_typecheck.m"
    {
#line 544 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_3[0])));
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 2) = ((MR_Box) (check_hlds__post_typecheck__V_114_114));
#line 544 "post_typecheck.m"
    }
#line 545 "post_typecheck.m"
    {
#line 545 "post_typecheck.m"
      MR_Word base;
#line 545 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_25 = base;
#line 545 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_23));
#line 545 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24));
#line 545 "post_typecheck.m"
    }
#line 511 "post_typecheck.m"
  }
#line 506 "post_typecheck.m"
}

#line 464 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
#line 464 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_4,
#line 464 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_5)
#line 464 "post_typecheck.m"
{
#line 467 "post_typecheck.m"
  {
#line 467 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 467 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_6;
#line 467 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_5, (MR_Integer) 0)));
#line 468 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_5, (MR_Integer) 1)));

#line 484 "post_typecheck.m"
#line 484 "post_typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) {
#line 484 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 484 "post_typecheck.m"
      case (MR_Integer) 0:
#line 498 "post_typecheck.m"
        {
#line 499 "post_typecheck.m"
          check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
        }
#line 484 "post_typecheck.m"
        break;
#line 484 "post_typecheck.m"
      case (MR_Integer) 1:
#line 498 "post_typecheck.m"
        {
#line 499 "post_typecheck.m"
          check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
        }
#line 484 "post_typecheck.m"
        break;
#line 484 "post_typecheck.m"
      case (MR_Integer) 2:
#line 482 "post_typecheck.m"
        {
#line 482 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)));
#line 482 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__CallPieces_108;
#line 471 "post_typecheck.m"
          MR_Integer check_hlds__post_typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 471 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));
#line 471 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 471 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 471 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));

#line 472 "post_typecheck.m"
          {
#line 472 "post_typecheck.m"
            check_hlds__post_typecheck__CallPieces_108 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_4, (MR_Integer) 0, check_hlds__post_typecheck__PredId_9);
          }
#line 483 "post_typecheck.m"
          {
#line 483 "post_typecheck.m"
            check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "post_typecheck.m"
            MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[69])));
#line 483 "post_typecheck.m"
            MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_108));
#line 483 "post_typecheck.m"
          }
#line 482 "post_typecheck.m"
        }
#line 484 "post_typecheck.m"
        break;
#line 484 "post_typecheck.m"
      case (MR_Integer) 3:
#line 484 "post_typecheck.m"
#line 484 "post_typecheck.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) {
#line 484 "post_typecheck.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 484 "post_typecheck.m"
          case (MR_Integer) 0:
#line 484 "post_typecheck.m"
            {
#line 484 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 485 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));
#line 485 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 485 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 485 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));

#line 484 "post_typecheck.m"
#line 484 "post_typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__post_typecheck__V_127_127)) {
#line 484 "post_typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 484 "post_typecheck.m"
                case (MR_Integer) 0:
#line 485 "post_typecheck.m"
                  {
#line 486 "post_typecheck.m"
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[73]);
#line 485 "post_typecheck.m"
                  }
#line 484 "post_typecheck.m"
                  break;
#line 484 "post_typecheck.m"
                case (MR_Integer) 1:
#line 482 "post_typecheck.m"
                  {
#line 482 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__SimpleCallId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 3)));
#line 482 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_78_78;
#line 482 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__CallPieces_93;
#line 476 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 0)));
#line 476 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 1)));
#line 476 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 2)));

#line 477 "post_typecheck.m"
                    {
#line 477 "post_typecheck.m"
                      check_hlds__post_typecheck__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 477 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_78_78, 1) = ((MR_Box) (check_hlds__post_typecheck__SimpleCallId_24));
#line 477 "post_typecheck.m"
                    }
#line 477 "post_typecheck.m"
                    {
#line 477 "post_typecheck.m"
                      check_hlds__post_typecheck__CallPieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__CallPieces_93, 0) = ((MR_Box) (check_hlds__post_typecheck__V_78_78));
#line 477 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__CallPieces_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "post_typecheck.m"
                    }
#line 483 "post_typecheck.m"
                    {
#line 483 "post_typecheck.m"
                      check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[69])));
#line 483 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_93));
#line 483 "post_typecheck.m"
                    }
#line 482 "post_typecheck.m"
                  }
#line 484 "post_typecheck.m"
                  break;
#line 484 "post_typecheck.m"
                case (MR_Integer) 2:
#line 498 "post_typecheck.m"
                  {
#line 499 "post_typecheck.m"
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
                  }
#line 484 "post_typecheck.m"
                  break;
#line 484 "post_typecheck.m"
                case (MR_Integer) 3:
#line 498 "post_typecheck.m"
                  {
#line 499 "post_typecheck.m"
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
                  }
#line 484 "post_typecheck.m"
                  break;
#line 484 "post_typecheck.m"
              }
#line 484 "post_typecheck.m"
            }
#line 484 "post_typecheck.m"
            break;
#line 484 "post_typecheck.m"
          case (MR_Integer) 1:
#line 482 "post_typecheck.m"
            {
#line 482 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__CallPieces_15;
#line 482 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));
#line 479 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 479 "post_typecheck.m"
              MR_Integer check_hlds__post_typecheck__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 479 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 479 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));
#line 479 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 6)));
#line 479 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 7)));

#line 480 "post_typecheck.m"
              {
#line 480 "post_typecheck.m"
                check_hlds__post_typecheck__CallPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_4, (MR_Integer) 0, check_hlds__post_typecheck__PredId_83);
              }
#line 483 "post_typecheck.m"
              {
#line 483 "post_typecheck.m"
                check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "post_typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[69])));
#line 483 "post_typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_15));
#line 483 "post_typecheck.m"
              }
#line 482 "post_typecheck.m"
            }
#line 484 "post_typecheck.m"
            break;
#line 484 "post_typecheck.m"
          case (MR_Integer) 2:
#line 498 "post_typecheck.m"
            {
#line 499 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
            }
#line 484 "post_typecheck.m"
            break;
#line 484 "post_typecheck.m"
          case (MR_Integer) 3:
#line 498 "post_typecheck.m"
            {
#line 499 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
            }
#line 484 "post_typecheck.m"
            break;
#line 484 "post_typecheck.m"
          case (MR_Integer) 4:
#line 498 "post_typecheck.m"
            {
#line 499 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
            }
#line 484 "post_typecheck.m"
            break;
#line 484 "post_typecheck.m"
          case (MR_Integer) 5:
#line 498 "post_typecheck.m"
            {
#line 499 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
            }
#line 484 "post_typecheck.m"
            break;
#line 484 "post_typecheck.m"
          case (MR_Integer) 6:
#line 498 "post_typecheck.m"
            {
#line 499 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
            }
#line 484 "post_typecheck.m"
            break;
#line 484 "post_typecheck.m"
          case (MR_Integer) 7:
#line 498 "post_typecheck.m"
            {
#line 499 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 498 "post_typecheck.m"
            }
#line 484 "post_typecheck.m"
            break;
#line 484 "post_typecheck.m"
        }
#line 484 "post_typecheck.m"
        break;
#line 484 "post_typecheck.m"
    }
#line 467 "post_typecheck.m"
    return check_hlds__post_typecheck__Pieces_6;
#line 467 "post_typecheck.m"
  }
#line 464 "post_typecheck.m"
}

#line 440 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
#line 440 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 440 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2)
#line 440 "post_typecheck.m"
{
#line 443 "post_typecheck.m"
  {
#line 443 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 443 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__3_3;

#line 443 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 443 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 443 "post_typecheck.m"
    else
#line 444 "post_typecheck.m"
      {
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Msg_8;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Msgs_9;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Words_13;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Suffix_14;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalInfo_17;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Context_18;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_24_24;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_27_27;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_28_28;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_29_29;
#line 444 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_30_30;
#line 458 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_16_16;

#line 449 "post_typecheck.m"
        if ((check_hlds__post_typecheck__Goals_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "post_typecheck.m"
          {
#line 455 "post_typecheck.m"
            {
#line 455 "post_typecheck.m"
              check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
            }
#line 456 "post_typecheck.m"
            check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[66]);
#line 454 "post_typecheck.m"
          }
#line 449 "post_typecheck.m"
        else
#line 449 "post_typecheck.m"
          {
#line 449 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Goals_7, (MR_Integer) 1)));
#line 446 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Goals_7, (MR_Integer) 0)));

#line 449 "post_typecheck.m"
            if ((check_hlds__post_typecheck__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 450 "post_typecheck.m"
              {
#line 451 "post_typecheck.m"
                {
#line 451 "post_typecheck.m"
                  check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
                }
#line 452 "post_typecheck.m"
                check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 450 "post_typecheck.m"
              }
#line 449 "post_typecheck.m"
            else
#line 446 "post_typecheck.m"
              {
#line 447 "post_typecheck.m"
                {
#line 447 "post_typecheck.m"
                  check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
                }
#line 448 "post_typecheck.m"
                check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[68]);
#line 446 "post_typecheck.m"
              }
#line 449 "post_typecheck.m"
          }
#line 458 "post_typecheck.m"
        check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_6, (MR_Integer) 0)));
#line 458 "post_typecheck.m"
        check_hlds__post_typecheck__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_6, (MR_Integer) 1)));
#line 459 "post_typecheck.m"
        {
#line 459 "post_typecheck.m"
          check_hlds__post_typecheck__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_17);
        }
#line 460 "post_typecheck.m"
        {
#line 460 "post_typecheck.m"
          check_hlds__post_typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 460 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_24_24, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_18));
#line 460 "post_typecheck.m"
        }
#line 461 "post_typecheck.m"
        {
#line 461 "post_typecheck.m"
          check_hlds__post_typecheck__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_30_30, 0) = ((MR_Box) (check_hlds__post_typecheck__Suffix_14));
#line 461 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "post_typecheck.m"
        }
#line 461 "post_typecheck.m"
        {
#line 461 "post_typecheck.m"
          check_hlds__post_typecheck__V_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__post_typecheck__Words_13, check_hlds__post_typecheck__V_30_30);
        }
#line 461 "post_typecheck.m"
        {
#line 461 "post_typecheck.m"
          check_hlds__post_typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 461 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_28_28, 0) = ((MR_Box) (check_hlds__post_typecheck__V_29_29));
#line 461 "post_typecheck.m"
        }
#line 461 "post_typecheck.m"
        {
#line 461 "post_typecheck.m"
          check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__post_typecheck__V_28_28));
#line 461 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "post_typecheck.m"
        }
#line 460 "post_typecheck.m"
        {
#line 460 "post_typecheck.m"
          check_hlds__post_typecheck__Msg_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 460 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 0) = ((MR_Box) (check_hlds__post_typecheck__V_24_24));
#line 460 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 1) = ((MR_Box) ((MR_Integer) 1));
#line 460 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 2) = ((MR_Box) ((MR_Integer) 1));
#line 460 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 3) = ((MR_Box) (check_hlds__post_typecheck__V_27_27));
#line 460 "post_typecheck.m"
        }
#line 462 "post_typecheck.m"
        {
#line 462 "post_typecheck.m"
          check_hlds__post_typecheck__Msgs_9 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goals_7);
        }
#line 444 "post_typecheck.m"
        {
#line 444 "post_typecheck.m"
          check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_8));
#line 444 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__post_typecheck__Msgs_9));
#line 444 "post_typecheck.m"
        }
#line 444 "post_typecheck.m"
      }
#line 443 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__3_3;
#line 443 "post_typecheck.m"
  }
#line 440 "post_typecheck.m"
}

#line 427 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 427 "post_typecheck.m"
{
#line 427 "post_typecheck.m"
  {
#line 427 "post_typecheck.m"
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 427 "post_typecheck.m"
    *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_HeadVar__3_25));
#line 427 "post_typecheck.m"
    {
#line 427 "post_typecheck.m"
      ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont)((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr);
#line 427 "post_typecheck.m"
      return;
    }
#line 427 "post_typecheck.m"
  }
#line 427 "post_typecheck.m"
}

#line 427 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
#line 427 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 427 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 427 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 427 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr)
#line 427 "post_typecheck.m"
{
#line 427 "post_typecheck.m"
  {
#line 427 "post_typecheck.m"
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s check_hlds__post_typecheck__env;

#line 427 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1 = check_hlds__post_typecheck__wrapper_arg_1;
#line 427 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont = check_hlds__post_typecheck__cont;
#line 427 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr = check_hlds__post_typecheck__cont_env_ptr;
#line 427 "post_typecheck.m"
    {
#line 427 "post_typecheck.m"
      MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;

#line 427 "post_typecheck.m"
      {
#line 427 "post_typecheck.m"
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__427__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_HeadVar__3_25, check_hlds__post_typecheck__find_constrained_goals_2_f_0_1, &check_hlds__post_typecheck__env);
      }
#line 427 "post_typecheck.m"
    }
#line 427 "post_typecheck.m"
  }
#line 427 "post_typecheck.m"
}

#line 413 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
#line 413 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 413 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_5)
#line 413 "post_typecheck.m"
{
#line 416 "post_typecheck.m"
  {
#line 416 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goals_6;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_28_28;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_29_29;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesInfo_7;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesRep_8;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Clauses_10;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintMap_11;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ReverseConstraintMap_12;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintIdSets_13;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintIds_14;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FindGoals_15;
#line 418 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck___ItemNumbers_9;

#line 417 "post_typecheck.m"
    {
#line 417 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ClausesInfo_7);
    }
#line 418 "post_typecheck.m"
    {
#line 418 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_7, &check_hlds__post_typecheck__ClausesRep_8, &check_hlds__post_typecheck___ItemNumbers_9);
    }
#line 419 "post_typecheck.m"
    {
#line 419 "post_typecheck.m"
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__post_typecheck__ClausesRep_8, &check_hlds__post_typecheck__Clauses_10);
    }
#line 421 "post_typecheck.m"
    {
#line 421 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ConstraintMap_11);
    }
#line 8452 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0;
#line 8454 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 422 "post_typecheck.m"
    {
#line 422 "post_typecheck.m"
      check_hlds__post_typecheck__ReverseConstraintMap_12 = mercury__map__reverse_map_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_28_28, check_hlds__post_typecheck__TypeCtorInfo_29_29, check_hlds__post_typecheck__ConstraintMap_11);
    }
#line 423 "post_typecheck.m"
    {
#line 423 "post_typecheck.m"
      mercury__map__apply_to_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_29_29, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[4], check_hlds__post_typecheck__Constraints_5, check_hlds__post_typecheck__ReverseConstraintMap_12, &check_hlds__post_typecheck__ConstraintIdSets_13);
    }
#line 424 "post_typecheck.m"
    {
#line 424 "post_typecheck.m"
      check_hlds__post_typecheck__ConstraintIds_14 = mercury__set__union_list_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_28_28, check_hlds__post_typecheck__ConstraintIdSets_13);
    }
#line 427 "post_typecheck.m"
    {
#line 427 "post_typecheck.m"
      check_hlds__post_typecheck__FindGoals_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 427 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[2]));
#line 427 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 1) = ((MR_Box) (check_hlds__post_typecheck__find_constrained_goals_2_f_0_2));
#line 427 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 427 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 3) = ((MR_Box) (check_hlds__post_typecheck__Clauses_10));
#line 427 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 4) = ((MR_Box) (check_hlds__post_typecheck__ConstraintIds_14));
#line 427 "post_typecheck.m"
    }
#line 438 "post_typecheck.m"
    {
#line 438 "post_typecheck.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__post_typecheck__FindGoals_15, &check_hlds__post_typecheck__Goals_6);
    }
#line 416 "post_typecheck.m"
    return check_hlds__post_typecheck__Goals_6;
#line 416 "post_typecheck.m"
  }
#line 413 "post_typecheck.m"
}

#line 402 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
#line 402 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarset_4,
#line 402 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraint_5)
#line 402 "post_typecheck.m"
{
#line 405 "post_typecheck.m"
  {
#line 405 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 405 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__3_3;
#line 405 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_6_6;
#line 405 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_7_7;

#line 406 "post_typecheck.m"
    {
#line 406 "post_typecheck.m"
      check_hlds__post_typecheck__V_7_7 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__post_typecheck__TVarset_4, check_hlds__post_typecheck__Constraint_5);
    }
#line 406 "post_typecheck.m"
    {
#line 406 "post_typecheck.m"
      check_hlds__post_typecheck__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 406 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_6_6, 1) = ((MR_Box) (check_hlds__post_typecheck__V_7_7));
#line 406 "post_typecheck.m"
    }
#line 406 "post_typecheck.m"
    {
#line 406 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__post_typecheck__V_6_6));
#line 406 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "post_typecheck.m"
    }
#line 405 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__3_3;
#line 405 "post_typecheck.m"
  }
#line 402 "post_typecheck.m"
}

#line 385 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
#line 385 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 385 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 385 "post_typecheck.m"
{
#line 385 "post_typecheck.m"
  {
#line 385 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 385 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 385 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_HeadVar__3_3;

#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__conv1_HeadVar__3_3 = check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 385 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv1_HeadVar__3_3));
#line 385 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 385 "post_typecheck.m"
  }
#line 385 "post_typecheck.m"
}

#line 368 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_10,
#line 368 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22,
#line 368 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_23)
#line 368 "post_typecheck.m"
{
#line 373 "post_typecheck.m"
  {
#line 373 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_75_75;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_76_76;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_77_77;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TVarSet_12;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_13;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdPieces_14;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_15;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_16;
#line 373 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__DueTo_17;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ContextMsgStart_18;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstrainedGoals_19;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ContextMsgs_20;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_21;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_29_29;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_30_30;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_31_31;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_36_36;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 373 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_38_38;
#line 373 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_40_40;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_47_47;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_48_48;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_49_49;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_50_50;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_64_64;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_65_65;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_66_66;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_67_67;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_72_72;
#line 373 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_73_73;
#line 382 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_V_40_40;
#line 389 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv2_DueTo_17;

#line 374 "post_typecheck.m"
    {
#line 374 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__TVarSet_12);
    }
#line 375 "post_typecheck.m"
    {
#line 375 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__Context_13);
    }
#line 377 "post_typecheck.m"
    {
#line 377 "post_typecheck.m"
      check_hlds__post_typecheck__PredIdPieces_14 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_7, (MR_Integer) 1, check_hlds__post_typecheck__PredId_8);
    }
#line 8692 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 8694 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 8696 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 382 "post_typecheck.m"
    {
#line 382 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_V_40_40 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, check_hlds__post_typecheck__TypeCtorInfo_77_77, check_hlds__post_typecheck__Constraints_10, ((MR_Box) ((MR_String) "constraint:")), ((MR_Box) ((MR_String) "constraints:")));
    }
#line 382 "post_typecheck.m"
    check_hlds__post_typecheck__V_40_40 = ((MR_String) check_hlds__post_typecheck__conv0_V_40_40);
#line 381 "post_typecheck.m"
    {
#line 381 "post_typecheck.m"
      check_hlds__post_typecheck__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "type error: unsatisfied typeclass ", check_hlds__post_typecheck__V_40_40);
    }
#line 381 "post_typecheck.m"
    {
#line 381 "post_typecheck.m"
      check_hlds__post_typecheck__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 381 "post_typecheck.m"
      MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__V_37_37, 0) = ((MR_Box) (check_hlds__post_typecheck__V_38_38));
#line 381 "post_typecheck.m"
    }
#line 382 "post_typecheck.m"
    {
#line 382 "post_typecheck.m"
      check_hlds__post_typecheck__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_36_36, 0) = ((MR_Box) (check_hlds__post_typecheck__V_37_37));
#line 382 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[63])));
#line 382 "post_typecheck.m"
    }
#line 380 "post_typecheck.m"
    {
#line 380 "post_typecheck.m"
      check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 380 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (check_hlds__post_typecheck__V_36_36));
#line 380 "post_typecheck.m"
    }
#line 380 "post_typecheck.m"
    {
#line 380 "post_typecheck.m"
      check_hlds__post_typecheck__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61])));
#line 380 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_31_31, 1) = ((MR_Box) (check_hlds__post_typecheck__V_34_34));
#line 380 "post_typecheck.m"
    }
#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[1]));
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1));
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 3) = ((MR_Box) (check_hlds__post_typecheck__TVarSet_12));
#line 385 "post_typecheck.m"
    }
#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__V_49_49 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[3], check_hlds__post_typecheck__V_50_50, check_hlds__post_typecheck__Constraints_10);
    }
#line 384 "post_typecheck.m"
    {
#line 384 "post_typecheck.m"
      check_hlds__post_typecheck__V_48_48 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__post_typecheck__V_49_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__V_48_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[65]));
    }
#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__V_30_30 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__V_31_31, check_hlds__post_typecheck__V_47_47);
    }
#line 380 "post_typecheck.m"
    {
#line 380 "post_typecheck.m"
      check_hlds__post_typecheck__V_29_29 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__PredIdPieces_14, check_hlds__post_typecheck__V_30_30);
    }
#line 380 "post_typecheck.m"
    {
#line 380 "post_typecheck.m"
      check_hlds__post_typecheck__Pieces_15 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[60]), check_hlds__post_typecheck__V_29_29);
    }
#line 387 "post_typecheck.m"
    {
#line 387 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 387 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_15));
#line 387 "post_typecheck.m"
    }
#line 387 "post_typecheck.m"
    {
#line 387 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__V_57_57));
#line 387 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 387 "post_typecheck.m"
    }
#line 387 "post_typecheck.m"
    {
#line 387 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 387 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_16, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_13));
#line 387 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_56_56));
#line 387 "post_typecheck.m"
    }
#line 389 "post_typecheck.m"
    {
#line 389 "post_typecheck.m"
      check_hlds__post_typecheck__conv2_DueTo_17 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, check_hlds__post_typecheck__TypeCtorInfo_77_77, check_hlds__post_typecheck__Constraints_10, ((MR_Box) ((MR_String) "The constraint is due to:")), ((MR_Box) ((MR_String) "The constraints are due to:")));
    }
#line 389 "post_typecheck.m"
    check_hlds__post_typecheck__DueTo_17 = ((MR_String) check_hlds__post_typecheck__conv2_DueTo_17);
#line 392 "post_typecheck.m"
    {
#line 392 "post_typecheck.m"
      check_hlds__post_typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 392 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_13));
#line 392 "post_typecheck.m"
    }
#line 393 "post_typecheck.m"
    {
#line 393 "post_typecheck.m"
      check_hlds__post_typecheck__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_67_67, 1) = ((MR_Box) (check_hlds__post_typecheck__DueTo_17));
#line 393 "post_typecheck.m"
    }
#line 393 "post_typecheck.m"
    {
#line 393 "post_typecheck.m"
      check_hlds__post_typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__post_typecheck__V_67_67));
#line 393 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "post_typecheck.m"
    }
#line 393 "post_typecheck.m"
    {
#line 393 "post_typecheck.m"
      check_hlds__post_typecheck__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 393 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_65_65, 0) = ((MR_Box) (check_hlds__post_typecheck__V_66_66));
#line 393 "post_typecheck.m"
    }
#line 393 "post_typecheck.m"
    {
#line 393 "post_typecheck.m"
      check_hlds__post_typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__post_typecheck__V_65_65));
#line 393 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "post_typecheck.m"
    }
#line 392 "post_typecheck.m"
    {
#line 392 "post_typecheck.m"
      check_hlds__post_typecheck__ContextMsgStart_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 392 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 0) = ((MR_Box) (check_hlds__post_typecheck__V_61_61));
#line 392 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 1) = ((MR_Box) ((MR_Integer) 1));
#line 392 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 2) = ((MR_Box) ((MR_Integer) 0));
#line 392 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 3) = ((MR_Box) (check_hlds__post_typecheck__V_64_64));
#line 392 "post_typecheck.m"
    }
#line 394 "post_typecheck.m"
    {
#line 394 "post_typecheck.m"
      check_hlds__post_typecheck__ConstrainedGoals_19 = check_hlds__post_typecheck__find_constrained_goals_2_f_0(check_hlds__post_typecheck__PredInfo_9, check_hlds__post_typecheck__Constraints_10);
    }
#line 395 "post_typecheck.m"
    {
#line 395 "post_typecheck.m"
      check_hlds__post_typecheck__ContextMsgs_20 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__ConstrainedGoals_19);
    }
#line 399 "post_typecheck.m"
    {
#line 399 "post_typecheck.m"
      check_hlds__post_typecheck__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_73_73, 0) = ((MR_Box) (check_hlds__post_typecheck__ContextMsgStart_18));
#line 399 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_73_73, 1) = ((MR_Box) (check_hlds__post_typecheck__ContextMsgs_20));
#line 399 "post_typecheck.m"
    }
#line 399 "post_typecheck.m"
    {
#line 399 "post_typecheck.m"
      check_hlds__post_typecheck__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_16));
#line 399 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__post_typecheck__V_73_73));
#line 399 "post_typecheck.m"
    }
#line 398 "post_typecheck.m"
    {
#line 398 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 398 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 398 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 2) = ((MR_Box) (check_hlds__post_typecheck__V_72_72));
#line 398 "post_typecheck.m"
    }
#line 400 "post_typecheck.m"
    {
#line 400 "post_typecheck.m"
      MR_Word base;
#line 400 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_23 = base;
#line 400 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_21));
#line 400 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22));
#line 400 "post_typecheck.m"
    }
#line 373 "post_typecheck.m"
  }
#line 368 "post_typecheck.m"
}

#line 320 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_2_8_p_0(
#line 320 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 320 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_2,
#line 320 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__VarsToDo_3,
#line 320 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 320 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5,
#line 320 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6,
#line 320 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7,
#line 320 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Set_8)
#line 320 "post_typecheck.m"
{
#line 325 "post_typecheck.m"
  while (MR_TRUE)
#line 325 "post_typecheck.m"
    {
#line 325 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 325 "post_typecheck.m"
      {
#line 325 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 325 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "post_typecheck.m"
          {
#line 325 "post_typecheck.m"
            *check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Set_8 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7;
#line 325 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 325 "post_typecheck.m"
          }
#line 325 "post_typecheck.m"
        else
#line 327 "post_typecheck.m"
          {
#line 327 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Type_18;
#line 327 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 327 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 326 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, (MR_Integer) 0)));

#line 326 "post_typecheck.m"
            check_hlds__post_typecheck__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, (MR_Integer) 1)));
#line 328 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__VarsToDo_3 < (MR_Integer) 0);
#line 330 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 329 "post_typecheck.m"
              {
#line 329 "post_typecheck.m"
                *check_hlds__post_typecheck__HeadVar__4_4 = check_hlds__post_typecheck__HeadVar__1_1;
#line 329 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_Set_8 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7;
#line 329 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 329 "post_typecheck.m"
              }
#line 330 "post_typecheck.m"
            else
#line 331 "post_typecheck.m"
              {
#line 331 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TypeInfo_42_42;
#line 331 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVars_25;
#line 331 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarsSet0_26;
#line 331 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarsSet1_27;
#line 331 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35;
#line 331 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_37_37;
#line 331 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_38_38;

#line 331 "post_typecheck.m"
                {
#line 331 "post_typecheck.m"
                  parse_tree__prog_type__type_vars_2_p_0(check_hlds__post_typecheck__Type_18, &check_hlds__post_typecheck__TVars_25);
                }
#line 9045 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeInfo_42_42 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 332 "post_typecheck.m"
                {
#line 332 "post_typecheck.m"
                  mercury__set__list_to_set_2_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVars_25, &check_hlds__post_typecheck__TVarsSet0_26);
                }
#line 333 "post_typecheck.m"
                {
#line 333 "post_typecheck.m"
                  mercury__set__delete_list_3_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__HeadTypeParams_2, check_hlds__post_typecheck__TVarsSet0_26, &check_hlds__post_typecheck__TVarsSet1_27);
                }
#line 334 "post_typecheck.m"
                {
#line 334 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVarsSet1_27);
                }
#line 336 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 335 "post_typecheck.m"
                  {
#line 335 "post_typecheck.m"
                    check_hlds__post_typecheck__STATE_VARIABLE_Set_37_37 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7;
#line 335 "post_typecheck.m"
                    check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 335 "post_typecheck.m"
                  }
#line 336 "post_typecheck.m"
                else
#line 337 "post_typecheck.m"
                  {
#line 337 "post_typecheck.m"
                    {
#line 337 "post_typecheck.m"
                      check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_32_32));
#line 337 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5));
#line 337 "post_typecheck.m"
                    }
#line 338 "post_typecheck.m"
                    {
#line 338 "post_typecheck.m"
                      mercury__set__union_3_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7, check_hlds__post_typecheck__TVarsSet1_27, &check_hlds__post_typecheck__STATE_VARIABLE_Set_37_37);
                    }
#line 337 "post_typecheck.m"
                  }
#line 341 "post_typecheck.m"
                check_hlds__post_typecheck__V_38_38 = (check_hlds__post_typecheck__VarsToDo_3 - (MR_Integer) 1);
#line 340 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 340 "post_typecheck.m"
                {
#line 340 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__VarTypes_19;
#line 340 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__VarsToDo__tmp_copy_3 = check_hlds__post_typecheck__V_38_38;
#line 340 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_5 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35;
#line 340 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0__tmp_copy_7 = check_hlds__post_typecheck__STATE_VARIABLE_Set_37_37;

#line 340 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0__tmp_copy_7;
#line 340 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_5;
#line 340 "post_typecheck.m"
                  check_hlds__post_typecheck__VarsToDo_3 = check_hlds__post_typecheck__VarsToDo__tmp_copy_3;
#line 340 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 340 "post_typecheck.m"
                }
#line 340 "post_typecheck.m"
                continue;
#line 331 "post_typecheck.m"
              }
#line 327 "post_typecheck.m"
          }
#line 325 "post_typecheck.m"
      }
#line 325 "post_typecheck.m"
      break;
#line 325 "post_typecheck.m"
    }
#line 320 "post_typecheck.m"
}

#line 303 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_6_p_0(
#line 303 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarTypes_7,
#line 303 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_8,
#line 303 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14,
#line 303 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15,
#line 303 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0_16,
#line 303 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Set_17)
#line 303 "post_typecheck.m"
{
#line 309 "post_typecheck.m"
  while (MR_TRUE)
#line 309 "post_typecheck.m"
    {
#line 309 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 309 "post_typecheck.m"
      {
#line 309 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;
#line 309 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__LeftOverVarTypes_11;
#line 309 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 309 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_20_20;

#line 310 "post_typecheck.m"
        {
#line 310 "post_typecheck.m"
          check_hlds__post_typecheck__check_var_type_bindings_2_8_p_0(check_hlds__post_typecheck__VarTypes_7, check_hlds__post_typecheck__HeadTypeParams_8, (MR_Integer) 1000, &check_hlds__post_typecheck__LeftOverVarTypes_11, check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14, &check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19, check_hlds__post_typecheck__STATE_VARIABLE_Set_0_16, &check_hlds__post_typecheck__STATE_VARIABLE_Set_20_20);
        }
#line 314 "post_typecheck.m"
        if ((check_hlds__post_typecheck__LeftOverVarTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "post_typecheck.m"
          {
#line 313 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 313 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Set_17 = check_hlds__post_typecheck__STATE_VARIABLE_Set_20_20;
#line 313 "post_typecheck.m"
          }
#line 314 "post_typecheck.m"
        else
#line 316 "post_typecheck.m"
          {
#line 316 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 316 "post_typecheck.m"
            {
#line 316 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__VarTypes__tmp_copy_7 = check_hlds__post_typecheck__LeftOverVarTypes_11;
#line 316 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_14 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 316 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0__tmp_copy_16 = check_hlds__post_typecheck__STATE_VARIABLE_Set_20_20;

#line 316 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Set_0_16 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0__tmp_copy_16;
#line 316 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_14;
#line 316 "post_typecheck.m"
              check_hlds__post_typecheck__VarTypes_7 = check_hlds__post_typecheck__VarTypes__tmp_copy_7;
#line 316 "post_typecheck.m"
            }
#line 316 "post_typecheck.m"
            continue;
#line 316 "post_typecheck.m"
          }
#line 309 "post_typecheck.m"
      }
#line 309 "post_typecheck.m"
      break;
#line 309 "post_typecheck.m"
    }
#line 303 "post_typecheck.m"
}

#line 354 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0_1(
#line 354 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 354 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 354 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 354 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3)
#line 354 "post_typecheck.m"
{
#line 354 "post_typecheck.m"
  {
#line 354 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 354 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__3_25;

#line 354 "post_typecheck.m"
    {
#line 354 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__354__1_3_p_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv0_HeadVar__3_25);
    }
#line 354 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__3_25));
#line 354 "post_typecheck.m"
  }
#line 354 "post_typecheck.m"
}

#line 255 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(
#line 255 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 255 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 255 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 255 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33,
#line 255 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_10,
#line 255 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34)
#line 255 "post_typecheck.m"
{
#line 259 "post_typecheck.m"
  {
#line 259 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnprovenConstraints0_12;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesInfo0_16;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadTypeParams_17;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarSet_18;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypesMap0_19;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypesList_20;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Set0_21;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnresolvedVarsTypes_22;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Set_23;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35;
#line 259 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36;

#line 260 "post_typecheck.m"
    {
#line 260 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__UnprovenConstraints0_12);
    }
#line 261 "post_typecheck.m"
    check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "post_typecheck.m"
    if ((check_hlds__post_typecheck__UnprovenConstraints0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "post_typecheck.m"
      {
#line 270 "post_typecheck.m"
        *check_hlds__post_typecheck__NumBadErrors_10 = (MR_Integer) 0;
#line 269 "post_typecheck.m"
        check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35;
#line 269 "post_typecheck.m"
      }
#line 268 "post_typecheck.m"
    else
#line 263 "post_typecheck.m"
      {
#line 263 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 263 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__UnprovenConstraints_15;

#line 264 "post_typecheck.m"
        {
#line 264 "post_typecheck.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_42_42, check_hlds__post_typecheck__UnprovenConstraints0_12, &check_hlds__post_typecheck__UnprovenConstraints_15);
        }
#line 265 "post_typecheck.m"
        {
#line 265 "post_typecheck.m"
          check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__PredId_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__post_typecheck__UnprovenConstraints_15, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35, &check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36);
        }
#line 267 "post_typecheck.m"
        {
#line 267 "post_typecheck.m"
          mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_42_42, check_hlds__post_typecheck__UnprovenConstraints_15, check_hlds__post_typecheck__NumBadErrors_10);
        }
#line 263 "post_typecheck.m"
      }
#line 273 "post_typecheck.m"
    {
#line 273 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ClausesInfo0_16);
    }
#line 274 "post_typecheck.m"
    {
#line 274 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__HeadTypeParams_17);
    }
#line 275 "post_typecheck.m"
    {
#line 275 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__VarSet_18);
    }
#line 276 "post_typecheck.m"
    {
#line 276 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__VarTypesMap0_19);
    }
#line 277 "post_typecheck.m"
    {
#line 277 "post_typecheck.m"
      hlds__vartypes__vartypes_to_assoc_list_2_p_0(check_hlds__post_typecheck__VarTypesMap0_19, &check_hlds__post_typecheck__VarTypesList_20);
    }
#line 278 "post_typecheck.m"
    {
#line 278 "post_typecheck.m"
      mercury__set__init_1_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], &check_hlds__post_typecheck__Set0_21);
    }
#line 279 "post_typecheck.m"
    {
#line 279 "post_typecheck.m"
      check_hlds__post_typecheck__check_var_type_bindings_6_p_0(check_hlds__post_typecheck__VarTypesList_20, check_hlds__post_typecheck__HeadTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__UnresolvedVarsTypes_22, check_hlds__post_typecheck__Set0_21, &check_hlds__post_typecheck__Set_23);
    }
#line 283 "post_typecheck.m"
    if ((check_hlds__post_typecheck__UnresolvedVarsTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "post_typecheck.m"
      {
#line 282 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 282 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36;
#line 282 "post_typecheck.m"
      }
#line 283 "post_typecheck.m"
    else
#line 284 "post_typecheck.m"
      {
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeInfo_36_72;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProofMap0_26;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap0_27;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypesMap_28;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProofMap_29;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_30;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_31;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VoidSubst_58;
#line 284 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_63_63;
#line 357 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv1_VoidSubst_58;

#line 285 "post_typecheck.m"
        {
#line 285 "post_typecheck.m"
          check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__PredId_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__post_typecheck__VarSet_18, check_hlds__post_typecheck__UnresolvedVarsTypes_22, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34);
        }
#line 289 "post_typecheck.m"
        {
#line 289 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ProofMap0_26);
        }
#line 290 "post_typecheck.m"
        {
#line 290 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ConstraintMap0_27);
        }
#line 9426 "check_hlds.post_typecheck.c"
        check_hlds__post_typecheck__TypeInfo_36_72 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 357 "post_typecheck.m"
        {
#line 357 "post_typecheck.m"
          check_hlds__post_typecheck__V_63_63 = mercury__map__init_0_f_0(check_hlds__post_typecheck__TypeInfo_36_72, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
#line 357 "post_typecheck.m"
        {
#line 357 "post_typecheck.m"
          mercury__set__fold_4_p_0(check_hlds__post_typecheck__TypeInfo_36_72, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[0], (MR_Word) &check_hlds__post_typecheck_scalar_common_2[5], check_hlds__post_typecheck__Set_23, ((MR_Box) (check_hlds__post_typecheck__V_63_63)), &check_hlds__post_typecheck__conv1_VoidSubst_58);
        }
#line 357 "post_typecheck.m"
        check_hlds__post_typecheck__VoidSubst_58 = ((MR_Word) check_hlds__post_typecheck__conv1_VoidSubst_58);
#line 360 "post_typecheck.m"
        {
#line 360 "post_typecheck.m"
          hlds__vartypes__apply_subst_to_vartypes_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__VarTypesMap0_19, &check_hlds__post_typecheck__VarTypesMap_28);
        }
#line 361 "post_typecheck.m"
        {
#line 361 "post_typecheck.m"
          check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__ProofMap0_26, &check_hlds__post_typecheck__ProofMap_29);
        }
#line 362 "post_typecheck.m"
        {
#line 362 "post_typecheck.m"
          check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__ConstraintMap0_27, &check_hlds__post_typecheck__ConstraintMap_30);
        }
#line 293 "post_typecheck.m"
        {
#line 293 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__post_typecheck__VarTypesMap_28, check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__ClausesInfo_31);
        }
#line 294 "post_typecheck.m"
        {
#line 294 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__post_typecheck__ClausesInfo_31, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39);
        }
#line 295 "post_typecheck.m"
        {
#line 295 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__post_typecheck__ProofMap_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40);
        }
#line 296 "post_typecheck.m"
        {
#line 296 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__post_typecheck__ConstraintMap_30, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33);
#line 296 "post_typecheck.m"
          return;
        }
#line 284 "post_typecheck.m"
      }
#line 259 "post_typecheck.m"
  }
#line 255 "post_typecheck.m"
}

#line 918 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1(
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 918 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 918 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 918 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5)
#line 918 "post_typecheck.m"
{
#line 918 "post_typecheck.m"
  {
#line 918 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 918 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_Procs_12;
#line 918 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21;

#line 918 "post_typecheck.m"
    {
#line 918 "post_typecheck.m"
      check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv1_Procs_12, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_4), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21);
    }
#line 918 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv1_Procs_12));
#line 918 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21));
#line 918 "post_typecheck.m"
  }
#line 918 "post_typecheck.m"
}

#line 213 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(
#line 213 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 213 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 213 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15,
#line 213 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16,
#line 213 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_11,
#line 213 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17,
#line 213 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18)
#line 213 "post_typecheck.m"
{
#line 234 "post_typecheck.m"
  {
#line 234 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 220 "post_typecheck.m"
    {
#line 220 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15);
    }
#line 221 "post_typecheck.m"
    if (!(check_hlds__post_typecheck__succeeded))
#line 221 "post_typecheck.m"
      {
#line 221 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15);
      }
#line 234 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 227 "post_typecheck.m"
      {
#line 227 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ErrorProcs_14;
#line 227 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19;
#line 227 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 227 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_21_21;
#line 227 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22;
#line 956 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Origin_68;
#line 956 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_71_71;
#line 957 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_69_69;

#line 226 "post_typecheck.m"
        {
#line 226 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__ErrorProcs_14, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19);
        }
#line 229 "post_typecheck.m"
        check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 914 "post_typecheck.m"
        if ((check_hlds__post_typecheck__ErrorProcs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "post_typecheck.m"
          {
#line 914 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19;
#line 914 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22 = check_hlds__post_typecheck__V_21_21;
#line 914 "post_typecheck.m"
          }
#line 914 "post_typecheck.m"
        else
#line 916 "post_typecheck.m"
          {
#line 916 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcTable0_47;
#line 916 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcTable_48;
#line 916 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_49_49;
#line 918 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv3_ProcTable_48;
#line 918 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22;

#line 917 "post_typecheck.m"
            {
#line 917 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__post_typecheck__ProcTable0_47);
            }
#line 918 "post_typecheck.m"
            {
#line 918 "post_typecheck.m"
              check_hlds__post_typecheck__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 918 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
#line 918 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1));
#line 918 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 918 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 3) = ((MR_Box) (check_hlds__post_typecheck__ModuleInfo_8));
#line 918 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 4) = ((MR_Box) (check_hlds__post_typecheck__PredId_9));
#line 918 "post_typecheck.m"
            }
#line 918 "post_typecheck.m"
            {
#line 918 "post_typecheck.m"
              mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[3], (MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], check_hlds__post_typecheck__V_49_49, check_hlds__post_typecheck__ErrorProcs_14, ((MR_Box) (check_hlds__post_typecheck__ProcTable0_47)), &check_hlds__post_typecheck__conv3_ProcTable_48, ((MR_Box) (check_hlds__post_typecheck__V_21_21)), &check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22);
            }
#line 918 "post_typecheck.m"
            check_hlds__post_typecheck__ProcTable_48 = ((MR_Word) check_hlds__post_typecheck__conv3_ProcTable_48);
#line 918 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22 = ((MR_Word) check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22);
#line 920 "post_typecheck.m"
            {
#line 920 "post_typecheck.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__ProcTable_48, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 916 "post_typecheck.m"
          }
#line 956 "post_typecheck.m"
        {
#line 956 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__post_typecheck__Origin_68);
        }
#line 957 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Origin_68)) == (MR_mktag((MR_Integer) 0)));
#line 957 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 957 "post_typecheck.m"
          {
#line 957 "post_typecheck.m"
            check_hlds__post_typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_68, (MR_Integer) 0)));
#line 957 "post_typecheck.m"
            check_hlds__post_typecheck__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_68, (MR_Integer) 1)));
#line 957 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_71_71 == (MR_Integer) 0);
#line 957 "post_typecheck.m"
          }
#line 960 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 959 "post_typecheck.m"
          {
#line 959 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17 = check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22;
#line 959 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 959 "post_typecheck.m"
          }
#line 960 "post_typecheck.m"
        else
#line 961 "post_typecheck.m"
          {
#line 961 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_70;

#line 961 "post_typecheck.m"
            {
#line 961 "post_typecheck.m"
              check_hlds__post_typecheck__ProcIds_70 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 962 "post_typecheck.m"
            {
#line 962 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ProcIds_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17);
            }
#line 961 "post_typecheck.m"
          }
#line 232 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 233 "post_typecheck.m"
        *check_hlds__post_typecheck__NumBadErrors_11 = (MR_Integer) 0;
#line 227 "post_typecheck.m"
      }
#line 234 "post_typecheck.m"
    else
#line 236 "post_typecheck.m"
      {
#line 236 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26;
#line 236 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28;
#line 236 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29;
#line 236 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31;
#line 236 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33;
#line 236 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ErrorProcs_35;
#line 956 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Origin_83;
#line 956 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_86_86;
#line 957 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_84_84;

#line 235 "post_typecheck.m"
        {
#line 235 "post_typecheck.m"
          check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26, check_hlds__post_typecheck__NumBadErrors_11, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18);
        }
#line 238 "post_typecheck.m"
        {
#line 238 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__ErrorProcs_35, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28);
        }
#line 239 "post_typecheck.m"
        {
#line 239 "post_typecheck.m"
          check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ErrorProcs_35, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31);
        }
#line 956 "post_typecheck.m"
        {
#line 956 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, &check_hlds__post_typecheck__Origin_83);
        }
#line 957 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Origin_83)) == (MR_mktag((MR_Integer) 0)));
#line 957 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 957 "post_typecheck.m"
          {
#line 957 "post_typecheck.m"
            check_hlds__post_typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_83, (MR_Integer) 0)));
#line 957 "post_typecheck.m"
            check_hlds__post_typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_83, (MR_Integer) 1)));
#line 957 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_86_86 == (MR_Integer) 0);
#line 957 "post_typecheck.m"
          }
#line 960 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 959 "post_typecheck.m"
          {
#line 959 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33 = check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31;
#line 959 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29;
#line 959 "post_typecheck.m"
          }
#line 960 "post_typecheck.m"
        else
#line 961 "post_typecheck.m"
          {
#line 961 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_85;

#line 961 "post_typecheck.m"
            {
#line 961 "post_typecheck.m"
              check_hlds__post_typecheck__ProcIds_85 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29);
            }
#line 962 "post_typecheck.m"
            {
#line 962 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ProcIds_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31, &check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33);
            }
#line 961 "post_typecheck.m"
          }
#line 245 "post_typecheck.m"
        {
#line 245 "post_typecheck.m"
          check_hlds__post_typecheck__check_type_of_main_3_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17);
#line 245 "post_typecheck.m"
          return;
        }
#line 236 "post_typecheck.m"
      }
#line 234 "post_typecheck.m"
  }
#line 213 "post_typecheck.m"
}

#line 187 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(
#line 187 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 187 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ValidPredIdSet_2,
#line 187 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 187 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 187 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__HeadVar__5_5,
#line 187 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__6_6,
#line 187 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__7_7)
#line 187 "post_typecheck.m"
{
#line 192 "post_typecheck.m"
  {
#line 192 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 192 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "post_typecheck.m"
      {
#line 192 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 0;
#line 192 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "post_typecheck.m"
      }
#line 192 "post_typecheck.m"
    else
#line 196 "post_typecheck.m"
      {
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdsInfos0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdInfo_14;
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdsInfos_15;
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadAlwaysSpecs_17;
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TailAlwaysSpecs_18;
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19;
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TailNoTypeErrorSpecs_20;
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo0_12, (MR_Integer) 0)));
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo0_12, (MR_Integer) 1)));
#line 196 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo_23;
#line 196 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__HeadNumBadErrors_24;
#line 196 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__TailNumBadErrors_25;

#line 198 "post_typecheck.m"
        {
#line 198 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__post_typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__post_typecheck__PredId_21)));
        }
#line 201 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 199 "post_typecheck.m"
          {
#line 199 "post_typecheck.m"
            check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__PredId_21, check_hlds__post_typecheck__PredInfo0_22, &check_hlds__post_typecheck__PredInfo_23, &check_hlds__post_typecheck__HeadNumBadErrors_24, &check_hlds__post_typecheck__HeadAlwaysSpecs_17, &check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19);
          }
#line 201 "post_typecheck.m"
        else
#line 202 "post_typecheck.m"
          {
#line 202 "post_typecheck.m"
            check_hlds__post_typecheck__PredInfo_23 = check_hlds__post_typecheck__PredInfo0_22;
#line 203 "post_typecheck.m"
            check_hlds__post_typecheck__HeadNumBadErrors_24 = (MR_Integer) 0;
#line 204 "post_typecheck.m"
            check_hlds__post_typecheck__HeadAlwaysSpecs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 205 "post_typecheck.m"
            check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "post_typecheck.m"
          }
#line 207 "post_typecheck.m"
        {
#line 207 "post_typecheck.m"
          check_hlds__post_typecheck__PredIdInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo_14, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_21));
#line 207 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo_14, 1) = ((MR_Box) (check_hlds__post_typecheck__PredInfo_23));
#line 207 "post_typecheck.m"
        }
#line 208 "post_typecheck.m"
        {
#line 208 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__ValidPredIdSet_2, check_hlds__post_typecheck__PredIdsInfos0_13, &check_hlds__post_typecheck__PredIdsInfos_15, &check_hlds__post_typecheck__TailNumBadErrors_25, &check_hlds__post_typecheck__TailAlwaysSpecs_18, &check_hlds__post_typecheck__TailNoTypeErrorSpecs_20);
        }
#line 194 "post_typecheck.m"
        {
#line 194 "post_typecheck.m"
          MR_Word base;
#line 194 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__4_4 = base;
#line 194 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__PredIdInfo_14));
#line 194 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__PredIdsInfos_15));
#line 194 "post_typecheck.m"
        }
#line 195 "post_typecheck.m"
        {
#line 195 "post_typecheck.m"
          MR_Word base;
#line 195 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__6_6 = base;
#line 195 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HeadAlwaysSpecs_17));
#line 195 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__TailAlwaysSpecs_18));
#line 195 "post_typecheck.m"
        }
#line 196 "post_typecheck.m"
        {
#line 196 "post_typecheck.m"
          MR_Word base;
#line 196 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__7_7 = base;
#line 196 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19));
#line 196 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__TailNoTypeErrorSpecs_20));
#line 196 "post_typecheck.m"
        }
#line 211 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__5_5 = (check_hlds__post_typecheck__HeadNumBadErrors_24 + check_hlds__post_typecheck__TailNumBadErrors_25);
#line 196 "post_typecheck.m"
      }
#line 192 "post_typecheck.m"
  }
#line 187 "post_typecheck.m"
}

#line 1105 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1(
#line 1105 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1105 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1105 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_2)
#line 1105 "post_typecheck.m"
{
#line 1105 "post_typecheck.m"
  {
#line 1105 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1105 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1105 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__5_5;

#line 1105 "post_typecheck.m"
    {
#line 1105 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_hlds_constraint_list_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 5))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), &check_hlds__post_typecheck__conv0_HeadVar__5_5);
    }
#line 1105 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1105 "post_typecheck.m"
      {
#line 1105 "post_typecheck.m"
        *check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__5_5));
#line 1105 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1105 "post_typecheck.m"
      }
#line 1105 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 1105 "post_typecheck.m"
  }
#line 1105 "post_typecheck.m"
}

#line 119 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0(
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__X0_17,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId0_18,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgVars0_19,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Mode0_20,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Unification0_21,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_22,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo0_23,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_24,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104,
#line 119 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106,
#line 119 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107,
#line 119 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108,
#line 119 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109,
#line 119 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_28,
#line 119 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__IsPlainUnify_29)
#line 119 "post_typecheck.m"
{
#line 1036 "post_typecheck.m"
  {
#line 1036 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1036 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_203_203;
#line 1036 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeOfX_30;
#line 1036 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__Arity_31;
#line 1065 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Purity_35;
#line 1065 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FuncVar_36;
#line 1065 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FuncArgVars_37;
#line 1044 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__ApplyName_32;
#line 1044 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_110_110;
#line 1044 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_111_111;
#line 1044 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_33_33;
#line 1044 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;
#line 1046 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__lo_0;
#line 1046 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__hi_1;
#line 1046 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__mid_2;
#line 1046 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__result_3;

#line 1037 "post_typecheck.m"
    {
#line 1037 "post_typecheck.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__X0_17, &check_hlds__post_typecheck__TypeOfX_30);
    }
#line 10084 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_203_203 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[1];
#line 1038 "post_typecheck.m"
    {
#line 1038 "post_typecheck.m"
      mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__Arity_31);
    }
#line 1044 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1044 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1044 "post_typecheck.m"
      {
#line 1044 "post_typecheck.m"
        check_hlds__post_typecheck__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1044 "post_typecheck.m"
        check_hlds__post_typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1044 "post_typecheck.m"
        check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1044 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_110_110)) == (MR_mktag((MR_Integer) 0)));
#line 1044 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1044 "post_typecheck.m"
          {
#line 1044 "post_typecheck.m"
            check_hlds__post_typecheck__ApplyName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_110_110, (MR_Integer) 0)));
#line 1046 "post_typecheck.m"
            /* binary string simple lookup switch */
#line 1046 "post_typecheck.m"
            check_hlds__post_typecheck__lo_0 = (MR_Integer) 0;
#line 1046 "post_typecheck.m"
            check_hlds__post_typecheck__hi_1 = (MR_Integer) 3;
#line 1046 "post_typecheck.m"
            do
#line 1046 "post_typecheck.m"
              {
#line 1046 "post_typecheck.m"
                check_hlds__post_typecheck__mid_2 = (((check_hlds__post_typecheck__lo_0 + check_hlds__post_typecheck__hi_1)) / (MR_Integer) 2);
#line 1046 "post_typecheck.m"
                check_hlds__post_typecheck__result_3 = MR_strcmp(check_hlds__post_typecheck__ApplyName_32, ((&check_hlds__post_typecheck_vector_common_5[0 + check_hlds__post_typecheck__mid_2]))->check_hlds__post_typecheck__vector_common_type_5_0__vct_5_f_0);
#line 1046 "post_typecheck.m"
                if ((check_hlds__post_typecheck__result_3 == (MR_Integer) 0))
#line 1046 "post_typecheck.m"
                  {
#line 1046 "post_typecheck.m"
                    check_hlds__post_typecheck__Purity_35 = ((&check_hlds__post_typecheck_vector_common_5[0 + check_hlds__post_typecheck__mid_2]))->check_hlds__post_typecheck__vector_common_type_5_0__vct_5_f_1;
#line 1046 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1046 "post_typecheck.m"
                    /* jump out of search loop */
#line 1046 "post_typecheck.m"
                    goto label_0;
#line 1046 "post_typecheck.m"
                  }
#line 1046 "post_typecheck.m"
                else
#line 1046 "post_typecheck.m"
                if ((check_hlds__post_typecheck__result_3 < (MR_Integer) 0))
#line 1046 "post_typecheck.m"
                  check_hlds__post_typecheck__hi_1 = (check_hlds__post_typecheck__mid_2 - (MR_Integer) 1);
#line 1046 "post_typecheck.m"
                else
#line 1046 "post_typecheck.m"
                  check_hlds__post_typecheck__lo_0 = (check_hlds__post_typecheck__mid_2 + (MR_Integer) 1);
#line 1046 "post_typecheck.m"
              }
#line 1046 "post_typecheck.m"
            while ((check_hlds__post_typecheck__lo_0 <= check_hlds__post_typecheck__hi_1));
#line 1046 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = MR_FALSE;
#line 1046 "post_typecheck.m"
          label_0:;
#line 1044 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1044 "post_typecheck.m"
              {
#line 1050 "post_typecheck.m"
                check_hlds__post_typecheck__V_111_111 = (MR_Integer) 1;
#line 1050 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 >= check_hlds__post_typecheck__V_111_111);
#line 1044 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1044 "post_typecheck.m"
                  {
#line 1051 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ArgVars0_19)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1051 "post_typecheck.m"
                      {
#line 1051 "post_typecheck.m"
                        check_hlds__post_typecheck__FuncVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgVars0_19, (MR_Integer) 0)));
#line 1051 "post_typecheck.m"
                        check_hlds__post_typecheck__FuncArgVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgVars0_19, (MR_Integer) 1)));
#line 1051 "post_typecheck.m"
                      }
#line 1044 "post_typecheck.m"
                  }
#line 1044 "post_typecheck.m"
              }
#line 1044 "post_typecheck.m"
          }
#line 1044 "post_typecheck.m"
      }
#line 1065 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1056 "post_typecheck.m"
      {
#line 1056 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgVars_38;
#line 1056 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__FullArity_41;
#line 1056 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HOCall_42;
#line 1056 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_112_112;
#line 1056 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_115_115;

#line 1056 "post_typecheck.m"
        {
#line 1056 "post_typecheck.m"
          check_hlds__post_typecheck__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_112_112, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1056 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1056 "post_typecheck.m"
        }
#line 1056 "post_typecheck.m"
        {
#line 1056 "post_typecheck.m"
          check_hlds__post_typecheck__ArgVars_38 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__FuncArgVars_37, check_hlds__post_typecheck__V_112_112);
        }
#line 1059 "post_typecheck.m"
        {
#line 1059 "post_typecheck.m"
          parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, check_hlds__post_typecheck__Arity_31, &check_hlds__post_typecheck__FullArity_41);
        }
#line 1061 "post_typecheck.m"
        {
#line 1061 "post_typecheck.m"
          check_hlds__post_typecheck__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_115_115, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncVar_36));
#line 1061 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_115_115, 1) = ((MR_Box) (check_hlds__post_typecheck__Purity_35));
#line 1061 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_115_115, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1061 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_115_115, 3) = ((MR_Box) (check_hlds__post_typecheck__FullArity_41));
#line 1061 "post_typecheck.m"
        }
#line 1060 "post_typecheck.m"
        {
#line 1060 "post_typecheck.m"
          check_hlds__post_typecheck__HOCall_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1060 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 1) = ((MR_Box) (check_hlds__post_typecheck__V_115_115));
#line 1060 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_38));
#line 1060 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 5) = ((MR_Box) ((MR_Integer) 6));
#line 1060 "post_typecheck.m"
        }
#line 1063 "post_typecheck.m"
        {
#line 1063 "post_typecheck.m"
          MR_Word base;
#line 1063 "post_typecheck.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "post_typecheck.m"
          *check_hlds__post_typecheck__Goal_28 = base;
#line 1063 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HOCall_42));
#line 1063 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1063 "post_typecheck.m"
        }
#line 1064 "post_typecheck.m"
        *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1056 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108;
#line 1056 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106;
#line 1056 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104;
#line 1056 "post_typecheck.m"
      }
#line 1065 "post_typecheck.m"
    else
#line 1122 "post_typecheck.m"
      {
#line 1122 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredId_60;
#line 1122 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__QualifiedFuncName_61;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_204_204;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredName_43;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Markers_46;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredTable_47;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIds_48;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_51;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistQTVars_52;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadTypeParams_53;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes0_54;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_55;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_56;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalId_57;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintSearch_58;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Context_59;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_118_118;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_119_119;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_120_120;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_121_121;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_122_122;
#line 1071 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__V_44_44;
#line 1071 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_45_45;
#line 1078 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_49_49;
#line 1078 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_50_50;

#line 1071 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1071 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1071 "post_typecheck.m"
          {
#line 1071 "post_typecheck.m"
            check_hlds__post_typecheck__PredName_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1071 "post_typecheck.m"
            check_hlds__post_typecheck__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1071 "post_typecheck.m"
            check_hlds__post_typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1073 "post_typecheck.m"
            {
#line 1073 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__Markers_46);
            }
#line 1074 "post_typecheck.m"
            {
#line 1074 "post_typecheck.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, &check_hlds__post_typecheck__PredTable_47);
            }
#line 1077 "post_typecheck.m"
            {
#line 1077 "post_typecheck.m"
              check_hlds__post_typecheck__V_118_118 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__post_typecheck__Markers_46);
            }
#line 1076 "post_typecheck.m"
            {
#line 1076 "post_typecheck.m"
              hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__post_typecheck__PredTable_47, check_hlds__post_typecheck__V_118_118, check_hlds__post_typecheck__PredName_43, check_hlds__post_typecheck__Arity_31, &check_hlds__post_typecheck__PredIds_48);
            }
#line 1078 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__PredIds_48)) == (MR_mktag((MR_Integer) 1)));
#line 1078 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1078 "post_typecheck.m"
              {
#line 1078 "post_typecheck.m"
                check_hlds__post_typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PredIds_48, (MR_Integer) 0)));
#line 1078 "post_typecheck.m"
                check_hlds__post_typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PredIds_48, (MR_Integer) 1)));
#line 1087 "post_typecheck.m"
                {
#line 1087 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104);
                }
#line 1087 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1071 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1071 "post_typecheck.m"
                  {
#line 1092 "post_typecheck.m"
                    {
#line 1092 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104);
                    }
#line 1092 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1071 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1071 "post_typecheck.m"
                      {
#line 1097 "post_typecheck.m"
                        {
#line 1097 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__TVarSet_51);
                        }
#line 1098 "post_typecheck.m"
                        {
#line 1098 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__ExistQTVars_52);
                        }
#line 1099 "post_typecheck.m"
                        {
#line 1099 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__HeadTypeParams_53);
                        }
#line 1100 "post_typecheck.m"
                        {
#line 1100 "post_typecheck.m"
                          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_54);
                        }
#line 10419 "check_hlds.post_typecheck.c"
                        check_hlds__post_typecheck__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1101 "post_typecheck.m"
                        check_hlds__post_typecheck__V_120_120 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1101 "post_typecheck.m"
                        {
#line 1101 "post_typecheck.m"
                          check_hlds__post_typecheck__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_119_119, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeOfX_30));
#line 1101 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_119_119, 1) = ((MR_Box) (check_hlds__post_typecheck__V_120_120));
#line 1101 "post_typecheck.m"
                        }
#line 1101 "post_typecheck.m"
                        {
#line 1101 "post_typecheck.m"
                          check_hlds__post_typecheck__ArgTypes_55 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_204_204, check_hlds__post_typecheck__ArgTypes0_54, check_hlds__post_typecheck__V_119_119);
                        }
#line 1102 "post_typecheck.m"
                        {
#line 1102 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__ConstraintMap_56);
                        }
#line 1103 "post_typecheck.m"
                        {
#line 1103 "post_typecheck.m"
                          check_hlds__post_typecheck__GoalId_57 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1105 "post_typecheck.m"
                        check_hlds__post_typecheck__V_121_121 = (MR_Integer) 0;
#line 1105 "post_typecheck.m"
                        {
#line 1105 "post_typecheck.m"
                          check_hlds__post_typecheck__ConstraintSearch_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[0]));
#line 1105 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 1) = ((MR_Box) (check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1));
#line 1105 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1105 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 3) = ((MR_Box) (check_hlds__post_typecheck__ConstraintMap_56));
#line 1105 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 4) = ((MR_Box) (check_hlds__post_typecheck__V_121_121));
#line 1105 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 5) = ((MR_Box) (check_hlds__post_typecheck__GoalId_57));
#line 1105 "post_typecheck.m"
                        }
#line 1106 "post_typecheck.m"
                        {
#line 1106 "post_typecheck.m"
                          check_hlds__post_typecheck__Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1108 "post_typecheck.m"
                        {
#line 1108 "post_typecheck.m"
                          check_hlds__post_typecheck__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_122_122, 0) = ((MR_Box) (check_hlds__post_typecheck__ConstraintSearch_58));
#line 1108 "post_typecheck.m"
                        }
#line 1107 "post_typecheck.m"
                        {
#line 1107 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__PredIds_48, check_hlds__post_typecheck__TVarSet_51, check_hlds__post_typecheck__ExistQTVars_52, check_hlds__post_typecheck__ArgTypes_55, check_hlds__post_typecheck__HeadTypeParams_53, check_hlds__post_typecheck__V_122_122, check_hlds__post_typecheck__Context_59, &check_hlds__post_typecheck__PredId_60, &check_hlds__post_typecheck__QualifiedFuncName_61);
                        }
#line 1071 "post_typecheck.m"
                      }
#line 1071 "post_typecheck.m"
                  }
#line 1078 "post_typecheck.m"
              }
#line 1071 "post_typecheck.m"
          }
#line 1122 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1114 "post_typecheck.m"
          {
#line 1114 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_62;
#line 1114 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__FuncCallUnifyContext_63;
#line 1114 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__FuncCall_64;
#line 1114 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_123_123;
#line 1114 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_125_125;
#line 1114 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_128_128;
#line 1114 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgVars_172;

#line 1114 "post_typecheck.m"
            {
#line 1114 "post_typecheck.m"
              check_hlds__post_typecheck__ProcId_62 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 1115 "post_typecheck.m"
            {
#line 1115 "post_typecheck.m"
              check_hlds__post_typecheck__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_123_123, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1115 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1115 "post_typecheck.m"
            }
#line 1115 "post_typecheck.m"
            {
#line 1115 "post_typecheck.m"
              check_hlds__post_typecheck__ArgVars_172 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__ArgVars0_19, check_hlds__post_typecheck__V_123_123);
            }
#line 1117 "post_typecheck.m"
            {
#line 1117 "post_typecheck.m"
              check_hlds__post_typecheck__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_125_125, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId0_18));
#line 1117 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_125_125, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1117 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_125_125, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1117 "post_typecheck.m"
            }
#line 1116 "post_typecheck.m"
            {
#line 1116 "post_typecheck.m"
              check_hlds__post_typecheck__FuncCallUnifyContext_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 1) = ((MR_Box) (check_hlds__post_typecheck__V_125_125));
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 2) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1116 "post_typecheck.m"
            }
#line 1119 "post_typecheck.m"
            {
#line 1119 "post_typecheck.m"
              check_hlds__post_typecheck__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_128_128, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncCallUnifyContext_63));
#line 1119 "post_typecheck.m"
            }
#line 1118 "post_typecheck.m"
            {
#line 1118 "post_typecheck.m"
              check_hlds__post_typecheck__FuncCall_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_60));
#line 1118 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 1) = ((MR_Box) (check_hlds__post_typecheck__ProcId_62));
#line 1118 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_172));
#line 1118 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1118 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 4) = ((MR_Box) (check_hlds__post_typecheck__V_128_128));
#line 1118 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 5) = ((MR_Box) (check_hlds__post_typecheck__QualifiedFuncName_61));
#line 1118 "post_typecheck.m"
            }
#line 1120 "post_typecheck.m"
            {
#line 1120 "post_typecheck.m"
              MR_Word base;
#line 1120 "post_typecheck.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1120 "post_typecheck.m"
              *check_hlds__post_typecheck__Goal_28 = base;
#line 1120 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncCall_64));
#line 1120 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1120 "post_typecheck.m"
            }
#line 1121 "post_typecheck.m"
            *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1114 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108;
#line 1114 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106;
#line 1114 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104;
#line 1114 "post_typecheck.m"
          }
#line 1122 "post_typecheck.m"
        else
#line 1177 "post_typecheck.m"
          {
#line 1177 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Name_65;
#line 1177 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Context_199;
#line 1177 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PredId_200;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeCtorInfo_207_207;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PredOrFunc_69;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__HOArgTypes_71;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__AllArgTypes_72;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ExistQVars_73;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_129_129;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Markers_173;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TVarSet_174;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__HeadTypeParams_175;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypes0_176;
#line 1124 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__V_66_66;
#line 1124 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_67_67;
#line 1125 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___Purity_68;

#line 1124 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1124 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1124 "post_typecheck.m"
              {
#line 1124 "post_typecheck.m"
                check_hlds__post_typecheck__Name_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1124 "post_typecheck.m"
                check_hlds__post_typecheck__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1124 "post_typecheck.m"
                check_hlds__post_typecheck__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1125 "post_typecheck.m"
                {
#line 1125 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__post_typecheck__TypeOfX_30, &check_hlds__post_typecheck___Purity_68, &check_hlds__post_typecheck__PredOrFunc_69, &check_hlds__post_typecheck__HOArgTypes_71);
                }
#line 1124 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1124 "post_typecheck.m"
                  {
#line 1131 "post_typecheck.m"
                    {
#line 1131 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104);
                    }
#line 1131 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1124 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1124 "post_typecheck.m"
                      {
#line 1134 "post_typecheck.m"
                        {
#line 1134 "post_typecheck.m"
                          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_176);
                        }
#line 10681 "check_hlds.post_typecheck.c"
                        check_hlds__post_typecheck__TypeCtorInfo_207_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1135 "post_typecheck.m"
                        {
#line 1135 "post_typecheck.m"
                          check_hlds__post_typecheck__AllArgTypes_72 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_207_207, check_hlds__post_typecheck__ArgTypes0_176, check_hlds__post_typecheck__HOArgTypes_71);
                        }
#line 1136 "post_typecheck.m"
                        {
#line 1136 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__TVarSet_174);
                        }
#line 1137 "post_typecheck.m"
                        {
#line 1137 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__ExistQVars_73);
                        }
#line 1138 "post_typecheck.m"
                        {
#line 1138 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__HeadTypeParams_175);
                        }
#line 1139 "post_typecheck.m"
                        {
#line 1139 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__Markers_173);
                        }
#line 1140 "post_typecheck.m"
                        {
#line 1140 "post_typecheck.m"
                          check_hlds__post_typecheck__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1141 "post_typecheck.m"
                        {
#line 1141 "post_typecheck.m"
                          check_hlds__post_typecheck__V_129_129 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__post_typecheck__Markers_173);
                        }
#line 1141 "post_typecheck.m"
                        {
#line 1141 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(check_hlds__post_typecheck__V_129_129, check_hlds__post_typecheck__Name_65, check_hlds__post_typecheck__PredOrFunc_69, check_hlds__post_typecheck__TVarSet_174, check_hlds__post_typecheck__ExistQVars_73, check_hlds__post_typecheck__AllArgTypes_72, check_hlds__post_typecheck__HeadTypeParams_175, check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__Context_199, &check_hlds__post_typecheck__PredId_200);
                        }
#line 1124 "post_typecheck.m"
                      }
#line 1124 "post_typecheck.m"
                  }
#line 1124 "post_typecheck.m"
              }
#line 1177 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1145 "post_typecheck.m"
              {
#line 1145 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__PredInfo_25;
#line 1145 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ProcIds_74;
#line 1145 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__MaybeProcId_76;

#line 1145 "post_typecheck.m"
                {
#line 1145 "post_typecheck.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__PredId_200, &check_hlds__post_typecheck__PredInfo_25);
                }
#line 1146 "post_typecheck.m"
                {
#line 1146 "post_typecheck.m"
                  check_hlds__post_typecheck__ProcIds_74 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__PredInfo_25);
                }
#line 1150 "post_typecheck.m"
                if ((check_hlds__post_typecheck__ProcIds_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1155 "post_typecheck.m"
                  check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1150 "post_typecheck.m"
                else
#line 1150 "post_typecheck.m"
                  {
#line 1150 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ProcIds_74, (MR_Integer) 1)));
#line 1150 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ProcIds_74, (MR_Integer) 0)));

#line 1150 "post_typecheck.m"
                    if ((check_hlds__post_typecheck__V_211_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "post_typecheck.m"
                      {
#line 1149 "post_typecheck.m"
                        check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "post_typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, 0) = ((MR_Box) (check_hlds__post_typecheck__V_212_212));
#line 1149 "post_typecheck.m"
                      }
#line 1150 "post_typecheck.m"
                    else
#line 1151 "post_typecheck.m"
                      {
#line 1151 "post_typecheck.m"
                        MR_Integer check_hlds__post_typecheck__V_131_131;

#line 1153 "post_typecheck.m"
                        {
#line 1153 "post_typecheck.m"
                          check_hlds__post_typecheck__V_131_131 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                        }
#line 1153 "post_typecheck.m"
                        {
#line 1153 "post_typecheck.m"
                          check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, 0) = ((MR_Box) (check_hlds__post_typecheck__V_131_131));
#line 1153 "post_typecheck.m"
                        }
#line 1151 "post_typecheck.m"
                      }
#line 1150 "post_typecheck.m"
                  }
#line 1167 "post_typecheck.m"
                if ((check_hlds__post_typecheck__MaybeProcId_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1168 "post_typecheck.m"
                  {
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Pieces_83;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Msg_84;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Spec_85;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_135_135;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_138_138;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_139_139;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_140_140;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_147_147;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_148_148;
#line 1168 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_152_152;

#line 1169 "post_typecheck.m"
                    {
#line 1169 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = hlds__make_goal__true_goal_0_f_0();
                    }
#line 1172 "post_typecheck.m"
                    {
#line 1172 "post_typecheck.m"
                      check_hlds__post_typecheck__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_140_140, 0) = ((MR_Box) (check_hlds__post_typecheck__Name_65));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_140_140, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1172 "post_typecheck.m"
                    }
#line 1172 "post_typecheck.m"
                    {
#line 1172 "post_typecheck.m"
                      check_hlds__post_typecheck__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_139_139, 1) = ((MR_Box) (check_hlds__post_typecheck__V_140_140));
#line 1172 "post_typecheck.m"
                    }
#line 1172 "post_typecheck.m"
                    {
#line 1172 "post_typecheck.m"
                      check_hlds__post_typecheck__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_138_138, 0) = ((MR_Box) (check_hlds__post_typecheck__V_139_139));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])));
#line 1172 "post_typecheck.m"
                    }
#line 1171 "post_typecheck.m"
                    {
#line 1171 "post_typecheck.m"
                      check_hlds__post_typecheck__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_135_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[58])));
#line 1171 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_135_135, 1) = ((MR_Box) (check_hlds__post_typecheck__V_138_138));
#line 1171 "post_typecheck.m"
                    }
#line 1170 "post_typecheck.m"
                    {
#line 1170 "post_typecheck.m"
                      check_hlds__post_typecheck__Pieces_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[57])));
#line 1170 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_83, 1) = ((MR_Box) (check_hlds__post_typecheck__V_135_135));
#line 1170 "post_typecheck.m"
                    }
#line 1173 "post_typecheck.m"
                    {
#line 1173 "post_typecheck.m"
                      check_hlds__post_typecheck__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_148_148, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_83));
#line 1173 "post_typecheck.m"
                    }
#line 1173 "post_typecheck.m"
                    {
#line 1173 "post_typecheck.m"
                      check_hlds__post_typecheck__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_147_147, 0) = ((MR_Box) (check_hlds__post_typecheck__V_148_148));
#line 1173 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1173 "post_typecheck.m"
                    }
#line 1173 "post_typecheck.m"
                    {
#line 1173 "post_typecheck.m"
                      check_hlds__post_typecheck__Msg_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_84, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_199));
#line 1173 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_84, 1) = ((MR_Box) (check_hlds__post_typecheck__V_147_147));
#line 1173 "post_typecheck.m"
                    }
#line 1174 "post_typecheck.m"
                    {
#line 1174 "post_typecheck.m"
                      check_hlds__post_typecheck__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_152_152, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_84));
#line 1174 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "post_typecheck.m"
                    }
#line 1174 "post_typecheck.m"
                    {
#line 1174 "post_typecheck.m"
                      check_hlds__post_typecheck__Spec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 1174 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 2) = ((MR_Box) (check_hlds__post_typecheck__V_152_152));
#line 1174 "post_typecheck.m"
                    }
#line 1175 "post_typecheck.m"
                    {
#line 1175 "post_typecheck.m"
                      MR_Word base;
#line 1175 "post_typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "post_typecheck.m"
                      *check_hlds__post_typecheck__IsPlainUnify_29 = base;
#line 1175 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_85));
#line 1175 "post_typecheck.m"
                    }
#line 1168 "post_typecheck.m"
                  }
#line 1167 "post_typecheck.m"
                else
#line 1159 "post_typecheck.m"
                  {
#line 1159 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ShroudedPredProcId_80;
#line 1159 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ConsId_81;
#line 1159 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__GoalExpr_82;
#line 1159 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_154_154;
#line 1159 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_155_155;
#line 1159 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__ProcId_177 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, (MR_Integer) 0)));

#line 1160 "post_typecheck.m"
                    {
#line 1160 "post_typecheck.m"
                      check_hlds__post_typecheck__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_154_154, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_200));
#line 1160 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_154_154, 1) = ((MR_Box) (check_hlds__post_typecheck__ProcId_177));
#line 1160 "post_typecheck.m"
                    }
#line 1160 "post_typecheck.m"
                    {
#line 1160 "post_typecheck.m"
                      check_hlds__post_typecheck__ShroudedPredProcId_80 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(check_hlds__post_typecheck__V_154_154);
                    }
#line 1161 "post_typecheck.m"
                    {
#line 1161 "post_typecheck.m"
                      check_hlds__post_typecheck__ConsId_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1161 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 1) = ((MR_Box) (check_hlds__post_typecheck__ShroudedPredProcId_80));
#line 1161 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 2) = NULL;
#line 1161 "post_typecheck.m"
                    }
#line 1163 "post_typecheck.m"
                    {
#line 1163 "post_typecheck.m"
                      check_hlds__post_typecheck__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_155_155, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_81));
#line 1163 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_155_155, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1163 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_155_155, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1163 "post_typecheck.m"
                    }
#line 1162 "post_typecheck.m"
                    {
#line 1162 "post_typecheck.m"
                      check_hlds__post_typecheck__GoalExpr_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1162 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 1) = ((MR_Box) (check_hlds__post_typecheck__V_155_155));
#line 1162 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 2) = ((MR_Box) (check_hlds__post_typecheck__Mode0_20));
#line 1162 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 3) = ((MR_Box) (check_hlds__post_typecheck__Unification0_21));
#line 1162 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 4) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1162 "post_typecheck.m"
                    }
#line 1165 "post_typecheck.m"
                    {
#line 1165 "post_typecheck.m"
                      MR_Word base;
#line 1165 "post_typecheck.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = base;
#line 1165 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_82));
#line 1165 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1165 "post_typecheck.m"
                    }
#line 1166 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1159 "post_typecheck.m"
                  }
#line 1145 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108;
#line 1145 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106;
#line 1145 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104;
#line 1145 "post_typecheck.m"
              }
#line 1177 "post_typecheck.m"
            else
#line 1204 "post_typecheck.m"
              {
#line 1204 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__AccessType_87;
#line 1204 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__FieldName_88;
#line 1183 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarSet_180;
#line 1183 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ArgTypes0_181;
#line 1183 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Name_182;
#line 1183 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_208_208;
#line 1183 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_209_209;
#line 1183 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_86_86;

#line 1183 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1183 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1183 "post_typecheck.m"
                  {
#line 1183 "post_typecheck.m"
                    check_hlds__post_typecheck__Name_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1183 "post_typecheck.m"
                    check_hlds__post_typecheck__V_208_208 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1183 "post_typecheck.m"
                    check_hlds__post_typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1183 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_208_208);
#line 1183 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1183 "post_typecheck.m"
                      {
#line 1184 "post_typecheck.m"
                        {
#line 1184 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__Name_182, &check_hlds__post_typecheck__V_209_209, &check_hlds__post_typecheck__AccessType_87, &check_hlds__post_typecheck__FieldName_88);
                        }
#line 1183 "post_typecheck.m"
                        if (check_hlds__post_typecheck__succeeded)
#line 1183 "post_typecheck.m"
                          {
#line 1184 "post_typecheck.m"
                            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_209_209);
#line 1183 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1183 "post_typecheck.m"
                              {
#line 1189 "post_typecheck.m"
                                {
#line 1189 "post_typecheck.m"
                                  check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104);
                                }
#line 1189 "post_typecheck.m"
                                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1183 "post_typecheck.m"
                                if (check_hlds__post_typecheck__succeeded)
#line 1183 "post_typecheck.m"
                                  {
#line 1195 "post_typecheck.m"
                                    {
#line 1195 "post_typecheck.m"
                                      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__TVarSet_180);
                                    }
#line 1196 "post_typecheck.m"
                                    {
#line 1196 "post_typecheck.m"
                                      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_181);
                                    }
#line 1197 "post_typecheck.m"
                                    {
#line 1197 "post_typecheck.m"
                                      check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__find_matching_constructor_5_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__TVarSet_180, check_hlds__post_typecheck__ConsId0_18, check_hlds__post_typecheck__TypeOfX_30, check_hlds__post_typecheck__ArgTypes0_181);
                                    }
#line 1197 "post_typecheck.m"
                                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1183 "post_typecheck.m"
                                  }
#line 1183 "post_typecheck.m"
                              }
#line 1183 "post_typecheck.m"
                          }
#line 1183 "post_typecheck.m"
                      }
#line 1183 "post_typecheck.m"
                  }
#line 1204 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1202 "post_typecheck.m"
                  {
#line 1200 "post_typecheck.m"
                    {
#line 1200 "post_typecheck.m"
                      check_hlds__post_typecheck__finish_field_access_function_14_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107, check_hlds__post_typecheck__AccessType_87, check_hlds__post_typecheck__FieldName_88, check_hlds__post_typecheck__UnifyContext_22, check_hlds__post_typecheck__X0_17, check_hlds__post_typecheck__ArgVars0_19, check_hlds__post_typecheck__GoalInfo0_23, check_hlds__post_typecheck__Goal_28);
                    }
#line 1203 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1202 "post_typecheck.m"
                  }
#line 1204 "post_typecheck.m"
                else
#line 1206 "post_typecheck.m"
                  {
#line 1206 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__TypeCtorOfX_89;
#line 1206 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_170_170;
#line 1206 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ConsId_188;
#line 1206 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__GoalExpr_189;
#line 1234 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__SymName0_90;
#line 1207 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__V_210_210;
#line 1207 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck___OldTypeCtor_91;

#line 1206 "post_typecheck.m"
                    {
#line 1206 "post_typecheck.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TypeOfX_30, &check_hlds__post_typecheck__TypeCtorOfX_89);
                    }
#line 1207 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1207 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1207 "post_typecheck.m"
                      {
#line 1207 "post_typecheck.m"
                        check_hlds__post_typecheck__SymName0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1207 "post_typecheck.m"
                        check_hlds__post_typecheck__V_210_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1207 "post_typecheck.m"
                        check_hlds__post_typecheck___OldTypeCtor_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1207 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_210_210);
#line 1207 "post_typecheck.m"
                      }
#line 1234 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1210 "post_typecheck.m"
                      {
#line 1208 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_92_92;
#line 1208 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_93_93;

#line 1208 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__TypeOfX_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1208 "post_typecheck.m"
                        if (check_hlds__post_typecheck__succeeded)
#line 1208 "post_typecheck.m"
                          {
#line 1208 "post_typecheck.m"
                            check_hlds__post_typecheck__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 1)));
#line 1208 "post_typecheck.m"
                            check_hlds__post_typecheck__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 2)));
#line 1209 "post_typecheck.m"
                            {
#line 1209 "post_typecheck.m"
                              check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1209 "post_typecheck.m"
                              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1209 "post_typecheck.m"
                              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1209 "post_typecheck.m"
                            }
#line 1208 "post_typecheck.m"
                          }
#line 1208 "post_typecheck.m"
                        else
#line 1222 "post_typecheck.m"
                          {
#line 1210 "post_typecheck.m"
                            MR_Word check_hlds__post_typecheck__V_160_160;

#line 1210 "post_typecheck.m"
                            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__TypeOfX_30)) == (MR_mktag((MR_Integer) 2)));
#line 1210 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1210 "post_typecheck.m"
                              {
#line 1210 "post_typecheck.m"
                                check_hlds__post_typecheck__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 0)));
#line 1210 "post_typecheck.m"
                                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_160_160 == (MR_Integer) 3);
#line 1210 "post_typecheck.m"
                              }
#line 1222 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1218 "post_typecheck.m"
                              if (((MR_tag((MR_Word) check_hlds__post_typecheck__SymName0_90)) == (MR_mktag((MR_Integer) 1))))
#line 1219 "post_typecheck.m"
                                {
#line 1220 "post_typecheck.m"
                                  {
#line 1220 "post_typecheck.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "qualified char const");
#line 1220 "post_typecheck.m"
                                    return;
                                  }
#line 1219 "post_typecheck.m"
                                }
#line 1218 "post_typecheck.m"
                              else
#line 1212 "post_typecheck.m"
                                {
#line 1212 "post_typecheck.m"
                                  MR_String check_hlds__post_typecheck__Name0_94 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__SymName0_90, (MR_Integer) 0)));
#line 1215 "post_typecheck.m"
                                  MR_Char check_hlds__post_typecheck__Char_95;

#line 1213 "post_typecheck.m"
                                  {
#line 1213 "post_typecheck.m"
                                    check_hlds__post_typecheck__succeeded = mercury__term_io__encode_escaped_char_2_p_1(&check_hlds__post_typecheck__Char_95, check_hlds__post_typecheck__Name0_94);
                                  }
#line 1215 "post_typecheck.m"
                                  if (check_hlds__post_typecheck__succeeded)
#line 1214 "post_typecheck.m"
                                    {
#line 1214 "post_typecheck.m"
                                      check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1214 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (MR_Word) (check_hlds__post_typecheck__Char_95));
#line 1214 "post_typecheck.m"
                                    }
#line 1215 "post_typecheck.m"
                                  else
#line 1216 "post_typecheck.m"
                                    {
#line 1216 "post_typecheck.m"
                                      {
#line 1216 "post_typecheck.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "encode_escaped_char");
#line 1216 "post_typecheck.m"
                                        return;
                                      }
#line 1216 "post_typecheck.m"
                                    }
#line 1212 "post_typecheck.m"
                                }
#line 1222 "post_typecheck.m"
                            else
#line 1223 "post_typecheck.m"
                              {
#line 1223 "post_typecheck.m"
                                MR_Word check_hlds__post_typecheck__TypeCtorSymName_98;
#line 1223 "post_typecheck.m"
                                MR_String check_hlds__post_typecheck__Name_183;
#line 1224 "post_typecheck.m"
                                MR_Integer check_hlds__post_typecheck__V_99_99;

#line 1223 "post_typecheck.m"
                                {
#line 1223 "post_typecheck.m"
                                  check_hlds__post_typecheck__Name_183 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__SymName0_90);
                                }
#line 1224 "post_typecheck.m"
                                check_hlds__post_typecheck__TypeCtorSymName_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtorOfX_89, (MR_Integer) 0)));
#line 1224 "post_typecheck.m"
                                check_hlds__post_typecheck__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtorOfX_89, (MR_Integer) 1)));
#line 1229 "post_typecheck.m"
                                if (((MR_tag((MR_Word) check_hlds__post_typecheck__TypeCtorSymName_98)) == (MR_mktag((MR_Integer) 1))))
#line 1226 "post_typecheck.m"
                                  {
#line 1226 "post_typecheck.m"
                                    MR_Word check_hlds__post_typecheck__TypeCtorModule_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TypeCtorSymName_98, (MR_Integer) 0)));
#line 1226 "post_typecheck.m"
                                    MR_Word check_hlds__post_typecheck__SymName_102;
#line 1226 "post_typecheck.m"
                                    MR_String check_hlds__post_typecheck__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TypeCtorSymName_98, (MR_Integer) 1)));

#line 1227 "post_typecheck.m"
                                    {
#line 1227 "post_typecheck.m"
                                      check_hlds__post_typecheck__SymName_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__SymName_102, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeCtorModule_100));
#line 1227 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__SymName_102, 1) = ((MR_Box) (check_hlds__post_typecheck__Name_183));
#line 1227 "post_typecheck.m"
                                    }
#line 1228 "post_typecheck.m"
                                    {
#line 1228 "post_typecheck.m"
                                      check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1228 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_102));
#line 1228 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1228 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtorOfX_89));
#line 1228 "post_typecheck.m"
                                    }
#line 1226 "post_typecheck.m"
                                  }
#line 1229 "post_typecheck.m"
                                else
#line 1230 "post_typecheck.m"
                                  {
#line 1231 "post_typecheck.m"
                                    {
#line 1231 "post_typecheck.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "unqualified type_ctor");
#line 1231 "post_typecheck.m"
                                      return;
                                    }
#line 1230 "post_typecheck.m"
                                  }
#line 1223 "post_typecheck.m"
                              }
#line 1222 "post_typecheck.m"
                          }
#line 1210 "post_typecheck.m"
                      }
#line 1234 "post_typecheck.m"
                    else
#line 1235 "post_typecheck.m"
                      check_hlds__post_typecheck__ConsId_188 = check_hlds__post_typecheck__ConsId0_18;
#line 1238 "post_typecheck.m"
                    {
#line 1238 "post_typecheck.m"
                      check_hlds__post_typecheck__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_170_170, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_188));
#line 1238 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_170_170, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1238 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_170_170, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1238 "post_typecheck.m"
                    }
#line 1237 "post_typecheck.m"
                    {
#line 1237 "post_typecheck.m"
                      check_hlds__post_typecheck__GoalExpr_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1237 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 1) = ((MR_Box) (check_hlds__post_typecheck__V_170_170));
#line 1237 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 2) = ((MR_Box) (check_hlds__post_typecheck__Mode0_20));
#line 1237 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 3) = ((MR_Box) (check_hlds__post_typecheck__Unification0_21));
#line 1237 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 4) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1237 "post_typecheck.m"
                    }
#line 1240 "post_typecheck.m"
                    {
#line 1240 "post_typecheck.m"
                      MR_Word base;
#line 1240 "post_typecheck.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = base;
#line 1240 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_189));
#line 1240 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1240 "post_typecheck.m"
                    }
#line 1241 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1206 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108;
#line 1206 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106;
#line 1206 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104;
#line 1206 "post_typecheck.m"
                  }
#line 1204 "post_typecheck.m"
              }
#line 1177 "post_typecheck.m"
          }
#line 1122 "post_typecheck.m"
      }
#line 1036 "post_typecheck.m"
  }
#line 119 "post_typecheck.m"
}

#line 107 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__finally_resolve_pred_overloading_8_p_0(
#line 107 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args0_9,
#line 107 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__CallerPredInfo_10,
#line 107 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_11,
#line 107 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 107 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredName_0_22,
#line 107 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredName_23,
#line 107 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24,
#line 107 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredId_25)
#line 107 "post_typecheck.m"
{
#line 573 "post_typecheck.m"
  {
#line 573 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 561 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_29_29;

#line 561 "post_typecheck.m"
    {
#line 561 "post_typecheck.m"
      check_hlds__post_typecheck__V_29_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 561 "post_typecheck.m"
    {
#line 561 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24, check_hlds__post_typecheck__V_29_29);
    }
#line 573 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 564 "post_typecheck.m"
      {
#line 564 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_15;
#line 564 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistQVars_16;
#line 564 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadTypeParams_17;
#line 564 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Markers_18;
#line 564 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_19;
#line 564 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypes_20;
#line 564 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_21;

#line 564 "post_typecheck.m"
        {
#line 564 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__TVarSet_15);
        }
#line 565 "post_typecheck.m"
        {
#line 565 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__ExistQVars_16);
        }
#line 566 "post_typecheck.m"
        {
#line 566 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__HeadTypeParams_17);
        }
#line 567 "post_typecheck.m"
        {
#line 567 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__Markers_18);
        }
#line 568 "post_typecheck.m"
        {
#line 568 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__ClausesInfo_19);
        }
#line 569 "post_typecheck.m"
        {
#line 569 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo_19, &check_hlds__post_typecheck__VarTypes_20);
        }
#line 570 "post_typecheck.m"
        {
#line 570 "post_typecheck.m"
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__post_typecheck__VarTypes_20, check_hlds__post_typecheck__Args0_9, &check_hlds__post_typecheck__ArgTypes_21);
        }
#line 571 "post_typecheck.m"
        {
#line 571 "post_typecheck.m"
          hlds__pred_table__resolve_pred_overloading_10_p_0(check_hlds__post_typecheck__ModuleInfo_11, check_hlds__post_typecheck__Markers_18, check_hlds__post_typecheck__TVarSet_15, check_hlds__post_typecheck__ExistQVars_16, check_hlds__post_typecheck__ArgTypes_21, check_hlds__post_typecheck__HeadTypeParams_17, check_hlds__post_typecheck__Context_12, check_hlds__post_typecheck__STATE_VARIABLE_PredName_0_22, check_hlds__post_typecheck__STATE_VARIABLE_PredName_23, check_hlds__post_typecheck__STATE_VARIABLE_PredId_25);
#line 571 "post_typecheck.m"
          return;
        }
#line 564 "post_typecheck.m"
      }
#line 573 "post_typecheck.m"
    else
#line 574 "post_typecheck.m"
      {
#line 574 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo_34;
#line 574 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredModule_35;
#line 574 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__PredName_36;

#line 580 "post_typecheck.m"
        {
#line 580 "post_typecheck.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_11, check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24, &check_hlds__post_typecheck__PredInfo_34);
        }
#line 581 "post_typecheck.m"
        {
#line 581 "post_typecheck.m"
          check_hlds__post_typecheck__PredModule_35 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__post_typecheck__PredInfo_34);
        }
#line 582 "post_typecheck.m"
        {
#line 582 "post_typecheck.m"
          check_hlds__post_typecheck__PredName_36 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PredInfo_34);
        }
#line 583 "post_typecheck.m"
        {
#line 583 "post_typecheck.m"
          MR_Word base;
#line 583 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_PredName_23 = base;
#line 583 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__PredModule_35));
#line 583 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__PredName_36));
#line 583 "post_typecheck.m"
        }
#line 574 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredId_25 = check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24;
#line 574 "post_typecheck.m"
      }
#line 573 "post_typecheck.m"
  }
#line 107 "post_typecheck.m"
}

#line 658 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1(
#line 658 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 658 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 658 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 658 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3)
#line 658 "post_typecheck.m"
{
#line 658 "post_typecheck.m"
  {
#line 658 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 658 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__4_4;

#line 658 "post_typecheck.m"
    {
#line 658 "post_typecheck.m"
      hlds__hlds_data__exclusive_table_add_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv0_HeadVar__4_4);
    }
#line 658 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__4_4));
#line 658 "post_typecheck.m"
  }
#line 658 "post_typecheck.m"
}

#line 101 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0(
#line 101 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PromiseType_7,
#line 101 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PromiseId_8,
#line 101 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13,
#line 101 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14,
#line 101 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 101 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16)
#line 101 "post_typecheck.m"
{
#line 607 "post_typecheck.m"
  {
#line 607 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 607 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goal_11;
#line 607 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredInfo_12;
#line 607 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17;

#line 643 "post_typecheck.m"
#line 643 "post_typecheck.m"
    switch (check_hlds__post_typecheck__PromiseType_7) {
#line 643 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 643 "post_typecheck.m"
      case (MR_Integer) 0:
#line 643 "post_typecheck.m"
      case (MR_Integer) 2:
#line 654 "post_typecheck.m"
        {
#line 654 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__PredIds_29;
#line 654 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Table0_30;
#line 654 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Table_31;
#line 654 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_32_32;
#line 654 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__PredInfo_44;
#line 654 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesInfo_45;
#line 654 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesRep_46;
#line 654 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Clauses_48;
#line 673 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck___ItemNumbers_47;
#line 678 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Clause_49;
#line 675 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_51_51;
#line 658 "post_typecheck.m"
          MR_Box check_hlds__post_typecheck__conv1_Table_31;

#line 671 "post_typecheck.m"
          {
#line 671 "post_typecheck.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_44);
          }
#line 672 "post_typecheck.m"
          {
#line 672 "post_typecheck.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_44, &check_hlds__post_typecheck__ClausesInfo_45);
          }
#line 673 "post_typecheck.m"
          {
#line 673 "post_typecheck.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_45, &check_hlds__post_typecheck__ClausesRep_46, &check_hlds__post_typecheck___ItemNumbers_47);
          }
#line 674 "post_typecheck.m"
          {
#line 674 "post_typecheck.m"
            hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__post_typecheck__ClausesRep_46, &check_hlds__post_typecheck__Clauses_48);
          }
#line 675 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Clauses_48)) == (MR_mktag((MR_Integer) 1)));
#line 675 "post_typecheck.m"
          if (check_hlds__post_typecheck__succeeded)
#line 675 "post_typecheck.m"
            {
#line 675 "post_typecheck.m"
              check_hlds__post_typecheck__Clause_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_48, (MR_Integer) 0)));
#line 675 "post_typecheck.m"
              check_hlds__post_typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_48, (MR_Integer) 1)));
#line 675 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "post_typecheck.m"
            }
#line 678 "post_typecheck.m"
          if (check_hlds__post_typecheck__succeeded)
#line 676 "post_typecheck.m"
            {
#line 676 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Goal0_50;

#line 676 "post_typecheck.m"
              {
#line 676 "post_typecheck.m"
                check_hlds__post_typecheck__Goal0_50 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__post_typecheck__Clause_49);
              }
#line 677 "post_typecheck.m"
              {
#line 677 "post_typecheck.m"
                hlds__assertion__normalise_goal_2_p_0(check_hlds__post_typecheck__Goal0_50, &check_hlds__post_typecheck__Goal_11);
              }
#line 676 "post_typecheck.m"
            }
#line 678 "post_typecheck.m"
          else
#line 679 "post_typecheck.m"
            {
#line 679 "post_typecheck.m"
              {
#line 679 "post_typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.promise_ex_goal\'/3", (MR_String) "not a single clause");
#line 679 "post_typecheck.m"
                return;
              }
#line 679 "post_typecheck.m"
            }
#line 656 "post_typecheck.m"
          {
#line 656 "post_typecheck.m"
            hlds__goal_util__predids_from_goal_2_p_0(check_hlds__post_typecheck__Goal_11, &check_hlds__post_typecheck__PredIds_29);
          }
#line 657 "post_typecheck.m"
          {
#line 657 "post_typecheck.m"
            hlds__hlds_module__module_info_get_exclusive_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__Table0_30);
          }
#line 658 "post_typecheck.m"
          {
#line 658 "post_typecheck.m"
            check_hlds__post_typecheck__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 658 "post_typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[1]));
#line 658 "post_typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1));
#line 658 "post_typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 658 "post_typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 3) = ((MR_Box) (check_hlds__post_typecheck__PromiseId_8));
#line 658 "post_typecheck.m"
          }
#line 658 "post_typecheck.m"
          {
#line 658 "post_typecheck.m"
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[2], check_hlds__post_typecheck__V_32_32, check_hlds__post_typecheck__PredIds_29, ((MR_Box) (check_hlds__post_typecheck__Table0_30)), &check_hlds__post_typecheck__conv1_Table_31);
          }
#line 658 "post_typecheck.m"
          check_hlds__post_typecheck__Table_31 = ((MR_Word) check_hlds__post_typecheck__conv1_Table_31);
#line 659 "post_typecheck.m"
          {
#line 659 "post_typecheck.m"
            hlds__hlds_module__module_info_set_exclusive_table_3_p_0(check_hlds__post_typecheck__Table_31, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17);
          }
#line 654 "post_typecheck.m"
        }
#line 643 "post_typecheck.m"
        break;
#line 643 "post_typecheck.m"
      case (MR_Integer) 1:
#line 662 "post_typecheck.m"
        {
#line 662 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__PredInfo_58;
#line 662 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesInfo_59;
#line 662 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesRep_60;
#line 662 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Clauses_62;
#line 673 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck___ItemNumbers_61;
#line 678 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Clause_63;
#line 675 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_65_65;

#line 671 "post_typecheck.m"
          {
#line 671 "post_typecheck.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_58);
          }
#line 672 "post_typecheck.m"
          {
#line 672 "post_typecheck.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_58, &check_hlds__post_typecheck__ClausesInfo_59);
          }
#line 673 "post_typecheck.m"
          {
#line 673 "post_typecheck.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_59, &check_hlds__post_typecheck__ClausesRep_60, &check_hlds__post_typecheck___ItemNumbers_61);
          }
#line 674 "post_typecheck.m"
          {
#line 674 "post_typecheck.m"
            hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__post_typecheck__ClausesRep_60, &check_hlds__post_typecheck__Clauses_62);
          }
#line 675 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Clauses_62)) == (MR_mktag((MR_Integer) 1)));
#line 675 "post_typecheck.m"
          if (check_hlds__post_typecheck__succeeded)
#line 675 "post_typecheck.m"
            {
#line 675 "post_typecheck.m"
              check_hlds__post_typecheck__Clause_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_62, (MR_Integer) 0)));
#line 675 "post_typecheck.m"
              check_hlds__post_typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_62, (MR_Integer) 1)));
#line 675 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "post_typecheck.m"
            }
#line 678 "post_typecheck.m"
          if (check_hlds__post_typecheck__succeeded)
#line 676 "post_typecheck.m"
            {
#line 676 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Goal0_64;

#line 676 "post_typecheck.m"
              {
#line 676 "post_typecheck.m"
                check_hlds__post_typecheck__Goal0_64 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__post_typecheck__Clause_63);
              }
#line 677 "post_typecheck.m"
              {
#line 677 "post_typecheck.m"
                hlds__assertion__normalise_goal_2_p_0(check_hlds__post_typecheck__Goal0_64, &check_hlds__post_typecheck__Goal_11);
              }
#line 676 "post_typecheck.m"
            }
#line 678 "post_typecheck.m"
          else
#line 679 "post_typecheck.m"
            {
#line 679 "post_typecheck.m"
              {
#line 679 "post_typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.promise_ex_goal\'/3", (MR_String) "not a single clause");
#line 679 "post_typecheck.m"
                return;
              }
#line 679 "post_typecheck.m"
            }
#line 662 "post_typecheck.m"
          check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17 = check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13;
#line 662 "post_typecheck.m"
        }
#line 643 "post_typecheck.m"
        break;
#line 643 "post_typecheck.m"
      case (MR_Integer) 3:
#line 643 "post_typecheck.m"
        {
#line 643 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__AssertTable0_26;
#line 643 "post_typecheck.m"
          MR_Integer check_hlds__post_typecheck__AssertionId_27;
#line 643 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__AssertTable_28;
#line 643 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34;

#line 644 "post_typecheck.m"
          {
#line 644 "post_typecheck.m"
            hlds__hlds_module__module_info_get_assertion_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__AssertTable0_26);
          }
#line 645 "post_typecheck.m"
          {
#line 645 "post_typecheck.m"
            hlds__hlds_data__assertion_table_add_assertion_4_p_0(check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__AssertionId_27, check_hlds__post_typecheck__AssertTable0_26, &check_hlds__post_typecheck__AssertTable_28);
          }
#line 647 "post_typecheck.m"
          {
#line 647 "post_typecheck.m"
            hlds__hlds_module__module_info_set_assertion_table_3_p_0(check_hlds__post_typecheck__AssertTable_28, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34);
          }
#line 648 "post_typecheck.m"
          {
#line 648 "post_typecheck.m"
            hlds__assertion__assert_id_goal_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34, check_hlds__post_typecheck__AssertionId_27, &check_hlds__post_typecheck__Goal_11);
          }
#line 649 "post_typecheck.m"
          {
#line 649 "post_typecheck.m"
            hlds__assertion__record_preds_used_in_4_p_0(check_hlds__post_typecheck__Goal_11, check_hlds__post_typecheck__AssertionId_27, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17);
          }
#line 643 "post_typecheck.m"
        }
#line 643 "post_typecheck.m"
        break;
#line 643 "post_typecheck.m"
    }
#line 623 "post_typecheck.m"
    {
#line 623 "post_typecheck.m"
      hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__post_typecheck__PromiseId_8, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14);
    }
#line 627 "post_typecheck.m"
    {
#line 627 "post_typecheck.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_12);
    }
#line 628 "post_typecheck.m"
    {
#line 628 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__post_typecheck__PredInfo_12);
    }
#line 630 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 629 "post_typecheck.m"
      {
#line 629 "post_typecheck.m"
        check_hlds__post_typecheck__in_interface_check_5_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14, check_hlds__post_typecheck__PredInfo_12, check_hlds__post_typecheck__Goal_11, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15, check_hlds__post_typecheck__STATE_VARIABLE_Specs_16);
#line 629 "post_typecheck.m"
        return;
      }
#line 630 "post_typecheck.m"
    else
#line 630 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_16 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15;
#line 607 "post_typecheck.m"
  }
#line 101 "post_typecheck.m"
}

#line 95 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(
#line 95 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_5,
#line 95 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ErrorProcIds_6,
#line 95 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13,
#line 95 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_14)
#line 95 "post_typecheck.m"
{
#line 591 "post_typecheck.m"
  {
#line 591 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 591 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15;
#line 591 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_22;
#line 591 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs0_23;
#line 591 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcIds_24;
#line 591 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RevErrorProcIds_25;
#line 591 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs_26;

#line 595 "post_typecheck.m"
    {
#line 595 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13);
    }
#line 597 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 597 "post_typecheck.m"
      check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13;
#line 597 "post_typecheck.m"
    else
#line 598 "post_typecheck.m"
      {
#line 598 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo0_8;
#line 598 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadVars_9;
#line 598 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_10;
#line 598 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypes_11;
#line 598 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_12;

#line 598 "post_typecheck.m"
        {
#line 598 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__ClausesInfo0_8);
        }
#line 599 "post_typecheck.m"
        {
#line 599 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__post_typecheck__ClausesInfo0_8, &check_hlds__post_typecheck__HeadVars_9);
        }
#line 600 "post_typecheck.m"
        {
#line 600 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__ArgTypes_10);
        }
#line 601 "post_typecheck.m"
        {
#line 601 "post_typecheck.m"
          hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(check_hlds__post_typecheck__HeadVars_9, check_hlds__post_typecheck__ArgTypes_10, &check_hlds__post_typecheck__VarTypes_11);
        }
#line 602 "post_typecheck.m"
        {
#line 602 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__post_typecheck__VarTypes_11, check_hlds__post_typecheck__ClausesInfo0_8, &check_hlds__post_typecheck__ClausesInfo_12);
        }
#line 603 "post_typecheck.m"
        {
#line 603 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__post_typecheck__ClausesInfo_12, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15);
        }
#line 598 "post_typecheck.m"
      }
#line 873 "post_typecheck.m"
    {
#line 873 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, &check_hlds__post_typecheck__ArgTypes_22);
    }
#line 874 "post_typecheck.m"
    {
#line 874 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, &check_hlds__post_typecheck__Procs0_23);
    }
#line 875 "post_typecheck.m"
    {
#line 875 "post_typecheck.m"
      check_hlds__post_typecheck__ProcIds_24 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15);
    }
#line 876 "post_typecheck.m"
    {
#line 876 "post_typecheck.m"
      check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(check_hlds__post_typecheck__ModuleInfo_5, check_hlds__post_typecheck__ProcIds_24, check_hlds__post_typecheck__ArgTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__RevErrorProcIds_25, check_hlds__post_typecheck__Procs0_23, &check_hlds__post_typecheck__Procs_26);
    }
#line 878 "post_typecheck.m"
    {
#line 878 "post_typecheck.m"
      *check_hlds__post_typecheck__ErrorProcIds_6 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__RevErrorProcIds_25);
    }
#line 879 "post_typecheck.m"
    {
#line 879 "post_typecheck.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__Procs_26, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_14);
#line 879 "post_typecheck.m"
      return;
    }
#line 591 "post_typecheck.m"
  }
#line 95 "post_typecheck.m"
}

#line 92 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(
#line 92 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_5,
#line 92 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ErrorProcs_6,
#line 92 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8,
#line 92 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_9)
#line 92 "post_typecheck.m"
{
#line 872 "post_typecheck.m"
  {
#line 872 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 872 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_16;
#line 872 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs0_17;
#line 872 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcIds_18;
#line 872 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RevErrorProcIds_19;
#line 872 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs_20;

#line 873 "post_typecheck.m"
    {
#line 873 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, &check_hlds__post_typecheck__ArgTypes_16);
    }
#line 874 "post_typecheck.m"
    {
#line 874 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, &check_hlds__post_typecheck__Procs0_17);
    }
#line 875 "post_typecheck.m"
    {
#line 875 "post_typecheck.m"
      check_hlds__post_typecheck__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8);
    }
#line 876 "post_typecheck.m"
    {
#line 876 "post_typecheck.m"
      check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(check_hlds__post_typecheck__ModuleInfo_5, check_hlds__post_typecheck__ProcIds_18, check_hlds__post_typecheck__ArgTypes_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__RevErrorProcIds_19, check_hlds__post_typecheck__Procs0_17, &check_hlds__post_typecheck__Procs_20);
    }
#line 878 "post_typecheck.m"
    {
#line 878 "post_typecheck.m"
      *check_hlds__post_typecheck__ErrorProcs_6 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__RevErrorProcIds_19);
    }
#line 879 "post_typecheck.m"
    {
#line 879 "post_typecheck.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__Procs_20, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_9);
#line 879 "post_typecheck.m"
      return;
    }
#line 872 "post_typecheck.m"
  }
#line 92 "post_typecheck.m"
}

#line 85 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(
#line 85 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18,
#line 85 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_19,
#line 85 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_7,
#line 85 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__AlwaysSpecs_8,
#line 85 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__NoTypeErrorSpecs_9)
#line 85 "post_typecheck.m"
{
#line 174 "post_typecheck.m"
  {
#line 174 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_21_21;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_22_22;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_23_23;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ValidPredIds_10;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ValidPredIdSet_11;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredMap0_12;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdsInfos0_13;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdsInfos_14;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__AlwaysSpecsList_15;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NoTypeErrorSpecsList_16;
#line 174 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredMap_17;

#line 175 "post_typecheck.m"
    {
#line 175 "post_typecheck.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__post_typecheck__ValidPredIds_10);
    }
#line 12188 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 176 "post_typecheck.m"
    {
#line 176 "post_typecheck.m"
      check_hlds__post_typecheck__ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__ValidPredIds_10);
    }
#line 177 "post_typecheck.m"
    {
#line 177 "post_typecheck.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__post_typecheck__PredMap0_12);
    }
#line 12200 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 178 "post_typecheck.m"
    {
#line 178 "post_typecheck.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__TypeCtorInfo_22_22, check_hlds__post_typecheck__PredMap0_12, &check_hlds__post_typecheck__PredIdsInfos0_13);
    }
#line 179 "post_typecheck.m"
    {
#line 179 "post_typecheck.m"
      check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, check_hlds__post_typecheck__ValidPredIdSet_11, check_hlds__post_typecheck__PredIdsInfos0_13, &check_hlds__post_typecheck__PredIdsInfos_14, check_hlds__post_typecheck__NumBadErrors_7, &check_hlds__post_typecheck__AlwaysSpecsList_15, &check_hlds__post_typecheck__NoTypeErrorSpecsList_16);
    }
#line 12212 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 182 "post_typecheck.m"
    {
#line 182 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_23_23, check_hlds__post_typecheck__AlwaysSpecsList_15, check_hlds__post_typecheck__AlwaysSpecs_8);
    }
#line 183 "post_typecheck.m"
    {
#line 183 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_23_23, check_hlds__post_typecheck__NoTypeErrorSpecsList_16, check_hlds__post_typecheck__NoTypeErrorSpecs_9);
    }
#line 184 "post_typecheck.m"
    {
#line 184 "post_typecheck.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__TypeCtorInfo_22_22, check_hlds__post_typecheck__PredIdsInfos_14, &check_hlds__post_typecheck__PredMap_17);
    }
#line 185 "post_typecheck.m"
    {
#line 185 "post_typecheck.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__post_typecheck__PredMap_17, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_19);
#line 185 "post_typecheck.m"
      return;
    }
#line 174 "post_typecheck.m"
  }
#line 85 "post_typecheck.m"
}

#line 1621 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0_1(
#line 1621 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1621 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1621 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 1621 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3,
#line 1621 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_4)
#line 1621 "post_typecheck.m"
{
#line 1621 "post_typecheck.m"
  {
#line 1621 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1621 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20;

#line 1621 "post_typecheck.m"
    {
#line 1621 "post_typecheck.m"
      check_hlds__post_typecheck__check_for_missing_type_defns_2_4_p_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_3), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20);
    }
#line 1621 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_4 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20));
#line 1621 "post_typecheck.m"
  }
#line 1621 "post_typecheck.m"
}

#line 60 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0(
#line 60 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_3,
#line 60 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Specs_4)
#line 60 "post_typecheck.m"
{
#line 1619 "post_typecheck.m"
  {
#line 1619 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1619 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_5;
#line 1621 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_Specs_4;

#line 1620 "post_typecheck.m"
    {
#line 1620 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_3, &check_hlds__post_typecheck__TypeTable_5);
    }
#line 1621 "post_typecheck.m"
    {
#line 1621 "post_typecheck.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], (MR_Word) &check_hlds__post_typecheck_scalar_common_2[4], check_hlds__post_typecheck__TypeTable_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__post_typecheck__conv1_Specs_4);
    }
#line 1621 "post_typecheck.m"
    *check_hlds__post_typecheck__Specs_4 = ((MR_Word) check_hlds__post_typecheck__conv1_Specs_4);
#line 1619 "post_typecheck.m"
  }
#line 60 "post_typecheck.m"
}

void mercury__check_hlds__post_typecheck__init(void)
{
}

void mercury__check_hlds__post_typecheck__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__post_typecheck__check_hlds__post_typecheck__type_ctor_info_is_plain_unify_0);
}

void mercury__check_hlds__post_typecheck__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.post_typecheck. */
