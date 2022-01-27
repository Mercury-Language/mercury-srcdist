/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "libs.op_mode.mih"
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



#line 430 "post_typecheck.m"
struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s {
#line 430 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__Clauses_10;
#line 430 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__LambdaHeadVar__1_25;
#line 430 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__cont;
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__cont_env_ptr;
#line 430 "post_typecheck.m"
  MR_bool check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__succeeded;
#line 430 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__ConstraintId_17;
#line 430 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__ConstraintGoalId_19;
#line 431 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__conv0_ConstraintId_17;
#line 434 "post_typecheck.m"
  jmp_buf check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__commit_0;
#line 434 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__Clause_21;
#line 434 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__GoalInfo_23;
#line 434 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__GoalId_24;
#line 434 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_26_26;
#line 434 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_35_35;
#line 434 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_36_36;
#line 434 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__conv1_Clause_21;
#line 430 "post_typecheck.m"
};

#line 894 "post_typecheck.m"
struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s {
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1;
#line 898 "post_typecheck.m"
  MR_bool check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded;
#line 900 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24;
#line 909 "post_typecheck.m"
  jmp_buf check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0;
#line 894 "post_typecheck.m"
};

#line 430 "post_typecheck.m"
struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s {
#line 430 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1;
#line 430 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont;
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr;
#line 430 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_LambdaHeadVar__1_25;
#line 430 "post_typecheck.m"
};


#line 221 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 224 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 227 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 230 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 233 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 236 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 239 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 242 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 245 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 248 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 251 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 254 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

#line 257 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0;

#line 260 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 263 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 266 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 269 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0;

#line 272 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1;

#line 275 "check_hlds.post_typecheck.c"
static const MR_PseudoTypeInfo check_hlds__post_typecheck__check_hlds__post_typecheck__field_types_is_plain_unify_0_2[1];

#line 278 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDesc check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2;

#line 281 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_0[2];

#line 284 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_1[1];

#line 287 "check_hlds.post_typecheck.c"
static const MR_DuPtagLayout check_hlds__post_typecheck__check_hlds__post_typecheck__du_ptag_ordered_is_plain_unify_0[2];

#line 290 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_name_ordered_is_plain_unify_0[3];

#line 293 "check_hlds.post_typecheck.c"
static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_is_plain_unify_0[3];

#line 296 "check_hlds.post_typecheck.c"
static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0_10001(
#line 299 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 301 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2);

#line 304 "check_hlds.post_typecheck.c"
static void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0_10001(
#line 307 "check_hlds.post_typecheck.c"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 309 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 311 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3);

#line 1440 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1440__1_1_f_0(
#line 1440 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__1_51);

#line 1277 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1277__1_1_f_0(
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__1_31);

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_2(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_3(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_5(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_6(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_4(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_7(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 430 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_1(
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 430 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0(
#line 430 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Clauses_10,
#line 430 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConstraintIds_14,
#line 430 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__LambdaHeadVar__1_25,
#line 430 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr);

#line 357 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__357__1_3_p_0(
#line 357 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__1_23,
#line 357 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__2_24,
#line 357 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__LambdaHeadVar__3_25);

#line 1640 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_in_type_4_p_0(
#line 1640 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_5,
#line 1640 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeDefn_6,
#line 1640 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 1640 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20);

#line 1626 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_var_6_p_0(
#line 1626 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_7,
#line 1626 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Var_8,
#line 1626 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11,
#line 1626 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12,
#line 1626 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13,
#line 1626 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14);

#line 1618 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_vars_6_p_0(
#line 1618 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Types_7,
#line 1618 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Vars_8,
#line 1618 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12,
#line 1618 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13,
#line 1618 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14,
#line 1618 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15);

#line 1594 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_8,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_9,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_10,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RestrictNonLocals_11,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarsList_12,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_13,
#line 1594 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_14);

#line 1577 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__search_for_named_field_4_p_0(
#line 1577 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1577 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_7,
#line 1577 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__CurFieldNumber_8,
#line 1577 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NamedFieldNumber_9);

#line 1559 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_loop_5_p_0(
#line 1559 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_1,
#line 1559 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1559 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_3,
#line 1559 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_4,
#line 1559 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_5);

#line 1536 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(
#line 1536 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1536 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_7,
#line 1536 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldSymName_8,
#line 1536 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_9,
#line 1536 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_10);

#line 1516 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__split_list_at_index_5_p_0(
#line 1516 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeInfo_for_T_20,
#line 1516 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__Index_6,
#line 1516 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__List_7,
#line 1516 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Before_8,
#line 1516 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__At_9,
#line 1516 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__After_10);

#line 1505 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__unify_constraint_list_5_p_0(
#line 1505 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1505 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1505 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVars_3,
#line 1505 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4,
#line 1505 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Subst_5);

#line 1440 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
#line 1440 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1440 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 1429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_9,
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalId_10,
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_11,
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_12,
#line 1429 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualArgTypes_13,
#line 1429 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualExistQVars_14,
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48,
#line 1429 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49);

#line 1362 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_set_function_14_p_0(
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55,
#line 1362 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57,
#line 1362 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59,
#line 1362 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_19,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_20,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_21,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_22,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermOutputVar_23,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_24,
#line 1362 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_25);

#line 1313 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_get_function_13_p_0(
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_14,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45,
#line 1313 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47,
#line 1313 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49,
#line 1313 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_18,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_19,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_20,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_21,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_22,
#line 1313 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__GoalExpr_23);

#line 1291 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__finish_field_access_function_14_p_0(
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29,
#line 1291 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31,
#line 1291 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33,
#line 1291 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__AccessType_19,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_20,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_21,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_22,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args_23,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo_24,
#line 1291 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__14_14);

#line 1277 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0_1(
#line 1277 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1277 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 1261 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0(
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_7,
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_8,
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_9,
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_10);

#line 997 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 997 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId1_3,
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__4_4,
#line 997 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__5_5,
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6,
#line 997 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7,
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8,
#line 997 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_9);

#line 977 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PrevProcIds_4,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5,
#line 977 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7,
#line 977 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_8);

#line 934 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
#line 934 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 934 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 934 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId_10,
#line 934 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Procs0_11,
#line 934 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Procs_12,
#line 934 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20,
#line 934 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_21);

#line 929 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 929 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 929 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5);

#line 918 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ErrorProcIds_10,
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17,
#line 918 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18,
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 918 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20);

#line 909 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
#line 909 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 909 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
#line 909 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 894 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_3,
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4,
#line 894 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5,
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6,
#line 894 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Procs_7);

#line 845 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
#line 845 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 845 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13,
#line 845 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_14);

#line 824 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(
#line 824 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 824 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_7,
#line 824 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IdPieces_8,
#line 824 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 824 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16);

#line 813 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_in_interface_promise_goals_5_p_0(
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4,
#line 813 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_5);

#line 780 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_in_interface_promise_unify_rhs_7_p_0(
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_10,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_11,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36,
#line 780 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);

#line 691 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(
#line 691 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 691 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_7,
#line 691 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_8,
#line 691 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65,
#line 691 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_66);

#line 550 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
#line 550 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_5,
#line 550 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_6,
#line 550 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3);

#line 521 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
#line 521 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 521 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 509 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_10,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_11,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Errs_12,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24,
#line 509 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_25);

#line 467 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
#line 467 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_4,
#line 467 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_5);

#line 443 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
#line 443 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 443 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2);

#line 430 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg);

#line 430 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
#line 430 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 430 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 430 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr);

#line 416 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
#line 416 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 416 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_5);

#line 405 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
#line 405 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarset_4,
#line 405 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraint_5);

#line 388 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
#line 388 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 388 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

#line 371 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_10,
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22,
#line 371 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_23);

#line 321 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_inner_8_p_0(
#line 321 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 321 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_2,
#line 321 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__VarsToDo_3,
#line 321 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 321 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5,
#line 321 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6,
#line 321 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7,
#line 321 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_8);

#line 304 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_6_p_0(
#line 304 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarTypes_7,
#line 304 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_8,
#line 304 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14,
#line 304 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15,
#line 304 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_16,
#line 304 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_17);

#line 357 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0_1(
#line 357 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 357 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 357 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 357 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3);

#line 256 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(
#line 256 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 256 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 256 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 256 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33,
#line 256 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_10,
#line 256 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34);

#line 929 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1(
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 929 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 929 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5);

#line 214 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(
#line 214 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 214 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 214 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15,
#line 214 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16,
#line 214 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_11,
#line 214 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17,
#line 214 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18);

#line 188 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(
#line 188 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 188 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ValidPredIdSet_2,
#line 188 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 188 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 188 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__HeadVar__5_5,
#line 188 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__6_6,
#line 188 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__7_7);

#line 1118 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1(
#line 1118 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1118 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1118 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_2);

#line 661 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1(
#line 661 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 661 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 661 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 661 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3);

#line 1637 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0_1(
#line 1637 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1637 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1637 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 1637 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3,
#line 1637 "post_typecheck.m"
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


#line 1059 "post_typecheck.m"
/* sealed */ struct check_hlds__post_typecheck__vector_common_type_5_0_s {
#line 1059 "post_typecheck.m"
  const MR_String check_hlds__post_typecheck__vector_common_type_5_0__vct_5_f_0;
#line 1059 "post_typecheck.m"
  const MR_Word check_hlds__post_typecheck__vector_common_type_5_0__vct_5_f_1;
#line 1059 "post_typecheck.m"
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



#line 1794 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1802 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1810 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1819 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1828 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1836 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1845 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1853 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1861 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1870 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1878 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1886 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

#line 1894 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0
  }
};

#line 1902 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1910 "check_hlds.post_typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1918 "check_hlds.post_typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1927 "check_hlds.post_typecheck.c"
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

#line 1942 "check_hlds.post_typecheck.c"
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

#line 1957 "check_hlds.post_typecheck.c"
static const MR_PseudoTypeInfo check_hlds__post_typecheck__check_hlds__post_typecheck__field_types_is_plain_unify_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 1962 "check_hlds.post_typecheck.c"
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

#line 1977 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_0[2] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1
};

#line 1983 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_stag_ordered_is_plain_unify_0_1[1] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2
};

#line 1988 "check_hlds.post_typecheck.c"
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

#line 2002 "check_hlds.post_typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__post_typecheck__check_hlds__post_typecheck__du_name_ordered_is_plain_unify_0[3] = {
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_0,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_1,
  &check_hlds__post_typecheck__check_hlds__post_typecheck__du_functor_desc_is_plain_unify_0_2
};

#line 2009 "check_hlds.post_typecheck.c"
static const MR_Integer check_hlds__post_typecheck__check_hlds__post_typecheck__functor_number_map_is_plain_unify_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2016 "check_hlds.post_typecheck.c"
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

#line 2033 "check_hlds.post_typecheck.c"
static MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0_10001(
#line 2036 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 2038 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2)
#line 2040 "check_hlds.post_typecheck.c"
{
#line 2042 "check_hlds.post_typecheck.c"
  {
#line 2044 "check_hlds.post_typecheck.c"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 2047 "check_hlds.post_typecheck.c"
    {
#line 2049 "check_hlds.post_typecheck.c"
      check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck____Unify____is_plain_unify_0_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2));
    }
#line 2052 "check_hlds.post_typecheck.c"
    return check_hlds__post_typecheck__succeeded;
#line 2054 "check_hlds.post_typecheck.c"
  }
#line 2056 "check_hlds.post_typecheck.c"
}

#line 2059 "check_hlds.post_typecheck.c"
static void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0_10001(
#line 2062 "check_hlds.post_typecheck.c"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 2064 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 2066 "check_hlds.post_typecheck.c"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3)
#line 2068 "check_hlds.post_typecheck.c"
{
#line 2070 "check_hlds.post_typecheck.c"
  {
#line 2072 "check_hlds.post_typecheck.c"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__1_1;

#line 2075 "check_hlds.post_typecheck.c"
    {
#line 2077 "check_hlds.post_typecheck.c"
      check_hlds__post_typecheck____Compare____is_plain_unify_0_0(&check_hlds__post_typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_3));
    }
#line 2080 "check_hlds.post_typecheck.c"
    *check_hlds__post_typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__1_1));
#line 2082 "check_hlds.post_typecheck.c"
  }
#line 2084 "check_hlds.post_typecheck.c"
}

#line 1440 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1440__1_1_f_0(
#line 1440 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__1_51)
#line 1440 "post_typecheck.m"
{
#line 1440 "post_typecheck.m"
  {
#line 1440 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1440 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__LambdaHeadVar__2_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__LambdaHeadVar__1_51, (MR_Integer) 1)));
#line 1440 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__LambdaHeadVar__1_51, (MR_Integer) 0)));
#line 1440 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__LambdaHeadVar__1_51, (MR_Integer) 2)));
#line 1440 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__LambdaHeadVar__1_51, (MR_Integer) 3)));

#line 1440 "post_typecheck.m"
    return check_hlds__post_typecheck__LambdaHeadVar__2_52;
#line 1440 "post_typecheck.m"
  }
#line 1440 "post_typecheck.m"
}

#line 1277 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1277__1_1_f_0(
#line 1277 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__1_31)
#line 1277 "post_typecheck.m"
{
#line 1277 "post_typecheck.m"
  {
#line 1277 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1277 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__LambdaHeadVar__2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__LambdaHeadVar__1_31, (MR_Integer) 1)));
#line 1277 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__LambdaHeadVar__1_31, (MR_Integer) 0)));
#line 1277 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__LambdaHeadVar__1_31, (MR_Integer) 2)));
#line 1277 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__LambdaHeadVar__1_31, (MR_Integer) 3)));

#line 1277 "post_typecheck.m"
    return check_hlds__post_typecheck__LambdaHeadVar__2_32;
#line 1277 "post_typecheck.m"
  }
#line 1277 "post_typecheck.m"
}

#line 431 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_2(
#line 431 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 431 "post_typecheck.m"
{
#line 431 "post_typecheck.m"
  {
#line 431 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 431 "post_typecheck.m"
    (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__ConstraintId_17 = ((MR_Word) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__conv0_ConstraintId_17);
#line 431 "post_typecheck.m"
    {
#line 431 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_1(check_hlds__post_typecheck__env_ptr);
#line 431 "post_typecheck.m"
      return;
    }
#line 431 "post_typecheck.m"
  }
#line 431 "post_typecheck.m"
}

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_3(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 434 "post_typecheck.m"
{
#line 434 "post_typecheck.m"
  {
#line 434 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 434 "post_typecheck.m"
    MR_builtin_longjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__commit_0, 1);
#line 434 "post_typecheck.m"
  }
#line 434 "post_typecheck.m"
}

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_5(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 434 "post_typecheck.m"
{
#line 434 "post_typecheck.m"
  {
#line 434 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 434 "post_typecheck.m"
    (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__Clause_21 = ((MR_Word) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__conv1_Clause_21);
#line 434 "post_typecheck.m"
    {
#line 434 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_4(check_hlds__post_typecheck__env_ptr);
#line 434 "post_typecheck.m"
      return;
    }
#line 434 "post_typecheck.m"
  }
#line 434 "post_typecheck.m"
}

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_6(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 434 "post_typecheck.m"
{
#line 434 "post_typecheck.m"
  {
#line 434 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 434 "post_typecheck.m"
    {
#line 436 "post_typecheck.m"
      MR_Word check_hlds__post_typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__LambdaHeadVar__1_25), (MR_Integer) 0)));

#line 436 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__LambdaHeadVar__1_25), (MR_Integer) 1)));
#line 437 "post_typecheck.m"
      {
#line 437 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__GoalInfo_23);
      }
#line 438 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_35_35 = (MR_Integer) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__GoalId_24;
#line 438 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_36_36 = (MR_Integer) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__ConstraintGoalId_19;
#line 438 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__succeeded = ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_35_35 == (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_36_36);
#line 438 "post_typecheck.m"
      if ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__succeeded)
#line 438 "post_typecheck.m"
        {
#line 438 "post_typecheck.m"
          check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_3(check_hlds__post_typecheck__env_ptr);
#line 438 "post_typecheck.m"
          return;
        }
#line 434 "post_typecheck.m"
    }
#line 434 "post_typecheck.m"
  }
#line 434 "post_typecheck.m"
}

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_4(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 434 "post_typecheck.m"
{
#line 434 "post_typecheck.m"
  {
#line 434 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 435 "post_typecheck.m"
    {
#line 435 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_26_26 = hlds__hlds_clauses__clause_body_1_f_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__Clause_21);
    }
#line 435 "post_typecheck.m"
    {
#line 435 "post_typecheck.m"
      hlds__goal_util__goal_contains_goal_2_p_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__V_26_26, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__LambdaHeadVar__1_25, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_6, check_hlds__post_typecheck__env_ptr);
    }
#line 434 "post_typecheck.m"
  }
#line 434 "post_typecheck.m"
}

#line 434 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_7(
#line 434 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 434 "post_typecheck.m"
{
#line 434 "post_typecheck.m"
  {
#line 434 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 434 "post_typecheck.m"
    if (MR_builtin_setjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__commit_0) == 0)
#line 434 "post_typecheck.m"
      {
#line 434 "post_typecheck.m"
        {
#line 434 "post_typecheck.m"
          {
#line 434 "post_typecheck.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__conv1_Clause_21, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__Clauses_10, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_5, check_hlds__post_typecheck__env_ptr);
          }
#line 434 "post_typecheck.m"
        }
#line 434 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__succeeded = MR_FALSE;
#line 434 "post_typecheck.m"
      }
#line 434 "post_typecheck.m"
    else
#line 434 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__succeeded = MR_TRUE;
#line 434 "post_typecheck.m"
  }
#line 434 "post_typecheck.m"
}

#line 430 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_1(
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 430 "post_typecheck.m"
{
#line 430 "post_typecheck.m"
  {
#line 430 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 430 "post_typecheck.m"
    {
#line 432 "post_typecheck.m"
      MR_Word check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0)));
#line 432 "post_typecheck.m"
      MR_Integer check_hlds__post_typecheck__V_20_20;

#line 432 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__ConstraintGoalId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 1)));
#line 432 "post_typecheck.m"
      check_hlds__post_typecheck__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 2)));
#line 434 "post_typecheck.m"
      {
#line 434 "post_typecheck.m"
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_7(check_hlds__post_typecheck__env_ptr);
      }
#line 433 "post_typecheck.m"
      if ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__succeeded)
#line 433 "post_typecheck.m"
        {
#line 433 "post_typecheck.m"
          ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__cont)((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__cont_env_ptr);
#line 433 "post_typecheck.m"
          return;
        }
#line 430 "post_typecheck.m"
    }
#line 430 "post_typecheck.m"
  }
#line 430 "post_typecheck.m"
}

#line 430 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0(
#line 430 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Clauses_10,
#line 430 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConstraintIds_14,
#line 430 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__LambdaHeadVar__1_25,
#line 430 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr)
#line 430 "post_typecheck.m"
{
#line 430 "post_typecheck.m"
  {
#line 430 "post_typecheck.m"
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0_s check_hlds__post_typecheck__env;

#line 430 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__Clauses_10 = check_hlds__post_typecheck__Clauses_10;
#line 430 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__LambdaHeadVar__1_25 = check_hlds__post_typecheck__LambdaHeadVar__1_25;
#line 430 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__cont = check_hlds__post_typecheck__cont;
#line 430 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__cont_env_ptr = check_hlds__post_typecheck__cont_env_ptr;
#line 431 "post_typecheck.m"
    {
#line 431 "post_typecheck.m"
      mercury__set__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_env_0__conv0_ConstraintId_17, check_hlds__post_typecheck__ConstraintIds_14, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0_2, &check_hlds__post_typecheck__env);
    }
#line 430 "post_typecheck.m"
  }
#line 430 "post_typecheck.m"
}

#line 357 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__357__1_3_p_0(
#line 357 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__1_23,
#line 357 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__2_24,
#line 357 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__LambdaHeadVar__3_25)
#line 357 "post_typecheck.m"
{
#line 357 "post_typecheck.m"
  {
#line 357 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_26_26;

#line 358 "post_typecheck.m"
    {
#line 358 "post_typecheck.m"
      check_hlds__post_typecheck__V_26_26 = parse_tree__builtin_lib_types__void_type_0_f_0();
    }
#line 358 "post_typecheck.m"
    {
#line 358 "post_typecheck.m"
      mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__post_typecheck__LambdaHeadVar__1_23)), ((MR_Box) (check_hlds__post_typecheck__V_26_26)), check_hlds__post_typecheck__LambdaHeadVar__2_24, check_hlds__post_typecheck__LambdaHeadVar__3_25);
#line 358 "post_typecheck.m"
      return;
    }
#line 357 "post_typecheck.m"
  }
#line 357 "post_typecheck.m"
}

#line 112 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck____Compare____is_plain_unify_0_0(
#line 112 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__1_1,
#line 112 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 112 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3)
#line 112 "post_typecheck.m"
{
#line 112 "post_typecheck.m"
  {
#line 112 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 112 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastX_10 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;
#line 112 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastY_11 = (MR_Integer) check_hlds__post_typecheck__HeadVar__3_3;

#line 112 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastX_10 == check_hlds__post_typecheck__CastY_11);
#line 112 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 2464 "check_hlds.post_typecheck.c"
      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "post_typecheck.m"
    else
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
      switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__2_2)) {
#line 112 "post_typecheck.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
        case (MR_Integer) 0:
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
          switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__2_2)) {
#line 112 "post_typecheck.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
            case (MR_Integer) 0:
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__3_3)) {
#line 112 "post_typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
                case (MR_Integer) 0:
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
                  switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__3_3)) {
#line 112 "post_typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
                    case (MR_Integer) 0:
#line 112 "post_typecheck.m"
                      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "post_typecheck.m"
                      break;
#line 112 "post_typecheck.m"
                    case (MR_Integer) 1:
#line 112 "post_typecheck.m"
                      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "post_typecheck.m"
                      break;
#line 112 "post_typecheck.m"
                  }
#line 112 "post_typecheck.m"
                  break;
#line 112 "post_typecheck.m"
                case (MR_Integer) 1:
#line 2512 "check_hlds.post_typecheck.c"
                  *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "post_typecheck.m"
                  break;
#line 112 "post_typecheck.m"
              }
#line 112 "post_typecheck.m"
              break;
#line 112 "post_typecheck.m"
            case (MR_Integer) 1:
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__3_3)) {
#line 112 "post_typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
                case (MR_Integer) 0:
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
                  switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__3_3)) {
#line 112 "post_typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
                    case (MR_Integer) 0:
#line 112 "post_typecheck.m"
                      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "post_typecheck.m"
                      break;
#line 112 "post_typecheck.m"
                    case (MR_Integer) 1:
#line 112 "post_typecheck.m"
                      *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "post_typecheck.m"
                      break;
#line 112 "post_typecheck.m"
                  }
#line 112 "post_typecheck.m"
                  break;
#line 112 "post_typecheck.m"
                case (MR_Integer) 1:
#line 2552 "check_hlds.post_typecheck.c"
                  *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 112 "post_typecheck.m"
                  break;
#line 112 "post_typecheck.m"
              }
#line 112 "post_typecheck.m"
              break;
#line 112 "post_typecheck.m"
          }
#line 112 "post_typecheck.m"
          break;
#line 112 "post_typecheck.m"
        case (MR_Integer) 1:
#line 112 "post_typecheck.m"
          {
#line 112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
            switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__3_3)) {
#line 112 "post_typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
              case (MR_Integer) 0:
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
                switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__3_3)) {
#line 112 "post_typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
                  case (MR_Integer) 0:
#line 2585 "check_hlds.post_typecheck.c"
                    *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "post_typecheck.m"
                    break;
#line 112 "post_typecheck.m"
                  case (MR_Integer) 1:
#line 2591 "check_hlds.post_typecheck.c"
                    *check_hlds__post_typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 112 "post_typecheck.m"
                    break;
#line 112 "post_typecheck.m"
                }
#line 112 "post_typecheck.m"
                break;
#line 112 "post_typecheck.m"
              case (MR_Integer) 1:
#line 112 "post_typecheck.m"
                {
#line 112 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));

#line 112 "post_typecheck.m"
                  {
#line 112 "post_typecheck.m"
                    parse_tree__error_util____Compare____error_spec_0_0(check_hlds__post_typecheck__HeadVar__1_1, check_hlds__post_typecheck__V_13_13, check_hlds__post_typecheck__V_9_9);
#line 112 "post_typecheck.m"
                    return;
                  }
#line 112 "post_typecheck.m"
                }
#line 112 "post_typecheck.m"
                break;
#line 112 "post_typecheck.m"
            }
#line 112 "post_typecheck.m"
          }
#line 112 "post_typecheck.m"
          break;
#line 112 "post_typecheck.m"
      }
#line 112 "post_typecheck.m"
  }
#line 112 "post_typecheck.m"
}

#line 112 "post_typecheck.m"
MR_bool MR_CALL 
check_hlds__post_typecheck____Unify____is_plain_unify_0_0(
#line 112 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 112 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2)
#line 112 "post_typecheck.m"
{
#line 112 "post_typecheck.m"
  {
#line 112 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 112 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastX_9 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 112 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__CastY_10 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 112 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastX_9 == check_hlds__post_typecheck__CastY_10);
#line 112 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 112 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 112 "post_typecheck.m"
    else
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
      switch (MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__1_1)) {
#line 112 "post_typecheck.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
        case (MR_Integer) 0:
#line 112 "post_typecheck.m"
#line 112 "post_typecheck.m"
          switch (MR_unmkbody(check_hlds__post_typecheck__HeadVar__1_1)) {
#line 112 "post_typecheck.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 112 "post_typecheck.m"
            case (MR_Integer) 0:
#line 112 "post_typecheck.m"
              {
#line 112 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__CastX_3 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 112 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__CastY_4 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 112 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastY_4 == check_hlds__post_typecheck__CastX_3);
#line 112 "post_typecheck.m"
              }
#line 112 "post_typecheck.m"
              break;
#line 112 "post_typecheck.m"
            case (MR_Integer) 1:
#line 112 "post_typecheck.m"
              {
#line 112 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__CastX_5 = (MR_Integer) check_hlds__post_typecheck__HeadVar__1_1;
#line 112 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__CastY_6 = (MR_Integer) check_hlds__post_typecheck__HeadVar__2_2;

#line 112 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__CastY_6 == check_hlds__post_typecheck__CastX_5);
#line 112 "post_typecheck.m"
              }
#line 112 "post_typecheck.m"
              break;
#line 112 "post_typecheck.m"
          }
#line 112 "post_typecheck.m"
          break;
#line 112 "post_typecheck.m"
        case (MR_Integer) 1:
#line 112 "post_typecheck.m"
          {
#line 112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 112 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_8_8;

#line 112 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 112 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 112 "post_typecheck.m"
              {
#line 112 "post_typecheck.m"
                check_hlds__post_typecheck__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2719 "check_hlds.post_typecheck.c"
                {
#line 2721 "check_hlds.post_typecheck.c"
                  return check_hlds__post_typecheck__succeeded = parse_tree__error_util____Unify____error_spec_0_0(check_hlds__post_typecheck__V_7_7, check_hlds__post_typecheck__V_8_8);
                }
#line 112 "post_typecheck.m"
              }
#line 112 "post_typecheck.m"
          }
#line 112 "post_typecheck.m"
          break;
#line 112 "post_typecheck.m"
      }
#line 112 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 112 "post_typecheck.m"
  }
#line 112 "post_typecheck.m"
}

#line 1640 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_in_type_4_p_0(
#line 1640 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_5,
#line 1640 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeDefn_6,
#line 1640 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 1640 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20)
#line 1640 "post_typecheck.m"
{
#line 1687 "post_typecheck.m"
  {
#line 1687 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1645 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeStatus_8;
#line 1645 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeBody_9;
#line 1645 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 1648 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_10_10;

#line 1645 "post_typecheck.m"
    {
#line 1645 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__TypeStatus_8);
    }
#line 1646 "post_typecheck.m"
    {
#line 1646 "post_typecheck.m"
      check_hlds__post_typecheck__V_21_21 = hlds__status__type_status_defined_in_this_module_1_f_0(check_hlds__post_typecheck__TypeStatus_8);
    }
#line 1646 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_21_21 == (MR_Integer) 1);
#line 1645 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1645 "post_typecheck.m"
      {
#line 1647 "post_typecheck.m"
        {
#line 1647 "post_typecheck.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__TypeBody_9);
        }
#line 1648 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__TypeBody_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeBody_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1648 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1648 "post_typecheck.m"
          check_hlds__post_typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeBody_9, (MR_Integer) 1)));
#line 1645 "post_typecheck.m"
      }
#line 1687 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1662 "post_typecheck.m"
      {
#line 1662 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtor_5, (MR_Integer) 0)));
#line 1662 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtor_5, (MR_Integer) 1)));
#line 1662 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__BuiltinTypeCtors_13;
#line 1665 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ModuleName_14;
#line 1665 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_23_23;
#line 1665 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_44_44;
#line 1670 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__V_22_22;
#line 1671 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_43_43;

#line 1663 "post_typecheck.m"
        {
#line 1663 "post_typecheck.m"
          check_hlds__post_typecheck__BuiltinTypeCtors_13 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
#line 1665 "post_typecheck.m"
        {
#line 1665 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(check_hlds__post_typecheck__SymName_11, &check_hlds__post_typecheck__ModuleName_14);
        }
#line 1665 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1665 "post_typecheck.m"
          {
#line 1666 "post_typecheck.m"
            {
#line 1666 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(check_hlds__post_typecheck__ModuleName_14);
            }
#line 1666 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1665 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1665 "post_typecheck.m"
              {
#line 1670 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ModuleName_14)) == (MR_mktag((MR_Integer) 0)));
#line 1670 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1670 "post_typecheck.m"
                  {
#line 1670 "post_typecheck.m"
                    check_hlds__post_typecheck__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ModuleName_14, (MR_Integer) 0)));
#line 1670 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__V_22_22, (MR_String) "type_desc") == 0);
#line 1670 "post_typecheck.m"
                  }
#line 1670 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1665 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1665 "post_typecheck.m"
                  {
#line 2858 "check_hlds.post_typecheck.c"
                    check_hlds__post_typecheck__TypeCtorInfo_43_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1671 "post_typecheck.m"
                    {
#line 1671 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_43_43, ((MR_Box) (check_hlds__post_typecheck__TypeCtor_5)), check_hlds__post_typecheck__BuiltinTypeCtors_13);
                    }
#line 1671 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1665 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1665 "post_typecheck.m"
                      {
#line 1675 "post_typecheck.m"
                        check_hlds__post_typecheck__V_23_23 = (MR_Integer) 0;
#line 1675 "post_typecheck.m"
                        {
#line 1675 "post_typecheck.m"
                          hlds__hlds_data__get_type_defn_prev_errors_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__V_44_44);
                        }
#line 1675 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_23_23 == check_hlds__post_typecheck__V_44_44);
#line 1665 "post_typecheck.m"
                      }
#line 1665 "post_typecheck.m"
                  }
#line 1665 "post_typecheck.m"
              }
#line 1665 "post_typecheck.m"
          }
#line 1684 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1677 "post_typecheck.m"
          {
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeContext_15;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Pieces_16;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Msg_17;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Spec_18;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_26_26;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_27_27;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_28_28;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_35_35;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_36_36;
#line 1677 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_40_40;

#line 1677 "post_typecheck.m"
            {
#line 1677 "post_typecheck.m"
              hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__post_typecheck__TypeDefn_6, &check_hlds__post_typecheck__TypeContext_15);
            }
#line 1679 "post_typecheck.m"
            {
#line 1679 "post_typecheck.m"
              check_hlds__post_typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1679 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_28_28, 0) = ((MR_Box) (check_hlds__post_typecheck__SymName_11));
#line 1679 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_28_28, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_12));
#line 1679 "post_typecheck.m"
            }
#line 1679 "post_typecheck.m"
            {
#line 1679 "post_typecheck.m"
              check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1679 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1679 "post_typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__post_typecheck__V_28_28));
#line 1679 "post_typecheck.m"
            }
#line 1679 "post_typecheck.m"
            {
#line 1679 "post_typecheck.m"
              check_hlds__post_typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1679 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__post_typecheck__V_27_27));
#line 1679 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[56])));
#line 1679 "post_typecheck.m"
            }
#line 1678 "post_typecheck.m"
            {
#line 1678 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1678 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[85])));
#line 1678 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_26_26));
#line 1678 "post_typecheck.m"
            }
#line 1681 "post_typecheck.m"
            {
#line 1681 "post_typecheck.m"
              check_hlds__post_typecheck__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1681 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_36_36, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_16));
#line 1681 "post_typecheck.m"
            }
#line 1681 "post_typecheck.m"
            {
#line 1681 "post_typecheck.m"
              check_hlds__post_typecheck__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_36_36));
#line 1681 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1681 "post_typecheck.m"
            }
#line 1681 "post_typecheck.m"
            {
#line 1681 "post_typecheck.m"
              check_hlds__post_typecheck__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1681 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeContext_15));
#line 1681 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_35_35));
#line 1681 "post_typecheck.m"
            }
#line 1682 "post_typecheck.m"
            {
#line 1682 "post_typecheck.m"
              check_hlds__post_typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1682 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_40_40, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_17));
#line 1682 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1682 "post_typecheck.m"
            }
#line 1682 "post_typecheck.m"
            {
#line 1682 "post_typecheck.m"
              check_hlds__post_typecheck__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1682 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1682 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1682 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 2) = ((MR_Box) (check_hlds__post_typecheck__V_40_40));
#line 1682 "post_typecheck.m"
            }
#line 1683 "post_typecheck.m"
            {
#line 1683 "post_typecheck.m"
              MR_Word base;
#line 1683 "post_typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1683 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = base;
#line 1683 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_18));
#line 1683 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19));
#line 1683 "post_typecheck.m"
            }
#line 1677 "post_typecheck.m"
          }
#line 1684 "post_typecheck.m"
        else
#line 1684 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 1662 "post_typecheck.m"
      }
#line 1687 "post_typecheck.m"
    else
#line 1687 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 1687 "post_typecheck.m"
  }
#line 1640 "post_typecheck.m"
}

#line 1626 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_var_6_p_0(
#line 1626 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_7,
#line 1626 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Var_8,
#line 1626 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11,
#line 1626 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12,
#line 1626 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13,
#line 1626 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14)
#line 1626 "post_typecheck.m"
{
#line 1629 "post_typecheck.m"
  {
#line 1629 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 1630 "post_typecheck.m"
    {
#line 1630 "post_typecheck.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_13, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_14);
    }
#line 1631 "post_typecheck.m"
    {
#line 1631 "post_typecheck.m"
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__Type_7, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_11, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_12);
#line 1631 "post_typecheck.m"
      return;
    }
#line 1629 "post_typecheck.m"
  }
#line 1626 "post_typecheck.m"
}

