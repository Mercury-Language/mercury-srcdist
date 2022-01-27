/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 425 "post_typecheck.m"
struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s {
#line 425 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__Clauses_10;
#line 425 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__HeadVar__3_25;
#line 425 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__cont;
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__cont_env_ptr;
#line 425 "post_typecheck.m"
  MR_bool check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__succeeded;
#line 425 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__ConstraintId_17;
#line 425 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__ConstraintGoalId_19;
#line 426 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__conv0_ConstraintId_17;
#line 429 "post_typecheck.m"
  jmp_buf check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__commit_0;
#line 429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__Clause_21;
#line 429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__GoalInfo_23;
#line 429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__GoalId_24;
#line 429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_26_26;
#line 429 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_35_35;
#line 429 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_36_36;
#line 429 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__conv1_Clause_21;
#line 425 "post_typecheck.m"
};

#line 881 "post_typecheck.m"
struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s {
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1;
#line 885 "post_typecheck.m"
  MR_bool check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded;
#line 887 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24;
#line 896 "post_typecheck.m"
  jmp_buf check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0;
#line 881 "post_typecheck.m"
};

#line 425 "post_typecheck.m"
struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s {
#line 425 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1;
#line 425 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont;
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr;
#line 425 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_HeadVar__3_25;
#line 425 "post_typecheck.m"
};


#line 215 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 218 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 221 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 224 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 227 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 230 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 233 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 236 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 239 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 242 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 245 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 248 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

#line 251 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0;

#line 254 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 257 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 260 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 263 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0;

#line 266 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1;

#line 269 "check_hlds.post_typecheck.c"
static const MR_PseudoTypeInfo check_hlds__post_typecheck__check_hlds__post_typecheck__field_types_is_plain_unify_0_2[1];

#line 272 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2;

#line 275 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_0[2];

#line 278 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_1[1];

#line 281 "check_hlds.post_typecheck.c"
static const MR_DuPtagLayout check_hlds__post_typecheck__check_hlds__post_typecheck__du_ptag_ordered_is_plain_unify_0[2];

#line 284 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_name_ordered_is_plain_unify_0[3];

#line 287 "check_hlds.post_typecheck.c"
static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_is_plain_unify_0[3];

#line 290 "check_hlds.post_typecheck.c"
static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0_10001(
#line 293 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 295 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2);

#line 298 "check_hlds.post_typecheck.c"
static void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0_10001(
#line 301 "check_hlds.post_typecheck.c"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 303 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 305 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3);

#line 1426 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1426__1_1_f_0(
#line 1426 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_51);

#line 1263 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1263__1_1_f_0(
#line 1263 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_31);

#line 426 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_2(
#line 426 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_3(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_5(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_6(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_4(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_7(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 425 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_1(
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 425 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0(
#line 425 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Clauses_10,
#line 425 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConstraintIds_14,
#line 425 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__3_25,
#line 425 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr);

#line 352 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__352__1_3_p_0(
#line 352 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_23,
#line 352 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_24,
#line 352 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__3_25);

#line 1622 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_4_p_0(
#line 1622 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_5,
#line 1622 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeDefn_6,
#line 1622 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 1622 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20);

#line 1608 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_var_6_p_0(
#line 1608 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_7,
#line 1608 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Var_8,
#line 1608 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11,
#line 1608 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12,
#line 1608 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13,
#line 1608 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14);

#line 1600 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_vars_6_p_0(
#line 1600 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Types_7,
#line 1600 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Vars_8,
#line 1600 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12,
#line 1600 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13,
#line 1600 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14,
#line 1600 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15);

#line 1576 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_8,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_9,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_10,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RestrictNonLocals_11,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarsList_12,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_13,
#line 1576 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_14);

#line 1559 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__search_for_named_field_4_p_0(
#line 1559 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1559 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_7,
#line 1559 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__CurFieldNumber_8,
#line 1559 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NamedFieldNumber_9);

#line 1543 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_2_5_p_0(
#line 1543 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_1,
#line 1543 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1543 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_3,
#line 1543 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_4,
#line 1543 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_5);

#line 1520 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(
#line 1520 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1520 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_7,
#line 1520 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldSymName_8,
#line 1520 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_9,
#line 1520 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_10);

#line 1500 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__split_list_at_index_5_p_0(
#line 1500 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeInfo_for_T_20,
#line 1500 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__Index_6,
#line 1500 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__List_7,
#line 1500 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Before_8,
#line 1500 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__At_9,
#line 1500 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__After_10);

#line 1489 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__unify_constraint_list_5_p_0(
#line 1489 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1489 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1489 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVars_3,
#line 1489 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4,
#line 1489 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Subst_5);

#line 1426 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
#line 1426 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1426 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 1415 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_9,
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalId_10,
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_11,
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_12,
#line 1415 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualArgTypes_13,
#line 1415 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualExistQVars_14,
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48,
#line 1415 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49);

#line 1348 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_set_function_14_p_0(
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55,
#line 1348 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57,
#line 1348 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59,
#line 1348 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_19,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_20,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_21,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_22,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermOutputVar_23,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_24,
#line 1348 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_25);

#line 1299 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_get_function_13_p_0(
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_14,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45,
#line 1299 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47,
#line 1299 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49,
#line 1299 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_18,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_19,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_20,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_21,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_22,
#line 1299 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__GoalExpr_23);

#line 1277 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__finish_field_access_function_14_p_0(
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29,
#line 1277 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31,
#line 1277 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33,
#line 1277 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__AccessType_19,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_20,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_21,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_22,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args_23,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo_24,
#line 1277 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__14_14);

#line 1263 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0_1(
#line 1263 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1263 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 1247 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0(
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_7,
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_8,
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_9,
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_10);

#line 984 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 984 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId1_3,
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__4_4,
#line 984 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__5_5,
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6,
#line 984 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7,
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8,
#line 984 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_9);

#line 964 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PrevProcIds_4,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5,
#line 964 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7,
#line 964 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_8);

#line 921 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
#line 921 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 921 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 921 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId_10,
#line 921 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Procs0_11,
#line 921 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Procs_12,
#line 921 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20,
#line 921 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_21);

#line 916 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 916 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 916 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5);

#line 905 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ErrorProcIds_10,
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17,
#line 905 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18,
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 905 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20);

#line 896 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
#line 896 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 896 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
#line 896 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 881 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_3,
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4,
#line 881 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5,
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6,
#line 881 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Procs_7);

#line 832 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
#line 832 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 832 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13,
#line 832 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_14);

#line 811 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(
#line 811 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 811 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_7,
#line 811 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IdPieces_8,
#line 811 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 811 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16);

#line 801 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_list_5_p_0(
#line 801 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 801 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 801 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 801 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4,
#line 801 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_5);

#line 768 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_unify_rhs_7_p_0(
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_10,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_11,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36,
#line 768 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);

#line 686 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_5_p_0(
#line 686 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 686 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_7,
#line 686 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_8,
#line 686 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64,
#line 686 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);

#line 545 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
#line 545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_5,
#line 545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_6,
#line 545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3);

#line 516 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
#line 516 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 516 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 504 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_10,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_11,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Errs_12,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24,
#line 504 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_25);

#line 462 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
#line 462 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_4,
#line 462 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_5);

#line 438 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
#line 438 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 438 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2);

#line 425 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 425 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
#line 425 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 425 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 425 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr);

#line 411 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
#line 411 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 411 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_5);

#line 400 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
#line 400 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarset_4,
#line 400 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraint_5);

#line 383 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
#line 383 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 383 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 366 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_10,
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22,
#line 366 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_23);

#line 318 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_2_8_p_0(
#line 318 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 318 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_2,
#line 318 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__VarsToDo_3,
#line 318 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 318 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5,
#line 318 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6,
#line 318 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7,
#line 318 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Set_8);

#line 301 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_6_p_0(
#line 301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarTypes_7,
#line 301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_8,
#line 301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14,
#line 301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15,
#line 301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0_16,
#line 301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Set_17);

#line 352 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0_1(
#line 352 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 352 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 352 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 352 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3);

#line 253 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(
#line 253 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 253 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 253 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 253 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33,
#line 253 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_10,
#line 253 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34);

#line 916 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1(
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 916 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 916 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5);

#line 211 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(
#line 211 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 211 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 211 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15,
#line 211 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16,
#line 211 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_11,
#line 211 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17,
#line 211 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18);

#line 185 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(
#line 185 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 185 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ValidPredIdSet_2,
#line 185 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 185 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 185 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__HeadVar__5_5,
#line 185 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__6_6,
#line 185 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__7_7);

#line 1103 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1(
#line 1103 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1103 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1103 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_2);

#line 656 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1(
#line 656 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 656 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 656 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 656 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3);

#line 1619 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0_1(
#line 1619 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1619 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1619 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 1619 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3,
#line 1619 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_4);


static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[83][2];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[3][1];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[1][4];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[3][7];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][10];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[3][6];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_9[1][5];




static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[83][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "will be implicitly bound to the builtin type"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "My apologies.)"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but I\'m afraid you\'ll have to work it out yourself."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(I ought to tell you which call caused the problem,"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "because the type variables listed above didn\'t get bound."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but I can\'t determine which version should be called,"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "to a polymorphic predicate,"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The body of the clause contains a call"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: exported promise refers to"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or move the definition into the interface."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[5])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Either move the promise into the implementation section"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[7])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must have type"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: arguments of main/2"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(Sorry, polymorphic modes are not supported.)"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[5])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: unbound inst variable(s)."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "has no corresponding definition."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[5])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: reference to"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "undeclared function or predicate"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ", and"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "a goal here"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "the call to"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "a higher-order call here"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "warning: unresolved polymorphism."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The unbound type"))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[24])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "constructor"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "which is defined in the implementation section of module"))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[33])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 80 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: abstract declaration for type"))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[7][3] = {
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[0])),
    ((MR_Box) (check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[0])),
    ((MR_Box) (check_hlds__post_typecheck__check_pred_type_bindings_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_9[0])),
    ((MR_Box) (check_hlds__post_typecheck__find_matching_constructor_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_9[0])),
    ((MR_Box) (check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "void"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "io.state"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[38])))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 39)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[3][7] = {
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

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_9[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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



#line 1749 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1757 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1765 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1774 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1783 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1791 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1800 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1808 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1816 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1825 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1833 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1841 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

#line 1849 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0
  }
};

#line 1857 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1865 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1873 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1882 "check_hlds.post_typecheck.c"
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

#line 1897 "check_hlds.post_typecheck.c"
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

#line 1912 "check_hlds.post_typecheck.c"
static const MR_PseudoTypeInfo check_hlds__post_typecheck__check_hlds__post_typecheck__field_types_is_plain_unify_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1917 "check_hlds.post_typecheck.c"
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

#line 1932 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_0[2] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1
};

#line 1938 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_1[1] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2
};

#line 1943 "check_hlds.post_typecheck.c"
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

#line 1957 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_name_ordered_is_plain_unify_0[3] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2
};

#line 1964 "check_hlds.post_typecheck.c"
static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_is_plain_unify_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1971 "check_hlds.post_typecheck.c"
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

#line 1988 "check_hlds.post_typecheck.c"
static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0_10001(
#line 1991 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1993 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2)
#line 1995 "check_hlds.post_typecheck.c"
{
#line 1997 "check_hlds.post_typecheck.c"
  {
#line 1999 "check_hlds.post_typecheck.c"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 2002 "check_hlds.post_typecheck.c"
    {
#line 2004 "check_hlds.post_typecheck.c"
      check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck____Unify____is_plain_unify_0_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2));
    }
#line 2007 "check_hlds.post_typecheck.c"
    return check_hlds__post_typecheck__succeeded;
#line 2009 "check_hlds.post_typecheck.c"
  }
#line 2011 "check_hlds.post_typecheck.c"
}

#line 2014 "check_hlds.post_typecheck.c"
static void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0_10001(
#line 2017 "check_hlds.post_typecheck.c"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 2019 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 2021 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3)
#line 2023 "check_hlds.post_typecheck.c"
{
#line 2025 "check_hlds.post_typecheck.c"
  {
#line 2027 "check_hlds.post_typecheck.c"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__1_1;

#line 2030 "check_hlds.post_typecheck.c"
    {
#line 2032 "check_hlds.post_typecheck.c"
      check_hlds__post_typecheck____Compare____is_plain_unify_0_0(&check_hlds__post_typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_3));
    }
#line 2035 "check_hlds.post_typecheck.c"
    *check_hlds__post_typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__1_1));
#line 2037 "check_hlds.post_typecheck.c"
  }
#line 2039 "check_hlds.post_typecheck.c"
}

#line 1426 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1426__1_1_f_0(
#line 1426 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_51)
#line 1426 "post_typecheck.m"
{
#line 1426 "post_typecheck.m"
  {
#line 1426 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__2_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_51, (MR_Integer) 1)));
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_51, (MR_Integer) 0)));
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_51, (MR_Integer) 2)));
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_51, (MR_Integer) 3)));

#line 1426 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__2_52;
#line 1426 "post_typecheck.m"
  }
#line 1426 "post_typecheck.m"
}

#line 1263 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1263__1_1_f_0(
#line 1263 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_31)
#line 1263 "post_typecheck.m"
{
#line 1263 "post_typecheck.m"
  {
#line 1263 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1263 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_31, (MR_Integer) 1)));
#line 1263 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_31, (MR_Integer) 0)));
#line 1263 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_31, (MR_Integer) 2)));
#line 1263 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__1_31, (MR_Integer) 3)));

#line 1263 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__2_32;
#line 1263 "post_typecheck.m"
  }
#line 1263 "post_typecheck.m"
}

#line 426 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_2(
#line 426 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 426 "post_typecheck.m"
{
#line 426 "post_typecheck.m"
  {
#line 426 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 426 "post_typecheck.m"
    (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__ConstraintId_17 = ((MR_Word) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__conv0_ConstraintId_17);
#line 426 "post_typecheck.m"
    {
#line 426 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_1(check_hlds__post_typecheck__env_ptr);
#line 426 "post_typecheck.m"
      return;
    }
#line 426 "post_typecheck.m"
  }
#line 426 "post_typecheck.m"
}

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_3(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 429 "post_typecheck.m"
{
#line 429 "post_typecheck.m"
  {
#line 429 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 429 "post_typecheck.m"
    MR_builtin_longjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__commit_0, 1);
#line 429 "post_typecheck.m"
  }
#line 429 "post_typecheck.m"
}

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_5(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 429 "post_typecheck.m"
{
#line 429 "post_typecheck.m"
  {
#line 429 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 429 "post_typecheck.m"
    (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__Clause_21 = ((MR_Word) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__conv1_Clause_21);
#line 429 "post_typecheck.m"
    {
#line 429 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_4(check_hlds__post_typecheck__env_ptr);
#line 429 "post_typecheck.m"
      return;
    }
#line 429 "post_typecheck.m"
  }
#line 429 "post_typecheck.m"
}

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_6(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 429 "post_typecheck.m"
{
#line 429 "post_typecheck.m"
  {
#line 429 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 429 "post_typecheck.m"
    {
#line 431 "post_typecheck.m"
      MR_Word check_hlds__post_typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__HeadVar__3_25), (MR_Integer) 0)));

#line 431 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__HeadVar__3_25), (MR_Integer) 1)));
#line 432 "post_typecheck.m"
      {
#line 432 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__GoalInfo_23);
      }
#line 433 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_35_35 = (MR_Integer) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__GoalId_24;
#line 433 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_36_36 = (MR_Integer) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__ConstraintGoalId_19;
#line 433 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__succeeded = ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_35_35 == (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_36_36);
#line 433 "post_typecheck.m"
      if ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__succeeded)
#line 433 "post_typecheck.m"
        {
#line 433 "post_typecheck.m"
          check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_3(check_hlds__post_typecheck__env_ptr);
#line 433 "post_typecheck.m"
          return;
        }
#line 429 "post_typecheck.m"
    }
#line 429 "post_typecheck.m"
  }
#line 429 "post_typecheck.m"
}

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_4(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 429 "post_typecheck.m"
{
#line 429 "post_typecheck.m"
  {
#line 429 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 430 "post_typecheck.m"
    {
#line 430 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_26_26 = hlds__hlds_clauses__clause_body_1_f_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__Clause_21);
    }
#line 430 "post_typecheck.m"
    {
#line 430 "post_typecheck.m"
      hlds__goal_util__goal_contains_goal_2_p_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__V_26_26, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__HeadVar__3_25, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_6, check_hlds__post_typecheck__env_ptr);
    }
#line 429 "post_typecheck.m"
  }
#line 429 "post_typecheck.m"
}

#line 429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_7(
#line 429 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 429 "post_typecheck.m"
{
#line 429 "post_typecheck.m"
  {
#line 429 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 429 "post_typecheck.m"
    if (MR_builtin_setjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__commit_0) == 0)
#line 429 "post_typecheck.m"
      {
#line 429 "post_typecheck.m"
        {
#line 429 "post_typecheck.m"
          {
#line 429 "post_typecheck.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__conv1_Clause_21, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__Clauses_10, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_5, check_hlds__post_typecheck__env_ptr);
          }
#line 429 "post_typecheck.m"
        }
#line 429 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__succeeded = MR_FALSE;
#line 429 "post_typecheck.m"
      }
#line 429 "post_typecheck.m"
    else
#line 429 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__succeeded = MR_TRUE;
#line 429 "post_typecheck.m"
  }
#line 429 "post_typecheck.m"
}

#line 425 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_1(
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 425 "post_typecheck.m"
{
#line 425 "post_typecheck.m"
  {
#line 425 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 425 "post_typecheck.m"
    {
#line 427 "post_typecheck.m"
      MR_Word check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0)));
#line 427 "post_typecheck.m"
      MR_Integer check_hlds__post_typecheck__V_20_20;

#line 427 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__ConstraintGoalId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 1)));
#line 427 "post_typecheck.m"
      check_hlds__post_typecheck__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 2)));
#line 429 "post_typecheck.m"
      {
#line 429 "post_typecheck.m"
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_7(check_hlds__post_typecheck__env_ptr);
      }
#line 428 "post_typecheck.m"
      if ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__succeeded)
#line 428 "post_typecheck.m"
        {
#line 428 "post_typecheck.m"
          ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__cont)((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__cont_env_ptr);
#line 428 "post_typecheck.m"
          return;
        }
#line 425 "post_typecheck.m"
    }
#line 425 "post_typecheck.m"
  }
#line 425 "post_typecheck.m"
}

#line 425 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0(
#line 425 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Clauses_10,
#line 425 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConstraintIds_14,
#line 425 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__3_25,
#line 425 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr)
#line 425 "post_typecheck.m"
{
#line 425 "post_typecheck.m"
  {
#line 425 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0_s check_hlds__post_typecheck__env;

#line 425 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__Clauses_10 = check_hlds__post_typecheck__Clauses_10;
#line 425 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__HeadVar__3_25 = check_hlds__post_typecheck__HeadVar__3_25;
#line 425 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__cont = check_hlds__post_typecheck__cont;
#line 425 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__cont_env_ptr = check_hlds__post_typecheck__cont_env_ptr;
#line 426 "post_typecheck.m"
    {
#line 426 "post_typecheck.m"
      mercury__set__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_env_0__conv0_ConstraintId_17, check_hlds__post_typecheck__ConstraintIds_14, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0_2, &check_hlds__post_typecheck__env);
    }
#line 425 "post_typecheck.m"
  }
#line 425 "post_typecheck.m"
}

#line 352 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__352__1_3_p_0(
#line 352 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_23,
#line 352 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_24,
#line 352 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__3_25)
#line 352 "post_typecheck.m"
{
#line 352 "post_typecheck.m"
  {
#line 352 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 352 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_26_26;

#line 353 "post_typecheck.m"
    {
#line 353 "post_typecheck.m"
      check_hlds__post_typecheck__V_26_26 = parse_tree__builtin_lib_types__void_type_0_f_0();
    }
#line 353 "post_typecheck.m"
    {
#line 353 "post_typecheck.m"
      mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__post_typecheck__HeadVar__1_23)), ((MR_Box) (check_hlds__post_typecheck__V_26_26)), check_hlds__post_typecheck__HeadVar__2_24, check_hlds__post_typecheck__HeadVar__3_25);
#line 353 "post_typecheck.m"
      return;
    }
#line 352 "post_typecheck.m"
  }
#line 352 "post_typecheck.m"
}

#line 110 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0(
#line 110 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__1_1,
#line 110 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 110 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3)
#line 110 "post_typecheck.m"
{
#line 110 "post_typecheck.m"
  {
#line 110 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 110 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastX_10 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;
#line 110 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastY_11 = (MR_Integer) check_hlds__post_typecheck__HeadVar__3_3;

#line 110 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastX_10 == check_hlds__post_typecheck__CastY_11);
#line 110 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 2419 "check_hlds.post_typecheck.c"
      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "post_typecheck.m"
    else
#line 110 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "post_typecheck.m"
      if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "post_typecheck.m"
      else
#line 110 "post_typecheck.m"
      if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 110 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "post_typecheck.m"
      else
#line 2437 "check_hlds.post_typecheck.c"
        *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "post_typecheck.m"
    else
#line 110 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 110 "post_typecheck.m"
      if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "post_typecheck.m"
      else
#line 110 "post_typecheck.m"
      if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 110 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "post_typecheck.m"
      else
#line 2455 "check_hlds.post_typecheck.c"
        *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "post_typecheck.m"
    else
#line 110 "post_typecheck.m"
      {
#line 110 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2466 "check_hlds.post_typecheck.c"
          *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "post_typecheck.m"
        else
#line 110 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2472 "check_hlds.post_typecheck.c"
          *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "post_typecheck.m"
        else
#line 110 "post_typecheck.m"
          {
#line 110 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "post_typecheck.m"
            {
#line 110 "post_typecheck.m"
              parse_tree__error_util____Compare____error_spec_0_0(check_hlds__post_typecheck__HeadVar__1_1, check_hlds__post_typecheck__V_13_13, check_hlds__post_typecheck__V_9_9);
#line 110 "post_typecheck.m"
              return;
            }
#line 110 "post_typecheck.m"
          }
#line 110 "post_typecheck.m"
      }
#line 110 "post_typecheck.m"
  }
#line 110 "post_typecheck.m"
}

#line 110 "post_typecheck.m"
MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0(
#line 110 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 110 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2)
#line 110 "post_typecheck.m"
{
#line 110 "post_typecheck.m"
  {
#line 110 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 110 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastX_9 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 110 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastY_10 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 110 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastX_9 == check_hlds__post_typecheck__CastY_10);
#line 110 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 110 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 110 "post_typecheck.m"
    else
#line 110 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "post_typecheck.m"
      {
#line 110 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__CastX_3 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 110 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__CastY_4 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 110 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastY_4 == check_hlds__post_typecheck__CastX_3);
#line 110 "post_typecheck.m"
      }
#line 110 "post_typecheck.m"
    else
#line 110 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 110 "post_typecheck.m"
      {
#line 110 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__CastX_5 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 110 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__CastY_6 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 110 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastY_6 == check_hlds__post_typecheck__CastX_5);
#line 110 "post_typecheck.m"
      }
#line 110 "post_typecheck.m"
    else
#line 110 "post_typecheck.m"
      {
#line 110 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_8_8;

#line 110 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 110 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 110 "post_typecheck.m"
          {
#line 110 "post_typecheck.m"
            check_hlds__post_typecheck__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2568 "check_hlds.post_typecheck.c"
            {
#line 2570 "check_hlds.post_typecheck.c"
              return check_hlds__post_typecheck__succeeded = parse_tree__error_util____Unify____error_spec_0_0(check_hlds__post_typecheck__V_7_7, check_hlds__post_typecheck__V_8_8);
            }
#line 110 "post_typecheck.m"
          }
#line 110 "post_typecheck.m"
      }
#line 110 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 110 "post_typecheck.m"
  }
#line 110 "post_typecheck.m"
}

#line 1622 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_4_p_0(
#line 1622 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_5,
#line 1622 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeDefn_6,
#line 1622 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 1622 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20)
#line 1622 "post_typecheck.m"
{
#line 1665 "post_typecheck.m"
  {
#line 1665 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1627 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ImportStatus_8;
#line 1627 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeBody_9;
#line 1627 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 1630 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_10_10;

#line 1627 "post_typecheck.m"
    {
#line 1627 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__ImportStatus_8);
    }
#line 1628 "post_typecheck.m"
    {
#line 1628 "post_typecheck.m"
      check_hlds__post_typecheck__V_21_21 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__post_typecheck__ImportStatus_8);
    }
#line 1628 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_21_21 == (MR_Integer) 1);
#line 1627 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1627 "post_typecheck.m"
      {
#line 1629 "post_typecheck.m"
        {
#line 1629 "post_typecheck.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__TypeBody_9);
        }
#line 1630 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__TypeBody_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeBody_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1630 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1630 "post_typecheck.m"
          check_hlds__post_typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeBody_9, (MR_Integer) 1)));
#line 1627 "post_typecheck.m"
      }
#line 1665 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1644 "post_typecheck.m"
      {
#line 1644 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtor_5, (MR_Integer) 0)));
#line 1644 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtor_5, (MR_Integer) 1)));
#line 1644 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__BuiltinTypeCtors_13;
#line 1647 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ModuleName_14;
#line 1652 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__V_22_22;
#line 1653 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_42_42;

#line 1645 "post_typecheck.m"
        {
#line 1645 "post_typecheck.m"
          check_hlds__post_typecheck__BuiltinTypeCtors_13 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
#line 1647 "post_typecheck.m"
        {
#line 1647 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(check_hlds__post_typecheck__SymName_11, &check_hlds__post_typecheck__ModuleName_14);
        }
#line 1647 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1647 "post_typecheck.m"
          {
#line 1648 "post_typecheck.m"
            {
#line 1648 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(check_hlds__post_typecheck__ModuleName_14);
            }
#line 1648 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1647 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1647 "post_typecheck.m"
              {
#line 1652 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ModuleName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1652 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1652 "post_typecheck.m"
                  {
#line 1652 "post_typecheck.m"
                    check_hlds__post_typecheck__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ModuleName_14, (MR_Integer) 0)));
#line 1652 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__V_22_22, (MR_String) "type_desc") == 0);
#line 1652 "post_typecheck.m"
                  }
#line 1652 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1647 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1647 "post_typecheck.m"
                  {
#line 2699 "check_hlds.post_typecheck.c"
                    check_hlds__post_typecheck__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1653 "post_typecheck.m"
                    {
#line 1653 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_42_42, ((MR_Box) (check_hlds__post_typecheck__TypeCtor_5)), check_hlds__post_typecheck__BuiltinTypeCtors_13);
                    }
#line 1653 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1647 "post_typecheck.m"
                  }
#line 1647 "post_typecheck.m"
              }
#line 1647 "post_typecheck.m"
          }
#line 1662 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1655 "post_typecheck.m"
          {
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeContext_15;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Pieces_16;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Msg_17;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Spec_18;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_25_25;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_26_26;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_27_27;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_34_34;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_35_35;
#line 1655 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_39_39;

#line 1655 "post_typecheck.m"
            {
#line 1655 "post_typecheck.m"
              hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__TypeContext_15);
            }
#line 1657 "post_typecheck.m"
            {
#line 1657 "post_typecheck.m"
              check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1657 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__post_typecheck__SymName_11));
#line 1657 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_12));
#line 1657 "post_typecheck.m"
            }
#line 1657 "post_typecheck.m"
            {
#line 1657 "post_typecheck.m"
              check_hlds__post_typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1657 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1657 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__post_typecheck__V_27_27));
#line 1657 "post_typecheck.m"
            }
#line 1657 "post_typecheck.m"
            {
#line 1657 "post_typecheck.m"
              check_hlds__post_typecheck__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1657 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__post_typecheck__V_26_26));
#line 1657 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[53])));
#line 1657 "post_typecheck.m"
            }
#line 1656 "post_typecheck.m"
            {
#line 1656 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[82])));
#line 1656 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_25_25));
#line 1656 "post_typecheck.m"
            }
#line 1659 "post_typecheck.m"
            {
#line 1659 "post_typecheck.m"
              check_hlds__post_typecheck__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1659 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_16));
#line 1659 "post_typecheck.m"
            }
#line 1659 "post_typecheck.m"
            {
#line 1659 "post_typecheck.m"
              check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (check_hlds__post_typecheck__V_35_35));
#line 1659 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1659 "post_typecheck.m"
            }
#line 1659 "post_typecheck.m"
            {
#line 1659 "post_typecheck.m"
              check_hlds__post_typecheck__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1659 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeContext_15));
#line 1659 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_34_34));
#line 1659 "post_typecheck.m"
            }
#line 1660 "post_typecheck.m"
            {
#line 1660 "post_typecheck.m"
              check_hlds__post_typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1660 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_17));
#line 1660 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1660 "post_typecheck.m"
            }
#line 1660 "post_typecheck.m"
            {
#line 1660 "post_typecheck.m"
              check_hlds__post_typecheck__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1660 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1660 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1660 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 2) = ((MR_Box) (check_hlds__post_typecheck__V_39_39));
#line 1660 "post_typecheck.m"
            }
#line 1661 "post_typecheck.m"
            {
#line 1661 "post_typecheck.m"
              MR_Word base;
#line 1661 "post_typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1661 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = base;
#line 1661 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_18));
#line 1661 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19));
#line 1661 "post_typecheck.m"
            }
#line 1655 "post_typecheck.m"
          }
#line 1662 "post_typecheck.m"
        else
#line 1662 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 1644 "post_typecheck.m"
      }
#line 1665 "post_typecheck.m"
    else
#line 1665 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 1665 "post_typecheck.m"
  }
#line 1622 "post_typecheck.m"
}

#line 1608 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_var_6_p_0(
#line 1608 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_7,
#line 1608 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Var_8,
#line 1608 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11,
#line 1608 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12,
#line 1608 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13,
#line 1608 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14)
#line 1608 "post_typecheck.m"
{
#line 1611 "post_typecheck.m"
  {
#line 1611 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 1612 "post_typecheck.m"
    {
#line 1612 "post_typecheck.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14);
    }
#line 1613 "post_typecheck.m"
    {
#line 1613 "post_typecheck.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__Type_7, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12);
#line 1613 "post_typecheck.m"
      return;
    }
#line 1611 "post_typecheck.m"
  }
#line 1608 "post_typecheck.m"
}

#line 1600 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_vars_6_p_0(
#line 1600 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Types_7,
#line 1600 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Vars_8,
#line 1600 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12,
#line 1600 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13,
#line 1600 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14,
#line 1600 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15)
#line 1600 "post_typecheck.m"
{
#line 1603 "post_typecheck.m"
  {
#line 1603 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1603 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__NumVars_11;

#line 1604 "post_typecheck.m"
    {
#line 1604 "post_typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__Types_7, &check_hlds__post_typecheck__NumVars_11);
    }
#line 1605 "post_typecheck.m"
    {
#line 1605 "post_typecheck.m"
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__NumVars_11, check_hlds__post_typecheck__Vars_8, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15);
    }
#line 1606 "post_typecheck.m"
    {
#line 1606 "post_typecheck.m"
      parse_tree__prog_data__vartypes_add_corresponding_lists_4_p_0(*check_hlds__post_typecheck__Vars_8, check_hlds__post_typecheck__Types_7, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13);
#line 1606 "post_typecheck.m"
      return;
    }
#line 1603 "post_typecheck.m"
  }