#line 1618 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__make_new_vars_6_p_0(
#line 1618 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Types_7,
#line 1618 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Vars_8,
#line 1618 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12,
#line 1618 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13,
#line 1618 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14,
#line 1618 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15)
#line 1618 "post_typecheck.m"
{
#line 1621 "post_typecheck.m"
  {
#line 1621 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1621 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__NumVars_11;

#line 1622 "post_typecheck.m"
    {
#line 1622 "post_typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__Types_7, &check_hlds__post_typecheck__NumVars_11);
    }
#line 1623 "post_typecheck.m"
    {
#line 1623 "post_typecheck.m"
      mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__NumVars_11, check_hlds__post_typecheck__Vars_8, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_14, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_15);
    }
#line 1624 "post_typecheck.m"
    {
#line 1624 "post_typecheck.m"
      hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(*check_hlds__post_typecheck__Vars_8, check_hlds__post_typecheck__Types_7, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_12, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_13);
#line 1624 "post_typecheck.m"
      return;
    }
#line 1621 "post_typecheck.m"
  }
#line 1618 "post_typecheck.m"
}

#line 1594 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_8,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_9,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_10,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RestrictNonLocals_11,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarsList_12,
#line 1594 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_13,
#line 1594 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_14)
#line 1594 "post_typecheck.m"
{
#line 1599 "post_typecheck.m"
  {
#line 1599 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_26_26;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_16;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnifyMainContext_17;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnifySubContext_18;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goal0_19;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr0_20;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo0_21;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocals1_22;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocals_23;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo1_24;
#line 1599 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalInfo_25;

#line 1600 "post_typecheck.m"
    {
#line 1600 "post_typecheck.m"
      check_hlds__post_typecheck__Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__OldGoalInfo_10);
    }
#line 1601 "post_typecheck.m"
    {
#line 1601 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_16 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_10);
    }
#line 1602 "post_typecheck.m"
    check_hlds__post_typecheck__UnifyMainContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__UnifyContext_13, (MR_Integer) 0)));
#line 1602 "post_typecheck.m"
    check_hlds__post_typecheck__UnifySubContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__UnifyContext_13, (MR_Integer) 1)));
#line 1603 "post_typecheck.m"
    {
#line 1603 "post_typecheck.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__post_typecheck__Var_8, check_hlds__post_typecheck__RHS_9, check_hlds__post_typecheck__Context_15, check_hlds__post_typecheck__UnifyMainContext_17, check_hlds__post_typecheck__UnifySubContext_18, &check_hlds__post_typecheck__Goal0_19);
    }
#line 1605 "post_typecheck.m"
    check_hlds__post_typecheck__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal0_19, (MR_Integer) 0)));
#line 1605 "post_typecheck.m"
    check_hlds__post_typecheck__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal0_19, (MR_Integer) 1)));
#line 3195 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1608 "post_typecheck.m"
    {
#line 1608 "post_typecheck.m"
      parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_26_26, check_hlds__post_typecheck__VarsList_12, &check_hlds__post_typecheck__NonLocals1_22);
    }
#line 1609 "post_typecheck.m"
    {
#line 1609 "post_typecheck.m"
      parse_tree__set_of_var__intersect_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_26_26, check_hlds__post_typecheck__RestrictNonLocals_11, check_hlds__post_typecheck__NonLocals1_22, &check_hlds__post_typecheck__NonLocals_23);
    }
#line 1610 "post_typecheck.m"
    {
#line 1610 "post_typecheck.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__post_typecheck__NonLocals_23, check_hlds__post_typecheck__GoalInfo0_21, &check_hlds__post_typecheck__GoalInfo1_24);
    }
#line 1615 "post_typecheck.m"
    {
#line 1615 "post_typecheck.m"
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(check_hlds__post_typecheck__GoalId_16, check_hlds__post_typecheck__GoalInfo1_24, &check_hlds__post_typecheck__GoalInfo_25);
    }
#line 1616 "post_typecheck.m"
    {
#line 1616 "post_typecheck.m"
      MR_Word base;
#line 1616 "post_typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1616 "post_typecheck.m"
      *check_hlds__post_typecheck__Goal_14 = base;
#line 1616 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr0_20));
#line 1616 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo_25));
#line 1616 "post_typecheck.m"
    }
#line 1599 "post_typecheck.m"
  }
#line 1594 "post_typecheck.m"
}

#line 1577 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__search_for_named_field_4_p_0(
#line 1577 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1577 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_7,
#line 1577 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__CurFieldNumber_8,
#line 1577 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NamedFieldNumber_9)
#line 1577 "post_typecheck.m"
{
#line 1581 "post_typecheck.m"
  while (MR_TRUE)
#line 1581 "post_typecheck.m"
    {
#line 1581 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1581 "post_typecheck.m"
      {
#line 1581 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1581 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__CtorArg_5;
#line 1581 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__CtorArgs_6;
#line 1583 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgFieldName_10;
#line 1583 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_12_12;
#line 1583 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_13_13;
#line 1583 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__V_19_19;
#line 1583 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_16_16;
#line 1583 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_17_17;
#line 1583 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_18_18;
#line 1583 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_11_11;

#line 1580 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1580 "post_typecheck.m"
          {
#line 1580 "post_typecheck.m"
            check_hlds__post_typecheck__CtorArg_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1580 "post_typecheck.m"
            check_hlds__post_typecheck__CtorArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1583 "post_typecheck.m"
            check_hlds__post_typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 0)));
#line 1583 "post_typecheck.m"
            check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 1)));
#line 1583 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 2)));
#line 1583 "post_typecheck.m"
            check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__CtorArg_5, (MR_Integer) 3)));
#line 1583 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1583 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1583 "post_typecheck.m"
              {
#line 1583 "post_typecheck.m"
                check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, (MR_Integer) 0)));
#line 1583 "post_typecheck.m"
                check_hlds__post_typecheck__ArgFieldName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_13_13, (MR_Integer) 0)));
#line 1583 "post_typecheck.m"
                check_hlds__post_typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_13_13, (MR_Integer) 1)));
#line 1584 "post_typecheck.m"
                {
#line 1584 "post_typecheck.m"
                  check_hlds__post_typecheck__V_19_19 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__ArgFieldName_10);
                }
#line 1584 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__UnqualFieldName_7, check_hlds__post_typecheck__V_19_19) == 0);
#line 1583 "post_typecheck.m"
              }
#line 1587 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1586 "post_typecheck.m"
              {
#line 1586 "post_typecheck.m"
                *check_hlds__post_typecheck__NamedFieldNumber_9 = check_hlds__post_typecheck__CurFieldNumber_8;
#line 1586 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1586 "post_typecheck.m"
              }
#line 1587 "post_typecheck.m"
            else
#line 1588 "post_typecheck.m"
              {
#line 1588 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_14_14 = (check_hlds__post_typecheck__CurFieldNumber_8 + (MR_Integer) 1);

#line 1588 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1588 "post_typecheck.m"
                {
#line 1588 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__CtorArgs_6;
#line 1588 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__CurFieldNumber__tmp_copy_8 = check_hlds__post_typecheck__V_14_14;

#line 1588 "post_typecheck.m"
                  check_hlds__post_typecheck__CurFieldNumber_8 = check_hlds__post_typecheck__CurFieldNumber__tmp_copy_8;
#line 1588 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 1588 "post_typecheck.m"
                }
#line 1588 "post_typecheck.m"
                continue;
#line 1588 "post_typecheck.m"
              }
#line 1580 "post_typecheck.m"
          }
#line 1581 "post_typecheck.m"
        return check_hlds__post_typecheck__succeeded;
#line 1581 "post_typecheck.m"
      }
#line 1581 "post_typecheck.m"
      break;
#line 1581 "post_typecheck.m"
    }
#line 1577 "post_typecheck.m"
}

#line 1559 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_loop_5_p_0(
#line 1559 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeCtor_1,
#line 1559 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1559 "post_typecheck.m"
  MR_String check_hlds__post_typecheck__UnqualFieldName_3,
#line 1559 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_4,
#line 1559 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_5)
#line 1559 "post_typecheck.m"
{
#line 1562 "post_typecheck.m"
  while (MR_TRUE)
#line 1562 "post_typecheck.m"
    {
#line 1562 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1562 "post_typecheck.m"
      {
#line 1562 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 1562 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1562 "post_typecheck.m"
          {
#line 1563 "post_typecheck.m"
            {
#line 1563 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field_loop\'/5", (MR_String) "can\'t find field");
#line 1563 "post_typecheck.m"
              return;
            }
#line 1562 "post_typecheck.m"
          }
#line 1562 "post_typecheck.m"
        else
#line 1565 "post_typecheck.m"
          {
#line 1565 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Ctor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 1565 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 1565 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 2)));
#line 1565 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__CtorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 3)));
#line 1565 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 4)));
#line 1566 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 0)));
#line 1566 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 1)));
#line 1566 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Ctor_14, (MR_Integer) 5)));
#line 1572 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__FieldNumberPrime_25;

#line 1568 "post_typecheck.m"
            {
#line 1568 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__search_for_named_field_4_p_0(check_hlds__post_typecheck__CtorArgs_22, check_hlds__post_typecheck__UnqualFieldName_3, (MR_Integer) 1, &check_hlds__post_typecheck__FieldNumberPrime_25);
            }
#line 1572 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1570 "post_typecheck.m"
              {
#line 1570 "post_typecheck.m"
                {
#line 1570 "post_typecheck.m"
                  MR_Word base;
#line 1570 "post_typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1570 "post_typecheck.m"
                  *check_hlds__post_typecheck__ConsId_4 = base;
#line 1570 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1570 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_21));
#line 1570 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_23));
#line 1570 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtor_1));
#line 1570 "post_typecheck.m"
                }
#line 1571 "post_typecheck.m"
                *check_hlds__post_typecheck__FieldNumber_5 = check_hlds__post_typecheck__FieldNumberPrime_25;
#line 1570 "post_typecheck.m"
              }
#line 1572 "post_typecheck.m"
            else
#line 1573 "post_typecheck.m"
              {
#line 1573 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1573 "post_typecheck.m"
                {
#line 1573 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__Ctors_15;

#line 1573 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 1573 "post_typecheck.m"
                }
#line 1573 "post_typecheck.m"
                continue;
#line 1573 "post_typecheck.m"
              }
#line 1565 "post_typecheck.m"
          }
#line 1562 "post_typecheck.m"
      }
#line 1562 "post_typecheck.m"
      break;
#line 1562 "post_typecheck.m"
    }
#line 1559 "post_typecheck.m"
}

#line 1536 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(
#line 1536 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1536 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_7,
#line 1536 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldSymName_8,
#line 1536 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ConsId_9,
#line 1536 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__FieldNumber_10)
#line 1536 "post_typecheck.m"
{
#line 1540 "post_typecheck.m"
  {
#line 1540 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1540 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeCtor_11;
#line 1540 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_12;
#line 1540 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeDefn_13;
#line 1540 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeBody_14;

#line 1541 "post_typecheck.m"
    {
#line 1541 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_7, &check_hlds__post_typecheck__TermTypeCtor_11);
    }
#line 1542 "post_typecheck.m"
    {
#line 1542 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__TypeTable_12);
    }
#line 1543 "post_typecheck.m"
    {
#line 1543 "post_typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_12, check_hlds__post_typecheck__TermTypeCtor_11, &check_hlds__post_typecheck__TermTypeDefn_13);
    }
#line 1544 "post_typecheck.m"
    {
#line 1544 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TermTypeDefn_13, &check_hlds__post_typecheck__TermTypeBody_14);
    }
#line 1550 "post_typecheck.m"
#line 1550 "post_typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__post_typecheck__TermTypeBody_14)) {
#line 1550 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1550 "post_typecheck.m"
      case (MR_Integer) 0:
#line 1555 "post_typecheck.m"
        {
#line 1556 "post_typecheck.m"
          {
#line 1556 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1556 "post_typecheck.m"
            return;
          }
#line 1555 "post_typecheck.m"
        }
#line 1550 "post_typecheck.m"
        break;
#line 1550 "post_typecheck.m"
      case (MR_Integer) 1:
#line 1546 "post_typecheck.m"
        {
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 0)));
#line 1546 "post_typecheck.m"
          MR_String check_hlds__post_typecheck__FieldName_24;
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 1)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 2)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 3)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 4)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 5)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_14, (MR_Integer) 7)));

#line 1547 "post_typecheck.m"
          {
#line 1547 "post_typecheck.m"
            check_hlds__post_typecheck__FieldName_24 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__FieldSymName_8);
          }
#line 1548 "post_typecheck.m"
          {
#line 1548 "post_typecheck.m"
            check_hlds__post_typecheck__get_constructor_containing_field_loop_5_p_0(check_hlds__post_typecheck__TermTypeCtor_11, check_hlds__post_typecheck__Ctors_15, check_hlds__post_typecheck__FieldName_24, check_hlds__post_typecheck__ConsId_9, check_hlds__post_typecheck__FieldNumber_10);
#line 1548 "post_typecheck.m"
            return;
          }
#line 1546 "post_typecheck.m"
        }
#line 1550 "post_typecheck.m"
        break;
#line 1550 "post_typecheck.m"
      case (MR_Integer) 2:
#line 1555 "post_typecheck.m"
        {
#line 1556 "post_typecheck.m"
          {
#line 1556 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1556 "post_typecheck.m"
            return;
          }
#line 1555 "post_typecheck.m"
        }
#line 1550 "post_typecheck.m"
        break;
#line 1550 "post_typecheck.m"
      case (MR_Integer) 3:
#line 1555 "post_typecheck.m"
        {
#line 1556 "post_typecheck.m"
          {
#line 1556 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1556 "post_typecheck.m"
            return;
          }
#line 1555 "post_typecheck.m"
        }
#line 1550 "post_typecheck.m"
        break;
#line 1550 "post_typecheck.m"
    }
#line 1540 "post_typecheck.m"
  }
#line 1536 "post_typecheck.m"
}

#line 1516 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__split_list_at_index_5_p_0(
#line 1516 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TypeInfo_for_T_20,
#line 1516 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__Index_6,
#line 1516 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__List_7,
#line 1516 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Before_8,
#line 1516 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__At_9,
#line 1516 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__After_10)
#line 1516 "post_typecheck.m"
{
#line 1527 "post_typecheck.m"
  {
#line 1527 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1527 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__BeforePrime_11;
#line 1527 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__AtPrime_13;
#line 1527 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__AfterPrime_14;
#line 1521 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__AtAndAfter_12;
#line 1521 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_15_15 = (check_hlds__post_typecheck__Index_6 - (MR_Integer) 1);

#line 1521 "post_typecheck.m"
    {
#line 1521 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = mercury__list__split_list_4_p_0(check_hlds__post_typecheck__TypeInfo_for_T_20, check_hlds__post_typecheck__V_15_15, check_hlds__post_typecheck__List_7, &check_hlds__post_typecheck__BeforePrime_11, &check_hlds__post_typecheck__AtAndAfter_12);
    }
#line 1521 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1521 "post_typecheck.m"
      {
#line 1522 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__AtAndAfter_12)) == (MR_mktag((MR_Integer) 1)));
#line 1522 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1522 "post_typecheck.m"
          {
#line 1522 "post_typecheck.m"
            check_hlds__post_typecheck__AtPrime_13 = (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__AtAndAfter_12, (MR_Integer) 0));
#line 1522 "post_typecheck.m"
            check_hlds__post_typecheck__AfterPrime_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__AtAndAfter_12, (MR_Integer) 1)));
#line 1522 "post_typecheck.m"
          }
#line 1521 "post_typecheck.m"
      }
#line 1527 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1524 "post_typecheck.m"
      {
#line 1524 "post_typecheck.m"
        *check_hlds__post_typecheck__Before_8 = check_hlds__post_typecheck__BeforePrime_11;
#line 1525 "post_typecheck.m"
        *check_hlds__post_typecheck__At_9 = check_hlds__post_typecheck__AtPrime_13;
#line 1526 "post_typecheck.m"
        *check_hlds__post_typecheck__After_10 = check_hlds__post_typecheck__AfterPrime_14;
#line 1524 "post_typecheck.m"
      }
#line 1527 "post_typecheck.m"
    else
#line 1528 "post_typecheck.m"
      {
#line 1528 "post_typecheck.m"
        {
#line 1528 "post_typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.split_list_at_index\'/5", (MR_String) "split_list_at_index");
#line 1528 "post_typecheck.m"
          return;
        }
#line 1528 "post_typecheck.m"
      }
#line 1527 "post_typecheck.m"
  }
#line 1516 "post_typecheck.m"
}

#line 1505 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__unify_constraint_list_5_p_0(
#line 1505 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 1505 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 1505 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVars_3,
#line 1505 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4,
#line 1505 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Subst_5)
#line 1505 "post_typecheck.m"
{
#line 1509 "post_typecheck.m"
  while (MR_TRUE)
#line 1509 "post_typecheck.m"
    {
#line 1509 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1509 "post_typecheck.m"
      {
#line 1509 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 1509 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1509 "post_typecheck.m"
          {
#line 1509 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1509 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1509 "post_typecheck.m"
              {
#line 1509 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_Subst_5 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4;
#line 1509 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1509 "post_typecheck.m"
              }
#line 1509 "post_typecheck.m"
          }
#line 1509 "post_typecheck.m"
        else
#line 1510 "post_typecheck.m"
          {
#line 1510 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1510 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__As_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1510 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__B_12;
#line 1510 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Bs_13;
#line 1510 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypesA_17;
#line 1510 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypesB_19;
#line 1510 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22;
#line 1511 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___ClassNameA_16;
#line 1512 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___ClassNameB_18;

#line 1510 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1510 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1510 "post_typecheck.m"
              {
#line 1510 "post_typecheck.m"
                check_hlds__post_typecheck__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 1510 "post_typecheck.m"
                check_hlds__post_typecheck__Bs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 1511 "post_typecheck.m"
                check_hlds__post_typecheck___ClassNameA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__A_10, (MR_Integer) 0)));
#line 1511 "post_typecheck.m"
                check_hlds__post_typecheck__ArgTypesA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__A_10, (MR_Integer) 1)));
#line 1512 "post_typecheck.m"
                check_hlds__post_typecheck___ClassNameB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__B_12, (MR_Integer) 0)));
#line 1512 "post_typecheck.m"
                check_hlds__post_typecheck__ArgTypesB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__B_12, (MR_Integer) 1)));
#line 1513 "post_typecheck.m"
                {
#line 1513 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(check_hlds__post_typecheck__ArgTypesA_17, check_hlds__post_typecheck__ArgTypesB_19, check_hlds__post_typecheck__TVars_3, check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4, &check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22);
                }
#line 1510 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1514 "post_typecheck.m"
                  {
#line 1514 "post_typecheck.m"
                    /* direct tailcall eliminated */
#line 1514 "post_typecheck.m"
                    {
#line 1514 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__As_11;
#line 1514 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__Bs_13;
#line 1514 "post_typecheck.m"
                      MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_22_22;

#line 1514 "post_typecheck.m"
                      check_hlds__post_typecheck__STATE_VARIABLE_Subst_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 1514 "post_typecheck.m"
                      check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 1514 "post_typecheck.m"
                      check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 1514 "post_typecheck.m"
                    }
#line 1514 "post_typecheck.m"
                    continue;
#line 1514 "post_typecheck.m"
                  }
#line 1510 "post_typecheck.m"
              }
#line 1510 "post_typecheck.m"
          }
#line 1509 "post_typecheck.m"
        return check_hlds__post_typecheck__succeeded;
#line 1509 "post_typecheck.m"
      }
#line 1509 "post_typecheck.m"
      break;
#line 1509 "post_typecheck.m"
    }
#line 1505 "post_typecheck.m"
}

#line 1440 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0_1(
#line 1440 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1440 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 1440 "post_typecheck.m"
{
#line 1440 "post_typecheck.m"
  {
#line 1440 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 1440 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1440 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_LambdaHeadVar__2_52;

#line 1440 "post_typecheck.m"
    {
#line 1440 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_LambdaHeadVar__2_52 = check_hlds__post_typecheck__IntroducedFrom__func__get_cons_id_arg_types_adding_existq_tvars__1440__1_1_f_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 1440 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_LambdaHeadVar__2_52));
#line 1440 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 1440 "post_typecheck.m"
  }
#line 1440 "post_typecheck.m"
}

#line 1429 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_9,
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalId_10,
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_11,
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermType_12,
#line 1429 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualArgTypes_13,
#line 1429 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ActualExistQVars_14,
#line 1429 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48,
#line 1429 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49)
#line 1429 "post_typecheck.m"
{
#line 1434 "post_typecheck.m"
  {
#line 1434 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_63_63;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtor_16;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsDefn_17;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeParams_20;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsExistQVars_22;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsConstraints_23;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgs_24;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgTypes_26;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ActualArgTypes0_28;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeArgs_46;
#line 1434 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnivTSubst_47;
#line 1438 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_18_18;
#line 1438 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 1438 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 1438 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_25_25;
#line 1486 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_45_45;

#line 1436 "post_typecheck.m"
    {
#line 1436 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_12, &check_hlds__post_typecheck__TypeCtor_16);
    }
#line 1437 "post_typecheck.m"
    {
#line 1437 "post_typecheck.m"
      check_hlds__type_util__get_cons_defn_det_4_p_0(check_hlds__post_typecheck__ModuleInfo_9, check_hlds__post_typecheck__TypeCtor_16, check_hlds__post_typecheck__ConsId_11, &check_hlds__post_typecheck__ConsDefn_17);
    }
#line 1438 "post_typecheck.m"
    check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 0)));
#line 1438 "post_typecheck.m"
    check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 1)));
#line 1438 "post_typecheck.m"
    check_hlds__post_typecheck__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 2)));
#line 1438 "post_typecheck.m"
    check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 3)));
#line 1438 "post_typecheck.m"
    check_hlds__post_typecheck__ConsExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 4)));
#line 1438 "post_typecheck.m"
    check_hlds__post_typecheck__ConsConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 5)));
#line 1438 "post_typecheck.m"
    check_hlds__post_typecheck__ConsArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 6)));
#line 1438 "post_typecheck.m"
    check_hlds__post_typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_17, (MR_Integer) 7)));
#line 3968 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1440 "post_typecheck.m"
    {
#line 1440 "post_typecheck.m"
      check_hlds__post_typecheck__ConsArgTypes_26 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__post_typecheck__TypeCtorInfo_63_63, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[7], check_hlds__post_typecheck__ConsArgs_24);
    }
#line 1446 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ConsExistQVars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1443 "post_typecheck.m"
      {
#line 1444 "post_typecheck.m"
        check_hlds__post_typecheck__ActualArgTypes0_28 = check_hlds__post_typecheck__ConsArgTypes_26;
#line 1445 "post_typecheck.m"
        *check_hlds__post_typecheck__ActualExistQVars_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1443 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48;
#line 1443 "post_typecheck.m"
      }
#line 1446 "post_typecheck.m"
    else
#line 1447 "post_typecheck.m"
      {
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeInfo_64_64 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 1447 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__NumExistQVars_31;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet0_32;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentExistQVars_33;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_34;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConsToParentRenaming_35;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentArgTypes_36;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ParentConstraints_37;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_38;
#line 1447 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__NumConstraints_39;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualConstraints_40;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistTSubst_41;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__KindMap_42;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualExistQVarTypes_43;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarsB_72;
#line 1447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Subst0_73;
#line 1501 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Subst1_74;
#line 1482 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ActualExistQVars0_44;

#line 1449 "post_typecheck.m"
        {
#line 1449 "post_typecheck.m"
          mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__ConsExistQVars_22, &check_hlds__post_typecheck__NumExistQVars_31);
        }
#line 1450 "post_typecheck.m"
        {
#line 1450 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48, &check_hlds__post_typecheck__TVarSet0_32);
        }
#line 1451 "post_typecheck.m"
        {
#line 1451 "post_typecheck.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__post_typecheck__NumExistQVars_31, &check_hlds__post_typecheck__ParentExistQVars_33, check_hlds__post_typecheck__TVarSet0_32, &check_hlds__post_typecheck__TVarSet_34);
        }
#line 1452 "post_typecheck.m"
        {
#line 1452 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__post_typecheck__TVarSet_34, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_48, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49);
        }
#line 1453 "post_typecheck.m"
        {
#line 1453 "post_typecheck.m"
          mercury__map__from_corresponding_lists_3_p_0(check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__TypeInfo_64_64, check_hlds__post_typecheck__ConsExistQVars_22, check_hlds__post_typecheck__ParentExistQVars_33, &check_hlds__post_typecheck__ConsToParentRenaming_35);
        }
#line 1455 "post_typecheck.m"
        {
#line 1455 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__post_typecheck__ConsToParentRenaming_35, check_hlds__post_typecheck__ConsArgTypes_26, &check_hlds__post_typecheck__ParentArgTypes_36);
        }
#line 1457 "post_typecheck.m"
        {
#line 1457 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__post_typecheck__ConsToParentRenaming_35, check_hlds__post_typecheck__ConsConstraints_23, &check_hlds__post_typecheck__ParentConstraints_37);
        }
#line 1465 "post_typecheck.m"
        {
#line 1465 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_49, &check_hlds__post_typecheck__ConstraintMap_38);
        }
#line 1466 "post_typecheck.m"
        {
#line 1466 "post_typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__post_typecheck__ConsConstraints_23, &check_hlds__post_typecheck__NumConstraints_39);
        }
#line 1467 "post_typecheck.m"
        {
#line 1467 "post_typecheck.m"
          hlds__hlds_data__lookup_hlds_constraint_list_5_p_0(check_hlds__post_typecheck__ConstraintMap_38, (MR_Integer) 1, check_hlds__post_typecheck__GoalId_10, check_hlds__post_typecheck__NumConstraints_39, &check_hlds__post_typecheck__ActualConstraints_40);
        }
#line 1494 "post_typecheck.m"
        {
#line 1494 "post_typecheck.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__post_typecheck__ActualConstraints_40, &check_hlds__post_typecheck__TVarsB_72);
        }
#line 1495 "post_typecheck.m"
        {
#line 1495 "post_typecheck.m"
          mercury__map__init_1_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__post_typecheck__Subst0_73);
        }
#line 1497 "post_typecheck.m"
        {
#line 1497 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__unify_constraint_list_5_p_0(check_hlds__post_typecheck__ParentConstraints_37, check_hlds__post_typecheck__ActualConstraints_40, check_hlds__post_typecheck__TVarsB_72, check_hlds__post_typecheck__Subst0_73, &check_hlds__post_typecheck__Subst1_74);
        }
#line 1501 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1500 "post_typecheck.m"
          check_hlds__post_typecheck__ExistTSubst_41 = check_hlds__post_typecheck__Subst1_74;
#line 1501 "post_typecheck.m"
        else
#line 1502 "post_typecheck.m"
          {
#line 1502 "post_typecheck.m"
            {
#line 1502 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.constraint_list_subsumes_det\'/3", (MR_String) "failed");
#line 1502 "post_typecheck.m"
              return;
            }
#line 1502 "post_typecheck.m"
          }
#line 1471 "post_typecheck.m"
        {
#line 1471 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__post_typecheck__ExistTSubst_41, check_hlds__post_typecheck__ParentArgTypes_36, &check_hlds__post_typecheck__ActualArgTypes0_28);
        }
#line 1475 "post_typecheck.m"
        {
#line 1475 "post_typecheck.m"
          mercury__map__init_1_p_0(check_hlds__post_typecheck__TypeInfo_64_64, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &check_hlds__post_typecheck__KindMap_42);
        }
#line 1476 "post_typecheck.m"
        {
#line 1476 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(check_hlds__post_typecheck__KindMap_42, check_hlds__post_typecheck__ExistTSubst_41, check_hlds__post_typecheck__ParentExistQVars_33, &check_hlds__post_typecheck__ActualExistQVarTypes_43);
        }
#line 1479 "post_typecheck.m"
        {
#line 1479 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(check_hlds__post_typecheck__ActualExistQVarTypes_43, &check_hlds__post_typecheck__ActualExistQVars0_44);
        }
#line 1482 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1481 "post_typecheck.m"
          *check_hlds__post_typecheck__ActualExistQVars_14 = check_hlds__post_typecheck__ActualExistQVars0_44;
#line 1482 "post_typecheck.m"
        else
#line 1483 "post_typecheck.m"
          {
#line 1483 "post_typecheck.m"
            {
#line 1483 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_cons_id_arg_types_adding_existq_tvars\'/8", (MR_String) "existq_tvar bound to non-var");
#line 1483 "post_typecheck.m"
              return;
            }
#line 1483 "post_typecheck.m"
          }
#line 1447 "post_typecheck.m"
      }
#line 1486 "post_typecheck.m"
    {
#line 1486 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__post_typecheck__TermType_12, &check_hlds__post_typecheck__V_45_45, &check_hlds__post_typecheck__TypeArgs_46);
    }
#line 1487 "post_typecheck.m"
    {
#line 1487 "post_typecheck.m"
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], check_hlds__post_typecheck__TypeCtorInfo_63_63, check_hlds__post_typecheck__TypeParams_20, check_hlds__post_typecheck__TypeArgs_46, &check_hlds__post_typecheck__UnivTSubst_47);
    }
#line 1488 "post_typecheck.m"
    {
#line 1488 "post_typecheck.m"
      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__post_typecheck__UnivTSubst_47, check_hlds__post_typecheck__ActualArgTypes0_28, check_hlds__post_typecheck__ActualArgTypes_13);
#line 1488 "post_typecheck.m"
      return;
    }
#line 1434 "post_typecheck.m"
  }
#line 1429 "post_typecheck.m"
}

#line 1362 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_set_function_14_p_0(
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55,
#line 1362 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57,
#line 1362 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59,
#line 1362 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_19,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_20,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_21,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_22,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermOutputVar_23,
#line 1362 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_24,
#line 1362 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_25)
#line 1362 "post_typecheck.m"
{
#line 1369 "post_typecheck.m"
  {
#line 1369 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_86_86;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_87_87;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermType_26;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId0_27;
#line 1369 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__FieldNumber_28;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_29;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_30;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_31;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesBeforeField_32;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermFieldType_33;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesAfterField_34;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsBeforeField_35;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__SingletonFieldVar_36;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsAfterField_37;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructArgs_38;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__OldNonLocals_39;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NonLocalArgs_40;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructRestrictNonLocals_41;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__DeconstructGoal_42;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructArgs_43;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructRestrictNonLocals_44;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId_45;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstructGoal_52;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConjExpr_53;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Conj_54;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_68_68;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_69_69;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_70_70;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_72_72;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_76_76;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_77_77;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_80_80;
#line 1369 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_81_81;
#line 1378 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_TermFieldType_33;

#line 1370 "post_typecheck.m"
    {
#line 1370 "post_typecheck.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57, check_hlds__post_typecheck__TermInputVar_22, &check_hlds__post_typecheck__TermType_26);
    }
#line 1371 "post_typecheck.m"
    {
#line 1371 "post_typecheck.m"
      check_hlds__post_typecheck__get_constructor_containing_field_5_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__TermType_26, check_hlds__post_typecheck__FieldName_19, &check_hlds__post_typecheck__ConsId0_27, &check_hlds__post_typecheck__FieldNumber_28);
    }
#line 1374 "post_typecheck.m"
    {
#line 1374 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_29 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_24);
    }
#line 1375 "post_typecheck.m"
    {
#line 1375 "post_typecheck.m"
      check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__GoalId_29, check_hlds__post_typecheck__ConsId0_27, check_hlds__post_typecheck__TermType_26, &check_hlds__post_typecheck__ArgTypes_30, &check_hlds__post_typecheck__ExistQVars_31, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_55, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_56);
    }
#line 1378 "post_typecheck.m"
    {
#line 1378 "post_typecheck.m"
      check_hlds__post_typecheck__split_list_at_index_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__FieldNumber_28, check_hlds__post_typecheck__ArgTypes_30, &check_hlds__post_typecheck__TypesBeforeField_32, &check_hlds__post_typecheck__conv0_TermFieldType_33, &check_hlds__post_typecheck__TypesAfterField_34);
    }
#line 1378 "post_typecheck.m"
    check_hlds__post_typecheck__TermFieldType_33 = ((MR_Word) check_hlds__post_typecheck__conv0_TermFieldType_33);
#line 1381 "post_typecheck.m"
    {
#line 1381 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesBeforeField_32, &check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_57, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_59, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63);
    }
#line 1382 "post_typecheck.m"
    {
#line 1382 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_var_6_p_0(check_hlds__post_typecheck__TermFieldType_33, &check_hlds__post_typecheck__SingletonFieldVar_36, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_62_62, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_63_63, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65);
    }
#line 1383 "post_typecheck.m"
    {
#line 1383 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesAfterField_34, &check_hlds__post_typecheck__VarsAfterField_37, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_64_64, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_58, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_65_65, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_60);
    }
#line 4327 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_86_86 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[1];
#line 1386 "post_typecheck.m"
    {
#line 1386 "post_typecheck.m"
      check_hlds__post_typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__post_typecheck__SingletonFieldVar_36));
#line 1386 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_68_68, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_37));
#line 1386 "post_typecheck.m"
    }
#line 1386 "post_typecheck.m"
    {
#line 1386 "post_typecheck.m"
      check_hlds__post_typecheck__DeconstructArgs_38 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__V_68_68);
    }
#line 1387 "post_typecheck.m"
    {
#line 1387 "post_typecheck.m"
      check_hlds__post_typecheck__OldNonLocals_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__post_typecheck__OldGoalInfo_24);
    }
#line 1388 "post_typecheck.m"
    {
#line 1388 "post_typecheck.m"
      check_hlds__post_typecheck__NonLocalArgs_40 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__VarsAfterField_37);
    }
#line 4354 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1389 "post_typecheck.m"
    {
#line 1389 "post_typecheck.m"
      parse_tree__set_of_var__insert_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_87_87, check_hlds__post_typecheck__NonLocalArgs_40, check_hlds__post_typecheck__OldNonLocals_39, &check_hlds__post_typecheck__DeconstructRestrictNonLocals_41);
    }
#line 1393 "post_typecheck.m"
    {
#line 1393 "post_typecheck.m"
      check_hlds__post_typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId0_27));
#line 1393 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1393 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_69_69, 2) = ((MR_Box) (check_hlds__post_typecheck__DeconstructArgs_38));
#line 1393 "post_typecheck.m"
    }
#line 1395 "post_typecheck.m"
    {
#line 1395 "post_typecheck.m"
      check_hlds__post_typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_70_70, 0) = ((MR_Box) (check_hlds__post_typecheck__TermInputVar_22));
#line 1395 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_70_70, 1) = ((MR_Box) (check_hlds__post_typecheck__DeconstructArgs_38));
#line 1395 "post_typecheck.m"
    }
#line 1392 "post_typecheck.m"
    {
#line 1392 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermInputVar_22, check_hlds__post_typecheck__V_69_69, check_hlds__post_typecheck__OldGoalInfo_24, check_hlds__post_typecheck__DeconstructRestrictNonLocals_41, check_hlds__post_typecheck__V_70_70, check_hlds__post_typecheck__UnifyContext_20, &check_hlds__post_typecheck__DeconstructGoal_42);
    }
#line 1398 "post_typecheck.m"
    {
#line 1398 "post_typecheck.m"
      check_hlds__post_typecheck__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_21));
#line 1398 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_37));
#line 1398 "post_typecheck.m"
    }
#line 1398 "post_typecheck.m"
    {
#line 1398 "post_typecheck.m"
      check_hlds__post_typecheck__ConstructArgs_43 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_86_86, check_hlds__post_typecheck__VarsBeforeField_35, check_hlds__post_typecheck__V_72_72);
    }
#line 1399 "post_typecheck.m"
    {
#line 1399 "post_typecheck.m"
      parse_tree__set_of_var__insert_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_87_87, check_hlds__post_typecheck__NonLocalArgs_40, check_hlds__post_typecheck__OldNonLocals_39, &check_hlds__post_typecheck__ConstructRestrictNonLocals_44);
    }
#line 1407 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ExistQVars_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1406 "post_typecheck.m"
      check_hlds__post_typecheck__ConsId_45 = check_hlds__post_typecheck__ConsId0_27;
#line 1407 "post_typecheck.m"
    else
#line 1412 "post_typecheck.m"
      {
#line 1412 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConsName0_48;
#line 1412 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__ConsArity_49;
#line 1412 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtor_50;

#line 1409 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1409 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1409 "post_typecheck.m"
          {
#line 1409 "post_typecheck.m"
            check_hlds__post_typecheck__ConsName0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 1)));
#line 1409 "post_typecheck.m"
            check_hlds__post_typecheck__ConsArity_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 2)));
#line 1409 "post_typecheck.m"
            check_hlds__post_typecheck__TypeCtor_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_27, (MR_Integer) 3)));
#line 1410 "post_typecheck.m"
            {
#line 1410 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__ConsName_51;

#line 1410 "post_typecheck.m"
              {
#line 1410 "post_typecheck.m"
                parse_tree__prog_type__add_new_prefix_2_p_0(check_hlds__post_typecheck__ConsName0_48, &check_hlds__post_typecheck__ConsName_51);
              }
#line 1411 "post_typecheck.m"
              {
#line 1411 "post_typecheck.m"
                check_hlds__post_typecheck__ConsId_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1411 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 1) = ((MR_Box) (check_hlds__post_typecheck__ConsName_51));
#line 1411 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 2) = ((MR_Box) (check_hlds__post_typecheck__ConsArity_49));
#line 1411 "post_typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_45, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtor_50));
#line 1411 "post_typecheck.m"
              }
#line 1410 "post_typecheck.m"
            }
#line 1409 "post_typecheck.m"
          }
#line 1409 "post_typecheck.m"
        else
#line 1413 "post_typecheck.m"
          {
#line 1413 "post_typecheck.m"
            {
#line 1413 "post_typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.translate_set_function\'/14", (MR_String) "invalid cons_id");
#line 1413 "post_typecheck.m"
              return;
            }
#line 1413 "post_typecheck.m"
          }
#line 1412 "post_typecheck.m"
      }
#line 1418 "post_typecheck.m"
    {
#line 1418 "post_typecheck.m"
      check_hlds__post_typecheck__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_45));
#line 1418 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1418 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_76_76, 2) = ((MR_Box) (check_hlds__post_typecheck__ConstructArgs_43));
#line 1418 "post_typecheck.m"
    }
#line 1419 "post_typecheck.m"
    {
#line 1419 "post_typecheck.m"
      check_hlds__post_typecheck__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_77_77, 0) = ((MR_Box) (check_hlds__post_typecheck__TermOutputVar_23));
#line 1419 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_77_77, 1) = ((MR_Box) (check_hlds__post_typecheck__ConstructArgs_43));
#line 1419 "post_typecheck.m"
    }
#line 1417 "post_typecheck.m"
    {
#line 1417 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermOutputVar_23, check_hlds__post_typecheck__V_76_76, check_hlds__post_typecheck__OldGoalInfo_24, check_hlds__post_typecheck__ConstructRestrictNonLocals_44, check_hlds__post_typecheck__V_77_77, check_hlds__post_typecheck__UnifyContext_20, &check_hlds__post_typecheck__ConstructGoal_52);
    }
#line 1422 "post_typecheck.m"
    {
#line 1422 "post_typecheck.m"
      check_hlds__post_typecheck__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_81_81, 0) = ((MR_Box) (check_hlds__post_typecheck__ConstructGoal_52));
#line 1422 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1422 "post_typecheck.m"
    }
#line 1422 "post_typecheck.m"
    {
#line 1422 "post_typecheck.m"
      check_hlds__post_typecheck__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_80_80, 0) = ((MR_Box) (check_hlds__post_typecheck__DeconstructGoal_42));
#line 1422 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_80_80, 1) = ((MR_Box) (check_hlds__post_typecheck__V_81_81));
#line 1422 "post_typecheck.m"
    }
#line 1422 "post_typecheck.m"
    {
#line 1422 "post_typecheck.m"
      check_hlds__post_typecheck__ConjExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1422 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1422 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConjExpr_53, 2) = ((MR_Box) (check_hlds__post_typecheck__V_80_80));
#line 1422 "post_typecheck.m"
    }
#line 1423 "post_typecheck.m"
    {
#line 1423 "post_typecheck.m"
      check_hlds__post_typecheck__Conj_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Conj_54, 0) = ((MR_Box) (check_hlds__post_typecheck__ConjExpr_53));
#line 1423 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Conj_54, 1) = ((MR_Box) (check_hlds__post_typecheck__OldGoalInfo_24));
#line 1423 "post_typecheck.m"
    }
#line 1427 "post_typecheck.m"
    {
#line 1427 "post_typecheck.m"
      MR_Word base;
#line 1427 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "post_typecheck.m"
      *check_hlds__post_typecheck__Goal_25 = base;
#line 1427 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1427 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[84])));
#line 1427 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__post_typecheck__Conj_54));
#line 1427 "post_typecheck.m"
    }
#line 1369 "post_typecheck.m"
  }
#line 1362 "post_typecheck.m"
}

#line 1313 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__translate_get_function_13_p_0(
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_14,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45,
#line 1313 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47,
#line 1313 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49,
#line 1313 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_18,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_19,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldVar_20,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TermInputVar_21,
#line 1313 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__OldGoalInfo_22,
#line 1313 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__GoalExpr_23)
#line 1313 "post_typecheck.m"
{
#line 1319 "post_typecheck.m"
  {
#line 1319 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermType_24;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsId_25;
#line 1319 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__FieldNumber_26;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalId_27;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes0_28;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_29;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_35;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesBeforeField_36;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypesAfterField_38;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsBeforeField_39;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarsAfterField_40;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgVars_41;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RestrictNonLocals_42;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FunctorGoal_43;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_58_58;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeCtor_70;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_71;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeDefn_72;
#line 1319 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TermTypeBody_73;
#line 1347 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 1347 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_37_37;
#line 1360 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_44_44;

#line 1320 "post_typecheck.m"
    {
#line 1320 "post_typecheck.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, check_hlds__post_typecheck__TermInputVar_21, &check_hlds__post_typecheck__TermType_24);
    }
#line 1541 "post_typecheck.m"
    {
#line 1541 "post_typecheck.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TermType_24, &check_hlds__post_typecheck__TermTypeCtor_70);
    }
#line 1542 "post_typecheck.m"
    {
#line 1542 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_14, &check_hlds__post_typecheck__TypeTable_71);
    }
#line 1543 "post_typecheck.m"
    {
#line 1543 "post_typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_71, check_hlds__post_typecheck__TermTypeCtor_70, &check_hlds__post_typecheck__TermTypeDefn_72);
    }
#line 1544 "post_typecheck.m"
    {
#line 1544 "post_typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__post_typecheck__TermTypeDefn_72, &check_hlds__post_typecheck__TermTypeBody_73);
    }
#line 1550 "post_typecheck.m"
#line 1550 "post_typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__post_typecheck__TermTypeBody_73)) {
#line 1550 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1550 "post_typecheck.m"
      case (MR_Integer) 0:
#line 1555 "post_typecheck.m"
        {
#line 1556 "post_typecheck.m"
          {
#line 1556 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1556 "post_typecheck.m"
            return;
          }
#line 1555 "post_typecheck.m"
        }
#line 1550 "post_typecheck.m"
        break;
#line 1550 "post_typecheck.m"
      case (MR_Integer) 1:
#line 1546 "post_typecheck.m"
        {
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Ctors_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 0)));
#line 1546 "post_typecheck.m"
          MR_String check_hlds__post_typecheck__FieldName_83;
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 1)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 2)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 3)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 4)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 5)));
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1546 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TermTypeBody_73, (MR_Integer) 7)));

#line 1547 "post_typecheck.m"
          {
#line 1547 "post_typecheck.m"
            check_hlds__post_typecheck__FieldName_83 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__FieldName_18);
          }
#line 1548 "post_typecheck.m"
          {
#line 1548 "post_typecheck.m"
            check_hlds__post_typecheck__get_constructor_containing_field_loop_5_p_0(check_hlds__post_typecheck__TermTypeCtor_70, check_hlds__post_typecheck__Ctors_74, check_hlds__post_typecheck__FieldName_83, &check_hlds__post_typecheck__ConsId_25, &check_hlds__post_typecheck__FieldNumber_26);
          }
#line 1546 "post_typecheck.m"
        }
#line 1550 "post_typecheck.m"
        break;
#line 1550 "post_typecheck.m"
      case (MR_Integer) 2:
#line 1555 "post_typecheck.m"
        {
#line 1556 "post_typecheck.m"
          {
#line 1556 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1556 "post_typecheck.m"
            return;
          }
#line 1555 "post_typecheck.m"
        }
#line 1550 "post_typecheck.m"
        break;
#line 1550 "post_typecheck.m"
      case (MR_Integer) 3:
#line 1555 "post_typecheck.m"
        {
#line 1556 "post_typecheck.m"
          {
#line 1556 "post_typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.get_constructor_containing_field\'/5", (MR_String) "not du type");
#line 1556 "post_typecheck.m"
            return;
          }
#line 1555 "post_typecheck.m"
        }
#line 1550 "post_typecheck.m"
        break;
#line 1550 "post_typecheck.m"
    }
#line 1324 "post_typecheck.m"
    {
#line 1324 "post_typecheck.m"
      check_hlds__post_typecheck__GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__OldGoalInfo_22);
    }
#line 1325 "post_typecheck.m"
    {
#line 1325 "post_typecheck.m"
      check_hlds__post_typecheck__get_cons_id_arg_types_adding_existq_tvars_8_p_0(check_hlds__post_typecheck__ModuleInfo_14, check_hlds__post_typecheck__GoalId_27, check_hlds__post_typecheck__ConsId_25, check_hlds__post_typecheck__TermType_24, &check_hlds__post_typecheck__ArgTypes0_28, &check_hlds__post_typecheck__ExistQVars_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_45, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_46);
    }
#line 1342 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ExistQVars_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1344 "post_typecheck.m"
      check_hlds__post_typecheck__ArgTypes_35 = check_hlds__post_typecheck__ArgTypes0_28;
#line 1342 "post_typecheck.m"
    else
#line 1337 "post_typecheck.m"
      {
#line 1337 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldType_32;
#line 1337 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldArgType_33;
#line 1337 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__FieldSubst_34;
#line 1339 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv0_FieldArgType_33;

#line 1338 "post_typecheck.m"
        {
#line 1338 "post_typecheck.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, check_hlds__post_typecheck__FieldVar_20, &check_hlds__post_typecheck__FieldType_32);
        }
#line 1339 "post_typecheck.m"
        {
#line 1339 "post_typecheck.m"
          mercury__list__det_index1_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__ArgTypes0_28, check_hlds__post_typecheck__FieldNumber_26, &check_hlds__post_typecheck__conv0_FieldArgType_33);
        }
#line 1339 "post_typecheck.m"
        check_hlds__post_typecheck__FieldArgType_33 = ((MR_Word) check_hlds__post_typecheck__conv0_FieldArgType_33);
#line 1340 "post_typecheck.m"
        {
#line 1340 "post_typecheck.m"
          parse_tree__prog_type__type_subsumes_det_3_p_0(check_hlds__post_typecheck__FieldArgType_33, check_hlds__post_typecheck__FieldType_32, &check_hlds__post_typecheck__FieldSubst_34);
        }
#line 1341 "post_typecheck.m"
        {
#line 1341 "post_typecheck.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__post_typecheck__FieldSubst_34, check_hlds__post_typecheck__ArgTypes0_28, &check_hlds__post_typecheck__ArgTypes_35);
        }
#line 1337 "post_typecheck.m"
      }
#line 1347 "post_typecheck.m"
    {
#line 1347 "post_typecheck.m"
      check_hlds__post_typecheck__split_list_at_index_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__post_typecheck__FieldNumber_26, check_hlds__post_typecheck__ArgTypes_35, &check_hlds__post_typecheck__TypesBeforeField_36, &check_hlds__post_typecheck__conv1_V_37_37, &check_hlds__post_typecheck__TypesAfterField_38);
    }
#line 1347 "post_typecheck.m"
    check_hlds__post_typecheck__V_37_37 = ((MR_Word) check_hlds__post_typecheck__conv1_V_37_37);
#line 1350 "post_typecheck.m"
    {
#line 1350 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesBeforeField_36, &check_hlds__post_typecheck__VarsBeforeField_39, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_47, &check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_49, &check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53);
    }
#line 1351 "post_typecheck.m"
    {
#line 1351 "post_typecheck.m"
      check_hlds__post_typecheck__make_new_vars_6_p_0(check_hlds__post_typecheck__TypesAfterField_38, &check_hlds__post_typecheck__VarsAfterField_40, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_52_52, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_48, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_53_53, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_50);
    }
#line 1353 "post_typecheck.m"
    {
#line 1353 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_20));
#line 1353 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (check_hlds__post_typecheck__VarsAfterField_40));
#line 1353 "post_typecheck.m"
    }
#line 1353 "post_typecheck.m"
    {
#line 1353 "post_typecheck.m"
      check_hlds__post_typecheck__ArgVars_41 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[1], check_hlds__post_typecheck__VarsBeforeField_39, check_hlds__post_typecheck__V_56_56);
    }
#line 1355 "post_typecheck.m"
    {
#line 1355 "post_typecheck.m"
      check_hlds__post_typecheck__RestrictNonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__post_typecheck__OldGoalInfo_22);
    }
#line 1357 "post_typecheck.m"
    {
#line 1357 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_25));
#line 1357 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1357 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_41));
#line 1357 "post_typecheck.m"
    }
#line 1358 "post_typecheck.m"
    {
#line 1358 "post_typecheck.m"
      check_hlds__post_typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__post_typecheck__TermInputVar_21));
#line 1358 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1358 "post_typecheck.m"
    }
#line 1358 "post_typecheck.m"
    {
#line 1358 "post_typecheck.m"
      check_hlds__post_typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__post_typecheck__FieldVar_20));
#line 1358 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 1) = ((MR_Box) (check_hlds__post_typecheck__V_60_60));
#line 1358 "post_typecheck.m"
    }
#line 1356 "post_typecheck.m"
    {
#line 1356 "post_typecheck.m"
      check_hlds__post_typecheck__create_pure_atomic_unification_with_nonlocals_7_p_0(check_hlds__post_typecheck__TermInputVar_21, check_hlds__post_typecheck__V_57_57, check_hlds__post_typecheck__OldGoalInfo_22, check_hlds__post_typecheck__RestrictNonLocals_42, check_hlds__post_typecheck__V_58_58, check_hlds__post_typecheck__UnifyContext_19, &check_hlds__post_typecheck__FunctorGoal_43);
    }
#line 1360 "post_typecheck.m"
    *check_hlds__post_typecheck__GoalExpr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FunctorGoal_43, (MR_Integer) 0)));
#line 1360 "post_typecheck.m"
    check_hlds__post_typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FunctorGoal_43, (MR_Integer) 1)));
#line 1319 "post_typecheck.m"
  }
#line 1313 "post_typecheck.m"
}

#line 1291 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__finish_field_access_function_14_p_0(
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_15,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29,
#line 1291 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31,
#line 1291 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33,
#line 1291 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__AccessType_19,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__FieldName_20,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_21,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_22,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args_23,
#line 1291 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo_24,
#line 1291 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__14_14)
#line 1291 "post_typecheck.m"
{
#line 1299 "post_typecheck.m"
  {
#line 1299 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1299 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr_25;

#line 1305 "post_typecheck.m"
#line 1305 "post_typecheck.m"
    switch (check_hlds__post_typecheck__AccessType_19) {
#line 1305 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1305 "post_typecheck.m"
      case (MR_Integer) 0:
#line 1301 "post_typecheck.m"
        {
#line 1301 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TermVar_26;

#line 1302 "post_typecheck.m"
          {
#line 1302 "post_typecheck.m"
            hlds__hlds_pred__field_extraction_function_args_2_p_0(check_hlds__post_typecheck__Args_23, &check_hlds__post_typecheck__TermVar_26);
          }
#line 1303 "post_typecheck.m"
          {
#line 1303 "post_typecheck.m"
            check_hlds__post_typecheck__translate_get_function_13_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34, check_hlds__post_typecheck__FieldName_20, check_hlds__post_typecheck__UnifyContext_21, check_hlds__post_typecheck__Var_22, check_hlds__post_typecheck__TermVar_26, check_hlds__post_typecheck__GoalInfo_24, &check_hlds__post_typecheck__GoalExpr_25);
          }
#line 1301 "post_typecheck.m"
        }
#line 1305 "post_typecheck.m"
        break;
#line 1305 "post_typecheck.m"
      case (MR_Integer) 1:
#line 1306 "post_typecheck.m"
        {
#line 1306 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TermInputVar_27;
#line 1306 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__FieldVar_28;

#line 1307 "post_typecheck.m"
          {
#line 1307 "post_typecheck.m"
            hlds__hlds_pred__field_update_function_args_3_p_0(check_hlds__post_typecheck__Args_23, &check_hlds__post_typecheck__TermInputVar_27, &check_hlds__post_typecheck__FieldVar_28);
          }
#line 1308 "post_typecheck.m"
          {
#line 1308 "post_typecheck.m"
            check_hlds__post_typecheck__translate_set_function_14_p_0(check_hlds__post_typecheck__ModuleInfo_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_30, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_31, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_32, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_33, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_34, check_hlds__post_typecheck__FieldName_20, check_hlds__post_typecheck__UnifyContext_21, check_hlds__post_typecheck__FieldVar_28, check_hlds__post_typecheck__TermInputVar_27, check_hlds__post_typecheck__Var_22, check_hlds__post_typecheck__GoalInfo_24, &check_hlds__post_typecheck__GoalExpr_25);
          }
#line 1306 "post_typecheck.m"
        }
#line 1305 "post_typecheck.m"
        break;
#line 1305 "post_typecheck.m"
    }
#line 1299 "post_typecheck.m"
    {
#line 1299 "post_typecheck.m"
      MR_Word base;
#line 1299 "post_typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "post_typecheck.m"
      *check_hlds__post_typecheck__HeadVar__14_14 = base;
#line 1299 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_25));
#line 1299 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo_24));
#line 1299 "post_typecheck.m"
    }
#line 1299 "post_typecheck.m"
  }
#line 1291 "post_typecheck.m"
}

#line 1277 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0_1(
#line 1277 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1277 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 1277 "post_typecheck.m"
{
#line 1277 "post_typecheck.m"
  {
#line 1277 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 1277 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1277 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_LambdaHeadVar__2_32;

#line 1277 "post_typecheck.m"
    {
#line 1277 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_LambdaHeadVar__2_32 = check_hlds__post_typecheck__IntroducedFrom__func__find_matching_constructor__1277__1_1_f_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 1277 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_LambdaHeadVar__2_32));
#line 1277 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 1277 "post_typecheck.m"
  }
#line 1277 "post_typecheck.m"
}

#line 1261 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__find_matching_constructor_5_p_0(
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_7,
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId_8,
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Type_9,
#line 1261 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_10)
#line 1261 "post_typecheck.m"
{
#line 1264 "post_typecheck.m"
  {
#line 1264 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_37_37;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_38_38;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtor_11;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsTable_12;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsDefn_13;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsExistQVars_18;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgs_20;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_22;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeDefn_23;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTVarSet_24;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeKindMap_25;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConsArgTypes_26;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ExistQVars_28;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadTypeParams_29;
#line 1264 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_30_30;
#line 1270 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_14_14;
#line 1270 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_15_15;
#line 1270 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_16_16;
#line 1270 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_17_17;
#line 1270 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 1270 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;

#line 1265 "post_typecheck.m"
    {
#line 1265 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__post_typecheck__Type_9, &check_hlds__post_typecheck__TypeCtor_11);
    }
#line 1264 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1264 "post_typecheck.m"
      {
#line 1266 "post_typecheck.m"
        {
#line 1266 "post_typecheck.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__ConsTable_12);
        }
#line 1267 "post_typecheck.m"
        {
#line 1267 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__post_typecheck__ConsTable_12, check_hlds__post_typecheck__TypeCtor_11, check_hlds__post_typecheck__ConsId_8, &check_hlds__post_typecheck__ConsDefn_13);
        }
#line 1264 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1264 "post_typecheck.m"
          {
#line 1270 "post_typecheck.m"
            check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 0)));
#line 1270 "post_typecheck.m"
            check_hlds__post_typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 1)));
#line 1270 "post_typecheck.m"
            check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 2)));
#line 1270 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 3)));
#line 1270 "post_typecheck.m"
            check_hlds__post_typecheck__ConsExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 4)));
#line 1270 "post_typecheck.m"
            check_hlds__post_typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 5)));
#line 1270 "post_typecheck.m"
            check_hlds__post_typecheck__ConsArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 6)));
#line 1270 "post_typecheck.m"
            check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConsDefn_13, (MR_Integer) 7)));
#line 1272 "post_typecheck.m"
            {
#line 1272 "post_typecheck.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__TypeTable_22);
            }
#line 1273 "post_typecheck.m"
            {
#line 1273 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_22, check_hlds__post_typecheck__TypeCtor_11, &check_hlds__post_typecheck__TypeDefn_23);
            }
#line 1264 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1264 "post_typecheck.m"
              {
#line 1274 "post_typecheck.m"
                {
#line 1274 "post_typecheck.m"
                  hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeTVarSet_24);
                }
#line 1275 "post_typecheck.m"
                {
#line 1275 "post_typecheck.m"
                  hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeKindMap_25);
                }
#line 5175 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 5177 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1277 "post_typecheck.m"
                check_hlds__post_typecheck__V_30_30 = (MR_Word) &check_hlds__post_typecheck_scalar_common_2[6];
#line 1277 "post_typecheck.m"
                {
#line 1277 "post_typecheck.m"
                  check_hlds__post_typecheck__ConsArgTypes_26 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_37_37, check_hlds__post_typecheck__TypeCtorInfo_38_38, check_hlds__post_typecheck__V_30_30, check_hlds__post_typecheck__ConsArgs_20);
                }
#line 1279 "post_typecheck.m"
                check_hlds__post_typecheck__ExistQVars_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1280 "post_typecheck.m"
                check_hlds__post_typecheck__HeadTypeParams_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1281 "post_typecheck.m"
                {
#line 1281 "post_typecheck.m"
                  return check_hlds__post_typecheck__succeeded = parse_tree__prog_type__arg_type_list_subsumes_8_p_0(check_hlds__post_typecheck__TVarSet_7, check_hlds__post_typecheck__ExistQVars_28, check_hlds__post_typecheck__ArgTypes_10, check_hlds__post_typecheck__HeadTypeParams_29, check_hlds__post_typecheck__TypeTVarSet_24, check_hlds__post_typecheck__TypeKindMap_25, check_hlds__post_typecheck__ConsExistQVars_18, check_hlds__post_typecheck__ConsArgTypes_26);
                }
#line 1264 "post_typecheck.m"
              }
#line 1264 "post_typecheck.m"
          }
#line 1264 "post_typecheck.m"
      }
#line 1264 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 1264 "post_typecheck.m"
  }
#line 1261 "post_typecheck.m"
}

#line 997 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 997 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId1_3,
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__4_4,
#line 997 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__5_5,
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6,
#line 997 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7,
#line 997 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8,
#line 997 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_9)
#line 997 "post_typecheck.m"
{
#line 1002 "post_typecheck.m"
  while (MR_TRUE)
#line 1002 "post_typecheck.m"
    {
#line 1002 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 1002 "post_typecheck.m"
      {
#line 1002 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 1002 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "post_typecheck.m"
          {
#line 1002 "post_typecheck.m"
            *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 0;
#line 1002 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8;
#line 1002 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6;
#line 1002 "post_typecheck.m"
          }
#line 1002 "post_typecheck.m"
        else
#line 1004 "post_typecheck.m"
          {
#line 1004 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 1004 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, (MR_Integer) 1)));

#line 1006 "post_typecheck.m"
            {
#line 1006 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = check_hlds__modecheck_call__modes_are_indistinguishable_4_p_0(check_hlds__post_typecheck__ProcId_22, check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, check_hlds__post_typecheck__ModuleInfo_1);
            }
#line 1039 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1008 "post_typecheck.m"
              {
#line 1008 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Status_27;
#line 1008 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Globals_28;
#line 1008 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IntermodOpt_29;
#line 1008 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IntermodAnalysis_30;
#line 1008 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__MakeOptInt_31;

#line 1008 "post_typecheck.m"
                {
#line 1008 "post_typecheck.m"
                  hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, &check_hlds__post_typecheck__Status_27);
                }
#line 1009 "post_typecheck.m"
                {
#line 1009 "post_typecheck.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__post_typecheck__ModuleInfo_1, &check_hlds__post_typecheck__Globals_28);
                }
#line 1010 "post_typecheck.m"
                {
#line 1010 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 320, &check_hlds__post_typecheck__IntermodOpt_29);
                }
#line 1012 "post_typecheck.m"
                {
#line 1012 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 325, &check_hlds__post_typecheck__IntermodAnalysis_30);
                }
#line 1014 "post_typecheck.m"
                {
#line 1014 "post_typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__post_typecheck__Globals_28, (MR_Integer) 86, &check_hlds__post_typecheck__MakeOptInt_31);
                }
#line 1021 "post_typecheck.m"
                {
#line 1021 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_40_40;

#line 1021 "post_typecheck.m"
                  {
#line 1021 "post_typecheck.m"
                    check_hlds__post_typecheck__V_40_40 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__post_typecheck__Status_27);
                  }
#line 1021 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_40_40 == (MR_Integer) 1);
#line 1021 "post_typecheck.m"
                }
#line 1022 "post_typecheck.m"
                if (!(check_hlds__post_typecheck__succeeded))
#line 1022 "post_typecheck.m"
                  {
#line 1023 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__IntermodOpt_29 == (MR_Integer) 0);
#line 1023 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1024 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__IntermodAnalysis_30 == (MR_Integer) 0);
#line 1022 "post_typecheck.m"
                    if (!(check_hlds__post_typecheck__succeeded))
#line 1026 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__MakeOptInt_31 == (MR_Integer) 1);
#line 1022 "post_typecheck.m"
                  }
#line 1034 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1032 "post_typecheck.m"
                  {
#line 1032 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Spec_32;

#line 1031 "post_typecheck.m"
                    {
#line 1031 "post_typecheck.m"
                      check_hlds__post_typecheck__Spec_32 = check_hlds__mode_errors__report_indistinguishable_modes_error_5_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__ProcId_22, check_hlds__post_typecheck__PredId_2, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6);
                    }
#line 1033 "post_typecheck.m"
                    {
#line 1033 "post_typecheck.m"
                      MR_Word base;
#line 1033 "post_typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "post_typecheck.m"
                      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = base;
#line 1033 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_32));
#line 1033 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8));
#line 1033 "post_typecheck.m"
                    }
#line 1032 "post_typecheck.m"
                  }
#line 1034 "post_typecheck.m"
                else
#line 1034 "post_typecheck.m"
                  *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8;
#line 1037 "post_typecheck.m"
                {
#line 1037 "post_typecheck.m"
                  hlds__hlds_pred__pred_info_remove_procid_3_p_0(check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7);
                }
#line 1038 "post_typecheck.m"
                *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 1;
#line 1008 "post_typecheck.m"
              }
#line 1039 "post_typecheck.m"
            else
#line 1040 "post_typecheck.m"
              {
#line 1040 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 1040 "post_typecheck.m"
                {
#line 1040 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__4__tmp_copy_4 = check_hlds__post_typecheck__ProcIds_23;

#line 1040 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__4_4 = check_hlds__post_typecheck__HeadVar__4__tmp_copy_4;
#line 1040 "post_typecheck.m"
                }
#line 1040 "post_typecheck.m"
                continue;
#line 1040 "post_typecheck.m"
              }
#line 1004 "post_typecheck.m"
          }
#line 1002 "post_typecheck.m"
      }
#line 1002 "post_typecheck.m"
      break;
#line 1002 "post_typecheck.m"
    }
#line 997 "post_typecheck.m"
}

#line 977 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_2,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PrevProcIds_4,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5,
#line 977 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6,
#line 977 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7,
#line 977 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_8)
#line 977 "post_typecheck.m"
{
#line 982 "post_typecheck.m"
  while (MR_TRUE)
#line 982 "post_typecheck.m"
    {
#line 982 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 982 "post_typecheck.m"
      {
#line 982 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 982 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 982 "post_typecheck.m"
          {
#line 982 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Specs_8 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7;
#line 982 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5;
#line 982 "post_typecheck.m"
          }
#line 982 "post_typecheck.m"
        else
#line 984 "post_typecheck.m"
          {
#line 984 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 984 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 984 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Removed_25;
#line 984 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PrevProcIds1_26;
#line 984 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31;
#line 984 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32;

#line 985 "post_typecheck.m"
            {
#line 985 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__PredId_2, check_hlds__post_typecheck__ProcId_20, check_hlds__post_typecheck__PrevProcIds_4, &check_hlds__post_typecheck__Removed_25, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32);
            }
#line 990 "post_typecheck.m"
#line 990 "post_typecheck.m"
            switch (check_hlds__post_typecheck__Removed_25) {
#line 990 "post_typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 990 "post_typecheck.m"
              case (MR_Integer) 0:
#line 992 "post_typecheck.m"
                {
#line 992 "post_typecheck.m"
                  check_hlds__post_typecheck__PrevProcIds1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PrevProcIds1_26, 0) = ((MR_Box) (check_hlds__post_typecheck__ProcId_20));
#line 992 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PrevProcIds1_26, 1) = ((MR_Box) (check_hlds__post_typecheck__PrevProcIds_4));
#line 992 "post_typecheck.m"
                }
#line 990 "post_typecheck.m"
                break;
#line 990 "post_typecheck.m"
              case (MR_Integer) 1:
#line 989 "post_typecheck.m"
                check_hlds__post_typecheck__PrevProcIds1_26 = check_hlds__post_typecheck__PrevProcIds_4;
#line 990 "post_typecheck.m"
                break;
#line 990 "post_typecheck.m"
            }
#line 994 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 994 "post_typecheck.m"
            {
#line 994 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__3__tmp_copy_3 = check_hlds__post_typecheck__ProcIds_21;
#line 994 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PrevProcIds__tmp_copy_4 = check_hlds__post_typecheck__PrevProcIds1_26;
#line 994 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0__tmp_copy_5 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31;
#line 994 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32;

#line 994 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 994 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0__tmp_copy_5;
#line 994 "post_typecheck.m"
              check_hlds__post_typecheck__PrevProcIds_4 = check_hlds__post_typecheck__PrevProcIds__tmp_copy_4;
#line 994 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__3_3 = check_hlds__post_typecheck__HeadVar__3__tmp_copy_3;
#line 994 "post_typecheck.m"
            }
#line 994 "post_typecheck.m"
            continue;
#line 984 "post_typecheck.m"
          }
#line 982 "post_typecheck.m"
      }
#line 982 "post_typecheck.m"
      break;
#line 982 "post_typecheck.m"
    }
#line 977 "post_typecheck.m"
}

#line 934 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
#line 934 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 934 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 934 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__ProcId_10,
#line 934 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Procs0_11,
#line 934 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Procs_12,
#line 934 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20,
#line 934 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_21)
#line 934 "post_typecheck.m"
{
#line 939 "post_typecheck.m"
  {
#line 939 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_61_61;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcInfo_14;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_16;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_17;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_18;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_33_33;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_51_51;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_52_52;
#line 939 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 940 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_ProcInfo_14;
#line 951 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_19_19;
#line 951 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_19_19;

#line 940 "post_typecheck.m"
    {
#line 940 "post_typecheck.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_60_60, check_hlds__post_typecheck__Procs0_11, check_hlds__post_typecheck__ProcId_10, &check_hlds__post_typecheck__conv0_ProcInfo_14);
    }
#line 940 "post_typecheck.m"
    check_hlds__post_typecheck__ProcInfo_14 = ((MR_Word) check_hlds__post_typecheck__conv0_ProcInfo_14);
#line 941 "post_typecheck.m"
    {
#line 941 "post_typecheck.m"
      hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__post_typecheck__ProcInfo_14, &check_hlds__post_typecheck__Context_15);
    }
#line 5602 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 943 "post_typecheck.m"
    {
#line 943 "post_typecheck.m"
      check_hlds__post_typecheck__V_33_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_8, (MR_Integer) 1, check_hlds__post_typecheck__PredId_9);
    }
#line 944 "post_typecheck.m"
    {
#line 944 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_61_61, check_hlds__post_typecheck__V_33_33, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[54]));
    }
#line 942 "post_typecheck.m"
    {
#line 942 "post_typecheck.m"
      check_hlds__post_typecheck__Pieces_16 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_61_61, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[47]), check_hlds__post_typecheck__V_32_32);
    }
#line 947 "post_typecheck.m"
    {
#line 947 "post_typecheck.m"
      check_hlds__post_typecheck__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 947 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_52_52, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_16));
#line 947 "post_typecheck.m"
    }
#line 947 "post_typecheck.m"
    {
#line 947 "post_typecheck.m"
      check_hlds__post_typecheck__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_51_51, 0) = ((MR_Box) (check_hlds__post_typecheck__V_52_52));
#line 947 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "post_typecheck.m"
    }
#line 947 "post_typecheck.m"
    {
#line 947 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 947 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_15));
#line 947 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_51_51));
#line 947 "post_typecheck.m"
    }
#line 948 "post_typecheck.m"
    {
#line 948 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_17));
#line 948 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "post_typecheck.m"
    }