#line 1600 "post_typecheck.m"
}

#line 1576 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_8,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_9,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_10,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RestrictNonLocals_11,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarsList_12,
#line 1576 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_13,
#line 1576 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_14)
#line 1576 "post_typecheck.m"
{
#line 1581 "post_typecheck.m"
  {
#line 1581 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_26_26;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_16;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnifyMainContext_17;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnifySubContext_18;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goal0_19;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr0_20;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo0_21;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocals1_22;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocals_23;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo1_24;
#line 1581 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo_25;

#line 1582 "post_typecheck.m"
    {
#line 1582 "post_typecheck.m"
      check_hlds__post_typecheck__Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__OldGoalInfo_10);
    }
#line 1583 "post_typecheck.m"
    {
#line 1583 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_16 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_10);
    }
#line 1584 "post_typecheck.m"
    check_hlds__post_typecheck__UnifyMainContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__UnifyContext_13, (MR_Integer) 0)));
#line 1584 "post_typecheck.m"
    check_hlds__post_typecheck__UnifySubContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__UnifyContext_13, (MR_Integer) 1)));
#line 1585 "post_typecheck.m"
    {
#line 1585 "post_typecheck.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__RHS_9, check_hlds__post_typecheck__Context_15, check_hlds__post_typecheck__UnifyMainContext_17, check_hlds__post_typecheck__UnifySubContext_18, &check_hlds__post_typecheck__Goal0_19);
    }
#line 1587 "post_typecheck.m"
    check_hlds__post_typecheck__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal0_19, (MR_Integer) 0)));
#line 1587 "post_typecheck.m"
    check_hlds__post_typecheck__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal0_19, (MR_Integer) 1)));
#line 3021 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1590 "post_typecheck.m"
    {
#line 1590 "post_typecheck.m"
      parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_26_26, check_hlds__post_typecheck__VarsList_12, &check_hlds__post_typecheck__NonLocals1_22);
    }
#line 1591 "post_typecheck.m"
    {
#line 1591 "post_typecheck.m"
      parse_tree__set_of_var__intersect_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_26_26, check_hlds__post_typecheck__RestrictNonLocals_11, check_hlds__post_typecheck__NonLocals1_22, &check_hlds__post_typecheck__NonLocals_23);
    }
#line 1592 "post_typecheck.m"
    {
#line 1592 "post_typecheck.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__post_typecheck__NonLocals_23, check_hlds__post_typecheck__GoalInfo0_21, &check_hlds__post_typecheck__GoalInfo1_24);
    }
#line 1597 "post_typecheck.m"
    {
#line 1597 "post_typecheck.m"
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(check_hlds__post_typecheck__GoalId_16, check_hlds__post_typecheck__GoalInfo1_24, &check_hlds__post_typecheck__GoalInfo_25);
    }
#line 1598 "post_typecheck.m"
    {
#line 1598 "post_typecheck.m"
      MR_Word base;
#line 1598 "post_typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "post_typecheck.m"
      *check_hlds__post_typecheck__Goal_14 = base;
#line 1598 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr0_20));
#line 1598 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo_25));
#line 1598 "post_typecheck.m"
    }
#line 1581 "post_typecheck.m"
  }
#line 1576 "post_typecheck.m"
}

#line 1559 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__search_for_named_field_4_p_0(
#line 1559 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1559 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_7,
#line 1559 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__CurFieldNumber_8,
#line 1559 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NamedFieldNumber_9)
#line 1559 "post_typecheck.m"
{
#line 1563 "post_typecheck.m"
  while (MR_TRUE)
#line 1563 "post_typecheck.m"
    {
#line 1563 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1563 "post_typecheck.m"
      {
#line 1563 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1563 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__CtorArg_5;
#line 1563 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__CtorArgs_6;
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgFieldName_10;
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_12_12;
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_13_13;
#line 1565 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__V_19_19;
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_16_16;
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_17_17;
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_18_18;
#line 1565 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_11_11;

#line 1562 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1562 "post_typecheck.m"
          {
#line 1562 "post_typecheck.m"
            check_hlds__post_typecheck__CtorArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1562 "post_typecheck.m"
            check_hlds__post_typecheck__CtorArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1565 "post_typecheck.m"
            check_hlds__post_typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 0)));
#line 1565 "post_typecheck.m"
            check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 1)));
#line 1565 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 2)));
#line 1565 "post_typecheck.m"
            check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 3)));
#line 1565 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1565 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1565 "post_typecheck.m"
              {
#line 1565 "post_typecheck.m"
                check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, (MR_Integer) 0)));
#line 1565 "post_typecheck.m"
                check_hlds__post_typecheck__ArgFieldName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_13_13, (MR_Integer) 0)));
#line 1565 "post_typecheck.m"
                check_hlds__post_typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_13_13, (MR_Integer) 1)));
#line 1566 "post_typecheck.m"
                {
#line 1566 "post_typecheck.m"
                  check_hlds__post_typecheck__V_19_19 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__ArgFieldName_10);
                }
#line 1566 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__UnqualFieldName_7, check_hlds__post_typecheck__V_19_19) == 0);
#line 1565 "post_typecheck.m"
              }
#line 1569 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1568 "post_typecheck.m"
              {
#line 1568 "post_typecheck.m"
                *check_hlds__post_typecheck__NamedFieldNumber_9 = check_hlds__post_typecheck__CurFieldNumber_8;
#line 1568 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1568 "post_typecheck.m"
              }
#line 1569 "post_typecheck.m"
            else
#line 1570 "post_typecheck.m"
              {
#line 1570 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_14_14 = (check_hlds__post_typecheck__CurFieldNumber_8 + (MR_Integer) 1);

#line 1570 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1570 "post_typecheck.m"
                {
#line 1570 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__CtorArgs_6;
#line 1570 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__CurFieldNumber__tmp_copy_8 = check_hlds__post_typecheck__V_14_14;

#line 1570 "post_typecheck.m"
                  check_hlds__post_typecheck__CurFieldNumber_8 = check_hlds__post_typecheck__CurFieldNumber__tmp_copy_8;
#line 1570 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 1570 "post_typecheck.m"
                }
#line 1570 "post_typecheck.m"
                continue;
#line 1570 "post_typecheck.m"
              }
#line 1562 "post_typecheck.m"
          }
#line 1563 "post_typecheck.m"
        return check_hlds__post_typecheck__succeeded;
#line 1563 "post_typecheck.m"
      }
#line 1563 "post_typecheck.m"
      break;
#line 1563 "post_typecheck.m"
    }
#line 1559 "post_typecheck.m"
}

#line 1543 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_2_5_p_0(
#line 1543 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_1,
#line 1543 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1543 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_3,
#line 1543 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_4,
#line 1543 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_5)
#line 1543 "post_typecheck.m"
{
#line 1546 "post_typecheck.m"
  while (MR_TRUE)
#line 1546 "post_typecheck.m"
    {
#line 1546 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1546 "post_typecheck.m"
      {
#line 1546 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 1546 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1546 "post_typecheck.m"
          {
#line 1547 "post_typecheck.m"
            {
#line 1547 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field_2\'/5", (MR_String) "can\'t find field");
#line 1547 "post_typecheck.m"
              return;
            }
#line 1546 "post_typecheck.m"
          }
#line 1546 "post_typecheck.m"
        else
#line 1549 "post_typecheck.m"
          {
#line 1549 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 1549 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 1549 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 2)));
#line 1549 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 3)));
#line 1549 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 4)));
#line 1550 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 0)));
#line 1550 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 1)));
#line 1550 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 5)));
#line 1554 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__FieldNumberPrime_25;

#line 1551 "post_typecheck.m"
            {
#line 1551 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__search_for_named_field_4_p_0(check_hlds__post_typecheck__CtorArgs_22, check_hlds__post_typecheck__UnqualFieldName_3, (MR_Integer) 1, &check_hlds__post_typecheck__FieldNumberPrime_25);
            }
#line 1554 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1552 "post_typecheck.m"
              {
#line 1552 "post_typecheck.m"
                {
#line 1552 "post_typecheck.m"
                  MR_Word base;
#line 1552 "post_typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "post_typecheck.m"
                  *check_hlds__post_typecheck__ConsId_4 = base;
#line 1552 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1552 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_21));
#line 1552 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_23));
#line 1552 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtor_1));
#line 1552 "post_typecheck.m"
                }
#line 1553 "post_typecheck.m"
                *check_hlds__post_typecheck__FieldNumber_5 = check_hlds__post_typecheck__FieldNumberPrime_25;
#line 1552 "post_typecheck.m"
              }
#line 1554 "post_typecheck.m"
            else
#line 1555 "post_typecheck.m"
              {
#line 1555 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1555 "post_typecheck.m"
                {
#line 1555 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__Ctors_15;

#line 1555 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 1555 "post_typecheck.m"
                }
#line 1555 "post_typecheck.m"
                continue;
#line 1555 "post_typecheck.m"
              }
#line 1549 "post_typecheck.m"
          }
#line 1546 "post_typecheck.m"
      }
#line 1546 "post_typecheck.m"
      break;
#line 1546 "post_typecheck.m"
    }
#line 1543 "post_typecheck.m"
}

#line 1520 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(
#line 1520 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1520 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_7,
#line 1520 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldSymName_8,
#line 1520 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_9,
#line 1520 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_10)
#line 1520 "post_typecheck.m"
{
#line 1524 "post_typecheck.m"
  {
#line 1524 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1524 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeCtor_11;
#line 1524 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_12;
#line 1524 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeDefn_13;
#line 1524 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeBody_14;

#line 1525 "post_typecheck.m"
    {
#line 1525 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_7, &check_hlds__post_typecheck__TermTypeCtor_11);
    }
#line 1526 "post_typecheck.m"
    {
#line 1526 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__TypeTable_12);
    }
#line 1527 "post_typecheck.m"
    {
#line 1527 "post_typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_12, check_hlds__post_typecheck__TermTypeCtor_11, &check_hlds__post_typecheck__TermTypeDefn_13);
    }
#line 1528 "post_typecheck.m"
    {
#line 1528 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TermTypeDefn_13, &check_hlds__post_typecheck__TermTypeBody_14);
    }
#line 1534 "post_typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__post_typecheck__TermTypeBody_14)) == (MR_mktag((MR_Integer) 1))))
#line 1530 "post_typecheck.m"
      {
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 0)));
#line 1530 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__FieldName_24;
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 1)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 2)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 3)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 4)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 5)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 7)));

#line 1531 "post_typecheck.m"
        {
#line 1531 "post_typecheck.m"
          check_hlds__post_typecheck__FieldName_24 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__FieldSymName_8);
        }
#line 1532 "post_typecheck.m"
        {
#line 1532 "post_typecheck.m"
          check_hlds__post_typecheck__get_constructor_containing_field_2_5_p_0(check_hlds__post_typecheck__TermTypeCtor_11, check_hlds__post_typecheck__Ctors_15, check_hlds__post_typecheck__FieldName_24, check_hlds__post_typecheck__ConsId_9, check_hlds__post_typecheck__FieldNumber_10);
#line 1532 "post_typecheck.m"
          return;
        }
#line 1530 "post_typecheck.m"
      }
#line 1534 "post_typecheck.m"
    else
#line 1539 "post_typecheck.m"
      {
#line 1540 "post_typecheck.m"
        {
#line 1540 "post_typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1540 "post_typecheck.m"
          return;
        }
#line 1539 "post_typecheck.m"
      }
#line 1524 "post_typecheck.m"
  }
#line 1520 "post_typecheck.m"
}

#line 1500 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__split_list_at_index_5_p_0(
#line 1500 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeInfo_for_T_20,
#line 1500 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__Index_6,
#line 1500 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__List_7,
#line 1500 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Before_8,
#line 1500 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__At_9,
#line 1500 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__After_10)
#line 1500 "post_typecheck.m"
{
#line 1511 "post_typecheck.m"
  {
#line 1511 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Before0_11;
#line 1511 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__At0_13;
#line 1511 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__After0_14;
#line 1505 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__AtAndAfter_12;
#line 1505 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_15_15 = (check_hlds__post_typecheck__Index_6 - (MR_Integer) 1);

#line 1505 "post_typecheck.m"
    {
#line 1505 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = mercury__list__split_list_4_p_0(check_hlds__post_typecheck__TypeInfo_for_T_20, check_hlds__post_typecheck__V_15_15, check_hlds__post_typecheck__List_7, &check_hlds__post_typecheck__Before0_11, &check_hlds__post_typecheck__AtAndAfter_12);
    }
#line 1505 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1505 "post_typecheck.m"
      {
#line 1506 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__AtAndAfter_12)) == (MR_mktag((MR_Integer) 1)));
#line 1506 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1506 "post_typecheck.m"
          {
#line 1506 "post_typecheck.m"
            check_hlds__post_typecheck__At0_13 = (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__AtAndAfter_12, (MR_Integer) 0));
#line 1506 "post_typecheck.m"
            check_hlds__post_typecheck__After0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__AtAndAfter_12, (MR_Integer) 1)));
#line 1506 "post_typecheck.m"
          }
#line 1505 "post_typecheck.m"
      }
#line 1511 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1508 "post_typecheck.m"
      {
#line 1508 "post_typecheck.m"
        *check_hlds__post_typecheck__Before_8 = check_hlds__post_typecheck__Before0_11;
#line 1509 "post_typecheck.m"
        *check_hlds__post_typecheck__At_9 = check_hlds__post_typecheck__At0_13;
#line 1510 "post_typecheck.m"
        *check_hlds__post_typecheck__After_10 = check_hlds__post_typecheck__After0_14;
#line 1508 "post_typecheck.m"
      }
#line 1511 "post_typecheck.m"
    else
#line 1512 "post_typecheck.m"
      {
#line 1512 "post_typecheck.m"
        {
#line 1512 "post_typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.split_list_at_index\'/5", (MR_String) "split_list_at_index");
#line 1512 "post_typecheck.m"
          return;
        }
#line 1512 "post_typecheck.m"
      }
#line 1511 "post_typecheck.m"
  }
#line 1500 "post_typecheck.m"
}

#line 1489 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__unify_constraint_list_5_p_0(
#line 1489 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1489 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1489 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVars_3,
#line 1489 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4,
#line 1489 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Subst_5)
#line 1489 "post_typecheck.m"
{
#line 1493 "post_typecheck.m"
  while (MR_TRUE)
#line 1493 "post_typecheck.m"
    {
#line 1493 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1493 "post_typecheck.m"
      {
#line 1493 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 1493 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1493 "post_typecheck.m"
          {
#line 1493 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1493 "post_typecheck.m"
              {
#line 1493 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_Subst_5 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4;
#line 1493 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1493 "post_typecheck.m"
              }
#line 1493 "post_typecheck.m"
          }
#line 1493 "post_typecheck.m"
        else
#line 1494 "post_typecheck.m"
          {
#line 1494 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1494 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__As_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1494 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__B_12;
#line 1494 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Bs_13;
#line 1494 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypesA_17;
#line 1494 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypesB_19;
#line 1494 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22;
#line 1495 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___ClassNameA_16;
#line 1496 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___ClassNameB_18;

#line 1494 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1494 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1494 "post_typecheck.m"
              {
#line 1494 "post_typecheck.m"
                check_hlds__post_typecheck__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 1494 "post_typecheck.m"
                check_hlds__post_typecheck__Bs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 1495 "post_typecheck.m"
                check_hlds__post_typecheck___ClassNameA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__A_10, (MR_Integer) 0)));
#line 1495 "post_typecheck.m"
                check_hlds__post_typecheck__ArgTypesA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__A_10, (MR_Integer) 1)));
#line 1496 "post_typecheck.m"
                check_hlds__post_typecheck___ClassNameB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__B_12, (MR_Integer) 0)));
#line 1496 "post_typecheck.m"
                check_hlds__post_typecheck__ArgTypesB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__B_12, (MR_Integer) 1)));
#line 1497 "post_typecheck.m"
                {
#line 1497 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__post_typecheck__ArgTypesA_17, check_hlds__post_typecheck__ArgTypesB_19, check_hlds__post_typecheck__TVars_3, check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4, &check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22);
                }
#line 1494 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1498 "post_typecheck.m"
                  {
#line 1498 "post_typecheck.m"
                    /* direct tailcall eliminated */
#line 1498 "post_typecheck.m"
                    {
#line 1498 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__As_11;
#line 1498 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__Bs_13;
#line 1498 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22;

#line 1498 "post_typecheck.m"
                      check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 1498 "post_typecheck.m"
                      check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 1498 "post_typecheck.m"
                      check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 1498 "post_typecheck.m"
                    }
#line 1498 "post_typecheck.m"
                    continue;
#line 1498 "post_typecheck.m"
                  }
#line 1494 "post_typecheck.m"
              }
#line 1494 "post_typecheck.m"
          }
#line 1493 "post_typecheck.m"
        return check_hlds__post_typecheck__succeeded;
#line 1493 "post_typecheck.m"
      }
#line 1493 "post_typecheck.m"
      break;
#line 1493 "post_typecheck.m"
    }
#line 1489 "post_typecheck.m"
}

#line 1426 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
#line 1426 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1426 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 1426 "post_typecheck.m"
{
#line 1426 "post_typecheck.m"
  {
#line 1426 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 1426 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1426 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__2_52;

#line 1426 "post_typecheck.m"
    {
#line 1426 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_HeadVar__2_52 = check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1426__1_1_f_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 1426 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__2_52));
#line 1426 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 1426 "post_typecheck.m"
  }
#line 1426 "post_typecheck.m"
}

#line 1415 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_9,
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalId_10,
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_11,
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_12,
#line 1415 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualArgTypes_13,
#line 1415 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualExistQVars_14,
#line 1415 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48,
#line 1415 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49)
#line 1415 "post_typecheck.m"
{
#line 1420 "post_typecheck.m"
  {
#line 1420 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_63_63;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtor_16;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsDefn_17;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeParams_20;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsExistQVars_22;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsConstraints_23;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgs_24;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgTypes_26;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ActualArgTypes0_28;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeArgs_46;
#line 1420 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnivTSubst_47;
#line 1424 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_18_18;
#line 1424 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 1424 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 1424 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_25_25;
#line 1470 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_45_45;

#line 1422 "post_typecheck.m"
    {
#line 1422 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_12, &check_hlds__post_typecheck__TypeCtor_16);
    }
#line 1423 "post_typecheck.m"
    {
#line 1423 "post_typecheck.m"
      check_hlds__type_util__get_cons_defn_det_4_p_0(check_hlds__post_typecheck__ModuleInfo_9, check_hlds__post_typecheck__TypeCtor_16, check_hlds__post_typecheck__ConsId_11, &check_hlds__post_typecheck__ConsDefn_17);
    }
#line 1424 "post_typecheck.m"
    check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 0)));
#line 1424 "post_typecheck.m"
    check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 1)));
#line 1424 "post_typecheck.m"
    check_hlds__post_typecheck__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 2)));
#line 1424 "post_typecheck.m"
    check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 3)));
#line 1424 "post_typecheck.m"
    check_hlds__post_typecheck__ConsExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 4)));
#line 1424 "post_typecheck.m"
    check_hlds__post_typecheck__ConsConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 5)));
#line 1424 "post_typecheck.m"
    check_hlds__post_typecheck__ConsArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 6)));
#line 1424 "post_typecheck.m"
    check_hlds__post_typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 7)));
#line 3753 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1426 "post_typecheck.m"
    {
#line 1426 "post_typecheck.m"
      check_hlds__post_typecheck__ConsArgTypes_26 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__post_typecheck__TypeCtorInfo_63_63, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[6], check_hlds__post_typecheck__ConsArgs_24);
    }
#line 1432 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ConsExistQVars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1429 "post_typecheck.m"
      {
#line 1430 "post_typecheck.m"
        check_hlds__post_typecheck__ActualArgTypes0_28 = check_hlds__post_typecheck__ConsArgTypes_26;
#line 1431 "post_typecheck.m"
        *check_hlds__post_typecheck__ActualExistQVars_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1429 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48;
#line 1429 "post_typecheck.m"
      }
#line 1432 "post_typecheck.m"
    else
#line 1433 "post_typecheck.m"
      {
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeInfo_64_64 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 1433 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__NumExistQVars_31;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet0_32;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentExistQVars_33;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_34;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConsToParentRenaming_35;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentArgTypes_36;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentConstraints_37;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_38;
#line 1433 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__NumConstraints_39;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualConstraints_40;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistTSubst_41;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__KindMap_42;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualExistQVarTypes_43;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarsB_72;
#line 1433 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Subst0_73;
#line 1485 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Subst1_74;
#line 1466 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualExistQVars0_44;

#line 1435 "post_typecheck.m"
        {
#line 1435 "post_typecheck.m"
          mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__ConsExistQVars_22, &check_hlds__post_typecheck__NumExistQVars_31);
        }
#line 1436 "post_typecheck.m"
        {
#line 1436 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48, &check_hlds__post_typecheck__TVarSet0_32);
        }
#line 1437 "post_typecheck.m"
        {
#line 1437 "post_typecheck.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__post_typecheck__NumExistQVars_31, &check_hlds__post_typecheck__ParentExistQVars_33, check_hlds__post_typecheck__TVarSet0_32, &check_hlds__post_typecheck__TVarSet_34);
        }
#line 1438 "post_typecheck.m"
        {
#line 1438 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__post_typecheck__TVarSet_34, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49);
        }
#line 1439 "post_typecheck.m"
        {
#line 1439 "post_typecheck.m"
          mercury__map__from_corresponding_lists_3_p_0(check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__ConsExistQVars_22, check_hlds__post_typecheck__ParentExistQVars_33, &check_hlds__post_typecheck__ConsToParentRenaming_35);
        }
#line 1441 "post_typecheck.m"
        {
#line 1441 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__post_typecheck__ConsToParentRenaming_35, check_hlds__post_typecheck__ConsArgTypes_26, &check_hlds__post_typecheck__ParentArgTypes_36);
        }
#line 1443 "post_typecheck.m"
        {
#line 1443 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__post_typecheck__ConsToParentRenaming_35, check_hlds__post_typecheck__ConsConstraints_23, &check_hlds__post_typecheck__ParentConstraints_37);
        }
#line 1451 "post_typecheck.m"
        {
#line 1451 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49, &check_hlds__post_typecheck__ConstraintMap_38);
        }
#line 1452 "post_typecheck.m"
        {
#line 1452 "post_typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__post_typecheck__ConsConstraints_23, &check_hlds__post_typecheck__NumConstraints_39);
        }
#line 1453 "post_typecheck.m"
        {
#line 1453 "post_typecheck.m"
          hlds__hlds_data__lookup_hlds_constraint_list_5_p_0(check_hlds__post_typecheck__ConstraintMap_38, (MR_Integer) 1, check_hlds__post_typecheck__GoalId_10, check_hlds__post_typecheck__NumConstraints_39, &check_hlds__post_typecheck__ActualConstraints_40);
        }
#line 1478 "post_typecheck.m"
        {
#line 1478 "post_typecheck.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__post_typecheck__ActualConstraints_40, &check_hlds__post_typecheck__TVarsB_72);
        }
#line 1479 "post_typecheck.m"
        {
#line 1479 "post_typecheck.m"
          mercury__map__init_1_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__post_typecheck__Subst0_73);
        }
#line 1481 "post_typecheck.m"
        {
#line 1481 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__unify_constraint_list_5_p_0(check_hlds__post_typecheck__ParentConstraints_37, check_hlds__post_typecheck__ActualConstraints_40, check_hlds__post_typecheck__TVarsB_72, check_hlds__post_typecheck__Subst0_73, &check_hlds__post_typecheck__Subst1_74);
        }
#line 1485 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1484 "post_typecheck.m"
          check_hlds__post_typecheck__ExistTSubst_41 = check_hlds__post_typecheck__Subst1_74;
#line 1485 "post_typecheck.m"
        else
#line 1486 "post_typecheck.m"
          {
#line 1486 "post_typecheck.m"
            {
#line 1486 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.constraint_list_subsumes_det\'/3", (MR_String) "failed");
#line 1486 "post_typecheck.m"
              return;
            }
#line 1486 "post_typecheck.m"
          }
#line 1457 "post_typecheck.m"
        {
#line 1457 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__post_typecheck__ExistTSubst_41, check_hlds__post_typecheck__ParentArgTypes_36, &check_hlds__post_typecheck__ActualArgTypes0_28);
        }
#line 1461 "post_typecheck.m"
        {
#line 1461 "post_typecheck.m"
          mercury__map__init_1_p_0(check_hlds__post_typecheck__TypeInfo_64_64, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &check_hlds__post_typecheck__KindMap_42);
        }
#line 1462 "post_typecheck.m"
        {
#line 1462 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(check_hlds__post_typecheck__KindMap_42, check_hlds__post_typecheck__ExistTSubst_41, check_hlds__post_typecheck__ParentExistQVars_33, &check_hlds__post_typecheck__ActualExistQVarTypes_43);
        }
#line 1464 "post_typecheck.m"
        {
#line 1464 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(check_hlds__post_typecheck__ActualExistQVarTypes_43, &check_hlds__post_typecheck__ActualExistQVars0_44);
        }
#line 1466 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1465 "post_typecheck.m"
          *check_hlds__post_typecheck__ActualExistQVars_14 = check_hlds__post_typecheck__ActualExistQVars0_44;
#line 1466 "post_typecheck.m"
        else
#line 1467 "post_typecheck.m"
          {
#line 1467 "post_typecheck.m"
            {
#line 1467 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_cons_id_arg_types_adding_existq_tvars\'/8", (MR_String) "existq_tvar bound to non-var");
#line 1467 "post_typecheck.m"
              return;
            }
#line 1467 "post_typecheck.m"
          }
#line 1433 "post_typecheck.m"
      }
#line 1470 "post_typecheck.m"
    {
#line 1470 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__post_typecheck__TermType_12, &check_hlds__post_typecheck__V_45_45, &check_hlds__post_typecheck__TypeArgs_46);
    }
#line 1471 "post_typecheck.m"
    {
#line 1471 "post_typecheck.m"
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], check_hlds__post_typecheck__TypeCtorInfo_63_63, check_hlds__post_typecheck__TypeParams_20, check_hlds__post_typecheck__TypeArgs_46, &check_hlds__post_typecheck__UnivTSubst_47);
    }
#line 1472 "post_typecheck.m"
    {
#line 1472 "post_typecheck.m"
      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__post_typecheck__UnivTSubst_47, check_hlds__post_typecheck__ActualArgTypes0_28, check_hlds__post_typecheck__ActualArgTypes_13);
#line 1472 "post_typecheck.m"
      return;
    }
#line 1420 "post_typecheck.m"
  }
#line 1415 "post_typecheck.m"
}

#line 1348 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_set_function_14_p_0(
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55,
#line 1348 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57,
#line 1348 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59,
#line 1348 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_19,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_20,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_21,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_22,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermOutputVar_23,
#line 1348 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_24,
#line 1348 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_25)
#line 1348 "post_typecheck.m"
{
#line 1355 "post_typecheck.m"
  {
#line 1355 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_86_86;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_87_87;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermType_26;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId0_27;
#line 1355 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__FieldNumber_28;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_29;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_30;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_31;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesBeforeField_32;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermFieldType_33;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesAfterField_34;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsBeforeField_35;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__SingletonFieldVar_36;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsAfterField_37;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructArgs_38;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__OldNonLocals_39;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocalArgs_40;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructRestrictNonLocals_41;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructGoal_42;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructArgs_43;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructRestrictNonLocals_44;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId_45;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructGoal_52;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConjExpr_53;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Conj_54;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_68_68;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_69_69;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_70_70;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_72_72;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_76_76;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_77_77;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_80_80;
#line 1355 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_81_81;
#line 1364 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_TermFieldType_33;

#line 1356 "post_typecheck.m"
    {
#line 1356 "post_typecheck.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57, check_hlds__post_typecheck__TermInputVar_22, &check_hlds__post_typecheck__TermType_26);
    }
#line 1357 "post_typecheck.m"
    {
#line 1357 "post_typecheck.m"
      check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__TermType_26, check_hlds__post_typecheck__FieldName_19, &check_hlds__post_typecheck__ConsId0_27, &check_hlds__post_typecheck__FieldNumber_28);
    }
#line 1360 "post_typecheck.m"
    {
#line 1360 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_29 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_24);
    }
#line 1361 "post_typecheck.m"
    {
#line 1361 "post_typecheck.m"
      check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__GoalId_29, check_hlds__post_typecheck__ConsId0_27, check_hlds__post_typecheck__TermType_26, &check_hlds__post_typecheck__ArgTypes_30, &check_hlds__post_typecheck__ExistQVars_31, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56);
    }
#line 1364 "post_typecheck.m"
    {
#line 1364 "post_typecheck.m"
      check_hlds__post_typecheck__split_list_at_index_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__FieldNumber_28, check_hlds__post_typecheck__ArgTypes_30, &check_hlds__post_typecheck__TypesBeforeField_32, &check_hlds__post_typecheck__conv0_TermFieldType_33, &check_hlds__post_typecheck__TypesAfterField_34);
    }
#line 1364 "post_typecheck.m"
    check_hlds__post_typecheck__TermFieldType_33 = ((MR_Word) check_hlds__post_typecheck__conv0_TermFieldType_33);
#line 1367 "post_typecheck.m"
    {
#line 1367 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesBeforeField_32, &check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63);
    }
#line 1368 "post_typecheck.m"
    {
#line 1368 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_var_6_p_0(check_hlds__post_typecheck__TermFieldType_33, &check_hlds__post_typecheck__SingletonFieldVar_36, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65);
    }
#line 1369 "post_typecheck.m"
    {
#line 1369 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesAfterField_34, &check_hlds__post_typecheck__VarsAfterField_37, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60);
    }
#line 4112 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_86_86 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[1];
#line 1372 "post_typecheck.m"
    {
#line 1372 "post_typecheck.m"
      check_hlds__post_typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__post_typecheck__SingletonFieldVar_36));
#line 1372 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_68_68, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_37));
#line 1372 "post_typecheck.m"
    }
#line 1372 "post_typecheck.m"
    {
#line 1372 "post_typecheck.m"
      check_hlds__post_typecheck__DeconstructArgs_38 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__V_68_68);
    }
#line 1373 "post_typecheck.m"
    {
#line 1373 "post_typecheck.m"
      check_hlds__post_typecheck__OldNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__post_typecheck__OldGoalInfo_24);
    }
#line 1374 "post_typecheck.m"
    {
#line 1374 "post_typecheck.m"
      check_hlds__post_typecheck__NonLocalArgs_40 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__VarsAfterField_37);
    }
#line 4139 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1375 "post_typecheck.m"
    {
#line 1375 "post_typecheck.m"
      parse_tree__set_of_var__insert_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_87_87, check_hlds__post_typecheck__NonLocalArgs_40, check_hlds__post_typecheck__OldNonLocals_39, &check_hlds__post_typecheck__DeconstructRestrictNonLocals_41);
    }
#line 1379 "post_typecheck.m"
    {
#line 1379 "post_typecheck.m"
      check_hlds__post_typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId0_27));
#line 1379 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1379 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 2) = ((MR_Box) (check_hlds__post_typecheck__DeconstructArgs_38));
#line 1379 "post_typecheck.m"
    }
#line 1381 "post_typecheck.m"
    {
#line 1381 "post_typecheck.m"
      check_hlds__post_typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_70_70, 0) = ((MR_Box) (check_hlds__post_typecheck__TermInputVar_22));
#line 1381 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_70_70, 1) = ((MR_Box) (check_hlds__post_typecheck__DeconstructArgs_38));
#line 1381 "post_typecheck.m"
    }
#line 1378 "post_typecheck.m"
    {
#line 1378 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermInputVar_22, check_hlds__post_typecheck__V_69_69, check_hlds__post_typecheck__OldGoalInfo_24, check_hlds__post_typecheck__DeconstructRestrictNonLocals_41, check_hlds__post_typecheck__V_70_70, check_hlds__post_typecheck__UnifyContext_20, &check_hlds__post_typecheck__DeconstructGoal_42);
    }
#line 1384 "post_typecheck.m"
    {
#line 1384 "post_typecheck.m"
      check_hlds__post_typecheck__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_21));
#line 1384 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_37));
#line 1384 "post_typecheck.m"
    }
#line 1384 "post_typecheck.m"
    {
#line 1384 "post_typecheck.m"
      check_hlds__post_typecheck__ConstructArgs_43 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__V_72_72);
    }
#line 1385 "post_typecheck.m"
    {
#line 1385 "post_typecheck.m"
      parse_tree__set_of_var__insert_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_87_87, check_hlds__post_typecheck__NonLocalArgs_40, check_hlds__post_typecheck__OldNonLocals_39, &check_hlds__post_typecheck__ConstructRestrictNonLocals_44);
    }
#line 1393 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ExistQVars_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "post_typecheck.m"
      check_hlds__post_typecheck__ConsId_45 = check_hlds__post_typecheck__ConsId0_27;
#line 1393 "post_typecheck.m"
    else
#line 1398 "post_typecheck.m"
      {
#line 1398 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConsName0_48;
#line 1398 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__ConsArity_49;
#line 1398 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtor_50;

#line 1395 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1395 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1395 "post_typecheck.m"
          {
#line 1395 "post_typecheck.m"
            check_hlds__post_typecheck__ConsName0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 1)));
#line 1395 "post_typecheck.m"
            check_hlds__post_typecheck__ConsArity_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 2)));
#line 1395 "post_typecheck.m"
            check_hlds__post_typecheck__TypeCtor_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 3)));
#line 1396 "post_typecheck.m"
            {
#line 1396 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__ConsName_51;

#line 1396 "post_typecheck.m"
              {
#line 1396 "post_typecheck.m"
                parse_tree__prog_type__add_new_prefix_2_p_0(check_hlds__post_typecheck__ConsName0_48, &check_hlds__post_typecheck__ConsName_51);
              }
#line 1397 "post_typecheck.m"
              {
#line 1397 "post_typecheck.m"
                check_hlds__post_typecheck__ConsId_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1397 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 1) = ((MR_Box) (check_hlds__post_typecheck__ConsName_51));
#line 1397 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 2) = ((MR_Box) (check_hlds__post_typecheck__ConsArity_49));
#line 1397 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtor_50));
#line 1397 "post_typecheck.m"
              }
#line 1396 "post_typecheck.m"
            }
#line 1395 "post_typecheck.m"
          }
#line 1395 "post_typecheck.m"
        else
#line 1399 "post_typecheck.m"
          {
#line 1399 "post_typecheck.m"
            {
#line 1399 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.translate_set_function\'/14", (MR_String) "invalid cons_id");
#line 1399 "post_typecheck.m"
              return;
            }
#line 1399 "post_typecheck.m"
          }
#line 1398 "post_typecheck.m"
      }
#line 1404 "post_typecheck.m"
    {
#line 1404 "post_typecheck.m"
      check_hlds__post_typecheck__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_45));
#line 1404 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1404 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 2) = ((MR_Box) (check_hlds__post_typecheck__ConstructArgs_43));
#line 1404 "post_typecheck.m"
    }
#line 1405 "post_typecheck.m"
    {
#line 1405 "post_typecheck.m"
      check_hlds__post_typecheck__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_77_77, 0) = ((MR_Box) (check_hlds__post_typecheck__TermOutputVar_23));
#line 1405 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_77_77, 1) = ((MR_Box) (check_hlds__post_typecheck__ConstructArgs_43));
#line 1405 "post_typecheck.m"
    }
#line 1403 "post_typecheck.m"
    {
#line 1403 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermOutputVar_23, check_hlds__post_typecheck__V_76_76, check_hlds__post_typecheck__OldGoalInfo_24, check_hlds__post_typecheck__ConstructRestrictNonLocals_44, check_hlds__post_typecheck__V_77_77, check_hlds__post_typecheck__UnifyContext_20, &check_hlds__post_typecheck__ConstructGoal_52);
    }
#line 1408 "post_typecheck.m"
    {
#line 1408 "post_typecheck.m"
      check_hlds__post_typecheck__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_81_81, 0) = ((MR_Box) (check_hlds__post_typecheck__ConstructGoal_52));
#line 1408 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1408 "post_typecheck.m"
    }
#line 1408 "post_typecheck.m"
    {
#line 1408 "post_typecheck.m"
      check_hlds__post_typecheck__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_80_80, 0) = ((MR_Box) (check_hlds__post_typecheck__DeconstructGoal_42));
#line 1408 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_80_80, 1) = ((MR_Box) (check_hlds__post_typecheck__V_81_81));
#line 1408 "post_typecheck.m"
    }
#line 1408 "post_typecheck.m"
    {
#line 1408 "post_typecheck.m"
      check_hlds__post_typecheck__ConjExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1408 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1408 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 2) = ((MR_Box) (check_hlds__post_typecheck__V_80_80));
#line 1408 "post_typecheck.m"
    }
#line 1409 "post_typecheck.m"
    {
#line 1409 "post_typecheck.m"
      check_hlds__post_typecheck__Conj_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Conj_54, 0) = ((MR_Box) (check_hlds__post_typecheck__ConjExpr_53));
#line 1409 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Conj_54, 1) = ((MR_Box) (check_hlds__post_typecheck__OldGoalInfo_24));
#line 1409 "post_typecheck.m"
    }
#line 1413 "post_typecheck.m"
    {
#line 1413 "post_typecheck.m"
      MR_Word base;
#line 1413 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "post_typecheck.m"
      *check_hlds__post_typecheck__Goal_25 = base;
#line 1413 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1413 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[81])));
#line 1413 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__post_typecheck__Conj_54));
#line 1413 "post_typecheck.m"
    }
#line 1355 "post_typecheck.m"
  }
#line 1348 "post_typecheck.m"
}

#line 1299 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_get_function_13_p_0(
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_14,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45,
#line 1299 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47,
#line 1299 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49,
#line 1299 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_18,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_19,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_20,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_21,
#line 1299 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_22,
#line 1299 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__GoalExpr_23)
#line 1299 "post_typecheck.m"
{
#line 1305 "post_typecheck.m"
  {
#line 1305 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermType_24;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId_25;
#line 1305 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__FieldNumber_26;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_27;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes0_28;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_29;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_35;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesBeforeField_36;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesAfterField_38;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsBeforeField_39;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsAfterField_40;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgVars_41;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RestrictNonLocals_42;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FunctorGoal_43;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_58_58;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeCtor_70;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_71;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeDefn_72;
#line 1305 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeBody_73;
#line 1333 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 1333 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_37_37;
#line 1346 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_44_44;

#line 1306 "post_typecheck.m"
    {
#line 1306 "post_typecheck.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, check_hlds__post_typecheck__TermInputVar_21, &check_hlds__post_typecheck__TermType_24);
    }
#line 1525 "post_typecheck.m"
    {
#line 1525 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_24, &check_hlds__post_typecheck__TermTypeCtor_70);
    }
#line 1526 "post_typecheck.m"
    {
#line 1526 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_14, &check_hlds__post_typecheck__TypeTable_71);
    }
#line 1527 "post_typecheck.m"
    {
#line 1527 "post_typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_71, check_hlds__post_typecheck__TermTypeCtor_70, &check_hlds__post_typecheck__TermTypeDefn_72);
    }
#line 1528 "post_typecheck.m"
    {
#line 1528 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TermTypeDefn_72, &check_hlds__post_typecheck__TermTypeBody_73);
    }
#line 1534 "post_typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__post_typecheck__TermTypeBody_73)) == (MR_mktag((MR_Integer) 1))))
#line 1530 "post_typecheck.m"
      {
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Ctors_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 0)));
#line 1530 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__FieldName_83;
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 1)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 2)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 3)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 4)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 5)));
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1530 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 7)));

#line 1531 "post_typecheck.m"
        {
#line 1531 "post_typecheck.m"
          check_hlds__post_typecheck__FieldName_83 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__FieldName_18);
        }
#line 1532 "post_typecheck.m"
        {
#line 1532 "post_typecheck.m"
          check_hlds__post_typecheck__get_constructor_containing_field_2_5_p_0(check_hlds__post_typecheck__TermTypeCtor_70, check_hlds__post_typecheck__Ctors_74, check_hlds__post_typecheck__FieldName_83, &check_hlds__post_typecheck__ConsId_25, &check_hlds__post_typecheck__FieldNumber_26);
        }
#line 1530 "post_typecheck.m"
      }
#line 1534 "post_typecheck.m"
    else
#line 1539 "post_typecheck.m"
      {
#line 1540 "post_typecheck.m"
        {
#line 1540 "post_typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1540 "post_typecheck.m"
          return;
        }
#line 1539 "post_typecheck.m"
      }
#line 1310 "post_typecheck.m"
    {
#line 1310 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_22);
    }
#line 1311 "post_typecheck.m"
    {
#line 1311 "post_typecheck.m"
      check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(check_hlds__post_typecheck__ModuleInfo_14, check_hlds__post_typecheck__GoalId_27, check_hlds__post_typecheck__ConsId_25, check_hlds__post_typecheck__TermType_24, &check_hlds__post_typecheck__ArgTypes0_28, &check_hlds__post_typecheck__ExistQVars_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46);
    }
#line 1328 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ExistQVars_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1330 "post_typecheck.m"
      check_hlds__post_typecheck__ArgTypes_35 = check_hlds__post_typecheck__ArgTypes0_28;
#line 1328 "post_typecheck.m"
    else
#line 1323 "post_typecheck.m"
      {
#line 1323 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldType_32;
#line 1323 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldArgType_33;
#line 1323 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldSubst_34;
#line 1325 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv0_FieldArgType_33;

#line 1324 "post_typecheck.m"
        {
#line 1324 "post_typecheck.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, check_hlds__post_typecheck__FieldVar_20, &check_hlds__post_typecheck__FieldType_32);
        }
#line 1325 "post_typecheck.m"
        {
#line 1325 "post_typecheck.m"
          mercury__list__det_index1_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__ArgTypes0_28, check_hlds__post_typecheck__FieldNumber_26, &check_hlds__post_typecheck__conv0_FieldArgType_33);
        }
#line 1325 "post_typecheck.m"
        check_hlds__post_typecheck__FieldArgType_33 = ((MR_Word) check_hlds__post_typecheck__conv0_FieldArgType_33);
#line 1326 "post_typecheck.m"
        {
#line 1326 "post_typecheck.m"
          parse_tree__prog_type__type_subsumes_det_3_p_0(check_hlds__post_typecheck__FieldArgType_33, check_hlds__post_typecheck__FieldType_32, &check_hlds__post_typecheck__FieldSubst_34);
        }
#line 1327 "post_typecheck.m"
        {
#line 1327 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__post_typecheck__FieldSubst_34, check_hlds__post_typecheck__ArgTypes0_28, &check_hlds__post_typecheck__ArgTypes_35);
        }
#line 1323 "post_typecheck.m"
      }
#line 1333 "post_typecheck.m"
    {
#line 1333 "post_typecheck.m"
      check_hlds__post_typecheck__split_list_at_index_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__FieldNumber_26, check_hlds__post_typecheck__ArgTypes_35, &check_hlds__post_typecheck__TypesBeforeField_36, &check_hlds__post_typecheck__conv1_V_37_37, &check_hlds__post_typecheck__TypesAfterField_38);
    }
#line 1333 "post_typecheck.m"
    check_hlds__post_typecheck__V_37_37 = ((MR_Word) check_hlds__post_typecheck__conv1_V_37_37);
#line 1336 "post_typecheck.m"
    {
#line 1336 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesBeforeField_36, &check_hlds__post_typecheck__VarsBeforeField_39, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53);
    }
#line 1337 "post_typecheck.m"
    {
#line 1337 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesAfterField_38, &check_hlds__post_typecheck__VarsAfterField_40, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50);
    }
#line 1339 "post_typecheck.m"
    {
#line 1339 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_20));
#line 1339 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_40));
#line 1339 "post_typecheck.m"
    }
#line 1339 "post_typecheck.m"
    {
#line 1339 "post_typecheck.m"
      check_hlds__post_typecheck__ArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[1], check_hlds__post_typecheck__VarsBeforeField_39, check_hlds__post_typecheck__V_56_56);
    }
#line 1341 "post_typecheck.m"
    {
#line 1341 "post_typecheck.m"
      check_hlds__post_typecheck__RestrictNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__post_typecheck__OldGoalInfo_22);
    }
#line 1343 "post_typecheck.m"
    {
#line 1343 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_25));
#line 1343 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1343 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_41));
#line 1343 "post_typecheck.m"
    }
#line 1344 "post_typecheck.m"
    {
#line 1344 "post_typecheck.m"
      check_hlds__post_typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__post_typecheck__TermInputVar_21));
#line 1344 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "post_typecheck.m"
    }
#line 1344 "post_typecheck.m"
    {
#line 1344 "post_typecheck.m"
      check_hlds__post_typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_20));
#line 1344 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 1) = ((MR_Box) (check_hlds__post_typecheck__V_60_60));
#line 1344 "post_typecheck.m"
    }
#line 1342 "post_typecheck.m"
    {
#line 1342 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermInputVar_21, check_hlds__post_typecheck__V_57_57, check_hlds__post_typecheck__OldGoalInfo_22, check_hlds__post_typecheck__RestrictNonLocals_42, check_hlds__post_typecheck__V_58_58, check_hlds__post_typecheck__UnifyContext_19, &check_hlds__post_typecheck__FunctorGoal_43);
    }
#line 1346 "post_typecheck.m"
    *check_hlds__post_typecheck__GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FunctorGoal_43, (MR_Integer) 0)));
#line 1346 "post_typecheck.m"
    check_hlds__post_typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FunctorGoal_43, (MR_Integer) 1)));
#line 1305 "post_typecheck.m"
  }
#line 1299 "post_typecheck.m"
}

#line 1277 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__finish_field_access_function_14_p_0(
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29,
#line 1277 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31,
#line 1277 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33,
#line 1277 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__AccessType_19,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_20,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_21,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_22,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args_23,
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo_24,
#line 1277 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__14_14)
#line 1277 "post_typecheck.m"
{
#line 1285 "post_typecheck.m"
  {
#line 1285 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1285 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr_25;

#line 1291 "post_typecheck.m"
    if ((check_hlds__post_typecheck__AccessType_19 == (MR_Integer) 0))
#line 1287 "post_typecheck.m"
      {
#line 1287 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TermVar_26;

#line 1288 "post_typecheck.m"
        {
#line 1288 "post_typecheck.m"
          hlds__hlds_pred__field_extraction_function_args_2_p_0(check_hlds__post_typecheck__Args_23, &check_hlds__post_typecheck__TermVar_26);
        }
#line 1289 "post_typecheck.m"
        {
#line 1289 "post_typecheck.m"
          check_hlds__post_typecheck__translate_get_function_13_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34, check_hlds__post_typecheck__FieldName_20, check_hlds__post_typecheck__UnifyContext_21, check_hlds__post_typecheck__Var_22, check_hlds__post_typecheck__TermVar_26, check_hlds__post_typecheck__GoalInfo_24, &check_hlds__post_typecheck__GoalExpr_25);
        }
#line 1287 "post_typecheck.m"
      }
#line 1291 "post_typecheck.m"
    else
#line 1292 "post_typecheck.m"
      {
#line 1292 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TermInputVar_27;
#line 1292 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldVar_28;

#line 1293 "post_typecheck.m"
        {
#line 1293 "post_typecheck.m"
          hlds__hlds_pred__field_update_function_args_3_p_0(check_hlds__post_typecheck__Args_23, &check_hlds__post_typecheck__TermInputVar_27, &check_hlds__post_typecheck__FieldVar_28);
        }
#line 1294 "post_typecheck.m"
        {
#line 1294 "post_typecheck.m"
          check_hlds__post_typecheck__translate_set_function_14_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34, check_hlds__post_typecheck__FieldName_20, check_hlds__post_typecheck__UnifyContext_21, check_hlds__post_typecheck__FieldVar_28, check_hlds__post_typecheck__TermInputVar_27, check_hlds__post_typecheck__Var_22, check_hlds__post_typecheck__GoalInfo_24, &check_hlds__post_typecheck__GoalExpr_25);
        }
#line 1292 "post_typecheck.m"
      }
#line 1285 "post_typecheck.m"
    {
#line 1285 "post_typecheck.m"
      MR_Word base;
#line 1285 "post_typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1285 "post_typecheck.m"
      *check_hlds__post_typecheck__HeadVar__14_14 = base;
#line 1285 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_25));
#line 1285 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo_24));
#line 1285 "post_typecheck.m"
    }
#line 1285 "post_typecheck.m"
  }
#line 1277 "post_typecheck.m"
}

#line 1263 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0_1(
#line 1263 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1263 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 1263 "post_typecheck.m"
{
#line 1263 "post_typecheck.m"
  {
#line 1263 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 1263 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1263 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__2_32;

#line 1263 "post_typecheck.m"
    {
#line 1263 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_HeadVar__2_32 = check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1263__1_1_f_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 1263 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__2_32));
#line 1263 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 1263 "post_typecheck.m"
  }
#line 1263 "post_typecheck.m"
}

#line 1247 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0(
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_7,
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_8,
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_9,
#line 1247 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_10)
#line 1247 "post_typecheck.m"
{
#line 1250 "post_typecheck.m"
  {
#line 1250 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_37_37;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_38_38;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtor_11;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsTable_12;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsDefn_13;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsExistQVars_18;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgs_20;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_22;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeDefn_23;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTVarSet_24;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeKindMap_25;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgTypes_26;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_28;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadTypeParams_29;
#line 1250 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_30_30;
#line 1256 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_14_14;
#line 1256 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_15_15;
#line 1256 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_16_16;
#line 1256 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_17_17;
#line 1256 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 1256 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;

#line 1251 "post_typecheck.m"
    {
#line 1251 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__post_typecheck__Type_9, &check_hlds__post_typecheck__TypeCtor_11);
    }
#line 1250 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1250 "post_typecheck.m"
      {
#line 1252 "post_typecheck.m"
        {
#line 1252 "post_typecheck.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__ConsTable_12);
        }
#line 1253 "post_typecheck.m"
        {
#line 1253 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__post_typecheck__ConsTable_12, check_hlds__post_typecheck__TypeCtor_11, check_hlds__post_typecheck__ConsId_8, &check_hlds__post_typecheck__ConsDefn_13);
        }
#line 1250 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1250 "post_typecheck.m"
          {
#line 1256 "post_typecheck.m"
            check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 0)));
#line 1256 "post_typecheck.m"
            check_hlds__post_typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 1)));
#line 1256 "post_typecheck.m"
            check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 2)));
#line 1256 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 3)));
#line 1256 "post_typecheck.m"
            check_hlds__post_typecheck__ConsExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 4)));
#line 1256 "post_typecheck.m"
            check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 5)));
#line 1256 "post_typecheck.m"
            check_hlds__post_typecheck__ConsArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 6)));
#line 1256 "post_typecheck.m"
            check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 7)));
#line 1258 "post_typecheck.m"
            {
#line 1258 "post_typecheck.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__TypeTable_22);
            }
#line 1259 "post_typecheck.m"
            {
#line 1259 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_22, check_hlds__post_typecheck__TypeCtor_11, &check_hlds__post_typecheck__TypeDefn_23);
            }
#line 1250 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1250 "post_typecheck.m"
              {
#line 1260 "post_typecheck.m"
                {
#line 1260 "post_typecheck.m"
                  hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeTVarSet_24);
                }
#line 1261 "post_typecheck.m"
                {
#line 1261 "post_typecheck.m"
                  hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeKindMap_25);
                }
#line 4908 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 4910 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1263 "post_typecheck.m"
                check_hlds__post_typecheck__V_30_30 = (MR_Word) &check_hlds__post_typecheck_scalar_common_2[5];
#line 1263 "post_typecheck.m"
                {
#line 1263 "post_typecheck.m"
                  check_hlds__post_typecheck__ConsArgTypes_26 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_37_37, check_hlds__post_typecheck__TypeCtorInfo_38_38, check_hlds__post_typecheck__V_30_30, check_hlds__post_typecheck__ConsArgs_20);
                }
#line 1265 "post_typecheck.m"
                check_hlds__post_typecheck__ExistQVars_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1266 "post_typecheck.m"
                check_hlds__post_typecheck__HeadTypeParams_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1267 "post_typecheck.m"
                {
#line 1267 "post_typecheck.m"
                  return check_hlds__post_typecheck__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(check_hlds__post_typecheck__TVarSet_7, check_hlds__post_typecheck__ExistQVars_28, check_hlds__post_typecheck__ArgTypes_10, check_hlds__post_typecheck__HeadTypeParams_29, check_hlds__post_typecheck__TypeTVarSet_24, check_hlds__post_typecheck__TypeKindMap_25, check_hlds__post_typecheck__ConsExistQVars_18, check_hlds__post_typecheck__ConsArgTypes_26);
                }
#line 1250 "post_typecheck.m"
              }
#line 1250 "post_typecheck.m"
          }
#line 1250 "post_typecheck.m"
      }
#line 1250 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 1250 "post_typecheck.m"
  }
#line 1247 "post_typecheck.m"
}

#line 984 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 984 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId1_3,
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__4_4,
#line 984 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__5_5,
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6,
#line 984 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7,
#line 984 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8,
#line 984 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_9)
#line 984 "post_typecheck.m"
{
#line 989 "post_typecheck.m"
  while (MR_TRUE)
#line 989 "post_typecheck.m"
    {
#line 989 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 989 "post_typecheck.m"
      {
#line 989 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 989 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 989 "post_typecheck.m"
          {
#line 989 "post_typecheck.m"
            *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 0;
#line 989 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8;
#line 989 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6;
#line 989 "post_typecheck.m"
          }
#line 989 "post_typecheck.m"
        else
#line 991 "post_typecheck.m"
          {
#line 991 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 991 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, (MR_Integer) 1)));

#line 992 "post_typecheck.m"
            {
#line 992 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = check_hlds__modecheck_call__modes_are_indistinguishable_4_p_0(check_hlds__post_typecheck__ProcId_22, check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, check_hlds__post_typecheck__ModuleInfo_1);
            }
#line 1024 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 993 "post_typecheck.m"
              {
#line 993 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Status_27;
#line 993 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Globals_28;
#line 993 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IntermodOpt_29;
#line 993 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IntermodAnalysis_30;
#line 993 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__MakeOptInt_31;

#line 993 "post_typecheck.m"
                {
#line 993 "post_typecheck.m"
                  hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, &check_hlds__post_typecheck__Status_27);
                }
#line 994 "post_typecheck.m"
                {
#line 994 "post_typecheck.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__post_typecheck__ModuleInfo_1, &check_hlds__post_typecheck__Globals_28);
                }
#line 995 "post_typecheck.m"
                {
#line 995 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 328, &check_hlds__post_typecheck__IntermodOpt_29);
                }
#line 997 "post_typecheck.m"
                {
#line 997 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 333, &check_hlds__post_typecheck__IntermodAnalysis_30);
                }
#line 999 "post_typecheck.m"
                {
#line 999 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 87, &check_hlds__post_typecheck__MakeOptInt_31);
                }
#line 1006 "post_typecheck.m"
                {
#line 1006 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_40_40;

#line 1006 "post_typecheck.m"
                  {
#line 1006 "post_typecheck.m"
                    check_hlds__post_typecheck__V_40_40 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__post_typecheck__Status_27);
                  }
#line 1006 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_40_40 == (MR_Integer) 1);
#line 1006 "post_typecheck.m"
                }
#line 1007 "post_typecheck.m"
                if (!(check_hlds__post_typecheck__succeeded))
#line 1007 "post_typecheck.m"
                  {
#line 1008 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__IntermodOpt_29 == (MR_Integer) 0);
#line 1008 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1009 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__IntermodAnalysis_30 == (MR_Integer) 0);
#line 1007 "post_typecheck.m"
                    if (!(check_hlds__post_typecheck__succeeded))
#line 1011 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__MakeOptInt_31 == (MR_Integer) 1);
#line 1007 "post_typecheck.m"
                  }
#line 1019 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1017 "post_typecheck.m"
                  {
#line 1017 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Spec_32;

#line 1016 "post_typecheck.m"
                    {
#line 1016 "post_typecheck.m"
                      check_hlds__post_typecheck__Spec_32 = check_hlds__mode_errors__report_indistinguishable_modes_error_5_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__ProcId_22, check_hlds__post_typecheck__PredId_2, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6);
                    }
#line 1018 "post_typecheck.m"
                    {
#line 1018 "post_typecheck.m"
                      MR_Word base;
#line 1018 "post_typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "post_typecheck.m"
                      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = base;
#line 1018 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_32));
#line 1018 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8));
#line 1018 "post_typecheck.m"
                    }
#line 1017 "post_typecheck.m"
                  }
#line 1019 "post_typecheck.m"
                else
#line 1019 "post_typecheck.m"
                  *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8;
#line 1022 "post_typecheck.m"
                {
#line 1022 "post_typecheck.m"
                  hlds__hlds_pred__pred_info_remove_procid_3_p_0(check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7);
                }
#line 1023 "post_typecheck.m"
                *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 1;
#line 993 "post_typecheck.m"
              }
#line 1024 "post_typecheck.m"
            else
#line 1025 "post_typecheck.m"
              {
#line 1025 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1025 "post_typecheck.m"
                {
#line 1025 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__4__tmp_copy_4 = check_hlds__post_typecheck__ProcIds_23;

#line 1025 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__4_4 = check_hlds__post_typecheck__HeadVar__4__tmp_copy_4;
#line 1025 "post_typecheck.m"
                }
#line 1025 "post_typecheck.m"
                continue;
#line 1025 "post_typecheck.m"
              }
#line 991 "post_typecheck.m"
          }
#line 989 "post_typecheck.m"
      }
#line 989 "post_typecheck.m"
      break;
#line 989 "post_typecheck.m"
    }
#line 984 "post_typecheck.m"
}

#line 964 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PrevProcIds_4,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5,
#line 964 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6,
#line 964 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7,
#line 964 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_8)
#line 964 "post_typecheck.m"
{
#line 969 "post_typecheck.m"
  while (MR_TRUE)
#line 969 "post_typecheck.m"
    {
#line 969 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 969 "post_typecheck.m"
      {
#line 969 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 969 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "post_typecheck.m"
          {
#line 969 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Specs_8 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7;
#line 969 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5;
#line 969 "post_typecheck.m"
          }
#line 969 "post_typecheck.m"
        else
#line 971 "post_typecheck.m"
          {
#line 971 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 971 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 971 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Removed_25;
#line 971 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PrevProcIds1_26;
#line 971 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31;
#line 971 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32;

#line 972 "post_typecheck.m"
            {
#line 972 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__PredId_2, check_hlds__post_typecheck__ProcId_20, check_hlds__post_typecheck__PrevProcIds_4, &check_hlds__post_typecheck__Removed_25, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32);
            }
#line 977 "post_typecheck.m"
            if ((check_hlds__post_typecheck__Removed_25 == (MR_Integer) 0))
#line 979 "post_typecheck.m"
              {
#line 979 "post_typecheck.m"
                check_hlds__post_typecheck__PrevProcIds1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "post_typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PrevProcIds1_26, 0) = ((MR_Box) (check_hlds__post_typecheck__ProcId_20));
#line 979 "post_typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PrevProcIds1_26, 1) = ((MR_Box) (check_hlds__post_typecheck__PrevProcIds_4));
#line 979 "post_typecheck.m"
              }
#line 977 "post_typecheck.m"
            else
#line 976 "post_typecheck.m"
              check_hlds__post_typecheck__PrevProcIds1_26 = check_hlds__post_typecheck__PrevProcIds_4;
#line 981 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 981 "post_typecheck.m"
            {
#line 981 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__3__tmp_copy_3 = check_hlds__post_typecheck__ProcIds_21;
#line 981 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PrevProcIds__tmp_copy_4 = check_hlds__post_typecheck__PrevProcIds1_26;
#line 981 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0__tmp_copy_5 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31;
#line 981 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32;

#line 981 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 981 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0__tmp_copy_5;
#line 981 "post_typecheck.m"
              check_hlds__post_typecheck__PrevProcIds_4 = check_hlds__post_typecheck__PrevProcIds__tmp_copy_4;
#line 981 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__3_3 = check_hlds__post_typecheck__HeadVar__3__tmp_copy_3;
#line 981 "post_typecheck.m"
            }
#line 981 "post_typecheck.m"
            continue;
#line 971 "post_typecheck.m"
          }
#line 969 "post_typecheck.m"
      }
#line 969 "post_typecheck.m"
      break;
#line 969 "post_typecheck.m"
    }
#line 964 "post_typecheck.m"
}

#line 921 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
#line 921 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 921 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 921 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId_10,
#line 921 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Procs0_11,
#line 921 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Procs_12,
#line 921 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20,
#line 921 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_21)
#line 921 "post_typecheck.m"
{
#line 926 "post_typecheck.m"
  {
#line 926 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_61_61;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcInfo_14;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_16;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_17;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_18;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_33_33;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_51_51;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_52_52;
#line 926 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 927 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_ProcInfo_14;
#line 938 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 938 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_19_19;

#line 927 "post_typecheck.m"
    {
#line 927 "post_typecheck.m"
      mercury__map__lookup_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_59_59, check_hlds__post_typecheck__TypeCtorInfo_60_60, check_hlds__post_typecheck__Procs0_11, ((MR_Box) (check_hlds__post_typecheck__ProcId_10)), &check_hlds__post_typecheck__conv0_ProcInfo_14);
    }
#line 927 "post_typecheck.m"
    check_hlds__post_typecheck__ProcInfo_14 = ((MR_Word) check_hlds__post_typecheck__conv0_ProcInfo_14);
#line 928 "post_typecheck.m"
    {
#line 928 "post_typecheck.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__post_typecheck__ProcInfo_14, &check_hlds__post_typecheck__Context_15);
    }
#line 5326 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 930 "post_typecheck.m"
    {
#line 930 "post_typecheck.m"
      check_hlds__post_typecheck__V_33_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_8, (MR_Integer) 1, check_hlds__post_typecheck__PredId_9);
    }