#line 948 "post_typecheck.m"
    {
#line 948 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 948 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 948 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 2) = ((MR_Box) (check_hlds__post_typecheck__V_56_56));
#line 948 "post_typecheck.m"
    }
#line 949 "post_typecheck.m"
    {
#line 949 "post_typecheck.m"
      MR_Word base;
#line 949 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_21 = base;
#line 949 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_18));
#line 949 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20));
#line 949 "post_typecheck.m"
    }
#line 951 "post_typecheck.m"
    {
#line 951 "post_typecheck.m"
      mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__TypeCtorInfo_60_60, ((MR_Box) (check_hlds__post_typecheck__ProcId_10)), &check_hlds__post_typecheck__conv1_V_19_19, check_hlds__post_typecheck__Procs0_11, check_hlds__post_typecheck__Procs_12);
    }
#line 951 "post_typecheck.m"
    check_hlds__post_typecheck__V_19_19 = ((MR_Word) check_hlds__post_typecheck__conv1_V_19_19);
#line 939 "post_typecheck.m"
  }
#line 934 "post_typecheck.m"
}

#line 929 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 929 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 929 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5)
#line 929 "post_typecheck.m"
{
#line 929 "post_typecheck.m"
  {
#line 929 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 929 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_Procs_12;
#line 929 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21;

#line 929 "post_typecheck.m"
    {
#line 929 "post_typecheck.m"
      check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv1_Procs_12, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_4), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21);
    }
#line 929 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv1_Procs_12));
#line 929 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21));
#line 929 "post_typecheck.m"
  }
#line 929 "post_typecheck.m"
}

#line 918 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ErrorProcIds_10,
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17,
#line 918 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18,
#line 918 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
#line 918 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20)
#line 918 "post_typecheck.m"
{
#line 925 "post_typecheck.m"
  {
#line 925 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 925 "post_typecheck.m"
    if ((check_hlds__post_typecheck__ErrorProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "post_typecheck.m"
      {
#line 925 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17;
#line 925 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
#line 925 "post_typecheck.m"
      }
#line 925 "post_typecheck.m"
    else
#line 927 "post_typecheck.m"
      {
#line 927 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProcTable0_15;
#line 927 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProcTable_16;
#line 927 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_21_21;
#line 929 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv3_ProcTable_16;
#line 929 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20;

#line 928 "post_typecheck.m"
        {
#line 928 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17, &check_hlds__post_typecheck__ProcTable0_15);
        }
#line 929 "post_typecheck.m"
        {
#line 929 "post_typecheck.m"
          check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 929 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
#line 929 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1));
#line 929 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 929 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 3) = ((MR_Box) (check_hlds__post_typecheck__ModuleInfo_8));
#line 929 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 4) = ((MR_Box) (check_hlds__post_typecheck__PredId_9));
#line 929 "post_typecheck.m"
        }
#line 929 "post_typecheck.m"
        {
#line 929 "post_typecheck.m"
          mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[3], (MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], check_hlds__post_typecheck__V_21_21, check_hlds__post_typecheck__ErrorProcIds_10, ((MR_Box) (check_hlds__post_typecheck__ProcTable0_15)), &check_hlds__post_typecheck__conv3_ProcTable_16, ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19)), &check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20);
        }
#line 929 "post_typecheck.m"
        check_hlds__post_typecheck__ProcTable_16 = ((MR_Word) check_hlds__post_typecheck__conv3_ProcTable_16);
#line 929 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = ((MR_Word) check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20);
#line 931 "post_typecheck.m"
        {
#line 931 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__ProcTable_16, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18);
#line 931 "post_typecheck.m"
          return;
        }
#line 927 "post_typecheck.m"
      }
#line 925 "post_typecheck.m"
  }
#line 918 "post_typecheck.m"
}

#line 909 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
#line 909 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 909 "post_typecheck.m"
{
#line 909 "post_typecheck.m"
  {
#line 909 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 909 "post_typecheck.m"
    MR_builtin_longjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0, 1);
#line 909 "post_typecheck.m"
  }
#line 909 "post_typecheck.m"
}

#line 909 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
#line 909 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 909 "post_typecheck.m"
{
#line 909 "post_typecheck.m"
  {
#line 909 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 909 "post_typecheck.m"
    if (MR_builtin_setjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0) == 0)
#line 909 "post_typecheck.m"
      {
#line 909 "post_typecheck.m"
        {
#line 909 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck___InstVar_25;

#line 909 "post_typecheck.m"
          {
#line 909 "post_typecheck.m"
            check_hlds__inst_match__mode_list_contains_inst_var_3_p_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1, &check_hlds__post_typecheck___InstVar_25, check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1, check_hlds__post_typecheck__env_ptr);
          }
#line 909 "post_typecheck.m"
        }
#line 909 "post_typecheck.m"
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_FALSE;
#line 909 "post_typecheck.m"
      }
#line 909 "post_typecheck.m"
    else
#line 909 "post_typecheck.m"
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_TRUE;
#line 909 "post_typecheck.m"
  }
#line 909 "post_typecheck.m"
}

#line 894 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgTypes_3,
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4,
#line 894 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5,
#line 894 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6,
#line 894 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Procs_7)
#line 894 "post_typecheck.m"
{
#line 894 "post_typecheck.m"
  {
#line 894 "post_typecheck.m"
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s check_hlds__post_typecheck__env;

#line 894 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1 = check_hlds__post_typecheck__ModuleInfo_1;
#line 898 "post_typecheck.m"
    while (MR_TRUE)
#line 898 "post_typecheck.m"
      {
#line 898 "post_typecheck.m"
        /* tailcall optimized into a loop */
#line 898 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "post_typecheck.m"
          {
#line 898 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_Procs_7 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6;
#line 898 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4;
#line 898 "post_typecheck.m"
          }
#line 898 "post_typecheck.m"
        else
#line 900 "post_typecheck.m"
          {
#line 900 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 900 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 900 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 900 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcInfo0_22;
#line 900 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgModes0_23;
#line 900 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31;
#line 900 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32;
#line 901 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv0_ProcInfo0_22;

#line 901 "post_typecheck.m"
            {
#line 901 "post_typecheck.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_36_36, check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6, check_hlds__post_typecheck__ProcId_17, &check_hlds__post_typecheck__conv0_ProcInfo0_22);
            }
#line 901 "post_typecheck.m"
            check_hlds__post_typecheck__ProcInfo0_22 = ((MR_Word) check_hlds__post_typecheck__conv0_ProcInfo0_22);
#line 902 "post_typecheck.m"
            {
#line 902 "post_typecheck.m"
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__post_typecheck__ProcInfo0_22, &check_hlds__post_typecheck__ArgModes0_23);
            }
#line 903 "post_typecheck.m"
            {
#line 903 "post_typecheck.m"
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ModuleInfo_1, check_hlds__post_typecheck__ArgTypes_3, check_hlds__post_typecheck__ArgModes0_23, &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24);
            }
#line 909 "post_typecheck.m"
            {
#line 909 "post_typecheck.m"
              check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(&check_hlds__post_typecheck__env);
            }
#line 911 "post_typecheck.m"
            if ((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded)
#line 910 "post_typecheck.m"
              {
#line 910 "post_typecheck.m"
                {
#line 910 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31, 0) = ((MR_Box) (check_hlds__post_typecheck__ProcId_17));
#line 910 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4));
#line 910 "post_typecheck.m"
                }
#line 910 "post_typecheck.m"
                check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6;
#line 910 "post_typecheck.m"
              }
#line 911 "post_typecheck.m"
            else
#line 912 "post_typecheck.m"
              {
#line 912 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ProcInfo_26;

#line 912 "post_typecheck.m"
                {
#line 912 "post_typecheck.m"
                  hlds__hlds_pred__proc_info_set_argmodes_3_p_0((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, check_hlds__post_typecheck__ProcInfo0_22, &check_hlds__post_typecheck__ProcInfo_26);
                }
#line 913 "post_typecheck.m"
                {
#line 913 "post_typecheck.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__post_typecheck__TypeCtorInfo_36_36, check_hlds__post_typecheck__ProcId_17, ((MR_Box) (check_hlds__post_typecheck__ProcInfo_26)), check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6, &check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32);
                }
#line 912 "post_typecheck.m"
                check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4;
#line 912 "post_typecheck.m"
              }
#line 915 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 915 "post_typecheck.m"
            {
#line 915 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__ProcIds_18;
#line 915 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31;
#line 915 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0__tmp_copy_6 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32;

#line 915 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0__tmp_copy_6;
#line 915 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0__tmp_copy_4;
#line 915 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
#line 915 "post_typecheck.m"
            }
#line 915 "post_typecheck.m"
            continue;
#line 900 "post_typecheck.m"
          }
#line 898 "post_typecheck.m"
        break;
#line 898 "post_typecheck.m"
      }
#line 894 "post_typecheck.m"
  }
#line 894 "post_typecheck.m"
}

#line 845 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
#line 845 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 845 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13,
#line 845 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_14)
#line 845 "post_typecheck.m"
{
#line 871 "post_typecheck.m"
  {
#line 871 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 851 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_15_15;
#line 851 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_16_16;

#line 851 "post_typecheck.m"
    {
#line 851 "post_typecheck.m"
      check_hlds__post_typecheck__V_15_15 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PredInfo_4);
    }
#line 851 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__V_15_15, (MR_String) "main") == 0);
#line 851 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 851 "post_typecheck.m"
      {
#line 852 "post_typecheck.m"
        {
#line 852 "post_typecheck.m"
          check_hlds__post_typecheck__V_16_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__PredInfo_4);
        }
#line 852 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_16_16 == (MR_Integer) 2);
#line 851 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 853 "post_typecheck.m"
          {
#line 853 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__post_typecheck__PredInfo_4);
          }
#line 851 "post_typecheck.m"
      }
#line 871 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 856 "post_typecheck.m"
      {
#line 856 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_6;
#line 858 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Arg1_7;
#line 858 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Arg2_8;
#line 858 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_17_17;
#line 858 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_18_18;

#line 856 "post_typecheck.m"
        {
#line 856 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ArgTypes_6);
        }
#line 858 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ArgTypes_6)) == (MR_mktag((MR_Integer) 1)));
#line 858 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 858 "post_typecheck.m"
          {
#line 858 "post_typecheck.m"
            check_hlds__post_typecheck__Arg1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgTypes_6, (MR_Integer) 0)));
#line 858 "post_typecheck.m"
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgTypes_6, (MR_Integer) 1)));
#line 858 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 858 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 858 "post_typecheck.m"
              {
#line 858 "post_typecheck.m"
                check_hlds__post_typecheck__Arg2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, (MR_Integer) 0)));
#line 858 "post_typecheck.m"
                check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, (MR_Integer) 1)));
#line 858 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 858 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 858 "post_typecheck.m"
                  {
#line 859 "post_typecheck.m"
                    {
#line 859 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(check_hlds__post_typecheck__Arg1_7);
                    }
#line 858 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 860 "post_typecheck.m"
                      {
#line 860 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(check_hlds__post_typecheck__Arg2_8);
                      }
#line 858 "post_typecheck.m"
                  }
#line 858 "post_typecheck.m"
              }
#line 858 "post_typecheck.m"
          }
#line 863 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 863 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13;
#line 863 "post_typecheck.m"
        else
#line 864 "post_typecheck.m"
          {
#line 864 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Context_9;
#line 864 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Msg_11;
#line 864 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Spec_12;
#line 864 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_38_38;

#line 864 "post_typecheck.m"
            {
#line 864 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__Context_9);
            }
#line 867 "post_typecheck.m"
            {
#line 867 "post_typecheck.m"
              check_hlds__post_typecheck__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 867 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_11, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_9));
#line 867 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[83])));
#line 867 "post_typecheck.m"
            }
#line 868 "post_typecheck.m"
            {
#line 868 "post_typecheck.m"
              check_hlds__post_typecheck__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_38_38, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_11));
#line 868 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "post_typecheck.m"
            }
#line 868 "post_typecheck.m"
            {
#line 868 "post_typecheck.m"
              check_hlds__post_typecheck__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 868 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 868 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 2) = ((MR_Box) (check_hlds__post_typecheck__V_38_38));
#line 868 "post_typecheck.m"
            }
#line 869 "post_typecheck.m"
            {
#line 869 "post_typecheck.m"
              MR_Word base;
#line 869 "post_typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = base;
#line 869 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_12));
#line 869 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13));
#line 869 "post_typecheck.m"
            }
#line 864 "post_typecheck.m"
          }
#line 856 "post_typecheck.m"
      }
#line 871 "post_typecheck.m"
    else
#line 871 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13;
#line 871 "post_typecheck.m"
  }
#line 845 "post_typecheck.m"
}

#line 824 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(
#line 824 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 824 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_7,
#line 824 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__IdPieces_8,
#line 824 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 824 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16)
#line 824 "post_typecheck.m"
{
#line 828 "post_typecheck.m"
  {
#line 828 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_62_62;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ModuleName_10;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__MainPieces_11;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msgs_13;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_14;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_17_17;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_20_20;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_21_21;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_31_31;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_35_35;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_51_51;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_58_58;
#line 828 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_59_59;

#line 829 "post_typecheck.m"
    {
#line 829 "post_typecheck.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__post_typecheck__ModuleInfo_6, &check_hlds__post_typecheck__ModuleName_10);
    }
#line 6289 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 831 "post_typecheck.m"
    {
#line 831 "post_typecheck.m"
      check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 831 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__post_typecheck__ModuleName_10));
#line 831 "post_typecheck.m"
    }
#line 831 "post_typecheck.m"
    {
#line 831 "post_typecheck.m"
      check_hlds__post_typecheck__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_20_20, 0) = ((MR_Box) (check_hlds__post_typecheck__V_21_21));
#line 831 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[31])));
#line 831 "post_typecheck.m"
    }
#line 831 "post_typecheck.m"
    {
#line 831 "post_typecheck.m"
      check_hlds__post_typecheck__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[79])));
#line 831 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_20_20));
#line 831 "post_typecheck.m"
    }
#line 834 "post_typecheck.m"
    {
#line 834 "post_typecheck.m"
      check_hlds__post_typecheck__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_21_21));
#line 834 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])));
#line 834 "post_typecheck.m"
    }
#line 833 "post_typecheck.m"
    {
#line 833 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[80])));
#line 833 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_32_32, 1) = ((MR_Box) (check_hlds__post_typecheck__V_35_35));
#line 833 "post_typecheck.m"
    }
#line 832 "post_typecheck.m"
    {
#line 832 "post_typecheck.m"
      check_hlds__post_typecheck__V_31_31 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_62_62, check_hlds__post_typecheck__IdPieces_8, check_hlds__post_typecheck__V_32_32);
    }
#line 832 "post_typecheck.m"
    {
#line 832 "post_typecheck.m"
      check_hlds__post_typecheck__MainPieces_11 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_62_62, check_hlds__post_typecheck__V_17_17, check_hlds__post_typecheck__V_31_31);
    }
#line 838 "post_typecheck.m"
    {
#line 838 "post_typecheck.m"
      check_hlds__post_typecheck__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 838 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_51_51, 0) = ((MR_Box) (check_hlds__post_typecheck__MainPieces_11));
#line 838 "post_typecheck.m"
    }
#line 838 "post_typecheck.m"
    {
#line 838 "post_typecheck.m"
      check_hlds__post_typecheck__Msgs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msgs_13, 0) = ((MR_Box) (check_hlds__post_typecheck__V_51_51));
#line 838 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msgs_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[82])));
#line 838 "post_typecheck.m"
    }
#line 840 "post_typecheck.m"
    {
#line 840 "post_typecheck.m"
      check_hlds__post_typecheck__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_59_59, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_7));
#line 840 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_59_59, 1) = ((MR_Box) (check_hlds__post_typecheck__Msgs_13));
#line 840 "post_typecheck.m"
    }
#line 840 "post_typecheck.m"
    {
#line 840 "post_typecheck.m"
      check_hlds__post_typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__post_typecheck__V_59_59));
#line 840 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "post_typecheck.m"
    }
#line 839 "post_typecheck.m"
    {
#line 839 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 839 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 839 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 839 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_14, 2) = ((MR_Box) (check_hlds__post_typecheck__V_58_58));
#line 839 "post_typecheck.m"
    }
#line 841 "post_typecheck.m"
    {
#line 841 "post_typecheck.m"
      MR_Word base;
#line 841 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_16 = base;
#line 841 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_14));
#line 841 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15));
#line 841 "post_typecheck.m"
    }
#line 828 "post_typecheck.m"
  }
#line 824 "post_typecheck.m"
}

#line 813 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_in_interface_promise_goals_5_p_0(
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 813 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4,
#line 813 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_5)
#line 813 "post_typecheck.m"
{
#line 816 "post_typecheck.m"
  while (MR_TRUE)
#line 816 "post_typecheck.m"
    {
#line 816 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 816 "post_typecheck.m"
      {
#line 816 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 816 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 816 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_5 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4;
#line 816 "post_typecheck.m"
        else
#line 818 "post_typecheck.m"
          {
#line 818 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 818 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Goal0s_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 818 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18;

#line 819 "post_typecheck.m"
            {
#line 819 "post_typecheck.m"
              check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(check_hlds__post_typecheck__HeadVar__1_1, check_hlds__post_typecheck__HeadVar__2_2, check_hlds__post_typecheck__Goal0_13, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18);
            }
#line 820 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 820 "post_typecheck.m"
            {
#line 820 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__HeadVar__3__tmp_copy_3 = check_hlds__post_typecheck__Goal0s_14;
#line 820 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_18_18;

#line 820 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 820 "post_typecheck.m"
              check_hlds__post_typecheck__HeadVar__3_3 = check_hlds__post_typecheck__HeadVar__3__tmp_copy_3;
#line 820 "post_typecheck.m"
            }
#line 820 "post_typecheck.m"
            continue;
#line 818 "post_typecheck.m"
          }
#line 816 "post_typecheck.m"
      }
#line 816 "post_typecheck.m"
      break;
#line 816 "post_typecheck.m"
    }
#line 813 "post_typecheck.m"
}

#line 780 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_in_interface_promise_unify_rhs_7_p_0(
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Var_10,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__RHS_11,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 780 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36,
#line 780 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_37)
#line 780 "post_typecheck.m"
{
#line 787 "post_typecheck.m"
  {
#line 787 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 787 "post_typecheck.m"
#line 787 "post_typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__post_typecheck__RHS_11)) {
#line 787 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 787 "post_typecheck.m"
      case (MR_Integer) 0:
#line 787 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_37 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36;
#line 787 "post_typecheck.m"
        break;
#line 787 "post_typecheck.m"
      case (MR_Integer) 1:
#line 789 "post_typecheck.m"
        {
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_11, (MR_Integer) 0)));
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesInfo_18;
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__VarTypes_19;
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Type_20;
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TypeCtor_21;
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TypeTable_22;
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TypeDefn_23;
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__TypeStatus_24;
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__DefinedInImpl_25;
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_11, (MR_Integer) 1)));
#line 789 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_11, (MR_Integer) 2)));

#line 790 "post_typecheck.m"
          {
#line 790 "post_typecheck.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__ClausesInfo_18);
          }
#line 791 "post_typecheck.m"
          {
#line 791 "post_typecheck.m"
            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo_18, &check_hlds__post_typecheck__VarTypes_19);
          }
#line 792 "post_typecheck.m"
          {
#line 792 "post_typecheck.m"
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__VarTypes_19, check_hlds__post_typecheck__Var_10, &check_hlds__post_typecheck__Type_20);
          }
#line 793 "post_typecheck.m"
          {
#line 793 "post_typecheck.m"
            parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__Type_20, &check_hlds__post_typecheck__TypeCtor_21);
          }
#line 794 "post_typecheck.m"
          {
#line 794 "post_typecheck.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__TypeTable_22);
          }
#line 795 "post_typecheck.m"
          {
#line 795 "post_typecheck.m"
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__post_typecheck__TypeTable_22, check_hlds__post_typecheck__TypeCtor_21, &check_hlds__post_typecheck__TypeDefn_23);
          }
#line 796 "post_typecheck.m"
          {
#line 796 "post_typecheck.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__post_typecheck__TypeDefn_23, &check_hlds__post_typecheck__TypeStatus_24);
          }
#line 797 "post_typecheck.m"
          {
#line 797 "post_typecheck.m"
            check_hlds__post_typecheck__DefinedInImpl_25 = hlds__status__type_status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__TypeStatus_24);
          }
#line 803 "post_typecheck.m"
#line 803 "post_typecheck.m"
          switch (check_hlds__post_typecheck__DefinedInImpl_25) {
#line 803 "post_typecheck.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 803 "post_typecheck.m"
            case (MR_Integer) 0:
#line 804 "post_typecheck.m"
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_37 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36;
#line 803 "post_typecheck.m"
              break;
#line 803 "post_typecheck.m"
            case (MR_Integer) 1:
#line 799 "post_typecheck.m"
              {
#line 799 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__IdPieces_26;
#line 799 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_41_41;
#line 799 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_42_42;

#line 800 "post_typecheck.m"
                {
#line 800 "post_typecheck.m"
                  check_hlds__post_typecheck__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 800 "post_typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_42_42, 1) = ((MR_Box) (check_hlds__post_typecheck__ConsId_15));
#line 800 "post_typecheck.m"
                }
#line 800 "post_typecheck.m"
                {
#line 800 "post_typecheck.m"
                  check_hlds__post_typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_41_41, 0) = ((MR_Box) (check_hlds__post_typecheck__V_42_42));
#line 800 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "post_typecheck.m"
                }
#line 800 "post_typecheck.m"
                {
#line 800 "post_typecheck.m"
                  check_hlds__post_typecheck__IdPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[78])));
#line 800 "post_typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_26, 1) = ((MR_Box) (check_hlds__post_typecheck__V_41_41));
#line 800 "post_typecheck.m"
                }
#line 801 "post_typecheck.m"
                {
#line 801 "post_typecheck.m"
                  check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__Context_12, check_hlds__post_typecheck__IdPieces_26, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36, check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);
#line 801 "post_typecheck.m"
                  return;
                }
#line 799 "post_typecheck.m"
              }
#line 803 "post_typecheck.m"
              break;
#line 803 "post_typecheck.m"
          }
#line 789 "post_typecheck.m"
        }
#line 787 "post_typecheck.m"
        break;
#line 787 "post_typecheck.m"
      case (MR_Integer) 2:
#line 807 "post_typecheck.m"
        {
#line 807 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_11, (MR_Integer) 6)));
#line 807 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_11, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 807 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_11, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 807 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_11, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 807 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_11, (MR_Integer) 2)));
#line 807 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_11, (MR_Integer) 3)));
#line 807 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_11, (MR_Integer) 4)));
#line 807 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__RHS_11, (MR_Integer) 5)));

#line 808 "post_typecheck.m"
          {
#line 808 "post_typecheck.m"
            check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredInfo_9, check_hlds__post_typecheck__Goal_35, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_36, check_hlds__post_typecheck__STATE_VARIABLE_Specs_37);
#line 808 "post_typecheck.m"
            return;
          }
#line 807 "post_typecheck.m"
        }
#line 787 "post_typecheck.m"
        break;
#line 787 "post_typecheck.m"
    }
#line 787 "post_typecheck.m"
  }
#line 780 "post_typecheck.m"
}

#line 691 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(
#line 691 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_6,
#line 691 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_7,
#line 691 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_8,
#line 691 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65,
#line 691 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_66)
#line 691 "post_typecheck.m"
{
#line 694 "post_typecheck.m"
  while (MR_TRUE)
#line 694 "post_typecheck.m"
    {
#line 694 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 694 "post_typecheck.m"
      {
#line 694 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;
#line 694 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_8, (MR_Integer) 0)));
#line 694 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_8, (MR_Integer) 1)));

#line 713 "post_typecheck.m"
#line 713 "post_typecheck.m"
        switch (MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_10)) {
#line 713 "post_typecheck.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 713 "post_typecheck.m"
          case (MR_Integer) 0:
#line 749 "post_typecheck.m"
            {
#line 749 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__SubGoal_48 = (MR_Word) MR_body(((MR_Word) check_hlds__post_typecheck__GoalExpr_10), (MR_Integer) 0);

#line 750 "post_typecheck.m"
              /* direct tailcall eliminated */
#line 750 "post_typecheck.m"
              {
#line 750 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_48;

#line 750 "post_typecheck.m"
                check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 750 "post_typecheck.m"
              }
#line 750 "post_typecheck.m"
              continue;
#line 749 "post_typecheck.m"
            }
#line 713 "post_typecheck.m"
            break;
#line 713 "post_typecheck.m"
          case (MR_Integer) 1:
#line 716 "post_typecheck.m"
            {
#line 716 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)));
#line 716 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__RHS_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 716 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Context_91;
#line 716 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 716 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 716 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));

#line 717 "post_typecheck.m"
              {
#line 717 "post_typecheck.m"
                check_hlds__post_typecheck__Context_91 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
              }
#line 718 "post_typecheck.m"
              {
#line 718 "post_typecheck.m"
                check_hlds__post_typecheck__check_in_interface_promise_unify_rhs_7_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Var_30, check_hlds__post_typecheck__RHS_31, check_hlds__post_typecheck__Context_91, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65, check_hlds__post_typecheck__STATE_VARIABLE_Specs_66);
#line 718 "post_typecheck.m"
                return;
              }
#line 716 "post_typecheck.m"
            }
#line 713 "post_typecheck.m"
            break;
#line 713 "post_typecheck.m"
          case (MR_Integer) 2:
#line 697 "post_typecheck.m"
            {
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)));
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 5)));
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__CallPredInfo_18;
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PredStatus_19;
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__DefnInImplSection_20;
#line 697 "post_typecheck.m"
              MR_Integer check_hlds__post_typecheck__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 697 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));

#line 698 "post_typecheck.m"
              {
#line 698 "post_typecheck.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredId_12, &check_hlds__post_typecheck__CallPredInfo_18);
              }
#line 699 "post_typecheck.m"
              {
#line 699 "post_typecheck.m"
                hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__post_typecheck__CallPredInfo_18, &check_hlds__post_typecheck__PredStatus_19);
              }
#line 700 "post_typecheck.m"
              {
#line 700 "post_typecheck.m"
                check_hlds__post_typecheck__DefnInImplSection_20 = hlds__status__pred_status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__PredStatus_19);
              }
#line 710 "post_typecheck.m"
#line 710 "post_typecheck.m"
              switch (check_hlds__post_typecheck__DefnInImplSection_20) {
#line 710 "post_typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 710 "post_typecheck.m"
                case (MR_Integer) 0:
#line 711 "post_typecheck.m"
                  *check_hlds__post_typecheck__STATE_VARIABLE_Specs_66 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65;
#line 710 "post_typecheck.m"
                  break;
#line 710 "post_typecheck.m"
                case (MR_Integer) 1:
#line 702 "post_typecheck.m"
                  {
#line 702 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Context_21;
#line 702 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__PredOrFunc_22;
#line 702 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__Arity_23;
#line 702 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__IdPieces_24;
#line 702 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_87_87;
#line 702 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_88_88;

#line 703 "post_typecheck.m"
                    {
#line 703 "post_typecheck.m"
                      check_hlds__post_typecheck__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
                    }
#line 704 "post_typecheck.m"
                    {
#line 704 "post_typecheck.m"
                      check_hlds__post_typecheck__PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__post_typecheck__CallPredInfo_18);
                    }
#line 705 "post_typecheck.m"
                    {
#line 705 "post_typecheck.m"
                      check_hlds__post_typecheck__Arity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__CallPredInfo_18);
                    }
#line 707 "post_typecheck.m"
                    {
#line 707 "post_typecheck.m"
                      check_hlds__post_typecheck__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 707 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_88_88, 0) = ((MR_Box) (check_hlds__post_typecheck__PredOrFunc_22));
#line 707 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_88_88, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_17));
#line 707 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_88_88, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_23));
#line 707 "post_typecheck.m"
                    }
#line 707 "post_typecheck.m"
                    {
#line 707 "post_typecheck.m"
                      check_hlds__post_typecheck__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 707 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_87_87, 1) = ((MR_Box) (check_hlds__post_typecheck__V_88_88));
#line 707 "post_typecheck.m"
                    }
#line 707 "post_typecheck.m"
                    {
#line 707 "post_typecheck.m"
                      check_hlds__post_typecheck__IdPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_24, 0) = ((MR_Box) (check_hlds__post_typecheck__V_87_87));
#line 707 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "post_typecheck.m"
                    }
#line 708 "post_typecheck.m"
                    {
#line 708 "post_typecheck.m"
                      check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__Context_21, check_hlds__post_typecheck__IdPieces_24, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65, check_hlds__post_typecheck__STATE_VARIABLE_Specs_66);
#line 708 "post_typecheck.m"
                      return;
                    }
#line 702 "post_typecheck.m"
                  }
#line 710 "post_typecheck.m"
                  break;
#line 710 "post_typecheck.m"
              }
#line 697 "post_typecheck.m"
            }
#line 713 "post_typecheck.m"
            break;
#line 713 "post_typecheck.m"
          case (MR_Integer) 3:
#line 713 "post_typecheck.m"
#line 713 "post_typecheck.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 0)))) {
#line 713 "post_typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 713 "post_typecheck.m"
              case (MR_Integer) 0:
#line 714 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_Specs_66 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65;
#line 713 "post_typecheck.m"
                break;
#line 713 "post_typecheck.m"
              case (MR_Integer) 1:
#line 721 "post_typecheck.m"
                {
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__PragmaPredInfo_41;
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__PredId_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__PredStatus_104;
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__DefnInImplSection_105;
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));
#line 721 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 5)));
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 6)));
#line 721 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 7)));

#line 722 "post_typecheck.m"
                  {
#line 722 "post_typecheck.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredId_102, &check_hlds__post_typecheck__PragmaPredInfo_41);
                  }
#line 723 "post_typecheck.m"
                  {
#line 723 "post_typecheck.m"
                    hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__post_typecheck__PragmaPredInfo_41, &check_hlds__post_typecheck__PredStatus_104);
                  }
#line 724 "post_typecheck.m"
                  {
#line 724 "post_typecheck.m"
                    check_hlds__post_typecheck__DefnInImplSection_105 = hlds__status__pred_status_defined_in_impl_section_1_f_0(check_hlds__post_typecheck__PredStatus_104);
                  }
#line 736 "post_typecheck.m"
#line 736 "post_typecheck.m"
                  switch (check_hlds__post_typecheck__DefnInImplSection_105) {
#line 736 "post_typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 736 "post_typecheck.m"
                    case (MR_Integer) 0:
#line 737 "post_typecheck.m"
                      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_66 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65;
#line 736 "post_typecheck.m"
                      break;
#line 736 "post_typecheck.m"
                    case (MR_Integer) 1:
#line 726 "post_typecheck.m"
                      {
#line 726 "post_typecheck.m"
                        MR_String check_hlds__post_typecheck__Name_42;
#line 726 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_82_82;
#line 726 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_83_83;
#line 726 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__SymName_92;
#line 726 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__Context_93;
#line 726 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__PredOrFunc_94;
#line 726 "post_typecheck.m"
                        MR_Integer check_hlds__post_typecheck__Arity_95;
#line 726 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__IdPieces_96;

#line 727 "post_typecheck.m"
                        {
#line 727 "post_typecheck.m"
                          check_hlds__post_typecheck__Context_93 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_11);
                        }
#line 728 "post_typecheck.m"
                        {
#line 728 "post_typecheck.m"
                          check_hlds__post_typecheck__PredOrFunc_94 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_41);
                        }
#line 729 "post_typecheck.m"
                        {
#line 729 "post_typecheck.m"
                          check_hlds__post_typecheck__Name_42 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_41);
                        }
#line 730 "post_typecheck.m"
                        {
#line 730 "post_typecheck.m"
                          check_hlds__post_typecheck__SymName_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 730 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__SymName_92, 0) = ((MR_Box) (check_hlds__post_typecheck__Name_42));
#line 730 "post_typecheck.m"
                        }
#line 731 "post_typecheck.m"
                        {
#line 731 "post_typecheck.m"
                          check_hlds__post_typecheck__Arity_95 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__PragmaPredInfo_41);
                        }
#line 733 "post_typecheck.m"
                        {
#line 733 "post_typecheck.m"
                          check_hlds__post_typecheck__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 733 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 0) = ((MR_Box) (check_hlds__post_typecheck__PredOrFunc_94));
#line 733 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_92));
#line 733 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_83_83, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_95));
#line 733 "post_typecheck.m"
                        }
#line 733 "post_typecheck.m"
                        {
#line 733 "post_typecheck.m"
                          check_hlds__post_typecheck__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "post_typecheck.m"
                          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 733 "post_typecheck.m"
                          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_82_82, 1) = ((MR_Box) (check_hlds__post_typecheck__V_83_83));
#line 733 "post_typecheck.m"
                        }
#line 733 "post_typecheck.m"
                        {
#line 733 "post_typecheck.m"
                          check_hlds__post_typecheck__IdPieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_96, 0) = ((MR_Box) (check_hlds__post_typecheck__V_82_82));
#line 733 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__IdPieces_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "post_typecheck.m"
                        }
#line 734 "post_typecheck.m"
                        {
#line 734 "post_typecheck.m"
                          check_hlds__post_typecheck__report_assertion_interface_error_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__Context_93, check_hlds__post_typecheck__IdPieces_96, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65, check_hlds__post_typecheck__STATE_VARIABLE_Specs_66);
#line 734 "post_typecheck.m"
                          return;
                        }
#line 726 "post_typecheck.m"
                      }
#line 736 "post_typecheck.m"
                      break;
#line 736 "post_typecheck.m"
                  }
#line 721 "post_typecheck.m"
                }
#line 713 "post_typecheck.m"
                break;
#line 713 "post_typecheck.m"
              case (MR_Integer) 2:
#line 740 "post_typecheck.m"
                {
#line 740 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Goals_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 740 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 741 "post_typecheck.m"
                  {
#line 741 "post_typecheck.m"
                    check_hlds__post_typecheck__check_in_interface_promise_goals_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Goals_44, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65, check_hlds__post_typecheck__STATE_VARIABLE_Specs_66);
#line 741 "post_typecheck.m"
                    return;
                  }
#line 740 "post_typecheck.m"
                }
#line 713 "post_typecheck.m"
                break;
#line 713 "post_typecheck.m"
              case (MR_Integer) 3:
#line 746 "post_typecheck.m"
                {
#line 746 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Goals_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 747 "post_typecheck.m"
                  {
#line 747 "post_typecheck.m"
                    check_hlds__post_typecheck__check_in_interface_promise_goals_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Goals_110, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65, check_hlds__post_typecheck__STATE_VARIABLE_Specs_66);
#line 747 "post_typecheck.m"
                    return;
                  }
#line 746 "post_typecheck.m"
                }
#line 713 "post_typecheck.m"
                break;