#line 931 "post_typecheck.m"
    {
#line 931 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_61_61, check_hlds__post_typecheck__V_33_33, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[51]));
    }
#line 929 "post_typecheck.m"
    {
#line 929 "post_typecheck.m"
      check_hlds__post_typecheck__Pieces_16 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_61_61, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[44]), check_hlds__post_typecheck__V_32_32);
    }
#line 934 "post_typecheck.m"
    {
#line 934 "post_typecheck.m"
      check_hlds__post_typecheck__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 934 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_52_52, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_16));
#line 934 "post_typecheck.m"
    }
#line 934 "post_typecheck.m"
    {
#line 934 "post_typecheck.m"
      check_hlds__post_typecheck__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_51_51, 0) = ((MR_Box) (check_hlds__post_typecheck__V_52_52));
#line 934 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "post_typecheck.m"
    }
#line 934 "post_typecheck.m"
    {
#line 934 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_15));
#line 934 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_51_51));
#line 934 "post_typecheck.m"
    }
#line 935 "post_typecheck.m"
    {
#line 935 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_17));
#line 935 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "post_typecheck.m"
    }
#line 935 "post_typecheck.m"
    {
#line 935 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 935 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 935 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 2) = ((MR_Box) (check_hlds__post_typecheck__V_56_56));
#line 935 "post_typecheck.m"
    }
#line 936 "post_typecheck.m"
    {
#line 936 "post_typecheck.m"
      MR_Word base;
#line 936 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_21 = base;
#line 936 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_18));
#line 936 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20));
#line 936 "post_typecheck.m"
    }
#line 938 "post_typecheck.m"
    {
#line 938 "post_typecheck.m"
      mercury__map__det_remove_4_p_0(check_hlds__post_typecheck__TypeCtorInfo_59_59, check_hlds__post_typecheck__TypeCtorInfo_60_60, ((MR_Box) (check_hlds__post_typecheck__ProcId_10)), &check_hlds__post_typecheck__conv1_V_19_19, check_hlds__post_typecheck__Procs0_11, check_hlds__post_typecheck__Procs_12);
    }
#line 938 "post_typecheck.m"
    check_hlds__post_typecheck__V_19_19 = ((MR_Word) check_hlds__post_typecheck__conv1_V_19_19);
#line 926 "post_typecheck.m"
  }
#line 921 "post_typecheck.m"
}

#line 916 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 916 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 916 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5)
#line 916 "post_typecheck.m"
{
#line 916 "post_typecheck.m"
  {
#line 916 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 916 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_Procs_12;
#line 916 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21;

#line 916 "post_typecheck.m"
    {
#line 916 "post_typecheck.m"
      check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv1_Procs_12, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_4), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21);
    }
#line 916 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv1_Procs_12));
#line 916 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21));
#line 916 "post_typecheck.m"
  }
#line 916 "post_typecheck.m"
}

#line 905 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ErrorProcIds_10,
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17,
#line 905 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18,
#line 905 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 905 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20)
#line 905 "post_typecheck.m"
{
#line 912 "post_typecheck.m"
  {
#line 912 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 912 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ErrorProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "post_typecheck.m"
      {
#line 912 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17;
#line 912 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 912 "post_typecheck.m"
      }
#line 912 "post_typecheck.m"
    else
#line 914 "post_typecheck.m"
      {
#line 914 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProcTable0_15;
#line 914 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProcTable_16;
#line 914 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_21_21;
#line 916 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv3_ProcTable_16;
#line 916 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20;

#line 915 "post_typecheck.m"
        {
#line 915 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17, &check_hlds__post_typecheck__ProcTable0_15);
        }
#line 916 "post_typecheck.m"
        {
#line 916 "post_typecheck.m"
          check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 916 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
#line 916 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1));
#line 916 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 916 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 3) = ((MR_Box) (check_hlds__post_typecheck__ModuleInfo_8));
#line 916 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 4) = ((MR_Box) (check_hlds__post_typecheck__PredId_9));
#line 916 "post_typecheck.m"
        }
#line 916 "post_typecheck.m"
        {
#line 916 "post_typecheck.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[2], (MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], check_hlds__post_typecheck__V_21_21, check_hlds__post_typecheck__ErrorProcIds_10, ((MR_Box) (check_hlds__post_typecheck__ProcTable0_15)), &check_hlds__post_typecheck__conv3_ProcTable_16, ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19)), &check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20);
        }
#line 916 "post_typecheck.m"
        check_hlds__post_typecheck__ProcTable_16 = ((MR_Word) check_hlds__post_typecheck__conv3_ProcTable_16);
#line 916 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = ((MR_Word) check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20);
#line 918 "post_typecheck.m"
        {
#line 918 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__ProcTable_16, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18);
#line 918 "post_typecheck.m"
          return;
        }
#line 914 "post_typecheck.m"
      }
#line 912 "post_typecheck.m"
  }
#line 905 "post_typecheck.m"
}

#line 896 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
#line 896 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 896 "post_typecheck.m"
{
#line 896 "post_typecheck.m"
  {
#line 896 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 896 "post_typecheck.m"
    MR_builtin_longjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0, 1);
#line 896 "post_typecheck.m"
  }
#line 896 "post_typecheck.m"
}

#line 896 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
#line 896 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 896 "post_typecheck.m"
{
#line 896 "post_typecheck.m"
  {
#line 896 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 896 "post_typecheck.m"
    if (MR_builtin_setjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0) == 0)
#line 896 "post_typecheck.m"
      {
#line 896 "post_typecheck.m"
        {
#line 896 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck___InstVar_25;

#line 896 "post_typecheck.m"
          {
#line 896 "post_typecheck.m"
            check_hlds__inst_match__mode_list_contains_inst_var_3_p_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1, &check_hlds__post_typecheck___InstVar_25, check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1, check_hlds__post_typecheck__env_ptr);
          }
#line 896 "post_typecheck.m"
        }
#line 896 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_FALSE;
#line 896 "post_typecheck.m"
      }
#line 896 "post_typecheck.m"
    else
#line 896 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_TRUE;
#line 896 "post_typecheck.m"
  }
#line 896 "post_typecheck.m"
}

#line 881 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_3,
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4,
#line 881 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5,
#line 881 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6,
#line 881 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Procs_7)
#line 881 "post_typecheck.m"
{
#line 881 "post_typecheck.m"
  {
#line 881 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s check_hlds__post_typecheck__env;

#line 881 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1 = check_hlds__post_typecheck__ModuleInfo_1;
#line 885 "post_typecheck.m"
    while (MR_TRUE)
#line 885 "post_typecheck.m"
      {
#line 885 "post_typecheck.m"
        /* tailcall optimized into a loop */
#line 885 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 885 "post_typecheck.m"
          {
#line 885 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Procs_7 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6;
#line 885 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4;
#line 885 "post_typecheck.m"
          }
#line 885 "post_typecheck.m"
        else
#line 887 "post_typecheck.m"
          {
#line 887 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 887 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 887 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 887 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 887 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcInfo0_22;
#line 887 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgModes0_23;
#line 887 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31;
#line 887 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32;
#line 888 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv0_ProcInfo0_22;

#line 888 "post_typecheck.m"
            {
#line 888 "post_typecheck.m"
              mercury__map__lookup_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_35_35, check_hlds__post_typecheck__TypeCtorInfo_36_36, check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6, ((MR_Box) (check_hlds__post_typecheck__ProcId_17)), &check_hlds__post_typecheck__conv0_ProcInfo0_22);
            }
#line 888 "post_typecheck.m"
            check_hlds__post_typecheck__ProcInfo0_22 = ((MR_Word) check_hlds__post_typecheck__conv0_ProcInfo0_22);
#line 889 "post_typecheck.m"
            {
#line 889 "post_typecheck.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__post_typecheck__ProcInfo0_22, &check_hlds__post_typecheck__ArgModes0_23);
            }
#line 890 "post_typecheck.m"
            {
#line 890 "post_typecheck.m"
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1, check_hlds__post_typecheck__ArgTypes_3, check_hlds__post_typecheck__ArgModes0_23, &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24);
            }
#line 896 "post_typecheck.m"
            {
#line 896 "post_typecheck.m"
              check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(&check_hlds__post_typecheck__env);
            }
#line 898 "post_typecheck.m"
            if ((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded)
#line 897 "post_typecheck.m"
              {
#line 897 "post_typecheck.m"
                {
#line 897 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31, 0) = ((MR_Box) (check_hlds__post_typecheck__ProcId_17));
#line 897 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4));
#line 897 "post_typecheck.m"
                }
#line 897 "post_typecheck.m"
                check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6;
#line 897 "post_typecheck.m"
              }
#line 898 "post_typecheck.m"
            else
#line 899 "post_typecheck.m"
              {
#line 899 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ProcInfo_26;

#line 899 "post_typecheck.m"
                {
#line 899 "post_typecheck.m"
                  hlds__hlds_pred__proc_info_set_argmodes_3_p_0((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, check_hlds__post_typecheck__ProcInfo0_22, &check_hlds__post_typecheck__ProcInfo_26);
                }
#line 900 "post_typecheck.m"
                {
#line 900 "post_typecheck.m"
                  mercury__map__det_update_4_p_0(check_hlds__post_typecheck__TypeCtorInfo_35_35, check_hlds__post_typecheck__TypeCtorInfo_36_36, ((MR_Box) (check_hlds__post_typecheck__ProcId_17)), ((MR_Box) (check_hlds__post_typecheck__ProcInfo_26)), check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6, &check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32);
                }
#line 899 "post_typecheck.m"
                check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4;
#line 899 "post_typecheck.m"
              }
#line 902 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 902 "post_typecheck.m"
            {
#line 902 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__ProcIds_18;
#line 902 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31;
#line 902 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0__tmp_copy_6 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32;

#line 902 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0__tmp_copy_6;
#line 902 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0__tmp_copy_4;
#line 902 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 902 "post_typecheck.m"
            }
#line 902 "post_typecheck.m"
            continue;
#line 887 "post_typecheck.m"
          }
#line 885 "post_typecheck.m"
        break;
#line 885 "post_typecheck.m"
      }
#line 881 "post_typecheck.m"
  }
#line 881 "post_typecheck.m"
}

#line 832 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
#line 832 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 832 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13,
#line 832 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_14)
#line 832 "post_typecheck.m"
{
#line 858 "post_typecheck.m"
  {
#line 858 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 838 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_15_15;
#line 838 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_16_16;

#line 838 "post_typecheck.m"
    {
#line 838 "post_typecheck.m"
      check_hlds__post_typecheck__V_15_15 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PredInfo_4);
    }
#line 838 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__V_15_15, (MR_String) "main") == 0);
#line 838 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 838 "post_typecheck.m"
      {
#line 839 "post_typecheck.m"
        {
#line 839 "post_typecheck.m"
          check_hlds__post_typecheck__V_16_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__PredInfo_4);
        }
#line 839 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_16_16 == (MR_Integer) 2);
#line 838 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 840 "post_typecheck.m"
          {
#line 840 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__post_typecheck__PredInfo_4);
          }
#line 838 "post_typecheck.m"
      }
#line 858 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 843 "post_typecheck.m"
      {
#line 843 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_6;
#line 845 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Arg1_7;
#line 845 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Arg2_8;
#line 845 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_17_17;
#line 845 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_18_18;

#line 843 "post_typecheck.m"
        {
#line 843 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ArgTypes_6);
        }
#line 845 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ArgTypes_6)) == (MR_mktag((MR_Integer) 1)));
#line 845 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 845 "post_typecheck.m"
          {
#line 845 "post_typecheck.m"
            check_hlds__post_typecheck__Arg1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgTypes_6, (MR_Integer) 0)));
#line 845 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgTypes_6, (MR_Integer) 1)));
#line 845 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 845 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 845 "post_typecheck.m"
              {
#line 845 "post_typecheck.m"
                check_hlds__post_typecheck__Arg2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, (MR_Integer) 0)));
#line 845 "post_typecheck.m"
                check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, (MR_Integer) 1)));
#line 845 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 845 "post_typecheck.m"
                  {
#line 846 "post_typecheck.m"
                    {
#line 846 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(check_hlds__post_typecheck__Arg1_7);
                    }
#line 845 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 847 "post_typecheck.m"
                      {
#line 847 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(check_hlds__post_typecheck__Arg2_8);
                      }
#line 845 "post_typecheck.m"
                  }
#line 845 "post_typecheck.m"
              }
#line 845 "post_typecheck.m"
          }
#line 850 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 850 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13;
#line 850 "post_typecheck.m"
        else
#line 851 "post_typecheck.m"
          {
#line 851 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Context_9;
#line 851 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Msg_11;
#line 851 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Spec_12;
#line 851 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_38_38;

#line 851 "post_typecheck.m"
            {
#line 851 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__Context_9);
            }
#line 854 "post_typecheck.m"
            {
#line 854 "post_typecheck.m"
              check_hlds__post_typecheck__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 854 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_11, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_9));
#line 854 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[80])));
#line 854 "post_typecheck.m"
            }
#line 855 "post_typecheck.m"
            {
#line 855 "post_typecheck.m"
              check_hlds__post_typecheck__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_38_38, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_11));
#line 855 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "post_typecheck.m"
            }
#line 855 "post_typecheck.m"
            {
#line 855 "post_typecheck.m"
              check_hlds__post_typecheck__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 855 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 855 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 2) = ((MR_Box) (check_hlds__post_typecheck__V_38_38));
#line 855 "post_typecheck.m"
            }
#line 856 "post_typecheck.m"
            {
#line 856 "post_typecheck.m"
              MR_Word base;
#line 856 "post_typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = base;
#line 856 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_12));
#line 856 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13));
#line 856 "post_typecheck.m"
            }
#line 851 "post_typecheck.m"
          }
#line 843 "post_typecheck.m"
      }
#line 858 "post_typecheck.m"
    else
#line 858 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13;
#line 858 "post_typecheck.m"
  }
#line 832 "post_typecheck.m"
}

#line 811 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(
#line 811 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 811 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_7,
#line 811 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IdPieces_8,
#line 811 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 811 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16)
#line 811 "post_typecheck.m"
{
#line 815 "post_typecheck.m"
  {
#line 815 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_62_62;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ModuleName_10;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__MainPieces_11;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msgs_13;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_14;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_17_17;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_20_20;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_31_31;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_35_35;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_51_51;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_58_58;
#line 815 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_59_59;

#line 816 "post_typecheck.m"
    {
#line 816 "post_typecheck.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__ModuleName_10);
    }
#line 6015 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 818 "post_typecheck.m"
    {
#line 818 "post_typecheck.m"
      check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 818 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__post_typecheck__ModuleName_10));
#line 818 "post_typecheck.m"
    }
#line 818 "post_typecheck.m"
    {
#line 818 "post_typecheck.m"
      check_hlds__post_typecheck__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_20_20, 0) = ((MR_Box) (check_hlds__post_typecheck__V_21_21));
#line 818 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[29])));
#line 818 "post_typecheck.m"
    }
#line 818 "post_typecheck.m"
    {
#line 818 "post_typecheck.m"
      check_hlds__post_typecheck__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[76])));
#line 818 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_20_20));
#line 818 "post_typecheck.m"
    }
#line 821 "post_typecheck.m"
    {
#line 821 "post_typecheck.m"
      check_hlds__post_typecheck__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_21_21));
#line 821 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[7])));
#line 821 "post_typecheck.m"
    }
#line 820 "post_typecheck.m"
    {
#line 820 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[77])));
#line 820 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_32_32, 1) = ((MR_Box) (check_hlds__post_typecheck__V_35_35));
#line 820 "post_typecheck.m"
    }
#line 819 "post_typecheck.m"
    {
#line 819 "post_typecheck.m"
      check_hlds__post_typecheck__V_31_31 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_62_62, check_hlds__post_typecheck__IdPieces_8, check_hlds__post_typecheck__V_32_32);
    }
#line 819 "post_typecheck.m"
    {
#line 819 "post_typecheck.m"
      check_hlds__post_typecheck__MainPieces_11 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_62_62, check_hlds__post_typecheck__V_17_17, check_hlds__post_typecheck__V_31_31);
    }
#line 825 "post_typecheck.m"
    {
#line 825 "post_typecheck.m"
      check_hlds__post_typecheck__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 825 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_51_51, 0) = ((MR_Box) (check_hlds__post_typecheck__MainPieces_11));
#line 825 "post_typecheck.m"
    }
#line 825 "post_typecheck.m"
    {
#line 825 "post_typecheck.m"
      check_hlds__post_typecheck__Msgs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msgs_13, 0) = ((MR_Box) (check_hlds__post_typecheck__V_51_51));
#line 825 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msgs_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[79])));
#line 825 "post_typecheck.m"
    }
#line 827 "post_typecheck.m"
    {
#line 827 "post_typecheck.m"
      check_hlds__post_typecheck__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_59_59, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_7));
#line 827 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_59_59, 1) = ((MR_Box) (check_hlds__post_typecheck__Msgs_13));
#line 827 "post_typecheck.m"
    }
#line 827 "post_typecheck.m"
    {
#line 827 "post_typecheck.m"
      check_hlds__post_typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__post_typecheck__V_59_59));
#line 827 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "post_typecheck.m"
    }
#line 826 "post_typecheck.m"
    {
#line 826 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 826 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 826 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 2) = ((MR_Box) (check_hlds__post_typecheck__V_58_58));
#line 826 "post_typecheck.m"
    }
#line 828 "post_typecheck.m"
    {
#line 828 "post_typecheck.m"
      MR_Word base;
#line 828 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_16 = base;
#line 828 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_14));
#line 828 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15));
#line 828 "post_typecheck.m"
    }
#line 815 "post_typecheck.m"
  }
#line 811 "post_typecheck.m"
}

#line 801 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_list_5_p_0(
#line 801 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 801 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 801 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 801 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4,
#line 801 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_5)
#line 801 "post_typecheck.m"
{
#line 804 "post_typecheck.m"
  while (MR_TRUE)
#line 804 "post_typecheck.m"
    {
#line 804 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 804 "post_typecheck.m"
      {
#line 804 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 804 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_5 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4;
#line 804 "post_typecheck.m"
        else
#line 805 "post_typecheck.m"
          {
#line 805 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 805 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goal0s_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 805 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18;

#line 806 "post_typecheck.m"
            {
#line 806 "post_typecheck.m"
              check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__HeadVar__1_1, check_hlds__post_typecheck__HeadVar__2_2, check_hlds__post_typecheck__Goal0_13, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18);
            }
#line 807 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 807 "post_typecheck.m"
            {
#line 807 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__3__tmp_copy_3 = check_hlds__post_typecheck__Goal0s_14;
#line 807 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18;

#line 807 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 807 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__3_3 = check_hlds__post_typecheck__HeadVar__3__tmp_copy_3;
#line 807 "post_typecheck.m"
            }
#line 807 "post_typecheck.m"
            continue;
#line 805 "post_typecheck.m"
          }
#line 804 "post_typecheck.m"
      }
#line 804 "post_typecheck.m"
      break;
#line 804 "post_typecheck.m"
    }
#line 801 "post_typecheck.m"
}

#line 768 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_unify_rhs_7_p_0(
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_10,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_11,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 768 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36,
#line 768 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_37)
#line 768 "post_typecheck.m"
{
#line 775 "post_typecheck.m"
  {
#line 775 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 775 "post_typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__post_typecheck__RHS_10)) == (MR_mktag((MR_Integer) 1))))
#line 777 "post_typecheck.m"
      {
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_10, (MR_Integer) 0)));
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_18;
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypes_19;
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Type_20;
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtor_21;
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeTable_22;
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeDefn_23;
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeStatus_24;
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__DefinedInImpl_25;
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_10, (MR_Integer) 1)));
#line 777 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_10, (MR_Integer) 2)));

#line 778 "post_typecheck.m"
        {
#line 778 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__ClausesInfo_18);
        }
#line 779 "post_typecheck.m"
        {
#line 779 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo_18, &check_hlds__post_typecheck__VarTypes_19);
        }
#line 780 "post_typecheck.m"
        {
#line 780 "post_typecheck.m"
          parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__post_typecheck__VarTypes_19, check_hlds__post_typecheck__Var_11, &check_hlds__post_typecheck__Type_20);
        }
#line 781 "post_typecheck.m"
        {
#line 781 "post_typecheck.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__Type_20, &check_hlds__post_typecheck__TypeCtor_21);
        }
#line 782 "post_typecheck.m"
        {
#line 782 "post_typecheck.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__TypeTable_22);
        }
#line 783 "post_typecheck.m"
        {
#line 783 "post_typecheck.m"
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_22, check_hlds__post_typecheck__TypeCtor_21, &check_hlds__post_typecheck__TypeDefn_23);
        }
#line 784 "post_typecheck.m"
        {
#line 784 "post_typecheck.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeStatus_24);
        }
#line 785 "post_typecheck.m"
        {
#line 785 "post_typecheck.m"
          check_hlds__post_typecheck__DefinedInImpl_25 = hlds__hlds_pred__status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__TypeStatus_24);
        }
#line 791 "post_typecheck.m"
        if ((check_hlds__post_typecheck__DefinedInImpl_25 == (MR_Integer) 0))
#line 792 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_37 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36;
#line 791 "post_typecheck.m"
        else
#line 787 "post_typecheck.m"
          {
#line 787 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__IdPieces_26;
#line 787 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_41_41;
#line 787 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_42_42;

#line 788 "post_typecheck.m"
            {
#line 788 "post_typecheck.m"
              check_hlds__post_typecheck__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 788 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_42_42, 1) = ((MR_Box) (check_hlds__post_typecheck__ConsId_15));
#line 788 "post_typecheck.m"
            }
#line 788 "post_typecheck.m"
            {
#line 788 "post_typecheck.m"
              check_hlds__post_typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_41_41, 0) = ((MR_Box) (check_hlds__post_typecheck__V_42_42));
#line 788 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "post_typecheck.m"
            }
#line 788 "post_typecheck.m"
            {
#line 788 "post_typecheck.m"
              check_hlds__post_typecheck__IdPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[75])));
#line 788 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_26, 1) = ((MR_Box) (check_hlds__post_typecheck__V_41_41));
#line 788 "post_typecheck.m"
            }
#line 789 "post_typecheck.m"
            {
#line 789 "post_typecheck.m"
              check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__Context_12, check_hlds__post_typecheck__IdPieces_26, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36, check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);
#line 789 "post_typecheck.m"
              return;
            }
#line 787 "post_typecheck.m"
          }
#line 777 "post_typecheck.m"
      }
#line 775 "post_typecheck.m"
    else
#line 775 "post_typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__post_typecheck__RHS_10)) == (MR_mktag((MR_Integer) 2))))
#line 795 "post_typecheck.m"
      {
#line 795 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 6)));
#line 795 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 795 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 795 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 795 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 2)));
#line 795 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 3)));
#line 795 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 4)));
#line 795 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_10, (MR_Integer) 5)));

#line 796 "post_typecheck.m"
        {
#line 796 "post_typecheck.m"
          check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredInfo_9, check_hlds__post_typecheck__Goal_35, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36, check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);
#line 796 "post_typecheck.m"
          return;
        }
#line 795 "post_typecheck.m"
      }
#line 775 "post_typecheck.m"
    else
#line 775 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_37 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36;
#line 775 "post_typecheck.m"
  }
#line 768 "post_typecheck.m"
}

#line 686 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__in_interface_check_5_p_0(
#line 686 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 686 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_7,
#line 686 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_8,
#line 686 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64,
#line 686 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_65)
#line 686 "post_typecheck.m"
{
#line 689 "post_typecheck.m"
  while (MR_TRUE)
#line 689 "post_typecheck.m"
    {
#line 689 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 689 "post_typecheck.m"
      {
#line 689 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;
#line 689 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_8, (MR_Integer) 0)));
#line 689 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_8, (MR_Integer) 1)));

#line 706 "post_typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 0))))
#line 740 "post_typecheck.m"
          {
#line 740 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__SubGoal_47 = (MR_Word) MR_body(((MR_Word) check_hlds__post_typecheck__GoalExpr_10), (MR_Integer) 0);

#line 741 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 741 "post_typecheck.m"
            {
#line 741 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_47;

#line 741 "post_typecheck.m"
              check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 741 "post_typecheck.m"
            }
#line 741 "post_typecheck.m"
            continue;
#line 740 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 2))))
#line 692 "post_typecheck.m"
          {
#line 692 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)));
#line 692 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 5)));
#line 692 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__CallPredInfo_18;
#line 692 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ImportStatus_19;
#line 692 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 692 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 692 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 692 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));
#line 695 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_87_87;

#line 693 "post_typecheck.m"
            {
#line 693 "post_typecheck.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredId_12, &check_hlds__post_typecheck__CallPredInfo_18);
            }
#line 694 "post_typecheck.m"
            {
#line 694 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__post_typecheck__CallPredInfo_18, &check_hlds__post_typecheck__ImportStatus_19);
            }
#line 695 "post_typecheck.m"
            {
#line 695 "post_typecheck.m"
              check_hlds__post_typecheck__V_87_87 = hlds__hlds_pred__status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__ImportStatus_19);
            }
#line 695 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_87_87 == (MR_Integer) 1);
#line 703 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 696 "post_typecheck.m"
              {
#line 696 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Context_20;
#line 696 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__PredOrFunc_21;
#line 696 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__Arity_22;
#line 696 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IdPieces_23;
#line 696 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_88_88;
#line 696 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_89_89;

#line 696 "post_typecheck.m"
                {
#line 696 "post_typecheck.m"
                  check_hlds__post_typecheck__Context_20 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
                }
#line 697 "post_typecheck.m"
                {
#line 697 "post_typecheck.m"
                  check_hlds__post_typecheck__PredOrFunc_21 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__post_typecheck__CallPredInfo_18);
                }
#line 698 "post_typecheck.m"
                {
#line 698 "post_typecheck.m"
                  check_hlds__post_typecheck__Arity_22 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__CallPredInfo_18);
                }
#line 700 "post_typecheck.m"
                {
#line 700 "post_typecheck.m"
                  check_hlds__post_typecheck__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 700 "post_typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_89_89, 0) = ((MR_Box) (check_hlds__post_typecheck__PredOrFunc_21));
#line 700 "post_typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_89_89, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_17));
#line 700 "post_typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_89_89, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_22));
#line 700 "post_typecheck.m"
                }
#line 700 "post_typecheck.m"
                {
#line 700 "post_typecheck.m"
                  check_hlds__post_typecheck__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 700 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_88_88, 1) = ((MR_Box) (check_hlds__post_typecheck__V_89_89));
#line 700 "post_typecheck.m"
                }
#line 700 "post_typecheck.m"
                {
#line 700 "post_typecheck.m"
                  check_hlds__post_typecheck__IdPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_23, 0) = ((MR_Box) (check_hlds__post_typecheck__V_88_88));
#line 700 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "post_typecheck.m"
                }
#line 701 "post_typecheck.m"
                {
#line 701 "post_typecheck.m"
                  check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__Context_20, check_hlds__post_typecheck__IdPieces_23, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 701 "post_typecheck.m"
                  return;
                }
#line 696 "post_typecheck.m"
              }
#line 703 "post_typecheck.m"
            else
#line 703 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64;
#line 692 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 709 "post_typecheck.m"
          {
#line 709 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)));
#line 709 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__RHS_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 709 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Context_92;
#line 709 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 709 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 709 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));

#line 710 "post_typecheck.m"
            {
#line 710 "post_typecheck.m"
              check_hlds__post_typecheck__Context_92 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
            }
#line 711 "post_typecheck.m"
            {
#line 711 "post_typecheck.m"
              check_hlds__post_typecheck__in_interface_check_unify_rhs_7_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__RHS_30, check_hlds__post_typecheck__Var_29, check_hlds__post_typecheck__Context_92, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 711 "post_typecheck.m"
              return;
            }
#line 709 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 714 "post_typecheck.m"
          {
#line 714 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PragmaPredInfo_40;
#line 714 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PredId_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 714 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ImportStatus_105;
#line 714 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 714 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 714 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));
#line 714 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 5)));
#line 714 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 6)));
#line 714 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 7)));
#line 717 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_81_81;

#line 715 "post_typecheck.m"
            {
#line 715 "post_typecheck.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredId_103, &check_hlds__post_typecheck__PragmaPredInfo_40);
            }
#line 716 "post_typecheck.m"
            {
#line 716 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__post_typecheck__PragmaPredInfo_40, &check_hlds__post_typecheck__ImportStatus_105);
            }
#line 717 "post_typecheck.m"
            {
#line 717 "post_typecheck.m"
              check_hlds__post_typecheck__V_81_81 = hlds__hlds_pred__status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__ImportStatus_105);
            }
#line 717 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_81_81 == (MR_Integer) 1);
#line 727 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 718 "post_typecheck.m"
              {
#line 718 "post_typecheck.m"
                MR_String check_hlds__post_typecheck__Name_41;
#line 718 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_82_82;
#line 718 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_83_83;
#line 718 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__SymName_93;
#line 718 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Context_94;
#line 718 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__PredOrFunc_95;
#line 718 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__Arity_96;
#line 718 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IdPieces_97;

#line 718 "post_typecheck.m"
                {
#line 718 "post_typecheck.m"
                  check_hlds__post_typecheck__Context_94 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
                }
#line 719 "post_typecheck.m"
                {
#line 719 "post_typecheck.m"
                  check_hlds__post_typecheck__PredOrFunc_95 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_40);
                }
#line 720 "post_typecheck.m"
                {
#line 720 "post_typecheck.m"
                  check_hlds__post_typecheck__Name_41 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_40);
                }
#line 721 "post_typecheck.m"
                {
#line 721 "post_typecheck.m"
                  check_hlds__post_typecheck__SymName_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 721 "post_typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__SymName_93, 0) = ((MR_Box) (check_hlds__post_typecheck__Name_41));
#line 721 "post_typecheck.m"
                }
#line 722 "post_typecheck.m"
                {
#line 722 "post_typecheck.m"
                  check_hlds__post_typecheck__Arity_96 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_40);
                }
#line 724 "post_typecheck.m"
                {
#line 724 "post_typecheck.m"
                  check_hlds__post_typecheck__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 724 "post_typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 0) = ((MR_Box) (check_hlds__post_typecheck__PredOrFunc_95));
#line 724 "post_typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_93));
#line 724 "post_typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_96));
#line 724 "post_typecheck.m"
                }
#line 724 "post_typecheck.m"
                {
#line 724 "post_typecheck.m"
                  check_hlds__post_typecheck__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 724 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_82_82, 1) = ((MR_Box) (check_hlds__post_typecheck__V_83_83));
#line 724 "post_typecheck.m"
                }
#line 724 "post_typecheck.m"
                {
#line 724 "post_typecheck.m"
                  check_hlds__post_typecheck__IdPieces_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_97, 0) = ((MR_Box) (check_hlds__post_typecheck__V_82_82));
#line 724 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "post_typecheck.m"
                }
#line 725 "post_typecheck.m"
                {
#line 725 "post_typecheck.m"
                  check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__Context_94, check_hlds__post_typecheck__IdPieces_97, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 725 "post_typecheck.m"
                  return;
                }
#line 718 "post_typecheck.m"
              }
#line 727 "post_typecheck.m"
            else
#line 727 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64;
#line 714 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 731 "post_typecheck.m"
          {
#line 731 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goals_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 731 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 732 "post_typecheck.m"
            {
#line 732 "post_typecheck.m"
              check_hlds__post_typecheck__in_interface_check_list_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Goals_43, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 732 "post_typecheck.m"
              return;
            }
#line 731 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 737 "post_typecheck.m"
          {
#line 737 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goals_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 738 "post_typecheck.m"
            {
#line 738 "post_typecheck.m"
              check_hlds__post_typecheck__in_interface_check_list_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Goals_110, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 738 "post_typecheck.m"
              return;
            }
#line 737 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 707 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64;
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 746 "post_typecheck.m"
          {
#line 746 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Cond_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 746 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Then_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 746 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Else_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));
#line 746 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_71_71;
#line 746 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72;
#line 746 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 747 "post_typecheck.m"
            {
#line 747 "post_typecheck.m"
              check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Cond_50, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_71_71);
            }
#line 748 "post_typecheck.m"
            {
#line 748 "post_typecheck.m"
              check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Then_51, check_hlds__post_typecheck__STATE_VARIABLE_Specs_71_71, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72);
            }
#line 749 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 749 "post_typecheck.m"
            {
#line 749 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__Else_52;
#line 749 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_64 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72;

#line 749 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_64;
#line 749 "post_typecheck.m"
              check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 749 "post_typecheck.m"
            }
#line 749 "post_typecheck.m"
            continue;
#line 746 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 743 "post_typecheck.m"
          {
#line 743 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__SubGoal_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 743 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 744 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 744 "post_typecheck.m"
            {
#line 744 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_111;

#line 744 "post_typecheck.m"
              check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 744 "post_typecheck.m"
            }
#line 744 "post_typecheck.m"
            continue;
#line 743 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 706 "post_typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 751 "post_typecheck.m"
          {
#line 751 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ShortHand_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 756 "post_typecheck.m"
            if (((MR_tag((MR_Word) check_hlds__post_typecheck__ShortHand_53)) == (MR_mktag((MR_Integer) 1))))
#line 753 "post_typecheck.m"
              {
#line 753 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__MainGoal_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 4)));
#line 753 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__OrElseGoals_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 5)));
#line 753 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_69_69;
#line 753 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 0)));
#line 753 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 1)));
#line 753 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 2)));
#line 753 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 3)));
#line 753 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 6)));

#line 754 "post_typecheck.m"
                {
#line 754 "post_typecheck.m"
                  check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__MainGoal_58, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_69_69);
                }
#line 755 "post_typecheck.m"
                {
#line 755 "post_typecheck.m"
                  check_hlds__post_typecheck__in_interface_check_list_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__OrElseGoals_59, check_hlds__post_typecheck__STATE_VARIABLE_Specs_69_69, check_hlds__post_typecheck__STATE_VARIABLE_Specs_65);
#line 755 "post_typecheck.m"
                  return;
                }
#line 753 "post_typecheck.m"
              }
#line 756 "post_typecheck.m"
            else
#line 756 "post_typecheck.m"
            if (((MR_tag((MR_Word) check_hlds__post_typecheck__ShortHand_53)) == (MR_mktag((MR_Integer) 0))))
#line 760 "post_typecheck.m"
              {
#line 760 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__LHS_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 0)));
#line 760 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_66_66;
#line 760 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__RHS_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 1)));

#line 761 "post_typecheck.m"
                {
#line 761 "post_typecheck.m"
                  check_hlds__post_typecheck__in_interface_check_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__LHS_63, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_66_66);
                }
#line 762 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 762 "post_typecheck.m"
                {
#line 762 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__RHS_113;
#line 762 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_64 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_66_66;

#line 762 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_64 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_64;
#line 762 "post_typecheck.m"
                  check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 762 "post_typecheck.m"
                }
#line 762 "post_typecheck.m"
                continue;
#line 760 "post_typecheck.m"
              }
#line 756 "post_typecheck.m"
            else
#line 757 "post_typecheck.m"
              {
#line 757 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__SubGoal_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 2)));
#line 757 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 0)));
#line 757 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_53, (MR_Integer) 1)));

#line 758 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 758 "post_typecheck.m"
                {
#line 758 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_112;

#line 758 "post_typecheck.m"
                  check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 758 "post_typecheck.m"
                }
#line 758 "post_typecheck.m"
                continue;
#line 757 "post_typecheck.m"
              }
#line 751 "post_typecheck.m"
          }
#line 706 "post_typecheck.m"
        else
#line 734 "post_typecheck.m"
          {
#line 735 "post_typecheck.m"
            {
#line 735 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.in_interface_check\'/5", (MR_String) "assertion contains switch");
#line 735 "post_typecheck.m"
              return;
            }
#line 734 "post_typecheck.m"
          }
#line 689 "post_typecheck.m"
      }
#line 689 "post_typecheck.m"
      break;
#line 689 "post_typecheck.m"
    }
#line 686 "post_typecheck.m"
}

#line 545 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
#line 545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_5,
#line 545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_6,
#line 545 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3)
#line 545 "post_typecheck.m"
{
#line 548 "post_typecheck.m"
  {
#line 548 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 548 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__4_4;
#line 548 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 548 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 548 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_9_9;
#line 548 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_10_10;
#line 548 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_12_12;
#line 548 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_15_15;
#line 548 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_16_16;
#line 548 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_17_17;

#line 549 "post_typecheck.m"
    {
#line 549 "post_typecheck.m"
      check_hlds__post_typecheck__V_10_10 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__VarSet_5, (MR_Integer) 0, check_hlds__post_typecheck__Var_7);
    }
#line 549 "post_typecheck.m"
    {
#line 549 "post_typecheck.m"
      check_hlds__post_typecheck__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 549 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_9_9, 1) = ((MR_Box) (check_hlds__post_typecheck__V_10_10));
#line 549 "post_typecheck.m"
    }
#line 550 "post_typecheck.m"
    {
#line 550 "post_typecheck.m"
      check_hlds__post_typecheck__V_17_17 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__post_typecheck__TVarSet_6, (MR_Integer) 0, check_hlds__post_typecheck__Type_8);
    }
#line 550 "post_typecheck.m"
    {
#line 550 "post_typecheck.m"
      check_hlds__post_typecheck__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 550 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_17_17));
#line 550 "post_typecheck.m"
    }
#line 550 "post_typecheck.m"
    {
#line 550 "post_typecheck.m"
      check_hlds__post_typecheck__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_15_15, 0) = ((MR_Box) (check_hlds__post_typecheck__V_16_16));
#line 550 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[5])));
#line 550 "post_typecheck.m"
    }
#line 549 "post_typecheck.m"
    {
#line 549 "post_typecheck.m"
      check_hlds__post_typecheck__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[58])));
#line 549 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, 1) = ((MR_Box) (check_hlds__post_typecheck__V_15_15));
#line 549 "post_typecheck.m"
    }
#line 549 "post_typecheck.m"
    {
#line 549 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__post_typecheck__V_9_9));
#line 549 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, 1) = ((MR_Box) (check_hlds__post_typecheck__V_12_12));
#line 549 "post_typecheck.m"
    }
#line 548 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__4_4;
#line 548 "post_typecheck.m"
  }
#line 545 "post_typecheck.m"
}

#line 516 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
#line 516 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 516 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 516 "post_typecheck.m"
{
#line 516 "post_typecheck.m"
  {
#line 516 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 516 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 516 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__4_4;

#line 516 "post_typecheck.m"
    {
#line 516 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_HeadVar__4_4 = check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 516 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__4_4));
#line 516 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 516 "post_typecheck.m"
  }
#line 516 "post_typecheck.m"
}

#line 504 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_10,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_11,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Errs_12,
#line 504 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24,
#line 504 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_25)
#line 504 "post_typecheck.m"
{
#line 509 "post_typecheck.m"
  {
#line 509 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_117_117;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_121_121;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_122_122;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeVarSet_14;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdPieces_16;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypePieceLists_17;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypePieces_18;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__MainPieces_19;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_21;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_23;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_27_27;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_33_33;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_39_39;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_42_42;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_44_44;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_45_45;
#line 509 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_46_46;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_53_53;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_54_54;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61;
#line 509 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_62_62;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_98_98;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_99_99;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_102_102;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_103_103;
#line 509 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_114_114;
#line 520 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_46_46;
#line 525 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv2_V_62_62;

#line 510 "post_typecheck.m"
    {
#line 510 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__PredInfo_10, &check_hlds__post_typecheck__TypeVarSet_14);
    }
#line 511 "post_typecheck.m"
    {
#line 511 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_10, &check_hlds__post_typecheck__Context_15);
    }
#line 514 "post_typecheck.m"
    {
#line 514 "post_typecheck.m"
      check_hlds__post_typecheck__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_8, (MR_Integer) 1, check_hlds__post_typecheck__PredId_9);
    }
#line 7243 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_117_117 = (MR_Word) &check_hlds__post_typecheck_scalar_common_2[1];
#line 516 "post_typecheck.m"
    {
#line 516 "post_typecheck.m"
      check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 516 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[2]));
#line 516 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1));
#line 516 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 516 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 3) = ((MR_Box) (check_hlds__post_typecheck__VarSet_11));
#line 516 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 4) = ((MR_Box) (check_hlds__post_typecheck__TypeVarSet_14));
#line 516 "post_typecheck.m"
    }
#line 516 "post_typecheck.m"
    {
#line 516 "post_typecheck.m"
      check_hlds__post_typecheck__VarTypePieceLists_17 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeInfo_117_117, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[3], check_hlds__post_typecheck__V_27_27, check_hlds__post_typecheck__Errs_12);
    }
#line 7266 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 517 "post_typecheck.m"
    {
#line 517 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__VarTypePieceLists_17, &check_hlds__post_typecheck__VarTypePieces_18);
    }
#line 7273 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 520 "post_typecheck.m"
    {
#line 520 "post_typecheck.m"
      check_hlds__post_typecheck__conv1_V_46_46 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeInfo_117_117, check_hlds__post_typecheck__TypeCtorInfo_122_122, check_hlds__post_typecheck__Errs_12, ((MR_Box) ((MR_String) "The variable with an unbound type was:")), ((MR_Box) ((MR_String) "The variables with unbound types were:")));
    }
#line 520 "post_typecheck.m"
    check_hlds__post_typecheck__V_46_46 = ((MR_String) check_hlds__post_typecheck__conv1_V_46_46);
#line 520 "post_typecheck.m"
    {
#line 520 "post_typecheck.m"
      check_hlds__post_typecheck__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 520 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_45_45, 1) = ((MR_Box) (check_hlds__post_typecheck__V_46_46));
#line 520 "post_typecheck.m"
    }
#line 522 "post_typecheck.m"
    {
#line 522 "post_typecheck.m"
      check_hlds__post_typecheck__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_44_44, 0) = ((MR_Box) (check_hlds__post_typecheck__V_45_45));
#line 522 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[60])));
#line 522 "post_typecheck.m"
    }
#line 519 "post_typecheck.m"
    {
#line 519 "post_typecheck.m"
      check_hlds__post_typecheck__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 519 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_42_42, 1) = ((MR_Box) (check_hlds__post_typecheck__V_44_44));
#line 519 "post_typecheck.m"
    }
#line 519 "post_typecheck.m"
    {
#line 519 "post_typecheck.m"
      check_hlds__post_typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[71])));
#line 519 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 1) = ((MR_Box) (check_hlds__post_typecheck__V_42_42));
#line 519 "post_typecheck.m"
    }
#line 518 "post_typecheck.m"
    {
#line 518 "post_typecheck.m"
      check_hlds__post_typecheck__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 1) = ((MR_Box) (check_hlds__post_typecheck__V_39_39));
#line 518 "post_typecheck.m"
    }
#line 518 "post_typecheck.m"
    {
#line 518 "post_typecheck.m"
      check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[58])));
#line 518 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (check_hlds__post_typecheck__V_37_37));
#line 518 "post_typecheck.m"
    }
#line 525 "post_typecheck.m"
    {
#line 525 "post_typecheck.m"
      check_hlds__post_typecheck__conv2_V_62_62 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeInfo_117_117, check_hlds__post_typecheck__TypeCtorInfo_122_122, check_hlds__post_typecheck__Errs_12, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
#line 525 "post_typecheck.m"
    check_hlds__post_typecheck__V_62_62 = ((MR_String) check_hlds__post_typecheck__conv2_V_62_62);
#line 525 "post_typecheck.m"
    {
#line 525 "post_typecheck.m"
      check_hlds__post_typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 525 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_61_61, 1) = ((MR_Box) (check_hlds__post_typecheck__V_62_62));
#line 525 "post_typecheck.m"
    }
#line 525 "post_typecheck.m"
    {
#line 525 "post_typecheck.m"
      check_hlds__post_typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__post_typecheck__V_61_61));
#line 525 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[10])));
#line 525 "post_typecheck.m"
    }
#line 524 "post_typecheck.m"
    {
#line 524 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[72])));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 1) = ((MR_Box) (check_hlds__post_typecheck__V_60_60));
#line 524 "post_typecheck.m"
    }
#line 524 "post_typecheck.m"
    {
#line 524 "post_typecheck.m"
      check_hlds__post_typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61])));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_54_54, 1) = ((MR_Box) (check_hlds__post_typecheck__V_57_57));
#line 524 "post_typecheck.m"
    }
#line 523 "post_typecheck.m"
    {
#line 523 "post_typecheck.m"
      check_hlds__post_typecheck__V_53_53 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__VarTypePieces_18, check_hlds__post_typecheck__V_54_54);
    }
#line 522 "post_typecheck.m"
    {
#line 522 "post_typecheck.m"
      check_hlds__post_typecheck__V_33_33 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__V_34_34, check_hlds__post_typecheck__V_53_53);
    }
#line 518 "post_typecheck.m"
    {
#line 518 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__PredIdPieces_16, check_hlds__post_typecheck__V_33_33);
    }
#line 518 "post_typecheck.m"
    {
#line 518 "post_typecheck.m"
      check_hlds__post_typecheck__MainPieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[57]), check_hlds__post_typecheck__V_32_32);
    }
#line 539 "post_typecheck.m"
    {
#line 539 "post_typecheck.m"
      check_hlds__post_typecheck__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 539 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_103_103, 0) = ((MR_Box) (check_hlds__post_typecheck__MainPieces_19));
#line 539 "post_typecheck.m"
    }
#line 539 "post_typecheck.m"
    {
#line 539 "post_typecheck.m"
      check_hlds__post_typecheck__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_102_102, 0) = ((MR_Box) (check_hlds__post_typecheck__V_103_103));
#line 539 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[74])));
#line 539 "post_typecheck.m"
    }
#line 538 "post_typecheck.m"
    {
#line 538 "post_typecheck.m"
      check_hlds__post_typecheck__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_99_99, 0) = ((MR_Box) (((MR_Integer) 39 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 538 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_99_99, 1) = ((MR_Box) (check_hlds__post_typecheck__V_102_102));
#line 538 "post_typecheck.m"
    }
#line 539 "post_typecheck.m"
    {
#line 539 "post_typecheck.m"
      check_hlds__post_typecheck__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_98_98, 0) = ((MR_Box) (check_hlds__post_typecheck__V_99_99));
#line 539 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "post_typecheck.m"
    }
#line 537 "post_typecheck.m"
    {
#line 537 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_21, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_15));
#line 537 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_21, 1) = ((MR_Box) (check_hlds__post_typecheck__V_98_98));
#line 537 "post_typecheck.m"
    }
#line 542 "post_typecheck.m"
    {
#line 542 "post_typecheck.m"
      check_hlds__post_typecheck__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_114_114, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_21));
#line 542 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "post_typecheck.m"
    }
#line 542 "post_typecheck.m"
    {
#line 542 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 542 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_4[0])));
#line 542 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 542 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 2) = ((MR_Box) (check_hlds__post_typecheck__V_114_114));
#line 542 "post_typecheck.m"
    }
#line 543 "post_typecheck.m"
    {
#line 543 "post_typecheck.m"
      MR_Word base;
#line 543 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_25 = base;
#line 543 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_23));
#line 543 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24));
#line 543 "post_typecheck.m"
    }
#line 509 "post_typecheck.m"
  }
#line 504 "post_typecheck.m"
}

#line 462 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
#line 462 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_4,
#line 462 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_5)
#line 462 "post_typecheck.m"
{
#line 465 "post_typecheck.m"
  {
#line 465 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 465 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_6;
#line 465 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_5, (MR_Integer) 0)));
#line 466 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_5, (MR_Integer) 1)));

#line 482 "post_typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 0))))
#line 496 "post_typecheck.m"
      {
#line 497 "post_typecheck.m"
        check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 2))))
#line 480 "post_typecheck.m"
      {
#line 480 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)));
#line 480 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__CallPieces_108;
#line 469 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 469 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));
#line 469 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 469 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 469 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));

#line 470 "post_typecheck.m"
        {
#line 470 "post_typecheck.m"
          check_hlds__post_typecheck__CallPieces_108 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_4, (MR_Integer) 0, check_hlds__post_typecheck__PredId_9);
        }
#line 481 "post_typecheck.m"
        {
#line 481 "post_typecheck.m"
          check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[68])));
#line 481 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_108));
#line 481 "post_typecheck.m"
        }
#line 480 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 1))))
#line 496 "post_typecheck.m"
      {
#line 497 "post_typecheck.m"
        check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 480 "post_typecheck.m"
      {
#line 480 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__CallPieces_15;
#line 480 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));
#line 477 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 477 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 477 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 477 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));
#line 477 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 6)));
#line 477 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 7)));

#line 478 "post_typecheck.m"
        {
#line 478 "post_typecheck.m"
          check_hlds__post_typecheck__CallPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_4, (MR_Integer) 0, check_hlds__post_typecheck__PredId_83);
        }
#line 481 "post_typecheck.m"
        {
#line 481 "post_typecheck.m"
          check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[68])));
#line 481 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_15));
#line 481 "post_typecheck.m"
        }
#line 480 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 496 "post_typecheck.m"
      {
#line 497 "post_typecheck.m"
        check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 496 "post_typecheck.m"
      {
#line 497 "post_typecheck.m"
        check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 482 "post_typecheck.m"
      {
#line 482 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 483 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));
#line 483 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 483 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 483 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));

#line 482 "post_typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__post_typecheck__V_127_127)) == (MR_mktag((MR_Integer) 3))))
#line 496 "post_typecheck.m"
          {
#line 497 "post_typecheck.m"
            check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
          }
#line 482 "post_typecheck.m"
        else
#line 482 "post_typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__post_typecheck__V_127_127)) == (MR_mktag((MR_Integer) 1))))
#line 480 "post_typecheck.m"
          {
#line 480 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__SimpleCallId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 3)));
#line 480 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_78_78;
#line 480 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__CallPieces_93;
#line 474 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 0)));
#line 474 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 1)));
#line 474 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 2)));

#line 475 "post_typecheck.m"
            {
#line 475 "post_typecheck.m"
              check_hlds__post_typecheck__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 475 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_78_78, 1) = ((MR_Box) (check_hlds__post_typecheck__SimpleCallId_24));
#line 475 "post_typecheck.m"
            }
#line 475 "post_typecheck.m"
            {
#line 475 "post_typecheck.m"
              check_hlds__post_typecheck__CallPieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__CallPieces_93, 0) = ((MR_Box) (check_hlds__post_typecheck__V_78_78));
#line 475 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__CallPieces_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "post_typecheck.m"
            }
#line 481 "post_typecheck.m"
            {
#line 481 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[68])));
#line 481 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_93));
#line 481 "post_typecheck.m"
            }
#line 480 "post_typecheck.m"
          }
#line 482 "post_typecheck.m"
        else
#line 482 "post_typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__post_typecheck__V_127_127)) == (MR_mktag((MR_Integer) 2))))
#line 496 "post_typecheck.m"
          {
#line 497 "post_typecheck.m"
            check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
          }
#line 482 "post_typecheck.m"
        else
#line 483 "post_typecheck.m"
          {
#line 484 "post_typecheck.m"
            check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[70]);
#line 483 "post_typecheck.m"
          }
#line 482 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 496 "post_typecheck.m"
      {
#line 497 "post_typecheck.m"
        check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 496 "post_typecheck.m"
      {
#line 497 "post_typecheck.m"
        check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 482 "post_typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 496 "post_typecheck.m"
      {
#line 497 "post_typecheck.m"
        check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
      }
#line 482 "post_typecheck.m"
    else
#line 496 "post_typecheck.m"
      {
#line 497 "post_typecheck.m"
        check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 496 "post_typecheck.m"
      }
#line 465 "post_typecheck.m"
    return check_hlds__post_typecheck__Pieces_6;
#line 465 "post_typecheck.m"
  }
#line 462 "post_typecheck.m"
}

#line 438 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
#line 438 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 438 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2)
#line 438 "post_typecheck.m"
{
#line 441 "post_typecheck.m"
  {
#line 441 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 441 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__3_3;

#line 441 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "post_typecheck.m"
    else
#line 442 "post_typecheck.m"
      {
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Msg_8;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Msgs_9;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Words_13;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Suffix_14;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalInfo_17;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Context_18;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_24_24;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_27_27;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_28_28;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_29_29;
#line 442 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_30_30;
#line 456 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_16_16;

#line 447 "post_typecheck.m"
        if ((check_hlds__post_typecheck__Goals_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "post_typecheck.m"
          {
#line 453 "post_typecheck.m"
            {
#line 453 "post_typecheck.m"
              check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
            }
#line 454 "post_typecheck.m"
            check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[63]);
#line 452 "post_typecheck.m"
          }
#line 447 "post_typecheck.m"
        else
#line 447 "post_typecheck.m"
          {
#line 447 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Goals_7, (MR_Integer) 1)));
#line 444 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Goals_7, (MR_Integer) 0)));

#line 447 "post_typecheck.m"
            if ((check_hlds__post_typecheck__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "post_typecheck.m"
              {
#line 449 "post_typecheck.m"
                {
#line 449 "post_typecheck.m"
                  check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
                }
#line 450 "post_typecheck.m"
                check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[64]);
#line 448 "post_typecheck.m"
              }
#line 447 "post_typecheck.m"
            else
#line 444 "post_typecheck.m"
              {
#line 445 "post_typecheck.m"
                {
#line 445 "post_typecheck.m"
                  check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
                }
#line 446 "post_typecheck.m"
                check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[65]);
#line 444 "post_typecheck.m"
              }
#line 447 "post_typecheck.m"
          }
#line 456 "post_typecheck.m"
        check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_6, (MR_Integer) 0)));
#line 456 "post_typecheck.m"
        check_hlds__post_typecheck__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_6, (MR_Integer) 1)));
#line 457 "post_typecheck.m"
        {
#line 457 "post_typecheck.m"
          check_hlds__post_typecheck__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_17);
        }
#line 458 "post_typecheck.m"
        {
#line 458 "post_typecheck.m"
          check_hlds__post_typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 458 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_24_24, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_18));
#line 458 "post_typecheck.m"
        }
#line 459 "post_typecheck.m"
        {
#line 459 "post_typecheck.m"
          check_hlds__post_typecheck__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_30_30, 0) = ((MR_Box) (check_hlds__post_typecheck__Suffix_14));
#line 459 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "post_typecheck.m"
        }
#line 459 "post_typecheck.m"
        {
#line 459 "post_typecheck.m"
          check_hlds__post_typecheck__V_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__post_typecheck__Words_13, check_hlds__post_typecheck__V_30_30);
        }
#line 459 "post_typecheck.m"
        {
#line 459 "post_typecheck.m"
          check_hlds__post_typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 459 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_28_28, 0) = ((MR_Box) (check_hlds__post_typecheck__V_29_29));
#line 459 "post_typecheck.m"
        }
#line 459 "post_typecheck.m"
        {
#line 459 "post_typecheck.m"
          check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__post_typecheck__V_28_28));
#line 459 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "post_typecheck.m"
        }
#line 458 "post_typecheck.m"
        {
#line 458 "post_typecheck.m"
          check_hlds__post_typecheck__Msg_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 458 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 0) = ((MR_Box) (check_hlds__post_typecheck__V_24_24));
#line 458 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 1) = ((MR_Box) ((MR_Integer) 1));
#line 458 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 2) = ((MR_Box) ((MR_Integer) 1));
#line 458 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 3) = ((MR_Box) (check_hlds__post_typecheck__V_27_27));
#line 458 "post_typecheck.m"
        }
#line 460 "post_typecheck.m"
        {
#line 460 "post_typecheck.m"
          check_hlds__post_typecheck__Msgs_9 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goals_7);
        }
#line 442 "post_typecheck.m"
        {
#line 442 "post_typecheck.m"
          check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_8));
#line 442 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__post_typecheck__Msgs_9));
#line 442 "post_typecheck.m"
        }
#line 442 "post_typecheck.m"
      }
#line 441 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__3_3;
#line 441 "post_typecheck.m"
  }
#line 438 "post_typecheck.m"
}

#line 425 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 425 "post_typecheck.m"
{
#line 425 "post_typecheck.m"
  {
#line 425 "post_typecheck.m"
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 425 "post_typecheck.m"
    *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_HeadVar__3_25));
#line 425 "post_typecheck.m"
    {
#line 425 "post_typecheck.m"
      ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont)((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr);
#line 425 "post_typecheck.m"
      return;
    }
#line 425 "post_typecheck.m"
  }
#line 425 "post_typecheck.m"
}

#line 425 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
#line 425 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 425 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 425 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 425 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr)
#line 425 "post_typecheck.m"
{
#line 425 "post_typecheck.m"
  {
#line 425 "post_typecheck.m"
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s check_hlds__post_typecheck__env;

#line 425 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1 = check_hlds__post_typecheck__wrapper_arg_1;
#line 425 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont = check_hlds__post_typecheck__cont;
#line 425 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr = check_hlds__post_typecheck__cont_env_ptr;
#line 425 "post_typecheck.m"
    {
#line 425 "post_typecheck.m"
      MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;

#line 425 "post_typecheck.m"
      {
#line 425 "post_typecheck.m"
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__425__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_HeadVar__3_25, check_hlds__post_typecheck__find_constrained_goals_2_f_0_1, &check_hlds__post_typecheck__env);
      }
#line 425 "post_typecheck.m"
    }
#line 425 "post_typecheck.m"
  }
#line 425 "post_typecheck.m"
}

#line 411 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
#line 411 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 411 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_5)
#line 411 "post_typecheck.m"
{
#line 414 "post_typecheck.m"
  {
#line 414 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goals_6;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_28_28;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_29_29;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesInfo_7;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesRep_8;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Clauses_10;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintMap_11;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ReverseConstraintMap_12;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintIdSets_13;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintIds_14;
#line 414 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FindGoals_15;
#line 416 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck___ItemNumbers_9;

#line 415 "post_typecheck.m"
    {
#line 415 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ClausesInfo_7);
    }
#line 416 "post_typecheck.m"
    {
#line 416 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_7, &check_hlds__post_typecheck__ClausesRep_8, &check_hlds__post_typecheck___ItemNumbers_9);
    }
#line 417 "post_typecheck.m"
    {
#line 417 "post_typecheck.m"
      hlds__hlds_clauses__get_clause_list_any_order_2_p_0(check_hlds__post_typecheck__ClausesRep_8, &check_hlds__post_typecheck__Clauses_10);
    }
#line 419 "post_typecheck.m"
    {
#line 419 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ConstraintMap_11);
    }
#line 8091 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0;
#line 8093 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 420 "post_typecheck.m"
    {
#line 420 "post_typecheck.m"
      check_hlds__post_typecheck__ReverseConstraintMap_12 = mercury__map__reverse_map_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_28_28, check_hlds__post_typecheck__TypeCtorInfo_29_29, check_hlds__post_typecheck__ConstraintMap_11);
    }
#line 421 "post_typecheck.m"
    {
#line 421 "post_typecheck.m"
      mercury__map__apply_to_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_29_29, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[4], check_hlds__post_typecheck__Constraints_5, check_hlds__post_typecheck__ReverseConstraintMap_12, &check_hlds__post_typecheck__ConstraintIdSets_13);
    }
#line 422 "post_typecheck.m"
    {
#line 422 "post_typecheck.m"
      check_hlds__post_typecheck__ConstraintIds_14 = mercury__set__union_list_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_28_28, check_hlds__post_typecheck__ConstraintIdSets_13);
    }
#line 425 "post_typecheck.m"
    {
#line 425 "post_typecheck.m"
      check_hlds__post_typecheck__FindGoals_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 425 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[2]));
#line 425 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 1) = ((MR_Box) (check_hlds__post_typecheck__find_constrained_goals_2_f_0_2));
#line 425 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 425 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 3) = ((MR_Box) (check_hlds__post_typecheck__Clauses_10));
#line 425 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 4) = ((MR_Box) (check_hlds__post_typecheck__ConstraintIds_14));
#line 425 "post_typecheck.m"
    }
#line 436 "post_typecheck.m"
    {
#line 436 "post_typecheck.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__post_typecheck__FindGoals_15, &check_hlds__post_typecheck__Goals_6);
    }
#line 414 "post_typecheck.m"
    return check_hlds__post_typecheck__Goals_6;
#line 414 "post_typecheck.m"
  }
#line 411 "post_typecheck.m"
}

#line 400 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
#line 400 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarset_4,
#line 400 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraint_5)
#line 400 "post_typecheck.m"
{
#line 403 "post_typecheck.m"
  {
#line 403 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 403 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__3_3;
#line 403 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_6_6;
#line 403 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_7_7;

#line 404 "post_typecheck.m"
    {
#line 404 "post_typecheck.m"
      check_hlds__post_typecheck__V_7_7 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__post_typecheck__TVarset_4, check_hlds__post_typecheck__Constraint_5);
    }
#line 404 "post_typecheck.m"
    {
#line 404 "post_typecheck.m"
      check_hlds__post_typecheck__V_6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "post_typecheck.m"
      MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__V_6_6, 0) = ((MR_Box) (check_hlds__post_typecheck__V_7_7));
#line 404 "post_typecheck.m"
    }
#line 404 "post_typecheck.m"
    {
#line 404 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__post_typecheck__V_6_6));
#line 404 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "post_typecheck.m"
    }
#line 403 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__3_3;
#line 403 "post_typecheck.m"
  }
#line 400 "post_typecheck.m"
}

#line 383 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
#line 383 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 383 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 383 "post_typecheck.m"
{
#line 383 "post_typecheck.m"
  {
#line 383 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 383 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 383 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_HeadVar__3_3;

#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__conv1_HeadVar__3_3 = check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 383 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv1_HeadVar__3_3));
#line 383 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 383 "post_typecheck.m"
  }
#line 383 "post_typecheck.m"
}