#line 713 "post_typecheck.m"
              case (MR_Integer) 4:
#line 743 "post_typecheck.m"
                {
#line 744 "post_typecheck.m"
                  {
#line 744 "post_typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.check_in_interface_promise_goal\'/5", (MR_String) "assertion contains switch");
#line 744 "post_typecheck.m"
                    return;
                  }
#line 743 "post_typecheck.m"
                }
#line 713 "post_typecheck.m"
                break;
#line 713 "post_typecheck.m"
              case (MR_Integer) 5:
#line 752 "post_typecheck.m"
                {
#line 752 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__SubGoal_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 752 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 753 "post_typecheck.m"
                  /* direct tailcall eliminated */
#line 753 "post_typecheck.m"
                  {
#line 753 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_111;

#line 753 "post_typecheck.m"
                    check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 753 "post_typecheck.m"
                  }
#line 753 "post_typecheck.m"
                  continue;
#line 752 "post_typecheck.m"
                }
#line 713 "post_typecheck.m"
                break;
#line 713 "post_typecheck.m"
              case (MR_Integer) 6:
#line 755 "post_typecheck.m"
                {
#line 755 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Cond_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 2)));
#line 755 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Then_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 3)));
#line 755 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__Else_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 4)));
#line 755 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72;
#line 755 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_73_73;
#line 755 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 756 "post_typecheck.m"
                  {
#line 756 "post_typecheck.m"
                    check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Cond_51, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72);
                  }
#line 757 "post_typecheck.m"
                  {
#line 757 "post_typecheck.m"
                    check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__Then_52, check_hlds__post_typecheck__STATE_VARIABLE_Specs_72_72, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_73_73);
                  }
#line 758 "post_typecheck.m"
                  /* direct tailcall eliminated */
#line 758 "post_typecheck.m"
                  {
#line 758 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__Else_53;
#line 758 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_73_73;

#line 758 "post_typecheck.m"
                    check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_65;
#line 758 "post_typecheck.m"
                    check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 758 "post_typecheck.m"
                  }
#line 758 "post_typecheck.m"
                  continue;
#line 755 "post_typecheck.m"
                }
#line 713 "post_typecheck.m"
                break;
#line 713 "post_typecheck.m"
              case (MR_Integer) 7:
#line 760 "post_typecheck.m"
                {
#line 760 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__ShortHand_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_10, (MR_Integer) 1)));

#line 767 "post_typecheck.m"
#line 767 "post_typecheck.m"
                  switch (MR_tag((MR_Word) check_hlds__post_typecheck__ShortHand_54)) {
#line 767 "post_typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 767 "post_typecheck.m"
                    case (MR_Integer) 0:
#line 772 "post_typecheck.m"
                      {
#line 772 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__LHS_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 0)));
#line 772 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_67_67;
#line 772 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__RHS_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 1)));

#line 773 "post_typecheck.m"
                        {
#line 773 "post_typecheck.m"
                          check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__LHS_64, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_67_67);
                        }
#line 774 "post_typecheck.m"
                        /* direct tailcall eliminated */
#line 774 "post_typecheck.m"
                        {
#line 774 "post_typecheck.m"
                          MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__RHS_113;
#line 774 "post_typecheck.m"
                          MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_67_67;

#line 774 "post_typecheck.m"
                          check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_65;
#line 774 "post_typecheck.m"
                          check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 774 "post_typecheck.m"
                        }
#line 774 "post_typecheck.m"
                        continue;
#line 772 "post_typecheck.m"
                      }
#line 767 "post_typecheck.m"
                      break;
#line 767 "post_typecheck.m"
                    case (MR_Integer) 1:
#line 762 "post_typecheck.m"
                      {
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 4)));
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 5)));
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_70_70;
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 0)));
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 1)));
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 2)));
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 3)));
#line 762 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 6)));

#line 763 "post_typecheck.m"
                        {
#line 763 "post_typecheck.m"
                          check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__MainGoal_59, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_65, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_70_70);
                        }
#line 765 "post_typecheck.m"
                        {
#line 765 "post_typecheck.m"
                          check_hlds__post_typecheck__check_in_interface_promise_goals_5_p_0(check_hlds__post_typecheck__ModuleInfo_6, check_hlds__post_typecheck__PredInfo_7, check_hlds__post_typecheck__OrElseGoals_60, check_hlds__post_typecheck__STATE_VARIABLE_Specs_70_70, check_hlds__post_typecheck__STATE_VARIABLE_Specs_66);
#line 765 "post_typecheck.m"
                          return;
                        }
#line 762 "post_typecheck.m"
                      }
#line 767 "post_typecheck.m"
                      break;
#line 767 "post_typecheck.m"
                    case (MR_Integer) 2:
#line 768 "post_typecheck.m"
                      {
#line 768 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__SubGoal_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 2)));
#line 768 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 0)));
#line 768 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__ShortHand_54, (MR_Integer) 1)));

#line 769 "post_typecheck.m"
                        /* direct tailcall eliminated */
#line 769 "post_typecheck.m"
                        {
#line 769 "post_typecheck.m"
                          MR_Word check_hlds__post_typecheck__Goal__tmp_copy_8 = check_hlds__post_typecheck__SubGoal_112;

#line 769 "post_typecheck.m"
                          check_hlds__post_typecheck__Goal_8 = check_hlds__post_typecheck__Goal__tmp_copy_8;
#line 769 "post_typecheck.m"
                        }
#line 769 "post_typecheck.m"
                        continue;
#line 768 "post_typecheck.m"
                      }
#line 767 "post_typecheck.m"
                      break;
#line 767 "post_typecheck.m"
                  }
#line 760 "post_typecheck.m"
                }
#line 713 "post_typecheck.m"
                break;
#line 713 "post_typecheck.m"
            }
#line 713 "post_typecheck.m"
            break;
#line 713 "post_typecheck.m"
        }
#line 694 "post_typecheck.m"
      }
#line 694 "post_typecheck.m"
      break;
#line 694 "post_typecheck.m"
    }
#line 691 "post_typecheck.m"
}

#line 550 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
#line 550 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_5,
#line 550 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarSet_6,
#line 550 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3)
#line 550 "post_typecheck.m"
{
#line 553 "post_typecheck.m"
  {
#line 553 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 553 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__4_4;
#line 553 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 553 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 553 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_9_9;
#line 553 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_10_10;
#line 553 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_12_12;
#line 553 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_15_15;
#line 553 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_16_16;
#line 553 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_17_17;

#line 554 "post_typecheck.m"
    {
#line 554 "post_typecheck.m"
      check_hlds__post_typecheck__V_10_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__VarSet_5, (MR_Integer) 0, check_hlds__post_typecheck__Var_7);
    }
#line 554 "post_typecheck.m"
    {
#line 554 "post_typecheck.m"
      check_hlds__post_typecheck__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 554 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_9_9, 1) = ((MR_Box) (check_hlds__post_typecheck__V_10_10));
#line 554 "post_typecheck.m"
    }
#line 555 "post_typecheck.m"
    {
#line 555 "post_typecheck.m"
      check_hlds__post_typecheck__V_17_17 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__post_typecheck__TVarSet_6, (MR_Integer) 0, check_hlds__post_typecheck__Type_8);
    }
#line 555 "post_typecheck.m"
    {
#line 555 "post_typecheck.m"
      check_hlds__post_typecheck__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 555 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_17_17));
#line 555 "post_typecheck.m"
    }
#line 555 "post_typecheck.m"
    {
#line 555 "post_typecheck.m"
      check_hlds__post_typecheck__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_15_15, 0) = ((MR_Box) (check_hlds__post_typecheck__V_16_16));
#line 555 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])));
#line 555 "post_typecheck.m"
    }
#line 554 "post_typecheck.m"
    {
#line 554 "post_typecheck.m"
      check_hlds__post_typecheck__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61])));
#line 554 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, 1) = ((MR_Box) (check_hlds__post_typecheck__V_15_15));
#line 554 "post_typecheck.m"
    }
#line 554 "post_typecheck.m"
    {
#line 554 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__post_typecheck__V_9_9));
#line 554 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, 1) = ((MR_Box) (check_hlds__post_typecheck__V_12_12));
#line 554 "post_typecheck.m"
    }
#line 553 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__4_4;
#line 553 "post_typecheck.m"
  }
#line 550 "post_typecheck.m"
}

#line 521 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
#line 521 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 521 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 521 "post_typecheck.m"
{
#line 521 "post_typecheck.m"
  {
#line 521 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 521 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 521 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__4_4;

#line 521 "post_typecheck.m"
    {
#line 521 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_HeadVar__4_4 = check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 521 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__4_4));
#line 521 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 521 "post_typecheck.m"
  }
#line 521 "post_typecheck.m"
}

#line 509 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_10,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarSet_11,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Errs_12,
#line 509 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24,
#line 509 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_25)
#line 509 "post_typecheck.m"
{
#line 514 "post_typecheck.m"
  {
#line 514 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_117_117;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_121_121;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_122_122;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeVarSet_14;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_15;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdPieces_16;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypePieceLists_17;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypePieces_18;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__MainPieces_19;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_21;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_23;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_27_27;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_32_32;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_33_33;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_39_39;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_42_42;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_44_44;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_45_45;
#line 514 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_46_46;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_53_53;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_54_54;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_60_60;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61;
#line 514 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_62_62;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_98_98;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_99_99;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_102_102;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_103_103;
#line 514 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_114_114;
#line 525 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_V_46_46;
#line 530 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv2_V_62_62;

#line 515 "post_typecheck.m"
    {
#line 515 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__PredInfo_10, &check_hlds__post_typecheck__TypeVarSet_14);
    }
#line 516 "post_typecheck.m"
    {
#line 516 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_10, &check_hlds__post_typecheck__Context_15);
    }
#line 519 "post_typecheck.m"
    {
#line 519 "post_typecheck.m"
      check_hlds__post_typecheck__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_8, (MR_Integer) 1, check_hlds__post_typecheck__PredId_9);
    }
#line 7590 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_117_117 = (MR_Word) &check_hlds__post_typecheck_scalar_common_2[1];
#line 521 "post_typecheck.m"
    {
#line 521 "post_typecheck.m"
      check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[2]));
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1));
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 3) = ((MR_Box) (check_hlds__post_typecheck__VarSet_11));
#line 521 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 4) = ((MR_Box) (check_hlds__post_typecheck__TypeVarSet_14));
#line 521 "post_typecheck.m"
    }
#line 521 "post_typecheck.m"
    {
#line 521 "post_typecheck.m"
      check_hlds__post_typecheck__VarTypePieceLists_17 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeInfo_117_117, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[3], check_hlds__post_typecheck__V_27_27, check_hlds__post_typecheck__Errs_12);
    }
#line 7613 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 522 "post_typecheck.m"
    {
#line 522 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__VarTypePieceLists_17, &check_hlds__post_typecheck__VarTypePieces_18);
    }
#line 7620 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 525 "post_typecheck.m"
    {
#line 525 "post_typecheck.m"
      check_hlds__post_typecheck__conv1_V_46_46 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeInfo_117_117, check_hlds__post_typecheck__TypeCtorInfo_122_122, check_hlds__post_typecheck__Errs_12, ((MR_Box) ((MR_String) "The variable with an unbound type was:")), ((MR_Box) ((MR_String) "The variables with unbound types were:")));
    }
#line 525 "post_typecheck.m"
    check_hlds__post_typecheck__V_46_46 = ((MR_String) check_hlds__post_typecheck__conv1_V_46_46);
#line 525 "post_typecheck.m"
    {
#line 525 "post_typecheck.m"
      check_hlds__post_typecheck__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 525 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_45_45, 1) = ((MR_Box) (check_hlds__post_typecheck__V_46_46));
#line 525 "post_typecheck.m"
    }
#line 527 "post_typecheck.m"
    {
#line 527 "post_typecheck.m"
      check_hlds__post_typecheck__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_44_44, 0) = ((MR_Box) (check_hlds__post_typecheck__V_45_45));
#line 527 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[63])));
#line 527 "post_typecheck.m"
    }
#line 524 "post_typecheck.m"
    {
#line 524 "post_typecheck.m"
      check_hlds__post_typecheck__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_42_42, 1) = ((MR_Box) (check_hlds__post_typecheck__V_44_44));
#line 524 "post_typecheck.m"
    }
#line 524 "post_typecheck.m"
    {
#line 524 "post_typecheck.m"
      check_hlds__post_typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[74])));
#line 524 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 1) = ((MR_Box) (check_hlds__post_typecheck__V_42_42));
#line 524 "post_typecheck.m"
    }
#line 523 "post_typecheck.m"
    {
#line 523 "post_typecheck.m"
      check_hlds__post_typecheck__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 523 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 1) = ((MR_Box) (check_hlds__post_typecheck__V_39_39));
#line 523 "post_typecheck.m"
    }
#line 523 "post_typecheck.m"
    {
#line 523 "post_typecheck.m"
      check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61])));
#line 523 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (check_hlds__post_typecheck__V_37_37));
#line 523 "post_typecheck.m"
    }
#line 530 "post_typecheck.m"
    {
#line 530 "post_typecheck.m"
      check_hlds__post_typecheck__conv2_V_62_62 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeInfo_117_117, check_hlds__post_typecheck__TypeCtorInfo_122_122, check_hlds__post_typecheck__Errs_12, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
#line 530 "post_typecheck.m"
    check_hlds__post_typecheck__V_62_62 = ((MR_String) check_hlds__post_typecheck__conv2_V_62_62);
#line 530 "post_typecheck.m"
    {
#line 530 "post_typecheck.m"
      check_hlds__post_typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 530 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_61_61, 1) = ((MR_Box) (check_hlds__post_typecheck__V_62_62));
#line 530 "post_typecheck.m"
    }
#line 530 "post_typecheck.m"
    {
#line 530 "post_typecheck.m"
      check_hlds__post_typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__post_typecheck__V_61_61));
#line 530 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[12])));
#line 530 "post_typecheck.m"
    }
#line 529 "post_typecheck.m"
    {
#line 529 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[75])));
#line 529 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 1) = ((MR_Box) (check_hlds__post_typecheck__V_60_60));
#line 529 "post_typecheck.m"
    }
#line 529 "post_typecheck.m"
    {
#line 529 "post_typecheck.m"
      check_hlds__post_typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[64])));
#line 529 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_54_54, 1) = ((MR_Box) (check_hlds__post_typecheck__V_57_57));
#line 529 "post_typecheck.m"
    }
#line 528 "post_typecheck.m"
    {
#line 528 "post_typecheck.m"
      check_hlds__post_typecheck__V_53_53 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__VarTypePieces_18, check_hlds__post_typecheck__V_54_54);
    }
#line 527 "post_typecheck.m"
    {
#line 527 "post_typecheck.m"
      check_hlds__post_typecheck__V_33_33 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__V_34_34, check_hlds__post_typecheck__V_53_53);
    }
#line 523 "post_typecheck.m"
    {
#line 523 "post_typecheck.m"
      check_hlds__post_typecheck__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__PredIdPieces_16, check_hlds__post_typecheck__V_33_33);
    }
#line 523 "post_typecheck.m"
    {
#line 523 "post_typecheck.m"
      check_hlds__post_typecheck__MainPieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[60]), check_hlds__post_typecheck__V_32_32);
    }
#line 544 "post_typecheck.m"
    {
#line 544 "post_typecheck.m"
      check_hlds__post_typecheck__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_103_103, 0) = ((MR_Box) (check_hlds__post_typecheck__MainPieces_19));
#line 544 "post_typecheck.m"
    }
#line 544 "post_typecheck.m"
    {
#line 544 "post_typecheck.m"
      check_hlds__post_typecheck__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_102_102, 0) = ((MR_Box) (check_hlds__post_typecheck__V_103_103));
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[77])));
#line 544 "post_typecheck.m"
    }
#line 543 "post_typecheck.m"
    {
#line 543 "post_typecheck.m"
      check_hlds__post_typecheck__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_99_99, 0) = ((MR_Box) (((MR_Integer) 39 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 543 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_99_99, 1) = ((MR_Box) (check_hlds__post_typecheck__V_102_102));
#line 543 "post_typecheck.m"
    }
#line 544 "post_typecheck.m"
    {
#line 544 "post_typecheck.m"
      check_hlds__post_typecheck__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_98_98, 0) = ((MR_Box) (check_hlds__post_typecheck__V_99_99));
#line 544 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "post_typecheck.m"
    }
#line 542 "post_typecheck.m"
    {
#line 542 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_21, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_15));
#line 542 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_21, 1) = ((MR_Box) (check_hlds__post_typecheck__V_98_98));
#line 542 "post_typecheck.m"
    }
#line 547 "post_typecheck.m"
    {
#line 547 "post_typecheck.m"
      check_hlds__post_typecheck__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_114_114, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_21));
#line 547 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "post_typecheck.m"
    }
#line 547 "post_typecheck.m"
    {
#line 547 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 547 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_3[0])));
#line 547 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 547 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 2) = ((MR_Box) (check_hlds__post_typecheck__V_114_114));
#line 547 "post_typecheck.m"
    }
#line 548 "post_typecheck.m"
    {
#line 548 "post_typecheck.m"
      MR_Word base;
#line 548 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_25 = base;
#line 548 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_23));
#line 548 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24));
#line 548 "post_typecheck.m"
    }
#line 514 "post_typecheck.m"
  }
#line 509 "post_typecheck.m"
}

#line 467 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
#line 467 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_4,
#line 467 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Goal_5)
#line 467 "post_typecheck.m"
{
#line 470 "post_typecheck.m"
  {
#line 470 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 470 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_6;
#line 470 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_5, (MR_Integer) 0)));
#line 471 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_5, (MR_Integer) 1)));

#line 487 "post_typecheck.m"
#line 487 "post_typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) {
#line 487 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 487 "post_typecheck.m"
      case (MR_Integer) 0:
#line 501 "post_typecheck.m"
        {
#line 502 "post_typecheck.m"
          check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
        }
#line 487 "post_typecheck.m"
        break;
#line 487 "post_typecheck.m"
      case (MR_Integer) 1:
#line 501 "post_typecheck.m"
        {
#line 502 "post_typecheck.m"
          check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
        }
#line 487 "post_typecheck.m"
        break;
#line 487 "post_typecheck.m"
      case (MR_Integer) 2:
#line 485 "post_typecheck.m"
        {
#line 485 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)));
#line 485 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__CallPieces_108;
#line 474 "post_typecheck.m"
          MR_Integer check_hlds__post_typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 474 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));
#line 474 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 474 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 474 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));

#line 475 "post_typecheck.m"
          {
#line 475 "post_typecheck.m"
            check_hlds__post_typecheck__CallPieces_108 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_4, (MR_Integer) 0, check_hlds__post_typecheck__PredId_9);
          }
#line 486 "post_typecheck.m"
          {
#line 486 "post_typecheck.m"
            check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "post_typecheck.m"
            MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[69])));
#line 486 "post_typecheck.m"
            MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_108));
#line 486 "post_typecheck.m"
          }
#line 485 "post_typecheck.m"
        }
#line 487 "post_typecheck.m"
        break;
#line 487 "post_typecheck.m"
      case (MR_Integer) 3:
#line 487 "post_typecheck.m"
#line 487 "post_typecheck.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) {
#line 487 "post_typecheck.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 487 "post_typecheck.m"
          case (MR_Integer) 0:
#line 487 "post_typecheck.m"
            {
#line 487 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 488 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));
#line 488 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 488 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 488 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));

#line 487 "post_typecheck.m"
#line 487 "post_typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__post_typecheck__V_127_127)) {
#line 487 "post_typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 487 "post_typecheck.m"
                case (MR_Integer) 0:
#line 488 "post_typecheck.m"
                  {
#line 489 "post_typecheck.m"
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[73]);
#line 488 "post_typecheck.m"
                  }
#line 487 "post_typecheck.m"
                  break;
#line 487 "post_typecheck.m"
                case (MR_Integer) 1:
#line 485 "post_typecheck.m"
                  {
#line 485 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__SimpleCallId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 3)));
#line 485 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_78_78;
#line 485 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__CallPieces_93;
#line 479 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 0)));
#line 479 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 1)));
#line 479 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 2)));

#line 480 "post_typecheck.m"
                    {
#line 480 "post_typecheck.m"
                      check_hlds__post_typecheck__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 480 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_78_78, 1) = ((MR_Box) (check_hlds__post_typecheck__SimpleCallId_24));
#line 480 "post_typecheck.m"
                    }
#line 480 "post_typecheck.m"
                    {
#line 480 "post_typecheck.m"
                      check_hlds__post_typecheck__CallPieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__CallPieces_93, 0) = ((MR_Box) (check_hlds__post_typecheck__V_78_78));
#line 480 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__CallPieces_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "post_typecheck.m"
                    }
#line 486 "post_typecheck.m"
                    {
#line 486 "post_typecheck.m"
                      check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[69])));
#line 486 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_93));
#line 486 "post_typecheck.m"
                    }
#line 485 "post_typecheck.m"
                  }
#line 487 "post_typecheck.m"
                  break;
#line 487 "post_typecheck.m"
                case (MR_Integer) 2:
#line 501 "post_typecheck.m"
                  {
#line 502 "post_typecheck.m"
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
                  }
#line 487 "post_typecheck.m"
                  break;
#line 487 "post_typecheck.m"
                case (MR_Integer) 3:
#line 501 "post_typecheck.m"
                  {
#line 502 "post_typecheck.m"
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
                  }
#line 487 "post_typecheck.m"
                  break;
#line 487 "post_typecheck.m"
              }
#line 487 "post_typecheck.m"
            }
#line 487 "post_typecheck.m"
            break;
#line 487 "post_typecheck.m"
          case (MR_Integer) 1:
#line 485 "post_typecheck.m"
            {
#line 485 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__CallPieces_15;
#line 485 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));
#line 482 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
#line 482 "post_typecheck.m"
              MR_Integer check_hlds__post_typecheck__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
#line 482 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
#line 482 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));
#line 482 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 6)));
#line 482 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 7)));

#line 483 "post_typecheck.m"
              {
#line 483 "post_typecheck.m"
                check_hlds__post_typecheck__CallPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_4, (MR_Integer) 0, check_hlds__post_typecheck__PredId_83);
              }
#line 486 "post_typecheck.m"
              {
#line 486 "post_typecheck.m"
                check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "post_typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[69])));
#line 486 "post_typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_15));
#line 486 "post_typecheck.m"
              }
#line 485 "post_typecheck.m"
            }
#line 487 "post_typecheck.m"
            break;
#line 487 "post_typecheck.m"
          case (MR_Integer) 2:
#line 501 "post_typecheck.m"
            {
#line 502 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
            }
#line 487 "post_typecheck.m"
            break;
#line 487 "post_typecheck.m"
          case (MR_Integer) 3:
#line 501 "post_typecheck.m"
            {
#line 502 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
            }
#line 487 "post_typecheck.m"
            break;
#line 487 "post_typecheck.m"
          case (MR_Integer) 4:
#line 501 "post_typecheck.m"
            {
#line 502 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
            }
#line 487 "post_typecheck.m"
            break;
#line 487 "post_typecheck.m"
          case (MR_Integer) 5:
#line 501 "post_typecheck.m"
            {
#line 502 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
            }
#line 487 "post_typecheck.m"
            break;
#line 487 "post_typecheck.m"
          case (MR_Integer) 6:
#line 501 "post_typecheck.m"
            {
#line 502 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
            }
#line 487 "post_typecheck.m"
            break;
#line 487 "post_typecheck.m"
          case (MR_Integer) 7:
#line 501 "post_typecheck.m"
            {
#line 502 "post_typecheck.m"
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71]);
#line 501 "post_typecheck.m"
            }
#line 487 "post_typecheck.m"
            break;
#line 487 "post_typecheck.m"
        }
#line 487 "post_typecheck.m"
        break;
#line 487 "post_typecheck.m"
    }
#line 470 "post_typecheck.m"
    return check_hlds__post_typecheck__Pieces_6;
#line 470 "post_typecheck.m"
  }
#line 467 "post_typecheck.m"
}

#line 443 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
#line 443 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 443 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__2_2)
#line 443 "post_typecheck.m"
{
#line 446 "post_typecheck.m"
  {
#line 446 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 446 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__3_3;

#line 446 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "post_typecheck.m"
    else
#line 447 "post_typecheck.m"
      {
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Msg_8;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Msgs_9;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Words_13;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Suffix_14;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalInfo_17;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Context_18;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_24_24;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_27_27;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_28_28;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_29_29;
#line 447 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_30_30;
#line 461 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_16_16;

#line 452 "post_typecheck.m"
        if ((check_hlds__post_typecheck__Goals_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "post_typecheck.m"
          {
#line 458 "post_typecheck.m"
            {
#line 458 "post_typecheck.m"
              check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
            }
#line 459 "post_typecheck.m"
            check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[66]);
#line 457 "post_typecheck.m"
          }
#line 452 "post_typecheck.m"
        else
#line 452 "post_typecheck.m"
          {
#line 452 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Goals_7, (MR_Integer) 1)));
#line 449 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Goals_7, (MR_Integer) 0)));

#line 452 "post_typecheck.m"
            if ((check_hlds__post_typecheck__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "post_typecheck.m"
              {
#line 454 "post_typecheck.m"
                {
#line 454 "post_typecheck.m"
                  check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
                }
#line 455 "post_typecheck.m"
                check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[67]);
#line 453 "post_typecheck.m"
              }
#line 452 "post_typecheck.m"
            else
#line 449 "post_typecheck.m"
              {
#line 450 "post_typecheck.m"
                {
#line 450 "post_typecheck.m"
                  check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
                }
#line 451 "post_typecheck.m"
                check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[68]);
#line 449 "post_typecheck.m"
              }
#line 452 "post_typecheck.m"
          }
#line 461 "post_typecheck.m"
        check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_6, (MR_Integer) 0)));
#line 461 "post_typecheck.m"
        check_hlds__post_typecheck__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_6, (MR_Integer) 1)));
#line 462 "post_typecheck.m"
        {
#line 462 "post_typecheck.m"
          check_hlds__post_typecheck__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_17);
        }
#line 463 "post_typecheck.m"
        {
#line 463 "post_typecheck.m"
          check_hlds__post_typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_24_24, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_18));
#line 463 "post_typecheck.m"
        }
#line 464 "post_typecheck.m"
        {
#line 464 "post_typecheck.m"
          check_hlds__post_typecheck__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_30_30, 0) = ((MR_Box) (check_hlds__post_typecheck__Suffix_14));
#line 464 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "post_typecheck.m"
        }
#line 464 "post_typecheck.m"
        {
#line 464 "post_typecheck.m"
          check_hlds__post_typecheck__V_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__post_typecheck__Words_13, check_hlds__post_typecheck__V_30_30);
        }
#line 464 "post_typecheck.m"
        {
#line 464 "post_typecheck.m"
          check_hlds__post_typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 464 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_28_28, 0) = ((MR_Box) (check_hlds__post_typecheck__V_29_29));
#line 464 "post_typecheck.m"
        }
#line 464 "post_typecheck.m"
        {
#line 464 "post_typecheck.m"
          check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__post_typecheck__V_28_28));
#line 464 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "post_typecheck.m"
        }
#line 463 "post_typecheck.m"
        {
#line 463 "post_typecheck.m"
          check_hlds__post_typecheck__Msg_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 463 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 0) = ((MR_Box) (check_hlds__post_typecheck__V_24_24));
#line 463 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 1) = ((MR_Box) ((MR_Integer) 1));
#line 463 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 2) = ((MR_Box) ((MR_Integer) 1));
#line 463 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 3) = ((MR_Box) (check_hlds__post_typecheck__V_27_27));
#line 463 "post_typecheck.m"
        }
#line 465 "post_typecheck.m"
        {
#line 465 "post_typecheck.m"
          check_hlds__post_typecheck__Msgs_9 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goals_7);
        }
#line 447 "post_typecheck.m"
        {
#line 447 "post_typecheck.m"
          check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_8));
#line 447 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__post_typecheck__Msgs_9));
#line 447 "post_typecheck.m"
        }
#line 447 "post_typecheck.m"
      }
#line 446 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__3_3;
#line 446 "post_typecheck.m"
  }
#line 443 "post_typecheck.m"
}

#line 430 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__env_ptr_arg)
#line 430 "post_typecheck.m"
{
#line 430 "post_typecheck.m"
  {
#line 430 "post_typecheck.m"
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

#line 430 "post_typecheck.m"
    *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_LambdaHeadVar__1_25));
#line 430 "post_typecheck.m"
    {
#line 430 "post_typecheck.m"
      ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont)((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr);
#line 430 "post_typecheck.m"
      return;
    }
#line 430 "post_typecheck.m"
  }
#line 430 "post_typecheck.m"
}

#line 430 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
#line 430 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 430 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
#line 430 "post_typecheck.m"
  MR_Cont check_hlds__post_typecheck__cont,
#line 430 "post_typecheck.m"
  void * check_hlds__post_typecheck__cont_env_ptr)
#line 430 "post_typecheck.m"
{
#line 430 "post_typecheck.m"
  {
#line 430 "post_typecheck.m"
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s check_hlds__post_typecheck__env;

#line 430 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1 = check_hlds__post_typecheck__wrapper_arg_1;
#line 430 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont = check_hlds__post_typecheck__cont;
#line 430 "post_typecheck.m"
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr = check_hlds__post_typecheck__cont_env_ptr;
#line 430 "post_typecheck.m"
    {
#line 430 "post_typecheck.m"
      MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;

#line 430 "post_typecheck.m"
      {
#line 430 "post_typecheck.m"
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__430__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_LambdaHeadVar__1_25, check_hlds__post_typecheck__find_constrained_goals_2_f_0_1, &check_hlds__post_typecheck__env);
      }
#line 430 "post_typecheck.m"
    }
#line 430 "post_typecheck.m"
  }
#line 430 "post_typecheck.m"
}

#line 416 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
#line 416 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_4,
#line 416 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_5)
#line 416 "post_typecheck.m"
{
#line 419 "post_typecheck.m"
  {
#line 419 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goals_6;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_28_28;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_29_29;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesInfo_7;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesRep_8;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Clauses_10;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintMap_11;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ReverseConstraintMap_12;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintIdSets_13;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstraintIds_14;
#line 419 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FindGoals_15;
#line 421 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck___ItemNumbers_9;

#line 420 "post_typecheck.m"
    {
#line 420 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ClausesInfo_7);
    }
#line 421 "post_typecheck.m"
    {
#line 421 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_7, &check_hlds__post_typecheck__ClausesRep_8, &check_hlds__post_typecheck___ItemNumbers_9);
    }
#line 422 "post_typecheck.m"
    {
#line 422 "post_typecheck.m"
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__post_typecheck__ClausesRep_8, &check_hlds__post_typecheck__Clauses_10);
    }
#line 424 "post_typecheck.m"
    {
#line 424 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ConstraintMap_11);
    }
#line 8471 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0;
#line 8473 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 425 "post_typecheck.m"
    {
#line 425 "post_typecheck.m"
      check_hlds__post_typecheck__ReverseConstraintMap_12 = mercury__map__reverse_map_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_28_28, check_hlds__post_typecheck__TypeCtorInfo_29_29, check_hlds__post_typecheck__ConstraintMap_11);
    }
#line 426 "post_typecheck.m"
    {
#line 426 "post_typecheck.m"
      mercury__map__apply_to_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_29_29, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[4], check_hlds__post_typecheck__Constraints_5, check_hlds__post_typecheck__ReverseConstraintMap_12, &check_hlds__post_typecheck__ConstraintIdSets_13);
    }
#line 427 "post_typecheck.m"
    {
#line 427 "post_typecheck.m"
      check_hlds__post_typecheck__ConstraintIds_14 = mercury__set__union_list_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_28_28, check_hlds__post_typecheck__ConstraintIdSets_13);
    }
#line 430 "post_typecheck.m"
    {
#line 430 "post_typecheck.m"
      check_hlds__post_typecheck__FindGoals_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 430 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[2]));
#line 430 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 1) = ((MR_Box) (check_hlds__post_typecheck__find_constrained_goals_2_f_0_2));
#line 430 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 430 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 3) = ((MR_Box) (check_hlds__post_typecheck__Clauses_10));
#line 430 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 4) = ((MR_Box) (check_hlds__post_typecheck__ConstraintIds_14));
#line 430 "post_typecheck.m"
    }
#line 441 "post_typecheck.m"
    {
#line 441 "post_typecheck.m"
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__post_typecheck__FindGoals_15, &check_hlds__post_typecheck__Goals_6);
    }
#line 419 "post_typecheck.m"
    return check_hlds__post_typecheck__Goals_6;
#line 419 "post_typecheck.m"
  }
#line 416 "post_typecheck.m"
}

#line 405 "post_typecheck.m"
static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
#line 405 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__TVarset_4,
#line 405 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraint_5)
#line 405 "post_typecheck.m"
{
#line 408 "post_typecheck.m"
  {
#line 408 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 408 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadVar__3_3;
#line 408 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_6_6;
#line 408 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_7_7;

#line 409 "post_typecheck.m"
    {
#line 409 "post_typecheck.m"
      check_hlds__post_typecheck__V_7_7 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__post_typecheck__TVarset_4, check_hlds__post_typecheck__Constraint_5);
    }
#line 409 "post_typecheck.m"
    {
#line 409 "post_typecheck.m"
      check_hlds__post_typecheck__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 409 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_6_6, 1) = ((MR_Box) (check_hlds__post_typecheck__V_7_7));
#line 409 "post_typecheck.m"
    }
#line 409 "post_typecheck.m"
    {
#line 409 "post_typecheck.m"
      check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__post_typecheck__V_6_6));
#line 409 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "post_typecheck.m"
    }
#line 408 "post_typecheck.m"
    return check_hlds__post_typecheck__HeadVar__3_3;
#line 408 "post_typecheck.m"
  }
#line 405 "post_typecheck.m"
}

#line 388 "post_typecheck.m"
static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
#line 388 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 388 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
#line 388 "post_typecheck.m"
{
#line 388 "post_typecheck.m"
  {
#line 388 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
#line 388 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 388 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_HeadVar__3_3;

#line 388 "post_typecheck.m"
    {
#line 388 "post_typecheck.m"
      check_hlds__post_typecheck__conv1_HeadVar__3_3 = check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
#line 388 "post_typecheck.m"
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv1_HeadVar__3_3));
#line 388 "post_typecheck.m"
    return check_hlds__post_typecheck__wrapper_arg_2;
#line 388 "post_typecheck.m"
  }
#line 388 "post_typecheck.m"
}