#line 366 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_10,
#line 366 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22,
#line 366 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_23)
#line 366 "post_typecheck.m"
{
#line 371 "post_typecheck.m"
  {
#line 371 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_75_75;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_76_76;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_77_77;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TVarSet_12;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_13;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdPieces_14;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_15;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_16;
#line 371 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__DueTo_17;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ContextMsgStart_18;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstrainedGoals_19;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ContextMsgs_20;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_21;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_29_29;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_30_30;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_31_31;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_36_36;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 371 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_38_38;
#line 371 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_40_40;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_47_47;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_48_48;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_49_49;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_50_50;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_64_64;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_65_65;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_66_66;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_67_67;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_72_72;
#line 371 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_73_73;
#line 380 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_V_40_40;
#line 387 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv2_DueTo_17;

#line 372 "post_typecheck.m"
    {
#line 372 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__TVarSet_12);
    }
#line 373 "post_typecheck.m"
    {
#line 373 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__Context_13);
    }
#line 375 "post_typecheck.m"
    {
#line 375 "post_typecheck.m"
      check_hlds__post_typecheck__PredIdPieces_14 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_7, (MR_Integer) 1, check_hlds__post_typecheck__PredId_8);
    }
#line 8329 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 8331 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 8333 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 380 "post_typecheck.m"
    {
#line 380 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_V_40_40 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, check_hlds__post_typecheck__TypeCtorInfo_77_77, check_hlds__post_typecheck__Constraints_10, ((MR_Box) ((MR_String) "constraint:")), ((MR_Box) ((MR_String) "constraints:")));
    }
#line 380 "post_typecheck.m"
    check_hlds__post_typecheck__V_40_40 = ((MR_String) check_hlds__post_typecheck__conv0_V_40_40);
#line 379 "post_typecheck.m"
    {
#line 379 "post_typecheck.m"
      check_hlds__post_typecheck__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "type error: unsatisfied typeclass ", check_hlds__post_typecheck__V_40_40);
    }
#line 379 "post_typecheck.m"
    {
#line 379 "post_typecheck.m"
      check_hlds__post_typecheck__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 379 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 0) = ((MR_Box) (check_hlds__post_typecheck__V_38_38));
#line 379 "post_typecheck.m"
    }
#line 380 "post_typecheck.m"
    {
#line 380 "post_typecheck.m"
      check_hlds__post_typecheck__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_36_36, 0) = ((MR_Box) (check_hlds__post_typecheck__V_37_37));
#line 380 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[60])));
#line 380 "post_typecheck.m"
    }
#line 378 "post_typecheck.m"
    {
#line 378 "post_typecheck.m"
      check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 378 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (check_hlds__post_typecheck__V_36_36));
#line 378 "post_typecheck.m"
    }
#line 378 "post_typecheck.m"
    {
#line 378 "post_typecheck.m"
      check_hlds__post_typecheck__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[58])));
#line 378 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_31_31, 1) = ((MR_Box) (check_hlds__post_typecheck__V_34_34));
#line 378 "post_typecheck.m"
    }
#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[1]));
#line 383 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1));
#line 383 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 383 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 3) = ((MR_Box) (check_hlds__post_typecheck__TVarSet_12));
#line 383 "post_typecheck.m"
    }
#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__V_49_49 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[3], check_hlds__post_typecheck__V_50_50, check_hlds__post_typecheck__Constraints_10);
    }
#line 382 "post_typecheck.m"
    {
#line 382 "post_typecheck.m"
      check_hlds__post_typecheck__V_48_48 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__post_typecheck__V_49_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__V_48_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[62]));
    }
#line 381 "post_typecheck.m"
    {
#line 381 "post_typecheck.m"
      check_hlds__post_typecheck__V_30_30 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__V_31_31, check_hlds__post_typecheck__V_47_47);
    }
#line 378 "post_typecheck.m"
    {
#line 378 "post_typecheck.m"
      check_hlds__post_typecheck__V_29_29 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__PredIdPieces_14, check_hlds__post_typecheck__V_30_30);
    }
#line 378 "post_typecheck.m"
    {
#line 378 "post_typecheck.m"
      check_hlds__post_typecheck__Pieces_15 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[57]), check_hlds__post_typecheck__V_29_29);
    }
#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_15));
#line 385 "post_typecheck.m"
    }
#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__V_57_57));
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "post_typecheck.m"
    }
#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_16, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_13));
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_56_56));
#line 385 "post_typecheck.m"
    }
#line 387 "post_typecheck.m"
    {
#line 387 "post_typecheck.m"
      check_hlds__post_typecheck__conv2_DueTo_17 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, check_hlds__post_typecheck__TypeCtorInfo_77_77, check_hlds__post_typecheck__Constraints_10, ((MR_Box) ((MR_String) "The constraint is due to:")), ((MR_Box) ((MR_String) "The constraints are due to:")));
    }
#line 387 "post_typecheck.m"
    check_hlds__post_typecheck__DueTo_17 = ((MR_String) check_hlds__post_typecheck__conv2_DueTo_17);
#line 390 "post_typecheck.m"
    {
#line 390 "post_typecheck.m"
      check_hlds__post_typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_13));
#line 390 "post_typecheck.m"
    }
#line 391 "post_typecheck.m"
    {
#line 391 "post_typecheck.m"
      check_hlds__post_typecheck__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 391 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_67_67, 1) = ((MR_Box) (check_hlds__post_typecheck__DueTo_17));
#line 391 "post_typecheck.m"
    }
#line 391 "post_typecheck.m"
    {
#line 391 "post_typecheck.m"
      check_hlds__post_typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__post_typecheck__V_67_67));
#line 391 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "post_typecheck.m"
    }
#line 391 "post_typecheck.m"
    {
#line 391 "post_typecheck.m"
      check_hlds__post_typecheck__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_65_65, 0) = ((MR_Box) (check_hlds__post_typecheck__V_66_66));
#line 391 "post_typecheck.m"
    }
#line 391 "post_typecheck.m"
    {
#line 391 "post_typecheck.m"
      check_hlds__post_typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__post_typecheck__V_65_65));
#line 391 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "post_typecheck.m"
    }
#line 390 "post_typecheck.m"
    {
#line 390 "post_typecheck.m"
      check_hlds__post_typecheck__ContextMsgStart_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 0) = ((MR_Box) (check_hlds__post_typecheck__V_61_61));
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 1) = ((MR_Box) ((MR_Integer) 1));
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 2) = ((MR_Box) ((MR_Integer) 0));
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 3) = ((MR_Box) (check_hlds__post_typecheck__V_64_64));
#line 390 "post_typecheck.m"
    }
#line 392 "post_typecheck.m"
    {
#line 392 "post_typecheck.m"
      check_hlds__post_typecheck__ConstrainedGoals_19 = check_hlds__post_typecheck__find_constrained_goals_2_f_0(check_hlds__post_typecheck__PredInfo_9, check_hlds__post_typecheck__Constraints_10);
    }
#line 393 "post_typecheck.m"
    {
#line 393 "post_typecheck.m"
      check_hlds__post_typecheck__ContextMsgs_20 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__ConstrainedGoals_19);
    }
#line 397 "post_typecheck.m"
    {
#line 397 "post_typecheck.m"
      check_hlds__post_typecheck__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_73_73, 0) = ((MR_Box) (check_hlds__post_typecheck__ContextMsgStart_18));
#line 397 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_73_73, 1) = ((MR_Box) (check_hlds__post_typecheck__ContextMsgs_20));
#line 397 "post_typecheck.m"
    }
#line 397 "post_typecheck.m"
    {
#line 397 "post_typecheck.m"
      check_hlds__post_typecheck__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_16));
#line 397 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__post_typecheck__V_73_73));
#line 397 "post_typecheck.m"
    }
#line 396 "post_typecheck.m"
    {
#line 396 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 2) = ((MR_Box) (check_hlds__post_typecheck__V_72_72));
#line 396 "post_typecheck.m"
    }
#line 398 "post_typecheck.m"
    {
#line 398 "post_typecheck.m"
      MR_Word base;
#line 398 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_23 = base;
#line 398 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_21));
#line 398 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22));
#line 398 "post_typecheck.m"
    }
#line 371 "post_typecheck.m"
  }
#line 366 "post_typecheck.m"
}

#line 318 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_2_8_p_0(
#line 318 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 318 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_2,
#line 318 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__VarsToDo_3,
#line 318 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 318 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5,
#line 318 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6,
#line 318 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7,
#line 318 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Set_8)
#line 318 "post_typecheck.m"
{
#line 323 "post_typecheck.m"
  while (MR_TRUE)
#line 323 "post_typecheck.m"
    {
#line 323 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 323 "post_typecheck.m"
      {
#line 323 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 323 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "post_typecheck.m"
          {
#line 323 "post_typecheck.m"
            *check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Set_8 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7;
#line 323 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 323 "post_typecheck.m"
          }
#line 323 "post_typecheck.m"
        else
#line 325 "post_typecheck.m"
          {
#line 325 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Type_18;
#line 325 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 324 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, (MR_Integer) 0)));

#line 324 "post_typecheck.m"
            check_hlds__post_typecheck__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, (MR_Integer) 1)));
#line 326 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__VarsToDo_3 < (MR_Integer) 0);
#line 328 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 327 "post_typecheck.m"
              {
#line 327 "post_typecheck.m"
                *check_hlds__post_typecheck__HeadVar__4_4 = check_hlds__post_typecheck__HeadVar__1_1;
#line 327 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_Set_8 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7;
#line 327 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 327 "post_typecheck.m"
              }
#line 328 "post_typecheck.m"
            else
#line 329 "post_typecheck.m"
              {
#line 329 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TypeInfo_42_42;
#line 329 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVars_25;
#line 329 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarsSet0_26;
#line 329 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarsSet1_27;
#line 329 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35;
#line 329 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_37_37;
#line 329 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_38_38;

#line 329 "post_typecheck.m"
                {
#line 329 "post_typecheck.m"
                  parse_tree__prog_type__type_vars_2_p_0(check_hlds__post_typecheck__Type_18, &check_hlds__post_typecheck__TVars_25);
                }
#line 8682 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeInfo_42_42 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 330 "post_typecheck.m"
                {
#line 330 "post_typecheck.m"
                  mercury__set__list_to_set_2_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVars_25, &check_hlds__post_typecheck__TVarsSet0_26);
                }
#line 331 "post_typecheck.m"
                {
#line 331 "post_typecheck.m"
                  mercury__set__delete_list_3_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__HeadTypeParams_2, check_hlds__post_typecheck__TVarsSet0_26, &check_hlds__post_typecheck__TVarsSet1_27);
                }
#line 332 "post_typecheck.m"
                {
#line 332 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVarsSet1_27);
                }
#line 334 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 333 "post_typecheck.m"
                  {
#line 333 "post_typecheck.m"
                    check_hlds__post_typecheck__STATE_VARIABLE_Set_37_37 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7;
#line 333 "post_typecheck.m"
                    check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 333 "post_typecheck.m"
                  }
#line 334 "post_typecheck.m"
                else
#line 335 "post_typecheck.m"
                  {
#line 335 "post_typecheck.m"
                    {
#line 335 "post_typecheck.m"
                      check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_32_32));
#line 335 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5));
#line 335 "post_typecheck.m"
                    }
#line 336 "post_typecheck.m"
                    {
#line 336 "post_typecheck.m"
                      mercury__set__union_3_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7, check_hlds__post_typecheck__TVarsSet1_27, &check_hlds__post_typecheck__STATE_VARIABLE_Set_37_37);
                    }
#line 335 "post_typecheck.m"
                  }
#line 339 "post_typecheck.m"
                check_hlds__post_typecheck__V_38_38 = (check_hlds__post_typecheck__VarsToDo_3 - (MR_Integer) 1);
#line 338 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 338 "post_typecheck.m"
                {
#line 338 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__VarTypes_19;
#line 338 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__VarsToDo__tmp_copy_3 = check_hlds__post_typecheck__V_38_38;
#line 338 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_5 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35;
#line 338 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0__tmp_copy_7 = check_hlds__post_typecheck__STATE_VARIABLE_Set_37_37;

#line 338 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_Set_0_7 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0__tmp_copy_7;
#line 338 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_5;
#line 338 "post_typecheck.m"
                  check_hlds__post_typecheck__VarsToDo_3 = check_hlds__post_typecheck__VarsToDo__tmp_copy_3;
#line 338 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 338 "post_typecheck.m"
                }
#line 338 "post_typecheck.m"
                continue;
#line 329 "post_typecheck.m"
              }
#line 325 "post_typecheck.m"
          }
#line 323 "post_typecheck.m"
      }
#line 323 "post_typecheck.m"
      break;
#line 323 "post_typecheck.m"
    }
#line 318 "post_typecheck.m"
}

#line 301 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_6_p_0(
#line 301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarTypes_7,
#line 301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_8,
#line 301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14,
#line 301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15,
#line 301 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0_16,
#line 301 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Set_17)
#line 301 "post_typecheck.m"
{
#line 307 "post_typecheck.m"
  while (MR_TRUE)
#line 307 "post_typecheck.m"
    {
#line 307 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 307 "post_typecheck.m"
      {
#line 307 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;
#line 307 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__LeftOverVarTypes_11;
#line 307 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 307 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_20_20;

#line 308 "post_typecheck.m"
        {
#line 308 "post_typecheck.m"
          check_hlds__post_typecheck__check_var_type_bindings_2_8_p_0(check_hlds__post_typecheck__VarTypes_7, check_hlds__post_typecheck__HeadTypeParams_8, (MR_Integer) 1000, &check_hlds__post_typecheck__LeftOverVarTypes_11, check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14, &check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19, check_hlds__post_typecheck__STATE_VARIABLE_Set_0_16, &check_hlds__post_typecheck__STATE_VARIABLE_Set_20_20);
        }
#line 312 "post_typecheck.m"
        if ((check_hlds__post_typecheck__LeftOverVarTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "post_typecheck.m"
          {
#line 311 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 311 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Set_17 = check_hlds__post_typecheck__STATE_VARIABLE_Set_20_20;
#line 311 "post_typecheck.m"
          }
#line 312 "post_typecheck.m"
        else
#line 314 "post_typecheck.m"
          {
#line 314 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 314 "post_typecheck.m"
            {
#line 314 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__VarTypes__tmp_copy_7 = check_hlds__post_typecheck__LeftOverVarTypes_11;
#line 314 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_14 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 314 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Set_0__tmp_copy_16 = check_hlds__post_typecheck__STATE_VARIABLE_Set_20_20;

#line 314 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Set_0_16 = check_hlds__post_typecheck__STATE_VARIABLE_Set_0__tmp_copy_16;
#line 314 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_14;
#line 314 "post_typecheck.m"
              check_hlds__post_typecheck__VarTypes_7 = check_hlds__post_typecheck__VarTypes__tmp_copy_7;
#line 314 "post_typecheck.m"
            }
#line 314 "post_typecheck.m"
            continue;
#line 314 "post_typecheck.m"
          }
#line 307 "post_typecheck.m"
      }
#line 307 "post_typecheck.m"
      break;
#line 307 "post_typecheck.m"
    }
#line 301 "post_typecheck.m"
}

#line 352 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0_1(
#line 352 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 352 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 352 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 352 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3)
#line 352 "post_typecheck.m"
{
#line 352 "post_typecheck.m"
  {
#line 352 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 352 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__3_25;

#line 352 "post_typecheck.m"
    {
#line 352 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__352__1_3_p_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv0_HeadVar__3_25);
    }
#line 352 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__3_25));
#line 352 "post_typecheck.m"
  }
#line 352 "post_typecheck.m"
}

#line 253 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(
#line 253 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 253 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 253 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 253 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33,
#line 253 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_10,
#line 253 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34)
#line 253 "post_typecheck.m"
{
#line 257 "post_typecheck.m"
  {
#line 257 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnprovenConstraints0_12;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesInfo0_16;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadTypeParams_17;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarSet_18;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypesMap0_19;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypesList_20;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Set0_21;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnresolvedVarsTypes_22;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Set_23;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35;
#line 257 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36;

#line 258 "post_typecheck.m"
    {
#line 258 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__UnprovenConstraints0_12);
    }
#line 259 "post_typecheck.m"
    check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "post_typecheck.m"
    if ((check_hlds__post_typecheck__UnprovenConstraints0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "post_typecheck.m"
      {
#line 268 "post_typecheck.m"
        *check_hlds__post_typecheck__NumBadErrors_10 = (MR_Integer) 0;
#line 267 "post_typecheck.m"
        check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35;
#line 267 "post_typecheck.m"
      }
#line 266 "post_typecheck.m"
    else
#line 261 "post_typecheck.m"
      {
#line 261 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 261 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__UnprovenConstraints_15;

#line 262 "post_typecheck.m"
        {
#line 262 "post_typecheck.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_42_42, check_hlds__post_typecheck__UnprovenConstraints0_12, &check_hlds__post_typecheck__UnprovenConstraints_15);
        }
#line 263 "post_typecheck.m"
        {
#line 263 "post_typecheck.m"
          check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__PredId_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__post_typecheck__UnprovenConstraints_15, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35, &check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36);
        }
#line 265 "post_typecheck.m"
        {
#line 265 "post_typecheck.m"
          mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_42_42, check_hlds__post_typecheck__UnprovenConstraints_15, check_hlds__post_typecheck__NumBadErrors_10);
        }
#line 261 "post_typecheck.m"
      }
#line 271 "post_typecheck.m"
    {
#line 271 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ClausesInfo0_16);
    }
#line 272 "post_typecheck.m"
    {
#line 272 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__HeadTypeParams_17);
    }
#line 273 "post_typecheck.m"
    {
#line 273 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__VarSet_18);
    }
#line 274 "post_typecheck.m"
    {
#line 274 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__VarTypesMap0_19);
    }
#line 275 "post_typecheck.m"
    {
#line 275 "post_typecheck.m"
      parse_tree__prog_data__vartypes_to_assoc_list_2_p_0(check_hlds__post_typecheck__VarTypesMap0_19, &check_hlds__post_typecheck__VarTypesList_20);
    }
#line 276 "post_typecheck.m"
    {
#line 276 "post_typecheck.m"
      mercury__set__init_1_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], &check_hlds__post_typecheck__Set0_21);
    }
#line 277 "post_typecheck.m"
    {
#line 277 "post_typecheck.m"
      check_hlds__post_typecheck__check_var_type_bindings_6_p_0(check_hlds__post_typecheck__VarTypesList_20, check_hlds__post_typecheck__HeadTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__UnresolvedVarsTypes_22, check_hlds__post_typecheck__Set0_21, &check_hlds__post_typecheck__Set_23);
    }
#line 281 "post_typecheck.m"
    if ((check_hlds__post_typecheck__UnresolvedVarsTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "post_typecheck.m"
      {
#line 280 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 280 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36;
#line 280 "post_typecheck.m"
      }
#line 281 "post_typecheck.m"
    else
#line 282 "post_typecheck.m"
      {
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeInfo_36_72;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProofMap0_26;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap0_27;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypesMap_28;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProofMap_29;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_30;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_31;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VoidSubst_58;
#line 282 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_63_63;
#line 355 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv1_VoidSubst_58;

#line 283 "post_typecheck.m"
        {
#line 283 "post_typecheck.m"
          check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__PredId_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__post_typecheck__VarSet_18, check_hlds__post_typecheck__UnresolvedVarsTypes_22, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34);
        }
#line 287 "post_typecheck.m"
        {
#line 287 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ProofMap0_26);
        }
#line 288 "post_typecheck.m"
        {
#line 288 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ConstraintMap0_27);
        }
#line 9063 "check_hlds.post_typecheck.c"
        check_hlds__post_typecheck__TypeInfo_36_72 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 355 "post_typecheck.m"
        {
#line 355 "post_typecheck.m"
          check_hlds__post_typecheck__V_63_63 = mercury__map__init_0_f_0(check_hlds__post_typecheck__TypeInfo_36_72, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
#line 355 "post_typecheck.m"
        {
#line 355 "post_typecheck.m"
          mercury__set__fold_4_p_0(check_hlds__post_typecheck__TypeInfo_36_72, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[0], (MR_Word) &check_hlds__post_typecheck_scalar_common_2[4], check_hlds__post_typecheck__Set_23, ((MR_Box) (check_hlds__post_typecheck__V_63_63)), &check_hlds__post_typecheck__conv1_VoidSubst_58);
        }
#line 355 "post_typecheck.m"
        check_hlds__post_typecheck__VoidSubst_58 = ((MR_Word) check_hlds__post_typecheck__conv1_VoidSubst_58);
#line 358 "post_typecheck.m"
        {
#line 358 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_subst_to_vartypes_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__VarTypesMap0_19, &check_hlds__post_typecheck__VarTypesMap_28);
        }
#line 359 "post_typecheck.m"
        {
#line 359 "post_typecheck.m"
          check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__ProofMap0_26, &check_hlds__post_typecheck__ProofMap_29);
        }
#line 360 "post_typecheck.m"
        {
#line 360 "post_typecheck.m"
          check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__ConstraintMap0_27, &check_hlds__post_typecheck__ConstraintMap_30);
        }
#line 291 "post_typecheck.m"
        {
#line 291 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__post_typecheck__VarTypesMap_28, check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__ClausesInfo_31);
        }
#line 292 "post_typecheck.m"
        {
#line 292 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__post_typecheck__ClausesInfo_31, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39);
        }
#line 293 "post_typecheck.m"
        {
#line 293 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__post_typecheck__ProofMap_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40);
        }
#line 294 "post_typecheck.m"
        {
#line 294 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__post_typecheck__ConstraintMap_30, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33);
#line 294 "post_typecheck.m"
          return;
        }
#line 282 "post_typecheck.m"
      }
#line 257 "post_typecheck.m"
  }
#line 253 "post_typecheck.m"
}

#line 916 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1(
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 916 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 916 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 916 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5)
#line 916 "post_typecheck.m"
{
#line 916 "post_typecheck.m"
  {
#line 916 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 916 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_Procs_12;
#line 916 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21;

#line 916 "post_typecheck.m"
    {
#line 916 "post_typecheck.m"
      check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv1_Procs_12, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_4), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21);
    }
#line 916 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv1_Procs_12));
#line 916 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21));
#line 916 "post_typecheck.m"
  }
#line 916 "post_typecheck.m"
}

#line 211 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(
#line 211 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 211 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 211 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15,
#line 211 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16,
#line 211 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_11,
#line 211 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17,
#line 211 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18)
#line 211 "post_typecheck.m"
{
#line 232 "post_typecheck.m"
  {
#line 232 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 218 "post_typecheck.m"
    {
#line 218 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15);
    }
#line 219 "post_typecheck.m"
    if (!(check_hlds__post_typecheck__succeeded))
#line 219 "post_typecheck.m"
      {
#line 219 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15);
      }
#line 232 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 225 "post_typecheck.m"
      {
#line 225 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ErrorProcs_14;
#line 225 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19;
#line 225 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 225 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_21_21;
#line 225 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22;
#line 954 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Origin_68;
#line 954 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_71_71;
#line 954 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_72_72;
#line 955 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_69_69;

#line 224 "post_typecheck.m"
        {
#line 224 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__ErrorProcs_14, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19);
        }
#line 227 "post_typecheck.m"
        check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "post_typecheck.m"
        if ((check_hlds__post_typecheck__ErrorProcs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "post_typecheck.m"
          {
#line 912 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19;
#line 912 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22 = check_hlds__post_typecheck__V_21_21;
#line 912 "post_typecheck.m"
          }
#line 912 "post_typecheck.m"
        else
#line 914 "post_typecheck.m"
          {
#line 914 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcTable0_47;
#line 914 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcTable_48;
#line 914 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_49_49;
#line 916 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv3_ProcTable_48;
#line 916 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22;

#line 915 "post_typecheck.m"
            {
#line 915 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__post_typecheck__ProcTable0_47);
            }
#line 916 "post_typecheck.m"
            {
#line 916 "post_typecheck.m"
              check_hlds__post_typecheck__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 916 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
#line 916 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1));
#line 916 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 916 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 3) = ((MR_Box) (check_hlds__post_typecheck__ModuleInfo_8));
#line 916 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 4) = ((MR_Box) (check_hlds__post_typecheck__PredId_9));
#line 916 "post_typecheck.m"
            }
#line 916 "post_typecheck.m"
            {
#line 916 "post_typecheck.m"
              mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[2], (MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], check_hlds__post_typecheck__V_49_49, check_hlds__post_typecheck__ErrorProcs_14, ((MR_Box) (check_hlds__post_typecheck__ProcTable0_47)), &check_hlds__post_typecheck__conv3_ProcTable_48, ((MR_Box) (check_hlds__post_typecheck__V_21_21)), &check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22);
            }
#line 916 "post_typecheck.m"
            check_hlds__post_typecheck__ProcTable_48 = ((MR_Word) check_hlds__post_typecheck__conv3_ProcTable_48);
#line 916 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22 = ((MR_Word) check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22);
#line 918 "post_typecheck.m"
            {
#line 918 "post_typecheck.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__ProcTable_48, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 914 "post_typecheck.m"
          }
#line 954 "post_typecheck.m"
        {
#line 954 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__post_typecheck__Origin_68);
        }
#line 955 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Origin_68)) == (MR_mktag((MR_Integer) 0)));
#line 955 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 955 "post_typecheck.m"
          {
#line 955 "post_typecheck.m"
            check_hlds__post_typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_68, (MR_Integer) 0)));
#line 955 "post_typecheck.m"
            check_hlds__post_typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_71_71, (MR_Integer) 0)));
#line 955 "post_typecheck.m"
            check_hlds__post_typecheck__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_71_71, (MR_Integer) 1)));
#line 955 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_72_72 == (MR_Integer) 0);
#line 955 "post_typecheck.m"
          }
#line 958 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 957 "post_typecheck.m"
          {
#line 957 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17 = check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22;
#line 957 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 957 "post_typecheck.m"
          }
#line 958 "post_typecheck.m"
        else
#line 959 "post_typecheck.m"
          {
#line 959 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_70;

#line 959 "post_typecheck.m"
            {
#line 959 "post_typecheck.m"
              check_hlds__post_typecheck__ProcIds_70 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 960 "post_typecheck.m"
            {
#line 960 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ProcIds_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17);
            }
#line 959 "post_typecheck.m"
          }
#line 230 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 231 "post_typecheck.m"
        *check_hlds__post_typecheck__NumBadErrors_11 = (MR_Integer) 0;
#line 225 "post_typecheck.m"
      }
#line 232 "post_typecheck.m"
    else
#line 234 "post_typecheck.m"
      {
#line 234 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26;
#line 234 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28;
#line 234 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29;
#line 234 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31;
#line 234 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33;
#line 234 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ErrorProcs_35;
#line 954 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Origin_84;
#line 954 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_87_87;
#line 954 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_88_88;
#line 955 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_85_85;

#line 233 "post_typecheck.m"
        {
#line 233 "post_typecheck.m"
          check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26, check_hlds__post_typecheck__NumBadErrors_11, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18);
        }
#line 236 "post_typecheck.m"
        {
#line 236 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__ErrorProcs_35, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28);
        }
#line 237 "post_typecheck.m"
        {
#line 237 "post_typecheck.m"
          check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ErrorProcs_35, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31);
        }
#line 954 "post_typecheck.m"
        {
#line 954 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, &check_hlds__post_typecheck__Origin_84);
        }
#line 955 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Origin_84)) == (MR_mktag((MR_Integer) 0)));
#line 955 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 955 "post_typecheck.m"
          {
#line 955 "post_typecheck.m"
            check_hlds__post_typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_84, (MR_Integer) 0)));
#line 955 "post_typecheck.m"
            check_hlds__post_typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_87_87, (MR_Integer) 0)));
#line 955 "post_typecheck.m"
            check_hlds__post_typecheck__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_87_87, (MR_Integer) 1)));
#line 955 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_88_88 == (MR_Integer) 0);
#line 955 "post_typecheck.m"
          }
#line 958 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 957 "post_typecheck.m"
          {
#line 957 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33 = check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31;
#line 957 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29;
#line 957 "post_typecheck.m"
          }
#line 958 "post_typecheck.m"
        else
#line 959 "post_typecheck.m"
          {
#line 959 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_86;

#line 959 "post_typecheck.m"
            {
#line 959 "post_typecheck.m"
              check_hlds__post_typecheck__ProcIds_86 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29);
            }
#line 960 "post_typecheck.m"
            {
#line 960 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ProcIds_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31, &check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33);
            }
#line 959 "post_typecheck.m"
          }
#line 243 "post_typecheck.m"
        {
#line 243 "post_typecheck.m"
          check_hlds__post_typecheck__check_type_of_main_3_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17);
#line 243 "post_typecheck.m"
          return;
        }
#line 234 "post_typecheck.m"
      }
#line 232 "post_typecheck.m"
  }
#line 211 "post_typecheck.m"
}

#line 185 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(
#line 185 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 185 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ValidPredIdSet_2,
#line 185 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 185 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 185 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__HeadVar__5_5,
#line 185 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__6_6,
#line 185 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__7_7)
#line 185 "post_typecheck.m"
{
#line 190 "post_typecheck.m"
  {
#line 190 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 190 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "post_typecheck.m"
      {
#line 190 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 0;
#line 190 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "post_typecheck.m"
      }
#line 190 "post_typecheck.m"
    else
#line 194 "post_typecheck.m"
      {
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdsInfos0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdInfo_14;
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdsInfos_15;
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadAlwaysSpecs_17;
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TailAlwaysSpecs_18;
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19;
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TailNoTypeErrorSpecs_20;
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo0_12, (MR_Integer) 0)));
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo0_12, (MR_Integer) 1)));
#line 194 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo_23;
#line 194 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__HeadNumBadErrors_24;
#line 194 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__TailNumBadErrors_25;

#line 196 "post_typecheck.m"
        {
#line 196 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__post_typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__post_typecheck__PredId_21)));
        }
#line 199 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 197 "post_typecheck.m"
          {
#line 197 "post_typecheck.m"
            check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__PredId_21, check_hlds__post_typecheck__PredInfo0_22, &check_hlds__post_typecheck__PredInfo_23, &check_hlds__post_typecheck__HeadNumBadErrors_24, &check_hlds__post_typecheck__HeadAlwaysSpecs_17, &check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19);
          }
#line 199 "post_typecheck.m"
        else
#line 200 "post_typecheck.m"
          {
#line 200 "post_typecheck.m"
            check_hlds__post_typecheck__PredInfo_23 = check_hlds__post_typecheck__PredInfo0_22;
#line 201 "post_typecheck.m"
            check_hlds__post_typecheck__HeadNumBadErrors_24 = (MR_Integer) 0;
#line 202 "post_typecheck.m"
            check_hlds__post_typecheck__HeadAlwaysSpecs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 203 "post_typecheck.m"
            check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 200 "post_typecheck.m"
          }
#line 205 "post_typecheck.m"
        {
#line 205 "post_typecheck.m"
          check_hlds__post_typecheck__PredIdInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo_14, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_21));
#line 205 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo_14, 1) = ((MR_Box) (check_hlds__post_typecheck__PredInfo_23));
#line 205 "post_typecheck.m"
        }
#line 206 "post_typecheck.m"
        {
#line 206 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__ValidPredIdSet_2, check_hlds__post_typecheck__PredIdsInfos0_13, &check_hlds__post_typecheck__PredIdsInfos_15, &check_hlds__post_typecheck__TailNumBadErrors_25, &check_hlds__post_typecheck__TailAlwaysSpecs_18, &check_hlds__post_typecheck__TailNoTypeErrorSpecs_20);
        }
#line 192 "post_typecheck.m"
        {
#line 192 "post_typecheck.m"
          MR_Word base;
#line 192 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__4_4 = base;
#line 192 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__PredIdInfo_14));
#line 192 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__PredIdsInfos_15));
#line 192 "post_typecheck.m"
        }
#line 193 "post_typecheck.m"
        {
#line 193 "post_typecheck.m"
          MR_Word base;
#line 193 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__6_6 = base;
#line 193 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HeadAlwaysSpecs_17));
#line 193 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__TailAlwaysSpecs_18));
#line 193 "post_typecheck.m"
        }
#line 194 "post_typecheck.m"
        {
#line 194 "post_typecheck.m"
          MR_Word base;
#line 194 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__7_7 = base;
#line 194 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19));
#line 194 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__TailNoTypeErrorSpecs_20));
#line 194 "post_typecheck.m"
        }
#line 209 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__5_5 = (check_hlds__post_typecheck__HeadNumBadErrors_24 + check_hlds__post_typecheck__TailNumBadErrors_25);
#line 194 "post_typecheck.m"
      }
#line 190 "post_typecheck.m"
  }
#line 185 "post_typecheck.m"
}

#line 1103 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1(
#line 1103 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1103 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1103 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_2)
#line 1103 "post_typecheck.m"
{
#line 1103 "post_typecheck.m"
  {
#line 1103 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1103 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1103 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__5_5;

#line 1103 "post_typecheck.m"
    {
#line 1103 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_hlds_constraint_list_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 5))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), &check_hlds__post_typecheck__conv0_HeadVar__5_5);
    }
#line 1103 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1103 "post_typecheck.m"
      {
#line 1103 "post_typecheck.m"
        *check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__5_5));
#line 1103 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1103 "post_typecheck.m"
      }
#line 1103 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 1103 "post_typecheck.m"
  }
#line 1103 "post_typecheck.m"
}

#line 118 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0(
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__X0_17,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId0_18,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgVars0_19,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Mode0_20,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Unification0_21,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_22,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo0_23,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_24,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104,
#line 118 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106,
#line 118 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107,
#line 118 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108,
#line 118 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109,
#line 118 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_28,
#line 118 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__IsPlainUnify_29)
#line 118 "post_typecheck.m"
{
#line 1034 "post_typecheck.m"
  {
#line 1034 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1034 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_203_203;
#line 1034 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeOfX_30;
#line 1034 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__Arity_31;
#line 1063 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Purity_35;
#line 1063 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FuncVar_36;
#line 1063 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FuncArgVars_37;
#line 1042 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__ApplyName_32;
#line 1042 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_110_110;
#line 1042 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_111_111;
#line 1042 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_33_33;
#line 1042 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;

#line 1035 "post_typecheck.m"
    {
#line 1035 "post_typecheck.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__X0_17, &check_hlds__post_typecheck__TypeOfX_30);
    }
#line 9721 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_203_203 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[1];
#line 1036 "post_typecheck.m"
    {
#line 1036 "post_typecheck.m"
      mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__Arity_31);
    }
#line 1042 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1042 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1042 "post_typecheck.m"
      {
#line 1042 "post_typecheck.m"
        check_hlds__post_typecheck__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1042 "post_typecheck.m"
        check_hlds__post_typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1042 "post_typecheck.m"
        check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1042 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_110_110)) == (MR_mktag((MR_Integer) 0)));
#line 1042 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1042 "post_typecheck.m"
          {
#line 1042 "post_typecheck.m"
            check_hlds__post_typecheck__ApplyName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_110_110, (MR_Integer) 0)));
#line 1044 "post_typecheck.m"
            if ((strcmp(check_hlds__post_typecheck__ApplyName_32, (MR_String) "") == 0))
#line 1044 "post_typecheck.m"
              {
#line 1044 "post_typecheck.m"
                check_hlds__post_typecheck__Purity_35 = (MR_Integer) 0;
#line 1044 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1044 "post_typecheck.m"
              }
#line 1044 "post_typecheck.m"
            else
#line 1044 "post_typecheck.m"
            if ((strcmp(check_hlds__post_typecheck__ApplyName_32, (MR_String) "apply") == 0))
#line 1043 "post_typecheck.m"
              {
#line 1043 "post_typecheck.m"
                check_hlds__post_typecheck__Purity_35 = (MR_Integer) 0;
#line 1043 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1043 "post_typecheck.m"
              }
#line 1044 "post_typecheck.m"
            else
#line 1044 "post_typecheck.m"
            if ((strcmp(check_hlds__post_typecheck__ApplyName_32, (MR_String) "impure_apply") == 0))
#line 1045 "post_typecheck.m"
              {
#line 1045 "post_typecheck.m"
                check_hlds__post_typecheck__Purity_35 = (MR_Integer) 2;
#line 1045 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1045 "post_typecheck.m"
              }
#line 1044 "post_typecheck.m"
            else
#line 1044 "post_typecheck.m"
            if ((strcmp(check_hlds__post_typecheck__ApplyName_32, (MR_String) "semipure_apply") == 0))
#line 1046 "post_typecheck.m"
              {
#line 1046 "post_typecheck.m"
                check_hlds__post_typecheck__Purity_35 = (MR_Integer) 1;
#line 1046 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1046 "post_typecheck.m"
              }
#line 1044 "post_typecheck.m"
            else
#line 1044 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = MR_FALSE;
#line 1042 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1042 "post_typecheck.m"
              {
#line 1048 "post_typecheck.m"
                check_hlds__post_typecheck__V_111_111 = (MR_Integer) 1;
#line 1048 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 >= check_hlds__post_typecheck__V_111_111);
#line 1042 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1042 "post_typecheck.m"
                  {
#line 1049 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ArgVars0_19)) == (MR_mktag((MR_Integer) 1)));
#line 1049 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1049 "post_typecheck.m"
                      {
#line 1049 "post_typecheck.m"
                        check_hlds__post_typecheck__FuncVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgVars0_19, (MR_Integer) 0)));
#line 1049 "post_typecheck.m"
                        check_hlds__post_typecheck__FuncArgVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgVars0_19, (MR_Integer) 1)));
#line 1049 "post_typecheck.m"
                      }
#line 1042 "post_typecheck.m"
                  }
#line 1042 "post_typecheck.m"
              }
#line 1042 "post_typecheck.m"
          }
#line 1042 "post_typecheck.m"
      }
#line 1063 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1054 "post_typecheck.m"
      {
#line 1054 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgVars_38;
#line 1054 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__FullArity_41;
#line 1054 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HOCall_42;
#line 1054 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_112_112;
#line 1054 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_115_115;

#line 1054 "post_typecheck.m"
        {
#line 1054 "post_typecheck.m"
          check_hlds__post_typecheck__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_112_112, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1054 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1054 "post_typecheck.m"
        }
#line 1054 "post_typecheck.m"
        {
#line 1054 "post_typecheck.m"
          check_hlds__post_typecheck__ArgVars_38 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__FuncArgVars_37, check_hlds__post_typecheck__V_112_112);
        }
#line 1057 "post_typecheck.m"
        {
#line 1057 "post_typecheck.m"
          parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, check_hlds__post_typecheck__Arity_31, &check_hlds__post_typecheck__FullArity_41);
        }
#line 1059 "post_typecheck.m"
        {
#line 1059 "post_typecheck.m"
          check_hlds__post_typecheck__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_115_115, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncVar_36));
#line 1059 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_115_115, 1) = ((MR_Box) (check_hlds__post_typecheck__Purity_35));
#line 1059 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_115_115, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1059 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_115_115, 3) = ((MR_Box) (check_hlds__post_typecheck__FullArity_41));
#line 1059 "post_typecheck.m"
        }
#line 1058 "post_typecheck.m"
        {
#line 1058 "post_typecheck.m"
          check_hlds__post_typecheck__HOCall_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1058 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 1) = ((MR_Box) (check_hlds__post_typecheck__V_115_115));
#line 1058 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_38));
#line 1058 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 5) = ((MR_Box) ((MR_Integer) 6));
#line 1058 "post_typecheck.m"
        }
#line 1061 "post_typecheck.m"
        {
#line 1061 "post_typecheck.m"
          MR_Word base;
#line 1061 "post_typecheck.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "post_typecheck.m"
          *check_hlds__post_typecheck__Goal_28 = base;
#line 1061 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HOCall_42));
#line 1061 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1061 "post_typecheck.m"
        }
#line 1062 "post_typecheck.m"
        *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1054 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108;
#line 1054 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106;
#line 1054 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104;
#line 1054 "post_typecheck.m"
      }
#line 1063 "post_typecheck.m"
    else
#line 1120 "post_typecheck.m"
      {
#line 1120 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredId_60;
#line 1120 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__QualifiedFuncName_61;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_204_204;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredName_43;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Markers_46;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredTable_47;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIds_48;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_51;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistQTVars_52;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadTypeParams_53;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes0_54;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_55;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_56;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalId_57;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintSearch_58;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Context_59;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_118_118;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_119_119;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_120_120;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_121_121;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_122_122;
#line 1069 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__V_44_44;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_45_45;
#line 1076 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_49_49;
#line 1076 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_50_50;

#line 1069 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1069 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1069 "post_typecheck.m"
          {
#line 1069 "post_typecheck.m"
            check_hlds__post_typecheck__PredName_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1069 "post_typecheck.m"
            check_hlds__post_typecheck__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1069 "post_typecheck.m"
            check_hlds__post_typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1071 "post_typecheck.m"
            {
#line 1071 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__Markers_46);
            }
#line 1072 "post_typecheck.m"
            {
#line 1072 "post_typecheck.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, &check_hlds__post_typecheck__PredTable_47);
            }
#line 1075 "post_typecheck.m"
            {
#line 1075 "post_typecheck.m"
              check_hlds__post_typecheck__V_118_118 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__post_typecheck__Markers_46);
            }
#line 1074 "post_typecheck.m"
            {
#line 1074 "post_typecheck.m"
              hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__post_typecheck__PredTable_47, check_hlds__post_typecheck__V_118_118, check_hlds__post_typecheck__PredName_43, check_hlds__post_typecheck__Arity_31, &check_hlds__post_typecheck__PredIds_48);
            }
#line 1076 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__PredIds_48)) == (MR_mktag((MR_Integer) 1)));
#line 1076 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1076 "post_typecheck.m"
              {
#line 1076 "post_typecheck.m"
                check_hlds__post_typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PredIds_48, (MR_Integer) 0)));
#line 1076 "post_typecheck.m"
                check_hlds__post_typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PredIds_48, (MR_Integer) 1)));
#line 1085 "post_typecheck.m"
                {
#line 1085 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104);
                }
#line 1085 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1069 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1069 "post_typecheck.m"
                  {
#line 1090 "post_typecheck.m"
                    {
#line 1090 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104);
                    }
#line 1090 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1069 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1069 "post_typecheck.m"
                      {
#line 1095 "post_typecheck.m"
                        {
#line 1095 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__TVarSet_51);
                        }
#line 1096 "post_typecheck.m"
                        {
#line 1096 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__ExistQTVars_52);
                        }
#line 1097 "post_typecheck.m"
                        {
#line 1097 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__HeadTypeParams_53);
                        }
#line 1098 "post_typecheck.m"
                        {
#line 1098 "post_typecheck.m"
                          parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_54);
                        }
#line 10060 "check_hlds.post_typecheck.c"
                        check_hlds__post_typecheck__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1099 "post_typecheck.m"
                        check_hlds__post_typecheck__V_120_120 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1099 "post_typecheck.m"
                        {
#line 1099 "post_typecheck.m"
                          check_hlds__post_typecheck__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_119_119, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeOfX_30));
#line 1099 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_119_119, 1) = ((MR_Box) (check_hlds__post_typecheck__V_120_120));
#line 1099 "post_typecheck.m"
                        }
#line 1099 "post_typecheck.m"
                        {
#line 1099 "post_typecheck.m"
                          check_hlds__post_typecheck__ArgTypes_55 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_204_204, check_hlds__post_typecheck__ArgTypes0_54, check_hlds__post_typecheck__V_119_119);
                        }
#line 1100 "post_typecheck.m"
                        {
#line 1100 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__ConstraintMap_56);
                        }
#line 1101 "post_typecheck.m"
                        {
#line 1101 "post_typecheck.m"
                          check_hlds__post_typecheck__GoalId_57 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1103 "post_typecheck.m"
                        check_hlds__post_typecheck__V_121_121 = (MR_Integer) 0;
#line 1103 "post_typecheck.m"
                        {
#line 1103 "post_typecheck.m"
                          check_hlds__post_typecheck__ConstraintSearch_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[0]));
#line 1103 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 1) = ((MR_Box) (check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1));
#line 1103 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1103 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 3) = ((MR_Box) (check_hlds__post_typecheck__ConstraintMap_56));
#line 1103 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 4) = ((MR_Box) (check_hlds__post_typecheck__V_121_121));
#line 1103 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 5) = ((MR_Box) (check_hlds__post_typecheck__GoalId_57));
#line 1103 "post_typecheck.m"
                        }
#line 1104 "post_typecheck.m"
                        {
#line 1104 "post_typecheck.m"
                          check_hlds__post_typecheck__Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1106 "post_typecheck.m"
                        {
#line 1106 "post_typecheck.m"
                          check_hlds__post_typecheck__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_122_122, 0) = ((MR_Box) (check_hlds__post_typecheck__ConstraintSearch_58));
#line 1106 "post_typecheck.m"
                        }
#line 1105 "post_typecheck.m"
                        {
#line 1105 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__PredIds_48, check_hlds__post_typecheck__TVarSet_51, check_hlds__post_typecheck__ExistQTVars_52, check_hlds__post_typecheck__ArgTypes_55, check_hlds__post_typecheck__HeadTypeParams_53, check_hlds__post_typecheck__V_122_122, check_hlds__post_typecheck__Context_59, &check_hlds__post_typecheck__PredId_60, &check_hlds__post_typecheck__QualifiedFuncName_61);
                        }
#line 1069 "post_typecheck.m"
                      }
#line 1069 "post_typecheck.m"
                  }
#line 1076 "post_typecheck.m"
              }
#line 1069 "post_typecheck.m"
          }
#line 1120 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1112 "post_typecheck.m"
          {
#line 1112 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_62;
#line 1112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__FuncCallUnifyContext_63;
#line 1112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__FuncCall_64;
#line 1112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_123_123;
#line 1112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_125_125;
#line 1112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_128_128;
#line 1112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgVars_172;

#line 1112 "post_typecheck.m"
            {
#line 1112 "post_typecheck.m"
              check_hlds__post_typecheck__ProcId_62 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 1113 "post_typecheck.m"
            {
#line 1113 "post_typecheck.m"
              check_hlds__post_typecheck__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_123_123, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1113 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1113 "post_typecheck.m"
            }
#line 1113 "post_typecheck.m"
            {
#line 1113 "post_typecheck.m"
              check_hlds__post_typecheck__ArgVars_172 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__ArgVars0_19, check_hlds__post_typecheck__V_123_123);
            }
#line 1115 "post_typecheck.m"
            {
#line 1115 "post_typecheck.m"
              check_hlds__post_typecheck__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_125_125, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId0_18));
#line 1115 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_125_125, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1115 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_125_125, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1115 "post_typecheck.m"
            }
#line 1114 "post_typecheck.m"
            {
#line 1114 "post_typecheck.m"
              check_hlds__post_typecheck__FuncCallUnifyContext_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1114 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 1) = ((MR_Box) (check_hlds__post_typecheck__V_125_125));
#line 1114 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 2) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1114 "post_typecheck.m"
            }
#line 1117 "post_typecheck.m"
            {
#line 1117 "post_typecheck.m"
              check_hlds__post_typecheck__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_128_128, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncCallUnifyContext_63));
#line 1117 "post_typecheck.m"
            }
#line 1116 "post_typecheck.m"
            {
#line 1116 "post_typecheck.m"
              check_hlds__post_typecheck__FuncCall_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_60));
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 1) = ((MR_Box) (check_hlds__post_typecheck__ProcId_62));
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_172));
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 4) = ((MR_Box) (check_hlds__post_typecheck__V_128_128));
#line 1116 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 5) = ((MR_Box) (check_hlds__post_typecheck__QualifiedFuncName_61));
#line 1116 "post_typecheck.m"
            }
#line 1118 "post_typecheck.m"
            {
#line 1118 "post_typecheck.m"
              MR_Word base;
#line 1118 "post_typecheck.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "post_typecheck.m"
              *check_hlds__post_typecheck__Goal_28 = base;
#line 1118 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncCall_64));
#line 1118 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1118 "post_typecheck.m"
            }
#line 1119 "post_typecheck.m"
            *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1112 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108;
#line 1112 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106;
#line 1112 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104;
#line 1112 "post_typecheck.m"
          }
#line 1120 "post_typecheck.m"
        else
#line 1175 "post_typecheck.m"
          {
#line 1175 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Name_65;
#line 1175 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Context_199;
#line 1175 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PredId_200;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeCtorInfo_207_207;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PredOrFunc_69;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__HOArgTypes_71;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__AllArgTypes_72;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ExistQVars_73;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_129_129;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Markers_173;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TVarSet_174;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__HeadTypeParams_175;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypes0_176;
#line 1122 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__V_66_66;
#line 1122 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_67_67;
#line 1123 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___Purity_68;

#line 1122 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1122 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1122 "post_typecheck.m"
              {
#line 1122 "post_typecheck.m"
                check_hlds__post_typecheck__Name_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1122 "post_typecheck.m"
                check_hlds__post_typecheck__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1122 "post_typecheck.m"
                check_hlds__post_typecheck__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1123 "post_typecheck.m"
                {
#line 1123 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__post_typecheck__TypeOfX_30, &check_hlds__post_typecheck___Purity_68, &check_hlds__post_typecheck__PredOrFunc_69, &check_hlds__post_typecheck__HOArgTypes_71);
                }
#line 1122 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1122 "post_typecheck.m"
                  {
#line 1129 "post_typecheck.m"
                    {
#line 1129 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104);
                    }
#line 1129 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1122 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1122 "post_typecheck.m"
                      {
#line 1132 "post_typecheck.m"
                        {
#line 1132 "post_typecheck.m"
                          parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_176);
                        }
#line 10322 "check_hlds.post_typecheck.c"
                        check_hlds__post_typecheck__TypeCtorInfo_207_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1133 "post_typecheck.m"
                        {
#line 1133 "post_typecheck.m"
                          check_hlds__post_typecheck__AllArgTypes_72 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_207_207, check_hlds__post_typecheck__ArgTypes0_176, check_hlds__post_typecheck__HOArgTypes_71);
                        }
#line 1134 "post_typecheck.m"
                        {
#line 1134 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__TVarSet_174);
                        }
#line 1135 "post_typecheck.m"
                        {
#line 1135 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__ExistQVars_73);
                        }
#line 1136 "post_typecheck.m"
                        {
#line 1136 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__HeadTypeParams_175);
                        }
#line 1137 "post_typecheck.m"
                        {
#line 1137 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__Markers_173);
                        }
#line 1138 "post_typecheck.m"
                        {
#line 1138 "post_typecheck.m"
                          check_hlds__post_typecheck__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1139 "post_typecheck.m"
                        {
#line 1139 "post_typecheck.m"
                          check_hlds__post_typecheck__V_129_129 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__post_typecheck__Markers_173);
                        }
#line 1139 "post_typecheck.m"
                        {
#line 1139 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(check_hlds__post_typecheck__V_129_129, check_hlds__post_typecheck__Name_65, check_hlds__post_typecheck__PredOrFunc_69, check_hlds__post_typecheck__TVarSet_174, check_hlds__post_typecheck__ExistQVars_73, check_hlds__post_typecheck__AllArgTypes_72, check_hlds__post_typecheck__HeadTypeParams_175, check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__Context_199, &check_hlds__post_typecheck__PredId_200);
                        }
#line 1122 "post_typecheck.m"
                      }
#line 1122 "post_typecheck.m"
                  }
#line 1122 "post_typecheck.m"
              }
#line 1175 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1143 "post_typecheck.m"
              {
#line 1143 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__PredInfo_25;
#line 1143 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ProcIds_74;
#line 1143 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__MaybeProcId_76;

#line 1143 "post_typecheck.m"
                {
#line 1143 "post_typecheck.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__PredId_200, &check_hlds__post_typecheck__PredInfo_25);
                }
#line 1144 "post_typecheck.m"
                {
#line 1144 "post_typecheck.m"
                  check_hlds__post_typecheck__ProcIds_74 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__PredInfo_25);
                }
#line 1148 "post_typecheck.m"
                if ((check_hlds__post_typecheck__ProcIds_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1153 "post_typecheck.m"
                  check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1148 "post_typecheck.m"
                else
#line 1148 "post_typecheck.m"
                  {
#line 1148 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ProcIds_74, (MR_Integer) 1)));
#line 1148 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ProcIds_74, (MR_Integer) 0)));

#line 1148 "post_typecheck.m"
                    if ((check_hlds__post_typecheck__V_211_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1147 "post_typecheck.m"
                      {
#line 1147 "post_typecheck.m"
                        check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "post_typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, 0) = ((MR_Box) (check_hlds__post_typecheck__V_212_212));
#line 1147 "post_typecheck.m"
                      }
#line 1148 "post_typecheck.m"
                    else
#line 1149 "post_typecheck.m"
                      {
#line 1149 "post_typecheck.m"
                        MR_Integer check_hlds__post_typecheck__V_131_131;

#line 1151 "post_typecheck.m"
                        {
#line 1151 "post_typecheck.m"
                          check_hlds__post_typecheck__V_131_131 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                        }
#line 1151 "post_typecheck.m"
                        {
#line 1151 "post_typecheck.m"
                          check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, 0) = ((MR_Box) (check_hlds__post_typecheck__V_131_131));
#line 1151 "post_typecheck.m"
                        }
#line 1149 "post_typecheck.m"
                      }
#line 1148 "post_typecheck.m"
                  }
#line 1165 "post_typecheck.m"
                if ((check_hlds__post_typecheck__MaybeProcId_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "post_typecheck.m"
                  {
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Pieces_83;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Msg_84;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Spec_85;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_135_135;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_138_138;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_139_139;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_140_140;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_147_147;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_148_148;
#line 1166 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_152_152;

#line 1167 "post_typecheck.m"
                    {
#line 1167 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = hlds__make_goal__true_goal_0_f_0();
                    }
#line 1170 "post_typecheck.m"
                    {
#line 1170 "post_typecheck.m"
                      check_hlds__post_typecheck__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1170 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_140_140, 0) = ((MR_Box) (check_hlds__post_typecheck__Name_65));
#line 1170 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_140_140, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1170 "post_typecheck.m"
                    }
#line 1170 "post_typecheck.m"
                    {
#line 1170 "post_typecheck.m"
                      check_hlds__post_typecheck__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1170 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_139_139, 1) = ((MR_Box) (check_hlds__post_typecheck__V_140_140));
#line 1170 "post_typecheck.m"
                    }
#line 1170 "post_typecheck.m"
                    {
#line 1170 "post_typecheck.m"
                      check_hlds__post_typecheck__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_138_138, 0) = ((MR_Box) (check_hlds__post_typecheck__V_139_139));
#line 1170 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[7])));
#line 1170 "post_typecheck.m"
                    }
#line 1169 "post_typecheck.m"
                    {
#line 1169 "post_typecheck.m"
                      check_hlds__post_typecheck__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_135_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[55])));
#line 1169 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_135_135, 1) = ((MR_Box) (check_hlds__post_typecheck__V_138_138));
#line 1169 "post_typecheck.m"
                    }
#line 1168 "post_typecheck.m"
                    {
#line 1168 "post_typecheck.m"
                      check_hlds__post_typecheck__Pieces_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[54])));
#line 1168 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_83, 1) = ((MR_Box) (check_hlds__post_typecheck__V_135_135));
#line 1168 "post_typecheck.m"
                    }
#line 1171 "post_typecheck.m"
                    {
#line 1171 "post_typecheck.m"
                      check_hlds__post_typecheck__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_148_148, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_83));
#line 1171 "post_typecheck.m"
                    }
#line 1171 "post_typecheck.m"
                    {
#line 1171 "post_typecheck.m"
                      check_hlds__post_typecheck__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_147_147, 0) = ((MR_Box) (check_hlds__post_typecheck__V_148_148));
#line 1171 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1171 "post_typecheck.m"
                    }
#line 1171 "post_typecheck.m"
                    {
#line 1171 "post_typecheck.m"
                      check_hlds__post_typecheck__Msg_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_84, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_199));
#line 1171 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_84, 1) = ((MR_Box) (check_hlds__post_typecheck__V_147_147));
#line 1171 "post_typecheck.m"
                    }
#line 1172 "post_typecheck.m"
                    {
#line 1172 "post_typecheck.m"
                      check_hlds__post_typecheck__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_152_152, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_84));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1172 "post_typecheck.m"
                    }
#line 1172 "post_typecheck.m"
                    {
#line 1172 "post_typecheck.m"
                      check_hlds__post_typecheck__Spec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1172 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 2) = ((MR_Box) (check_hlds__post_typecheck__V_152_152));
#line 1172 "post_typecheck.m"
                    }
#line 1173 "post_typecheck.m"
                    {
#line 1173 "post_typecheck.m"
                      MR_Word base;
#line 1173 "post_typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "post_typecheck.m"
                      *check_hlds__post_typecheck__IsPlainUnify_29 = base;
#line 1173 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_85));
#line 1173 "post_typecheck.m"
                    }
#line 1166 "post_typecheck.m"
                  }
#line 1165 "post_typecheck.m"
                else
#line 1157 "post_typecheck.m"
                  {
#line 1157 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ShroudedPredProcId_80;
#line 1157 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ConsId_81;
#line 1157 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__GoalExpr_82;
#line 1157 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_154_154;
#line 1157 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_155_155;
#line 1157 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__ProcId_177 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, (MR_Integer) 0)));

#line 1158 "post_typecheck.m"
                    {
#line 1158 "post_typecheck.m"
                      check_hlds__post_typecheck__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_154_154, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_200));
#line 1158 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_154_154, 1) = ((MR_Box) (check_hlds__post_typecheck__ProcId_177));
#line 1158 "post_typecheck.m"
                    }
#line 1158 "post_typecheck.m"
                    {
#line 1158 "post_typecheck.m"
                      check_hlds__post_typecheck__ShroudedPredProcId_80 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(check_hlds__post_typecheck__V_154_154);
                    }
#line 1159 "post_typecheck.m"
                    {
#line 1159 "post_typecheck.m"
                      check_hlds__post_typecheck__ConsId_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1159 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 1) = ((MR_Box) (check_hlds__post_typecheck__ShroudedPredProcId_80));
#line 1159 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 2) = NULL;
#line 1159 "post_typecheck.m"
                    }
#line 1161 "post_typecheck.m"
                    {
#line 1161 "post_typecheck.m"
                      check_hlds__post_typecheck__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_155_155, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_81));
#line 1161 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_155_155, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1161 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_155_155, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1161 "post_typecheck.m"
                    }
#line 1160 "post_typecheck.m"
                    {
#line 1160 "post_typecheck.m"
                      check_hlds__post_typecheck__GoalExpr_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1160 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 1) = ((MR_Box) (check_hlds__post_typecheck__V_155_155));
#line 1160 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 2) = ((MR_Box) (check_hlds__post_typecheck__Mode0_20));
#line 1160 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 3) = ((MR_Box) (check_hlds__post_typecheck__Unification0_21));
#line 1160 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 4) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1160 "post_typecheck.m"
                    }
#line 1163 "post_typecheck.m"
                    {
#line 1163 "post_typecheck.m"
                      MR_Word base;
#line 1163 "post_typecheck.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = base;
#line 1163 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_82));
#line 1163 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1163 "post_typecheck.m"
                    }
#line 1164 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1157 "post_typecheck.m"
                  }
#line 1143 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108;
#line 1143 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106;
#line 1143 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104;
#line 1143 "post_typecheck.m"
              }
#line 1175 "post_typecheck.m"
            else
#line 1202 "post_typecheck.m"
              {
#line 1202 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__AccessType_87;
#line 1202 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__FieldName_88;
#line 1181 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarSet_180;
#line 1181 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ArgTypes0_181;
#line 1181 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Name_182;
#line 1181 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_208_208;
#line 1181 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_209_209;
#line 1181 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_86_86;

#line 1181 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1181 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1181 "post_typecheck.m"
                  {
#line 1181 "post_typecheck.m"
                    check_hlds__post_typecheck__Name_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1181 "post_typecheck.m"
                    check_hlds__post_typecheck__V_208_208 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1181 "post_typecheck.m"
                    check_hlds__post_typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1181 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_208_208);
#line 1181 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1181 "post_typecheck.m"
                      {
#line 1182 "post_typecheck.m"
                        {
#line 1182 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__Name_182, &check_hlds__post_typecheck__V_209_209, &check_hlds__post_typecheck__AccessType_87, &check_hlds__post_typecheck__FieldName_88);
                        }
#line 1181 "post_typecheck.m"
                        if (check_hlds__post_typecheck__succeeded)
#line 1181 "post_typecheck.m"
                          {
#line 1182 "post_typecheck.m"
                            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_209_209);
#line 1181 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1181 "post_typecheck.m"
                              {
#line 1187 "post_typecheck.m"
                                {
#line 1187 "post_typecheck.m"
                                  check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104);
                                }
#line 1187 "post_typecheck.m"
                                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1181 "post_typecheck.m"
                                if (check_hlds__post_typecheck__succeeded)
#line 1181 "post_typecheck.m"
                                  {
#line 1193 "post_typecheck.m"
                                    {
#line 1193 "post_typecheck.m"
                                      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, &check_hlds__post_typecheck__TVarSet_180);
                                    }
#line 1194 "post_typecheck.m"
                                    {
#line 1194 "post_typecheck.m"
                                      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_181);
                                    }
#line 1195 "post_typecheck.m"
                                    {
#line 1195 "post_typecheck.m"
                                      check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__find_matching_constructor_5_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__TVarSet_180, check_hlds__post_typecheck__ConsId0_18, check_hlds__post_typecheck__TypeOfX_30, check_hlds__post_typecheck__ArgTypes0_181);
                                    }
#line 1195 "post_typecheck.m"
                                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1181 "post_typecheck.m"
                                  }
#line 1181 "post_typecheck.m"
                              }
#line 1181 "post_typecheck.m"
                          }
#line 1181 "post_typecheck.m"
                      }
#line 1181 "post_typecheck.m"
                  }
#line 1202 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1200 "post_typecheck.m"
                  {
#line 1198 "post_typecheck.m"
                    {
#line 1198 "post_typecheck.m"
                      check_hlds__post_typecheck__finish_field_access_function_14_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107, check_hlds__post_typecheck__AccessType_87, check_hlds__post_typecheck__FieldName_88, check_hlds__post_typecheck__UnifyContext_22, check_hlds__post_typecheck__X0_17, check_hlds__post_typecheck__ArgVars0_19, check_hlds__post_typecheck__GoalInfo0_23, check_hlds__post_typecheck__Goal_28);
                    }