#line 371 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredInfo_9,
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Constraints_10,
#line 371 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22,
#line 371 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_23)
#line 371 "post_typecheck.m"
{
#line 376 "post_typecheck.m"
  {
#line 376 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_75_75;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_76_76;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_77_77;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TVarSet_12;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Context_13;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdPieces_14;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Pieces_15;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Msg_16;
#line 376 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__DueTo_17;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ContextMsgStart_18;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ConstrainedGoals_19;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ContextMsgs_20;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Spec_21;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_29_29;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_30_30;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_31_31;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_36_36;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_37_37;
#line 376 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_38_38;
#line 376 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__V_40_40;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_47_47;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_48_48;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_49_49;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_50_50;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_56_56;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_57_57;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_61_61;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_64_64;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_65_65;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_66_66;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_67_67;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_72_72;
#line 376 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_73_73;
#line 385 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv0_V_40_40;
#line 392 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv2_DueTo_17;

#line 377 "post_typecheck.m"
    {
#line 377 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__TVarSet_12);
    }
#line 378 "post_typecheck.m"
    {
#line 378 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__Context_13);
    }
#line 380 "post_typecheck.m"
    {
#line 380 "post_typecheck.m"
      check_hlds__post_typecheck__PredIdPieces_14 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_7, (MR_Integer) 1, check_hlds__post_typecheck__PredId_8);
    }
#line 8711 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 8713 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 8715 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__conv0_V_40_40 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, check_hlds__post_typecheck__TypeCtorInfo_77_77, check_hlds__post_typecheck__Constraints_10, ((MR_Box) ((MR_String) "constraint:")), ((MR_Box) ((MR_String) "constraints:")));
    }
#line 385 "post_typecheck.m"
    check_hlds__post_typecheck__V_40_40 = ((MR_String) check_hlds__post_typecheck__conv0_V_40_40);
#line 384 "post_typecheck.m"
    {
#line 384 "post_typecheck.m"
      check_hlds__post_typecheck__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "type error: unsatisfied typeclass ", check_hlds__post_typecheck__V_40_40);
    }
#line 384 "post_typecheck.m"
    {
#line 384 "post_typecheck.m"
      check_hlds__post_typecheck__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "post_typecheck.m"
      MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__V_37_37, 0) = ((MR_Box) (check_hlds__post_typecheck__V_38_38));
#line 384 "post_typecheck.m"
    }
#line 385 "post_typecheck.m"
    {
#line 385 "post_typecheck.m"
      check_hlds__post_typecheck__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_36_36, 0) = ((MR_Box) (check_hlds__post_typecheck__V_37_37));
#line 385 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[63])));
#line 385 "post_typecheck.m"
    }
#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 383 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (check_hlds__post_typecheck__V_36_36));
#line 383 "post_typecheck.m"
    }
#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61])));
#line 383 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_31_31, 1) = ((MR_Box) (check_hlds__post_typecheck__V_34_34));
#line 383 "post_typecheck.m"
    }
#line 388 "post_typecheck.m"
    {
#line 388 "post_typecheck.m"
      check_hlds__post_typecheck__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 388 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[1]));
#line 388 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1));
#line 388 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 388 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 3) = ((MR_Box) (check_hlds__post_typecheck__TVarSet_12));
#line 388 "post_typecheck.m"
    }
#line 388 "post_typecheck.m"
    {
#line 388 "post_typecheck.m"
      check_hlds__post_typecheck__V_49_49 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[3], check_hlds__post_typecheck__V_50_50, check_hlds__post_typecheck__Constraints_10);
    }
#line 387 "post_typecheck.m"
    {
#line 387 "post_typecheck.m"
      check_hlds__post_typecheck__V_48_48 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__post_typecheck__V_49_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 388 "post_typecheck.m"
    {
#line 388 "post_typecheck.m"
      check_hlds__post_typecheck__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__V_48_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[65]));
    }
#line 386 "post_typecheck.m"
    {
#line 386 "post_typecheck.m"
      check_hlds__post_typecheck__V_30_30 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__V_31_31, check_hlds__post_typecheck__V_47_47);
    }
#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__V_29_29 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__PredIdPieces_14, check_hlds__post_typecheck__V_30_30);
    }
#line 383 "post_typecheck.m"
    {
#line 383 "post_typecheck.m"
      check_hlds__post_typecheck__Pieces_15 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[60]), check_hlds__post_typecheck__V_29_29);
    }
#line 390 "post_typecheck.m"
    {
#line 390 "post_typecheck.m"
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_15));
#line 390 "post_typecheck.m"
    }
#line 390 "post_typecheck.m"
    {
#line 390 "post_typecheck.m"
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__V_57_57));
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "post_typecheck.m"
    }
#line 390 "post_typecheck.m"
    {
#line 390 "post_typecheck.m"
      check_hlds__post_typecheck__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_16, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_13));
#line 390 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_56_56));
#line 390 "post_typecheck.m"
    }
#line 392 "post_typecheck.m"
    {
#line 392 "post_typecheck.m"
      check_hlds__post_typecheck__conv2_DueTo_17 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, check_hlds__post_typecheck__TypeCtorInfo_77_77, check_hlds__post_typecheck__Constraints_10, ((MR_Box) ((MR_String) "The constraint is due to:")), ((MR_Box) ((MR_String) "The constraints are due to:")));
    }
#line 392 "post_typecheck.m"
    check_hlds__post_typecheck__DueTo_17 = ((MR_String) check_hlds__post_typecheck__conv2_DueTo_17);
#line 395 "post_typecheck.m"
    {
#line 395 "post_typecheck.m"
      check_hlds__post_typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_13));
#line 395 "post_typecheck.m"
    }
#line 396 "post_typecheck.m"
    {
#line 396 "post_typecheck.m"
      check_hlds__post_typecheck__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_67_67, 1) = ((MR_Box) (check_hlds__post_typecheck__DueTo_17));
#line 396 "post_typecheck.m"
    }
#line 396 "post_typecheck.m"
    {
#line 396 "post_typecheck.m"
      check_hlds__post_typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__post_typecheck__V_67_67));
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "post_typecheck.m"
    }
#line 396 "post_typecheck.m"
    {
#line 396 "post_typecheck.m"
      check_hlds__post_typecheck__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_65_65, 0) = ((MR_Box) (check_hlds__post_typecheck__V_66_66));
#line 396 "post_typecheck.m"
    }
#line 396 "post_typecheck.m"
    {
#line 396 "post_typecheck.m"
      check_hlds__post_typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__post_typecheck__V_65_65));
#line 396 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 396 "post_typecheck.m"
    }
#line 395 "post_typecheck.m"
    {
#line 395 "post_typecheck.m"
      check_hlds__post_typecheck__ContextMsgStart_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 395 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 0) = ((MR_Box) (check_hlds__post_typecheck__V_61_61));
#line 395 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 1) = ((MR_Box) ((MR_Integer) 1));
#line 395 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 2) = ((MR_Box) ((MR_Integer) 0));
#line 395 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 3) = ((MR_Box) (check_hlds__post_typecheck__V_64_64));
#line 395 "post_typecheck.m"
    }
#line 397 "post_typecheck.m"
    {
#line 397 "post_typecheck.m"
      check_hlds__post_typecheck__ConstrainedGoals_19 = check_hlds__post_typecheck__find_constrained_goals_2_f_0(check_hlds__post_typecheck__PredInfo_9, check_hlds__post_typecheck__Constraints_10);
    }
#line 398 "post_typecheck.m"
    {
#line 398 "post_typecheck.m"
      check_hlds__post_typecheck__ContextMsgs_20 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__ConstrainedGoals_19);
    }
#line 402 "post_typecheck.m"
    {
#line 402 "post_typecheck.m"
      check_hlds__post_typecheck__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_73_73, 0) = ((MR_Box) (check_hlds__post_typecheck__ContextMsgStart_18));
#line 402 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_73_73, 1) = ((MR_Box) (check_hlds__post_typecheck__ContextMsgs_20));
#line 402 "post_typecheck.m"
    }
#line 402 "post_typecheck.m"
    {
#line 402 "post_typecheck.m"
      check_hlds__post_typecheck__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_16));
#line 402 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__post_typecheck__V_73_73));
#line 402 "post_typecheck.m"
    }
#line 401 "post_typecheck.m"
    {
#line 401 "post_typecheck.m"
      check_hlds__post_typecheck__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 401 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 401 "post_typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 2) = ((MR_Box) (check_hlds__post_typecheck__V_72_72));
#line 401 "post_typecheck.m"
    }
#line 403 "post_typecheck.m"
    {
#line 403 "post_typecheck.m"
      MR_Word base;
#line 403 "post_typecheck.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_23 = base;
#line 403 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_21));
#line 403 "post_typecheck.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22));
#line 403 "post_typecheck.m"
    }
#line 376 "post_typecheck.m"
  }
#line 371 "post_typecheck.m"
}

#line 321 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_inner_8_p_0(
#line 321 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
#line 321 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_2,
#line 321 "post_typecheck.m"
  MR_Integer check_hlds__post_typecheck__VarsToDo_3,
#line 321 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 321 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5,
#line 321 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6,
#line 321 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7,
#line 321 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_8)
#line 321 "post_typecheck.m"
{
#line 326 "post_typecheck.m"
  while (MR_TRUE)
#line 326 "post_typecheck.m"
    {
#line 326 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 326 "post_typecheck.m"
      {
#line 326 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;

#line 326 "post_typecheck.m"
        if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "post_typecheck.m"
          {
#line 326 "post_typecheck.m"
            *check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_8 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7;
#line 327 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 326 "post_typecheck.m"
          }
#line 326 "post_typecheck.m"
        else
#line 329 "post_typecheck.m"
          {
#line 329 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Type_18;
#line 329 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 329 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 328 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, (MR_Integer) 0)));

#line 328 "post_typecheck.m"
            check_hlds__post_typecheck__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, (MR_Integer) 1)));
#line 330 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__VarsToDo_3 < (MR_Integer) 0);
#line 332 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 331 "post_typecheck.m"
              {
#line 331 "post_typecheck.m"
                *check_hlds__post_typecheck__HeadVar__4_4 = check_hlds__post_typecheck__HeadVar__1_1;
#line 331 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_8 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7;
#line 331 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 331 "post_typecheck.m"
              }
#line 332 "post_typecheck.m"
            else
#line 333 "post_typecheck.m"
              {
#line 333 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TypeInfo_42_42;
#line 333 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVars_25;
#line 333 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarsSet0_26;
#line 333 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarsSet1_27;
#line 333 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35;
#line 333 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_37_37;
#line 333 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_38_38;

#line 333 "post_typecheck.m"
                {
#line 333 "post_typecheck.m"
                  parse_tree__prog_type__type_vars_2_p_0(check_hlds__post_typecheck__Type_18, &check_hlds__post_typecheck__TVars_25);
                }
#line 9064 "check_hlds.post_typecheck.c"
                check_hlds__post_typecheck__TypeInfo_42_42 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 334 "post_typecheck.m"
                {
#line 334 "post_typecheck.m"
                  mercury__set__list_to_set_2_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVars_25, &check_hlds__post_typecheck__TVarsSet0_26);
                }
#line 335 "post_typecheck.m"
                {
#line 335 "post_typecheck.m"
                  mercury__set__delete_list_3_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__HeadTypeParams_2, check_hlds__post_typecheck__TVarsSet0_26, &check_hlds__post_typecheck__TVarsSet1_27);
                }
#line 336 "post_typecheck.m"
                {
#line 336 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVarsSet1_27);
                }
#line 338 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 337 "post_typecheck.m"
                  {
#line 337 "post_typecheck.m"
                    check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_37_37 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7;
#line 337 "post_typecheck.m"
                    check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
#line 337 "post_typecheck.m"
                  }
#line 338 "post_typecheck.m"
                else
#line 339 "post_typecheck.m"
                  {
#line 339 "post_typecheck.m"
                    {
#line 339 "post_typecheck.m"
                      check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_32_32));
#line 339 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5));
#line 339 "post_typecheck.m"
                    }
#line 340 "post_typecheck.m"
                    {
#line 340 "post_typecheck.m"
                      mercury__set__union_3_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVarsSet1_27, check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7, &check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_37_37);
                    }
#line 339 "post_typecheck.m"
                  }
#line 343 "post_typecheck.m"
                check_hlds__post_typecheck__V_38_38 = (check_hlds__post_typecheck__VarsToDo_3 - (MR_Integer) 1);
#line 342 "post_typecheck.m"
                /* direct tailcall eliminated */
#line 342 "post_typecheck.m"
                {
#line 342 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__VarTypes_19;
#line 342 "post_typecheck.m"
                  MR_Integer check_hlds__post_typecheck__VarsToDo__tmp_copy_3 = check_hlds__post_typecheck__V_38_38;
#line 342 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_5 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35;
#line 342 "post_typecheck.m"
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0__tmp_copy_7 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_37_37;

#line 342 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0__tmp_copy_7;
#line 342 "post_typecheck.m"
                  check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_5;
#line 342 "post_typecheck.m"
                  check_hlds__post_typecheck__VarsToDo_3 = check_hlds__post_typecheck__VarsToDo__tmp_copy_3;
#line 342 "post_typecheck.m"
                  check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
#line 342 "post_typecheck.m"
                }
#line 342 "post_typecheck.m"
                continue;
#line 333 "post_typecheck.m"
              }
#line 329 "post_typecheck.m"
          }
#line 326 "post_typecheck.m"
      }
#line 326 "post_typecheck.m"
      break;
#line 326 "post_typecheck.m"
    }
#line 321 "post_typecheck.m"
}

#line 304 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_var_type_bindings_6_p_0(
#line 304 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__VarTypes_7,
#line 304 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadTypeParams_8,
#line 304 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14,
#line 304 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15,
#line 304 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_16,
#line 304 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_17)
#line 304 "post_typecheck.m"
{
#line 310 "post_typecheck.m"
  while (MR_TRUE)
#line 310 "post_typecheck.m"
    {
#line 310 "post_typecheck.m"
      /* tailcall optimized into a loop */
#line 310 "post_typecheck.m"
      {
#line 310 "post_typecheck.m"
        MR_bool check_hlds__post_typecheck__succeeded;
#line 310 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__LeftOverVarTypes_11;
#line 310 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 310 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_20_20;

#line 311 "post_typecheck.m"
        {
#line 311 "post_typecheck.m"
          check_hlds__post_typecheck__check_var_type_bindings_inner_8_p_0(check_hlds__post_typecheck__VarTypes_7, check_hlds__post_typecheck__HeadTypeParams_8, (MR_Integer) 1000, &check_hlds__post_typecheck__LeftOverVarTypes_11, check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14, &check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19, check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_16, &check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_20_20);
        }
#line 315 "post_typecheck.m"
        if ((check_hlds__post_typecheck__LeftOverVarTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "post_typecheck.m"
          {
#line 314 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 314 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_17 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_20_20;
#line 314 "post_typecheck.m"
          }
#line 315 "post_typecheck.m"
        else
#line 317 "post_typecheck.m"
          {
#line 317 "post_typecheck.m"
            /* direct tailcall eliminated */
#line 317 "post_typecheck.m"
            {
#line 317 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__VarTypes__tmp_copy_7 = check_hlds__post_typecheck__LeftOverVarTypes_11;
#line 317 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_14 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
#line 317 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0__tmp_copy_16 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_20_20;

#line 317 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_16 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0__tmp_copy_16;
#line 317 "post_typecheck.m"
              check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_14;
#line 317 "post_typecheck.m"
              check_hlds__post_typecheck__VarTypes_7 = check_hlds__post_typecheck__VarTypes__tmp_copy_7;
#line 317 "post_typecheck.m"
            }
#line 317 "post_typecheck.m"
            continue;
#line 317 "post_typecheck.m"
          }
#line 310 "post_typecheck.m"
      }
#line 310 "post_typecheck.m"
      break;
#line 310 "post_typecheck.m"
    }
#line 304 "post_typecheck.m"
}

#line 357 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0_1(
#line 357 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 357 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 357 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 357 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3)
#line 357 "post_typecheck.m"
{
#line 357 "post_typecheck.m"
  {
#line 357 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 357 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_LambdaHeadVar__3_25;

#line 357 "post_typecheck.m"
    {
#line 357 "post_typecheck.m"
      check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__357__1_3_p_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv0_LambdaHeadVar__3_25);
    }
#line 357 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv0_LambdaHeadVar__3_25));
#line 357 "post_typecheck.m"
  }
#line 357 "post_typecheck.m"
}

#line 256 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(
#line 256 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
#line 256 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_8,
#line 256 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 256 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33,
#line 256 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_10,
#line 256 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34)
#line 256 "post_typecheck.m"
{
#line 260 "post_typecheck.m"
  {
#line 260 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnprovenConstraints0_12;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ClausesInfo0_16;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__HeadTypeParams_17;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarSet_18;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypesMap0_19;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__VarTypesList_20;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__BindToVoidTVars0_21;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__UnresolvedVarsTypes_22;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__BindToVoidTVars_23;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35;
#line 260 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36;

#line 261 "post_typecheck.m"
    {
#line 261 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__UnprovenConstraints0_12);
    }
#line 262 "post_typecheck.m"
    check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 269 "post_typecheck.m"
    if ((check_hlds__post_typecheck__UnprovenConstraints0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "post_typecheck.m"
      {
#line 271 "post_typecheck.m"
        *check_hlds__post_typecheck__NumBadErrors_10 = (MR_Integer) 0;
#line 270 "post_typecheck.m"
        check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35;
#line 270 "post_typecheck.m"
      }
#line 269 "post_typecheck.m"
    else
#line 264 "post_typecheck.m"
      {
#line 264 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 264 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__UnprovenConstraints_15;

#line 265 "post_typecheck.m"
        {
#line 265 "post_typecheck.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_42_42, check_hlds__post_typecheck__UnprovenConstraints0_12, &check_hlds__post_typecheck__UnprovenConstraints_15);
        }
#line 266 "post_typecheck.m"
        {
#line 266 "post_typecheck.m"
          check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__PredId_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__post_typecheck__UnprovenConstraints_15, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_35_35, &check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36);
        }
#line 268 "post_typecheck.m"
        {
#line 268 "post_typecheck.m"
          mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_42_42, check_hlds__post_typecheck__UnprovenConstraints_15, check_hlds__post_typecheck__NumBadErrors_10);
        }
#line 264 "post_typecheck.m"
      }
#line 274 "post_typecheck.m"
    {
#line 274 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ClausesInfo0_16);
    }
#line 275 "post_typecheck.m"
    {
#line 275 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__HeadTypeParams_17);
    }
#line 276 "post_typecheck.m"
    {
#line 276 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__VarSet_18);
    }
#line 277 "post_typecheck.m"
    {
#line 277 "post_typecheck.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__VarTypesMap0_19);
    }
#line 278 "post_typecheck.m"
    {
#line 278 "post_typecheck.m"
      hlds__vartypes__vartypes_to_assoc_list_2_p_0(check_hlds__post_typecheck__VarTypesMap0_19, &check_hlds__post_typecheck__VarTypesList_20);
    }
#line 279 "post_typecheck.m"
    {
#line 279 "post_typecheck.m"
      mercury__set__init_1_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], &check_hlds__post_typecheck__BindToVoidTVars0_21);
    }
#line 280 "post_typecheck.m"
    {
#line 280 "post_typecheck.m"
      check_hlds__post_typecheck__check_var_type_bindings_6_p_0(check_hlds__post_typecheck__VarTypesList_20, check_hlds__post_typecheck__HeadTypeParams_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__UnresolvedVarsTypes_22, check_hlds__post_typecheck__BindToVoidTVars0_21, &check_hlds__post_typecheck__BindToVoidTVars_23);
    }
#line 284 "post_typecheck.m"
    if ((check_hlds__post_typecheck__UnresolvedVarsTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "post_typecheck.m"
      {
#line 283 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 283 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36;
#line 283 "post_typecheck.m"
      }
#line 284 "post_typecheck.m"
    else
#line 285 "post_typecheck.m"
      {
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeInfo_36_72;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProofMap0_26;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap0_27;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypesMap_28;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ProofMap_29;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_30;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_31;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VoidSubst_58;
#line 285 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_63_63;
#line 360 "post_typecheck.m"
        MR_Box check_hlds__post_typecheck__conv1_VoidSubst_58;

#line 286 "post_typecheck.m"
        {
#line 286 "post_typecheck.m"
          check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__PredId_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__post_typecheck__VarSet_18, check_hlds__post_typecheck__UnresolvedVarsTypes_22, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_36_36, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_34);
        }
#line 290 "post_typecheck.m"
        {
#line 290 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ProofMap0_26);
        }
#line 291 "post_typecheck.m"
        {
#line 291 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__ConstraintMap0_27);
        }
#line 9445 "check_hlds.post_typecheck.c"
        check_hlds__post_typecheck__TypeInfo_36_72 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2];
#line 360 "post_typecheck.m"
        {
#line 360 "post_typecheck.m"
          check_hlds__post_typecheck__V_63_63 = mercury__map__init_0_f_0(check_hlds__post_typecheck__TypeInfo_36_72, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        }
#line 360 "post_typecheck.m"
        {
#line 360 "post_typecheck.m"
          mercury__set__fold_4_p_0(check_hlds__post_typecheck__TypeInfo_36_72, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[0], (MR_Word) &check_hlds__post_typecheck_scalar_common_2[5], check_hlds__post_typecheck__BindToVoidTVars_23, ((MR_Box) (check_hlds__post_typecheck__V_63_63)), &check_hlds__post_typecheck__conv1_VoidSubst_58);
        }
#line 360 "post_typecheck.m"
        check_hlds__post_typecheck__VoidSubst_58 = ((MR_Word) check_hlds__post_typecheck__conv1_VoidSubst_58);
#line 363 "post_typecheck.m"
        {
#line 363 "post_typecheck.m"
          hlds__vartypes__apply_subst_to_vartypes_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__VarTypesMap0_19, &check_hlds__post_typecheck__VarTypesMap_28);
        }
#line 364 "post_typecheck.m"
        {
#line 364 "post_typecheck.m"
          check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__ProofMap0_26, &check_hlds__post_typecheck__ProofMap_29);
        }
#line 365 "post_typecheck.m"
        {
#line 365 "post_typecheck.m"
          check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(check_hlds__post_typecheck__VoidSubst_58, check_hlds__post_typecheck__ConstraintMap0_27, &check_hlds__post_typecheck__ConstraintMap_30);
        }
#line 294 "post_typecheck.m"
        {
#line 294 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__post_typecheck__VarTypesMap_28, check_hlds__post_typecheck__ClausesInfo0_16, &check_hlds__post_typecheck__ClausesInfo_31);
        }
#line 295 "post_typecheck.m"
        {
#line 295 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__post_typecheck__ClausesInfo_31, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39);
        }
#line 296 "post_typecheck.m"
        {
#line 296 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__post_typecheck__ProofMap_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_39_39, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40);
        }
#line 297 "post_typecheck.m"
        {
#line 297 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__post_typecheck__ConstraintMap_30, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_40_40, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33);
#line 297 "post_typecheck.m"
          return;
        }
#line 285 "post_typecheck.m"
      }
#line 260 "post_typecheck.m"
  }
#line 256 "post_typecheck.m"
}

#line 929 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1(
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 929 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
#line 929 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
#line 929 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5)
#line 929 "post_typecheck.m"
{
#line 929 "post_typecheck.m"
  {
#line 929 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 929 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv1_Procs_12;
#line 929 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21;

#line 929 "post_typecheck.m"
    {
#line 929 "post_typecheck.m"
      check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv1_Procs_12, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_4), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21);
    }
#line 929 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv1_Procs_12));
#line 929 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21));
#line 929 "post_typecheck.m"
  }
#line 929 "post_typecheck.m"
}

#line 214 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(
#line 214 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
#line 214 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PredId_9,
#line 214 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15,
#line 214 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16,
#line 214 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_11,
#line 214 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17,
#line 214 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18)
#line 214 "post_typecheck.m"
{
#line 235 "post_typecheck.m"
  {
#line 235 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 221 "post_typecheck.m"
    {
#line 221 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15);
    }
#line 222 "post_typecheck.m"
    if (!(check_hlds__post_typecheck__succeeded))
#line 222 "post_typecheck.m"
      {
#line 222 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15);
      }
#line 235 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 228 "post_typecheck.m"
      {
#line 228 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ErrorProcs_14;
#line 228 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19;
#line 228 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 228 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_21_21;
#line 228 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22;
#line 967 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Origin_68;
#line 967 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_71_71;
#line 968 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_69_69;

#line 227 "post_typecheck.m"
        {
#line 227 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__ErrorProcs_14, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19);
        }
#line 230 "post_typecheck.m"
        check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "post_typecheck.m"
        if ((check_hlds__post_typecheck__ErrorProcs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "post_typecheck.m"
          {
#line 925 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19;
#line 925 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22 = check_hlds__post_typecheck__V_21_21;
#line 925 "post_typecheck.m"
          }
#line 925 "post_typecheck.m"
        else
#line 927 "post_typecheck.m"
          {
#line 927 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcTable0_47;
#line 927 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcTable_48;
#line 927 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_49_49;
#line 929 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv3_ProcTable_48;
#line 929 "post_typecheck.m"
            MR_Box check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22;

#line 928 "post_typecheck.m"
            {
#line 928 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__post_typecheck__ProcTable0_47);
            }
#line 929 "post_typecheck.m"
            {
#line 929 "post_typecheck.m"
              check_hlds__post_typecheck__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 929 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
#line 929 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0_1));
#line 929 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 929 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 3) = ((MR_Box) (check_hlds__post_typecheck__ModuleInfo_8));
#line 929 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_49_49, 4) = ((MR_Box) (check_hlds__post_typecheck__PredId_9));
#line 929 "post_typecheck.m"
            }
#line 929 "post_typecheck.m"
            {
#line 929 "post_typecheck.m"
              mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[3], (MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], check_hlds__post_typecheck__V_49_49, check_hlds__post_typecheck__ErrorProcs_14, ((MR_Box) (check_hlds__post_typecheck__ProcTable0_47)), &check_hlds__post_typecheck__conv3_ProcTable_48, ((MR_Box) (check_hlds__post_typecheck__V_21_21)), &check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22);
            }
#line 929 "post_typecheck.m"
            check_hlds__post_typecheck__ProcTable_48 = ((MR_Word) check_hlds__post_typecheck__conv3_ProcTable_48);
#line 929 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22 = ((MR_Word) check_hlds__post_typecheck__conv2_STATE_VARIABLE_AlwaysSpecs_22_22);
#line 931 "post_typecheck.m"
            {
#line 931 "post_typecheck.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__ProcTable_48, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 927 "post_typecheck.m"
          }
#line 967 "post_typecheck.m"
        {
#line 967 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__post_typecheck__Origin_68);
        }
#line 968 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Origin_68)) == (MR_mktag((MR_Integer) 0)));
#line 968 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 968 "post_typecheck.m"
          {
#line 968 "post_typecheck.m"
            check_hlds__post_typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_68, (MR_Integer) 0)));
#line 968 "post_typecheck.m"
            check_hlds__post_typecheck__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_68, (MR_Integer) 1)));
#line 968 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_71_71 == (MR_Integer) 0);
#line 968 "post_typecheck.m"
          }
#line 971 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 970 "post_typecheck.m"
          {
#line 970 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17 = check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22;
#line 970 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 970 "post_typecheck.m"
          }
#line 971 "post_typecheck.m"
        else
#line 972 "post_typecheck.m"
          {
#line 972 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_70;

#line 972 "post_typecheck.m"
            {
#line 972 "post_typecheck.m"
              check_hlds__post_typecheck__ProcIds_70 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 973 "post_typecheck.m"
            {
#line 973 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ProcIds_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_20_20, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_22_22, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17);
            }
#line 972 "post_typecheck.m"
          }
#line 233 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 234 "post_typecheck.m"
        *check_hlds__post_typecheck__NumBadErrors_11 = (MR_Integer) 0;
#line 228 "post_typecheck.m"
      }
#line 235 "post_typecheck.m"
    else
#line 237 "post_typecheck.m"
      {
#line 237 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26;
#line 237 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28;
#line 237 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29;
#line 237 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31;
#line 237 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33;
#line 237 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ErrorProcs_35;
#line 967 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Origin_83;
#line 967 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_86_86;
#line 968 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_84_84;

#line 236 "post_typecheck.m"
        {
#line 236 "post_typecheck.m"
          check_hlds__post_typecheck__check_pred_type_bindings_6_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_15, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26, check_hlds__post_typecheck__NumBadErrors_11, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_18);
        }
#line 239 "post_typecheck.m"
        {
#line 239 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(check_hlds__post_typecheck__ModuleInfo_8, &check_hlds__post_typecheck__ErrorProcs_35, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_26_26, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28);
        }
#line 240 "post_typecheck.m"
        {
#line 240 "post_typecheck.m"
          check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ErrorProcs_35, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31);
        }
#line 967 "post_typecheck.m"
        {
#line 967 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, &check_hlds__post_typecheck__Origin_83);
        }
#line 968 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Origin_83)) == (MR_mktag((MR_Integer) 0)));
#line 968 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 968 "post_typecheck.m"
          {
#line 968 "post_typecheck.m"
            check_hlds__post_typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_83, (MR_Integer) 0)));
#line 968 "post_typecheck.m"
            check_hlds__post_typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_83, (MR_Integer) 1)));
#line 968 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_86_86 == (MR_Integer) 0);
#line 968 "post_typecheck.m"
          }
#line 971 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 970 "post_typecheck.m"
          {
#line 970 "post_typecheck.m"
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33 = check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31;
#line 970 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29;
#line 970 "post_typecheck.m"
          }
#line 971 "post_typecheck.m"
        else
#line 972 "post_typecheck.m"
          {
#line 972 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ProcIds_85;

#line 972 "post_typecheck.m"
            {
#line 972 "post_typecheck.m"
              check_hlds__post_typecheck__ProcIds_85 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29);
            }
#line 973 "post_typecheck.m"
            {
#line 973 "post_typecheck.m"
              check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(check_hlds__post_typecheck__ModuleInfo_8, check_hlds__post_typecheck__PredId_9, check_hlds__post_typecheck__ProcIds_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_29_29, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_31_31, &check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33);
            }
#line 972 "post_typecheck.m"
          }
#line 246 "post_typecheck.m"
        {
#line 246 "post_typecheck.m"
          check_hlds__post_typecheck__check_type_of_main_3_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_16, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_17);
#line 246 "post_typecheck.m"
          return;
        }
#line 237 "post_typecheck.m"
      }
#line 235 "post_typecheck.m"
  }
#line 214 "post_typecheck.m"
}

#line 188 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(
#line 188 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
#line 188 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ValidPredIdSet_2,
#line 188 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
#line 188 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
#line 188 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__HeadVar__5_5,
#line 188 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__6_6,
#line 188 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__HeadVar__7_7)
#line 188 "post_typecheck.m"
{
#line 193 "post_typecheck.m"
  {
#line 193 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;

#line 193 "post_typecheck.m"
    if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 193 "post_typecheck.m"
      {
#line 193 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 0;
#line 193 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "post_typecheck.m"
      }
#line 193 "post_typecheck.m"
    else
#line 197 "post_typecheck.m"
      {
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdsInfos0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdInfo_14;
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIdsInfos_15;
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadAlwaysSpecs_17;
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TailAlwaysSpecs_18;
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19;
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TailNoTypeErrorSpecs_20;
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo0_12, (MR_Integer) 0)));
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo0_12, (MR_Integer) 1)));
#line 197 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo_23;
#line 197 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__HeadNumBadErrors_24;
#line 197 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__TailNumBadErrors_25;

#line 199 "post_typecheck.m"
        {
#line 199 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__post_typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__post_typecheck__PredId_21)));
        }
#line 202 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 200 "post_typecheck.m"
          {
#line 200 "post_typecheck.m"
            check_hlds__post_typecheck__post_typecheck_do_finish_pred_7_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__PredId_21, check_hlds__post_typecheck__PredInfo0_22, &check_hlds__post_typecheck__PredInfo_23, &check_hlds__post_typecheck__HeadNumBadErrors_24, &check_hlds__post_typecheck__HeadAlwaysSpecs_17, &check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19);
          }
#line 202 "post_typecheck.m"
        else
#line 203 "post_typecheck.m"
          {
#line 203 "post_typecheck.m"
            check_hlds__post_typecheck__PredInfo_23 = check_hlds__post_typecheck__PredInfo0_22;
#line 204 "post_typecheck.m"
            check_hlds__post_typecheck__HeadNumBadErrors_24 = (MR_Integer) 0;
#line 205 "post_typecheck.m"
            check_hlds__post_typecheck__HeadAlwaysSpecs_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 206 "post_typecheck.m"
            check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 203 "post_typecheck.m"
          }
#line 208 "post_typecheck.m"
        {
#line 208 "post_typecheck.m"
          check_hlds__post_typecheck__PredIdInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo_14, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_21));
#line 208 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__PredIdInfo_14, 1) = ((MR_Box) (check_hlds__post_typecheck__PredInfo_23));
#line 208 "post_typecheck.m"
        }
#line 209 "post_typecheck.m"
        {
#line 209 "post_typecheck.m"
          check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__ValidPredIdSet_2, check_hlds__post_typecheck__PredIdsInfos0_13, &check_hlds__post_typecheck__PredIdsInfos_15, &check_hlds__post_typecheck__TailNumBadErrors_25, &check_hlds__post_typecheck__TailAlwaysSpecs_18, &check_hlds__post_typecheck__TailNoTypeErrorSpecs_20);
        }
#line 195 "post_typecheck.m"
        {
#line 195 "post_typecheck.m"
          MR_Word base;
#line 195 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__4_4 = base;
#line 195 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__PredIdInfo_14));
#line 195 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__PredIdsInfos_15));
#line 195 "post_typecheck.m"
        }
#line 196 "post_typecheck.m"
        {
#line 196 "post_typecheck.m"
          MR_Word base;
#line 196 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__6_6 = base;
#line 196 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HeadAlwaysSpecs_17));
#line 196 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__TailAlwaysSpecs_18));
#line 196 "post_typecheck.m"
        }
#line 197 "post_typecheck.m"
        {
#line 197 "post_typecheck.m"
          MR_Word base;
#line 197 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "post_typecheck.m"
          *check_hlds__post_typecheck__HeadVar__7_7 = base;
#line 197 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HeadNoTypeErrorSpecs_19));
#line 197 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__TailNoTypeErrorSpecs_20));
#line 197 "post_typecheck.m"
        }
#line 212 "post_typecheck.m"
        *check_hlds__post_typecheck__HeadVar__5_5 = (check_hlds__post_typecheck__HeadNumBadErrors_24 + check_hlds__post_typecheck__TailNumBadErrors_25);
#line 197 "post_typecheck.m"
      }
#line 193 "post_typecheck.m"
  }
#line 188 "post_typecheck.m"
}