#line 1201 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1200 "post_typecheck.m"
                  }
#line 1202 "post_typecheck.m"
                else
#line 1204 "post_typecheck.m"
                  {
#line 1204 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__TypeCtorOfX_89;
#line 1204 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_170_170;
#line 1204 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ConsId_188;
#line 1204 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__GoalExpr_189;
#line 1232 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__SymName0_90;
#line 1205 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__V_210_210;
#line 1205 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck___OldTypeCtor_91;

#line 1204 "post_typecheck.m"
                    {
#line 1204 "post_typecheck.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TypeOfX_30, &check_hlds__post_typecheck__TypeCtorOfX_89);
                    }
#line 1205 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1205 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1205 "post_typecheck.m"
                      {
#line 1205 "post_typecheck.m"
                        check_hlds__post_typecheck__SymName0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1205 "post_typecheck.m"
                        check_hlds__post_typecheck__V_210_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1205 "post_typecheck.m"
                        check_hlds__post_typecheck___OldTypeCtor_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1205 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_210_210);
#line 1205 "post_typecheck.m"
                      }
#line 1232 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1208 "post_typecheck.m"
                      {
#line 1206 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_92_92;
#line 1206 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_93_93;

#line 1206 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__TypeOfX_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1206 "post_typecheck.m"
                        if (check_hlds__post_typecheck__succeeded)
#line 1206 "post_typecheck.m"
                          {
#line 1206 "post_typecheck.m"
                            check_hlds__post_typecheck__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 1)));
#line 1206 "post_typecheck.m"
                            check_hlds__post_typecheck__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 2)));
#line 1207 "post_typecheck.m"
                            {
#line 1207 "post_typecheck.m"
                              check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "post_typecheck.m"
                              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1207 "post_typecheck.m"
                              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1207 "post_typecheck.m"
                            }
#line 1206 "post_typecheck.m"
                          }
#line 1206 "post_typecheck.m"
                        else
#line 1220 "post_typecheck.m"
                          {
#line 1208 "post_typecheck.m"
                            MR_Word check_hlds__post_typecheck__V_160_160;

#line 1208 "post_typecheck.m"
                            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__TypeOfX_30)) == (MR_mktag((MR_Integer) 2)));
#line 1208 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1208 "post_typecheck.m"
                              {
#line 1208 "post_typecheck.m"
                                check_hlds__post_typecheck__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 0)));
#line 1208 "post_typecheck.m"
                                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_160_160 == (MR_Integer) 3);
#line 1208 "post_typecheck.m"
                              }
#line 1220 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1216 "post_typecheck.m"
                              if (((MR_tag((MR_Word) check_hlds__post_typecheck__SymName0_90)) == (MR_mktag((MR_Integer) 1))))
#line 1217 "post_typecheck.m"
                                {
#line 1218 "post_typecheck.m"
                                  {
#line 1218 "post_typecheck.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "qualified char const");
#line 1218 "post_typecheck.m"
                                    return;
                                  }
#line 1217 "post_typecheck.m"
                                }
#line 1216 "post_typecheck.m"
                              else
#line 1210 "post_typecheck.m"
                                {
#line 1210 "post_typecheck.m"
                                  MR_String check_hlds__post_typecheck__Name0_94 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__SymName0_90, (MR_Integer) 0)));
#line 1213 "post_typecheck.m"
                                  MR_Char check_hlds__post_typecheck__Char_95;

#line 1211 "post_typecheck.m"
                                  {
#line 1211 "post_typecheck.m"
                                    check_hlds__post_typecheck__succeeded = mercury__term_io__encode_escaped_char_2_p_1(&check_hlds__post_typecheck__Char_95, check_hlds__post_typecheck__Name0_94);
                                  }
#line 1213 "post_typecheck.m"
                                  if (check_hlds__post_typecheck__succeeded)
#line 1212 "post_typecheck.m"
                                    {
#line 1212 "post_typecheck.m"
                                      check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1212 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (MR_Word) (check_hlds__post_typecheck__Char_95));
#line 1212 "post_typecheck.m"
                                    }
#line 1213 "post_typecheck.m"
                                  else
#line 1214 "post_typecheck.m"
                                    {
#line 1214 "post_typecheck.m"
                                      {
#line 1214 "post_typecheck.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "encode_escaped_char");
#line 1214 "post_typecheck.m"
                                        return;
                                      }
#line 1214 "post_typecheck.m"
                                    }
#line 1210 "post_typecheck.m"
                                }
#line 1220 "post_typecheck.m"
                            else
#line 1221 "post_typecheck.m"
                              {
#line 1221 "post_typecheck.m"
                                MR_Word check_hlds__post_typecheck__TypeCtorSymName_98;
#line 1221 "post_typecheck.m"
                                MR_String check_hlds__post_typecheck__Name_183;
#line 1222 "post_typecheck.m"
                                MR_Integer check_hlds__post_typecheck__V_99_99;

#line 1221 "post_typecheck.m"
                                {
#line 1221 "post_typecheck.m"
                                  check_hlds__post_typecheck__Name_183 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__SymName0_90);
                                }
#line 1222 "post_typecheck.m"
                                check_hlds__post_typecheck__TypeCtorSymName_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtorOfX_89, (MR_Integer) 0)));
#line 1222 "post_typecheck.m"
                                check_hlds__post_typecheck__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtorOfX_89, (MR_Integer) 1)));
#line 1227 "post_typecheck.m"
                                if (((MR_tag((MR_Word) check_hlds__post_typecheck__TypeCtorSymName_98)) == (MR_mktag((MR_Integer) 1))))
#line 1224 "post_typecheck.m"
                                  {
#line 1224 "post_typecheck.m"
                                    MR_Word check_hlds__post_typecheck__TypeCtorModule_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TypeCtorSymName_98, (MR_Integer) 0)));
#line 1224 "post_typecheck.m"
                                    MR_Word check_hlds__post_typecheck__SymName_102;
#line 1224 "post_typecheck.m"
                                    MR_String check_hlds__post_typecheck__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TypeCtorSymName_98, (MR_Integer) 1)));

#line 1225 "post_typecheck.m"
                                    {
#line 1225 "post_typecheck.m"
                                      check_hlds__post_typecheck__SymName_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__SymName_102, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeCtorModule_100));
#line 1225 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__SymName_102, 1) = ((MR_Box) (check_hlds__post_typecheck__Name_183));
#line 1225 "post_typecheck.m"
                                    }
#line 1226 "post_typecheck.m"
                                    {
#line 1226 "post_typecheck.m"
                                      check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1226 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_102));
#line 1226 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1226 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtorOfX_89));
#line 1226 "post_typecheck.m"
                                    }
#line 1224 "post_typecheck.m"
                                  }
#line 1227 "post_typecheck.m"
                                else
#line 1228 "post_typecheck.m"
                                  {
#line 1229 "post_typecheck.m"
                                    {
#line 1229 "post_typecheck.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "unqualified type_ctor");
#line 1229 "post_typecheck.m"
                                      return;
                                    }
#line 1228 "post_typecheck.m"
                                  }
#line 1221 "post_typecheck.m"
                              }
#line 1220 "post_typecheck.m"
                          }
#line 1208 "post_typecheck.m"
                      }
#line 1232 "post_typecheck.m"
                    else
#line 1233 "post_typecheck.m"
                      check_hlds__post_typecheck__ConsId_188 = check_hlds__post_typecheck__ConsId0_18;
#line 1236 "post_typecheck.m"
                    {
#line 1236 "post_typecheck.m"
                      check_hlds__post_typecheck__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_170_170, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_188));
#line 1236 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_170_170, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1236 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_170_170, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1236 "post_typecheck.m"
                    }
#line 1235 "post_typecheck.m"
                    {
#line 1235 "post_typecheck.m"
                      check_hlds__post_typecheck__GoalExpr_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1235 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 1) = ((MR_Box) (check_hlds__post_typecheck__V_170_170));
#line 1235 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 2) = ((MR_Box) (check_hlds__post_typecheck__Mode0_20));
#line 1235 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 3) = ((MR_Box) (check_hlds__post_typecheck__Unification0_21));
#line 1235 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 4) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1235 "post_typecheck.m"
                    }
#line 1238 "post_typecheck.m"
                    {
#line 1238 "post_typecheck.m"
                      MR_Word base;
#line 1238 "post_typecheck.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1238 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = base;
#line 1238 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_189));
#line 1238 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1238 "post_typecheck.m"
                    }
#line 1239 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1204 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_109 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_108;
#line 1204 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_107 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_106;
#line 1204 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_105 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_104;
#line 1204 "post_typecheck.m"
                  }
#line 1202 "post_typecheck.m"
              }
#line 1175 "post_typecheck.m"
          }
#line 1120 "post_typecheck.m"
      }
#line 1034 "post_typecheck.m"
  }
#line 118 "post_typecheck.m"
}

#line 106 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__finally_resolve_pred_overloading_8_p_0(
#line 106 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args0_9,
#line 106 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__CallerPredInfo_10,
#line 106 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_11,
#line 106 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 106 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredName_0_22,
#line 106 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredName_23,
#line 106 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24,
#line 106 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredId_25)
#line 106 "post_typecheck.m"
{
#line 571 "post_typecheck.m"
  {
#line 571 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 559 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_29_29;

#line 559 "post_typecheck.m"
    {
#line 559 "post_typecheck.m"
      check_hlds__post_typecheck__V_29_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 559 "post_typecheck.m"
    {
#line 559 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24, check_hlds__post_typecheck__V_29_29);
    }
#line 571 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 562 "post_typecheck.m"
      {
#line 562 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_15;
#line 562 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistQVars_16;
#line 562 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadTypeParams_17;
#line 562 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Markers_18;
#line 562 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_19;
#line 562 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypes_20;
#line 562 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_21;

#line 562 "post_typecheck.m"
        {
#line 562 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__TVarSet_15);
        }
#line 563 "post_typecheck.m"
        {
#line 563 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__ExistQVars_16);
        }
#line 564 "post_typecheck.m"
        {
#line 564 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__HeadTypeParams_17);
        }
#line 565 "post_typecheck.m"
        {
#line 565 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__Markers_18);
        }
#line 566 "post_typecheck.m"
        {
#line 566 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__ClausesInfo_19);
        }
#line 567 "post_typecheck.m"
        {
#line 567 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo_19, &check_hlds__post_typecheck__VarTypes_20);
        }
#line 568 "post_typecheck.m"
        {
#line 568 "post_typecheck.m"
          parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__post_typecheck__VarTypes_20, check_hlds__post_typecheck__Args0_9, &check_hlds__post_typecheck__ArgTypes_21);
        }
#line 569 "post_typecheck.m"
        {
#line 569 "post_typecheck.m"
          hlds__pred_table__resolve_pred_overloading_10_p_0(check_hlds__post_typecheck__ModuleInfo_11, check_hlds__post_typecheck__Markers_18, check_hlds__post_typecheck__TVarSet_15, check_hlds__post_typecheck__ExistQVars_16, check_hlds__post_typecheck__ArgTypes_21, check_hlds__post_typecheck__HeadTypeParams_17, check_hlds__post_typecheck__Context_12, check_hlds__post_typecheck__STATE_VARIABLE_PredName_0_22, check_hlds__post_typecheck__STATE_VARIABLE_PredName_23, check_hlds__post_typecheck__STATE_VARIABLE_PredId_25);
#line 569 "post_typecheck.m"
          return;
        }
#line 562 "post_typecheck.m"
      }
#line 571 "post_typecheck.m"
    else
#line 572 "post_typecheck.m"
      {
#line 572 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo_34;
#line 572 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredModule_35;
#line 572 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__PredName_36;

#line 578 "post_typecheck.m"
        {
#line 578 "post_typecheck.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_11, check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24, &check_hlds__post_typecheck__PredInfo_34);
        }
#line 579 "post_typecheck.m"
        {
#line 579 "post_typecheck.m"
          check_hlds__post_typecheck__PredModule_35 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__post_typecheck__PredInfo_34);
        }
#line 580 "post_typecheck.m"
        {
#line 580 "post_typecheck.m"
          check_hlds__post_typecheck__PredName_36 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PredInfo_34);
        }
#line 581 "post_typecheck.m"
        {
#line 581 "post_typecheck.m"
          MR_Word base;
#line 581 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_PredName_23 = base;
#line 581 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__PredModule_35));
#line 581 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__PredName_36));
#line 581 "post_typecheck.m"
        }
#line 572 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredId_25 = check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24;
#line 572 "post_typecheck.m"
      }
#line 571 "post_typecheck.m"
  }
#line 106 "post_typecheck.m"
}

#line 656 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1(
#line 656 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 656 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 656 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 656 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3)
#line 656 "post_typecheck.m"
{
#line 656 "post_typecheck.m"
  {
#line 656 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 656 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__4_4;

#line 656 "post_typecheck.m"
    {
#line 656 "post_typecheck.m"
      hlds__hlds_data__exclusive_table_add_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv0_HeadVar__4_4);
    }
#line 656 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__4_4));
#line 656 "post_typecheck.m"
  }
#line 656 "post_typecheck.m"
}

#line 100 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0(
#line 100 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PromiseType_7,
#line 100 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PromiseId_8,
#line 100 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13,
#line 100 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14,
#line 100 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 100 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16)
#line 100 "post_typecheck.m"
{
#line 605 "post_typecheck.m"
  {
#line 605 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 605 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goal_11;
#line 605 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredInfo_12;
#line 605 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17;

#line 641 "post_typecheck.m"
    if ((check_hlds__post_typecheck__PromiseType_7 == (MR_Integer) 1))
#line 660 "post_typecheck.m"
      {
#line 660 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo_58;
#line 660 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_59;
#line 660 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesRep_60;
#line 660 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Clauses_62;
#line 671 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck___ItemNumbers_61;
#line 676 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Clause_63;
#line 673 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_65_65;

#line 669 "post_typecheck.m"
        {
#line 669 "post_typecheck.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_58);
        }
#line 670 "post_typecheck.m"
        {
#line 670 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_58, &check_hlds__post_typecheck__ClausesInfo_59);
        }
#line 671 "post_typecheck.m"
        {
#line 671 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_59, &check_hlds__post_typecheck__ClausesRep_60, &check_hlds__post_typecheck___ItemNumbers_61);
        }
#line 672 "post_typecheck.m"
        {
#line 672 "post_typecheck.m"
          hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__post_typecheck__ClausesRep_60, &check_hlds__post_typecheck__Clauses_62);
        }
#line 673 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Clauses_62)) == (MR_mktag((MR_Integer) 1)));
#line 673 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 673 "post_typecheck.m"
          {
#line 673 "post_typecheck.m"
            check_hlds__post_typecheck__Clause_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_62, (MR_Integer) 0)));
#line 673 "post_typecheck.m"
            check_hlds__post_typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_62, (MR_Integer) 1)));
#line 673 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "post_typecheck.m"
          }
#line 676 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 674 "post_typecheck.m"
          {
#line 674 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goal0_64;

#line 674 "post_typecheck.m"
            {
#line 674 "post_typecheck.m"
              check_hlds__post_typecheck__Goal0_64 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__post_typecheck__Clause_63);
            }
#line 675 "post_typecheck.m"
            {
#line 675 "post_typecheck.m"
              hlds__assertion__normalise_goal_2_p_0(check_hlds__post_typecheck__Goal0_64, &check_hlds__post_typecheck__Goal_11);
            }
#line 674 "post_typecheck.m"
          }
#line 676 "post_typecheck.m"
        else
#line 677 "post_typecheck.m"
          {
#line 677 "post_typecheck.m"
            {
#line 677 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.promise_ex_goal\'/3", (MR_String) "not a single clause");
#line 677 "post_typecheck.m"
              return;
            }
#line 677 "post_typecheck.m"
          }
#line 660 "post_typecheck.m"
        check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17 = check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13;
#line 660 "post_typecheck.m"
      }
#line 641 "post_typecheck.m"
    else
#line 641 "post_typecheck.m"
    if ((check_hlds__post_typecheck__PromiseType_7 == (MR_Integer) 3))
#line 641 "post_typecheck.m"
      {
#line 641 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__AssertTable0_26;
#line 641 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__AssertionId_27;
#line 641 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__AssertTable_28;
#line 641 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34;

#line 642 "post_typecheck.m"
        {
#line 642 "post_typecheck.m"
          hlds__hlds_module__module_info_get_assertion_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__AssertTable0_26);
        }
#line 643 "post_typecheck.m"
        {
#line 643 "post_typecheck.m"
          hlds__hlds_data__assertion_table_add_assertion_4_p_0(check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__AssertionId_27, check_hlds__post_typecheck__AssertTable0_26, &check_hlds__post_typecheck__AssertTable_28);
        }
#line 645 "post_typecheck.m"
        {
#line 645 "post_typecheck.m"
          hlds__hlds_module__module_info_set_assertion_table_3_p_0(check_hlds__post_typecheck__AssertTable_28, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34);
        }
#line 646 "post_typecheck.m"
        {
#line 646 "post_typecheck.m"
          hlds__assertion__assert_id_goal_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34, check_hlds__post_typecheck__AssertionId_27, &check_hlds__post_typecheck__Goal_11);
        }
#line 647 "post_typecheck.m"
        {
#line 647 "post_typecheck.m"
          hlds__assertion__record_preds_used_in_4_p_0(check_hlds__post_typecheck__Goal_11, check_hlds__post_typecheck__AssertionId_27, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17);
        }
#line 641 "post_typecheck.m"
      }
#line 641 "post_typecheck.m"
    else
#line 652 "post_typecheck.m"
      {
#line 652 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIds_29;
#line 652 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Table0_30;
#line 652 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Table_31;
#line 652 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_32_32;
#line 652 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo_44;
#line 652 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_45;
#line 652 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesRep_46;
#line 652 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Clauses_48;
#line 671 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck___ItemNumbers_47;
#line 676 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Clause_49;
#line 673 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_51_51;
#line 656 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv1_Table_31;

#line 669 "post_typecheck.m"
        {
#line 669 "post_typecheck.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_44);
        }
#line 670 "post_typecheck.m"
        {
#line 670 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_44, &check_hlds__post_typecheck__ClausesInfo_45);
        }
#line 671 "post_typecheck.m"
        {
#line 671 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_45, &check_hlds__post_typecheck__ClausesRep_46, &check_hlds__post_typecheck___ItemNumbers_47);
        }
#line 672 "post_typecheck.m"
        {
#line 672 "post_typecheck.m"
          hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__post_typecheck__ClausesRep_46, &check_hlds__post_typecheck__Clauses_48);
        }
#line 673 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Clauses_48)) == (MR_mktag((MR_Integer) 1)));
#line 673 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 673 "post_typecheck.m"
          {
#line 673 "post_typecheck.m"
            check_hlds__post_typecheck__Clause_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_48, (MR_Integer) 0)));
#line 673 "post_typecheck.m"
            check_hlds__post_typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_48, (MR_Integer) 1)));
#line 673 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "post_typecheck.m"
          }
#line 676 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 674 "post_typecheck.m"
          {
#line 674 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goal0_50;

#line 674 "post_typecheck.m"
            {
#line 674 "post_typecheck.m"
              check_hlds__post_typecheck__Goal0_50 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__post_typecheck__Clause_49);
            }
#line 675 "post_typecheck.m"
            {
#line 675 "post_typecheck.m"
              hlds__assertion__normalise_goal_2_p_0(check_hlds__post_typecheck__Goal0_50, &check_hlds__post_typecheck__Goal_11);
            }
#line 674 "post_typecheck.m"
          }
#line 676 "post_typecheck.m"
        else
#line 677 "post_typecheck.m"
          {
#line 677 "post_typecheck.m"
            {
#line 677 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.promise_ex_goal\'/3", (MR_String) "not a single clause");
#line 677 "post_typecheck.m"
              return;
            }
#line 677 "post_typecheck.m"
          }
#line 654 "post_typecheck.m"
        {
#line 654 "post_typecheck.m"
          hlds__goal_util__predids_from_goal_2_p_0(check_hlds__post_typecheck__Goal_11, &check_hlds__post_typecheck__PredIds_29);
        }
#line 655 "post_typecheck.m"
        {
#line 655 "post_typecheck.m"
          hlds__hlds_module__module_info_get_exclusive_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__Table0_30);
        }
#line 656 "post_typecheck.m"
        {
#line 656 "post_typecheck.m"
          check_hlds__post_typecheck__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 656 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[1]));
#line 656 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1));
#line 656 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 656 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 3) = ((MR_Box) (check_hlds__post_typecheck__PromiseId_8));
#line 656 "post_typecheck.m"
        }
#line 656 "post_typecheck.m"
        {
#line 656 "post_typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_exclusive_table_0, check_hlds__post_typecheck__V_32_32, check_hlds__post_typecheck__PredIds_29, ((MR_Box) (check_hlds__post_typecheck__Table0_30)), &check_hlds__post_typecheck__conv1_Table_31);
        }
#line 656 "post_typecheck.m"
        check_hlds__post_typecheck__Table_31 = ((MR_Word) check_hlds__post_typecheck__conv1_Table_31);
#line 657 "post_typecheck.m"
        {
#line 657 "post_typecheck.m"
          hlds__hlds_module__module_info_set_exclusive_table_3_p_0(check_hlds__post_typecheck__Table_31, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17);
        }
#line 652 "post_typecheck.m"
      }
#line 621 "post_typecheck.m"
    {
#line 621 "post_typecheck.m"
      hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__post_typecheck__PromiseId_8, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14);
    }
#line 625 "post_typecheck.m"
    {
#line 625 "post_typecheck.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_12);
    }
#line 626 "post_typecheck.m"
    {
#line 626 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__post_typecheck__PredInfo_12);
    }
#line 628 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 627 "post_typecheck.m"
      {
#line 627 "post_typecheck.m"
        check_hlds__post_typecheck__in_interface_check_5_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14, check_hlds__post_typecheck__PredInfo_12, check_hlds__post_typecheck__Goal_11, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15, check_hlds__post_typecheck__STATE_VARIABLE_Specs_16);
#line 627 "post_typecheck.m"
        return;
      }
#line 628 "post_typecheck.m"
    else
#line 628 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_16 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15;
#line 605 "post_typecheck.m"
  }
#line 100 "post_typecheck.m"
}

#line 94 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(
#line 94 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_5,
#line 94 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ErrorProcIds_6,
#line 94 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13,
#line 94 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_14)
#line 94 "post_typecheck.m"
{
#line 589 "post_typecheck.m"
  {
#line 589 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 589 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15;
#line 589 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_22;
#line 589 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs0_23;
#line 589 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcIds_24;
#line 589 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RevErrorProcIds_25;
#line 589 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs_26;

#line 593 "post_typecheck.m"
    {
#line 593 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13);
    }
#line 595 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 595 "post_typecheck.m"
      check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13;
#line 595 "post_typecheck.m"
    else
#line 596 "post_typecheck.m"
      {
#line 596 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo0_8;
#line 596 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadVars_9;
#line 596 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_10;
#line 596 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypes_11;
#line 596 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_12;

#line 596 "post_typecheck.m"
        {
#line 596 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__ClausesInfo0_8);
        }
#line 597 "post_typecheck.m"
        {
#line 597 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__post_typecheck__ClausesInfo0_8, &check_hlds__post_typecheck__HeadVars_9);
        }
#line 598 "post_typecheck.m"
        {
#line 598 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__ArgTypes_10);
        }
#line 599 "post_typecheck.m"
        {
#line 599 "post_typecheck.m"
          parse_tree__prog_data__vartypes_from_corresponding_lists_3_p_0(check_hlds__post_typecheck__HeadVars_9, check_hlds__post_typecheck__ArgTypes_10, &check_hlds__post_typecheck__VarTypes_11);
        }
#line 600 "post_typecheck.m"
        {
#line 600 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__post_typecheck__VarTypes_11, check_hlds__post_typecheck__ClausesInfo0_8, &check_hlds__post_typecheck__ClausesInfo_12);
        }
#line 601 "post_typecheck.m"
        {
#line 601 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__post_typecheck__ClausesInfo_12, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15);
        }
#line 596 "post_typecheck.m"
      }
#line 871 "post_typecheck.m"
    {
#line 871 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, &check_hlds__post_typecheck__ArgTypes_22);
    }
#line 872 "post_typecheck.m"
    {
#line 872 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, &check_hlds__post_typecheck__Procs0_23);
    }
#line 873 "post_typecheck.m"
    {
#line 873 "post_typecheck.m"
      check_hlds__post_typecheck__ProcIds_24 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15);
    }
#line 874 "post_typecheck.m"
    {
#line 874 "post_typecheck.m"
      check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(check_hlds__post_typecheck__ModuleInfo_5, check_hlds__post_typecheck__ProcIds_24, check_hlds__post_typecheck__ArgTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__RevErrorProcIds_25, check_hlds__post_typecheck__Procs0_23, &check_hlds__post_typecheck__Procs_26);
    }
#line 876 "post_typecheck.m"
    {
#line 876 "post_typecheck.m"
      *check_hlds__post_typecheck__ErrorProcIds_6 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__post_typecheck__RevErrorProcIds_25);
    }
#line 877 "post_typecheck.m"
    {
#line 877 "post_typecheck.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__Procs_26, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_14);
#line 877 "post_typecheck.m"
      return;
    }
#line 589 "post_typecheck.m"
  }
#line 94 "post_typecheck.m"
}

#line 91 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(
#line 91 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_5,
#line 91 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ErrorProcs_6,
#line 91 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8,
#line 91 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_9)
#line 91 "post_typecheck.m"
{
#line 870 "post_typecheck.m"
  {
#line 870 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 870 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_16;
#line 870 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs0_17;
#line 870 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcIds_18;
#line 870 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RevErrorProcIds_19;
#line 870 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs_20;

#line 871 "post_typecheck.m"
    {
#line 871 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, &check_hlds__post_typecheck__ArgTypes_16);
    }
#line 872 "post_typecheck.m"
    {
#line 872 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, &check_hlds__post_typecheck__Procs0_17);
    }
#line 873 "post_typecheck.m"
    {
#line 873 "post_typecheck.m"
      check_hlds__post_typecheck__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8);
    }
#line 874 "post_typecheck.m"
    {
#line 874 "post_typecheck.m"
      check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(check_hlds__post_typecheck__ModuleInfo_5, check_hlds__post_typecheck__ProcIds_18, check_hlds__post_typecheck__ArgTypes_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__RevErrorProcIds_19, check_hlds__post_typecheck__Procs0_17, &check_hlds__post_typecheck__Procs_20);
    }
#line 876 "post_typecheck.m"
    {
#line 876 "post_typecheck.m"
      *check_hlds__post_typecheck__ErrorProcs_6 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__post_typecheck__RevErrorProcIds_19);
    }
#line 877 "post_typecheck.m"
    {
#line 877 "post_typecheck.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__Procs_20, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_9);
#line 877 "post_typecheck.m"
      return;
    }
#line 870 "post_typecheck.m"
  }
#line 91 "post_typecheck.m"
}

#line 84 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(
#line 84 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18,
#line 84 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_19,
#line 84 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_7,
#line 84 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__AlwaysSpecs_8,
#line 84 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__NoTypeErrorSpecs_9)
#line 84 "post_typecheck.m"
{
#line 172 "post_typecheck.m"
  {
#line 172 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_21_21;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_22_22;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_23_23;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ValidPredIds_10;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ValidPredIdSet_11;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredMap0_12;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdsInfos0_13;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdsInfos_14;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__AlwaysSpecsList_15;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NoTypeErrorSpecsList_16;
#line 172 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredMap_17;

#line 173 "post_typecheck.m"
    {
#line 173 "post_typecheck.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__post_typecheck__ValidPredIds_10);
    }
#line 11816 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 174 "post_typecheck.m"
    {
#line 174 "post_typecheck.m"
      check_hlds__post_typecheck__ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__ValidPredIds_10);
    }
#line 175 "post_typecheck.m"
    {
#line 175 "post_typecheck.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__post_typecheck__PredMap0_12);
    }
#line 11828 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 176 "post_typecheck.m"
    {
#line 176 "post_typecheck.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__TypeCtorInfo_22_22, check_hlds__post_typecheck__PredMap0_12, &check_hlds__post_typecheck__PredIdsInfos0_13);
    }
#line 177 "post_typecheck.m"
    {
#line 177 "post_typecheck.m"
      check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, check_hlds__post_typecheck__ValidPredIdSet_11, check_hlds__post_typecheck__PredIdsInfos0_13, &check_hlds__post_typecheck__PredIdsInfos_14, check_hlds__post_typecheck__NumBadErrors_7, &check_hlds__post_typecheck__AlwaysSpecsList_15, &check_hlds__post_typecheck__NoTypeErrorSpecsList_16);
    }
#line 11840 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 180 "post_typecheck.m"
    {
#line 180 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_23_23, check_hlds__post_typecheck__AlwaysSpecsList_15, check_hlds__post_typecheck__AlwaysSpecs_8);
    }
#line 181 "post_typecheck.m"
    {
#line 181 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_23_23, check_hlds__post_typecheck__NoTypeErrorSpecsList_16, check_hlds__post_typecheck__NoTypeErrorSpecs_9);
    }
#line 182 "post_typecheck.m"
    {
#line 182 "post_typecheck.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__TypeCtorInfo_22_22, check_hlds__post_typecheck__PredIdsInfos_14, &check_hlds__post_typecheck__PredMap_17);
    }
#line 183 "post_typecheck.m"
    {
#line 183 "post_typecheck.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__post_typecheck__PredMap_17, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_19);
#line 183 "post_typecheck.m"
      return;
    }
#line 172 "post_typecheck.m"
  }
#line 84 "post_typecheck.m"
}

#line 1619 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0_1(
#line 1619 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1619 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1619 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 1619 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3,
#line 1619 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_4)
#line 1619 "post_typecheck.m"
{
#line 1619 "post_typecheck.m"
  {
#line 1619 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1619 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20;

#line 1619 "post_typecheck.m"
    {
#line 1619 "post_typecheck.m"
      check_hlds__post_typecheck__check_for_missing_type_defns_2_4_p_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_3), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20);
    }
#line 1619 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_4 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20));
#line 1619 "post_typecheck.m"
  }
#line 1619 "post_typecheck.m"
}

#line 59 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0(
#line 59 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_3,
#line 59 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Specs_4)
#line 59 "post_typecheck.m"
{
#line 1617 "post_typecheck.m"
  {
#line 1617 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1617 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_5;
#line 1619 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_Specs_4;

#line 1618 "post_typecheck.m"
    {
#line 1618 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_3, &check_hlds__post_typecheck__TypeTable_5);
    }
#line 1619 "post_typecheck.m"
    {
#line 1619 "post_typecheck.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], (MR_Word) &check_hlds__post_typecheck_scalar_common_2[3], check_hlds__post_typecheck__TypeTable_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__post_typecheck__conv1_Specs_4);
    }
#line 1619 "post_typecheck.m"
    *check_hlds__post_typecheck__Specs_4 = ((MR_Word) check_hlds__post_typecheck__conv1_Specs_4);
#line 1617 "post_typecheck.m"
  }
#line 59 "post_typecheck.m"
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