#line 1118 "post_typecheck.m"
static MR_bool MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1(
#line 1118 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1118 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1118 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_2)
#line 1118 "post_typecheck.m"
{
#line 1118 "post_typecheck.m"
  {
#line 1118 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1118 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1118 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__5_5;

#line 1118 "post_typecheck.m"
    {
#line 1118 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_data__search_hlds_constraint_list_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 5))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), &check_hlds__post_typecheck__conv0_HeadVar__5_5);
    }
#line 1118 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1118 "post_typecheck.m"
      {
#line 1118 "post_typecheck.m"
        *check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__5_5));
#line 1118 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1118 "post_typecheck.m"
      }
#line 1118 "post_typecheck.m"
    return check_hlds__post_typecheck__succeeded;
#line 1118 "post_typecheck.m"
  }
#line 1118 "post_typecheck.m"
}

#line 120 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__resolve_unify_functor_16_p_0(
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__X0_17,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ConsId0_18,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ArgVars0_19,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Mode0_20,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Unification0_21,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__UnifyContext_22,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__GoalInfo0_23,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_24,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105,
#line 120 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_106,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_107,
#line 120 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarSet_108,
#line 120 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109,
#line 120 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_110,
#line 120 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Goal_28,
#line 120 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__IsPlainUnify_29)
#line 120 "post_typecheck.m"
{
#line 1049 "post_typecheck.m"
  {
#line 1049 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1049 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeInfo_203_203;
#line 1049 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeOfX_30;
#line 1049 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__Arity_31;
#line 1078 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Purity_35;
#line 1078 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FuncVar_36;
#line 1078 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__FuncArgVars_37;
#line 1057 "post_typecheck.m"
    MR_String check_hlds__post_typecheck__ApplyName_32;
#line 1057 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_111_111;
#line 1057 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_112_112;
#line 1057 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__V_33_33;
#line 1057 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_34_34;
#line 1059 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__lo_0;
#line 1059 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__hi_1;
#line 1059 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__mid_2;
#line 1059 "post_typecheck.m"
    MR_Integer check_hlds__post_typecheck__result_3;

#line 1050 "post_typecheck.m"
    {
#line 1050 "post_typecheck.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109, check_hlds__post_typecheck__X0_17, &check_hlds__post_typecheck__TypeOfX_30);
    }
#line 10103 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeInfo_203_203 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[1];
#line 1051 "post_typecheck.m"
    {
#line 1051 "post_typecheck.m"
      mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__Arity_31);
    }
#line 1057 "post_typecheck.m"
    check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1057 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1057 "post_typecheck.m"
      {
#line 1057 "post_typecheck.m"
        check_hlds__post_typecheck__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1057 "post_typecheck.m"
        check_hlds__post_typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1057 "post_typecheck.m"
        check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1057 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_111_111)) == (MR_mktag((MR_Integer) 0)));
#line 1057 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1057 "post_typecheck.m"
          {
#line 1057 "post_typecheck.m"
            check_hlds__post_typecheck__ApplyName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_111_111, (MR_Integer) 0)));
#line 1059 "post_typecheck.m"
            /* binary string simple lookup switch */
#line 1059 "post_typecheck.m"
            check_hlds__post_typecheck__lo_0 = (MR_Integer) 0;
#line 1059 "post_typecheck.m"
            check_hlds__post_typecheck__hi_1 = (MR_Integer) 3;
#line 1059 "post_typecheck.m"
            do
#line 1059 "post_typecheck.m"
              {
#line 1059 "post_typecheck.m"
                check_hlds__post_typecheck__mid_2 = (((check_hlds__post_typecheck__lo_0 + check_hlds__post_typecheck__hi_1)) / (MR_Integer) 2);
#line 1059 "post_typecheck.m"
                check_hlds__post_typecheck__result_3 = MR_strcmp(check_hlds__post_typecheck__ApplyName_32, ((&check_hlds__post_typecheck_vector_common_5[0 + check_hlds__post_typecheck__mid_2]))->check_hlds__post_typecheck__vector_common_type_5_0__vct_5_f_0);
#line 1059 "post_typecheck.m"
                if ((check_hlds__post_typecheck__result_3 == (MR_Integer) 0))
#line 1059 "post_typecheck.m"
                  {
#line 1059 "post_typecheck.m"
                    check_hlds__post_typecheck__Purity_35 = ((&check_hlds__post_typecheck_vector_common_5[0 + check_hlds__post_typecheck__mid_2]))->check_hlds__post_typecheck__vector_common_type_5_0__vct_5_f_1;
#line 1059 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = MR_TRUE;
#line 1059 "post_typecheck.m"
                    /* jump out of search loop */
#line 1059 "post_typecheck.m"
                    goto label_0;
#line 1059 "post_typecheck.m"
                  }
#line 1059 "post_typecheck.m"
                else
#line 1059 "post_typecheck.m"
                if ((check_hlds__post_typecheck__result_3 < (MR_Integer) 0))
#line 1059 "post_typecheck.m"
                  check_hlds__post_typecheck__hi_1 = (check_hlds__post_typecheck__mid_2 - (MR_Integer) 1);
#line 1059 "post_typecheck.m"
                else
#line 1059 "post_typecheck.m"
                  check_hlds__post_typecheck__lo_0 = (check_hlds__post_typecheck__mid_2 + (MR_Integer) 1);
#line 1059 "post_typecheck.m"
              }
#line 1059 "post_typecheck.m"
            while ((check_hlds__post_typecheck__lo_0 <= check_hlds__post_typecheck__hi_1));
#line 1059 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = MR_FALSE;
#line 1059 "post_typecheck.m"
          label_0:;
#line 1057 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1057 "post_typecheck.m"
              {
#line 1063 "post_typecheck.m"
                check_hlds__post_typecheck__V_112_112 = (MR_Integer) 1;
#line 1063 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 >= check_hlds__post_typecheck__V_112_112);
#line 1057 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1057 "post_typecheck.m"
                  {
#line 1064 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ArgVars0_19)) == (MR_mktag((MR_Integer) 1)));
#line 1064 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1064 "post_typecheck.m"
                      {
#line 1064 "post_typecheck.m"
                        check_hlds__post_typecheck__FuncVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgVars0_19, (MR_Integer) 0)));
#line 1064 "post_typecheck.m"
                        check_hlds__post_typecheck__FuncArgVars_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgVars0_19, (MR_Integer) 1)));
#line 1064 "post_typecheck.m"
                      }
#line 1057 "post_typecheck.m"
                  }
#line 1057 "post_typecheck.m"
              }
#line 1057 "post_typecheck.m"
          }
#line 1057 "post_typecheck.m"
      }
#line 1078 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 1069 "post_typecheck.m"
      {
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgVars_38;
#line 1069 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__FullArity_41;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HOCall_42;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_113_113;
#line 1069 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_116_116;

#line 1069 "post_typecheck.m"
        {
#line 1069 "post_typecheck.m"
          check_hlds__post_typecheck__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_113_113, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1069 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1069 "post_typecheck.m"
        }
#line 1069 "post_typecheck.m"
        {
#line 1069 "post_typecheck.m"
          check_hlds__post_typecheck__ArgVars_38 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__FuncArgVars_37, check_hlds__post_typecheck__V_113_113);
        }
#line 1072 "post_typecheck.m"
        {
#line 1072 "post_typecheck.m"
          parse_tree__prog_util__adjust_func_arity_3_p_0((MR_Integer) 1, check_hlds__post_typecheck__Arity_31, &check_hlds__post_typecheck__FullArity_41);
        }
#line 1074 "post_typecheck.m"
        {
#line 1074 "post_typecheck.m"
          check_hlds__post_typecheck__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_116_116, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncVar_36));
#line 1074 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_116_116, 1) = ((MR_Box) (check_hlds__post_typecheck__Purity_35));
#line 1074 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_116_116, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1074 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_116_116, 3) = ((MR_Box) (check_hlds__post_typecheck__FullArity_41));
#line 1074 "post_typecheck.m"
        }
#line 1073 "post_typecheck.m"
        {
#line 1073 "post_typecheck.m"
          check_hlds__post_typecheck__HOCall_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1073 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 1) = ((MR_Box) (check_hlds__post_typecheck__V_116_116));
#line 1073 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_38));
#line 1073 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1073 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1073 "post_typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__HOCall_42, 5) = ((MR_Box) ((MR_Integer) 6));
#line 1073 "post_typecheck.m"
        }
#line 1076 "post_typecheck.m"
        {
#line 1076 "post_typecheck.m"
          MR_Word base;
#line 1076 "post_typecheck.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "post_typecheck.m"
          *check_hlds__post_typecheck__Goal_28 = base;
#line 1076 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__HOCall_42));
#line 1076 "post_typecheck.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1076 "post_typecheck.m"
        }
#line 1077 "post_typecheck.m"
        *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1069 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_110 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109;
#line 1069 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_108 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_107;
#line 1069 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_106 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105;
#line 1069 "post_typecheck.m"
      }
#line 1078 "post_typecheck.m"
    else
#line 1135 "post_typecheck.m"
      {
#line 1135 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredId_60;
#line 1135 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__QualifiedFuncName_61;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TypeCtorInfo_204_204;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredName_43;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Markers_46;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredTable_47;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredIds_48;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_51;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistQTVars_52;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadTypeParams_53;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes0_54;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_55;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintMap_56;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__GoalId_57;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ConstraintSearch_58;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Context_59;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_119_119;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_120_120;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_121_121;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_122_122;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_123_123;
#line 1084 "post_typecheck.m"
        MR_Integer check_hlds__post_typecheck__V_44_44;
#line 1084 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_45_45;
#line 1091 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_49_49;
#line 1091 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__V_50_50;

#line 1084 "post_typecheck.m"
        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1084 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1084 "post_typecheck.m"
          {
#line 1084 "post_typecheck.m"
            check_hlds__post_typecheck__PredName_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1084 "post_typecheck.m"
            check_hlds__post_typecheck__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1084 "post_typecheck.m"
            check_hlds__post_typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1086 "post_typecheck.m"
            {
#line 1086 "post_typecheck.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__Markers_46);
            }
#line 1087 "post_typecheck.m"
            {
#line 1087 "post_typecheck.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, &check_hlds__post_typecheck__PredTable_47);
            }
#line 1090 "post_typecheck.m"
            {
#line 1090 "post_typecheck.m"
              check_hlds__post_typecheck__V_119_119 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__post_typecheck__Markers_46);
            }
#line 1089 "post_typecheck.m"
            {
#line 1089 "post_typecheck.m"
              hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(check_hlds__post_typecheck__PredTable_47, check_hlds__post_typecheck__V_119_119, check_hlds__post_typecheck__PredName_43, check_hlds__post_typecheck__Arity_31, &check_hlds__post_typecheck__PredIds_48);
            }
#line 1091 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__PredIds_48)) == (MR_mktag((MR_Integer) 1)));
#line 1091 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1091 "post_typecheck.m"
              {
#line 1091 "post_typecheck.m"
                check_hlds__post_typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PredIds_48, (MR_Integer) 0)));
#line 1091 "post_typecheck.m"
                check_hlds__post_typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PredIds_48, (MR_Integer) 1)));
#line 1100 "post_typecheck.m"
                {
#line 1100 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105);
                }
#line 1100 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1084 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1084 "post_typecheck.m"
                  {
#line 1105 "post_typecheck.m"
                    {
#line 1105 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105);
                    }
#line 1105 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1084 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1084 "post_typecheck.m"
                      {
#line 1110 "post_typecheck.m"
                        {
#line 1110 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__TVarSet_51);
                        }
#line 1111 "post_typecheck.m"
                        {
#line 1111 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__ExistQTVars_52);
                        }
#line 1112 "post_typecheck.m"
                        {
#line 1112 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__HeadTypeParams_53);
                        }
#line 1113 "post_typecheck.m"
                        {
#line 1113 "post_typecheck.m"
                          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_54);
                        }
#line 10438 "check_hlds.post_typecheck.c"
                        check_hlds__post_typecheck__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1114 "post_typecheck.m"
                        check_hlds__post_typecheck__V_121_121 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1114 "post_typecheck.m"
                        {
#line 1114 "post_typecheck.m"
                          check_hlds__post_typecheck__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_120_120, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeOfX_30));
#line 1114 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_120_120, 1) = ((MR_Box) (check_hlds__post_typecheck__V_121_121));
#line 1114 "post_typecheck.m"
                        }
#line 1114 "post_typecheck.m"
                        {
#line 1114 "post_typecheck.m"
                          check_hlds__post_typecheck__ArgTypes_55 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_204_204, check_hlds__post_typecheck__ArgTypes0_54, check_hlds__post_typecheck__V_120_120);
                        }
#line 1115 "post_typecheck.m"
                        {
#line 1115 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__ConstraintMap_56);
                        }
#line 1116 "post_typecheck.m"
                        {
#line 1116 "post_typecheck.m"
                          check_hlds__post_typecheck__GoalId_57 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1118 "post_typecheck.m"
                        check_hlds__post_typecheck__V_122_122 = (MR_Integer) 0;
#line 1118 "post_typecheck.m"
                        {
#line 1118 "post_typecheck.m"
                          check_hlds__post_typecheck__ConstraintSearch_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[0]));
#line 1118 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 1) = ((MR_Box) (check_hlds__post_typecheck__resolve_unify_functor_16_p_0_1));
#line 1118 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1118 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 3) = ((MR_Box) (check_hlds__post_typecheck__ConstraintMap_56));
#line 1118 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 4) = ((MR_Box) (check_hlds__post_typecheck__V_122_122));
#line 1118 "post_typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__ConstraintSearch_58, 5) = ((MR_Box) (check_hlds__post_typecheck__GoalId_57));
#line 1118 "post_typecheck.m"
                        }
#line 1119 "post_typecheck.m"
                        {
#line 1119 "post_typecheck.m"
                          check_hlds__post_typecheck__Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1121 "post_typecheck.m"
                        {
#line 1121 "post_typecheck.m"
                          check_hlds__post_typecheck__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_123_123, 0) = ((MR_Box) (check_hlds__post_typecheck__ConstraintSearch_58));
#line 1121 "post_typecheck.m"
                        }
#line 1120 "post_typecheck.m"
                        {
#line 1120 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__PredIds_48, check_hlds__post_typecheck__TVarSet_51, check_hlds__post_typecheck__ExistQTVars_52, check_hlds__post_typecheck__ArgTypes_55, check_hlds__post_typecheck__HeadTypeParams_53, check_hlds__post_typecheck__V_123_123, check_hlds__post_typecheck__Context_59, &check_hlds__post_typecheck__PredId_60, &check_hlds__post_typecheck__QualifiedFuncName_61);
                        }
#line 1084 "post_typecheck.m"
                      }
#line 1084 "post_typecheck.m"
                  }
#line 1091 "post_typecheck.m"
              }
#line 1084 "post_typecheck.m"
          }
#line 1135 "post_typecheck.m"
        if (check_hlds__post_typecheck__succeeded)
#line 1127 "post_typecheck.m"
          {
#line 1127 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__ProcId_62;
#line 1127 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__FuncCallUnifyContext_63;
#line 1127 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__FuncCall_64;
#line 1127 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_124_124;
#line 1127 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_126_126;
#line 1127 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_129_129;
#line 1127 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgVars_172;

#line 1127 "post_typecheck.m"
            {
#line 1127 "post_typecheck.m"
              check_hlds__post_typecheck__ProcId_62 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 1128 "post_typecheck.m"
            {
#line 1128 "post_typecheck.m"
              check_hlds__post_typecheck__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_124_124, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1128 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "post_typecheck.m"
            }
#line 1128 "post_typecheck.m"
            {
#line 1128 "post_typecheck.m"
              check_hlds__post_typecheck__ArgVars_172 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeInfo_203_203, check_hlds__post_typecheck__ArgVars0_19, check_hlds__post_typecheck__V_124_124);
            }
#line 1130 "post_typecheck.m"
            {
#line 1130 "post_typecheck.m"
              check_hlds__post_typecheck__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_126_126, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId0_18));
#line 1130 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_126_126, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1130 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_126_126, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1130 "post_typecheck.m"
            }
#line 1129 "post_typecheck.m"
            {
#line 1129 "post_typecheck.m"
              check_hlds__post_typecheck__FuncCallUnifyContext_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1129 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 1) = ((MR_Box) (check_hlds__post_typecheck__V_126_126));
#line 1129 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FuncCallUnifyContext_63, 2) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1129 "post_typecheck.m"
            }
#line 1132 "post_typecheck.m"
            {
#line 1132 "post_typecheck.m"
              check_hlds__post_typecheck__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "post_typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_129_129, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncCallUnifyContext_63));
#line 1132 "post_typecheck.m"
            }
#line 1131 "post_typecheck.m"
            {
#line 1131 "post_typecheck.m"
              check_hlds__post_typecheck__FuncCall_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_60));
#line 1131 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 1) = ((MR_Box) (check_hlds__post_typecheck__ProcId_62));
#line 1131 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars_172));
#line 1131 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1131 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 4) = ((MR_Box) (check_hlds__post_typecheck__V_129_129));
#line 1131 "post_typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__FuncCall_64, 5) = ((MR_Box) (check_hlds__post_typecheck__QualifiedFuncName_61));
#line 1131 "post_typecheck.m"
            }
#line 1133 "post_typecheck.m"
            {
#line 1133 "post_typecheck.m"
              MR_Word base;
#line 1133 "post_typecheck.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "post_typecheck.m"
              *check_hlds__post_typecheck__Goal_28 = base;
#line 1133 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__FuncCall_64));
#line 1133 "post_typecheck.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1133 "post_typecheck.m"
            }
#line 1134 "post_typecheck.m"
            *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1127 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_110 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109;
#line 1127 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_108 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_107;
#line 1127 "post_typecheck.m"
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_106 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105;
#line 1127 "post_typecheck.m"
          }
#line 1135 "post_typecheck.m"
        else
#line 1190 "post_typecheck.m"
          {
#line 1190 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Name_65;
#line 1190 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Context_199;
#line 1190 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PredId_200;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TypeCtorInfo_207_207;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__PredOrFunc_69;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__HOArgTypes_71;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__AllArgTypes_72;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ExistQVars_73;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_130_130;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__Markers_173;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__TVarSet_174;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__HeadTypeParams_175;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__ArgTypes0_176;
#line 1137 "post_typecheck.m"
            MR_Integer check_hlds__post_typecheck__V_66_66;
#line 1137 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck__V_67_67;
#line 1138 "post_typecheck.m"
            MR_Word check_hlds__post_typecheck___Purity_68;

#line 1137 "post_typecheck.m"
            check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1137 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1137 "post_typecheck.m"
              {
#line 1137 "post_typecheck.m"
                check_hlds__post_typecheck__Name_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1137 "post_typecheck.m"
                check_hlds__post_typecheck__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1137 "post_typecheck.m"
                check_hlds__post_typecheck__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1138 "post_typecheck.m"
                {
#line 1138 "post_typecheck.m"
                  check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__post_typecheck__TypeOfX_30, &check_hlds__post_typecheck___Purity_68, &check_hlds__post_typecheck__PredOrFunc_69, &check_hlds__post_typecheck__HOArgTypes_71);
                }
#line 1137 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1137 "post_typecheck.m"
                  {
#line 1144 "post_typecheck.m"
                    {
#line 1144 "post_typecheck.m"
                      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105);
                    }
#line 1144 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1137 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1137 "post_typecheck.m"
                      {
#line 1147 "post_typecheck.m"
                        {
#line 1147 "post_typecheck.m"
                          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_176);
                        }
#line 10700 "check_hlds.post_typecheck.c"
                        check_hlds__post_typecheck__TypeCtorInfo_207_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1148 "post_typecheck.m"
                        {
#line 1148 "post_typecheck.m"
                          check_hlds__post_typecheck__AllArgTypes_72 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_207_207, check_hlds__post_typecheck__ArgTypes0_176, check_hlds__post_typecheck__HOArgTypes_71);
                        }
#line 1149 "post_typecheck.m"
                        {
#line 1149 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__TVarSet_174);
                        }
#line 1150 "post_typecheck.m"
                        {
#line 1150 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__ExistQVars_73);
                        }
#line 1151 "post_typecheck.m"
                        {
#line 1151 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__HeadTypeParams_175);
                        }
#line 1152 "post_typecheck.m"
                        {
#line 1152 "post_typecheck.m"
                          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__Markers_173);
                        }
#line 1153 "post_typecheck.m"
                        {
#line 1153 "post_typecheck.m"
                          check_hlds__post_typecheck__Context_199 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo0_23);
                        }
#line 1154 "post_typecheck.m"
                        {
#line 1154 "post_typecheck.m"
                          check_hlds__post_typecheck__V_130_130 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__post_typecheck__Markers_173);
                        }
#line 1154 "post_typecheck.m"
                        {
#line 1154 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(check_hlds__post_typecheck__V_130_130, check_hlds__post_typecheck__Name_65, check_hlds__post_typecheck__PredOrFunc_69, check_hlds__post_typecheck__TVarSet_174, check_hlds__post_typecheck__ExistQVars_73, check_hlds__post_typecheck__AllArgTypes_72, check_hlds__post_typecheck__HeadTypeParams_175, check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__Context_199, &check_hlds__post_typecheck__PredId_200);
                        }
#line 1137 "post_typecheck.m"
                      }
#line 1137 "post_typecheck.m"
                  }
#line 1137 "post_typecheck.m"
              }
#line 1190 "post_typecheck.m"
            if (check_hlds__post_typecheck__succeeded)
#line 1158 "post_typecheck.m"
              {
#line 1158 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__PredInfo_25;
#line 1158 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ProcIds_74;
#line 1158 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__MaybeProcId_76;

#line 1158 "post_typecheck.m"
                {
#line 1158 "post_typecheck.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__PredId_200, &check_hlds__post_typecheck__PredInfo_25);
                }
#line 1159 "post_typecheck.m"
                {
#line 1159 "post_typecheck.m"
                  check_hlds__post_typecheck__ProcIds_74 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__PredInfo_25);
                }
#line 1163 "post_typecheck.m"
                if ((check_hlds__post_typecheck__ProcIds_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1168 "post_typecheck.m"
                  check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1163 "post_typecheck.m"
                else
#line 1163 "post_typecheck.m"
                  {
#line 1163 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ProcIds_74, (MR_Integer) 1)));
#line 1163 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ProcIds_74, (MR_Integer) 0)));

#line 1163 "post_typecheck.m"
                    if ((check_hlds__post_typecheck__V_211_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1162 "post_typecheck.m"
                      {
#line 1162 "post_typecheck.m"
                        check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "post_typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, 0) = ((MR_Box) (check_hlds__post_typecheck__V_212_212));
#line 1162 "post_typecheck.m"
                      }
#line 1163 "post_typecheck.m"
                    else
#line 1164 "post_typecheck.m"
                      {
#line 1164 "post_typecheck.m"
                        MR_Integer check_hlds__post_typecheck__V_132_132;

#line 1166 "post_typecheck.m"
                        {
#line 1166 "post_typecheck.m"
                          check_hlds__post_typecheck__V_132_132 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                        }
#line 1166 "post_typecheck.m"
                        {
#line 1166 "post_typecheck.m"
                          check_hlds__post_typecheck__MaybeProcId_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "post_typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, 0) = ((MR_Box) (check_hlds__post_typecheck__V_132_132));
#line 1166 "post_typecheck.m"
                        }
#line 1164 "post_typecheck.m"
                      }
#line 1163 "post_typecheck.m"
                  }
#line 1180 "post_typecheck.m"
                if ((check_hlds__post_typecheck__MaybeProcId_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1181 "post_typecheck.m"
                  {
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Pieces_83;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Msg_84;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__Spec_85;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_136_136;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_139_139;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_140_140;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_141_141;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_148_148;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_149_149;
#line 1181 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_153_153;

#line 1182 "post_typecheck.m"
                    {
#line 1182 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = hlds__make_goal__true_goal_0_f_0();
                    }
#line 1185 "post_typecheck.m"
                    {
#line 1185 "post_typecheck.m"
                      check_hlds__post_typecheck__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1185 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_141_141, 0) = ((MR_Box) (check_hlds__post_typecheck__Name_65));
#line 1185 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_141_141, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1185 "post_typecheck.m"
                    }
#line 1185 "post_typecheck.m"
                    {
#line 1185 "post_typecheck.m"
                      check_hlds__post_typecheck__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1185 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_140_140, 1) = ((MR_Box) (check_hlds__post_typecheck__V_141_141));
#line 1185 "post_typecheck.m"
                    }
#line 1185 "post_typecheck.m"
                    {
#line 1185 "post_typecheck.m"
                      check_hlds__post_typecheck__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_139_139, 0) = ((MR_Box) (check_hlds__post_typecheck__V_140_140));
#line 1185 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])));
#line 1185 "post_typecheck.m"
                    }
#line 1184 "post_typecheck.m"
                    {
#line 1184 "post_typecheck.m"
                      check_hlds__post_typecheck__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_136_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[58])));
#line 1184 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_136_136, 1) = ((MR_Box) (check_hlds__post_typecheck__V_139_139));
#line 1184 "post_typecheck.m"
                    }
#line 1183 "post_typecheck.m"
                    {
#line 1183 "post_typecheck.m"
                      check_hlds__post_typecheck__Pieces_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[57])));
#line 1183 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_83, 1) = ((MR_Box) (check_hlds__post_typecheck__V_136_136));
#line 1183 "post_typecheck.m"
                    }
#line 1186 "post_typecheck.m"
                    {
#line 1186 "post_typecheck.m"
                      check_hlds__post_typecheck__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1186 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_149_149, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_83));
#line 1186 "post_typecheck.m"
                    }
#line 1186 "post_typecheck.m"
                    {
#line 1186 "post_typecheck.m"
                      check_hlds__post_typecheck__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_148_148, 0) = ((MR_Box) (check_hlds__post_typecheck__V_149_149));
#line 1186 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1186 "post_typecheck.m"
                    }
#line 1186 "post_typecheck.m"
                    {
#line 1186 "post_typecheck.m"
                      check_hlds__post_typecheck__Msg_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1186 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_84, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_199));
#line 1186 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_84, 1) = ((MR_Box) (check_hlds__post_typecheck__V_148_148));
#line 1186 "post_typecheck.m"
                    }
#line 1187 "post_typecheck.m"
                    {
#line 1187 "post_typecheck.m"
                      check_hlds__post_typecheck__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_153_153, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_84));
#line 1187 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1187 "post_typecheck.m"
                    }
#line 1187 "post_typecheck.m"
                    {
#line 1187 "post_typecheck.m"
                      check_hlds__post_typecheck__Spec_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1187 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 1187 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_85, 2) = ((MR_Box) (check_hlds__post_typecheck__V_153_153));
#line 1187 "post_typecheck.m"
                    }
#line 1188 "post_typecheck.m"
                    {
#line 1188 "post_typecheck.m"
                      MR_Word base;
#line 1188 "post_typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "post_typecheck.m"
                      *check_hlds__post_typecheck__IsPlainUnify_29 = base;
#line 1188 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_85));
#line 1188 "post_typecheck.m"
                    }
#line 1181 "post_typecheck.m"
                  }
#line 1180 "post_typecheck.m"
                else
#line 1172 "post_typecheck.m"
                  {
#line 1172 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ShroudedPredProcId_80;
#line 1172 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ConsId_81;
#line 1172 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__GoalExpr_82;
#line 1172 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_155_155;
#line 1172 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__V_156_156;
#line 1172 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__ProcId_177 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__MaybeProcId_76, (MR_Integer) 0)));

#line 1173 "post_typecheck.m"
                    {
#line 1173 "post_typecheck.m"
                      check_hlds__post_typecheck__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_155_155, 0) = ((MR_Box) (check_hlds__post_typecheck__PredId_200));
#line 1173 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_155_155, 1) = ((MR_Box) (check_hlds__post_typecheck__ProcId_177));
#line 1173 "post_typecheck.m"
                    }
#line 1173 "post_typecheck.m"
                    {
#line 1173 "post_typecheck.m"
                      check_hlds__post_typecheck__ShroudedPredProcId_80 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(check_hlds__post_typecheck__V_155_155);
                    }
#line 1174 "post_typecheck.m"
                    {
#line 1174 "post_typecheck.m"
                      check_hlds__post_typecheck__ConsId_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1174 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 1) = ((MR_Box) (check_hlds__post_typecheck__ShroudedPredProcId_80));
#line 1174 "post_typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_81, 2) = NULL;
#line 1174 "post_typecheck.m"
                    }
#line 1176 "post_typecheck.m"
                    {
#line 1176 "post_typecheck.m"
                      check_hlds__post_typecheck__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_156_156, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_81));
#line 1176 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_156_156, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1176 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_156_156, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1176 "post_typecheck.m"
                    }
#line 1175 "post_typecheck.m"
                    {
#line 1175 "post_typecheck.m"
                      check_hlds__post_typecheck__GoalExpr_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1175 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 1) = ((MR_Box) (check_hlds__post_typecheck__V_156_156));
#line 1175 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 2) = ((MR_Box) (check_hlds__post_typecheck__Mode0_20));
#line 1175 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 3) = ((MR_Box) (check_hlds__post_typecheck__Unification0_21));
#line 1175 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_82, 4) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1175 "post_typecheck.m"
                    }
#line 1178 "post_typecheck.m"
                    {
#line 1178 "post_typecheck.m"
                      MR_Word base;
#line 1178 "post_typecheck.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = base;
#line 1178 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_82));
#line 1178 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1178 "post_typecheck.m"
                    }
#line 1179 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1172 "post_typecheck.m"
                  }
#line 1158 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_110 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109;
#line 1158 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_108 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_107;
#line 1158 "post_typecheck.m"
                *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_106 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105;
#line 1158 "post_typecheck.m"
              }
#line 1190 "post_typecheck.m"
            else
#line 1217 "post_typecheck.m"
              {
#line 1217 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__AccessType_87;
#line 1217 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__FieldName_88;
#line 1196 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__TVarSet_180;
#line 1196 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__ArgTypes0_181;
#line 1196 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__Name_182;
#line 1196 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_208_208;
#line 1196 "post_typecheck.m"
                MR_Integer check_hlds__post_typecheck__V_209_209;
#line 1196 "post_typecheck.m"
                MR_Word check_hlds__post_typecheck__V_86_86;

#line 1196 "post_typecheck.m"
                check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1196 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1196 "post_typecheck.m"
                  {
#line 1196 "post_typecheck.m"
                    check_hlds__post_typecheck__Name_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1196 "post_typecheck.m"
                    check_hlds__post_typecheck__V_208_208 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1196 "post_typecheck.m"
                    check_hlds__post_typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1196 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_208_208);
#line 1196 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1196 "post_typecheck.m"
                      {
#line 1197 "post_typecheck.m"
                        {
#line 1197 "post_typecheck.m"
                          check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__Name_182, &check_hlds__post_typecheck__V_209_209, &check_hlds__post_typecheck__AccessType_87, &check_hlds__post_typecheck__FieldName_88);
                        }
#line 1196 "post_typecheck.m"
                        if (check_hlds__post_typecheck__succeeded)
#line 1196 "post_typecheck.m"
                          {
#line 1197 "post_typecheck.m"
                            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_209_209);
#line 1196 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1196 "post_typecheck.m"
                              {
#line 1202 "post_typecheck.m"
                                {
#line 1202 "post_typecheck.m"
                                  check_hlds__post_typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105);
                                }
#line 1202 "post_typecheck.m"
                                check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1196 "post_typecheck.m"
                                if (check_hlds__post_typecheck__succeeded)
#line 1196 "post_typecheck.m"
                                  {
#line 1208 "post_typecheck.m"
                                    {
#line 1208 "post_typecheck.m"
                                      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, &check_hlds__post_typecheck__TVarSet_180);
                                    }
#line 1209 "post_typecheck.m"
                                    {
#line 1209 "post_typecheck.m"
                                      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109, check_hlds__post_typecheck__ArgVars0_19, &check_hlds__post_typecheck__ArgTypes0_181);
                                    }
#line 1210 "post_typecheck.m"
                                    {
#line 1210 "post_typecheck.m"
                                      check_hlds__post_typecheck__succeeded = check_hlds__post_typecheck__find_matching_constructor_5_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__TVarSet_180, check_hlds__post_typecheck__ConsId0_18, check_hlds__post_typecheck__TypeOfX_30, check_hlds__post_typecheck__ArgTypes0_181);
                                    }
#line 1210 "post_typecheck.m"
                                    check_hlds__post_typecheck__succeeded = !(check_hlds__post_typecheck__succeeded);
#line 1196 "post_typecheck.m"
                                  }
#line 1196 "post_typecheck.m"
                              }
#line 1196 "post_typecheck.m"
                          }
#line 1196 "post_typecheck.m"
                      }
#line 1196 "post_typecheck.m"
                  }
#line 1217 "post_typecheck.m"
                if (check_hlds__post_typecheck__succeeded)
#line 1215 "post_typecheck.m"
                  {
#line 1213 "post_typecheck.m"
                    {
#line 1213 "post_typecheck.m"
                      check_hlds__post_typecheck__finish_field_access_function_14_p_0(check_hlds__post_typecheck__ModuleInfo_24, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_106, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109, check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_110, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_107, check_hlds__post_typecheck__STATE_VARIABLE_VarSet_108, check_hlds__post_typecheck__AccessType_87, check_hlds__post_typecheck__FieldName_88, check_hlds__post_typecheck__UnifyContext_22, check_hlds__post_typecheck__X0_17, check_hlds__post_typecheck__ArgVars0_19, check_hlds__post_typecheck__GoalInfo0_23, check_hlds__post_typecheck__Goal_28);
                    }
#line 1216 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1215 "post_typecheck.m"
                  }
#line 1217 "post_typecheck.m"
                else
#line 1219 "post_typecheck.m"
                  {
#line 1219 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__TypeCtorOfX_89;
#line 1219 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__RHS_104;
#line 1219 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__ConsId_188;
#line 1219 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__GoalExpr_189;
#line 1247 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck__SymName0_90;
#line 1220 "post_typecheck.m"
                    MR_Integer check_hlds__post_typecheck__V_210_210;
#line 1220 "post_typecheck.m"
                    MR_Word check_hlds__post_typecheck___OldTypeCtor_91;

#line 1219 "post_typecheck.m"
                    {
#line 1219 "post_typecheck.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__post_typecheck__TypeOfX_30, &check_hlds__post_typecheck__TypeCtorOfX_89);
                    }
#line 1220 "post_typecheck.m"
                    check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__ConsId0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1220 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1220 "post_typecheck.m"
                      {
#line 1220 "post_typecheck.m"
                        check_hlds__post_typecheck__SymName0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 1)));
#line 1220 "post_typecheck.m"
                        check_hlds__post_typecheck__V_210_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 2)));
#line 1220 "post_typecheck.m"
                        check_hlds__post_typecheck___OldTypeCtor_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId0_18, (MR_Integer) 3)));
#line 1220 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__Arity_31 == check_hlds__post_typecheck__V_210_210);
#line 1220 "post_typecheck.m"
                      }
#line 1247 "post_typecheck.m"
                    if (check_hlds__post_typecheck__succeeded)
#line 1223 "post_typecheck.m"
                      {
#line 1221 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_92_92;
#line 1221 "post_typecheck.m"
                        MR_Word check_hlds__post_typecheck__V_93_93;

#line 1221 "post_typecheck.m"
                        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__TypeOfX_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1221 "post_typecheck.m"
                        if (check_hlds__post_typecheck__succeeded)
#line 1221 "post_typecheck.m"
                          {
#line 1221 "post_typecheck.m"
                            check_hlds__post_typecheck__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 1)));
#line 1221 "post_typecheck.m"
                            check_hlds__post_typecheck__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 2)));
#line 1222 "post_typecheck.m"
                            {
#line 1222 "post_typecheck.m"
                              check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "post_typecheck.m"
                              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1222 "post_typecheck.m"
                              MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1222 "post_typecheck.m"
                            }
#line 1221 "post_typecheck.m"
                          }
#line 1221 "post_typecheck.m"
                        else
#line 1235 "post_typecheck.m"
                          {
#line 1223 "post_typecheck.m"
                            MR_Word check_hlds__post_typecheck__V_161_161;

#line 1223 "post_typecheck.m"
                            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__TypeOfX_30)) == (MR_mktag((MR_Integer) 2)));
#line 1223 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1223 "post_typecheck.m"
                              {
#line 1223 "post_typecheck.m"
                                check_hlds__post_typecheck__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__TypeOfX_30, (MR_Integer) 0)));
#line 1223 "post_typecheck.m"
                                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_161_161 == (MR_Integer) 3);
#line 1223 "post_typecheck.m"
                              }
#line 1235 "post_typecheck.m"
                            if (check_hlds__post_typecheck__succeeded)
#line 1231 "post_typecheck.m"
                              if (((MR_tag((MR_Word) check_hlds__post_typecheck__SymName0_90)) == (MR_mktag((MR_Integer) 1))))
#line 1232 "post_typecheck.m"
                                {
#line 1233 "post_typecheck.m"
                                  {
#line 1233 "post_typecheck.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "qualified char const");
#line 1233 "post_typecheck.m"
                                    return;
                                  }
#line 1232 "post_typecheck.m"
                                }
#line 1231 "post_typecheck.m"
                              else
#line 1225 "post_typecheck.m"
                                {
#line 1225 "post_typecheck.m"
                                  MR_String check_hlds__post_typecheck__Name0_94 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__SymName0_90, (MR_Integer) 0)));
#line 1228 "post_typecheck.m"
                                  MR_Char check_hlds__post_typecheck__Char_95;

#line 1226 "post_typecheck.m"
                                  {
#line 1226 "post_typecheck.m"
                                    check_hlds__post_typecheck__succeeded = mercury__term_io__encode_escaped_char_2_p_1(&check_hlds__post_typecheck__Char_95, check_hlds__post_typecheck__Name0_94);
                                  }
#line 1228 "post_typecheck.m"
                                  if (check_hlds__post_typecheck__succeeded)
#line 1227 "post_typecheck.m"
                                    {
#line 1227 "post_typecheck.m"
                                      check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1227 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (MR_Word) (check_hlds__post_typecheck__Char_95));
#line 1227 "post_typecheck.m"
                                    }
#line 1228 "post_typecheck.m"
                                  else
#line 1229 "post_typecheck.m"
                                    {
#line 1229 "post_typecheck.m"
                                      {
#line 1229 "post_typecheck.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "encode_escaped_char");
#line 1229 "post_typecheck.m"
                                        return;
                                      }
#line 1229 "post_typecheck.m"
                                    }
#line 1225 "post_typecheck.m"
                                }
#line 1235 "post_typecheck.m"
                            else
#line 1236 "post_typecheck.m"
                              {
#line 1236 "post_typecheck.m"
                                MR_Word check_hlds__post_typecheck__TypeCtorSymName_98;
#line 1236 "post_typecheck.m"
                                MR_String check_hlds__post_typecheck__Name_183;
#line 1237 "post_typecheck.m"
                                MR_Integer check_hlds__post_typecheck__V_99_99;

#line 1236 "post_typecheck.m"
                                {
#line 1236 "post_typecheck.m"
                                  check_hlds__post_typecheck__Name_183 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__post_typecheck__SymName0_90);
                                }
#line 1237 "post_typecheck.m"
                                check_hlds__post_typecheck__TypeCtorSymName_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtorOfX_89, (MR_Integer) 0)));
#line 1237 "post_typecheck.m"
                                check_hlds__post_typecheck__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__TypeCtorOfX_89, (MR_Integer) 1)));
#line 1242 "post_typecheck.m"
                                if (((MR_tag((MR_Word) check_hlds__post_typecheck__TypeCtorSymName_98)) == (MR_mktag((MR_Integer) 1))))
#line 1239 "post_typecheck.m"
                                  {
#line 1239 "post_typecheck.m"
                                    MR_Word check_hlds__post_typecheck__TypeCtorModule_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TypeCtorSymName_98, (MR_Integer) 0)));
#line 1239 "post_typecheck.m"
                                    MR_Word check_hlds__post_typecheck__SymName_102;
#line 1239 "post_typecheck.m"
                                    MR_String check_hlds__post_typecheck__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__TypeCtorSymName_98, (MR_Integer) 1)));

#line 1240 "post_typecheck.m"
                                    {
#line 1240 "post_typecheck.m"
                                      check_hlds__post_typecheck__SymName_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__SymName_102, 0) = ((MR_Box) (check_hlds__post_typecheck__TypeCtorModule_100));
#line 1240 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__SymName_102, 1) = ((MR_Box) (check_hlds__post_typecheck__Name_183));
#line 1240 "post_typecheck.m"
                                    }
#line 1241 "post_typecheck.m"
                                    {
#line 1241 "post_typecheck.m"
                                      check_hlds__post_typecheck__ConsId_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1241 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 1) = ((MR_Box) (check_hlds__post_typecheck__SymName_102));
#line 1241 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 2) = ((MR_Box) (check_hlds__post_typecheck__Arity_31));
#line 1241 "post_typecheck.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__ConsId_188, 3) = ((MR_Box) (check_hlds__post_typecheck__TypeCtorOfX_89));
#line 1241 "post_typecheck.m"
                                    }
#line 1239 "post_typecheck.m"
                                  }
#line 1242 "post_typecheck.m"
                                else
#line 1243 "post_typecheck.m"
                                  {
#line 1244 "post_typecheck.m"
                                    {
#line 1244 "post_typecheck.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.resolve_unify_functor\'/16", (MR_String) "unqualified type_ctor");
#line 1244 "post_typecheck.m"
                                      return;
                                    }
#line 1243 "post_typecheck.m"
                                  }
#line 1236 "post_typecheck.m"
                              }
#line 1235 "post_typecheck.m"
                          }
#line 1223 "post_typecheck.m"
                      }
#line 1247 "post_typecheck.m"
                    else
#line 1248 "post_typecheck.m"
                      check_hlds__post_typecheck__ConsId_188 = check_hlds__post_typecheck__ConsId0_18;
#line 1250 "post_typecheck.m"
                    {
#line 1250 "post_typecheck.m"
                      check_hlds__post_typecheck__RHS_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_104, 0) = ((MR_Box) (check_hlds__post_typecheck__ConsId_188));
#line 1250 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_104, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1250 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__RHS_104, 2) = ((MR_Box) (check_hlds__post_typecheck__ArgVars0_19));
#line 1250 "post_typecheck.m"
                    }
#line 1251 "post_typecheck.m"
                    {
#line 1251 "post_typecheck.m"
                      check_hlds__post_typecheck__GoalExpr_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 0) = ((MR_Box) (check_hlds__post_typecheck__X0_17));
#line 1251 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 1) = ((MR_Box) (check_hlds__post_typecheck__RHS_104));
#line 1251 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 2) = ((MR_Box) (check_hlds__post_typecheck__Mode0_20));
#line 1251 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 3) = ((MR_Box) (check_hlds__post_typecheck__Unification0_21));
#line 1251 "post_typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__GoalExpr_189, 4) = ((MR_Box) (check_hlds__post_typecheck__UnifyContext_22));
#line 1251 "post_typecheck.m"
                    }
#line 1252 "post_typecheck.m"
                    {
#line 1252 "post_typecheck.m"
                      MR_Word base;
#line 1252 "post_typecheck.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "post_typecheck.m"
                      *check_hlds__post_typecheck__Goal_28 = base;
#line 1252 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__post_typecheck__GoalExpr_189));
#line 1252 "post_typecheck.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__post_typecheck__GoalInfo0_23));
#line 1252 "post_typecheck.m"
                    }
#line 1253 "post_typecheck.m"
                    *check_hlds__post_typecheck__IsPlainUnify_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1219 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_110 = check_hlds__post_typecheck__STATE_VARIABLE_VarTypes_0_109;
#line 1219 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_VarSet_108 = check_hlds__post_typecheck__STATE_VARIABLE_VarSet_0_107;
#line 1219 "post_typecheck.m"
                    *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_106 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_105;
#line 1219 "post_typecheck.m"
                  }
#line 1217 "post_typecheck.m"
              }
#line 1190 "post_typecheck.m"
          }
#line 1135 "post_typecheck.m"
      }
#line 1049 "post_typecheck.m"
  }
#line 120 "post_typecheck.m"
}

#line 108 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__finally_resolve_pred_overloading_8_p_0(
#line 108 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Args0_9,
#line 108 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__CallerPredInfo_10,
#line 108 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_11,
#line 108 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__Context_12,
#line 108 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredName_0_22,
#line 108 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredName_23,
#line 108 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24,
#line 108 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredId_25)
#line 108 "post_typecheck.m"
{
#line 576 "post_typecheck.m"
  {
#line 576 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 564 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__V_29_29;

#line 564 "post_typecheck.m"
    {
#line 564 "post_typecheck.m"
      check_hlds__post_typecheck__V_29_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 564 "post_typecheck.m"
    {
#line 564 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24, check_hlds__post_typecheck__V_29_29);
    }
#line 576 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 567 "post_typecheck.m"
      {
#line 567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__TVarSet_15;
#line 567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ExistQVars_16;
#line 567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadTypeParams_17;
#line 567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__Markers_18;
#line 567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_19;
#line 567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypes_20;
#line 567 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_21;

#line 567 "post_typecheck.m"
        {
#line 567 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__TVarSet_15);
        }
#line 568 "post_typecheck.m"
        {
#line 568 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__ExistQVars_16);
        }
#line 569 "post_typecheck.m"
        {
#line 569 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__HeadTypeParams_17);
        }
#line 570 "post_typecheck.m"
        {
#line 570 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__Markers_18);
        }
#line 571 "post_typecheck.m"
        {
#line 571 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__CallerPredInfo_10, &check_hlds__post_typecheck__ClausesInfo_19);
        }
#line 572 "post_typecheck.m"
        {
#line 572 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo_19, &check_hlds__post_typecheck__VarTypes_20);
        }
#line 573 "post_typecheck.m"
        {
#line 573 "post_typecheck.m"
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__post_typecheck__VarTypes_20, check_hlds__post_typecheck__Args0_9, &check_hlds__post_typecheck__ArgTypes_21);
        }
#line 574 "post_typecheck.m"
        {
#line 574 "post_typecheck.m"
          hlds__pred_table__resolve_pred_overloading_10_p_0(check_hlds__post_typecheck__ModuleInfo_11, check_hlds__post_typecheck__Markers_18, check_hlds__post_typecheck__TVarSet_15, check_hlds__post_typecheck__ExistQVars_16, check_hlds__post_typecheck__ArgTypes_21, check_hlds__post_typecheck__HeadTypeParams_17, check_hlds__post_typecheck__Context_12, check_hlds__post_typecheck__STATE_VARIABLE_PredName_0_22, check_hlds__post_typecheck__STATE_VARIABLE_PredName_23, check_hlds__post_typecheck__STATE_VARIABLE_PredId_25);
#line 574 "post_typecheck.m"
          return;
        }
#line 567 "post_typecheck.m"
      }
#line 576 "post_typecheck.m"
    else
#line 577 "post_typecheck.m"
      {
#line 577 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredInfo_34;
#line 577 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__PredModule_35;
#line 577 "post_typecheck.m"
        MR_String check_hlds__post_typecheck__PredName_36;

#line 583 "post_typecheck.m"
        {
#line 583 "post_typecheck.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__ModuleInfo_11, check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24, &check_hlds__post_typecheck__PredInfo_34);
        }
#line 584 "post_typecheck.m"
        {
#line 584 "post_typecheck.m"
          check_hlds__post_typecheck__PredModule_35 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__post_typecheck__PredInfo_34);
        }
#line 585 "post_typecheck.m"
        {
#line 585 "post_typecheck.m"
          check_hlds__post_typecheck__PredName_36 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PredInfo_34);
        }
#line 586 "post_typecheck.m"
        {
#line 586 "post_typecheck.m"
          MR_Word base;
#line 586 "post_typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "post_typecheck.m"
          *check_hlds__post_typecheck__STATE_VARIABLE_PredName_23 = base;
#line 586 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__PredModule_35));
#line 586 "post_typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__PredName_36));
#line 586 "post_typecheck.m"
        }
#line 577 "post_typecheck.m"
        *check_hlds__post_typecheck__STATE_VARIABLE_PredId_25 = check_hlds__post_typecheck__STATE_VARIABLE_PredId_0_24;
#line 577 "post_typecheck.m"
      }
#line 576 "post_typecheck.m"
  }
#line 108 "post_typecheck.m"
}

#line 661 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1(
#line 661 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 661 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 661 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 661 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3)
#line 661 "post_typecheck.m"
{
#line 661 "post_typecheck.m"
  {
#line 661 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 661 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__4_4;

#line 661 "post_typecheck.m"
    {
#line 661 "post_typecheck.m"
      hlds__hlds_data__exclusive_table_add_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv0_HeadVar__4_4);
    }
#line 661 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__4_4));
#line 661 "post_typecheck.m"
  }
#line 661 "post_typecheck.m"
}

#line 102 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0(
#line 102 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PromiseType_7,
#line 102 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__PromiseId_8,
#line 102 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13,
#line 102 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14,
#line 102 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15,
#line 102 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_16)
#line 102 "post_typecheck.m"
{
#line 610 "post_typecheck.m"
  {
#line 610 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 610 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Goal_11;
#line 610 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredInfo_12;
#line 610 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17;

#line 646 "post_typecheck.m"
#line 646 "post_typecheck.m"
    switch (check_hlds__post_typecheck__PromiseType_7) {
#line 646 "post_typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 646 "post_typecheck.m"
      case (MR_Integer) 0:
#line 646 "post_typecheck.m"
      case (MR_Integer) 2:
#line 657 "post_typecheck.m"
        {
#line 657 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__PredIds_29;
#line 657 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Table0_30;
#line 657 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Table_31;
#line 657 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_32_32;
#line 657 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__PredInfo_44;
#line 657 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesInfo_45;
#line 657 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesRep_46;
#line 657 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Clauses_48;
#line 676 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck___ItemNumbers_47;
#line 681 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Clause_49;
#line 678 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_51_51;
#line 661 "post_typecheck.m"
          MR_Box check_hlds__post_typecheck__conv1_Table_31;

#line 674 "post_typecheck.m"
          {
#line 674 "post_typecheck.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_44);
          }
#line 675 "post_typecheck.m"
          {
#line 675 "post_typecheck.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_44, &check_hlds__post_typecheck__ClausesInfo_45);
          }
#line 676 "post_typecheck.m"
          {
#line 676 "post_typecheck.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_45, &check_hlds__post_typecheck__ClausesRep_46, &check_hlds__post_typecheck___ItemNumbers_47);
          }
#line 677 "post_typecheck.m"
          {
#line 677 "post_typecheck.m"
            hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__post_typecheck__ClausesRep_46, &check_hlds__post_typecheck__Clauses_48);
          }
#line 678 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Clauses_48)) == (MR_mktag((MR_Integer) 1)));
#line 678 "post_typecheck.m"
          if (check_hlds__post_typecheck__succeeded)
#line 678 "post_typecheck.m"
            {
#line 678 "post_typecheck.m"
              check_hlds__post_typecheck__Clause_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_48, (MR_Integer) 0)));
#line 678 "post_typecheck.m"
              check_hlds__post_typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_48, (MR_Integer) 1)));
#line 678 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "post_typecheck.m"
            }
#line 681 "post_typecheck.m"
          if (check_hlds__post_typecheck__succeeded)
#line 679 "post_typecheck.m"
            {
#line 679 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Goal0_50;

#line 679 "post_typecheck.m"
              {
#line 679 "post_typecheck.m"
                check_hlds__post_typecheck__Goal0_50 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__post_typecheck__Clause_49);
              }
#line 680 "post_typecheck.m"
              {
#line 680 "post_typecheck.m"
                hlds__assertion__normalise_goal_2_p_0(check_hlds__post_typecheck__Goal0_50, &check_hlds__post_typecheck__Goal_11);
              }
#line 679 "post_typecheck.m"
            }
#line 681 "post_typecheck.m"
          else
#line 682 "post_typecheck.m"
            {
#line 682 "post_typecheck.m"
              {
#line 682 "post_typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.promise_ex_goal\'/3", (MR_String) "not a single clause");
#line 682 "post_typecheck.m"
                return;
              }
#line 682 "post_typecheck.m"
            }
#line 659 "post_typecheck.m"
          {
#line 659 "post_typecheck.m"
            hlds__goal_util__predids_from_goal_2_p_0(check_hlds__post_typecheck__Goal_11, &check_hlds__post_typecheck__PredIds_29);
          }
#line 660 "post_typecheck.m"
          {
#line 660 "post_typecheck.m"
            hlds__hlds_module__module_info_get_exclusive_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__Table0_30);
          }
#line 661 "post_typecheck.m"
          {
#line 661 "post_typecheck.m"
            check_hlds__post_typecheck__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 661 "post_typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[1]));
#line 661 "post_typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_finish_promise_6_p_0_1));
#line 661 "post_typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 661 "post_typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, 3) = ((MR_Box) (check_hlds__post_typecheck__PromiseId_8));
#line 661 "post_typecheck.m"
          }
#line 661 "post_typecheck.m"
          {
#line 661 "post_typecheck.m"
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[2], check_hlds__post_typecheck__V_32_32, check_hlds__post_typecheck__PredIds_29, ((MR_Box) (check_hlds__post_typecheck__Table0_30)), &check_hlds__post_typecheck__conv1_Table_31);
          }
#line 661 "post_typecheck.m"
          check_hlds__post_typecheck__Table_31 = ((MR_Word) check_hlds__post_typecheck__conv1_Table_31);
#line 662 "post_typecheck.m"
          {
#line 662 "post_typecheck.m"
            hlds__hlds_module__module_info_set_exclusive_table_3_p_0(check_hlds__post_typecheck__Table_31, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17);
          }
#line 657 "post_typecheck.m"
        }
#line 646 "post_typecheck.m"
        break;
#line 646 "post_typecheck.m"
      case (MR_Integer) 1:
#line 665 "post_typecheck.m"
        {
#line 665 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__PredInfo_58;
#line 665 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesInfo_59;
#line 665 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__ClausesRep_60;
#line 665 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Clauses_62;
#line 676 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck___ItemNumbers_61;
#line 681 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__Clause_63;
#line 678 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__V_65_65;

#line 674 "post_typecheck.m"
          {
#line 674 "post_typecheck.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_58);
          }
#line 675 "post_typecheck.m"
          {
#line 675 "post_typecheck.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_58, &check_hlds__post_typecheck__ClausesInfo_59);
          }
#line 676 "post_typecheck.m"
          {
#line 676 "post_typecheck.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_59, &check_hlds__post_typecheck__ClausesRep_60, &check_hlds__post_typecheck___ItemNumbers_61);
          }
#line 677 "post_typecheck.m"
          {
#line 677 "post_typecheck.m"
            hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__post_typecheck__ClausesRep_60, &check_hlds__post_typecheck__Clauses_62);
          }
#line 678 "post_typecheck.m"
          check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Clauses_62)) == (MR_mktag((MR_Integer) 1)));
#line 678 "post_typecheck.m"
          if (check_hlds__post_typecheck__succeeded)
#line 678 "post_typecheck.m"
            {
#line 678 "post_typecheck.m"
              check_hlds__post_typecheck__Clause_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_62, (MR_Integer) 0)));
#line 678 "post_typecheck.m"
              check_hlds__post_typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Clauses_62, (MR_Integer) 1)));
#line 678 "post_typecheck.m"
              check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "post_typecheck.m"
            }
#line 681 "post_typecheck.m"
          if (check_hlds__post_typecheck__succeeded)
#line 679 "post_typecheck.m"
            {
#line 679 "post_typecheck.m"
              MR_Word check_hlds__post_typecheck__Goal0_64;

#line 679 "post_typecheck.m"
              {
#line 679 "post_typecheck.m"
                check_hlds__post_typecheck__Goal0_64 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__post_typecheck__Clause_63);
              }
#line 680 "post_typecheck.m"
              {
#line 680 "post_typecheck.m"
                hlds__assertion__normalise_goal_2_p_0(check_hlds__post_typecheck__Goal0_64, &check_hlds__post_typecheck__Goal_11);
              }
#line 679 "post_typecheck.m"
            }
#line 681 "post_typecheck.m"
          else
#line 682 "post_typecheck.m"
            {
#line 682 "post_typecheck.m"
              {
#line 682 "post_typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.post_typecheck", (MR_String) "predicate \140check_hlds.post_typecheck.promise_ex_goal\'/3", (MR_String) "not a single clause");
#line 682 "post_typecheck.m"
                return;
              }
#line 682 "post_typecheck.m"
            }
#line 665 "post_typecheck.m"
          check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17 = check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13;
#line 665 "post_typecheck.m"
        }
#line 646 "post_typecheck.m"
        break;
#line 646 "post_typecheck.m"
      case (MR_Integer) 3:
#line 646 "post_typecheck.m"
        {
#line 646 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__AssertTable0_26;
#line 646 "post_typecheck.m"
          MR_Integer check_hlds__post_typecheck__AssertionId_27;
#line 646 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__AssertTable_28;
#line 646 "post_typecheck.m"
          MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34;

#line 647 "post_typecheck.m"
          {
#line 647 "post_typecheck.m"
            hlds__hlds_module__module_info_get_assertion_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__AssertTable0_26);
          }
#line 648 "post_typecheck.m"
          {
#line 648 "post_typecheck.m"
            hlds__hlds_data__assertion_table_add_assertion_4_p_0(check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__AssertionId_27, check_hlds__post_typecheck__AssertTable0_26, &check_hlds__post_typecheck__AssertTable_28);
          }
#line 650 "post_typecheck.m"
          {
#line 650 "post_typecheck.m"
            hlds__hlds_module__module_info_set_assertion_table_3_p_0(check_hlds__post_typecheck__AssertTable_28, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34);
          }
#line 651 "post_typecheck.m"
          {
#line 651 "post_typecheck.m"
            hlds__assertion__assert_id_goal_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34, check_hlds__post_typecheck__AssertionId_27, &check_hlds__post_typecheck__Goal_11);
          }
#line 652 "post_typecheck.m"
          {
#line 652 "post_typecheck.m"
            hlds__assertion__record_preds_used_in_4_p_0(check_hlds__post_typecheck__Goal_11, check_hlds__post_typecheck__AssertionId_27, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_20_34, &check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17);
          }
#line 646 "post_typecheck.m"
        }
#line 646 "post_typecheck.m"
        break;
#line 646 "post_typecheck.m"
    }
#line 626 "post_typecheck.m"
    {
#line 626 "post_typecheck.m"
      hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__post_typecheck__PromiseId_8, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_17_17, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14);
    }
#line 630 "post_typecheck.m"
    {
#line 630 "post_typecheck.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14, check_hlds__post_typecheck__PromiseId_8, &check_hlds__post_typecheck__PredInfo_12);
    }
#line 631 "post_typecheck.m"
    {
#line 631 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__post_typecheck__PredInfo_12);
    }
#line 633 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 632 "post_typecheck.m"
      {
#line 632 "post_typecheck.m"
        check_hlds__post_typecheck__check_in_interface_promise_goal_5_p_0(*check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_14, check_hlds__post_typecheck__PredInfo_12, check_hlds__post_typecheck__Goal_11, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15, check_hlds__post_typecheck__STATE_VARIABLE_Specs_16);
#line 632 "post_typecheck.m"
        return;
      }
#line 633 "post_typecheck.m"
    else
#line 633 "post_typecheck.m"
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_16 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_15;
#line 610 "post_typecheck.m"
  }
#line 102 "post_typecheck.m"
}

#line 96 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(
#line 96 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_5,
#line 96 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ErrorProcIds_6,
#line 96 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13,
#line 96 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_14)
#line 96 "post_typecheck.m"
{
#line 594 "post_typecheck.m"
  {
#line 594 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 594 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15;
#line 594 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_22;
#line 594 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs0_23;
#line 594 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcIds_24;
#line 594 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RevErrorProcIds_25;
#line 594 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs_26;

#line 598 "post_typecheck.m"
    {
#line 598 "post_typecheck.m"
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13);
    }
#line 600 "post_typecheck.m"
    if (check_hlds__post_typecheck__succeeded)
#line 600 "post_typecheck.m"
      check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13;
#line 600 "post_typecheck.m"
    else
#line 601 "post_typecheck.m"
      {
#line 601 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo0_8;
#line 601 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__HeadVars_9;
#line 601 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ArgTypes_10;
#line 601 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__VarTypes_11;
#line 601 "post_typecheck.m"
        MR_Word check_hlds__post_typecheck__ClausesInfo_12;

#line 601 "post_typecheck.m"
        {
#line 601 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__ClausesInfo0_8);
        }
#line 602 "post_typecheck.m"
        {
#line 602 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__post_typecheck__ClausesInfo0_8, &check_hlds__post_typecheck__HeadVars_9);
        }
#line 603 "post_typecheck.m"
        {
#line 603 "post_typecheck.m"
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__ArgTypes_10);
        }
#line 604 "post_typecheck.m"
        {
#line 604 "post_typecheck.m"
          hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(check_hlds__post_typecheck__HeadVars_9, check_hlds__post_typecheck__ArgTypes_10, &check_hlds__post_typecheck__VarTypes_11);
        }
#line 605 "post_typecheck.m"
        {
#line 605 "post_typecheck.m"
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__post_typecheck__VarTypes_11, check_hlds__post_typecheck__ClausesInfo0_8, &check_hlds__post_typecheck__ClausesInfo_12);
        }
#line 606 "post_typecheck.m"
        {
#line 606 "post_typecheck.m"
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__post_typecheck__ClausesInfo_12, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15);
        }
#line 601 "post_typecheck.m"
      }
#line 884 "post_typecheck.m"
    {
#line 884 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, &check_hlds__post_typecheck__ArgTypes_22);
    }
#line 885 "post_typecheck.m"
    {
#line 885 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, &check_hlds__post_typecheck__Procs0_23);
    }
#line 886 "post_typecheck.m"
    {
#line 886 "post_typecheck.m"
      check_hlds__post_typecheck__ProcIds_24 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15);
    }
#line 887 "post_typecheck.m"
    {
#line 887 "post_typecheck.m"
      check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(check_hlds__post_typecheck__ModuleInfo_5, check_hlds__post_typecheck__ProcIds_24, check_hlds__post_typecheck__ArgTypes_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__RevErrorProcIds_25, check_hlds__post_typecheck__Procs0_23, &check_hlds__post_typecheck__Procs_26);
    }
#line 889 "post_typecheck.m"
    {
#line 889 "post_typecheck.m"
      *check_hlds__post_typecheck__ErrorProcIds_6 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__RevErrorProcIds_25);
    }
#line 890 "post_typecheck.m"
    {
#line 890 "post_typecheck.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__Procs_26, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15_15, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_14);
#line 890 "post_typecheck.m"
      return;
    }
#line 594 "post_typecheck.m"
  }
#line 96 "post_typecheck.m"
}

#line 93 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(
#line 93 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_5,
#line 93 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__ErrorProcs_6,
#line 93 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8,
#line 93 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_9)
#line 93 "post_typecheck.m"
{
#line 883 "post_typecheck.m"
  {
#line 883 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 883 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ArgTypes_16;
#line 883 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs0_17;
#line 883 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ProcIds_18;
#line 883 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__RevErrorProcIds_19;
#line 883 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__Procs_20;

#line 884 "post_typecheck.m"
    {
#line 884 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, &check_hlds__post_typecheck__ArgTypes_16);
    }
#line 885 "post_typecheck.m"
    {
#line 885 "post_typecheck.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, &check_hlds__post_typecheck__Procs0_17);
    }
#line 886 "post_typecheck.m"
    {
#line 886 "post_typecheck.m"
      check_hlds__post_typecheck__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8);
    }
#line 887 "post_typecheck.m"
    {
#line 887 "post_typecheck.m"
      check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(check_hlds__post_typecheck__ModuleInfo_5, check_hlds__post_typecheck__ProcIds_18, check_hlds__post_typecheck__ArgTypes_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__RevErrorProcIds_19, check_hlds__post_typecheck__Procs0_17, &check_hlds__post_typecheck__Procs_20);
    }
#line 889 "post_typecheck.m"
    {
#line 889 "post_typecheck.m"
      *check_hlds__post_typecheck__ErrorProcs_6 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__RevErrorProcIds_19);
    }
#line 890 "post_typecheck.m"
    {
#line 890 "post_typecheck.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__Procs_20, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_9);
#line 890 "post_typecheck.m"
      return;
    }
#line 883 "post_typecheck.m"
  }
#line 93 "post_typecheck.m"
}

#line 86 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(
#line 86 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18,
#line 86 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_19,
#line 86 "post_typecheck.m"
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_7,
#line 86 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__AlwaysSpecs_8,
#line 86 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__NoTypeErrorSpecs_9)
#line 86 "post_typecheck.m"
{
#line 175 "post_typecheck.m"
  {
#line 175 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_21_21;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_22_22;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_23_23;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ValidPredIds_10;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__ValidPredIdSet_11;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredMap0_12;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdsInfos0_13;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredIdsInfos_14;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__AlwaysSpecsList_15;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__NoTypeErrorSpecsList_16;
#line 175 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__PredMap_17;

#line 176 "post_typecheck.m"
    {
#line 176 "post_typecheck.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__post_typecheck__ValidPredIds_10);
    }
#line 12207 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 177 "post_typecheck.m"
    {
#line 177 "post_typecheck.m"
      check_hlds__post_typecheck__ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__ValidPredIds_10);
    }
#line 178 "post_typecheck.m"
    {
#line 178 "post_typecheck.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, &check_hlds__post_typecheck__PredMap0_12);
    }
#line 12219 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 179 "post_typecheck.m"
    {
#line 179 "post_typecheck.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__TypeCtorInfo_22_22, check_hlds__post_typecheck__PredMap0_12, &check_hlds__post_typecheck__PredIdsInfos0_13);
    }
#line 180 "post_typecheck.m"
    {
#line 180 "post_typecheck.m"
      check_hlds__post_typecheck__post_typecheck_do_finish_preds_7_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, check_hlds__post_typecheck__ValidPredIdSet_11, check_hlds__post_typecheck__PredIdsInfos0_13, &check_hlds__post_typecheck__PredIdsInfos_14, check_hlds__post_typecheck__NumBadErrors_7, &check_hlds__post_typecheck__AlwaysSpecsList_15, &check_hlds__post_typecheck__NoTypeErrorSpecsList_16);
    }
#line 12231 "check_hlds.post_typecheck.c"
    check_hlds__post_typecheck__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 183 "post_typecheck.m"
    {
#line 183 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_23_23, check_hlds__post_typecheck__AlwaysSpecsList_15, check_hlds__post_typecheck__AlwaysSpecs_8);
    }
#line 184 "post_typecheck.m"
    {
#line 184 "post_typecheck.m"
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_23_23, check_hlds__post_typecheck__NoTypeErrorSpecsList_16, check_hlds__post_typecheck__NoTypeErrorSpecs_9);
    }
#line 185 "post_typecheck.m"
    {
#line 185 "post_typecheck.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__TypeCtorInfo_22_22, check_hlds__post_typecheck__PredIdsInfos_14, &check_hlds__post_typecheck__PredMap_17);
    }
#line 186 "post_typecheck.m"
    {
#line 186 "post_typecheck.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__post_typecheck__PredMap_17, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_18, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_19);
#line 186 "post_typecheck.m"
      return;
    }
#line 175 "post_typecheck.m"
  }
#line 86 "post_typecheck.m"
}

#line 1637 "post_typecheck.m"
static void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0_1(
#line 1637 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__closure_arg,
#line 1637 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
#line 1637 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
#line 1637 "post_typecheck.m"
  MR_Box check_hlds__post_typecheck__wrapper_arg_3,
#line 1637 "post_typecheck.m"
  MR_Box * check_hlds__post_typecheck__wrapper_arg_4)
#line 1637 "post_typecheck.m"
{
#line 1637 "post_typecheck.m"
  {
#line 1637 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
#line 1637 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20;

#line 1637 "post_typecheck.m"
    {
#line 1637 "post_typecheck.m"
      check_hlds__post_typecheck__check_for_missing_type_defns_in_type_4_p_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_3), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20);
    }
#line 1637 "post_typecheck.m"
    *check_hlds__post_typecheck__wrapper_arg_4 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_20));
#line 1637 "post_typecheck.m"
  }
#line 1637 "post_typecheck.m"
}

#line 61 "post_typecheck.m"
void MR_CALL 
check_hlds__post_typecheck__check_for_missing_type_defns_2_p_0(
#line 61 "post_typecheck.m"
  MR_Word check_hlds__post_typecheck__ModuleInfo_3,
#line 61 "post_typecheck.m"
  MR_Word * check_hlds__post_typecheck__Specs_4)
#line 61 "post_typecheck.m"
{
#line 1635 "post_typecheck.m"
  {
#line 1635 "post_typecheck.m"
    MR_bool check_hlds__post_typecheck__succeeded;
#line 1635 "post_typecheck.m"
    MR_Word check_hlds__post_typecheck__TypeTable_5;
#line 1637 "post_typecheck.m"
    MR_Box check_hlds__post_typecheck__conv1_Specs_4;

#line 1636 "post_typecheck.m"
    {
#line 1636 "post_typecheck.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__post_typecheck__ModuleInfo_3, &check_hlds__post_typecheck__TypeTable_5);
    }
#line 1637 "post_typecheck.m"
    {
#line 1637 "post_typecheck.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], (MR_Word) &check_hlds__post_typecheck_scalar_common_2[4], check_hlds__post_typecheck__TypeTable_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__post_typecheck__conv1_Specs_4);
    }
#line 1637 "post_typecheck.m"
    *check_hlds__post_typecheck__Specs_4 = ((MR_Word) check_hlds__post_typecheck__conv1_Specs_4);
#line 1635 "post_typecheck.m"
  }
#line 61 "post_typecheck.m"
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
