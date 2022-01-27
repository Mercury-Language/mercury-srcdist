/*
** Automatically generated from `typecheck.m'
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


/* :- module check_hlds.typecheck. */
/* :- implementation. */

/*
INIT mercury__check_hlds__typecheck__init
ENDINIT
*/

#include "check_hlds.typecheck.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typeclasses.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.headvar_names.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_event.mih"
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



#line 3195 "typecheck.m"
struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s {
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4;
#line 3198 "typecheck.m"
  MR_bool check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9;
#line 3201 "typecheck.m"
  jmp_buf check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0;
#line 3201 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
#line 3201 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12;
#line 3195 "typecheck.m"
};

#line 930 "typecheck.m"
struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s {
#line 930 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3;
#line 933 "typecheck.m"
  MR_bool check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 933 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6;
#line 935 "typecheck.m"
  jmp_buf check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0;
#line 935 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7;
#line 930 "typecheck.m"
};


#line 194 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 197 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 200 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 203 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 206 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 209 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 212 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

#line 215 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 218 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 221 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0;

#line 224 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1;

#line 227 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2;

#line 230 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3];

#line 233 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3];

#line 236 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3];

#line 239 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 242 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2];

#line 245 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0;

#line 248 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1];

#line 251 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1];

#line 254 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1];

#line 257 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1];

#line 260 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 263 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 266 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1];

#line 269 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0;

#line 272 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1];

#line 275 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1;

#line 278 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1];

#line 281 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1];

#line 284 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2];

#line 287 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2];

#line 290 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2];

#line 293 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0;

#line 296 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1;

#line 299 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2];

#line 302 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2];

#line 305 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2];

#line 308 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 311 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 313 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 316 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 319 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 321 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 323 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 326 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 329 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 331 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 334 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 337 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 339 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 341 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 344 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 347 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 349 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 352 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 355 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 357 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 359 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 362 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 365 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 367 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 370 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 373 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 375 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 377 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 380 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 383 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 385 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 388 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 391 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 393 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 395 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 347 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_10_p_0(
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_85,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10);

#line 1089 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_34,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

#line 1234 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_8,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfGoal_43,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__EnclosingContext_10,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31);

#line 2226 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_13,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__X_14,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_15,
#line 2226 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfRHS_83,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33,
#line 2226 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_35,
#line 2226 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_36);

#line 1536 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_31,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7);

#line 2727 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(
#line 2727 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2727 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_27,
#line 2727 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2727 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);

#line 3406 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3406 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__5_17);

#line 1929 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_skip_arg_1_2_p_0(
#line 1929 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1929 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_16);

#line 1527 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(
#line 1527 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1527 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_10);

#line 190 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_prepare_for_typecheck_1_4_p_0(
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 190 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_78);

#line 2912 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2912 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2912 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2912 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8);

#line 2482 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2482 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2482 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2482 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2482 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2445 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2445 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2445 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2445 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2445 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 2429 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2429 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2429 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2429 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2429 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 2210 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 2210 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2210 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2210 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 2210 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 2210 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6);

#line 3431 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3431__2_1_f_0(
#line 3431 "typecheck.m"
  MR_Word check_hlds__typecheck__LambdaHeadVar__1_38);

#line 1495 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1495__1_2_p_0(
#line 1495 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_94,
#line 1495 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_160);

#line 512 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__512__1_2_p_0(
#line 512 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_24,
#line 512 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_54);

#line 1156 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1156 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1156 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1156 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 1156 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1156 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1156 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3031 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 3031 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3031 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3031 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 3031 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 3031 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3031 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2414 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2414 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2414 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2414 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2414 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2414 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2414 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2411 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2411 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2411 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2411 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2411 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2411 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2411 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3401 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3401 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3401 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3401 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 3401 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3401 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3401 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3431 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3431 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3431 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 3419 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3419 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3419 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3419 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3419 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3419 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10);

#line 3406 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3406 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5);

#line 3383 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3383 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3383 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3);

#line 3245 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3245 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3245 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3245 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3245 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3245 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3245 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12);

#line 2967 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2967 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2967 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2967 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 3216 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3216 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3216 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3216 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3216 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3216 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3216 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12);

#line 3201 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 3201 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3201 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 3201 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3201 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 3201 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3195 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 3195 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6);

#line 3186 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

#line 3179 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 3179 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3179 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 3179 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 3178 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 3178 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3178 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 3168 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 3168 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21);

#line 3035 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 3035 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14);

#line 2971 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2971 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2971 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16);

#line 2967 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2967 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2967 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2967 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2951 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2951 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2951 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2951 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2951 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2951 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10);

#line 2830 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2830 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2830 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7);

#line 2811 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2811 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2811 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2811 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2811 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2811 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10);

#line 2727 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2727 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2727 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2727 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2727 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);

#line 2712 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2712 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8);

#line 2598 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2598 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2598 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2598 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2598 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2598 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16);

#line 2496 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2496 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2496 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2496 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2496 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2496 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2465 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2465 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2465 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2465 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2465 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4);

#line 2348 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
#line 2348 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2348 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 2304 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
#line 2304 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2304 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2304 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2304 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 2294 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_13,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_14,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_15,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_16,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_17,
#line 2294 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_18,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_54,
#line 2294 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_55);

#line 2275 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2275 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2275 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2275 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6);

#line 2148 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 2148 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2148 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2148 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 2148 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2148 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2126 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalContext_9,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_10,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_11,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_12,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_13,
#line 2126 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_14,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 2126 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 2118 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
#line 2118 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 2118 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_8,
#line 2118 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11,
#line 2118 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12,
#line 2118 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 2118 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

#line 2074 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_13,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_14,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_15,
#line 2074 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_16,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_17,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_18,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_19,
#line 2074 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_20,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_35,
#line 2074 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_36,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37,
#line 2074 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38);

#line 2049 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_2,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_3,
#line 2049 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_4,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__6_6,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_9,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_10,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12);

#line 1945 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1945 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1945 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1945 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1945 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 1929 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1929 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1929 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2);

#line 1890 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_1,
#line 1890 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1890 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_6,
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1890 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

#line 1847 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1847 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7);

#line 1803 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1803 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7);

#line 2046 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2046 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1743 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_10,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_13,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27,
#line 1743 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_29,
#line 1743 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_30);

#line 1689 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__SimpleCallId_10,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_13,
#line 1689 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_14,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31,
#line 1689 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_33,
#line 1689 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_34);

#line 2046 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2046 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1662 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
#line 1662 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_8,
#line 1662 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_9,
#line 1662 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_10,
#line 1662 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1662 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1662 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1662 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1600 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__GenericCallId_10,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_12,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_13,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1600 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1600 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

#line 1574 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22,
#line 1574 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23,
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_24,
#line 1574 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_25);

#line 1550 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1550 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1550 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1536 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7);

#line 1527 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1527 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1);

#line 1495 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
#line 1495 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 1493 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
#line 1493 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1493 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1493 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1493 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3,
#line 1493 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_4,
#line 1493 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_5);

#line 1442 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
#line 1442 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1442 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 1297 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
#line 1297 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_8,
#line 1297 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_9,
#line 1297 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_10,
#line 1297 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115,
#line 1297 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116,
#line 1297 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_117,
#line 1297 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_118);

#line 1234 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_8,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_9,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__EnclosingContext_10,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31);

#line 1170 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_8,
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet_10,
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_28,
#line 1170 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_29);

#line 2046 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2046 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1129 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_10,
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_22,
#line 1129 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_23,
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1129 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1129 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

#line 1089 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

#line 984 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 984 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 984 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 984 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 984 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 950 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14);

#line 935 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 935 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 935 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 935 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 935 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 935 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 930 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 930 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 930 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

#line 927 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
#line 927 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 927 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 914 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
#line 914 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 914 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
#line 914 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 914 "typecheck.m"
  MR_Word * check_hlds__typecheck__UnprovenCs_10);

#line 879 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
#line 879 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
#line 879 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExistQVars_6,
#line 879 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeParams0_7,
#line 879 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadTypeParams_8);

#line 857 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
#line 857 "typecheck.m"
  MR_Word check_hlds__typecheck__Renaming_4,
#line 857 "typecheck.m"
  MR_Word check_hlds__typecheck__Origin0_5,
#line 857 "typecheck.m"
  MR_Word * check_hlds__typecheck__Origin_6);

#line 806 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
#line 806 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_5,
#line 806 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
#line 806 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
#line 806 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7);

#line 779 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_8,
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__Impl_9,
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__TVar_10,
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 779 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17);

#line 773 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
#line 773 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 773 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 773 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 773 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 766 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
#line 766 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 766 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVars_7,
#line 766 "typecheck.m"
  MR_Word check_hlds__typecheck__Clause_8,
#line 766 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 766 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21);

#line 750 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__report_any_non_contiguous_clauses_5_f_0(
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7,
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_8,
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__PredInfo_9,
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__ItemNumbers_10,
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_11);

#line 717 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
#line 717 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 717 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 717 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 717 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 557 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
#line 557 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 557 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 557 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69,
#line 557 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_70,
#line 557 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_71,
#line 557 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_72,
#line 557 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_12);

#line 512 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_7_p_0_1(
#line 512 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 446 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_pred_7_p_0(
#line 446 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 446 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 446 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35,
#line 446 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_36,
#line 446 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_11,
#line 446 "typecheck.m"
  MR_Word * check_hlds__typecheck__ContainsErrors_12,
#line 446 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_13);

#line 347 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10);

#line 275 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
#line 275 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5);

#line 221 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 221 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 221 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17);

#line 190 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 190 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);


static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[24][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[7][5];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[2][8];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[2][9];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[4][1];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_8[2][6];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_9[1][11];


#line 2794 "typecheck.m"
/* sealed */ struct check_hlds__typecheck__vector_common_type_10_0_s {
#line 2794 "typecheck.m"
  const MR_String check_hlds__typecheck__vector_common_type_10_0__vct_10_f_0;
#line 2794 "typecheck.m"
  const MR_String check_hlds__typecheck__vector_common_type_10_0__vct_10_f_1;
#line 2794 "typecheck.m"
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_10_0_s check_hlds__typecheck_vector_common_10[5];

#line 2922 "typecheck.m"
/* sealed */ struct check_hlds__typecheck__vector_common_type_11_0_s {
#line 2922 "typecheck.m"
  const MR_String check_hlds__typecheck__vector_common_type_11_0__vct_11_f_0;
#line 2922 "typecheck.m"
  const MR_Integer check_hlds__typecheck__vector_common_type_11_0__vct_11_f_1;
#line 2922 "typecheck.m"
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_11_0_s check_hlds__typecheck_vector_common_11[4];



static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_scalar_common_2[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option to increase the limit)."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--type-inference-iteration-limit"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "iterations."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Type inference iteration limit exceeded."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This probably indicates that your program has a type error."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You should declare the types explicitly."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Inferred"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_8[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_clause_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[2])),
    ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_8[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_event_call_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_8[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[4])),
    ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[6])),
    ((MR_Box) (check_hlds__typecheck__convert_cons_defn_5_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 44)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "tuple"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_8[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0))
  },
};


static /* final */ const struct check_hlds__typecheck__vector_common_type_10_0_s check_hlds__typecheck_vector_common_10[5] = {
  /* row 0 */
  {
    (MR_String) "file",
    (MR_String) "string"
  },
  /* row 1 */
  {
    (MR_String) "grade",
    (MR_String) "string"
  },
  /* row 2 */
  {
    (MR_String) "line",
    (MR_String) "int"
  },
  /* row 3 */
  {
    (MR_String) "module",
    (MR_String) "string"
  },
  /* row 4 */
  {
    (MR_String) "pred",
    (MR_String) "string"
  },
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_11_0_s check_hlds__typecheck_vector_common_11[4] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "apply",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "impure_apply",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "semipure_apply",
    (MR_Integer) 3
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2330 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2338 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2346 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2354 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2362 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2370 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2378 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0
  }
};

#line 2386 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2394 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2403 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "flip_constraints_for_new",
  (MR_Integer) 0
};

#line 2409 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_field_set",
  (MR_Integer) 1
};

#line 2415 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "do_not_flip_constraints",
  (MR_Integer) 2
};

#line 2421 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2
};

#line 2428 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0
};

#line 2435 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2442 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_constraints_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_constraints_action",
  {     check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0
};

#line 2459 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2467 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2473 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0 = {
  (MR_String) "cons_type",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 2488 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2493 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0
  }
};

#line 2502 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2507 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1] = {
  (MR_Integer) 0
};

#line 2512 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0
};

#line 2529 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0,
    (MR_TypeInfo) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2538 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2546 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2563 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0
};

#line 2568 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2583 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0
};

#line 2588 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 2603 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2608 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1
};

#line 2613 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1
  }
};

#line 2627 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2633 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2639 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "maybe_cons_type_info",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0
};

#line 2656 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  (MR_Integer) 0
};

#line 2662 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  (MR_Integer) 1
};

#line 2668 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2674 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2680 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2686 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_stuff_to_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "stuff_to_check",
  {     check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0
};

#line 2703 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 2706 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2708 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2710 "check_hlds.typecheck.c"
{
#line 2712 "check_hlds.typecheck.c"
  {
#line 2714 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2717 "check_hlds.typecheck.c"
    {
#line 2719 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_constraints_action_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2722 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2724 "check_hlds.typecheck.c"
  }
#line 2726 "check_hlds.typecheck.c"
}

#line 2729 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 2732 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2734 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2736 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2738 "check_hlds.typecheck.c"
{
#line 2740 "check_hlds.typecheck.c"
  {
#line 2742 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2745 "check_hlds.typecheck.c"
    {
#line 2747 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_constraints_action_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2750 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2752 "check_hlds.typecheck.c"
  }
#line 2754 "check_hlds.typecheck.c"
}

#line 2757 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 2760 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2762 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2764 "check_hlds.typecheck.c"
{
#line 2766 "check_hlds.typecheck.c"
  {
#line 2768 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2771 "check_hlds.typecheck.c"
    {
#line 2773 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2776 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2778 "check_hlds.typecheck.c"
  }
#line 2780 "check_hlds.typecheck.c"
}

#line 2783 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 2786 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2788 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2790 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2792 "check_hlds.typecheck.c"
{
#line 2794 "check_hlds.typecheck.c"
  {
#line 2796 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2799 "check_hlds.typecheck.c"
    {
#line 2801 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2804 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2806 "check_hlds.typecheck.c"
  }
#line 2808 "check_hlds.typecheck.c"
}

#line 2811 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 2814 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2816 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2818 "check_hlds.typecheck.c"
{
#line 2820 "check_hlds.typecheck.c"
  {
#line 2822 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2825 "check_hlds.typecheck.c"
    {
#line 2827 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_assign_set_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2830 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2832 "check_hlds.typecheck.c"
  }
#line 2834 "check_hlds.typecheck.c"
}

#line 2837 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 2840 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2842 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2844 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2846 "check_hlds.typecheck.c"
{
#line 2848 "check_hlds.typecheck.c"
  {
#line 2850 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2853 "check_hlds.typecheck.c"
    {
#line 2855 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_assign_set_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2858 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2860 "check_hlds.typecheck.c"
  }
#line 2862 "check_hlds.typecheck.c"
}

#line 2865 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 2868 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2870 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2872 "check_hlds.typecheck.c"
{
#line 2874 "check_hlds.typecheck.c"
  {
#line 2876 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2879 "check_hlds.typecheck.c"
    {
#line 2881 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2884 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2886 "check_hlds.typecheck.c"
  }
#line 2888 "check_hlds.typecheck.c"
}

#line 2891 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 2894 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2896 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2898 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2900 "check_hlds.typecheck.c"
{
#line 2902 "check_hlds.typecheck.c"
  {
#line 2904 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2907 "check_hlds.typecheck.c"
    {
#line 2909 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2912 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2914 "check_hlds.typecheck.c"
  }
#line 2916 "check_hlds.typecheck.c"
}

#line 2919 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 2922 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2924 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2926 "check_hlds.typecheck.c"
{
#line 2928 "check_hlds.typecheck.c"
  {
#line 2930 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2933 "check_hlds.typecheck.c"
    {
#line 2935 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____stuff_to_check_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2938 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2940 "check_hlds.typecheck.c"
  }
#line 2942 "check_hlds.typecheck.c"
}

#line 2945 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 2948 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2950 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2952 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2954 "check_hlds.typecheck.c"
{
#line 2956 "check_hlds.typecheck.c"
  {
#line 2958 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2961 "check_hlds.typecheck.c"
    {
#line 2963 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____stuff_to_check_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2966 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2968 "check_hlds.typecheck.c"
  }
#line 2970 "check_hlds.typecheck.c"
}

#line 347 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_10_p_0(
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_85,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10)
#line 347 "typecheck.m"
{
#line 353 "typecheck.m"
  while (MR_TRUE)
#line 353 "typecheck.m"
    {
#line 353 "typecheck.m"
      /* tailcall optimized into a loop */
#line 353 "typecheck.m"
      {
#line 353 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 353 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "typecheck.m"
          {
#line 3013 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__4_85 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Changed_10 = check_hlds__typecheck__STATE_VARIABLE_Changed_0_9;
#line 354 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Specs_8 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_7;
#line 354 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 353 "typecheck.m"
          }
#line 353 "typecheck.m"
        else
#line 357 "typecheck.m"
          {
#line 357 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadPredIdInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 357 "typecheck.m"
            MR_Word check_hlds__typecheck__TailPredIdsInfos0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 357 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo0_24, (MR_Integer) 0)));
#line 357 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo0_24, (MR_Integer) 1)));

#line 361 "typecheck.m"
            {
#line 361 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__typecheck__PredInfo0_31);
            }
#line 362 "typecheck.m"
            if (!(check_hlds__typecheck__succeeded))
#line 363 "typecheck.m"
              {
#line 363 "typecheck.m"
                {
#line 363 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_30)));
                }
#line 363 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 363 "typecheck.m"
              }
#line 359 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 367 "typecheck.m"
              {
#line 367 "typecheck.m"
                MR_Word * check_hlds__typecheck__AddrTailPredIdsInfos_83;
#line 367 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVar__4_86;

#line 370 "typecheck.m"
                {
#line 370 "typecheck.m"
                  check_hlds__typecheck__HeadVar__4_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_86, 0) = ((MR_Box) (check_hlds__typecheck__HeadPredIdInfo0_24));
#line 370 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_86, 1) = NULL;
#line 370 "typecheck.m"
                }
#line 370 "typecheck.m"
                check_hlds__typecheck__AddrTailPredIdsInfos_83 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_86, (MR_Integer) 1));
#line 3075 "check_hlds.typecheck.c"
                *check_hlds__typecheck__AddrOfHeadVar__4_85 = check_hlds__typecheck__HeadVar__4_86;
#line 367 "typecheck.m"
                /* direct tailcall eliminated */
#line 367 "typecheck.m"
                {
#line 367 "typecheck.m"
                  MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__TailPredIdsInfos0_25;
#line 367 "typecheck.m"
                  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4__tmp_copy_85 = check_hlds__typecheck__AddrTailPredIdsInfos_83;

#line 367 "typecheck.m"
                  check_hlds__typecheck__AddrOfHeadVar__4_85 = check_hlds__typecheck__AddrOfHeadVar__4__tmp_copy_85;
#line 367 "typecheck.m"
                  check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 367 "typecheck.m"
                }
#line 367 "typecheck.m"
                continue;
#line 367 "typecheck.m"
              }
#line 359 "typecheck.m"
            else
#line 374 "typecheck.m"
              {
#line 374 "typecheck.m"
                MR_Word check_hlds__typecheck__PredInfo_34;
#line 374 "typecheck.m"
                MR_Word check_hlds__typecheck__PredSpecs_35;
#line 374 "typecheck.m"
                MR_Word check_hlds__typecheck__ContainsErrors_36;
#line 374 "typecheck.m"
                MR_Word check_hlds__typecheck__PredChanged_37;
#line 374 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47;
#line 374 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_48_48;
#line 374 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_49_49;
#line 374 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadPredIdInfo_53;
#line 399 "typecheck.m"
                MR_Word * check_hlds__typecheck__AddrTailPredIdsInfos_84;
#line 399 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVar__4_89;

#line 421 "typecheck.m"
                {
#line 1018 "typecheck.m"
                  MR_Word check_hlds__typecheck__Origin_75;
#line 1018 "typecheck.m"
                  MR_Word check_hlds__typecheck__SpecialPredId_76;
#line 1018 "typecheck.m"
                  MR_Word check_hlds__typecheck__TypeCtor_77;
#line 1018 "typecheck.m"
                  MR_Word check_hlds__typecheck__TypeTable_78;
#line 1018 "typecheck.m"
                  MR_Word check_hlds__typecheck__TypeDefn_79;
#line 1018 "typecheck.m"
                  MR_Word check_hlds__typecheck__Body_80;
#line 1026 "typecheck.m"
                  MR_Word check_hlds__typecheck__TypeCtorInfo_12_82;
#line 1026 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_81_81;

#line 421 "typecheck.m"
                  {
#line 421 "typecheck.m"
                    check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo0_31);
                  }
#line 421 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 421 "typecheck.m"
                    {
#line 1021 "typecheck.m"
                      {
#line 1021 "typecheck.m"
                        hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__Origin_75);
                      }
#line 1022 "typecheck.m"
                      check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin_75)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 1022 "typecheck.m"
                        {
#line 1022 "typecheck.m"
                          check_hlds__typecheck__SpecialPredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_75, (MR_Integer) 0)));
#line 1022 "typecheck.m"
                          check_hlds__typecheck__TypeCtor_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_75, (MR_Integer) 1)));
#line 1026 "typecheck.m"
                          {
#line 1026 "typecheck.m"
                            check_hlds__typecheck__V_81_81 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
                          }
#line 3169 "check_hlds.typecheck.c"
                          check_hlds__typecheck__TypeCtorInfo_12_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1026 "typecheck.m"
                          {
#line 1026 "typecheck.m"
                            check_hlds__typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck__TypeCtorInfo_12_82, ((MR_Box) (check_hlds__typecheck__TypeCtor_77)), check_hlds__typecheck__V_81_81);
                          }
#line 1026 "typecheck.m"
                          check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 1018 "typecheck.m"
                          if (check_hlds__typecheck__succeeded)
#line 1018 "typecheck.m"
                            {
#line 1030 "typecheck.m"
                              {
#line 1030 "typecheck.m"
                                hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__TypeTable_78);
                              }
#line 1031 "typecheck.m"
                              {
#line 1031 "typecheck.m"
                                hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_78, check_hlds__typecheck__TypeCtor_77, &check_hlds__typecheck__TypeDefn_79);
                              }
#line 1032 "typecheck.m"
                              {
#line 1032 "typecheck.m"
                                hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_79, &check_hlds__typecheck__Body_80);
                              }
#line 1033 "typecheck.m"
                              {
#line 1033 "typecheck.m"
                                check_hlds__typecheck__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__SpecialPredId_76, check_hlds__typecheck__Body_80);
                              }
#line 1018 "typecheck.m"
                            }
#line 1022 "typecheck.m"
                        }
#line 422 "typecheck.m"
                      check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 421 "typecheck.m"
                    }
#line 421 "typecheck.m"
                }
#line 423 "typecheck.m"
                if (!(check_hlds__typecheck__succeeded))
#line 424 "typecheck.m"
                  {
#line 424 "typecheck.m"
                    MR_Word check_hlds__typecheck__Markers_65;
#line 426 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_70_70;

#line 424 "typecheck.m"
                    {
#line 424 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(check_hlds__typecheck__PredInfo0_31);
                    }
#line 424 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 424 "typecheck.m"
                      {
#line 425 "typecheck.m"
                        {
#line 425 "typecheck.m"
                          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__Markers_65);
                        }
#line 426 "typecheck.m"
                        check_hlds__typecheck__V_70_70 = (MR_Integer) 1;
#line 426 "typecheck.m"
                        {
#line 426 "typecheck.m"
                          check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_65, check_hlds__typecheck__V_70_70);
                        }
#line 426 "typecheck.m"
                        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 424 "typecheck.m"
                      }
#line 424 "typecheck.m"
                  }
#line 411 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 429 "typecheck.m"
                  {
#line 429 "typecheck.m"
                    MR_Word check_hlds__typecheck__ClausesInfo0_66;
#line 429 "typecheck.m"
                    MR_Word check_hlds__typecheck__ClausesRep0_67;
#line 429 "typecheck.m"
                    MR_Word check_hlds__typecheck__IsEmpty_69;
#line 430 "typecheck.m"
                    MR_Word check_hlds__typecheck___ItemNumbers_68;

#line 429 "typecheck.m"
                    {
#line 429 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__ClausesInfo0_66);
                    }
#line 430 "typecheck.m"
                    {
#line 430 "typecheck.m"
                      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_66, &check_hlds__typecheck__ClausesRep0_67, &check_hlds__typecheck___ItemNumbers_68);
                    }
#line 431 "typecheck.m"
                    {
#line 431 "typecheck.m"
                      check_hlds__typecheck__IsEmpty_69 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_67);
                    }
#line 435 "typecheck.m"
#line 435 "typecheck.m"
                    switch (check_hlds__typecheck__IsEmpty_69) {
#line 435 "typecheck.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 435 "typecheck.m"
                      case (MR_Integer) 0:
#line 436 "typecheck.m"
                        check_hlds__typecheck__PredInfo_34 = check_hlds__typecheck__PredInfo0_31;
#line 435 "typecheck.m"
                        break;
#line 435 "typecheck.m"
                      case (MR_Integer) 1:
#line 434 "typecheck.m"
                        {
#line 434 "typecheck.m"
                          hlds__hlds_pred__pred_info_mark_as_external_2_p_0(check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__PredInfo_34);
                        }
#line 435 "typecheck.m"
                        break;
#line 435 "typecheck.m"
                    }
#line 438 "typecheck.m"
                    check_hlds__typecheck__PredSpecs_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "typecheck.m"
                    check_hlds__typecheck__ContainsErrors_36 = (MR_Integer) 0;
#line 440 "typecheck.m"
                    check_hlds__typecheck__PredChanged_37 = (MR_Integer) 0;
#line 429 "typecheck.m"
                  }
#line 411 "typecheck.m"
                else
#line 442 "typecheck.m"
                  {
#line 442 "typecheck.m"
                    check_hlds__typecheck__typecheck_pred_7_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_30, check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__PredInfo_34, &check_hlds__typecheck__PredSpecs_35, &check_hlds__typecheck__ContainsErrors_36, &check_hlds__typecheck__PredChanged_37);
                  }
#line 378 "typecheck.m"
#line 378 "typecheck.m"
                switch (check_hlds__typecheck__ContainsErrors_36) {
#line 378 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 378 "typecheck.m"
                  case (MR_Integer) 0:
#line 377 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 378 "typecheck.m"
                    break;
#line 378 "typecheck.m"
                  case (MR_Integer) 1:
#line 394 "typecheck.m"
                    {
#line 394 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 0) = ((MR_Box) (check_hlds__typecheck__PredId_30));
#line 394 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5));
#line 394 "typecheck.m"
                    }
#line 378 "typecheck.m"
                    break;
#line 378 "typecheck.m"
                }
#line 396 "typecheck.m"
                {
#line 396 "typecheck.m"
                  check_hlds__typecheck__HeadPredIdInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo_53, 0) = ((MR_Box) (check_hlds__typecheck__PredId_30));
#line 396 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo_53, 1) = ((MR_Box) (check_hlds__typecheck__PredInfo_34));
#line 396 "typecheck.m"
                }
#line 397 "typecheck.m"
                {
#line 397 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__PredSpecs_35, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7);
                }
#line 398 "typecheck.m"
                {
#line 398 "typecheck.m"
                  mercury__bool__or_3_p_0(check_hlds__typecheck__PredChanged_37, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, &check_hlds__typecheck__STATE_VARIABLE_Changed_49_49);
                }
#line 402 "typecheck.m"
                {
#line 402 "typecheck.m"
                  check_hlds__typecheck__HeadVar__4_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_89, 0) = ((MR_Box) (check_hlds__typecheck__HeadPredIdInfo_53));
#line 402 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_89, 1) = NULL;
#line 402 "typecheck.m"
                }
#line 402 "typecheck.m"
                check_hlds__typecheck__AddrTailPredIdsInfos_84 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_89, (MR_Integer) 1));
#line 3372 "check_hlds.typecheck.c"
                *check_hlds__typecheck__AddrOfHeadVar__4_85 = check_hlds__typecheck__HeadVar__4_89;
#line 399 "typecheck.m"
                /* direct tailcall eliminated */
#line 399 "typecheck.m"
                {
#line 399 "typecheck.m"
                  MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__TailPredIdsInfos0_25;
#line 399 "typecheck.m"
                  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4__tmp_copy_85 = check_hlds__typecheck__AddrTailPredIdsInfos_84;
#line 399 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0__tmp_copy_5 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47;
#line 399 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_Specs_48_48;
#line 399 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0__tmp_copy_9 = check_hlds__typecheck__STATE_VARIABLE_Changed_49_49;

#line 399 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Changed_0_9 = check_hlds__typecheck__STATE_VARIABLE_Changed_0__tmp_copy_9;
#line 399 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Specs_0_7 = check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 399 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0__tmp_copy_5;
#line 399 "typecheck.m"
                  check_hlds__typecheck__AddrOfHeadVar__4_85 = check_hlds__typecheck__AddrOfHeadVar__4__tmp_copy_85;
#line 399 "typecheck.m"
                  check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 399 "typecheck.m"
                }
#line 399 "typecheck.m"
                continue;
#line 374 "typecheck.m"
              }
#line 357 "typecheck.m"
          }
#line 353 "typecheck.m"
      }
#line 353 "typecheck.m"
      break;
#line 353 "typecheck.m"
    }
#line 347 "typecheck.m"
}

#line 1089 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_34,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
#line 1089 "typecheck.m"
{
#line 1094 "typecheck.m"
  while (MR_TRUE)
#line 1094 "typecheck.m"
    {
#line 1094 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1094 "typecheck.m"
      {
#line 1094 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1094 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1094 "typecheck.m"
          {
#line 3452 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__4_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1094 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1094 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 1094 "typecheck.m"
          }
#line 1094 "typecheck.m"
        else
#line 1096 "typecheck.m"
          {
#line 1096 "typecheck.m"
            MR_Word check_hlds__typecheck__Clause0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 1096 "typecheck.m"
            MR_Word check_hlds__typecheck__Clauses0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 1096 "typecheck.m"
            MR_Word check_hlds__typecheck__Clause_21;
#line 1096 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29;
#line 1096 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_30_30;
#line 1099 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrClauses_33;
#line 1099 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVar__4_35;

#line 1097 "typecheck.m"
            {
#line 1097 "typecheck.m"
              check_hlds__typecheck__typecheck_clause_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clause0_19, &check_hlds__typecheck__Clause_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_30_30);
            }
#line 1096 "typecheck.m"
            {
#line 1096 "typecheck.m"
              check_hlds__typecheck__HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_35, 0) = ((MR_Box) (check_hlds__typecheck__Clause_21));
#line 1096 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_35, 1) = NULL;
#line 1096 "typecheck.m"
            }
#line 1096 "typecheck.m"
            check_hlds__typecheck__AddrClauses_33 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_35, (MR_Integer) 1));
#line 3496 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__4_34 = check_hlds__typecheck__HeadVar__4_35;
#line 1099 "typecheck.m"
            /* direct tailcall eliminated */
#line 1099 "typecheck.m"
            {
#line 1099 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__Clauses0_20;
#line 1099 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrOfHeadVar__4__tmp_copy_34 = check_hlds__typecheck__AddrClauses_33;
#line 1099 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29;
#line 1099 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_Info_30_30;

#line 1099 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_0_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 1099 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5;
#line 1099 "typecheck.m"
              check_hlds__typecheck__AddrOfHeadVar__4_34 = check_hlds__typecheck__AddrOfHeadVar__4__tmp_copy_34;
#line 1099 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 1099 "typecheck.m"
            }
#line 1099 "typecheck.m"
            continue;
#line 1096 "typecheck.m"
          }
#line 1094 "typecheck.m"
      }
#line 1094 "typecheck.m"
      break;
#line 1094 "typecheck.m"
    }
#line 1089 "typecheck.m"
}

#line 1234 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_8,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfGoal_43,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__EnclosingContext_10,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31)
#line 1234 "typecheck.m"
{
#line 1238 "typecheck.m"
  {
#line 1238 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__Goal_9;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 0)));
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 1)));
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__Context0_15;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_16;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_17;
#line 1238 "typecheck.m"
    MR_Integer check_hlds__typecheck__NumTypeAssignSets_18;
#line 1238 "typecheck.m"
    MR_Integer check_hlds__typecheck__WarnLimit_19;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr_24;
#line 1244 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;

#line 1243 "typecheck.m"
    {
#line 1243 "typecheck.m"
      check_hlds__typecheck__Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo0_14);
    }
#line 1244 "typecheck.m"
    {
#line 1244 "typecheck.m"
      check_hlds__typecheck__V_41_41 = mercury__term__context_init_0_f_0();
    }
#line 1244 "typecheck.m"
    {
#line 1244 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck__Context0_15, check_hlds__typecheck__V_41_41);
    }
#line 1244 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1245 "typecheck.m"
      {
#line 1245 "typecheck.m"
        check_hlds__typecheck__Context_16 = check_hlds__typecheck__EnclosingContext_10;
#line 1246 "typecheck.m"
        {
#line 1246 "typecheck.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalInfo0_14, &check_hlds__typecheck__GoalInfo_17);
        }
#line 1245 "typecheck.m"
      }
#line 1244 "typecheck.m"
    else
#line 1248 "typecheck.m"
      {
#line 1248 "typecheck.m"
        check_hlds__typecheck__Context_16 = check_hlds__typecheck__Context0_15;
#line 1249 "typecheck.m"
        check_hlds__typecheck__GoalInfo_17 = check_hlds__typecheck__GoalInfo0_14;
#line 1248 "typecheck.m"
      }
#line 1263 "typecheck.m"
    {
#line 1263 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, &check_hlds__typecheck__NumTypeAssignSets_18);
    }
#line 1264 "typecheck.m"
    {
#line 1264 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__WarnLimit_19);
    }
#line 1265 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__WarnLimit_19);
#line 1265 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1266 "typecheck.m"
      {
#line 1266 "typecheck.m"
        MR_Integer check_hlds__typecheck__ErrorLimit_20;
#line 1266 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_21;
#line 1266 "typecheck.m"
        MR_Word check_hlds__typecheck__OverloadedSymbolMap_22;

#line 1266 "typecheck.m"
        {
#line 1266 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ErrorLimit_20);
        }
#line 1267 "typecheck.m"
        {
#line 1267 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ClauseContext_21);
        }
#line 1268 "typecheck.m"
        {
#line 1268 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__OverloadedSymbolMap_22);
        }
#line 1269 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__ErrorLimit_20);
#line 1269 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1272 "typecheck.m"
          {
#line 1272 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorSpec_23;
#line 1272 "typecheck.m"
            MR_Word check_hlds__typecheck__V_32_32;

#line 1271 "typecheck.m"
            {
#line 1271 "typecheck.m"
              check_hlds__typecheck__ErrorSpec_23 = check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
            }
#line 1273 "typecheck.m"
            {
#line 1273 "typecheck.m"
              check_hlds__typecheck__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_32_32, 0) = ((MR_Box) (check_hlds__typecheck__ErrorSpec_23));
#line 1273 "typecheck.m"
            }
#line 1273 "typecheck.m"
            {
#line 1273 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_32_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
            }
#line 1277 "typecheck.m"
            check_hlds__typecheck__GoalExpr_24 = check_hlds__typecheck__GoalExpr0_13;
#line 1272 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28;
#line 1272 "typecheck.m"
          }
#line 1269 "typecheck.m"
        else
#line 1279 "typecheck.m"
          {
#line 1279 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybePrevSpec_25;
#line 1279 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_35_35;

#line 1279 "typecheck.m"
            {
#line 1279 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__MaybePrevSpec_25);
            }
#line 1285 "typecheck.m"
            if ((check_hlds__typecheck__MaybePrevSpec_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1281 "typecheck.m"
              {
#line 1281 "typecheck.m"
                MR_Word check_hlds__typecheck__WarnSpec_26;
#line 1281 "typecheck.m"
                MR_Word check_hlds__typecheck__V_34_34;

#line 1282 "typecheck.m"
                {
#line 1282 "typecheck.m"
                  check_hlds__typecheck__WarnSpec_26 = check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
                }
#line 1284 "typecheck.m"
                {
#line 1284 "typecheck.m"
                  check_hlds__typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_34_34, 0) = ((MR_Box) (check_hlds__typecheck__WarnSpec_26));
#line 1284 "typecheck.m"
                }
#line 1284 "typecheck.m"
                {
#line 1284 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_34_34, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__STATE_VARIABLE_Info_35_35);
                }
#line 1281 "typecheck.m"
              }
#line 1285 "typecheck.m"
            else
#line 1286 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_35_35 = check_hlds__typecheck__STATE_VARIABLE_Info_0_30;
#line 1288 "typecheck.m"
            {
#line 1288 "typecheck.m"
              check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_35_35, check_hlds__typecheck__STATE_VARIABLE_Info_31);
            }
#line 1279 "typecheck.m"
          }
#line 1266 "typecheck.m"
      }
#line 1265 "typecheck.m"
    else
#line 1292 "typecheck.m"
      {
#line 1292 "typecheck.m"
        check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
      }
#line 1295 "typecheck.m"
    {
#line 1295 "typecheck.m"
      check_hlds__typecheck__Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_9, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_24));
#line 1295 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_9, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_17));
#line 1295 "typecheck.m"
    }
#line 3762 "check_hlds.typecheck.c"
    *check_hlds__typecheck__AddrOfGoal_43 = check_hlds__typecheck__Goal_9;
#line 1238 "typecheck.m"
  }
#line 1234 "typecheck.m"
}

#line 2226 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_13,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__X_14,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_15,
#line 2226 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfRHS_83,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33,
#line 2226 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34,
#line 2226 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_35,
#line 2226 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_36)
#line 2226 "typecheck.m"
{
#line 2234 "typecheck.m"
  {
#line 2234 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2234 "typecheck.m"
#line 2234 "typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__typecheck__RHS0_15)) {
#line 2234 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2234 "typecheck.m"
      case (MR_Integer) 0:
#line 2234 "typecheck.m"
        {
#line 2234 "typecheck.m"
          MR_Word check_hlds__typecheck__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)));
#line 2234 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet1_75;
#line 2264 "typecheck.m"
          MR_Word check_hlds__typecheck__V_76_76;
#line 2264 "typecheck.m"
          MR_Word check_hlds__typecheck__V_77_77;

#line 2261 "typecheck.m"
          {
#line 2261 "typecheck.m"
            check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, check_hlds__typecheck__X_14, check_hlds__typecheck__Y_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_75);
          }
#line 2263 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2263 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2263 "typecheck.m"
            {
#line 2264 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33)) == (MR_mktag((MR_Integer) 1)));
#line 2264 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2264 "typecheck.m"
                {
#line 2264 "typecheck.m"
                  check_hlds__typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 0)));
#line 2264 "typecheck.m"
                  check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 1)));
#line 2264 "typecheck.m"
                }
#line 2263 "typecheck.m"
            }
#line 2262 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2266 "typecheck.m"
            {
#line 2266 "typecheck.m"
              MR_Word check_hlds__typecheck__ClauseContext_78;
#line 2266 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_79;

#line 2266 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33;
#line 2267 "typecheck.m"
              {
#line 2267 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__ClauseContext_78);
              }
#line 2268 "typecheck.m"
              {
#line 2268 "typecheck.m"
                check_hlds__typecheck__Spec_79 = check_hlds__typecheck_errors__report_error_unif_var_var_6_f_0(check_hlds__typecheck__ClauseContext_78, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__X_14, check_hlds__typecheck__Y_19, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33);
              }
#line 2270 "typecheck.m"
              {
#line 2270 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_79, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, check_hlds__typecheck__STATE_VARIABLE_Info_36);
              }
#line 2266 "typecheck.m"
            }
#line 2262 "typecheck.m"
          else
#line 2272 "typecheck.m"
            {
#line 2272 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34 = check_hlds__typecheck__TypeAssignSet1_75;
#line 2272 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_36 = check_hlds__typecheck__STATE_VARIABLE_Info_0_35;
#line 2272 "typecheck.m"
            }
#line 3880 "check_hlds.typecheck.c"
          *check_hlds__typecheck__AddrOfRHS_83 = check_hlds__typecheck__RHS0_15;
#line 2234 "typecheck.m"
        }
#line 2234 "typecheck.m"
        break;
#line 2234 "typecheck.m"
      case (MR_Integer) 1:
#line 2239 "typecheck.m"
        {
#line 2239 "typecheck.m"
          MR_Word check_hlds__typecheck__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)));
#line 2239 "typecheck.m"
          MR_Word check_hlds__typecheck__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 2)));
#line 2239 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41;
#line 2239 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_42_42;
#line 2239 "typecheck.m"
          MR_Word check_hlds__typecheck___ExistConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 1)));

#line 2240 "typecheck.m"
          {
#line 2240 "typecheck.m"
            check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__X_14, check_hlds__typecheck__Functor_20, check_hlds__typecheck__Args_22, check_hlds__typecheck__GoalId_13, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__STATE_VARIABLE_Info_42_42);
          }
#line 2242 "typecheck.m"
          {
#line 2242 "typecheck.m"
            check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34, check_hlds__typecheck__STATE_VARIABLE_Info_42_42, check_hlds__typecheck__STATE_VARIABLE_Info_36);
          }
#line 3911 "check_hlds.typecheck.c"
          *check_hlds__typecheck__AddrOfRHS_83 = check_hlds__typecheck__RHS0_15;
#line 2239 "typecheck.m"
        }
#line 2234 "typecheck.m"
        break;
#line 2234 "typecheck.m"
      case (MR_Integer) 2:
#line 2246 "typecheck.m"
        {
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__Purity_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__Groundness_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__PredOrFunc_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__NonLocals_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 2)));
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 3)));
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 4)));
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__Det_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 5)));
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 6)));
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37;
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_38_38;
#line 2246 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet1_59;
#line 2701 "typecheck.m"
          MR_Word check_hlds__typecheck__V_60_60;
#line 2701 "typecheck.m"
          MR_Word check_hlds__typecheck__V_61_61;
#line 2249 "typecheck.m"
          MR_Word * check_hlds__typecheck__AddrGoal_82;
#line 2249 "typecheck.m"
          MR_Word check_hlds__typecheck__RHS_84;

#line 2697 "typecheck.m"
          {
#line 2697 "typecheck.m"
            check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, check_hlds__typecheck__Purity_23, check_hlds__typecheck__PredOrFunc_25, check_hlds__typecheck__X_14, check_hlds__typecheck__Vars_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_59);
          }
#line 2700 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2700 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2700 "typecheck.m"
            {
#line 2701 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33)) == (MR_mktag((MR_Integer) 1)));
#line 2701 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2701 "typecheck.m"
                {
#line 2701 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 0)));
#line 2701 "typecheck.m"
                  check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 1)));
#line 2701 "typecheck.m"
                }
#line 2700 "typecheck.m"
            }
#line 2699 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2703 "typecheck.m"
            {
#line 2703 "typecheck.m"
              MR_Word check_hlds__typecheck__ClauseContext_62;
#line 2703 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_63;

#line 2703 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33;
#line 2704 "typecheck.m"
              {
#line 2704 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__ClauseContext_62);
              }
#line 2705 "typecheck.m"
              {
#line 2705 "typecheck.m"
                check_hlds__typecheck__Spec_63 = check_hlds__typecheck_errors__report_error_lambda_var_8_f_0(check_hlds__typecheck__ClauseContext_62, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__PredOrFunc_25, check_hlds__typecheck__X_14, check_hlds__typecheck__Vars_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33);
              }
#line 2707 "typecheck.m"
              {
#line 2707 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_63, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
              }
#line 2703 "typecheck.m"
            }
#line 2699 "typecheck.m"
          else
#line 2709 "typecheck.m"
            {
#line 2709 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37 = check_hlds__typecheck__TypeAssignSet1_59;
#line 2709 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_38_38 = check_hlds__typecheck__STATE_VARIABLE_Info_0_35;
#line 2709 "typecheck.m"
            }
#line 2250 "typecheck.m"
          {
#line 2250 "typecheck.m"
            check_hlds__typecheck__RHS_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 0) = ((MR_Box) ((check_hlds__typecheck__Purity_23 | ((((check_hlds__typecheck__Groundness_24 << (MR_Integer) 2)) | ((check_hlds__typecheck__PredOrFunc_25 << (MR_Integer) 3)))))));
#line 2250 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 1) = (MR_Integer) 0;
#line 2250 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 2) = ((MR_Box) (check_hlds__typecheck__NonLocals_27));
#line 2250 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 3) = ((MR_Box) (check_hlds__typecheck__Vars_28));
#line 2250 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 4) = ((MR_Box) (check_hlds__typecheck__Modes_29));
#line 2250 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 5) = ((MR_Box) (check_hlds__typecheck__Det_30));
#line 2250 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, 6) = (MR_Integer) 0;
#line 2250 "typecheck.m"
          }
#line 2250 "typecheck.m"
          check_hlds__typecheck__AddrGoal_82 = (MR_Word *) &(MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS_84, (MR_Integer) 6));
#line 4037 "check_hlds.typecheck.c"
          *check_hlds__typecheck__AddrOfRHS_83 = check_hlds__typecheck__RHS_84;
#line 2249 "typecheck.m"
          {
#line 2249 "typecheck.m"
            check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(check_hlds__typecheck__Goal0_31, check_hlds__typecheck__AddrGoal_82, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34, check_hlds__typecheck__STATE_VARIABLE_Info_38_38, check_hlds__typecheck__STATE_VARIABLE_Info_36);
          }
#line 2246 "typecheck.m"
        }
#line 2234 "typecheck.m"
        break;
#line 2234 "typecheck.m"
    }
#line 2234 "typecheck.m"
  }
#line 2226 "typecheck.m"
}

#line 1536 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_31,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7)
#line 1536 "typecheck.m"
{
#line 1540 "typecheck.m"
  while (MR_TRUE)
#line 1540 "typecheck.m"
    {
#line 1540 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1540 "typecheck.m"
      {
#line 1540 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1540 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1540 "typecheck.m"
          {
#line 4089 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__2_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1540 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0_6;
#line 1540 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 1540 "typecheck.m"
          }
#line 1540 "typecheck.m"
        else
#line 1542 "typecheck.m"
          {
#line 1542 "typecheck.m"
            MR_Word check_hlds__typecheck__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1542 "typecheck.m"
            MR_Word check_hlds__typecheck__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1542 "typecheck.m"
            MR_Word check_hlds__typecheck__Goal_17;
#line 1542 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26;
#line 1542 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
#line 1544 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrGoals_30;
#line 1544 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVar__2_32;

#line 1543 "typecheck.m"
            {
#line 1543 "typecheck.m"
              check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Goal0_15, &check_hlds__typecheck__Goal_17, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_Info_0_6, &check_hlds__typecheck__STATE_VARIABLE_Info_27_27);
            }
#line 1541 "typecheck.m"
            {
#line 1541 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_32, 0) = ((MR_Box) (check_hlds__typecheck__Goal_17));
#line 1541 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_32, 1) = NULL;
#line 1541 "typecheck.m"
            }
#line 1541 "typecheck.m"
            check_hlds__typecheck__AddrGoals_30 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_32, (MR_Integer) 1));
#line 4133 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__2_31 = check_hlds__typecheck__HeadVar__2_32;
#line 1544 "typecheck.m"
            /* direct tailcall eliminated */
#line 1544 "typecheck.m"
            {
#line 1544 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__Goals0_16;
#line 1544 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrOfHeadVar__2__tmp_copy_31 = check_hlds__typecheck__AddrGoals_30;
#line 1544 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26;
#line 1544 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_Info_27_27;

#line 1544 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_0_6 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_6;
#line 1544 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 1544 "typecheck.m"
              check_hlds__typecheck__AddrOfHeadVar__2_31 = check_hlds__typecheck__AddrOfHeadVar__2__tmp_copy_31;
#line 1544 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1544 "typecheck.m"
            }
#line 1544 "typecheck.m"
            continue;
#line 1542 "typecheck.m"
          }
#line 1540 "typecheck.m"
      }
#line 1540 "typecheck.m"
      break;
#line 1540 "typecheck.m"
    }
#line 1536 "typecheck.m"
}

#line 2727 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(
#line 2727 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2727 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_27,
#line 2727 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2727 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4)
#line 2727 "typecheck.m"
{
#line 2730 "typecheck.m"
  while (MR_TRUE)
#line 2730 "typecheck.m"
    {
#line 2730 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2730 "typecheck.m"
      {
#line 2730 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2730 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2730 "typecheck.m"
          {
#line 4199 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2730 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2730 "typecheck.m"
          }
#line 2730 "typecheck.m"
        else
#line 2731 "typecheck.m"
          {
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__Type_10;
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_13;
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;
#line 2734 "typecheck.m"
            MR_Word check_hlds__typecheck__VarType_14;
#line 2748 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrTypes_26;
#line 2748 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVar__2_28;

#line 2733 "typecheck.m"
            {
#line 2733 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__VarTypes0_13);
            }
#line 2734 "typecheck.m"
            {
#line 2734 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_13, check_hlds__typecheck__Var_8, &check_hlds__typecheck__VarType_14);
            }
#line 2734 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2736 "typecheck.m"
              {
#line 2736 "typecheck.m"
                check_hlds__typecheck__Type_10 = check_hlds__typecheck__VarType_14;
#line 2736 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2736 "typecheck.m"
              }
#line 2734 "typecheck.m"
            else
#line 2740 "typecheck.m"
              {
#line 2740 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 2740 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVar_16;
#line 2740 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 2740 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes1_18;
#line 2740 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21;

#line 2740 "typecheck.m"
                {
#line 2740 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__TypeVarSet0_15);
                }
#line 2741 "typecheck.m"
                {
#line 2741 "typecheck.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
                }
#line 2742 "typecheck.m"
                {
#line 2742 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21);
                }
#line 2743 "typecheck.m"
                {
#line 2743 "typecheck.m"
                  check_hlds__typecheck__Type_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2743 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 2743 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2743 "typecheck.m"
                }
#line 2744 "typecheck.m"
                {
#line 2744 "typecheck.m"
                  hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__Var_8, check_hlds__typecheck__Type_10, check_hlds__typecheck__VarTypes0_13, &check_hlds__typecheck__VarTypes1_18);
                }
#line 2745 "typecheck.m"
                {
#line 2745 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes1_18, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23);
                }
#line 2740 "typecheck.m"
              }
#line 2731 "typecheck.m"
            {
#line 2731 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2731 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_28, 0) = ((MR_Box) (check_hlds__typecheck__Type_10));
#line 2731 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_28, 1) = NULL;
#line 2731 "typecheck.m"
            }
#line 2731 "typecheck.m"
            check_hlds__typecheck__AddrTypes_26 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_28, (MR_Integer) 1));
#line 4310 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__2_27 = check_hlds__typecheck__HeadVar__2_28;
#line 2748 "typecheck.m"
            /* direct tailcall eliminated */
#line 2748 "typecheck.m"
            {
#line 2748 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__Vars_9;
#line 2748 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrOfHeadVar__2__tmp_copy_27 = check_hlds__typecheck__AddrTypes_26;
#line 2748 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;

#line 2748 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0__tmp_copy_3;
#line 2748 "typecheck.m"
              check_hlds__typecheck__AddrOfHeadVar__2_27 = check_hlds__typecheck__AddrOfHeadVar__2__tmp_copy_27;
#line 2748 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2748 "typecheck.m"
            }
#line 2748 "typecheck.m"
            continue;
#line 2731 "typecheck.m"
          }
#line 2730 "typecheck.m"
      }
#line 2730 "typecheck.m"
      break;
#line 2730 "typecheck.m"
    }
#line 2727 "typecheck.m"
}

#line 3406 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3406 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__5_17)
#line 3406 "typecheck.m"
{
#line 3410 "typecheck.m"
  while (MR_TRUE)
#line 3410 "typecheck.m"
    {
#line 3410 "typecheck.m"
      /* tailcall optimized into a loop */
#line 3410 "typecheck.m"
      {
#line 3410 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 3410 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3410 "typecheck.m"
          {
#line 4374 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3410 "typecheck.m"
          }
#line 3410 "typecheck.m"
        else
#line 3411 "typecheck.m"
          {
#line 3411 "typecheck.m"
            MR_Word check_hlds__typecheck__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 3411 "typecheck.m"
            MR_Word check_hlds__typecheck__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 3411 "typecheck.m"
            MR_Word check_hlds__typecheck__Y_14;
#line 3413 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrYs_16;
#line 3413 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVar__5_18;

#line 3412 "typecheck.m"
            {
#line 3412 "typecheck.m"
              check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__X_12, &check_hlds__typecheck__Y_14);
            }
#line 3411 "typecheck.m"
            {
#line 3411 "typecheck.m"
              check_hlds__typecheck__HeadVar__5_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3411 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_18, 0) = ((MR_Box) (check_hlds__typecheck__Y_14));
#line 3411 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_18, 1) = NULL;
#line 3411 "typecheck.m"
            }
#line 3411 "typecheck.m"
            check_hlds__typecheck__AddrYs_16 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_18, (MR_Integer) 1));
#line 4410 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__5_17 = check_hlds__typecheck__HeadVar__5_18;
#line 3413 "typecheck.m"
            /* direct tailcall eliminated */
#line 3413 "typecheck.m"
            {
#line 3413 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__4__tmp_copy_4 = check_hlds__typecheck__Xs_13;
#line 3413 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrOfHeadVar__5__tmp_copy_17 = check_hlds__typecheck__AddrYs_16;

#line 3413 "typecheck.m"
              check_hlds__typecheck__AddrOfHeadVar__5_17 = check_hlds__typecheck__AddrOfHeadVar__5__tmp_copy_17;
#line 3413 "typecheck.m"
              check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__4__tmp_copy_4;
#line 3413 "typecheck.m"
            }
#line 3413 "typecheck.m"
            continue;
#line 3411 "typecheck.m"
          }
#line 3410 "typecheck.m"
      }
#line 3410 "typecheck.m"
      break;
#line 3410 "typecheck.m"
    }
#line 3406 "typecheck.m"
}

#line 1929 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_skip_arg_1_2_p_0(
#line 1929 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1929 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_16)
#line 1929 "typecheck.m"
{
#line 1931 "typecheck.m"
  while (MR_TRUE)
#line 1931 "typecheck.m"
    {
#line 1931 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1931 "typecheck.m"
      {
#line 1931 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1931 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1931 "typecheck.m"
          {
#line 4464 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__2_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1931 "typecheck.m"
          }
#line 1931 "typecheck.m"
        else
#line 1933 "typecheck.m"
          {
#line 1933 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssign0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1933 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssigns0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1933 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssign_5;
#line 1933 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 0)));
#line 1933 "typecheck.m"
            MR_Word check_hlds__typecheck__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 1)));
#line 1933 "typecheck.m"
            MR_Word check_hlds__typecheck__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 2)));
#line 1933 "typecheck.m"
            MR_Word check_hlds__typecheck__Args_11;
#line 1943 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrArgTypeAssigns_15;
#line 1943 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVar__2_17;

#line 1937 "typecheck.m"
            if ((check_hlds__typecheck__Args0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1938 "typecheck.m"
              {
#line 1940 "typecheck.m"
                {
#line 1940 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1940 "typecheck.m"
                  return;
                }
#line 1938 "typecheck.m"
              }
#line 1937 "typecheck.m"
            else
#line 1936 "typecheck.m"
              {
#line 1936 "typecheck.m"
                MR_Word check_hlds__typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 0)));

#line 1936 "typecheck.m"
                check_hlds__typecheck__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 1)));
#line 1936 "typecheck.m"
              }
#line 1942 "typecheck.m"
            {
#line 1942 "typecheck.m"
              check_hlds__typecheck__ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1942 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_7));
#line 1942 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 1) = ((MR_Box) (check_hlds__typecheck__Args_11));
#line 1942 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_9));
#line 1942 "typecheck.m"
            }
#line 1933 "typecheck.m"
            {
#line 1933 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1933 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_17, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_5));
#line 1933 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_17, 1) = NULL;
#line 1933 "typecheck.m"
            }
#line 1933 "typecheck.m"
            check_hlds__typecheck__AddrArgTypeAssigns_15 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_17, (MR_Integer) 1));
#line 4539 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__2_16 = check_hlds__typecheck__HeadVar__2_17;
#line 1943 "typecheck.m"
            /* direct tailcall eliminated */
#line 1943 "typecheck.m"
            {
#line 1943 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ArgTypeAssigns0_4;
#line 1943 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrOfHeadVar__2__tmp_copy_16 = check_hlds__typecheck__AddrArgTypeAssigns_15;

#line 1943 "typecheck.m"
              check_hlds__typecheck__AddrOfHeadVar__2_16 = check_hlds__typecheck__AddrOfHeadVar__2__tmp_copy_16;
#line 1943 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1943 "typecheck.m"
            }
#line 1943 "typecheck.m"
            continue;
#line 1933 "typecheck.m"
          }
#line 1931 "typecheck.m"
      }
#line 1931 "typecheck.m"
      break;
#line 1931 "typecheck.m"
    }
#line 1929 "typecheck.m"
}

#line 1527 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(
#line 1527 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1527 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__2_10)
#line 1527 "typecheck.m"
{
#line 1530 "typecheck.m"
  while (MR_TRUE)
#line 1530 "typecheck.m"
    {
#line 1530 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1530 "typecheck.m"
      {
#line 1530 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1530 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "typecheck.m"
          {
#line 4593 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__2_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1530 "typecheck.m"
          }
#line 1530 "typecheck.m"
        else
#line 1531 "typecheck.m"
          {
#line 1531 "typecheck.m"
            MR_Word check_hlds__typecheck__I_3;
#line 1531 "typecheck.m"
            MR_Word check_hlds__typecheck__O_4;
#line 1531 "typecheck.m"
            MR_Word check_hlds__typecheck__Interfaces_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1531 "typecheck.m"
            MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1532 "typecheck.m"
            MR_Word check_hlds__typecheck__V_7_7;
#line 1532 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrSCCcallarg8_9;
#line 1532 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVar__2_11;

#line 1531 "typecheck.m"
            check_hlds__typecheck__I_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 0)));
#line 1531 "typecheck.m"
            check_hlds__typecheck__O_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 1)));
#line 1532 "typecheck.m"
            {
#line 1532 "typecheck.m"
              check_hlds__typecheck__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck__O_4));
#line 1532 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 1) = NULL;
#line 1532 "typecheck.m"
            }
#line 1532 "typecheck.m"
            check_hlds__typecheck__AddrSCCcallarg8_9 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, (MR_Integer) 1));
#line 1532 "typecheck.m"
            {
#line 1532 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_11, 0) = ((MR_Box) (check_hlds__typecheck__I_3));
#line 1532 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_11, 1) = ((MR_Box) (check_hlds__typecheck__V_7_7));
#line 1532 "typecheck.m"
            }
#line 4642 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__2_10 = check_hlds__typecheck__HeadVar__2_11;
#line 1532 "typecheck.m"
            /* direct tailcall eliminated */
#line 1532 "typecheck.m"
            {
#line 1532 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__Interfaces_5;
#line 1532 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrOfHeadVar__2__tmp_copy_10 = check_hlds__typecheck__AddrSCCcallarg8_9;

#line 1532 "typecheck.m"
              check_hlds__typecheck__AddrOfHeadVar__2_10 = check_hlds__typecheck__AddrOfHeadVar__2__tmp_copy_10;
#line 1532 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1532 "typecheck.m"
            }
#line 1532 "typecheck.m"
            continue;
#line 1531 "typecheck.m"
          }
#line 1530 "typecheck.m"
      }
#line 1530 "typecheck.m"
      break;
#line 1530 "typecheck.m"
    }
#line 1527 "typecheck.m"
}

#line 190 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__LCMCpr_prepare_for_typecheck_1_4_p_0(
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 190 "typecheck.m"
  MR_Word * check_hlds__typecheck__AddrOfHeadVar__4_78)
#line 190 "typecheck.m"
{
#line 194 "typecheck.m"
  while (MR_TRUE)
#line 194 "typecheck.m"
    {
#line 194 "typecheck.m"
      /* tailcall optimized into a loop */
#line 194 "typecheck.m"
      {
#line 194 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 194 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "typecheck.m"
          {
#line 4700 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__4_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "typecheck.m"
          }
#line 194 "typecheck.m"
        else
#line 196 "typecheck.m"
          {
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIdInfo_11;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 0)));
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 1)));
#line 215 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrPredIdsInfos_77;
#line 215 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVar__4_79;

#line 199 "typecheck.m"
            {
#line 199 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_14)));
            }
#line 199 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 201 "typecheck.m"
              {
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalIdClausesInfo0_15;
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalIdClausesInfo_17;
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__Globals_18;
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21;
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22;
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__PredStatus_30;
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo0_31;
#line 201 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep0_32;
#line 202 "typecheck.m"
                MR_Word check_hlds__typecheck___ContainingGoalMap_16;
#line 1049 "typecheck.m"
                MR_Word check_hlds__typecheck___ItemNumbers0_33;
#line 1051 "typecheck.m"
                MR_Word check_hlds__typecheck__V_57_57;
#line 1051 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;

#line 201 "typecheck.m"
                {
#line 201 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__GoalIdClausesInfo0_15);
                }
#line 202 "typecheck.m"
                {
#line 202 "typecheck.m"
                  hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck___ContainingGoalMap_16, check_hlds__typecheck__GoalIdClausesInfo0_15, &check_hlds__typecheck__GoalIdClausesInfo_17);
                }
#line 204 "typecheck.m"
                {
#line 204 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__GoalIdClausesInfo_17, check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1047 "typecheck.m"
                {
#line 1047 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__PredStatus_30);
                }
#line 1048 "typecheck.m"
                {
#line 1048 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ClausesInfo0_31);
                }
#line 1049 "typecheck.m"
                {
#line 1049 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesRep0_32, &check_hlds__typecheck___ItemNumbers0_33);
                }
#line 1051 "typecheck.m"
                {
#line 1051 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1051 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1051 "typecheck.m"
                  {
#line 1052 "typecheck.m"
                    {
#line 1052 "typecheck.m"
                      check_hlds__typecheck__V_57_57 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_32);
                    }
#line 1052 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_57_57 == (MR_Integer) 1);
#line 1051 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1051 "typecheck.m"
                      {
#line 1053 "typecheck.m"
                        {
#line 1053 "typecheck.m"
                          check_hlds__typecheck__V_58_58 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__typecheck__PredStatus_30);
                        }
#line 1053 "typecheck.m"
                        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_58_58 == (MR_Integer) 1);
#line 1051 "typecheck.m"
                      }
#line 1051 "typecheck.m"
                  }
#line 1050 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1055 "typecheck.m"
                  {
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeInfo_53_75;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadVars_34;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgs_35;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncRetVal_36;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__Context_37;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncModule_38;
#line 1055 "typecheck.m"
                    MR_String check_hlds__typecheck__FuncName_39;
#line 1055 "typecheck.m"
                    MR_Integer check_hlds__typecheck__PredArity_40;
#line 1055 "typecheck.m"
                    MR_Integer check_hlds__typecheck__FuncArity_41;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncSymName_42;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncConsId_43;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncRHS_44;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__Goal0_45;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__GoalExpr_46;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__GoalInfo0_47;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__NonLocals_48;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__GoalInfo_49;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__Goal_50;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__Clause_51;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__ClausesRep_52;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__ItemNumbers_53;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__ClausesInfo_54;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__Markers0_55;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__Markers_56;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_60_60;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_64_64;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_68_68;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71;
#line 1055 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72;
#line 1056 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv0_FuncRetVal_36;

#line 1055 "typecheck.m"
                    {
#line 1055 "typecheck.m"
                      hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__HeadVars_34);
                    }
#line 4890 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_53_75 = (MR_Word) &check_hlds__typecheck_scalar_common_1[2];
#line 1056 "typecheck.m"
                    {
#line 1056 "typecheck.m"
                      hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34, &check_hlds__typecheck__FuncArgs_35, &check_hlds__typecheck__conv0_FuncRetVal_36);
                    }
#line 1056 "typecheck.m"
                    check_hlds__typecheck__FuncRetVal_36 = ((MR_Word) check_hlds__typecheck__conv0_FuncRetVal_36);
#line 1057 "typecheck.m"
                    {
#line 1057 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_37);
                    }
#line 1058 "typecheck.m"
                    {
#line 1058 "typecheck.m"
                      check_hlds__typecheck__FuncModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                    }
#line 1059 "typecheck.m"
                    {
#line 1059 "typecheck.m"
                      check_hlds__typecheck__FuncName_39 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                    }
#line 1060 "typecheck.m"
                    {
#line 1060 "typecheck.m"
                      check_hlds__typecheck__PredArity_40 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                    }
#line 1061 "typecheck.m"
                    {
#line 1061 "typecheck.m"
                      parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &check_hlds__typecheck__FuncArity_41, check_hlds__typecheck__PredArity_40);
                    }
#line 1062 "typecheck.m"
                    {
#line 1062 "typecheck.m"
                      check_hlds__typecheck__FuncSymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 0) = ((MR_Box) (check_hlds__typecheck__FuncModule_38));
#line 1062 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 1) = ((MR_Box) (check_hlds__typecheck__FuncName_39));
#line 1062 "typecheck.m"
                    }
#line 1063 "typecheck.m"
                    {
#line 1063 "typecheck.m"
                      check_hlds__typecheck__V_60_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                    }
#line 1063 "typecheck.m"
                    {
#line 1063 "typecheck.m"
                      check_hlds__typecheck__FuncConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1063 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 1) = ((MR_Box) (check_hlds__typecheck__FuncSymName_42));
#line 1063 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 2) = ((MR_Box) (check_hlds__typecheck__FuncArity_41));
#line 1063 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 3) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 1063 "typecheck.m"
                    }
#line 1064 "typecheck.m"
                    {
#line 1064 "typecheck.m"
                      check_hlds__typecheck__FuncRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 0) = ((MR_Box) (check_hlds__typecheck__FuncConsId_43));
#line 1064 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1064 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 2) = ((MR_Box) (check_hlds__typecheck__FuncArgs_35));
#line 1064 "typecheck.m"
                    }
#line 1065 "typecheck.m"
                    {
#line 1065 "typecheck.m"
                      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__typecheck__FuncRetVal_36, check_hlds__typecheck__FuncRHS_44, check_hlds__typecheck__Context_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Goal0_45);
                    }
#line 1067 "typecheck.m"
                    check_hlds__typecheck__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 0)));
#line 1067 "typecheck.m"
                    check_hlds__typecheck__GoalInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 1)));
#line 1068 "typecheck.m"
                    {
#line 1068 "typecheck.m"
                      check_hlds__typecheck__V_64_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34);
                    }
#line 1068 "typecheck.m"
                    {
#line 1068 "typecheck.m"
                      check_hlds__typecheck__NonLocals_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck__V_64_64);
                    }
#line 1069 "typecheck.m"
                    {
#line 1069 "typecheck.m"
                      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__typecheck__NonLocals_48, check_hlds__typecheck__GoalInfo0_47, &check_hlds__typecheck__GoalInfo_49);
                    }
#line 1070 "typecheck.m"
                    {
#line 1070 "typecheck.m"
                      check_hlds__typecheck__Goal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_46));
#line 1070 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_49));
#line 1070 "typecheck.m"
                    }
#line 1071 "typecheck.m"
                    {
#line 1071 "typecheck.m"
                      check_hlds__typecheck__Clause_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 1) = ((MR_Box) (check_hlds__typecheck__Goal_50));
#line 1071 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 3) = ((MR_Box) (check_hlds__typecheck__Context_37));
#line 1071 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "typecheck.m"
                    }
#line 1072 "typecheck.m"
                    {
#line 1072 "typecheck.m"
                      check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__Clause_51));
#line 1072 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1072 "typecheck.m"
                    }
#line 1072 "typecheck.m"
                    {
#line 1072 "typecheck.m"
                      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_68_68, &check_hlds__typecheck__ClausesRep_52);
                    }
#line 1073 "typecheck.m"
                    {
#line 1073 "typecheck.m"
                      check_hlds__typecheck__ItemNumbers_53 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
                    }
#line 1074 "typecheck.m"
                    {
#line 1074 "typecheck.m"
                      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_52, check_hlds__typecheck__ItemNumbers_53, check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesInfo_54);
                    }
#line 1076 "typecheck.m"
                    {
#line 1076 "typecheck.m"
                      hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71);
                    }
#line 1077 "typecheck.m"
                    {
#line 1077 "typecheck.m"
                      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__ClausesInfo_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72);
                    }
#line 1078 "typecheck.m"
                    {
#line 1078 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__Markers0_55);
                    }
#line 1079 "typecheck.m"
                    {
#line 1079 "typecheck.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, check_hlds__typecheck__Markers0_55, &check_hlds__typecheck__Markers_56);
                    }
#line 1080 "typecheck.m"
                    {
#line 1080 "typecheck.m"
                      hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21);
                    }
#line 1055 "typecheck.m"
                  }
#line 1050 "typecheck.m"
                else
#line 1050 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 208 "typecheck.m"
                {
#line 208 "typecheck.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_18);
                }
#line 209 "typecheck.m"
                {
#line 209 "typecheck.m"
                  hlds__headvar_names__maybe_improve_headvar_names_3_p_0(check_hlds__typecheck__Globals_18, check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22);
                }
#line 210 "typecheck.m"
                {
#line 210 "typecheck.m"
                  check_hlds__typecheck__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__typecheck__PredId_14));
#line 210 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22));
#line 210 "typecheck.m"
                }
#line 201 "typecheck.m"
              }
#line 199 "typecheck.m"
            else
#line 212 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_11 = check_hlds__typecheck__PredIdInfo0_9;
#line 196 "typecheck.m"
            {
#line 196 "typecheck.m"
              check_hlds__typecheck__HeadVar__4_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_79, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_11));
#line 196 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_79, 1) = NULL;
#line 196 "typecheck.m"
            }
#line 196 "typecheck.m"
            check_hlds__typecheck__AddrPredIdsInfos_77 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_79, (MR_Integer) 1));
#line 5109 "check_hlds.typecheck.c"
            *check_hlds__typecheck__AddrOfHeadVar__4_78 = check_hlds__typecheck__HeadVar__4_79;
#line 215 "typecheck.m"
            /* direct tailcall eliminated */
#line 215 "typecheck.m"
            {
#line 215 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__PredIdsInfos0_10;
#line 215 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrOfHeadVar__4__tmp_copy_78 = check_hlds__typecheck__AddrPredIdsInfos_77;

#line 215 "typecheck.m"
              check_hlds__typecheck__AddrOfHeadVar__4_78 = check_hlds__typecheck__AddrOfHeadVar__4__tmp_copy_78;
#line 215 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 215 "typecheck.m"
            }
#line 215 "typecheck.m"
            continue;
#line 196 "typecheck.m"
          }
#line 194 "typecheck.m"
      }
#line 194 "typecheck.m"
      break;
#line 194 "typecheck.m"
    }
#line 190 "typecheck.m"
}

#line 2912 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2912 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2912 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2912 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8)
#line 2912 "typecheck.m"
{
#line 2915 "typecheck.m"
  {
#line 2915 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_21_42;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_22_43;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_44;
#line 2915 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyName_9;
#line 2915 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyNameToUse_12;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__Purity_13;
#line 2915 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity1_14;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_15;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__FuncType_16;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__RetType_18;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_19;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_20;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 2915 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_22_22;
#line 2915 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_23_23;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_36;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_37;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet1_38;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__RetTypeVar_39;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 2915 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 2916 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_10_10;
#line 2916 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;
#line 2922 "typecheck.m"
    MR_Integer check_hlds__typecheck__lo_0;
#line 2922 "typecheck.m"
    MR_Integer check_hlds__typecheck__hi_1;
#line 2922 "typecheck.m"
    MR_Integer check_hlds__typecheck__mid_2;
#line 2922 "typecheck.m"
    MR_Integer check_hlds__typecheck__result_3;

#line 2916 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2916 "typecheck.m"
      {
#line 2916 "typecheck.m"
        check_hlds__typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 1)));
#line 2916 "typecheck.m"
        check_hlds__typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 2)));
#line 2916 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 3)));
#line 2916 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 2916 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2916 "typecheck.m"
          {
#line 2916 "typecheck.m"
            check_hlds__typecheck__ApplyName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_21_21, (MR_Integer) 0)));
#line 2922 "typecheck.m"
            /* binary string jump switch */
#line 2922 "typecheck.m"
            check_hlds__typecheck__lo_0 = (MR_Integer) 0;
#line 2922 "typecheck.m"
            check_hlds__typecheck__hi_1 = (MR_Integer) 3;
#line 2922 "typecheck.m"
            do
#line 2922 "typecheck.m"
              {
#line 2922 "typecheck.m"
                check_hlds__typecheck__mid_2 = (((check_hlds__typecheck__lo_0 + check_hlds__typecheck__hi_1)) / (MR_Integer) 2);
#line 2922 "typecheck.m"
                check_hlds__typecheck__result_3 = MR_strcmp(check_hlds__typecheck__ApplyName_9, ((&check_hlds__typecheck_vector_common_11[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_11_0__vct_11_f_0);
#line 2922 "typecheck.m"
                if ((check_hlds__typecheck__result_3 == (MR_Integer) 0))
#line 2922 "typecheck.m"
                  {
#line 2922 "typecheck.m"
#line 2922 "typecheck.m"
                    switch (((&check_hlds__typecheck_vector_common_11[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_11_0__vct_11_f_1) {
#line 2922 "typecheck.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 2922 "typecheck.m"
                      case (MR_Integer) 0:
#line 2923 "typecheck.m"
                        {
#line 2923 "typecheck.m"
                          /* case "" */
#line 2924 "typecheck.m"
                          check_hlds__typecheck__ApplyNameToUse_12 = (MR_String) "apply";
#line 2925 "typecheck.m"
                          check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2923 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2923 "typecheck.m"
                        }
#line 2922 "typecheck.m"
                        break;
#line 2922 "typecheck.m"
                      case (MR_Integer) 1:
#line 2919 "typecheck.m"
                        {
#line 2919 "typecheck.m"
                          /* case "apply" */
#line 2920 "typecheck.m"
                          check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2921 "typecheck.m"
                          check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2919 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2919 "typecheck.m"
                        }
#line 2922 "typecheck.m"
                        break;
#line 2922 "typecheck.m"
                      case (MR_Integer) 2:
#line 2927 "typecheck.m"
                        {
#line 2927 "typecheck.m"
                          /* case "impure_apply" */
#line 2928 "typecheck.m"
                          check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2929 "typecheck.m"
                          check_hlds__typecheck__Purity_13 = (MR_Integer) 2;
#line 2927 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2927 "typecheck.m"
                        }
#line 2922 "typecheck.m"
                        break;
#line 2922 "typecheck.m"
                      case (MR_Integer) 3:
#line 2931 "typecheck.m"
                        {
#line 2931 "typecheck.m"
                          /* case "semipure_apply" */
#line 2932 "typecheck.m"
                          check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2933 "typecheck.m"
                          check_hlds__typecheck__Purity_13 = (MR_Integer) 1;
#line 2931 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2931 "typecheck.m"
                        }
#line 2922 "typecheck.m"
                        break;
#line 2922 "typecheck.m"
                    }
#line 2922 "typecheck.m"
                    /* jump out of search loop */
#line 2922 "typecheck.m"
                    goto label_0;
#line 2922 "typecheck.m"
                  }
#line 2922 "typecheck.m"
                else
#line 2922 "typecheck.m"
                if ((check_hlds__typecheck__result_3 < (MR_Integer) 0))
#line 2922 "typecheck.m"
                  check_hlds__typecheck__hi_1 = (check_hlds__typecheck__mid_2 - (MR_Integer) 1);
#line 2922 "typecheck.m"
                else
#line 2922 "typecheck.m"
                  check_hlds__typecheck__lo_0 = (check_hlds__typecheck__mid_2 + (MR_Integer) 1);
#line 2922 "typecheck.m"
              }
#line 2922 "typecheck.m"
            while ((check_hlds__typecheck__lo_0 <= check_hlds__typecheck__hi_1));
#line 2922 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_FALSE;
#line 2922 "typecheck.m"
          label_0:;
#line 2915 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2915 "typecheck.m"
              {
#line 2935 "typecheck.m"
                check_hlds__typecheck__V_22_22 = (MR_Integer) 1;
#line 2935 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_7 >= check_hlds__typecheck__V_22_22);
#line 2915 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2915 "typecheck.m"
                  {
#line 2936 "typecheck.m"
                    check_hlds__typecheck__V_23_23 = (MR_Integer) 1;
#line 2936 "typecheck.m"
                    check_hlds__typecheck__Arity1_14 = (check_hlds__typecheck__Arity_7 - check_hlds__typecheck__V_23_23);
#line 2937 "typecheck.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 5368 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1651 "typecheck.m"
                    {
#line 1651 "typecheck.m"
                      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__TypeVarSet0_36);
                    }
#line 1652 "typecheck.m"
                    {
#line 1652 "typecheck.m"
                      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, check_hlds__typecheck__Arity1_14, &check_hlds__typecheck__ArgTypeVars_37, check_hlds__typecheck__TypeVarSet0_36, &check_hlds__typecheck__TypeVarSet1_38);
                    }
#line 1653 "typecheck.m"
                    {
#line 1653 "typecheck.m"
                      mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__RetTypeVar_39, check_hlds__typecheck__TypeVarSet1_38, &check_hlds__typecheck__TypeVarSet_15);
                    }
#line 5385 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_22_43 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 5387 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_23_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
#line 1655 "typecheck.m"
                    {
#line 1655 "typecheck.m"
                      check_hlds__typecheck__V_40_40 = mercury__map__init_0_f_0(check_hlds__typecheck__TypeInfo_22_43, check_hlds__typecheck__TypeCtorInfo_23_44);
                    }
#line 1655 "typecheck.m"
                    {
#line 1655 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__ArgTypeVars_37, &check_hlds__typecheck__ArgTypes_17);
                    }
#line 1656 "typecheck.m"
                    check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1656 "typecheck.m"
                    {
#line 1656 "typecheck.m"
                      check_hlds__typecheck__RetType_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 0) = ((MR_Box) (check_hlds__typecheck__RetTypeVar_39));
#line 1656 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 1) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1656 "typecheck.m"
                    }
#line 1657 "typecheck.m"
                    {
#line 1657 "typecheck.m"
                      parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_13, check_hlds__typecheck__ArgTypes_17, check_hlds__typecheck__RetType_18, &check_hlds__typecheck__FuncType_16);
                    }
#line 2939 "typecheck.m"
                    check_hlds__typecheck__ExistQVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2940 "typecheck.m"
                    {
#line 2940 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
                    }
#line 2943 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2942 "typecheck.m"
                    {
#line 2942 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2942 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__FuncType_16));
#line 2942 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2942 "typecheck.m"
                    }
#line 2943 "typecheck.m"
                    {
#line 2943 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2943 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2943 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__ApplyNameToUse_12));
#line 2943 "typecheck.m"
                    }
#line 2941 "typecheck.m"
                    {
#line 2941 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2941 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_15));
#line 2941 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_19));
#line 2941 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 2) = ((MR_Box) (check_hlds__typecheck__RetType_18));
#line 2941 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 3) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 2941 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_20));
#line 2941 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 5) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 2941 "typecheck.m"
                    }
#line 2943 "typecheck.m"
                    {
#line 2943 "typecheck.m"
                      MR_Word base;
#line 2943 "typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2943 "typecheck.m"
                      *check_hlds__typecheck__ConsTypeInfos_8 = base;
#line 2943 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_25_25));
#line 2943 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 2943 "typecheck.m"
                    }
#line 2943 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2915 "typecheck.m"
                  }
#line 2915 "typecheck.m"
              }
#line 2916 "typecheck.m"
          }
#line 2916 "typecheck.m"
      }
#line 2915 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2915 "typecheck.m"
  }
#line 2912 "typecheck.m"
}

#line 2482 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2482 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2482 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2482 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2482 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2482 "typecheck.m"
{
#line 2486 "typecheck.m"
  while (MR_TRUE)
#line 2486 "typecheck.m"
    {
#line 2486 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2486 "typecheck.m"
      {
#line 2486 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2486 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2486 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2486 "typecheck.m"
        else
#line 2488 "typecheck.m"
          {
#line 2488 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2488 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2488 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 0)));
#line 2488 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 1)));
#line 2488 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;
#line 2489 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 2)));

#line 2191 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2191 "typecheck.m"
              if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2196 "typecheck.m"
                {
#line 2196 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_16));
#line 2196 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2196 "typecheck.m"
                }
#line 2191 "typecheck.m"
              else
#line 2191 "typecheck.m"
                {
#line 2192 "typecheck.m"
                  {
#line 2192 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2192 "typecheck.m"
                    return;
                  }
#line 2191 "typecheck.m"
                }
#line 2191 "typecheck.m"
            else
#line 2191 "typecheck.m"
            if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2193 "typecheck.m"
              {
#line 2194 "typecheck.m"
                {
#line 2194 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2194 "typecheck.m"
                  return;
                }
#line 2193 "typecheck.m"
              }
#line 2191 "typecheck.m"
            else
#line 2198 "typecheck.m"
              {
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 0)));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 1)));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes0_62;
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_64;

#line 2161 "typecheck.m"
                {
#line 2161 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__VarTypes0_62);
                }
#line 2162 "typecheck.m"
                {
#line 2162 "typecheck.m"
                  hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                }
#line 2172 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2173 "typecheck.m"
                  {
#line 2173 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_67;

#line 2174 "typecheck.m"
                    {
#line 2174 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign_67);
                    }
#line 2175 "typecheck.m"
                    {
#line 2175 "typecheck.m"
                      check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 2175 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2175 "typecheck.m"
                    }
#line 2173 "typecheck.m"
                  }
#line 2172 "typecheck.m"
                else
#line 2164 "typecheck.m"
                  {
#line 2164 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 2165 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2759 "typecheck.m"
                    {
#line 2759 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__HeadTypeParams_75);
                    }
#line 2760 "typecheck.m"
                    {
#line 2760 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeBindings0_76);
                    }
#line 2761 "typecheck.m"
                    {
#line 2761 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                    }
#line 2758 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2758 "typecheck.m"
                      {
#line 2762 "typecheck.m"
                        {
#line 2762 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign1_66);
                        }
#line 2762 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2758 "typecheck.m"
                      }
#line 2165 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2168 "typecheck.m"
                      {
#line 2168 "typecheck.m"
                        check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 2168 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2168 "typecheck.m"
                      }
#line 2165 "typecheck.m"
                    else
#line 2170 "typecheck.m"
                      check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 2164 "typecheck.m"
                  }
#line 2200 "typecheck.m"
                {
#line 2200 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                }
#line 2198 "typecheck.m"
              }
#line 2492 "typecheck.m"
            /* direct tailcall eliminated */
#line 2492 "typecheck.m"
            {
#line 2492 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_12;
#line 2492 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2492 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2492 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2492 "typecheck.m"
            }
#line 2492 "typecheck.m"
            continue;
#line 2488 "typecheck.m"
          }
#line 2486 "typecheck.m"
      }
#line 2486 "typecheck.m"
      break;
#line 2486 "typecheck.m"
    }
#line 2482 "typecheck.m"
}

#line 2445 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2445 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2445 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2445 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2445 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2445 "typecheck.m"
{
#line 2449 "typecheck.m"
  while (MR_TRUE)
#line 2449 "typecheck.m"
    {
#line 2449 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2449 "typecheck.m"
      {
#line 2449 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2449 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2449 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2449 "typecheck.m"
        else
#line 2451 "typecheck.m"
          {
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_16;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_18;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_19;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__V_22_22;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeVarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 0)));
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsExistQVars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 1)));
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 2)));
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 3)));
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 4)));
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_37;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ConstraintsToAdd_38;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__OldConstraints_46;
#line 2451 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints_47;
#line 2636 "typecheck.m"
            MR_Word check_hlds__typecheck___Source_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 5)));

#line 2643 "typecheck.m"
            {
#line 2643 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ConsTypeVarSet_31);
            }
#line 2642 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2645 "typecheck.m"
              {
#line 2645 "typecheck.m"
                check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType0_33;
#line 2646 "typecheck.m"
                check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes0_34;
#line 2647 "typecheck.m"
                check_hlds__typecheck__TypeAssign2_37 = check_hlds__typecheck__TypeAssign0_3;
#line 2648 "typecheck.m"
                check_hlds__typecheck__ConstraintsToAdd_38 = check_hlds__typecheck__ClassConstraints0_35;
#line 2645 "typecheck.m"
              }
#line 2642 "typecheck.m"
            else
#line 2649 "typecheck.m"
              {
#line 2649 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_39;
#line 2649 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType1_40;
#line 2649 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes1_41;
#line 2649 "typecheck.m"
                MR_Word check_hlds__typecheck__Renaming_42;
#line 2650 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 2650 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 2650 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet0_61;
#line 2650 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet_62;

#line 2651 "typecheck.m"
                {
#line 2651 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2651 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__ConsType0_33));
#line 2651 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes0_34));
#line 2651 "typecheck.m"
                }
#line 1882 "typecheck.m"
                {
#line 1882 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeVarSet0_61);
                }
#line 1883 "typecheck.m"
                {
#line 1883 "typecheck.m"
                  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_61, check_hlds__typecheck__ConsTypeVarSet_31, &check_hlds__typecheck__TypeVarSet_62, &check_hlds__typecheck__Renaming_42);
                }
#line 1884 "typecheck.m"
                {
#line 1884 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__V_48_48, &check_hlds__typecheck__V_49_49);
                }
#line 1886 "typecheck.m"
                {
#line 1886 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_62, check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeAssign1_39);
                }
#line 2651 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 2651 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2651 "typecheck.m"
                  {
#line 2651 "typecheck.m"
                    check_hlds__typecheck__ConsType1_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 0)));
#line 2651 "typecheck.m"
                    check_hlds__typecheck__ArgTypes1_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 1)));
#line 2655 "typecheck.m"
                    {
#line 2655 "typecheck.m"
                      MR_Word check_hlds__typecheck__ConsExistQVars_43;
#line 2655 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams0_44;
#line 2655 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams_45;

#line 2654 "typecheck.m"
                      {
#line 2654 "typecheck.m"
                        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ConsExistQVars0_32, &check_hlds__typecheck__ConsExistQVars_43);
                      }
#line 2656 "typecheck.m"
                      {
#line 2656 "typecheck.m"
                        check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ClassConstraints0_35, &check_hlds__typecheck__ConstraintsToAdd_38);
                      }
#line 2658 "typecheck.m"
                      {
#line 2658 "typecheck.m"
                        check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2659 "typecheck.m"
                      {
#line 2659 "typecheck.m"
                        check_hlds__typecheck__HeadTypeParams_45 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ConsExistQVars_43, check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2660 "typecheck.m"
                      {
#line 2660 "typecheck.m"
                        check_hlds__type_assign__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_45, check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__TypeAssign2_37);
                      }
#line 2663 "typecheck.m"
                      check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType1_40;
#line 2664 "typecheck.m"
                      check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes1_41;
#line 2655 "typecheck.m"
                    }
#line 2651 "typecheck.m"
                  }
#line 2651 "typecheck.m"
                else
#line 2666 "typecheck.m"
                  {
#line 2666 "typecheck.m"
                    {
#line 2666 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.get_cons_stuff\'/6", (MR_String) "type_assign_rename_apart failed");
#line 2666 "typecheck.m"
                      return;
                    }
#line 2666 "typecheck.m"
                  }
#line 2649 "typecheck.m"
              }
#line 2677 "typecheck.m"
            {
#line 2677 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__OldConstraints_46);
            }
#line 2678 "typecheck.m"
            {
#line 2678 "typecheck.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck__ConstraintsToAdd_38, check_hlds__typecheck__OldConstraints_46, &check_hlds__typecheck__ClassConstraints_47);
            }
#line 2679 "typecheck.m"
            {
#line 2679 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typecheck__ClassConstraints_47, check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__TypeAssign1_18);
            }
#line 2454 "typecheck.m"
            {
#line 2454 "typecheck.m"
              check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2454 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ConsType_16));
#line 2454 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2454 "typecheck.m"
            }
#line 2454 "typecheck.m"
            {
#line 2454 "typecheck.m"
              check_hlds__typecheck__ConsTypeAssign_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2454 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_18));
#line 2454 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 2454 "typecheck.m"
            }
#line 2455 "typecheck.m"
            {
#line 2455 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2455 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeAssign_19));
#line 2455 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4));
#line 2455 "typecheck.m"
            }
#line 2456 "typecheck.m"
            /* direct tailcall eliminated */
#line 2456 "typecheck.m"
            {
#line 2456 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsDefns_12;
#line 2456 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;

#line 2456 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2456 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2456 "typecheck.m"
            }
#line 2456 "typecheck.m"
            continue;
#line 2451 "typecheck.m"
          }
#line 2449 "typecheck.m"
      }
#line 2449 "typecheck.m"
      break;
#line 2449 "typecheck.m"
    }
#line 2445 "typecheck.m"
}

#line 2429 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2429 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2429 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2429 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2429 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2429 "typecheck.m"
{
#line 2435 "typecheck.m"
  while (MR_TRUE)
#line 2435 "typecheck.m"
    {
#line 2435 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2435 "typecheck.m"
      {
#line 2435 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2435 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2435 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2435 "typecheck.m"
        else
#line 2437 "typecheck.m"
          {
#line 2437 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2437 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2437 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2438 "typecheck.m"
            {
#line 2438 "typecheck.m"
              check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__ConsDefns_3, check_hlds__typecheck__TypeAssign_11, check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18);
            }
#line 2440 "typecheck.m"
            /* direct tailcall eliminated */
#line 2440 "typecheck.m"
            {
#line 2440 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns_12;
#line 2440 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2440 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2440 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2440 "typecheck.m"
            }
#line 2440 "typecheck.m"
            continue;
#line 2437 "typecheck.m"
          }
#line 2435 "typecheck.m"
      }
#line 2435 "typecheck.m"
      break;
#line 2435 "typecheck.m"
    }
#line 2429 "typecheck.m"
}

#line 2210 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 2210 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2210 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2210 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 2210 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 2210 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6)
#line 2210 "typecheck.m"
{
#line 2214 "typecheck.m"
  while (MR_TRUE)
#line 2214 "typecheck.m"
    {
#line 2214 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2214 "typecheck.m"
      {
#line 2214 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2214 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2214 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 2214 "typecheck.m"
        else
#line 2216 "typecheck.m"
          {
#line 2216 "typecheck.m"
            MR_Word check_hlds__typecheck__TA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2216 "typecheck.m"
            MR_Word check_hlds__typecheck__TAs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2216 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2191 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2191 "typecheck.m"
              if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2196 "typecheck.m"
                {
#line 2196 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TA_13));
#line 2196 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5));
#line 2196 "typecheck.m"
                }
#line 2191 "typecheck.m"
              else
#line 2191 "typecheck.m"
                {
#line 2192 "typecheck.m"
                  {
#line 2192 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2192 "typecheck.m"
                    return;
                  }
#line 2191 "typecheck.m"
                }
#line 2191 "typecheck.m"
            else
#line 2191 "typecheck.m"
            if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2193 "typecheck.m"
              {
#line 2194 "typecheck.m"
                {
#line 2194 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2194 "typecheck.m"
                  return;
                }
#line 2193 "typecheck.m"
              }
#line 2191 "typecheck.m"
            else
#line 2198 "typecheck.m"
              {
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 0)));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 1)));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes0_62;
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 2198 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_64;

#line 2161 "typecheck.m"
                {
#line 2161 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__VarTypes0_62);
                }
#line 2162 "typecheck.m"
                {
#line 2162 "typecheck.m"
                  hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                }
#line 2172 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2173 "typecheck.m"
                  {
#line 2173 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_67;

#line 2174 "typecheck.m"
                    {
#line 2174 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign_67);
                    }
#line 2175 "typecheck.m"
                    {
#line 2175 "typecheck.m"
                      check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 2175 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2175 "typecheck.m"
                    }
#line 2173 "typecheck.m"
                  }
#line 2172 "typecheck.m"
                else
#line 2164 "typecheck.m"
                  {
#line 2164 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 2165 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2759 "typecheck.m"
                    {
#line 2759 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__HeadTypeParams_75);
                    }
#line 2760 "typecheck.m"
                    {
#line 2760 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeBindings0_76);
                    }
#line 2761 "typecheck.m"
                    {
#line 2761 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                    }
#line 2758 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2758 "typecheck.m"
                      {
#line 2762 "typecheck.m"
                        {
#line 2762 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign1_66);
                        }
#line 2762 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2758 "typecheck.m"
                      }
#line 2165 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2168 "typecheck.m"
                      {
#line 2168 "typecheck.m"
                        check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 2168 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2168 "typecheck.m"
                      }
#line 2165 "typecheck.m"
                    else
#line 2170 "typecheck.m"
                      check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 2164 "typecheck.m"
                  }
#line 2200 "typecheck.m"
                {
#line 2200 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                }
#line 2198 "typecheck.m"
              }
#line 2218 "typecheck.m"
            /* direct tailcall eliminated */
#line 2218 "typecheck.m"
            {
#line 2218 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TAs_14;
#line 2218 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2218 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5;
#line 2218 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2218 "typecheck.m"
            }
#line 2218 "typecheck.m"
            continue;
#line 2216 "typecheck.m"
          }
#line 2214 "typecheck.m"
      }
#line 2214 "typecheck.m"
      break;
#line 2214 "typecheck.m"
    }
#line 2210 "typecheck.m"
}

#line 3431 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3431__2_1_f_0(
#line 3431 "typecheck.m"
  MR_Word check_hlds__typecheck__LambdaHeadVar__1_38)
#line 3431 "typecheck.m"
{
#line 3431 "typecheck.m"
  {
#line 3431 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3431 "typecheck.m"
    MR_Word check_hlds__typecheck__LambdaHeadVar__2_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 1)));
#line 3431 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 0)));
#line 3431 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 2)));
#line 3431 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__LambdaHeadVar__1_38, (MR_Integer) 3)));

#line 3431 "typecheck.m"
    return check_hlds__typecheck__LambdaHeadVar__2_39;
#line 3431 "typecheck.m"
  }
#line 3431 "typecheck.m"
}

#line 1495 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1495__1_2_p_0(
#line 1495 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_94,
#line 1495 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_160)
#line 1495 "typecheck.m"
{
#line 1495 "typecheck.m"
  {
#line 1495 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__GoalType_94 == check_hlds__typecheck__HeadVar__2_160);

#line 1495 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1495 "typecheck.m"
  }
#line 1495 "typecheck.m"
}

#line 512 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__512__1_2_p_0(
#line 512 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_24,
#line 512 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_54)
#line 512 "typecheck.m"
{
#line 512 "typecheck.m"
  {
#line 512 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 512 "typecheck.m"
    {
#line 512 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck__StartingSpecs_24)), ((MR_Box) (check_hlds__typecheck__HeadVar__2_54)));
    }
#line 512 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 512 "typecheck.m"
  }
#line 512 "typecheck.m"
}

#line 1156 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1156 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1156 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1156 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 1156 "typecheck.m"
{
#line 1156 "typecheck.m"
  {
#line 1156 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1156 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 1156 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 1156 "typecheck.m"
    {
#line 1156 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
    }
#line 1156 "typecheck.m"
  }
#line 1156 "typecheck.m"
}

#line 1156 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1156 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1156 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 1156 "typecheck.m"
{
#line 6434 "check_hlds.typecheck.c"
  {
#line 6436 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 6439 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 6441 "check_hlds.typecheck.c"
  }
#line 1156 "typecheck.m"
}

#line 3031 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 3031 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3031 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3031 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 3031 "typecheck.m"
{
#line 3031 "typecheck.m"
  {
#line 3031 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3031 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_12 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 3031 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_13 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 3031 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_12 == check_hlds__typecheck__CastY_13);
#line 3031 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 6470 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 3031 "typecheck.m"
    else
#line 3031 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 3031 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3031 "typecheck.m"
        {
#line 3031 "typecheck.m"
          MR_Word check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 3031 "typecheck.m"
          MR_Word check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 3031 "typecheck.m"
          {
#line 3031 "typecheck.m"
            check_hlds__typecheck_errors____Compare____cons_error_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_16_16, check_hlds__typecheck__V_11_11);
          }
#line 3031 "typecheck.m"
        }
#line 3031 "typecheck.m"
      else
#line 6494 "check_hlds.typecheck.c"
        *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 3031 "typecheck.m"
    else
#line 3031 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6500 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 3031 "typecheck.m"
    else
#line 3031 "typecheck.m"
      {
#line 3031 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__3_3), (MR_Integer) 0);
#line 3031 "typecheck.m"
        MR_Word check_hlds__typecheck__V_17_17 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);

#line 3031 "typecheck.m"
        {
#line 3031 "typecheck.m"
          check_hlds__typecheck_info____Compare____cons_type_info_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_17_17, check_hlds__typecheck__V_5_5);
        }
#line 3031 "typecheck.m"
      }
#line 3031 "typecheck.m"
  }
#line 3031 "typecheck.m"
}

#line 3031 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 3031 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3031 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 3031 "typecheck.m"
{
#line 3031 "typecheck.m"
  {
#line 3031 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3031 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 3031 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 3031 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 3031 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3031 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 3031 "typecheck.m"
    else
#line 3031 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 3031 "typecheck.m"
      {
#line 3031 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 3031 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6;

#line 3031 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 3031 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3031 "typecheck.m"
          {
#line 3031 "typecheck.m"
            check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 6566 "check_hlds.typecheck.c"
            {
#line 6568 "check_hlds.typecheck.c"
              check_hlds__typecheck__succeeded = check_hlds__typecheck_errors____Unify____cons_error_0_0(check_hlds__typecheck__V_5_5, check_hlds__typecheck__V_6_6);
            }
#line 3031 "typecheck.m"
          }
#line 3031 "typecheck.m"
      }
#line 3031 "typecheck.m"
    else
#line 3031 "typecheck.m"
      {
#line 3031 "typecheck.m"
        MR_Word check_hlds__typecheck__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__1_1), (MR_Integer) 0);
#line 3031 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4;

#line 3031 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 3031 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3031 "typecheck.m"
          {
#line 3031 "typecheck.m"
            check_hlds__typecheck__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);
#line 6592 "check_hlds.typecheck.c"
            {
#line 6594 "check_hlds.typecheck.c"
              check_hlds__typecheck__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_4_4);
            }
#line 3031 "typecheck.m"
          }
#line 3031 "typecheck.m"
      }
#line 3031 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3031 "typecheck.m"
  }
#line 3031 "typecheck.m"
}

#line 2414 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2414 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2414 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2414 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2414 "typecheck.m"
{
#line 2414 "typecheck.m"
  {
#line 2414 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2414 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_4 = check_hlds__typecheck__HeadVar__2_2;
#line 2414 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_5 = check_hlds__typecheck__HeadVar__3_3;

#line 2414 "typecheck.m"
    {
#line 2414 "typecheck.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_5)));
    }
#line 2414 "typecheck.m"
  }
#line 2414 "typecheck.m"
}

#line 2414 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2414 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2414 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2414 "typecheck.m"
{
#line 2414 "typecheck.m"
  {
#line 2414 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2414 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_3 = check_hlds__typecheck__HeadVar__1_1;
#line 2414 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_4 = check_hlds__typecheck__HeadVar__2_2;

#line 2414 "typecheck.m"
    {
#line 2414 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_4)));
    }
#line 2414 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2414 "typecheck.m"
  }
#line 2414 "typecheck.m"
}

#line 2411 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2411 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2411 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2411 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2411 "typecheck.m"
{
#line 2411 "typecheck.m"
  {
#line 2411 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2411 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_9 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 2411 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_10 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 2411 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_9 == check_hlds__typecheck__CastY_10);
#line 2411 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 6692 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 2411 "typecheck.m"
    else
#line 2411 "typecheck.m"
      {
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 2411 "typecheck.m"
        {
#line 2411 "typecheck.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck__V_8_8, check_hlds__typecheck__V_4_4, check_hlds__typecheck__V_6_6);
        }
#line 6714 "check_hlds.typecheck.c"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_8_8 == (MR_Integer) 0);
#line 2411 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2411 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2411 "typecheck.m"
          *check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__V_8_8;
#line 2411 "typecheck.m"
        else
#line 2411 "typecheck.m"
          {
#line 2411 "typecheck.m"
            {
#line 2411 "typecheck.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[5], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__V_5_5)), ((MR_Box) (check_hlds__typecheck__V_7_7)));
            }
#line 2411 "typecheck.m"
          }
#line 2411 "typecheck.m"
      }
#line 2411 "typecheck.m"
  }
#line 2411 "typecheck.m"
}

#line 2411 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2411 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2411 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2411 "typecheck.m"
{
#line 2411 "typecheck.m"
  {
#line 2411 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2411 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 2411 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 2411 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 2411 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2411 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2411 "typecheck.m"
    else
#line 2411 "typecheck.m"
      {
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_10_10;
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2411 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));

#line 6779 "check_hlds.typecheck.c"
        {
#line 6781 "check_hlds.typecheck.c"
          check_hlds__typecheck__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_5_5);
        }
#line 2411 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2411 "typecheck.m"
          {
#line 6788 "check_hlds.typecheck.c"
            check_hlds__typecheck__TypeInfo_10_10 = (MR_Word) &check_hlds__typecheck_scalar_common_1[5];
#line 6790 "check_hlds.typecheck.c"
            {
#line 6792 "check_hlds.typecheck.c"
              check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck__TypeInfo_10_10, ((MR_Box) (check_hlds__typecheck__V_4_4)), ((MR_Box) (check_hlds__typecheck__V_6_6)));
            }
#line 2411 "typecheck.m"
          }
#line 2411 "typecheck.m"
      }
#line 2411 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2411 "typecheck.m"
  }
#line 2411 "typecheck.m"
}

#line 3401 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3401 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3401 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3401 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 3401 "typecheck.m"
{
#line 3401 "typecheck.m"
  {
#line 3401 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3401 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 3401 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 3401 "typecheck.m"
    {
#line 3401 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
    }
#line 3401 "typecheck.m"
  }
#line 3401 "typecheck.m"
}

#line 3401 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3401 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3401 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 3401 "typecheck.m"
{
#line 6845 "check_hlds.typecheck.c"
  {
#line 6847 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 6850 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 6852 "check_hlds.typecheck.c"
  }
#line 3401 "typecheck.m"
}

#line 3431 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3431 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3431 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 3431 "typecheck.m"
{
#line 3431 "typecheck.m"
  {
#line 3431 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 3431 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 3431 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_LambdaHeadVar__2_39;

#line 3431 "typecheck.m"
    {
#line 3431 "typecheck.m"
      check_hlds__typecheck__conv0_LambdaHeadVar__2_39 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3431__2_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 3431 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_LambdaHeadVar__2_39));
#line 3431 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 3431 "typecheck.m"
  }
#line 3431 "typecheck.m"
}

#line 3419 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3419 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3419 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3419 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3419 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3419 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10)
#line 3419 "typecheck.m"
{
#line 3421 "typecheck.m"
  {
#line 3421 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 0)));
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 1)));
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 2)));
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeKinds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 3)));
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 4)));
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistProgConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 5)));
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 6)));
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_19;
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeTable_21;
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeDefn_22;
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_23;
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__PredId_24;
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_25;
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_26;
#line 3421 "typecheck.m"
    MR_Word check_hlds__typecheck__PredStatus_27;
#line 3429 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 7)));
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_55_55;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_57_57;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_59_59;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_62_62;
#line 3461 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 3462 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 3462 "typecheck.m"
    MR_Word check_hlds__typecheck__V_65_65;
#line 3464 "typecheck.m"
    MR_Word check_hlds__typecheck__V_42_42;

#line 3431 "typecheck.m"
    {
#line 3431 "typecheck.m"
      check_hlds__typecheck__ArgTypes_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[6], check_hlds__typecheck__Args_17);
    }
#line 3432 "typecheck.m"
    {
#line 3432 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__TypeTable_21);
    }
#line 3433 "typecheck.m"
    {
#line 3433 "typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_21, check_hlds__typecheck__TypeCtor_11, &check_hlds__typecheck__TypeDefn_22);
    }
#line 3434 "typecheck.m"
    {
#line 3434 "typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__Body_23);
    }
#line 3456 "typecheck.m"
    {
#line 3456 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredId_24);
    }
#line 3457 "typecheck.m"
    {
#line 3457 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_25);
    }
#line 3458 "typecheck.m"
    {
#line 3458 "typecheck.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_25, check_hlds__typecheck__PredId_24, &check_hlds__typecheck__PredInfo_26);
    }
#line 3459 "typecheck.m"
    {
#line 3459 "typecheck.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__PredStatus_27);
    }
#line 3461 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Body_23)) == (MR_mktag((MR_Integer) 1)));
#line 3461 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3461 "typecheck.m"
      {
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 0)));
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 1)));
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 2)));
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 3)));
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 4)));
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 5)));
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 3461 "typecheck.m"
        check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 7)));
#line 3461 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 3461 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3461 "typecheck.m"
          {
#line 3461 "typecheck.m"
            check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_40_40, (MR_Integer) 0)));
#line 3462 "typecheck.m"
            check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 3462 "typecheck.m"
            {
#line 3462 "typecheck.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__V_65_65);
            }
#line 3462 "typecheck.m"
            {
#line 3462 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(check_hlds__typecheck__V_41_41, check_hlds__typecheck__V_65_65);
            }
#line 3462 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3461 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3461 "typecheck.m"
              {
#line 3463 "typecheck.m"
                {
#line 3463 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
                }
#line 3463 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3461 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 3461 "typecheck.m"
                  {
#line 3464 "typecheck.m"
                    check_hlds__typecheck__V_42_42 = (MR_Word) check_hlds__typecheck__PredStatus_27;
#line 3464 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3464 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3461 "typecheck.m"
                  }
#line 3461 "typecheck.m"
              }
#line 3461 "typecheck.m"
          }
#line 3461 "typecheck.m"
      }
#line 3460 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3466 "typecheck.m"
      {
#line 3466 "typecheck.m"
        MR_Word check_hlds__typecheck__V_43_43;

#line 3466 "typecheck.m"
        {
#line 3466 "typecheck.m"
          check_hlds__typecheck__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3466 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_43_43, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3466 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_43_43, 1) = ((MR_Box) (check_hlds__typecheck__TypeDefn_22));
#line 3466 "typecheck.m"
        }
#line 3466 "typecheck.m"
        {
#line 3466 "typecheck.m"
          MR_Word base;
#line 3466 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3466 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3466 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_43_43));
#line 3466 "typecheck.m"
        }
#line 3466 "typecheck.m"
      }
#line 3460 "typecheck.m"
    else
#line 3467 "typecheck.m"
      {
#line 3470 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeStatus_29;
#line 3470 "typecheck.m"
        MR_Word check_hlds__typecheck__V_44_44;
#line 3473 "typecheck.m"
        MR_Word check_hlds__typecheck__V_45_45;

#line 3470 "typecheck.m"
        {
#line 3470 "typecheck.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__TypeStatus_29);
        }
#line 3471 "typecheck.m"
        check_hlds__typecheck__V_44_44 = (MR_Word) check_hlds__typecheck__TypeStatus_29;
#line 3471 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 3470 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3470 "typecheck.m"
          {
#line 3472 "typecheck.m"
            {
#line 3472 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
            }
#line 3472 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3470 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3470 "typecheck.m"
              {
#line 3473 "typecheck.m"
                check_hlds__typecheck__V_45_45 = (MR_Word) check_hlds__typecheck__PredStatus_27;
#line 3473 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3473 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3470 "typecheck.m"
              }
#line 3470 "typecheck.m"
          }
#line 3467 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3475 "typecheck.m"
          {
#line 3475 "typecheck.m"
            *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[3]);
#line 3475 "typecheck.m"
          }
#line 3467 "typecheck.m"
        else
#line 3476 "typecheck.m"
          {
#line 3477 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Action_8 == (MR_Integer) 0);
#line 3477 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3478 "typecheck.m"
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__ExistQVars0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3476 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3481 "typecheck.m"
              {
#line 3481 "typecheck.m"
                MR_Word check_hlds__typecheck__V_47_47;

#line 3481 "typecheck.m"
                {
#line 3481 "typecheck.m"
                  check_hlds__typecheck__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3481 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_47_47, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3481 "typecheck.m"
                }
#line 3481 "typecheck.m"
                {
#line 3481 "typecheck.m"
                  MR_Word base;
#line 3481 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3481 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3481 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_47_47));
#line 3481 "typecheck.m"
                }
#line 3481 "typecheck.m"
              }
#line 3476 "typecheck.m"
            else
#line 3484 "typecheck.m"
              {
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeArgs_30;
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType_31;
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__UnivProgConstraints_32;
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__ProgConstraints_33;
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_34;
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_35;
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_36;
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 3484 "typecheck.m"
                MR_Word check_hlds__typecheck__V_50_50;

#line 3483 "typecheck.m"
                {
#line 3483 "typecheck.m"
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__ConsTypeKinds_14, check_hlds__typecheck__ConsTypeParams_13, &check_hlds__typecheck__ConsTypeArgs_30);
                }
#line 3485 "typecheck.m"
                {
#line 3485 "typecheck.m"
                  parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_11, check_hlds__typecheck__ConsTypeArgs_30, &check_hlds__typecheck__ConsType_31);
                }
#line 3486 "typecheck.m"
                check_hlds__typecheck__UnivProgConstraints_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3492 "typecheck.m"
#line 3492 "typecheck.m"
                switch (check_hlds__typecheck__Action_8) {
#line 3492 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 3492 "typecheck.m"
                  case (MR_Integer) 2:
#line 3488 "typecheck.m"
                    {
#line 3489 "typecheck.m"
                      {
#line 3489 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3489 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 0) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_32));
#line 3489 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3489 "typecheck.m"
                      }
#line 3491 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_34 = check_hlds__typecheck__ExistQVars0_15;
#line 3488 "typecheck.m"
                    }
#line 3492 "typecheck.m"
                    break;
#line 3492 "typecheck.m"
                  case (MR_Integer) 1:
#line 3501 "typecheck.m"
                    {
#line 3507 "typecheck.m"
                      {
#line 3507 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3507 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3507 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3507 "typecheck.m"
                      }
#line 3509 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_34 = check_hlds__typecheck__ExistQVars0_15;
#line 3501 "typecheck.m"
                    }
#line 3492 "typecheck.m"
                    break;
#line 3492 "typecheck.m"
                  case (MR_Integer) 0:
#line 3493 "typecheck.m"
                    {
#line 3497 "typecheck.m"
                      {
#line 3497 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3497 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3497 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_33, 1) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_32));
#line 3497 "typecheck.m"
                      }
#line 3499 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3493 "typecheck.m"
                    }
#line 3492 "typecheck.m"
                    break;
#line 3492 "typecheck.m"
                }
#line 3511 "typecheck.m"
                {
#line 3511 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_25, &check_hlds__typecheck__ClassTable_35);
                }
#line 3512 "typecheck.m"
                {
#line 3512 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__ConsTypeVarSet_12, check_hlds__typecheck__GoalId_7, check_hlds__typecheck__ProgConstraints_33, &check_hlds__typecheck__Constraints_36);
                }
#line 3515 "typecheck.m"
                {
#line 3515 "typecheck.m"
                  check_hlds__typecheck__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3515 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3515 "typecheck.m"
                }
#line 3514 "typecheck.m"
                {
#line 3514 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3514 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_12));
#line 3514 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_34));
#line 3514 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_31));
#line 3514 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_19));
#line 3514 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_36));
#line 3514 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 5) = ((MR_Box) (check_hlds__typecheck__V_50_50));
#line 3514 "typecheck.m"
                }
#line 3514 "typecheck.m"
                *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_49_49);
#line 3484 "typecheck.m"
              }
#line 3476 "typecheck.m"
          }
#line 3467 "typecheck.m"
      }
#line 3421 "typecheck.m"
  }
#line 3419 "typecheck.m"
}

#line 3406 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3406 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5)
#line 3406 "typecheck.m"
{
#line 3410 "typecheck.m"
  {
#line 3410 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3410 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3410 "typecheck.m"
      *check_hlds__typecheck__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3410 "typecheck.m"
    else
#line 3411 "typecheck.m"
      {
#line 3411 "typecheck.m"
        MR_Word check_hlds__typecheck__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 3411 "typecheck.m"
        MR_Word check_hlds__typecheck__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 3411 "typecheck.m"
        MR_Word check_hlds__typecheck__Y_14;
#line 3413 "typecheck.m"
        MR_Word * check_hlds__typecheck__AddrYs_16;

#line 3412 "typecheck.m"
        {
#line 3412 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__X_12, &check_hlds__typecheck__Y_14);
        }
#line 3411 "typecheck.m"
        {
#line 3411 "typecheck.m"
          MR_Word base;
#line 3411 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3411 "typecheck.m"
          *check_hlds__typecheck__HeadVar__5_5 = base;
#line 3411 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Y_14));
#line 3411 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 3411 "typecheck.m"
        }
#line 3411 "typecheck.m"
        check_hlds__typecheck__AddrYs_16 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1));
#line 3413 "typecheck.m"
        {
#line 3413 "typecheck.m"
          check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__Xs_13, check_hlds__typecheck__AddrYs_16);
        }
#line 3411 "typecheck.m"
      }
#line 3410 "typecheck.m"
  }
#line 3406 "typecheck.m"
}

#line 3383 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3383 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3383 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3)
#line 3383 "typecheck.m"
{
#line 3386 "typecheck.m"
  {
#line 3386 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3386 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3386 "typecheck.m"
      {
#line 3386 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3386 "typecheck.m"
        *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3386 "typecheck.m"
      }
#line 3386 "typecheck.m"
    else
#line 3387 "typecheck.m"
      {
#line 3387 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 3387 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 3387 "typecheck.m"
        MR_Word check_hlds__typecheck__InfosTail_8;
#line 3387 "typecheck.m"
        MR_Word check_hlds__typecheck__ErrorsTail_9;

#line 3388 "typecheck.m"
        {
#line 3388 "typecheck.m"
          check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__MaybeConsInfos_5, &check_hlds__typecheck__InfosTail_8, &check_hlds__typecheck__ErrorsTail_9);
        }
#line 3393 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeConsInfo_4)) == (MR_mktag((MR_Integer) 1))))
#line 3394 "typecheck.m"
          {
#line 3394 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeConsInfo_4, (MR_Integer) 0)));

#line 3395 "typecheck.m"
            *check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__InfosTail_8;
#line 3396 "typecheck.m"
            {
#line 3396 "typecheck.m"
              MR_Word base;
#line 3396 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3396 "typecheck.m"
              *check_hlds__typecheck__HeadVar__3_3 = base;
#line 3396 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsError_11));
#line 3396 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ErrorsTail_9));
#line 3396 "typecheck.m"
            }
#line 3394 "typecheck.m"
          }
#line 3393 "typecheck.m"
        else
#line 3390 "typecheck.m"
          {
#line 3390 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsInfo_10 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeConsInfo_4), (MR_Integer) 0);

#line 3391 "typecheck.m"
            {
#line 3391 "typecheck.m"
              MR_Word base;
#line 3391 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3391 "typecheck.m"
              *check_hlds__typecheck__HeadVar__2_2 = base;
#line 3391 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_10));
#line 3391 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__InfosTail_8));
#line 3391 "typecheck.m"
            }
#line 3392 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__ErrorsTail_9;
#line 3390 "typecheck.m"
          }
#line 3387 "typecheck.m"
      }
#line 3386 "typecheck.m"
  }
#line 3383 "typecheck.m"
}

#line 3245 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3245 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3245 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3245 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3245 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3245 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3245 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12)
#line 3245 "typecheck.m"
{
#line 3250 "typecheck.m"
  {
#line 3250 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_72_72;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_77_77;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_13;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_14;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__PlainMaybeConsInfos_19;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfos_27;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__DataMaybeConsInfos_28;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__DataConsInfos_29;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinConsInfos_35;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__TupleConsInfos_46;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfos_48;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfos_50;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__OtherConsInfos_51;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;
#line 3257 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ConsDefns_18;
#line 3258 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 3258 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_16_16;
#line 3258 "typecheck.m"
    MR_Word check_hlds__typecheck__V_17_17;
#line 3283 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ExistQConsDefns_24;
#line 3284 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_20;
#line 3284 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorTypeCtor_21;
#line 3284 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigName_22;
#line 3284 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigFunctor_23;
#line 3284 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_78_78;
#line 3297 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3313 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltInTypeName_30;
#line 3328 "typecheck.m"
    MR_Integer check_hlds__typecheck__TupleArity_36;
#line 3359 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfosPrime_47;
#line 3368 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfosPrime_49;

#line 3251 "typecheck.m"
    {
#line 3251 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_13);
    }
#line 3256 "typecheck.m"
    {
#line 3256 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__Ctors_14);
    }
#line 3258 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3258 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3258 "typecheck.m"
      {
#line 3258 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3258 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3258 "typecheck.m"
        check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3259 "typecheck.m"
        {
#line 3259 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__Functor_8, &check_hlds__typecheck__HLDS_ConsDefns_18);
        }
#line 3258 "typecheck.m"
      }
#line 3257 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3261 "typecheck.m"
      {
#line 3261 "typecheck.m"
        {
#line 3261 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 2, check_hlds__typecheck__HLDS_ConsDefns_18, &check_hlds__typecheck__PlainMaybeConsInfos_19);
        }
#line 3261 "typecheck.m"
      }
#line 3257 "typecheck.m"
    else
#line 3264 "typecheck.m"
      check_hlds__typecheck__PlainMaybeConsInfos_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3284 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3284 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3284 "typecheck.m"
      {
#line 3284 "typecheck.m"
        check_hlds__typecheck__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3284 "typecheck.m"
        check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3284 "typecheck.m"
        check_hlds__typecheck__FunctorTypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3284 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_78_78);
#line 3284 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3284 "typecheck.m"
          {
#line 3285 "typecheck.m"
            {
#line 3285 "typecheck.m"
              check_hlds__typecheck__succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(check_hlds__typecheck__Name_20, &check_hlds__typecheck__OrigName_22);
            }
#line 3284 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3284 "typecheck.m"
              {
#line 3286 "typecheck.m"
                {
#line 3286 "typecheck.m"
                  check_hlds__typecheck__OrigFunctor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 3286 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 3286 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 1) = ((MR_Box) (check_hlds__typecheck__OrigName_22));
#line 3286 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 2) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 3286 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 3) = ((MR_Box) (check_hlds__typecheck__FunctorTypeCtor_21));
#line 3286 "typecheck.m"
                }
#line 3287 "typecheck.m"
                {
#line 3287 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__OrigFunctor_23, &check_hlds__typecheck__HLDS_ExistQConsDefns_24);
                }
#line 3284 "typecheck.m"
              }
#line 3284 "typecheck.m"
          }
#line 3284 "typecheck.m"
      }
#line 3283 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3289 "typecheck.m"
      {
#line 3289 "typecheck.m"
        {
#line 3289 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 0, check_hlds__typecheck__HLDS_ExistQConsDefns_24, &check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25);
        }
#line 3289 "typecheck.m"
      }
#line 3283 "typecheck.m"
    else
#line 3292 "typecheck.m"
      check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3298 "typecheck.m"
    {
#line 3298 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_field_access_function_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26);
    }
#line 3297 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3301 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3297 "typecheck.m"
    else
#line 3303 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7737 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_72_72 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 3307 "typecheck.m"
    {
#line 3307 "typecheck.m"
      check_hlds__typecheck__V_54_54 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25, check_hlds__typecheck__FieldAccessMaybeConsInfos_27);
    }
#line 3306 "typecheck.m"
    {
#line 3306 "typecheck.m"
      check_hlds__typecheck__DataMaybeConsInfos_28 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__PlainMaybeConsInfos_19, check_hlds__typecheck__V_54_54);
    }
#line 3308 "typecheck.m"
    {
#line 3308 "typecheck.m"
      check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__DataMaybeConsInfos_28, &check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__DataConsErrors_12);
    }
#line 3314 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == (MR_Integer) 0);
#line 3314 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2774 "typecheck.m"
#line 2774 "typecheck.m"
      switch (MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) {
#line 2774 "typecheck.m"
        default:
#line 2774 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_FALSE;
#line 2774 "typecheck.m"
          break;
#line 2774 "typecheck.m"
        case (MR_Integer) 3:
#line 2774 "typecheck.m"
#line 2774 "typecheck.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) {
#line 2774 "typecheck.m"
            default:
#line 2774 "typecheck.m"
              check_hlds__typecheck__succeeded = MR_FALSE;
#line 2774 "typecheck.m"
              break;
#line 2774 "typecheck.m"
            case (MR_Integer) 2:
#line 2778 "typecheck.m"
              {
#line 2778 "typecheck.m"
                MR_String check_hlds__typecheck__String_83;
#line 2778 "typecheck.m"
                MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2778 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2778 "typecheck.m"
                MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2785 "typecheck.m"
                MR_Char check_hlds__typecheck__V_85_85;

#line 2778 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_87_87 == (MR_Integer) 0);
#line 2778 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2778 "typecheck.m"
                  {
#line 2778 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_86_86)) == (MR_mktag((MR_Integer) 0)));
#line 2778 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2778 "typecheck.m"
                      {
#line 2778 "typecheck.m"
                        check_hlds__typecheck__String_83 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_86_86, (MR_Integer) 0)));
#line 2778 "typecheck.m"
                        check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2785 "typecheck.m"
                        {
#line 2785 "typecheck.m"
                          check_hlds__typecheck__succeeded = mercury__string__char_to_string_2_p_1(&check_hlds__typecheck__V_85_85, check_hlds__typecheck__String_83);
                        }
#line 2778 "typecheck.m"
                      }
#line 2778 "typecheck.m"
                  }
#line 2778 "typecheck.m"
              }
#line 2774 "typecheck.m"
              break;
#line 2774 "typecheck.m"
            case (MR_Integer) 5:
#line 2774 "typecheck.m"
              {
#line 2774 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
#line 2774 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2774 "typecheck.m"
              }
#line 2774 "typecheck.m"
              break;
#line 2774 "typecheck.m"
            case (MR_Integer) 6:
#line 2775 "typecheck.m"
              {
#line 2775 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "float";
#line 2775 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2775 "typecheck.m"
              }
#line 2774 "typecheck.m"
              break;
#line 2774 "typecheck.m"
            case (MR_Integer) 7:
#line 2776 "typecheck.m"
              {
#line 2776 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2776 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2776 "typecheck.m"
              }
#line 2774 "typecheck.m"
              break;
#line 2774 "typecheck.m"
            case (MR_Integer) 8:
#line 2777 "typecheck.m"
              {
#line 2777 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
#line 2777 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2777 "typecheck.m"
              }
#line 2774 "typecheck.m"
              break;
#line 2774 "typecheck.m"
            case (MR_Integer) 9:
#line 2786 "typecheck.m"
              {
#line 2786 "typecheck.m"
                MR_String check_hlds__typecheck__Name_88 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2794 "typecheck.m"
                MR_Integer check_hlds__typecheck__lo_0;
#line 2794 "typecheck.m"
                MR_Integer check_hlds__typecheck__hi_1;
#line 2794 "typecheck.m"
                MR_Integer check_hlds__typecheck__mid_2;
#line 2794 "typecheck.m"
                MR_Integer check_hlds__typecheck__result_3;

#line 2794 "typecheck.m"
                /* binary string simple lookup switch */
#line 2794 "typecheck.m"
                check_hlds__typecheck__lo_0 = (MR_Integer) 0;
#line 2794 "typecheck.m"
                check_hlds__typecheck__hi_1 = (MR_Integer) 4;
#line 2794 "typecheck.m"
                do
#line 2794 "typecheck.m"
                  {
#line 2794 "typecheck.m"
                    check_hlds__typecheck__mid_2 = (((check_hlds__typecheck__lo_0 + check_hlds__typecheck__hi_1)) / (MR_Integer) 2);
#line 2794 "typecheck.m"
                    check_hlds__typecheck__result_3 = MR_strcmp(check_hlds__typecheck__Name_88, ((&check_hlds__typecheck_vector_common_10[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_10_0__vct_10_f_0);
#line 2794 "typecheck.m"
                    if ((check_hlds__typecheck__result_3 == (MR_Integer) 0))
#line 2794 "typecheck.m"
                      {
#line 2794 "typecheck.m"
                        check_hlds__typecheck__BuiltInTypeName_30 = ((&check_hlds__typecheck_vector_common_10[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_10_0__vct_10_f_1;
#line 2794 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2794 "typecheck.m"
                        /* jump out of search loop */
#line 2794 "typecheck.m"
                        goto label_0;
#line 2794 "typecheck.m"
                      }
#line 2794 "typecheck.m"
                    else
#line 2794 "typecheck.m"
                    if ((check_hlds__typecheck__result_3 < (MR_Integer) 0))
#line 2794 "typecheck.m"
                      check_hlds__typecheck__hi_1 = (check_hlds__typecheck__mid_2 - (MR_Integer) 1);
#line 2794 "typecheck.m"
                    else
#line 2794 "typecheck.m"
                      check_hlds__typecheck__lo_0 = (check_hlds__typecheck__mid_2 + (MR_Integer) 1);
#line 2794 "typecheck.m"
                  }
#line 2794 "typecheck.m"
                while ((check_hlds__typecheck__lo_0 <= check_hlds__typecheck__hi_1));
#line 2794 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_FALSE;
#line 2794 "typecheck.m"
              label_0:;
#line 2786 "typecheck.m"
              }
#line 2774 "typecheck.m"
              break;
#line 2774 "typecheck.m"
          }
#line 2774 "typecheck.m"
          break;
#line 2774 "typecheck.m"
      }
#line 3313 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3317 "typecheck.m"
      {
#line 3317 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtor_31;
#line 3317 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsType_32;
#line 3317 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsTypeVarSet_33;
#line 3317 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsInfo_34;
#line 3317 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 3317 "typecheck.m"
        MR_Word check_hlds__typecheck__V_60_60;

#line 3317 "typecheck.m"
        {
#line 3317 "typecheck.m"
          check_hlds__typecheck__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3317 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_55_55, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3317 "typecheck.m"
        }
#line 3317 "typecheck.m"
        {
#line 3317 "typecheck.m"
          check_hlds__typecheck__TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3317 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 0) = ((MR_Box) (check_hlds__typecheck__V_55_55));
#line 3317 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 3317 "typecheck.m"
        }
#line 3318 "typecheck.m"
        {
#line 3318 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsType_32);
        }
#line 3319 "typecheck.m"
        {
#line 3319 "typecheck.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_33);
        }
#line 3321 "typecheck.m"
        {
#line 3321 "typecheck.m"
          check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3321 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3321 "typecheck.m"
        }
#line 3320 "typecheck.m"
        {
#line 3320 "typecheck.m"
          check_hlds__typecheck__ConsInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3320 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_33));
#line 3320 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3320 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_32));
#line 3320 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3320 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3320 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 5) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 3320 "typecheck.m"
        }
#line 3322 "typecheck.m"
        {
#line 3322 "typecheck.m"
          check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3322 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_34));
#line 3322 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3322 "typecheck.m"
        }
#line 3317 "typecheck.m"
      }
#line 3313 "typecheck.m"
    else
#line 3324 "typecheck.m"
      check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3330 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3329 "typecheck.m"
      {
#line 3329 "typecheck.m"
        MR_Word check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3329 "typecheck.m"
        MR_String check_hlds__typecheck__V_63_63;
#line 3329 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;

#line 3329 "typecheck.m"
        check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3329 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3329 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 3329 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3329 "typecheck.m"
          {
#line 3329 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_62_62, (MR_Integer) 0)));
#line 3329 "typecheck.m"
            check_hlds__typecheck__succeeded = (strcmp(check_hlds__typecheck__V_63_63, (MR_String) "{}") == 0);
#line 3329 "typecheck.m"
          }
#line 3329 "typecheck.m"
      }
#line 3330 "typecheck.m"
    else
#line 3330 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 3330 "typecheck.m"
      {
#line 3330 "typecheck.m"
        check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3330 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 3330 "typecheck.m"
      }
#line 3330 "typecheck.m"
    else
#line 3330 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_FALSE;
#line 3328 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3337 "typecheck.m"
      {
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet0_38;
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTVars_39;
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet_40;
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTypes_41;
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleTypeCtor_42;
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsType_43;
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsInfo_45;
#line 3337 "typecheck.m"
        MR_Word check_hlds__typecheck__V_64_64;

#line 3337 "typecheck.m"
        {
#line 3337 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, &check_hlds__typecheck__TupleConsTypeVarSet0_38);
        }
#line 3338 "typecheck.m"
        {
#line 3338 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, check_hlds__typecheck__TupleArity_36, &check_hlds__typecheck__TupleArgTVars_39, check_hlds__typecheck__TupleConsTypeVarSet0_38, &check_hlds__typecheck__TupleConsTypeVarSet_40);
        }
#line 3340 "typecheck.m"
        {
#line 3340 "typecheck.m"
          check_hlds__typecheck__V_64_64 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 3340 "typecheck.m"
        {
#line 3340 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_64_64, check_hlds__typecheck__TupleArgTVars_39, &check_hlds__typecheck__TupleArgTypes_41);
        }
#line 3343 "typecheck.m"
        {
#line 3343 "typecheck.m"
          check_hlds__typecheck__TupleTypeCtor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3343 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[1]));
#line 3343 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 1) = ((MR_Box) (check_hlds__typecheck__TupleArity_36));
#line 3343 "typecheck.m"
        }
#line 3344 "typecheck.m"
        {
#line 3344 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TupleTypeCtor_42, check_hlds__typecheck__TupleArgTypes_41, &check_hlds__typecheck__TupleConsType_43);
        }
#line 3348 "typecheck.m"
        {
#line 3348 "typecheck.m"
          check_hlds__typecheck__TupleConsInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3348 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsTypeVarSet_40));
#line 3348 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3348 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 2) = ((MR_Box) (check_hlds__typecheck__TupleConsType_43));
#line 3348 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 3) = ((MR_Box) (check_hlds__typecheck__TupleArgTypes_41));
#line 3348 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3348 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[2])));
#line 3348 "typecheck.m"
        }
#line 3351 "typecheck.m"
        {
#line 3351 "typecheck.m"
          check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3351 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsInfo_45));
#line 3351 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3351 "typecheck.m"
        }
#line 3337 "typecheck.m"
      }
#line 3328 "typecheck.m"
    else
#line 3353 "typecheck.m"
      check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3360 "typecheck.m"
    {
#line 3360 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_pred_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, &check_hlds__typecheck__PredConsInfosPrime_47);
    }
#line 3359 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3362 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = check_hlds__typecheck__PredConsInfosPrime_47;
#line 3359 "typecheck.m"
    else
#line 3364 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3369 "typecheck.m"
    {
#line 3369 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__ApplyConsInfosPrime_49);
    }
#line 3368 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3371 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = check_hlds__typecheck__ApplyConsInfosPrime_49;
#line 3368 "typecheck.m"
    else
#line 3373 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8191 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_77_77 = (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
#line 3377 "typecheck.m"
    {
#line 3377 "typecheck.m"
      check_hlds__typecheck__V_71_71 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__PredConsInfos_48, check_hlds__typecheck__ApplyConsInfos_50);
    }
#line 3377 "typecheck.m"
    {
#line 3377 "typecheck.m"
      check_hlds__typecheck__V_70_70 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__TupleConsInfos_46, check_hlds__typecheck__V_71_71);
    }
#line 3376 "typecheck.m"
    {
#line 3376 "typecheck.m"
      check_hlds__typecheck__OtherConsInfos_51 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__BuiltinConsInfos_35, check_hlds__typecheck__V_70_70);
    }
#line 3378 "typecheck.m"
    {
#line 3378 "typecheck.m"
      *check_hlds__typecheck__ConsInfos_11 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__OtherConsInfos_51);
    }
#line 3250 "typecheck.m"
  }
#line 3245 "typecheck.m"
}

#line 2967 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2967 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2967 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2967 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2967 "typecheck.m"
{
#line 2967 "typecheck.m"
  {
#line 2967 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2967 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2967 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2967 "typecheck.m"
    {
#line 2967 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2967 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2967 "typecheck.m"
      {
#line 2967 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2967 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2967 "typecheck.m"
      }
#line 2967 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2967 "typecheck.m"
  }
#line 2967 "typecheck.m"
}

#line 3216 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3216 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3216 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3216 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3216 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3216 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3216 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12)
#line 3216 "typecheck.m"
{
#line 3220 "typecheck.m"
  {
#line 3220 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3220 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_13;
#line 3228 "typecheck.m"
    MR_Word check_hlds__typecheck__PredStatus_14;
#line 3229 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;

#line 3221 "typecheck.m"
    {
#line 3221 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__IsFieldAccessFunc_13);
    }
#line 3228 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__IsFieldAccessFunc_13)) == (MR_mktag((MR_Integer) 1)));
#line 3228 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3228 "typecheck.m"
      {
#line 3228 "typecheck.m"
        check_hlds__typecheck__PredStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__IsFieldAccessFunc_13, (MR_Integer) 0)));
#line 3229 "typecheck.m"
        check_hlds__typecheck__V_16_16 = (MR_Word) check_hlds__typecheck__PredStatus_14;
#line 3229 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3229 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3228 "typecheck.m"
      }
#line 3222 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3231 "typecheck.m"
      {
#line 3231 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldAccessConsInfos_15;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_19_30;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_20_31;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_23_34;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_24_35;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__Name_22;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__ModuleInfo_24;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__AccessType_25;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldName_26;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__CtorFieldTable_27;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldDefns_28;
#line 2955 "typecheck.m"
        MR_Word check_hlds__typecheck__V_29_29;
#line 2955 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_36_36;
#line 2955 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_37_37;
#line 2958 "typecheck.m"
        MR_Word check_hlds__typecheck__V_23_23;
#line 2964 "typecheck.m"
        MR_Box check_hlds__typecheck__conv0_FieldDefns_28;

#line 2958 "typecheck.m"
        check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2958 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2958 "typecheck.m"
          {
#line 2958 "typecheck.m"
            check_hlds__typecheck__Name_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2958 "typecheck.m"
            check_hlds__typecheck__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2958 "typecheck.m"
            check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2958 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_36_36);
#line 2955 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
              {
#line 2959 "typecheck.m"
                {
#line 2959 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__ModuleInfo_24);
                }
#line 2960 "typecheck.m"
                {
#line 2960 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_24, check_hlds__typecheck__Name_22, &check_hlds__typecheck__V_37_37, &check_hlds__typecheck__AccessType_25, &check_hlds__typecheck__FieldName_26);
                }
#line 2955 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
                  {
#line 2960 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_37_37);
#line 2955 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
                      {
#line 2963 "typecheck.m"
                        {
#line 2963 "typecheck.m"
                          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_24, &check_hlds__typecheck__CtorFieldTable_27);
                        }
#line 8389 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_19_30 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 8391 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeInfo_20_31 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2964 "typecheck.m"
                        {
#line 2964 "typecheck.m"
                          check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_19_30, check_hlds__typecheck__TypeInfo_20_31, check_hlds__typecheck__CtorFieldTable_27, ((MR_Box) (check_hlds__typecheck__FieldName_26)), &check_hlds__typecheck__conv0_FieldDefns_28);
                        }
#line 2964 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2964 "typecheck.m"
                          {
#line 2964 "typecheck.m"
                            check_hlds__typecheck__FieldDefns_28 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_28);
#line 2964 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2964 "typecheck.m"
                          }
#line 2955 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
                          {
#line 8412 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_23_34 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 8414 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_24_35 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2967 "typecheck.m"
                            {
#line 2967 "typecheck.m"
                              check_hlds__typecheck__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0]));
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 3) = ((MR_Box) (check_hlds__typecheck__Info_7));
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_10));
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 5) = ((MR_Box) (check_hlds__typecheck__Name_22));
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_25));
#line 2967 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_29_29, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_26));
#line 2967 "typecheck.m"
                            }
#line 2966 "typecheck.m"
                            {
#line 2966 "typecheck.m"
                              mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_23_34, check_hlds__typecheck__TypeCtorInfo_24_35, check_hlds__typecheck__V_29_29, check_hlds__typecheck__FieldDefns_28, &check_hlds__typecheck__FieldAccessConsInfos_15);
                            }
#line 2966 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2955 "typecheck.m"
                          }
#line 2955 "typecheck.m"
                      }
#line 2955 "typecheck.m"
                  }
#line 2955 "typecheck.m"
              }
#line 2958 "typecheck.m"
          }
#line 3231 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3235 "typecheck.m"
          {
#line 3235 "typecheck.m"
            check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__FieldAccessConsInfos_15, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
          }
#line 3231 "typecheck.m"
        else
#line 3237 "typecheck.m"
          {
#line 3237 "typecheck.m"
            *check_hlds__typecheck__ConsInfos_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3238 "typecheck.m"
            *check_hlds__typecheck__ConsErrors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3237 "typecheck.m"
          }
#line 3231 "typecheck.m"
      }
#line 3222 "typecheck.m"
    else
#line 3241 "typecheck.m"
      {
#line 3241 "typecheck.m"
        check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
      }
#line 3220 "typecheck.m"
  }
#line 3216 "typecheck.m"
}

#line 3201 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 3201 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3201 "typecheck.m"
{
#line 3201 "typecheck.m"
  {
#line 3201 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 3201 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0, 1);
#line 3201 "typecheck.m"
  }
#line 3201 "typecheck.m"
}

#line 3201 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 3201 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3201 "typecheck.m"
{
#line 3201 "typecheck.m"
  {
#line 3201 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 8519 "check_hlds.typecheck.c"
    (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3202 "typecheck.m"
    {
#line 3202 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12)));
    }
#line 3202 "typecheck.m"
    if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 3202 "typecheck.m"
      {
#line 3202 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_1(check_hlds__typecheck__env_ptr);
      }
#line 3201 "typecheck.m"
  }
#line 3201 "typecheck.m"
}

#line 3201 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 3201 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3201 "typecheck.m"
{
#line 3201 "typecheck.m"
  {
#line 3201 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 3201 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0) == 0)
#line 3201 "typecheck.m"
      {
#line 3201 "typecheck.m"
        {
#line 3201 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck__rename_constraint_3_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 3201 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
#line 3201 "typecheck.m"
      }
#line 3201 "typecheck.m"
    else
#line 3201 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 3201 "typecheck.m"
  }
#line 3201 "typecheck.m"
}

#line 3195 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 3195 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6)
#line 3195 "typecheck.m"
{
#line 3195 "typecheck.m"
  {
#line 3195 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s check_hlds__typecheck__env;

#line 3195 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4 = check_hlds__typecheck__TVarRenaming_4;
#line 3198 "typecheck.m"
    {
#line 3198 "typecheck.m"
      MR_Word check_hlds__typecheck__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 0)));
#line 3198 "typecheck.m"
      MR_Word check_hlds__typecheck__ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 1)));
#line 3198 "typecheck.m"
      MR_Word check_hlds__typecheck__ArgTypes_11;

#line 3199 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 2)));
#line 3201 "typecheck.m"
      {
#line 3201 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_3(&check_hlds__typecheck__env);
      }
#line 3198 "typecheck.m"
      if ((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 3198 "typecheck.m"
        {
#line 3204 "typecheck.m"
          {
#line 3204 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &check_hlds__typecheck__ArgTypes_11);
          }
#line 3205 "typecheck.m"
          {
#line 3205 "typecheck.m"
            MR_Word base;
#line 3205 "typecheck.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3205 "typecheck.m"
            *check_hlds__typecheck__Constraint_6 = base;
#line 3205 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Ids_7));
#line 3205 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ClassName_8));
#line 3205 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__ArgTypes_11));
#line 3205 "typecheck.m"
          }
#line 3205 "typecheck.m"
          (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 3198 "typecheck.m"
        }
#line 3198 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 3198 "typecheck.m"
    }
#line 3195 "typecheck.m"
  }
#line 3195 "typecheck.m"
}

#line 3186 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
#line 3186 "typecheck.m"
{
#line 3188 "typecheck.m"
  {
#line 3188 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3188 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_11_11;
#line 3188 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesToCheck_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 2)));
#line 3188 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck0_8;
#line 3188 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck_9;
#line 3188 "typecheck.m"
    MR_Word check_hlds__typecheck__RelevantTVars_10;
#line 3189 "typecheck.m"
    MR_Word check_hlds__typecheck___Ids_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));
#line 3189 "typecheck.m"
    MR_Word check_hlds__typecheck___ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));

#line 3190 "typecheck.m"
    {
#line 3190 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__TypesToCheck_7, &check_hlds__typecheck__TVarsToCheck0_8);
    }
#line 8677 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3191 "typecheck.m"
    {
#line 3191 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck0_8, &check_hlds__typecheck__TVarsToCheck_9);
    }
#line 3192 "typecheck.m"
    {
#line 3192 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck_9, check_hlds__typecheck__CallTVars_3, &check_hlds__typecheck__RelevantTVars_10);
    }
#line 3193 "typecheck.m"
    {
#line 3193 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__RelevantTVars_10);
    }
#line 3188 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3188 "typecheck.m"
  }
#line 3186 "typecheck.m"
}

#line 3179 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 3179 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3179 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 3179 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 3179 "typecheck.m"
{
#line 3179 "typecheck.m"
  {
#line 3179 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3179 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 3179 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_Constraint_6;

#line 3179 "typecheck.m"
    {
#line 3179 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Constraint_6);
    }
#line 3179 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3179 "typecheck.m"
      {
#line 3179 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Constraint_6));
#line 3179 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 3179 "typecheck.m"
      }
#line 3179 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3179 "typecheck.m"
  }
#line 3179 "typecheck.m"
}

#line 3178 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 3178 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3178 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 3178 "typecheck.m"
{
#line 3178 "typecheck.m"
  {
#line 3178 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3178 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 3178 "typecheck.m"
    {
#line 3178 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 3178 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3178 "typecheck.m"
  }
#line 3178 "typecheck.m"
}

#line 3168 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 3168 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 3168 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21)
#line 3168 "typecheck.m"
{
#line 3173 "typecheck.m"
  {
#line 3173 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 0)));
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__Assumed_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 1)));
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 2)));
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 3)));
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven0_16;
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven_17;
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant_18;
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven_19;
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 3173 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;

#line 3178 "typecheck.m"
    {
#line 3178 "typecheck.m"
      check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3178 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[5]));
#line 3178 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_1));
#line 3178 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3178 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 3) = ((MR_Box) (check_hlds__typecheck__CallTVars_9));
#line 3178 "typecheck.m"
    }
#line 8829 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 3178 "typecheck.m"
    {
#line 3178 "typecheck.m"
      mercury__list__filter_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_22_22, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__NewUnproven0_16);
    }
#line 3179 "typecheck.m"
    {
#line 3179 "typecheck.m"
      check_hlds__typecheck__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3179 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_8[1]));
#line 3179 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_2));
#line 3179 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3179 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 3) = ((MR_Box) (check_hlds__typecheck__TVarRenaming_10));
#line 3179 "typecheck.m"
    }
#line 3179 "typecheck.m"
    {
#line 3179 "typecheck.m"
      mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_23_23, check_hlds__typecheck__NewUnproven0_16, &check_hlds__typecheck__NewUnproven_17);
    }
#line 3181 "typecheck.m"
    {
#line 3181 "typecheck.m"
      hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typecheck__ClassTable_7, check_hlds__typecheck__TVarSet_8, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Redundant0_14, &check_hlds__typecheck__Redundant_18);
    }
#line 3183 "typecheck.m"
    {
#line 3183 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__Unproven_19);
    }
#line 3184 "typecheck.m"
    {
#line 3184 "typecheck.m"
      MR_Word base;
#line 3184 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3184 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Constraints_21 = base;
#line 3184 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Unproven_19));
#line 3184 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Assumed_13));
#line 3184 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__Redundant_18));
#line 3184 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__Ancestors_15));
#line 3184 "typecheck.m"
    }
#line 3173 "typecheck.m"
  }
#line 3168 "typecheck.m"
}

#line 3035 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 3035 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 3035 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14)
#line 3035 "typecheck.m"
{
#line 3040 "typecheck.m"
  {
#line 3040 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_100_100;
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 0)));
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 1)));
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 2)));
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 3)));
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 4)));
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__Source0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 5)));
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__SourceType_22;
#line 3040 "typecheck.m"
    MR_Integer check_hlds__typecheck__FieldNumber_32;
#line 3040 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldType_33;
#line 3055 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 3055 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 3055 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 3055 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 3056 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldType_33;

#line 3046 "typecheck.m"
#line 3046 "typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__typecheck__Source0_20)) {
#line 3046 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3046 "typecheck.m"
      case (MR_Integer) 0:
#line 3044 "typecheck.m"
        check_hlds__typecheck__SourceType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Source0_20, (MR_Integer) 0)));
#line 3046 "typecheck.m"
        break;
#line 3046 "typecheck.m"
      case (MR_Integer) 1:
#line 3046 "typecheck.m"
      case (MR_Integer) 2:
#line 3052 "typecheck.m"
        {
#line 3053 "typecheck.m"
          {
#line 3053 "typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
#line 3053 "typecheck.m"
            return;
          }
#line 3052 "typecheck.m"
        }
#line 3046 "typecheck.m"
        break;
#line 3046 "typecheck.m"
      case (MR_Integer) 3:
#line 3052 "typecheck.m"
        {
#line 3053 "typecheck.m"
          {
#line 3053 "typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
#line 3053 "typecheck.m"
            return;
          }
#line 3052 "typecheck.m"
        }
#line 3046 "typecheck.m"
        break;
#line 3046 "typecheck.m"
    }
#line 3055 "typecheck.m"
    check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 0)));
#line 3055 "typecheck.m"
    check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 1)));
#line 3055 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 2)));
#line 3055 "typecheck.m"
    check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 3)));
#line 3055 "typecheck.m"
    check_hlds__typecheck__FieldNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 4)));
#line 8997 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 3056 "typecheck.m"
    {
#line 3056 "typecheck.m"
      mercury__list__det_index1_3_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, &check_hlds__typecheck__conv0_FieldType_33);
    }
#line 3056 "typecheck.m"
    check_hlds__typecheck__FieldType_33 = ((MR_Word) check_hlds__typecheck__conv0_FieldType_33);
#line 3066 "typecheck.m"
#line 3066 "typecheck.m"
    switch (check_hlds__typecheck__AccessType_9) {
#line 3066 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3066 "typecheck.m"
      case (MR_Integer) 0:
#line 3058 "typecheck.m"
        {
#line 3058 "typecheck.m"
          MR_Word check_hlds__typecheck__Source_34;
#line 3058 "typecheck.m"
          MR_Word check_hlds__typecheck__ArgTypes_36;
#line 3058 "typecheck.m"
          MR_Word check_hlds__typecheck__V_74_74;

#line 3059 "typecheck.m"
          {
#line 3059 "typecheck.m"
            check_hlds__typecheck__Source_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3059 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__Source_34, 0) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 3059 "typecheck.m"
          }
#line 3061 "typecheck.m"
          {
#line 3061 "typecheck.m"
            check_hlds__typecheck__ArgTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3061 "typecheck.m"
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3061 "typecheck.m"
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3061 "typecheck.m"
          }
#line 3064 "typecheck.m"
          {
#line 3064 "typecheck.m"
            check_hlds__typecheck__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3064 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3064 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3064 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 2) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3064 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_36));
#line 3064 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 3064 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 5) = ((MR_Box) (check_hlds__typecheck__Source_34));
#line 3064 "typecheck.m"
          }
#line 3064 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_74_74);
#line 3058 "typecheck.m"
        }
#line 3066 "typecheck.m"
        break;
#line 3066 "typecheck.m"
      case (MR_Integer) 1:
#line 3067 "typecheck.m"
        {
#line 3067 "typecheck.m"
          MR_Word check_hlds__typecheck__TVarsInField_39;
#line 3067 "typecheck.m"
          MR_Word check_hlds__typecheck__Source_95;

#line 3068 "typecheck.m"
          {
#line 3068 "typecheck.m"
            check_hlds__typecheck__Source_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3068 "typecheck.m"
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 3068 "typecheck.m"
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 1) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 3068 "typecheck.m"
          }
#line 3082 "typecheck.m"
          {
#line 3082 "typecheck.m"
            parse_tree__prog_type__type_vars_2_p_0(check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__TVarsInField_39);
          }
#line 3095 "typecheck.m"
          if ((check_hlds__typecheck__TVarsInField_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3084 "typecheck.m"
            {
#line 3084 "typecheck.m"
              MR_Word check_hlds__typecheck__V_70_70;
#line 3084 "typecheck.m"
              MR_Word check_hlds__typecheck__V_72_72;
#line 3084 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgTypes_76;

#line 3087 "typecheck.m"
              {
#line 3087 "typecheck.m"
                check_hlds__typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3087 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3087 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3087 "typecheck.m"
              }
#line 3087 "typecheck.m"
              {
#line 3087 "typecheck.m"
                check_hlds__typecheck__ArgTypes_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3087 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3087 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 1) = ((MR_Box) (check_hlds__typecheck__V_70_70));
#line 3087 "typecheck.m"
              }
#line 3093 "typecheck.m"
              {
#line 3093 "typecheck.m"
                check_hlds__typecheck__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3093 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3093 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3093 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 2) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3093 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_76));
#line 3093 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 3093 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 3093 "typecheck.m"
              }
#line 3093 "typecheck.m"
              *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_72_72);
#line 3084 "typecheck.m"
            }
#line 3095 "typecheck.m"
          else
#line 3096 "typecheck.m"
            {
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeInfo_101_101;
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgTypesWithoutField_42;
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__TVarsInOtherArgs_43;
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers_44;
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__V_58_58;
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__V_59_59;
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__V_60_60;
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__V_61_61;
#line 3096 "typecheck.m"
              MR_Word check_hlds__typecheck__V_62_62;

#line 3111 "typecheck.m"
              {
#line 3111 "typecheck.m"
                check_hlds__typecheck__V_58_58 = parse_tree__builtin_lib_types__int_type_0_f_0();
              }
#line 3111 "typecheck.m"
              {
#line 3111 "typecheck.m"
                mercury__list__det_replace_nth_4_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, ((MR_Box) (check_hlds__typecheck__V_58_58)), &check_hlds__typecheck__ArgTypesWithoutField_42);
              }
#line 3113 "typecheck.m"
              {
#line 3113 "typecheck.m"
                parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypesWithoutField_42, &check_hlds__typecheck__TVarsInOtherArgs_43);
              }
#line 9179 "check_hlds.typecheck.c"
              check_hlds__typecheck__TypeInfo_101_101 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3115 "typecheck.m"
              {
#line 3115 "typecheck.m"
                check_hlds__typecheck__V_59_59 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39);
              }
#line 3117 "typecheck.m"
              {
#line 3117 "typecheck.m"
                check_hlds__typecheck__V_61_61 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInOtherArgs_43);
              }
#line 3118 "typecheck.m"
              {
#line 3118 "typecheck.m"
                check_hlds__typecheck__V_62_62 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__OrigExistTVars_13);
              }
#line 3116 "typecheck.m"
              {
#line 3116 "typecheck.m"
                check_hlds__typecheck__V_60_60 = mercury__set__intersect_2_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_61_61, check_hlds__typecheck__V_62_62);
              }
#line 3114 "typecheck.m"
              {
#line 3114 "typecheck.m"
                mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_59_59, check_hlds__typecheck__V_60_60, &check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
              }
#line 3121 "typecheck.m"
              {
#line 3121 "typecheck.m"
                check_hlds__typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
              }
#line 3121 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 3126 "typecheck.m"
                {
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__TVarsOnlyInField0_45;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__TVarsOnlyInField_46;
#line 3126 "typecheck.m"
                  MR_Integer check_hlds__typecheck__NumNewTVars_47;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__NewTVars_48;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__TVarRenaming_49;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__RenamedFieldType_50;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__CallTVars0_52;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__CallTVars_53;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_63_63;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_64_64;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_66_66;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_68_68;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__RetType_79;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__ArgTypes_80;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__TVarSet_81;
#line 3126 "typecheck.m"
                  MR_Word check_hlds__typecheck__Constraints_82;

#line 3125 "typecheck.m"
                  {
#line 3125 "typecheck.m"
                    mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39, check_hlds__typecheck__TVarsInOtherArgs_43, &check_hlds__typecheck__TVarsOnlyInField0_45);
                  }
#line 3127 "typecheck.m"
                  {
#line 3127 "typecheck.m"
                    mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField0_45, &check_hlds__typecheck__TVarsOnlyInField_46);
                  }
#line 3128 "typecheck.m"
                  {
#line 3128 "typecheck.m"
                    mercury__list__length_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, &check_hlds__typecheck__NumNewTVars_47);
                  }
#line 3129 "typecheck.m"
                  {
#line 3129 "typecheck.m"
                    mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__NumNewTVars_47, &check_hlds__typecheck__NewTVars_48, check_hlds__typecheck__TVarSet0_15, &check_hlds__typecheck__TVarSet_81);
                  }
#line 3130 "typecheck.m"
                  {
#line 3130 "typecheck.m"
                    mercury__map__from_corresponding_lists_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, check_hlds__typecheck__NewTVars_48, &check_hlds__typecheck__TVarRenaming_49);
                  }
#line 3132 "typecheck.m"
                  {
#line 3132 "typecheck.m"
                    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__RenamedFieldType_50);
                  }
#line 3134 "typecheck.m"
                  {
#line 3134 "typecheck.m"
                    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FunctorType_17, &check_hlds__typecheck__RetType_79);
                  }
#line 3141 "typecheck.m"
                  {
#line 3141 "typecheck.m"
                    check_hlds__typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3141 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3141 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3141 "typecheck.m"
                  }
#line 3141 "typecheck.m"
                  {
#line 3141 "typecheck.m"
                    check_hlds__typecheck__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3141 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3141 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck__V_64_64));
#line 3141 "typecheck.m"
                  }
#line 3141 "typecheck.m"
                  {
#line 3141 "typecheck.m"
                    parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__V_63_63, &check_hlds__typecheck__CallTVars0_52);
                  }
#line 3142 "typecheck.m"
                  {
#line 3142 "typecheck.m"
                    mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__CallTVars0_52, &check_hlds__typecheck__CallTVars_53);
                  }
#line 3143 "typecheck.m"
                  {
#line 3143 "typecheck.m"
                    check_hlds__typecheck__project_and_rename_constraints_6_p_0(check_hlds__typecheck__ClassTable_8, check_hlds__typecheck__TVarSet_81, check_hlds__typecheck__CallTVars_53, check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__Constraints0_19, &check_hlds__typecheck__Constraints_82);
                  }
#line 3147 "typecheck.m"
                  {
#line 3147 "typecheck.m"
                    check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3147 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__RenamedFieldType_50));
#line 3147 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3147 "typecheck.m"
                  }
#line 3147 "typecheck.m"
                  {
#line 3147 "typecheck.m"
                    check_hlds__typecheck__ArgTypes_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3147 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3147 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 1) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 3147 "typecheck.m"
                  }
#line 3148 "typecheck.m"
                  {
#line 3148 "typecheck.m"
                    check_hlds__typecheck__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3148 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet_81));
#line 3148 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3148 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 2) = ((MR_Box) (check_hlds__typecheck__RetType_79));
#line 3148 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_80));
#line 3148 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_82));
#line 3148 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 3148 "typecheck.m"
                  }
#line 3148 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_68_68);
#line 3126 "typecheck.m"
                }
#line 3121 "typecheck.m"
              else
#line 3156 "typecheck.m"
                {
#line 3156 "typecheck.m"
                  MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54;
#line 3156 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_69_69;

#line 3155 "typecheck.m"
                  {
#line 3155 "typecheck.m"
                    mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44, &check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54);
                  }
#line 3157 "typecheck.m"
                  {
#line 3157 "typecheck.m"
                    check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 3157 "typecheck.m"
                    MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__typecheck__FieldName_10));
#line 3157 "typecheck.m"
                    MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__FieldDefn_11));
#line 3157 "typecheck.m"
                    MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 2) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3157 "typecheck.m"
                    MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 3) = ((MR_Box) (check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54));
#line 3157 "typecheck.m"
                  }
#line 3157 "typecheck.m"
                  {
#line 3157 "typecheck.m"
                    MR_Word base;
#line 3157 "typecheck.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3157 "typecheck.m"
                    *check_hlds__typecheck__ConsTypeInfo_14 = base;
#line 3157 "typecheck.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 3157 "typecheck.m"
                  }
#line 3156 "typecheck.m"
                }
#line 3096 "typecheck.m"
            }
#line 3067 "typecheck.m"
        }
#line 3066 "typecheck.m"
        break;
#line 3066 "typecheck.m"
    }
#line 3040 "typecheck.m"
  }
#line 3035 "typecheck.m"
}

#line 2971 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2971 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2971 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2971 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16)
#line 2971 "typecheck.m"
{
#line 2977 "typecheck.m"
  {
#line 2977 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 2)));
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 3)));
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeModule_36;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_39;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTable_40;
#line 2977 "typecheck.m"
    MR_String check_hlds__typecheck__UnqualFuncName_41;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_42;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_45;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsDefn_46;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsAction_47;
#line 2977 "typecheck.m"
    MR_Word check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_33, (MR_Integer) 0)));
#line 2999 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 0)));
#line 2999 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 1)));
#line 2999 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 4)));
#line 3000 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_33, (MR_Integer) 1)));
#line 3000 "typecheck.m"
    MR_String check_hlds__typecheck__V_37_37;

#line 3000 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 3000 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3000 "typecheck.m"
      {
#line 3000 "typecheck.m"
        check_hlds__typecheck__TypeModule_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, (MR_Integer) 0)));
#line 3000 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, (MR_Integer) 1)));
#line 3007 "typecheck.m"
        {
#line 3007 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__ModuleInfo_39);
        }
#line 3008 "typecheck.m"
        {
#line 3008 "typecheck.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_39, &check_hlds__typecheck__PredTable_40);
        }
#line 3009 "typecheck.m"
        {
#line 3009 "typecheck.m"
          check_hlds__typecheck__UnqualFuncName_41 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__typecheck__FuncName_11);
        }
#line 3010 "typecheck.m"
        {
#line 3010 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__IsFieldAccessFunc_42);
        }
#line 3016 "typecheck.m"
        if ((check_hlds__typecheck__IsFieldAccessFunc_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3012 "typecheck.m"
          {
#line 3012 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_43;

#line 3013 "typecheck.m"
            {
#line 3013 "typecheck.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(check_hlds__typecheck__PredTable_40, (MR_Integer) 0, check_hlds__typecheck__TypeModule_36, check_hlds__typecheck__UnqualFuncName_41, check_hlds__typecheck__Arity_12, &check_hlds__typecheck__PredIds_43);
            }
#line 3015 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredIds_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3012 "typecheck.m"
          }
#line 3016 "typecheck.m"
        else
#line 3017 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2977 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2977 "typecheck.m"
          {
#line 3019 "typecheck.m"
            {
#line 3019 "typecheck.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck__ModuleInfo_39, &check_hlds__typecheck__Ctors_45);
            }
#line 3020 "typecheck.m"
            {
#line 3020 "typecheck.m"
              hlds__hlds_data__lookup_cons_table_of_type_ctor_4_p_0(check_hlds__typecheck__Ctors_45, check_hlds__typecheck__TypeCtor_33, check_hlds__typecheck__ConsId_34, &check_hlds__typecheck__ConsDefn_46);
            }
#line 3024 "typecheck.m"
#line 3024 "typecheck.m"
            switch (check_hlds__typecheck__AccessType_13) {
#line 3024 "typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 3024 "typecheck.m"
              case (MR_Integer) 0:
#line 3023 "typecheck.m"
                check_hlds__typecheck__ConsAction_47 = (MR_Integer) 2;
#line 3024 "typecheck.m"
                break;
#line 3024 "typecheck.m"
              case (MR_Integer) 1:
#line 3026 "typecheck.m"
                check_hlds__typecheck__ConsAction_47 = (MR_Integer) 1;
#line 3024 "typecheck.m"
                break;
#line 3024 "typecheck.m"
            }
#line 3029 "typecheck.m"
            {
#line 3029 "typecheck.m"
              check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__Info_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsAction_47, check_hlds__typecheck__ConsDefn_46, &check_hlds__typecheck__MaybeFunctorConsTypeInfo_18);
            }
#line 2988 "typecheck.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
#line 2990 "typecheck.m"
              *check_hlds__typecheck__ConsTypeInfo_16 = check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2988 "typecheck.m"
            else
#line 2982 "typecheck.m"
              {
#line 2982 "typecheck.m"
                MR_Word check_hlds__typecheck__OrigExistTVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 4)));
#line 2982 "typecheck.m"
                MR_Word check_hlds__typecheck__FunctorConsTypeInfo_19 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18), (MR_Integer) 0);
#line 2982 "typecheck.m"
                MR_Word check_hlds__typecheck__ModuleInfo_20;
#line 2982 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_21;
#line 3028 "typecheck.m"
                MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 0)));
#line 3028 "typecheck.m"
                MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 1)));
#line 3028 "typecheck.m"
                MR_Word check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 2)));
#line 3028 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 3)));
#line 3028 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 5)));
#line 3028 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 6)));
#line 3028 "typecheck.m"
                MR_Word check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 7)));

#line 2983 "typecheck.m"
                {
#line 2983 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__ModuleInfo_20);
                }
#line 2984 "typecheck.m"
                {
#line 2984 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_20, &check_hlds__typecheck__ClassTable_21);
                }
#line 2985 "typecheck.m"
                {
#line 2985 "typecheck.m"
                  check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(check_hlds__typecheck__ClassTable_21, check_hlds__typecheck__AccessType_13, check_hlds__typecheck__FieldName_14, check_hlds__typecheck__FieldDefn_15, check_hlds__typecheck__FunctorConsTypeInfo_19, check_hlds__typecheck__OrigExistTVars_17, check_hlds__typecheck__ConsTypeInfo_16);
                }
#line 2982 "typecheck.m"
              }
#line 2988 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2977 "typecheck.m"
          }
#line 3000 "typecheck.m"
      }
#line 2977 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2977 "typecheck.m"
  }
#line 2971 "typecheck.m"
}

#line 2967 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2967 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2967 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2967 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2967 "typecheck.m"
{
#line 2967 "typecheck.m"
  {
#line 2967 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2967 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2967 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2967 "typecheck.m"
    {
#line 2967 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2967 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2967 "typecheck.m"
      {
#line 2967 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2967 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2967 "typecheck.m"
      }
#line 2967 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2967 "typecheck.m"
  }
#line 2967 "typecheck.m"
}

#line 2951 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2951 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2951 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2951 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2951 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2951 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10)
#line 2951 "typecheck.m"
{
#line 2955 "typecheck.m"
  {
#line 2955 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_19_19;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_20_20;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_23;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_24_24;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_11;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_13;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__AccessType_14;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldName_15;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__CtorFieldTable_16;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldDefns_17;
#line 2955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 2955 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_25_25;
#line 2955 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_26_26;
#line 2958 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 2964 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldDefns_17;

#line 2958 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2958 "typecheck.m"
      {
#line 2958 "typecheck.m"
        check_hlds__typecheck__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 1)));
#line 2958 "typecheck.m"
        check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 2)));
#line 2958 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 3)));
#line 2958 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_25_25);
#line 2955 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
          {
#line 2959 "typecheck.m"
            {
#line 2959 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_13);
            }
#line 2960 "typecheck.m"
            {
#line 2960 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_13, check_hlds__typecheck__Name_11, &check_hlds__typecheck__V_26_26, &check_hlds__typecheck__AccessType_14, &check_hlds__typecheck__FieldName_15);
            }
#line 2955 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
              {
#line 2960 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_26_26);
#line 2955 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
                  {
#line 2963 "typecheck.m"
                    {
#line 2963 "typecheck.m"
                      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__CtorFieldTable_16);
                    }
#line 9757 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 9759 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2964 "typecheck.m"
                    {
#line 2964 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_19_19, check_hlds__typecheck__TypeInfo_20_20, check_hlds__typecheck__CtorFieldTable_16, ((MR_Box) (check_hlds__typecheck__FieldName_15)), &check_hlds__typecheck__conv0_FieldDefns_17);
                    }
#line 2964 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2964 "typecheck.m"
                      {
#line 2964 "typecheck.m"
                        check_hlds__typecheck__FieldDefns_17 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_17);
#line 2964 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2964 "typecheck.m"
                      }
#line 2955 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
                      {
#line 9780 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 9782 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_24_24 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2967 "typecheck.m"
                        {
#line 2967 "typecheck.m"
                          check_hlds__typecheck__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0]));
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 1) = ((MR_Box) (check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1));
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 3) = ((MR_Box) (check_hlds__typecheck__Info_6));
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_7));
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 5) = ((MR_Box) (check_hlds__typecheck__Name_11));
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_14));
#line 2967 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_15));
#line 2967 "typecheck.m"
                        }
#line 2966 "typecheck.m"
                        {
#line 2966 "typecheck.m"
                          mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_23_23, check_hlds__typecheck__TypeCtorInfo_24_24, check_hlds__typecheck__V_18_18, check_hlds__typecheck__FieldDefns_17, check_hlds__typecheck__MaybeConsTypeInfos_10);
                        }
#line 2966 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2955 "typecheck.m"
                      }
#line 2955 "typecheck.m"
                  }
#line 2955 "typecheck.m"
              }
#line 2955 "typecheck.m"
          }
#line 2958 "typecheck.m"
      }
#line 2955 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2955 "typecheck.m"
  }
#line 2951 "typecheck.m"
}

#line 2830 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2830 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2830 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7)
#line 2830 "typecheck.m"
{
#line 2834 "typecheck.m"
  while (MR_TRUE)
#line 2834 "typecheck.m"
    {
#line 2834 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2834 "typecheck.m"
      {
#line 2834 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2834 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2834 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2834 "typecheck.m"
        else
#line 2836 "typecheck.m"
          {
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_34;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassTable_35;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_36;
#line 2836 "typecheck.m"
            MR_Integer check_hlds__typecheck__PredArity_37;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__IsPredOrFunc_38;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_39;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_40;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_41;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__CompleteArgTypes_42;
#line 2836 "typecheck.m"
            MR_Word check_hlds__typecheck__Purity_43;
#line 2849 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_36;

#line 2847 "typecheck.m"
            {
#line 2847 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_1, &check_hlds__typecheck__ModuleInfo_34);
            }
#line 2848 "typecheck.m"
            {
#line 2848 "typecheck.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_34, &check_hlds__typecheck__ClassTable_35);
            }
#line 2849 "typecheck.m"
            {
#line 2849 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__PredTable_3, ((MR_Box) (check_hlds__typecheck__PredId_16)), &check_hlds__typecheck__conv0_PredInfo_36);
            }
#line 2849 "typecheck.m"
            check_hlds__typecheck__PredInfo_36 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_36);
#line 2850 "typecheck.m"
            {
#line 2850 "typecheck.m"
              check_hlds__typecheck__PredArity_37 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2851 "typecheck.m"
            {
#line 2851 "typecheck.m"
              check_hlds__typecheck__IsPredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2852 "typecheck.m"
            {
#line 2852 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredClassContext_39);
            }
#line 2853 "typecheck.m"
            {
#line 2853 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredTypeVarSet_40, &check_hlds__typecheck__PredExistQVars_41, &check_hlds__typecheck__CompleteArgTypes_42);
            }
#line 2855 "typecheck.m"
            {
#line 2855 "typecheck.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__Purity_43);
            }
#line 2857 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 0);
#line 2857 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2857 "typecheck.m"
              {
#line 2858 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredArity_37 >= check_hlds__typecheck__Arity_4);
#line 2857 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2861 "typecheck.m"
                  check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2857 "typecheck.m"
              }
#line 2856 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2864 "typecheck.m"
              {
#line 2864 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_44;
#line 2864 "typecheck.m"
                MR_Word check_hlds__typecheck__PredTypeParams_45;
#line 2864 "typecheck.m"
                MR_Word check_hlds__typecheck__PredType_46;
#line 2864 "typecheck.m"
                MR_Word check_hlds__typecheck__PredConstraints_47;
#line 2864 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsInfo_48;
#line 2864 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;

#line 2863 "typecheck.m"
                {
#line 2863 "typecheck.m"
                  mercury__list__det_split_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__ArgTypes_44, &check_hlds__typecheck__PredTypeParams_45);
                }
#line 2865 "typecheck.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2865 "typecheck.m"
                {
#line 2865 "typecheck.m"
                  parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__PredTypeParams_45, &check_hlds__typecheck__PredType_46);
                }
#line 2867 "typecheck.m"
                {
#line 2867 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_47);
                }
#line 2870 "typecheck.m"
                {
#line 2870 "typecheck.m"
                  check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2870 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2870 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2870 "typecheck.m"
                }
#line 2869 "typecheck.m"
                {
#line 2869 "typecheck.m"
                  check_hlds__typecheck__ConsInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2869 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2869 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2869 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 2) = ((MR_Box) (check_hlds__typecheck__PredType_46));
#line 2869 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_44));
#line 2869 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_47));
#line 2869 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 5) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 2869 "typecheck.m"
                }
#line 2871 "typecheck.m"
                {
#line 2871 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2871 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_48));
#line 2871 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2871 "typecheck.m"
                }
#line 2864 "typecheck.m"
              }
#line 2856 "typecheck.m"
            else
#line 2872 "typecheck.m"
              {
#line 2873 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredAsFuncArity_49;
#line 2873 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_60_60;

#line 2873 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 1);
#line 2873 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2873 "typecheck.m"
                  {
#line 2874 "typecheck.m"
                    check_hlds__typecheck__V_60_60 = (MR_Integer) 1;
#line 2874 "typecheck.m"
                    check_hlds__typecheck__PredAsFuncArity_49 = (check_hlds__typecheck__PredArity_37 - check_hlds__typecheck__V_60_60);
#line 2875 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 >= check_hlds__typecheck__Arity_4);
#line 2873 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2873 "typecheck.m"
                      {
#line 2879 "typecheck.m"
                        check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2880 "typecheck.m"
                        if (!(check_hlds__typecheck__succeeded))
#line 2880 "typecheck.m"
                          check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 == check_hlds__typecheck__Arity_4);
#line 2873 "typecheck.m"
                      }
#line 2873 "typecheck.m"
                  }
#line 2872 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2884 "typecheck.m"
                  {
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeCtorInfo_53_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypes_50;
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncTypeParams_51;
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypeParams_52;
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncType_54;
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_62_62;
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredConstraints_64;
#line 2884 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsInfo_65;
#line 2885 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv1_FuncReturnTypeParam_53;

#line 2883 "typecheck.m"
                    {
#line 2883 "typecheck.m"
                      mercury__list__det_split_list_4_p_0(check_hlds__typecheck__TypeCtorInfo_53_71, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__FuncArgTypes_50, &check_hlds__typecheck__FuncTypeParams_51);
                    }
#line 2885 "typecheck.m"
                    {
#line 2885 "typecheck.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0(check_hlds__typecheck__TypeCtorInfo_53_71, check_hlds__typecheck__FuncTypeParams_51, &check_hlds__typecheck__FuncArgTypeParams_52, &check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
                    }
#line 2885 "typecheck.m"
                    check_hlds__typecheck__FuncReturnTypeParam_53 = ((MR_Word) check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
#line 2890 "typecheck.m"
                    if ((check_hlds__typecheck__FuncArgTypeParams_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2889 "typecheck.m"
                      check_hlds__typecheck__FuncType_54 = check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2890 "typecheck.m"
                    else
#line 2891 "typecheck.m"
                      {
#line 2892 "typecheck.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2892 "typecheck.m"
                        {
#line 2892 "typecheck.m"
                          parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__FuncArgTypeParams_52, check_hlds__typecheck__FuncReturnTypeParam_53, &check_hlds__typecheck__FuncType_54);
                        }
#line 2891 "typecheck.m"
                      }
#line 2895 "typecheck.m"
                    {
#line 2895 "typecheck.m"
                      hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_64);
                    }
#line 2899 "typecheck.m"
                    {
#line 2899 "typecheck.m"
                      check_hlds__typecheck__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2899 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2899 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2899 "typecheck.m"
                    }
#line 2897 "typecheck.m"
                    {
#line 2897 "typecheck.m"
                      check_hlds__typecheck__ConsInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2897 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2897 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2897 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 2) = ((MR_Box) (check_hlds__typecheck__FuncType_54));
#line 2897 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 3) = ((MR_Box) (check_hlds__typecheck__FuncArgTypes_50));
#line 2897 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_64));
#line 2897 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 5) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 2897 "typecheck.m"
                    }
#line 2900 "typecheck.m"
                    {
#line 2900 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2900 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_65));
#line 2900 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2900 "typecheck.m"
                    }
#line 2884 "typecheck.m"
                  }
#line 2872 "typecheck.m"
                else
#line 2872 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2872 "typecheck.m"
              }
#line 2839 "typecheck.m"
            /* direct tailcall eliminated */
#line 2839 "typecheck.m"
            {
#line 2839 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__2__tmp_copy_2 = check_hlds__typecheck__PredIds_17;
#line 2839 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;

#line 2839 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6;
#line 2839 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__HeadVar__2__tmp_copy_2;
#line 2839 "typecheck.m"
            }
#line 2839 "typecheck.m"
            continue;
#line 2836 "typecheck.m"
          }
#line 2834 "typecheck.m"
      }
#line 2834 "typecheck.m"
      break;
#line 2834 "typecheck.m"
    }
#line 2830 "typecheck.m"
}

#line 2811 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2811 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2811 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2811 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2811 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2811 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10)
#line 2811 "typecheck.m"
{
#line 2814 "typecheck.m"
  {
#line 2814 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2814 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_11;
#line 2814 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_14;
#line 2814 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_15;
#line 2814 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_16;
#line 2815 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_12_12;
#line 2815 "typecheck.m"
    MR_Word check_hlds__typecheck__V_13_13;

#line 2815 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2815 "typecheck.m"
      {
#line 2815 "typecheck.m"
        check_hlds__typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 1)));
#line 2815 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 2)));
#line 2815 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 3)));
#line 2816 "typecheck.m"
        {
#line 2816 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredicateTable_14);
        }
#line 2817 "typecheck.m"
        {
#line 2817 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__IsFullyQualified_15);
        }
#line 2818 "typecheck.m"
        {
#line 2818 "typecheck.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(check_hlds__typecheck__PredicateTable_14, check_hlds__typecheck__IsFullyQualified_15, check_hlds__typecheck__SymName_11, &check_hlds__typecheck__PredIds_16);
        }
#line 2825 "typecheck.m"
        if ((check_hlds__typecheck__PredIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2827 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfos_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2825 "typecheck.m"
        else
#line 2821 "typecheck.m"
          {
#line 2821 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_19;

#line 2822 "typecheck.m"
            {
#line 2822 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_14, &check_hlds__typecheck__Preds_19);
            }
#line 2823 "typecheck.m"
            {
#line 2823 "typecheck.m"
              check_hlds__typecheck__make_pred_cons_info_list_7_p_0(check_hlds__typecheck__Info_6, check_hlds__typecheck__PredIds_16, check_hlds__typecheck__Preds_19, check_hlds__typecheck__Arity_8, check_hlds__typecheck__GoalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__ConsTypeInfos_10);
            }
#line 2821 "typecheck.m"
          }
#line 2825 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2815 "typecheck.m"
      }
#line 2814 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2814 "typecheck.m"
  }
#line 2811 "typecheck.m"
}

#line 2727 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2727 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2727 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2727 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2727 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4)
#line 2727 "typecheck.m"
{
#line 2730 "typecheck.m"
  {
#line 2730 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2730 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2730 "typecheck.m"
      {
#line 2730 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2730 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2730 "typecheck.m"
      }
#line 2730 "typecheck.m"
    else
#line 2731 "typecheck.m"
      {
#line 2731 "typecheck.m"
        MR_Word check_hlds__typecheck__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2731 "typecheck.m"
        MR_Word check_hlds__typecheck__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2731 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_10;
#line 2731 "typecheck.m"
        MR_Word check_hlds__typecheck__VarTypes0_13;
#line 2731 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;
#line 2734 "typecheck.m"
        MR_Word check_hlds__typecheck__VarType_14;
#line 2748 "typecheck.m"
        MR_Word * check_hlds__typecheck__AddrTypes_26;

#line 2733 "typecheck.m"
        {
#line 2733 "typecheck.m"
          check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__VarTypes0_13);
        }
#line 2734 "typecheck.m"
        {
#line 2734 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_13, check_hlds__typecheck__Var_8, &check_hlds__typecheck__VarType_14);
        }
#line 2734 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2736 "typecheck.m"
          {
#line 2736 "typecheck.m"
            check_hlds__typecheck__Type_10 = check_hlds__typecheck__VarType_14;
#line 2736 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2736 "typecheck.m"
          }
#line 2734 "typecheck.m"
        else
#line 2740 "typecheck.m"
          {
#line 2740 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 2740 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVar_16;
#line 2740 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 2740 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes1_18;
#line 2740 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21;

#line 2740 "typecheck.m"
            {
#line 2740 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__TypeVarSet0_15);
            }
#line 2741 "typecheck.m"
            {
#line 2741 "typecheck.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
            }
#line 2742 "typecheck.m"
            {
#line 2742 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21);
            }
#line 2743 "typecheck.m"
            {
#line 2743 "typecheck.m"
              check_hlds__typecheck__Type_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2743 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 2743 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2743 "typecheck.m"
            }
#line 2744 "typecheck.m"
            {
#line 2744 "typecheck.m"
              hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__Var_8, check_hlds__typecheck__Type_10, check_hlds__typecheck__VarTypes0_13, &check_hlds__typecheck__VarTypes1_18);
            }
#line 2745 "typecheck.m"
            {
#line 2745 "typecheck.m"
              check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes1_18, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23);
            }
#line 2740 "typecheck.m"
          }
#line 2731 "typecheck.m"
        {
#line 2731 "typecheck.m"
          MR_Word base;
#line 2731 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2731 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 2731 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Type_10));
#line 2731 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 2731 "typecheck.m"
        }
#line 2731 "typecheck.m"
        check_hlds__typecheck__AddrTypes_26 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1));
#line 2748 "typecheck.m"
        {
#line 2748 "typecheck.m"
          check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(check_hlds__typecheck__Vars_9, check_hlds__typecheck__AddrTypes_26, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);
        }
#line 2731 "typecheck.m"
      }
#line 2730 "typecheck.m"
  }
#line 2727 "typecheck.m"
}

#line 2712 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2712 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2712 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8)
#line 2712 "typecheck.m"
{
#line 2716 "typecheck.m"
  while (MR_TRUE)
#line 2716 "typecheck.m"
    {
#line 2716 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2716 "typecheck.m"
      {
#line 2716 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2716 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2716 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2716 "typecheck.m"
        else
#line 2718 "typecheck.m"
          {
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssignSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVarTypes_25;
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_26;
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__LambdaType_27;
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_38;
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_39;
#line 2718 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_40;

#line 2719 "typecheck.m"
            {
#line 2719 "typecheck.m"
              check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__ArgVars_6, &check_hlds__typecheck__ArgVarTypes_25, check_hlds__typecheck__TypeAssign0_17, &check_hlds__typecheck__TypeAssign1_26);
            }
#line 2721 "typecheck.m"
            {
#line 2721 "typecheck.m"
              parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_2, check_hlds__typecheck__PredOrFunc_3, check_hlds__typecheck__ArgVarTypes_25, &check_hlds__typecheck__LambdaType_27);
            }
#line 2161 "typecheck.m"
            {
#line 2161 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__VarTypes0_38);
            }
#line 2162 "typecheck.m"
            {
#line 2162 "typecheck.m"
              hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_5, check_hlds__typecheck__LambdaType_27, &check_hlds__typecheck__MaybeOldVarType_39, check_hlds__typecheck__VarTypes0_38, &check_hlds__typecheck__VarTypes_40);
            }
#line 2172 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2173 "typecheck.m"
              {
#line 2173 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_43;

#line 2174 "typecheck.m"
                {
#line 2174 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_40, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign_43);
                }
#line 2175 "typecheck.m"
                {
#line 2175 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_43));
#line 2175 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 2175 "typecheck.m"
                }
#line 2173 "typecheck.m"
              }
#line 2172 "typecheck.m"
            else
#line 2164 "typecheck.m"
              {
#line 2164 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_39, (MR_Integer) 0)));
#line 2165 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_42;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_51;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_52;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_53;

#line 2759 "typecheck.m"
                {
#line 2759 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__HeadTypeParams_51);
                }
#line 2760 "typecheck.m"
                {
#line 2760 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeBindings0_52);
                }
#line 2761 "typecheck.m"
                {
#line 2761 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_41, check_hlds__typecheck__LambdaType_27, check_hlds__typecheck__HeadTypeParams_51, check_hlds__typecheck__TypeBindings0_52, &check_hlds__typecheck__TypeBindings_53);
                }
#line 2758 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2758 "typecheck.m"
                  {
#line 2762 "typecheck.m"
                    {
#line 2762 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_53, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign1_42);
                    }
#line 2762 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2758 "typecheck.m"
                  }
#line 2165 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2168 "typecheck.m"
                  {
#line 2168 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_42));
#line 2168 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 2168 "typecheck.m"
                  }
#line 2165 "typecheck.m"
                else
#line 2170 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2164 "typecheck.m"
              }
#line 2724 "typecheck.m"
            /* direct tailcall eliminated */
#line 2724 "typecheck.m"
            {
#line 2724 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssignSet0_18;
#line 2724 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;

#line 2724 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7;
#line 2724 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2724 "typecheck.m"
            }
#line 2724 "typecheck.m"
            continue;
#line 2718 "typecheck.m"
          }
#line 2716 "typecheck.m"
      }
#line 2716 "typecheck.m"
      break;
#line 2716 "typecheck.m"
    }
#line 2712 "typecheck.m"
}

#line 2598 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2598 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2598 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2598 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2598 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2598 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16)
#line 2598 "typecheck.m"
{
#line 2603 "typecheck.m"
  {
#line 2603 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2603 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes0_10;
#line 2603 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeTypeY_11;
#line 2603 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes_12;

#line 2605 "typecheck.m"
    {
#line 2605 "typecheck.m"
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__VarTypes0_10);
    }
#line 2606 "typecheck.m"
    {
#line 2606 "typecheck.m"
      hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_7, check_hlds__typecheck__ConsType_6, &check_hlds__typecheck__MaybeTypeY_11, check_hlds__typecheck__VarTypes0_10, &check_hlds__typecheck__VarTypes_12);
    }
#line 2618 "typecheck.m"
    if ((check_hlds__typecheck__MaybeTypeY_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2619 "typecheck.m"
      {
#line 2619 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_19;

#line 2622 "typecheck.m"
        {
#line 2622 "typecheck.m"
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_12, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_19);
        }
#line 2623 "typecheck.m"
        {
#line 2623 "typecheck.m"
          MR_Word base;
#line 2623 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2623 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2623 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_19));
#line 2623 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2623 "typecheck.m"
        }
#line 2619 "typecheck.m"
      }
#line 2618 "typecheck.m"
    else
#line 2608 "typecheck.m"
      {
#line 2608 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_11, (MR_Integer) 0)));
#line 2609 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_14;
#line 2758 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadTypeParams_24;
#line 2758 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings0_25;
#line 2758 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings_26;

#line 2759 "typecheck.m"
        {
#line 2759 "typecheck.m"
          check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__HeadTypeParams_24);
        }
#line 2760 "typecheck.m"
        {
#line 2760 "typecheck.m"
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeBindings0_25);
        }
#line 2761 "typecheck.m"
        {
#line 2761 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__ConsType_6, check_hlds__typecheck__TypeY_13, check_hlds__typecheck__HeadTypeParams_24, check_hlds__typecheck__TypeBindings0_25, &check_hlds__typecheck__TypeBindings_26);
        }
#line 2758 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2758 "typecheck.m"
          {
#line 2762 "typecheck.m"
            {
#line 2762 "typecheck.m"
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_26, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_14);
            }
#line 2762 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2758 "typecheck.m"
          }
#line 2609 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2614 "typecheck.m"
          {
#line 2614 "typecheck.m"
            MR_Word base;
#line 2614 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2614 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2614 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_14));
#line 2614 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2614 "typecheck.m"
          }
#line 2609 "typecheck.m"
        else
#line 2609 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15;
#line 2608 "typecheck.m"
      }
#line 2603 "typecheck.m"
  }
#line 2598 "typecheck.m"
}

#line 2496 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2496 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2496 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2496 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2496 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2496 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2496 "typecheck.m"
{
#line 2500 "typecheck.m"
  while (MR_TRUE)
#line 2500 "typecheck.m"
    {
#line 2500 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2500 "typecheck.m"
      {
#line 2500 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2500 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2500 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2500 "typecheck.m"
        else
#line 2502 "typecheck.m"
          {
#line 2502 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2502 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2502 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 2502 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 2521 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeX_27;

#line 2520 "typecheck.m"
            {
#line 2520 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 2521 "typecheck.m"
            {
#line 2521 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__X_2, &check_hlds__typecheck__TypeX_27);
            }
#line 2521 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2522 "typecheck.m"
              {
#line 2522 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeTypeY_28;
#line 2522 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_29;

#line 2522 "typecheck.m"
                {
#line 2522 "typecheck.m"
                  hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__TypeX_27, &check_hlds__typecheck__MaybeTypeY_28, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_29);
                }
#line 2533 "typecheck.m"
                if ((check_hlds__typecheck__MaybeTypeY_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2534 "typecheck.m"
                  {
#line 2534 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_32;

#line 2535 "typecheck.m"
                    {
#line 2535 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_29, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2536 "typecheck.m"
                    {
#line 2536 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2536 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2536 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2536 "typecheck.m"
                    }
#line 2534 "typecheck.m"
                  }
#line 2533 "typecheck.m"
                else
#line 2524 "typecheck.m"
                  {
#line 2524 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeY_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_28, (MR_Integer) 0)));
#line 2526 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign3_31;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_58;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_59;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_60;

#line 2759 "typecheck.m"
                    {
#line 2759 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_58);
                    }
#line 2760 "typecheck.m"
                    {
#line 2760 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_59);
                    }
#line 2761 "typecheck.m"
                    {
#line 2761 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__TypeX_27, check_hlds__typecheck__TypeY_30, check_hlds__typecheck__HeadTypeParams_58, check_hlds__typecheck__TypeBindings0_59, &check_hlds__typecheck__TypeBindings_60);
                    }
#line 2758 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2758 "typecheck.m"
                      {
#line 2762 "typecheck.m"
                        {
#line 2762 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_60, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign3_31);
                        }
#line 2762 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2758 "typecheck.m"
                      }
#line 2526 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2529 "typecheck.m"
                      {
#line 2529 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2529 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign3_31));
#line 2529 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2529 "typecheck.m"
                      }
#line 2526 "typecheck.m"
                    else
#line 2531 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2524 "typecheck.m"
                  }
#line 2522 "typecheck.m"
              }
#line 2521 "typecheck.m"
            else
#line 2539 "typecheck.m"
              {
#line 2539 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_50;

#line 2539 "typecheck.m"
                {
#line 2539 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__Y_3, &check_hlds__typecheck__TypeY_50);
                }
#line 2539 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
                  {
#line 2541 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_45;
#line 2541 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_46;

#line 2541 "typecheck.m"
                    {
#line 2541 "typecheck.m"
                      hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__TypeY_50, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_45);
                    }
#line 2542 "typecheck.m"
                    {
#line 2542 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_45, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_46);
                    }
#line 2543 "typecheck.m"
                    {
#line 2543 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2543 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_46));
#line 2543 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2543 "typecheck.m"
                    }
#line 2541 "typecheck.m"
                  }
#line 2539 "typecheck.m"
                else
#line 2547 "typecheck.m"
                  {
#line 2547 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet0_33;
#line 2547 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVar_34;
#line 2547 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet_35;
#line 2547 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_36;
#line 2547 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_37;
#line 2547 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_38;
#line 2547 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_47;
#line 2547 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_48;

#line 2547 "typecheck.m"
                    {
#line 2547 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeVarSet0_33);
                    }
#line 2548 "typecheck.m"
                    {
#line 2548 "typecheck.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_34, check_hlds__typecheck__TypeVarSet0_33, &check_hlds__typecheck__TypeVarSet_35);
                    }
#line 2549 "typecheck.m"
                    {
#line 2549 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_35, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_36);
                    }
#line 2550 "typecheck.m"
                    {
#line 2550 "typecheck.m"
                      check_hlds__typecheck__Type_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2550 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_34));
#line 2550 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2550 "typecheck.m"
                    }
#line 2551 "typecheck.m"
                    {
#line 2551 "typecheck.m"
                      hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes1_38);
                    }
#line 2552 "typecheck.m"
                    {
#line 2552 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], ((MR_Box) (check_hlds__typecheck__X_2)), ((MR_Box) (check_hlds__typecheck__Y_3)));
                    }
#line 2552 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2553 "typecheck.m"
                      check_hlds__typecheck__VarTypes_47 = check_hlds__typecheck__VarTypes1_38;
#line 2552 "typecheck.m"
                    else
#line 2555 "typecheck.m"
                      {
#line 2555 "typecheck.m"
                        hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes1_38, &check_hlds__typecheck__VarTypes_47);
                      }
#line 2557 "typecheck.m"
                    {
#line 2557 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_47, check_hlds__typecheck__TypeAssign1_36, &check_hlds__typecheck__TypeAssign_48);
                    }
#line 2558 "typecheck.m"
                    {
#line 2558 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2558 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_48));
#line 2558 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2558 "typecheck.m"
                    }
#line 2547 "typecheck.m"
                  }
#line 2539 "typecheck.m"
              }
#line 2504 "typecheck.m"
            /* direct tailcall eliminated */
#line 2504 "typecheck.m"
            {
#line 2504 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 2504 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 2504 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2504 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2504 "typecheck.m"
            }
#line 2504 "typecheck.m"
            continue;
#line 2502 "typecheck.m"
          }
#line 2500 "typecheck.m"
      }
#line 2500 "typecheck.m"
      break;
#line 2500 "typecheck.m"
    }
#line 2496 "typecheck.m"
}

#line 2465 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2465 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2465 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2465 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2465 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4)
#line 2465 "typecheck.m"
{
#line 2468 "typecheck.m"
  while (MR_TRUE)
#line 2468 "typecheck.m"
    {
#line 2468 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2468 "typecheck.m"
      {
#line 2468 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2468 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2468 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2468 "typecheck.m"
        else
#line 2470 "typecheck.m"
          {
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_9;
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_10;
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__Type_14;
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_15;
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_28;
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeTypeY_29;
#line 2470 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_30;

#line 2469 "typecheck.m"
            check_hlds__typecheck__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 0)));
#line 2469 "typecheck.m"
            check_hlds__typecheck__ConsType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 1)));
#line 2471 "typecheck.m"
            check_hlds__typecheck__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 0)));
#line 2471 "typecheck.m"
            check_hlds__typecheck__ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 1)));
#line 2571 "typecheck.m"
            {
#line 2571 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__VarTypes0_28);
            }
#line 2572 "typecheck.m"
            {
#line 2572 "typecheck.m"
              hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_14, &check_hlds__typecheck__MaybeTypeY_29, check_hlds__typecheck__VarTypes0_28, &check_hlds__typecheck__VarTypes_30);
            }
#line 2587 "typecheck.m"
            if ((check_hlds__typecheck__MaybeTypeY_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2588 "typecheck.m"
              {
#line 2588 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_37;
#line 2588 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_38;
#line 2588 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssign_39;

#line 2591 "typecheck.m"
                {
#line 2591 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_30, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_37);
                }
#line 2592 "typecheck.m"
                {
#line 2592 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_38);
                }
#line 2593 "typecheck.m"
                {
#line 2593 "typecheck.m"
                  check_hlds__typecheck__ArgsTypeAssign_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2593 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_37));
#line 2593 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2593 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_38));
#line 2593 "typecheck.m"
                }
#line 2595 "typecheck.m"
                {
#line 2595 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2595 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_39));
#line 2595 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2595 "typecheck.m"
                }
#line 2588 "typecheck.m"
              }
#line 2587 "typecheck.m"
            else
#line 2574 "typecheck.m"
              {
#line 2574 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_29, (MR_Integer) 0)));
#line 2575 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_32;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_44;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_45;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_46;

#line 2759 "typecheck.m"
                {
#line 2759 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__HeadTypeParams_44);
                }
#line 2760 "typecheck.m"
                {
#line 2760 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeBindings0_45);
                }
#line 2761 "typecheck.m"
                {
#line 2761 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__Type_14, check_hlds__typecheck__TypeY_31, check_hlds__typecheck__HeadTypeParams_44, check_hlds__typecheck__TypeBindings0_45, &check_hlds__typecheck__TypeBindings_46);
                }
#line 2758 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2758 "typecheck.m"
                  {
#line 2762 "typecheck.m"
                    {
#line 2762 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_46, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2762 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2758 "typecheck.m"
                  }
#line 2575 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2580 "typecheck.m"
                  {
#line 2580 "typecheck.m"
                    MR_Word check_hlds__typecheck__EmptyConstraints_33;
#line 2580 "typecheck.m"
                    MR_Word check_hlds__typecheck__ArgsTypeAssign_34;

#line 2580 "typecheck.m"
                    {
#line 2580 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_33);
                    }
#line 2581 "typecheck.m"
                    {
#line 2581 "typecheck.m"
                      check_hlds__typecheck__ArgsTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2581 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2581 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2581 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_33));
#line 2581 "typecheck.m"
                    }
#line 2583 "typecheck.m"
                    {
#line 2583 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2583 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_34));
#line 2583 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2583 "typecheck.m"
                    }
#line 2580 "typecheck.m"
                  }
#line 2575 "typecheck.m"
                else
#line 2575 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2574 "typecheck.m"
              }
#line 2474 "typecheck.m"
            /* direct tailcall eliminated */
#line 2474 "typecheck.m"
            {
#line 2474 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_11;
#line 2474 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;

#line 2474 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3;
#line 2474 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2474 "typecheck.m"
            }
#line 2474 "typecheck.m"
            continue;
#line 2470 "typecheck.m"
          }
#line 2468 "typecheck.m"
      }
#line 2468 "typecheck.m"
      break;
#line 2468 "typecheck.m"
    }
#line 2465 "typecheck.m"
}

#line 2348 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
#line 2348 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2348 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 2348 "typecheck.m"
{
#line 2348 "typecheck.m"
  {
#line 2348 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 2348 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2348 "typecheck.m"
    MR_Word check_hlds__typecheck__conv2_HeadVar__2_2;

#line 2348 "typecheck.m"
    {
#line 2348 "typecheck.m"
      check_hlds__typecheck__conv2_HeadVar__2_2 = check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 2348 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv2_HeadVar__2_2));
#line 2348 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 2348 "typecheck.m"
  }
#line 2348 "typecheck.m"
}

#line 2304 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
#line 2304 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2304 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2304 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2304 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2304 "typecheck.m"
{
#line 2304 "typecheck.m"
  {
#line 2304 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2304 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16;

#line 2304 "typecheck.m"
    {
#line 2304 "typecheck.m"
      check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16);
    }
#line 2304 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16));
#line 2304 "typecheck.m"
  }
#line 2304 "typecheck.m"
}

#line 2294 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_13,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_14,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_15,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_16,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_17,
#line 2294 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_18,
#line 2294 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_54,
#line 2294 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_55)
#line 2294 "typecheck.m"
{
#line 2300 "typecheck.m"
  {
#line 2300 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2300 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseContext_20;
#line 2302 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsType_21;
#line 2302 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltinTypeName_22;

#line 2301 "typecheck.m"
    {
#line 2301 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__ClauseContext_20);
    }
#line 2302 "typecheck.m"
    {
#line 2302 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(check_hlds__typecheck__ConsId_14, &check_hlds__typecheck__ConsType_21, &check_hlds__typecheck__BuiltinTypeName_22);
    }
#line 2302 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2305 "typecheck.m"
      {
#line 2305 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet1_23;
#line 2305 "typecheck.m"
        MR_Word check_hlds__typecheck__V_56_56;
#line 2303 "typecheck.m"
        MR_Box check_hlds__typecheck__conv1_TypeAssignSet1_23;

#line 2304 "typecheck.m"
        {
#line 2304 "typecheck.m"
          check_hlds__typecheck__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2304 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[1]));
#line 2304 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1));
#line 2304 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2304 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 3) = ((MR_Box) (check_hlds__typecheck__ConsType_21));
#line 2304 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 4) = ((MR_Box) (check_hlds__typecheck__Var_13));
#line 2304 "typecheck.m"
        }
#line 2303 "typecheck.m"
        {
#line 2303 "typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[3], check_hlds__typecheck__V_56_56, check_hlds__typecheck__TypeAssignSet0_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typecheck__conv1_TypeAssignSet1_23);
        }
#line 2303 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet1_23 = ((MR_Word) check_hlds__typecheck__conv1_TypeAssignSet1_23);
#line 2309 "typecheck.m"
        if ((check_hlds__typecheck__TypeAssignSet1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2310 "typecheck.m"
          {
#line 2313 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2318 "typecheck.m"
            if ((check_hlds__typecheck__TypeAssignSet0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2315 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2318 "typecheck.m"
            else
#line 2319 "typecheck.m"
              {
#line 2319 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeVarSet_28;
#line 2319 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_29;
#line 2319 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsDefn_30;
#line 2319 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsIdSpec_31;
#line 2319 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 2319 "typecheck.m"
                MR_Word check_hlds__typecheck__V_61_61;

#line 2320 "typecheck.m"
                {
#line 2320 "typecheck.m"
                  mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_28);
                }
#line 2321 "typecheck.m"
                {
#line 2321 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_29);
                }
#line 2323 "typecheck.m"
                {
#line 2323 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinTypeName_22));
#line 2323 "typecheck.m"
                }
#line 2322 "typecheck.m"
                {
#line 2322 "typecheck.m"
                  check_hlds__typecheck__ConsDefn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2322 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_28));
#line 2322 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2322 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_21));
#line 2322 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2322 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_29));
#line 2322 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 5) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 2322 "typecheck.m"
                }
#line 2325 "typecheck.m"
                {
#line 2325 "typecheck.m"
                  check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__ConsDefn_30));
#line 2325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2325 "typecheck.m"
                }
#line 2324 "typecheck.m"
                {
#line 2324 "typecheck.m"
                  check_hlds__typecheck__ConsIdSpec_31 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__V_61_61, check_hlds__typecheck__ConsId_14, (MR_Integer) 0, check_hlds__typecheck__TypeAssignSet0_17);
                }
#line 2327 "typecheck.m"
                {
#line 2327 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_31, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__STATE_VARIABLE_Info_55);
                }
#line 2319 "typecheck.m"
              }
#line 2310 "typecheck.m"
          }
#line 2309 "typecheck.m"
        else
#line 2307 "typecheck.m"
          {
#line 2308 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_23;
#line 2307 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2307 "typecheck.m"
          }
#line 2305 "typecheck.m"
      }
#line 2302 "typecheck.m"
    else
#line 2333 "typecheck.m"
      {
#line 2333 "typecheck.m"
        MR_Integer check_hlds__typecheck__Arity_32;
#line 2333 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsDefns_33;
#line 2333 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsErrors_34;

#line 2333 "typecheck.m"
        {
#line 2333 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_15, &check_hlds__typecheck__Arity_32);
        }
#line 2334 "typecheck.m"
        {
#line 2334 "typecheck.m"
          check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__GoalId_16, &check_hlds__typecheck__ConsDefns_33, &check_hlds__typecheck__ConsErrors_34);
        }
#line 2343 "typecheck.m"
        if ((check_hlds__typecheck__ConsDefns_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2337 "typecheck.m"
          {
#line 2337 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalContext_35;
#line 2337 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_36;

#line 2338 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2339 "typecheck.m"
            {
#line 2339 "typecheck.m"
              check_hlds__typecheck__GoalContext_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2339 "typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalContext_35, 0) = ((MR_Box) (check_hlds__typecheck__UnifyContext_11));
#line 2339 "typecheck.m"
            }
#line 2340 "typecheck.m"
            {
#line 2340 "typecheck.m"
              check_hlds__typecheck__Spec_36 = check_hlds__typecheck_errors__report_error_undef_cons_6_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__GoalContext_35, check_hlds__typecheck__Context_12, check_hlds__typecheck__ConsErrors_34, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32);
            }
#line 2342 "typecheck.m"
            {
#line 2342 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_36, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__STATE_VARIABLE_Info_55);
            }
#line 2337 "typecheck.m"
          }
#line 2343 "typecheck.m"
        else
#line 2343 "typecheck.m"
          {
#line 2343 "typecheck.m"
            MR_Word check_hlds__typecheck__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 1)));
#line 2345 "typecheck.m"
            MR_Word check_hlds__typecheck__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 0)));

#line 2343 "typecheck.m"
            if ((check_hlds__typecheck__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2351 "typecheck.m"
              {
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_43;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_46;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_80;
#line 2359 "typecheck.m"
                MR_Word check_hlds__typecheck__V_44_44;
#line 2359 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45;
#line 2374 "typecheck.m"
                MR_Word check_hlds__typecheck__V_47_47;
#line 2374 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;

#line 2355 "typecheck.m"
                {
#line 2355 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__TypeAssignSet0_17, check_hlds__typecheck__ConsDefns_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_43);
                }
#line 2358 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2358 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2358 "typecheck.m"
                  {
#line 2359 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_17)) == (MR_mktag((MR_Integer) 1)));
#line 2359 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2359 "typecheck.m"
                      {
#line 2359 "typecheck.m"
                        check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 0)));
#line 2359 "typecheck.m"
                        check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 1)));
#line 2359 "typecheck.m"
                      }
#line 2358 "typecheck.m"
                  }
#line 2357 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2363 "typecheck.m"
                  {
#line 2363 "typecheck.m"
                    {
#line 2363 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
#line 2363 "typecheck.m"
                      return;
                    }
#line 2363 "typecheck.m"
                  }
#line 2357 "typecheck.m"
                else
#line 2365 "typecheck.m"
                  {
#line 2365 "typecheck.m"
                  }
#line 2370 "typecheck.m"
                {
#line 2370 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_43, check_hlds__typecheck__Var_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_46);
                }
#line 2373 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2373 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2373 "typecheck.m"
                  {
#line 2374 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_43)) == (MR_mktag((MR_Integer) 1)));
#line 2374 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2374 "typecheck.m"
                      {
#line 2374 "typecheck.m"
                        check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Integer) 0)));
#line 2374 "typecheck.m"
                        check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Integer) 1)));
#line 2374 "typecheck.m"
                      }
#line 2373 "typecheck.m"
                  }
#line 2372 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2378 "typecheck.m"
                  {
#line 2378 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_78;

#line 2376 "typecheck.m"
                    {
#line 2376 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_78 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__TypeAssignSet0_17);
                    }
#line 2379 "typecheck.m"
                    {
#line 2379 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_78, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__STATE_VARIABLE_Info_74_74);
                    }
#line 2378 "typecheck.m"
                  }
#line 2372 "typecheck.m"
                else
#line 2372 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_74_74 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2386 "typecheck.m"
                {
#line 2386 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_46, check_hlds__typecheck__Args_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_80);
                }
#line 2391 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet1_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2392 "typecheck.m"
                  {
#line 2395 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2400 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2397 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2400 "typecheck.m"
                    else
#line 2401 "typecheck.m"
                      {
#line 2401 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_53;

#line 2402 "typecheck.m"
                        {
#line 2402 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_53 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Args_15, check_hlds__typecheck__ArgsTypeAssignSet_46);
                        }
#line 2405 "typecheck.m"
                        {
#line 2405 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_53, check_hlds__typecheck__STATE_VARIABLE_Info_74_74, check_hlds__typecheck__STATE_VARIABLE_Info_55);
                        }
#line 2401 "typecheck.m"
                      }
#line 2392 "typecheck.m"
                  }
#line 2391 "typecheck.m"
                else
#line 2389 "typecheck.m"
                  {
#line 2390 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_80;
#line 2389 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2389 "typecheck.m"
                  }
#line 2351 "typecheck.m"
              }
#line 2343 "typecheck.m"
            else
#line 2351 "typecheck.m"
              {
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__Sources_41;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__Symbol_42;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_137;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_140;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_67_148;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2351 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_157;
#line 2359 "typecheck.m"
                MR_Word check_hlds__typecheck__V_97_97;
#line 2359 "typecheck.m"
                MR_Word check_hlds__typecheck__V_98_98;
#line 2374 "typecheck.m"
                MR_Word check_hlds__typecheck__V_109_109;
#line 2374 "typecheck.m"
                MR_Word check_hlds__typecheck__V_110_110;

#line 2348 "typecheck.m"
                {
#line 2348 "typecheck.m"
                  check_hlds__typecheck__Sources_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[5], check_hlds__typecheck__ConsDefns_33);
                }
#line 2349 "typecheck.m"
                {
#line 2349 "typecheck.m"
                  check_hlds__typecheck__Symbol_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2349 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_42, 0) = ((MR_Box) (check_hlds__typecheck__ConsId_14));
#line 2349 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_42, 1) = ((MR_Box) (check_hlds__typecheck__Sources_41));
#line 2349 "typecheck.m"
                }
#line 2350 "typecheck.m"
                {
#line 2350 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_42, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__STATE_VARIABLE_Info_67_148);
                }
#line 2355 "typecheck.m"
                {
#line 2355 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__TypeAssignSet0_17, check_hlds__typecheck__ConsDefns_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_137);
                }
#line 2358 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2358 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2358 "typecheck.m"
                  {
#line 2359 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_17)) == (MR_mktag((MR_Integer) 1)));
#line 2359 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2359 "typecheck.m"
                      {
#line 2359 "typecheck.m"
                        check_hlds__typecheck__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 0)));
#line 2359 "typecheck.m"
                        check_hlds__typecheck__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 1)));
#line 2359 "typecheck.m"
                      }
#line 2358 "typecheck.m"
                  }
#line 2357 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2363 "typecheck.m"
                  {
#line 2363 "typecheck.m"
                    {
#line 2363 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
#line 2363 "typecheck.m"
                      return;
                    }
#line 2363 "typecheck.m"
                  }
#line 2357 "typecheck.m"
                else
#line 2365 "typecheck.m"
                  {
#line 2365 "typecheck.m"
                  }
#line 2370 "typecheck.m"
                {
#line 2370 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_137, check_hlds__typecheck__Var_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_140);
                }
#line 2373 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2373 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2373 "typecheck.m"
                  {
#line 2374 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_137)) == (MR_mktag((MR_Integer) 1)));
#line 2374 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2374 "typecheck.m"
                      {
#line 2374 "typecheck.m"
                        check_hlds__typecheck__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Integer) 0)));
#line 2374 "typecheck.m"
                        check_hlds__typecheck__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Integer) 1)));
#line 2374 "typecheck.m"
                      }
#line 2373 "typecheck.m"
                  }
#line 2372 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2378 "typecheck.m"
                  {
#line 2378 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_113;

#line 2376 "typecheck.m"
                    {
#line 2376 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_113 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__TypeAssignSet0_17);
                    }
#line 2379 "typecheck.m"
                    {
#line 2379 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_113, check_hlds__typecheck__STATE_VARIABLE_Info_67_148, &check_hlds__typecheck__STATE_VARIABLE_Info_74_154);
                    }
#line 2378 "typecheck.m"
                  }
#line 2372 "typecheck.m"
                else
#line 2372 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_74_154 = check_hlds__typecheck__STATE_VARIABLE_Info_67_148;
#line 2386 "typecheck.m"
                {
#line 2386 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_140, check_hlds__typecheck__Args_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_157);
                }
#line 2391 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet1_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2392 "typecheck.m"
                  {
#line 2395 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2400 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2397 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2400 "typecheck.m"
                    else
#line 2401 "typecheck.m"
                      {
#line 2401 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_121;

#line 2402 "typecheck.m"
                        {
#line 2402 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_121 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Args_15, check_hlds__typecheck__ArgsTypeAssignSet_140);
                        }
#line 2405 "typecheck.m"
                        {
#line 2405 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_121, check_hlds__typecheck__STATE_VARIABLE_Info_74_154, check_hlds__typecheck__STATE_VARIABLE_Info_55);
                        }
#line 2401 "typecheck.m"
                      }
#line 2392 "typecheck.m"
                  }
#line 2391 "typecheck.m"
                else
#line 2389 "typecheck.m"
                  {
#line 2390 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_157;
#line 2389 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2389 "typecheck.m"
                  }
#line 2351 "typecheck.m"
              }
#line 2343 "typecheck.m"
          }
#line 2333 "typecheck.m"
      }
#line 2300 "typecheck.m"
  }
#line 2294 "typecheck.m"
}

#line 2275 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2275 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2275 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2275 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6)
#line 2275 "typecheck.m"
{
#line 2278 "typecheck.m"
  {
#line 2278 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2278 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinType_8;

#line 2283 "typecheck.m"
#line 2283 "typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) {
#line 2283 "typecheck.m"
      default:
#line 2283 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_FALSE;
#line 2283 "typecheck.m"
        break;
#line 2283 "typecheck.m"
      case (MR_Integer) 3:
#line 2283 "typecheck.m"
#line 2283 "typecheck.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) {
#line 2283 "typecheck.m"
          default:
#line 2283 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_FALSE;
#line 2283 "typecheck.m"
            break;
#line 2283 "typecheck.m"
          case (MR_Integer) 5:
#line 2280 "typecheck.m"
            {
#line 2281 "typecheck.m"
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int";
#line 2282 "typecheck.m"
              check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 0;
#line 2280 "typecheck.m"
              check_hlds__typecheck__succeeded = MR_TRUE;
#line 2280 "typecheck.m"
            }
#line 2283 "typecheck.m"
            break;
#line 2283 "typecheck.m"
          case (MR_Integer) 6:
#line 2284 "typecheck.m"
            {
#line 2285 "typecheck.m"
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "float";
#line 2286 "typecheck.m"
              check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 1;
#line 2284 "typecheck.m"
              check_hlds__typecheck__succeeded = MR_TRUE;
#line 2284 "typecheck.m"
            }
#line 2283 "typecheck.m"
            break;
#line 2283 "typecheck.m"
          case (MR_Integer) 8:
#line 2288 "typecheck.m"
            {
#line 2289 "typecheck.m"
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "string";
#line 2290 "typecheck.m"
              check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 2;
#line 2288 "typecheck.m"
              check_hlds__typecheck__succeeded = MR_TRUE;
#line 2288 "typecheck.m"
            }
#line 2283 "typecheck.m"
            break;
#line 2283 "typecheck.m"
        }
#line 2283 "typecheck.m"
        break;
#line 2283 "typecheck.m"
    }
#line 2278 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2278 "typecheck.m"
      {
#line 2292 "typecheck.m"
        {
#line 2292 "typecheck.m"
          MR_Word base;
#line 2292 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2292 "typecheck.m"
          *check_hlds__typecheck__ConsType_5 = base;
#line 2292 "typecheck.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinType_8));
#line 2292 "typecheck.m"
        }
#line 2292 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2278 "typecheck.m"
      }
#line 2278 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2278 "typecheck.m"
  }
#line 2275 "typecheck.m"
}

#line 2148 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 2148 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2148 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2148 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 2148 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2148 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2148 "typecheck.m"
{
#line 2151 "typecheck.m"
  while (MR_TRUE)
#line 2151 "typecheck.m"
    {
#line 2151 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2151 "typecheck.m"
      {
#line 2151 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2151 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2151 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2151 "typecheck.m"
        else
#line 2153 "typecheck.m"
          {
#line 2153 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2153 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2153 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 2153 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 2153 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_27;
#line 2153 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_28;

#line 2161 "typecheck.m"
            {
#line 2161 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 2162 "typecheck.m"
            {
#line 2162 "typecheck.m"
              hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_3, &check_hlds__typecheck__MaybeOldVarType_27, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_28);
            }
#line 2172 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2173 "typecheck.m"
              {
#line 2173 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_31;

#line 2174 "typecheck.m"
                {
#line 2174 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_28, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_31);
                }
#line 2175 "typecheck.m"
                {
#line 2175 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_31));
#line 2175 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2175 "typecheck.m"
                }
#line 2173 "typecheck.m"
              }
#line 2172 "typecheck.m"
            else
#line 2164 "typecheck.m"
              {
#line 2164 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_27, (MR_Integer) 0)));
#line 2165 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_30;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_39;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_40;
#line 2758 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_41;

#line 2759 "typecheck.m"
                {
#line 2759 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_39);
                }
#line 2760 "typecheck.m"
                {
#line 2760 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_40);
                }
#line 2761 "typecheck.m"
                {
#line 2761 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_29, check_hlds__typecheck__Type_3, check_hlds__typecheck__HeadTypeParams_39, check_hlds__typecheck__TypeBindings0_40, &check_hlds__typecheck__TypeBindings_41);
                }
#line 2758 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2758 "typecheck.m"
                  {
#line 2762 "typecheck.m"
                    {
#line 2762 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_41, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_30);
                    }
#line 2762 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2758 "typecheck.m"
                  }
#line 2165 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2168 "typecheck.m"
                  {
#line 2168 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_30));
#line 2168 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2168 "typecheck.m"
                  }
#line 2165 "typecheck.m"
                else
#line 2170 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2164 "typecheck.m"
              }
#line 2155 "typecheck.m"
            /* direct tailcall eliminated */
#line 2155 "typecheck.m"
            {
#line 2155 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 2155 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 2155 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2155 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2155 "typecheck.m"
            }
#line 2155 "typecheck.m"
            continue;
#line 2153 "typecheck.m"
          }
#line 2151 "typecheck.m"
      }
#line 2151 "typecheck.m"
      break;
#line 2151 "typecheck.m"
    }
#line 2148 "typecheck.m"
}

#line 2126 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalContext_9,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_10,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_11,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_12,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_13,
#line 2126 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_14,
#line 2126 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 2126 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 2126 "typecheck.m"
{
#line 2132 "typecheck.m"
  {
#line 2132 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2132 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_16;
#line 2136 "typecheck.m"
    MR_Word check_hlds__typecheck__V_17_17;
#line 2136 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;

#line 2133 "typecheck.m"
    {
#line 2133 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_13, check_hlds__typecheck__Var_11, check_hlds__typecheck__Type_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_16);
    }
#line 2135 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2135 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2135 "typecheck.m"
      {
#line 2136 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_13)) == (MR_mktag((MR_Integer) 1)));
#line 2136 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2136 "typecheck.m"
          {
#line 2136 "typecheck.m"
            check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_13, (MR_Integer) 0)));
#line 2136 "typecheck.m"
            check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_13, (MR_Integer) 1)));
#line 2136 "typecheck.m"
          }
#line 2135 "typecheck.m"
      }
#line 2134 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2138 "typecheck.m"
      {
#line 2138 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_19;
#line 2138 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_20;
#line 2138 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_21;
#line 2142 "typecheck.m"
        MR_Word check_hlds__typecheck__V_22_22;

#line 2138 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_14 = check_hlds__typecheck__TypeAssignSet0_13;
#line 2139 "typecheck.m"
        {
#line 2139 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ClauseContext_19);
        }
#line 2140 "typecheck.m"
        {
#line 2140 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_20 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_19, check_hlds__typecheck__GoalContext_9, check_hlds__typecheck__Context_10, check_hlds__typecheck__Var_11, check_hlds__typecheck__Type_12, check_hlds__typecheck__TypeAssignSet0_13);
        }
#line 2142 "typecheck.m"
        check_hlds__typecheck__Spec_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_20, (MR_Integer) 0)));
#line 2142 "typecheck.m"
        check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_20, (MR_Integer) 1)));
#line 2143 "typecheck.m"
        {
#line 2143 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_21, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
        }
#line 2138 "typecheck.m"
      }
#line 2134 "typecheck.m"
    else
#line 2145 "typecheck.m"
      {
#line 2145 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_14 = check_hlds__typecheck__TypeAssignSet1_16;
#line 2145 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 2145 "typecheck.m"
      }
#line 2132 "typecheck.m"
  }
#line 2126 "typecheck.m"
}

#line 2118 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
#line 2118 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 2118 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_8,
#line 2118 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11,
#line 2118 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12,
#line 2118 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 2118 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
#line 2118 "typecheck.m"
{
#line 2122 "typecheck.m"
  {
#line 2122 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2122 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;
#line 2122 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_28;
#line 2136 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 2136 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;

#line 2124 "typecheck.m"
    {
#line 2124 "typecheck.m"
      check_hlds__typecheck__V_16_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
    }
#line 2133 "typecheck.m"
    {
#line 2133 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, check_hlds__typecheck__Var_8, check_hlds__typecheck__V_16_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_28);
    }
#line 2135 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2135 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2135 "typecheck.m"
      {
#line 2136 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 2136 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2136 "typecheck.m"
          {
#line 2136 "typecheck.m"
            check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, (MR_Integer) 0)));
#line 2136 "typecheck.m"
            check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, (MR_Integer) 1)));
#line 2136 "typecheck.m"
          }
#line 2135 "typecheck.m"
      }
#line 2134 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2138 "typecheck.m"
      {
#line 2138 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_31;
#line 2138 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_32;
#line 2138 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_33;
#line 2142 "typecheck.m"
        MR_Word check_hlds__typecheck__V_34_34;

#line 2138 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11;
#line 2139 "typecheck.m"
        {
#line 2139 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, &check_hlds__typecheck__ClauseContext_31);
        }
#line 2140 "typecheck.m"
        {
#line 2140 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_32 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Context_7, check_hlds__typecheck__Var_8, check_hlds__typecheck__V_16_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11);
        }
#line 2142 "typecheck.m"
        check_hlds__typecheck__Spec_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_32, (MR_Integer) 0)));
#line 2142 "typecheck.m"
        check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_32, (MR_Integer) 1)));
#line 2143 "typecheck.m"
        {
#line 2143 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_33, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
        }
#line 2138 "typecheck.m"
      }
#line 2134 "typecheck.m"
    else
#line 2145 "typecheck.m"
      {
#line 2145 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12 = check_hlds__typecheck__TypeAssignSet1_28;
#line 2145 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_14 = check_hlds__typecheck__STATE_VARIABLE_Info_0_13;
#line 2145 "typecheck.m"
      }
#line 2122 "typecheck.m"
  }
#line 2118 "typecheck.m"
}

#line 2074 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_13,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_14,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_15,
#line 2074 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_16,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_17,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_18,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_19,
#line 2074 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_20,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_35,
#line 2074 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_36,
#line 2074 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37,
#line 2074 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38)
#line 2074 "typecheck.m"
{
#line 2083 "typecheck.m"
  {
#line 2083 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2083 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_23;
#line 2087 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 2087 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;

#line 2084 "typecheck.m"
    {
#line 2084 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_19, check_hlds__typecheck__Var_17, check_hlds__typecheck__Type_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_23);
    }
#line 2086 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2086 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2086 "typecheck.m"
      {
#line 2087 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_19)) == (MR_mktag((MR_Integer) 1)));
#line 2087 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2087 "typecheck.m"
          {
#line 2087 "typecheck.m"
            check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_19, (MR_Integer) 0)));
#line 2087 "typecheck.m"
            check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_19, (MR_Integer) 1)));
#line 2087 "typecheck.m"
          }
#line 2086 "typecheck.m"
      }
#line 2085 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2089 "typecheck.m"
      {
#line 2089 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_26;
#line 2089 "typecheck.m"
        MR_Word check_hlds__typecheck__GoalContext_27;
#line 2089 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_28;
#line 2089 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_29;
#line 2089 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeActualExpected_30;
#line 2089 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;

#line 2089 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_20 = check_hlds__typecheck__TypeAssignSet0_19;
#line 2090 "typecheck.m"
        {
#line 2090 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__Info_13, &check_hlds__typecheck__ClauseContext_26);
        }
#line 2092 "typecheck.m"
        {
#line 2092 "typecheck.m"
          check_hlds__typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2092 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_40_40, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorKind_15));
#line 2092 "typecheck.m"
        }
#line 2092 "typecheck.m"
        {
#line 2092 "typecheck.m"
          check_hlds__typecheck__GoalContext_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2092 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_27, 0) = ((MR_Box) (check_hlds__typecheck__V_40_40));
#line 2092 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_27, 1) = ((MR_Box) (check_hlds__typecheck__ArgNum_16));
#line 2092 "typecheck.m"
        }
#line 2093 "typecheck.m"
        {
#line 2093 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_28 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_26, check_hlds__typecheck__GoalContext_27, check_hlds__typecheck__Context_14, check_hlds__typecheck__Var_17, check_hlds__typecheck__Type_18, check_hlds__typecheck__TypeAssignSet0_19);
        }
#line 2095 "typecheck.m"
        check_hlds__typecheck__Spec_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_28, (MR_Integer) 0)));
#line 2095 "typecheck.m"
        check_hlds__typecheck__MaybeActualExpected_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_28, (MR_Integer) 1)));
#line 2097 "typecheck.m"
        {
#line 2097 "typecheck.m"
          MR_Word base;
#line 2097 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2097 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Specs_36 = base;
#line 2097 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Spec_29));
#line 2097 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_35));
#line 2097 "typecheck.m"
        }
#line 2100 "typecheck.m"
        if ((check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2099 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37;
#line 2100 "typecheck.m"
        else
#line 2105 "typecheck.m"
        if ((check_hlds__typecheck__MaybeActualExpected_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2104 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2105 "typecheck.m"
        else
#line 2106 "typecheck.m"
          {
#line 2106 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeErrors0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37, (MR_Integer) 0)));
#line 2106 "typecheck.m"
            MR_Word check_hlds__typecheck__ActualExpected_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeActualExpected_30, (MR_Integer) 0)));
#line 2106 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeError_33;
#line 2106 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeErrors_34;

#line 2107 "typecheck.m"
            {
#line 2107 "typecheck.m"
              check_hlds__typecheck__ArgVectorTypeError_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2107 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 0) = ((MR_Box) (check_hlds__typecheck__ArgNum_16));
#line 2107 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 1) = ((MR_Box) (check_hlds__typecheck__Var_17));
#line 2107 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 2) = ((MR_Box) (check_hlds__typecheck__ActualExpected_32));
#line 2107 "typecheck.m"
            }
#line 2109 "typecheck.m"
            {
#line 2109 "typecheck.m"
              check_hlds__typecheck__ArgVectorTypeErrors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2109 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_34, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeError_33));
#line 2109 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeErrors0_31));
#line 2109 "typecheck.m"
            }
#line 2111 "typecheck.m"
            {
#line 2111 "typecheck.m"
              MR_Word base;
#line 2111 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2111 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = base;
#line 2111 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeErrors_34));
#line 2111 "typecheck.m"
            }
#line 2106 "typecheck.m"
          }
#line 2089 "typecheck.m"
      }
#line 2085 "typecheck.m"
    else
#line 2115 "typecheck.m"
      {
#line 2115 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_20 = check_hlds__typecheck__TypeAssignSet1_23;
#line 2115 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37;
#line 2115 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Specs_36 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_35;
#line 2115 "typecheck.m"
      }
#line 2083 "typecheck.m"
  }
#line 2074 "typecheck.m"
}

#line 2049 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_2,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_3,
#line 2049 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_4,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__6_6,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_9,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_10,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12)
#line 2049 "typecheck.m"
{
#line 2057 "typecheck.m"
  while (MR_TRUE)
#line 2057 "typecheck.m"
    {
#line 2057 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2057 "typecheck.m"
      {
#line 2057 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2057 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2057 "typecheck.m"
          if ((check_hlds__typecheck__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2057 "typecheck.m"
            {
#line 2058 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
#line 2058 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Specs_10 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_9;
#line 2058 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2057 "typecheck.m"
            }
#line 2057 "typecheck.m"
          else
#line 2060 "typecheck.m"
            {
#line 2061 "typecheck.m"
              {
#line 2061 "typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
#line 2061 "typecheck.m"
                return;
              }
#line 2060 "typecheck.m"
            }
#line 2057 "typecheck.m"
        else
#line 2057 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2063 "typecheck.m"
          {
#line 2064 "typecheck.m"
            {
#line 2064 "typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
#line 2064 "typecheck.m"
              return;
            }
#line 2063 "typecheck.m"
          }
#line 2057 "typecheck.m"
        else
#line 2067 "typecheck.m"
          {
#line 2067 "typecheck.m"
            MR_Word check_hlds__typecheck__Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__6_6, (MR_Integer) 0)));
#line 2067 "typecheck.m"
            MR_Word check_hlds__typecheck__Types_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__6_6, (MR_Integer) 1)));
#line 2067 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79;
#line 2067 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_80_80;
#line 2067 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81;
#line 2067 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_82_82;
#line 2067 "typecheck.m"
            MR_Word check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1)));
#line 2067 "typecheck.m"
            MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 0)));

#line 2068 "typecheck.m"
            {
#line 2068 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(check_hlds__typecheck__Info_1, check_hlds__typecheck__Context_2, check_hlds__typecheck__ArgVectorKind_3, check_hlds__typecheck__ArgNum_4, check_hlds__typecheck__V_88_88, check_hlds__typecheck__Type_68, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79, check_hlds__typecheck__STATE_VARIABLE_Specs_0_9, &check_hlds__typecheck__STATE_VARIABLE_Specs_80_80, check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, &check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81);
            }
#line 2071 "typecheck.m"
            check_hlds__typecheck__V_82_82 = (check_hlds__typecheck__ArgNum_4 + (MR_Integer) 1);
#line 2070 "typecheck.m"
            /* direct tailcall eliminated */
#line 2070 "typecheck.m"
            {
#line 2070 "typecheck.m"
              MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_4 = check_hlds__typecheck__V_82_82;
#line 2070 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__5__tmp_copy_5 = check_hlds__typecheck__V_87_87;
#line 2070 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__6__tmp_copy_6 = check_hlds__typecheck__Types_69;
#line 2070 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79;
#line 2070 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_9 = check_hlds__typecheck__STATE_VARIABLE_Specs_80_80;
#line 2070 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0__tmp_copy_11 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81;

#line 2070 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0__tmp_copy_11;
#line 2070 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_0_9 = check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_9;
#line 2070 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7;
#line 2070 "typecheck.m"
              check_hlds__typecheck__HeadVar__6_6 = check_hlds__typecheck__HeadVar__6__tmp_copy_6;
#line 2070 "typecheck.m"
              check_hlds__typecheck__HeadVar__5_5 = check_hlds__typecheck__HeadVar__5__tmp_copy_5;
#line 2070 "typecheck.m"
              check_hlds__typecheck__ArgNum_4 = check_hlds__typecheck__ArgNum__tmp_copy_4;
#line 2070 "typecheck.m"
            }
#line 2070 "typecheck.m"
            continue;
#line 2067 "typecheck.m"
          }
#line 2057 "typecheck.m"
      }
#line 2057 "typecheck.m"
      break;
#line 2057 "typecheck.m"
    }
#line 2049 "typecheck.m"
}

#line 1945 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1945 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1945 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1945 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1945 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 1945 "typecheck.m"
{
#line 1948 "typecheck.m"
  while (MR_TRUE)
#line 1948 "typecheck.m"
    {
#line 1948 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1948 "typecheck.m"
      {
#line 1948 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1948 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1948 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__3_3;
#line 1948 "typecheck.m"
        else
#line 1950 "typecheck.m"
          {
#line 1950 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1950 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssignSets_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1950 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 0)));
#line 1950 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 1)));
#line 1950 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 2)));
#line 1950 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;
#line 1950 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_27;

#line 1963 "typecheck.m"
            {
#line 1963 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__VarTypes0_27);
            }
#line 1987 "typecheck.m"
            if ((check_hlds__typecheck__ArgTypes0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1988 "typecheck.m"
              {
#line 1989 "typecheck.m"
                {
#line 1989 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.arg_type_assign_var_has_type\'/6", (MR_String) "ArgTypes0 = []");
#line 1989 "typecheck.m"
                  return;
                }
#line 1988 "typecheck.m"
              }
#line 1987 "typecheck.m"
            else
#line 1965 "typecheck.m"
              {
#line 1965 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 0)));
#line 1965 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 1)));
#line 1965 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_30;
#line 1965 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_31;

#line 1966 "typecheck.m"
                {
#line 1966 "typecheck.m"
                  hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_28, &check_hlds__typecheck__MaybeOldVarType_30, check_hlds__typecheck__VarTypes0_27, &check_hlds__typecheck__VarTypes_31);
                }
#line 1980 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1981 "typecheck.m"
                  {
#line 1981 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_35;
#line 1981 "typecheck.m"
                    MR_Word check_hlds__typecheck__NewTypeAssign_41;

#line 1982 "typecheck.m"
                    {
#line 1982 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_31, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign_35);
                    }
#line 1983 "typecheck.m"
                    {
#line 1983 "typecheck.m"
                      check_hlds__typecheck__NewTypeAssign_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1983 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_35));
#line 1983 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1983 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1983 "typecheck.m"
                    }
#line 1985 "typecheck.m"
                    {
#line 1985 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_41));
#line 1985 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1985 "typecheck.m"
                    }
#line 1981 "typecheck.m"
                  }
#line 1980 "typecheck.m"
                else
#line 1969 "typecheck.m"
                  {
#line 1969 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_30, (MR_Integer) 0)));
#line 1970 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_33;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_46;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_47;
#line 2758 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_48;

#line 2759 "typecheck.m"
                    {
#line 2759 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__HeadTypeParams_46);
                    }
#line 2760 "typecheck.m"
                    {
#line 2760 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeBindings0_47);
                    }
#line 2761 "typecheck.m"
                    {
#line 2761 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_32, check_hlds__typecheck__Type_28, check_hlds__typecheck__HeadTypeParams_46, check_hlds__typecheck__TypeBindings0_47, &check_hlds__typecheck__TypeBindings_48);
                    }
#line 2758 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2758 "typecheck.m"
                      {
#line 2762 "typecheck.m"
                        {
#line 2762 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_48, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign1_33);
                        }
#line 2762 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2758 "typecheck.m"
                      }
#line 1970 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1975 "typecheck.m"
                      {
#line 1975 "typecheck.m"
                        MR_Word check_hlds__typecheck__NewTypeAssign_34;

#line 1974 "typecheck.m"
                        {
#line 1974 "typecheck.m"
                          check_hlds__typecheck__NewTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1974 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_33));
#line 1974 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1974 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1974 "typecheck.m"
                        }
#line 1976 "typecheck.m"
                        {
#line 1976 "typecheck.m"
                          check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_34));
#line 1976 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1976 "typecheck.m"
                        }
#line 1975 "typecheck.m"
                      }
#line 1970 "typecheck.m"
                    else
#line 1970 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = check_hlds__typecheck__HeadVar__3_3;
#line 1969 "typecheck.m"
                  }
#line 1965 "typecheck.m"
              }
#line 1954 "typecheck.m"
            /* direct tailcall eliminated */
#line 1954 "typecheck.m"
            {
#line 1954 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ArgsTypeAssignSets_10;
#line 1954 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;

#line 1954 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 1954 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1954 "typecheck.m"
            }
#line 1954 "typecheck.m"
            continue;
#line 1950 "typecheck.m"
          }
#line 1948 "typecheck.m"
      }
#line 1948 "typecheck.m"
      break;
#line 1948 "typecheck.m"
    }
#line 1945 "typecheck.m"
}

#line 1929 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1929 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1929 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2)
#line 1929 "typecheck.m"
{
#line 1931 "typecheck.m"
  {
#line 1931 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1931 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1931 "typecheck.m"
      *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1931 "typecheck.m"
    else
#line 1933 "typecheck.m"
      {
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign_5;
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 0)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 1)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 2)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__Args_11;
#line 1943 "typecheck.m"
        MR_Word * check_hlds__typecheck__AddrArgTypeAssigns_15;

#line 1937 "typecheck.m"
        if ((check_hlds__typecheck__Args0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1938 "typecheck.m"
          {
#line 1940 "typecheck.m"
            {
#line 1940 "typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1940 "typecheck.m"
              return;
            }
#line 1938 "typecheck.m"
          }
#line 1937 "typecheck.m"
        else
#line 1936 "typecheck.m"
          {
#line 1936 "typecheck.m"
            MR_Word check_hlds__typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 0)));

#line 1936 "typecheck.m"
            check_hlds__typecheck__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 1)));
#line 1936 "typecheck.m"
          }
#line 1942 "typecheck.m"
        {
#line 1942 "typecheck.m"
          check_hlds__typecheck__ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1942 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_7));
#line 1942 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 1) = ((MR_Box) (check_hlds__typecheck__Args_11));
#line 1942 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_9));
#line 1942 "typecheck.m"
        }
#line 1933 "typecheck.m"
        {
#line 1933 "typecheck.m"
          MR_Word base;
#line 1933 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1933 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_5));
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 1933 "typecheck.m"
        }
#line 1933 "typecheck.m"
        check_hlds__typecheck__AddrArgTypeAssigns_15 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1));
#line 1943 "typecheck.m"
        {
#line 1943 "typecheck.m"
          check_hlds__typecheck__LCMCpr_skip_arg_1_2_p_0(check_hlds__typecheck__ArgTypeAssigns0_4, check_hlds__typecheck__AddrArgTypeAssigns_15);
        }
#line 1933 "typecheck.m"
      }
#line 1931 "typecheck.m"
  }
#line 1929 "typecheck.m"
}

#line 1890 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_1,
#line 1890 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1890 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_6,
#line 1890 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1890 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
#line 1890 "typecheck.m"
{
#line 1896 "typecheck.m"
  while (MR_TRUE)
#line 1896 "typecheck.m"
    {
#line 1896 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1896 "typecheck.m"
      {
#line 1896 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1896 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1896 "typecheck.m"
          {
#line 1897 "typecheck.m"
            {
#line 1897 "typecheck.m"
              *check_hlds__typecheck__TypeAssignSet_6 = check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck__HeadVar__5_5);
            }
#line 1896 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1896 "typecheck.m"
          }
#line 1896 "typecheck.m"
        else
#line 1900 "typecheck.m"
          {
#line 1900 "typecheck.m"
            MR_Word check_hlds__typecheck__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 1900 "typecheck.m"
            MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 1900 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_26;
#line 1900 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;
#line 1900 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_30_30;
#line 1900 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_41;
#line 1916 "typecheck.m"
            MR_Word check_hlds__typecheck__V_42_42;
#line 1916 "typecheck.m"
            MR_Word check_hlds__typecheck__V_43_43;

#line 1914 "typecheck.m"
            {
#line 1914 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__Var_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgTypeAssignSet1_41);
            }
#line 1917 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgTypeAssignSet1_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1917 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1917 "typecheck.m"
              {
#line 1918 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 1918 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1918 "typecheck.m"
                  {
#line 1918 "typecheck.m"
                    check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 0)));
#line 1918 "typecheck.m"
                    check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1)));
#line 1918 "typecheck.m"
                  }
#line 1917 "typecheck.m"
              }
#line 1916 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1920 "typecheck.m"
              {
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalContext_25;
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_44;
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_45;
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssign_50;
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssigns_51;
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_52;
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__Args0_53;
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_54;
#line 1920 "typecheck.m"
                MR_Word check_hlds__typecheck__Args_56;

#line 1901 "typecheck.m"
                {
#line 1901 "typecheck.m"
                  check_hlds__typecheck__GoalContext_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_25, 0) = ((MR_Box) (check_hlds__typecheck__VarVectorKind_1));
#line 1901 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_25, 1) = ((MR_Box) (check_hlds__typecheck__ArgNum_2));
#line 1901 "typecheck.m"
                }
#line 1934 "typecheck.m"
                check_hlds__typecheck__TypeAssign_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 0)));
#line 1934 "typecheck.m"
                check_hlds__typecheck__Args0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 1)));
#line 1934 "typecheck.m"
                check_hlds__typecheck__Constraints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 2)));
#line 1937 "typecheck.m"
                if ((check_hlds__typecheck__Args0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1938 "typecheck.m"
                  {
#line 1940 "typecheck.m"
                    {
#line 1940 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1940 "typecheck.m"
                      return;
                    }
#line 1938 "typecheck.m"
                  }
#line 1937 "typecheck.m"
                else
#line 1936 "typecheck.m"
                  {
#line 1936 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_53, (MR_Integer) 0)));

#line 1936 "typecheck.m"
                    check_hlds__typecheck__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_53, (MR_Integer) 1)));
#line 1936 "typecheck.m"
                  }
#line 1942 "typecheck.m"
                {
#line 1942 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssign_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1942 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_52));
#line 1942 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 1) = ((MR_Box) (check_hlds__typecheck__Args_56));
#line 1942 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_54));
#line 1942 "typecheck.m"
                }
#line 1943 "typecheck.m"
                {
#line 1943 "typecheck.m"
                  check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__V_43_43, &check_hlds__typecheck__ArgTypeAssigns_51);
                }
#line 1933 "typecheck.m"
                {
#line 1933 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssignSet1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1933 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_50));
#line 1933 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_51));
#line 1933 "typecheck.m"
                }
#line 1921 "typecheck.m"
                {
#line 1921 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__ClauseContext_44);
                }
#line 1922 "typecheck.m"
                {
#line 1922 "typecheck.m"
                  check_hlds__typecheck__Spec_45 = check_hlds__typecheck_errors__report_error_arg_var_5_f_0(check_hlds__typecheck__ClauseContext_44, check_hlds__typecheck__GoalContext_25, check_hlds__typecheck__Context_3, check_hlds__typecheck__Var_20, check_hlds__typecheck__HeadVar__5_5);
                }
#line 1924 "typecheck.m"
                {
#line 1924 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_45, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
                }
#line 1920 "typecheck.m"
              }
#line 1916 "typecheck.m"
            else
#line 1926 "typecheck.m"
              {
#line 1926 "typecheck.m"
                check_hlds__typecheck__ArgTypeAssignSet1_26 = check_hlds__typecheck__ArgTypeAssignSet1_41;
#line 1926 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1926 "typecheck.m"
              }
#line 1904 "typecheck.m"
            check_hlds__typecheck__V_30_30 = (check_hlds__typecheck__ArgNum_2 + (MR_Integer) 1);
#line 1904 "typecheck.m"
            /* direct tailcall eliminated */
#line 1904 "typecheck.m"
            {
#line 1904 "typecheck.m"
              MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_2 = check_hlds__typecheck__V_30_30;
#line 1904 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__4__tmp_copy_4 = check_hlds__typecheck__Vars_21;
#line 1904 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__5__tmp_copy_5 = check_hlds__typecheck__ArgTypeAssignSet1_26;
#line 1904 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_Info_29_29;

#line 1904 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_0_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 1904 "typecheck.m"
              check_hlds__typecheck__HeadVar__5_5 = check_hlds__typecheck__HeadVar__5__tmp_copy_5;
#line 1904 "typecheck.m"
              check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__4__tmp_copy_4;
#line 1904 "typecheck.m"
              check_hlds__typecheck__ArgNum_2 = check_hlds__typecheck__ArgNum__tmp_copy_2;
#line 1904 "typecheck.m"
            }
#line 1904 "typecheck.m"
            continue;
#line 1900 "typecheck.m"
          }
#line 1896 "typecheck.m"
      }
#line 1896 "typecheck.m"
      break;
#line 1896 "typecheck.m"
    }
#line 1890 "typecheck.m"
}

#line 1847 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1847 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1847 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7)
#line 1847 "typecheck.m"
{
#line 1851 "typecheck.m"
  while (MR_TRUE)
#line 1851 "typecheck.m"
    {
#line 1851 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1851 "typecheck.m"
      {
#line 1851 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1851 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1851 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6;
#line 1851 "typecheck.m"
        else
#line 1853 "typecheck.m"
          {
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_22;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentArgTypes_23;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__Renaming_24;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentExistQVars_25;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentConstraints_26;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams0_27;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams_28;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_29;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__NewArgTypeAssign_30;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_42;
#line 1853 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_43;

#line 1882 "typecheck.m"
            {
#line 1882 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeVarSet0_42);
            }
#line 1883 "typecheck.m"
            {
#line 1883 "typecheck.m"
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_42, check_hlds__typecheck__PredTypeVarSet_2, &check_hlds__typecheck__TypeVarSet_43, &check_hlds__typecheck__Renaming_24);
            }
#line 1884 "typecheck.m"
            {
#line 1884 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredArgTypes_4, &check_hlds__typecheck__ParentArgTypes_23);
            }
#line 1886 "typecheck.m"
            {
#line 1886 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_43, check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeAssign1_22);
            }
#line 1857 "typecheck.m"
            {
#line 1857 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredExistQVars_3, &check_hlds__typecheck__ParentExistQVars_25);
            }
#line 1859 "typecheck.m"
            {
#line 1859 "typecheck.m"
              check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredConstraints_5, &check_hlds__typecheck__ParentConstraints_26);
            }
#line 1865 "typecheck.m"
            {
#line 1865 "typecheck.m"
              check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__HeadTypeParams0_27);
            }
#line 1866 "typecheck.m"
            {
#line 1866 "typecheck.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ParentExistQVars_25, check_hlds__typecheck__HeadTypeParams0_27, &check_hlds__typecheck__HeadTypeParams_28);
            }
#line 1867 "typecheck.m"
            {
#line 1867 "typecheck.m"
              check_hlds__type_assign__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_28, check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__TypeAssign_29);
            }
#line 1870 "typecheck.m"
            {
#line 1870 "typecheck.m"
              check_hlds__typecheck__NewArgTypeAssign_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1870 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_29));
#line 1870 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 1) = ((MR_Box) (check_hlds__typecheck__ParentArgTypes_23));
#line 1870 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 2) = ((MR_Box) (check_hlds__typecheck__ParentConstraints_26));
#line 1870 "typecheck.m"
            }
#line 1872 "typecheck.m"
            {
#line 1872 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1872 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 0) = ((MR_Box) (check_hlds__typecheck__NewArgTypeAssign_30));
#line 1872 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6));
#line 1872 "typecheck.m"
            }
#line 1873 "typecheck.m"
            /* direct tailcall eliminated */
#line 1873 "typecheck.m"
            {
#line 1873 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_16;
#line 1873 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;

#line 1873 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6;
#line 1873 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1873 "typecheck.m"
            }
#line 1873 "typecheck.m"
            continue;
#line 1853 "typecheck.m"
          }
#line 1851 "typecheck.m"
      }
#line 1851 "typecheck.m"
      break;
#line 1851 "typecheck.m"
    }
#line 1847 "typecheck.m"
}

#line 1803 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1803 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1803 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7)
#line 1803 "typecheck.m"
{
#line 1807 "typecheck.m"
  while (MR_TRUE)
#line 1807 "typecheck.m"
    {
#line 1807 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1807 "typecheck.m"
      {
#line 1807 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1807 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1808 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6;
#line 1807 "typecheck.m"
        else
#line 1810 "typecheck.m"
          {
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_22;
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_23;
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_24;
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_25;
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_26;
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarSet_27;
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__PredConstraints_28;
#line 1810 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;
#line 1811 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_22;

#line 1811 "typecheck.m"
            {
#line 1811 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__HeadVar__2_2, ((MR_Box) (check_hlds__typecheck__PredId_15)), &check_hlds__typecheck__conv0_PredInfo_22);
            }
#line 1811 "typecheck.m"
            check_hlds__typecheck__PredInfo_22 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_22);
#line 1812 "typecheck.m"
            {
#line 1812 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredTypeVarSet_23, &check_hlds__typecheck__PredExistQVars_24, &check_hlds__typecheck__PredArgTypes_25);
            }
#line 1814 "typecheck.m"
            {
#line 1814 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredClassContext_26);
            }
#line 1815 "typecheck.m"
            {
#line 1815 "typecheck.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__TVarSet_27);
            }
#line 1816 "typecheck.m"
            {
#line 1816 "typecheck.m"
              hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__TVarSet_27, check_hlds__typecheck__HeadVar__4_4, check_hlds__typecheck__PredClassContext_26, &check_hlds__typecheck__PredConstraints_28);
            }
#line 1818 "typecheck.m"
            {
#line 1818 "typecheck.m"
              check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__PredTypeVarSet_23, check_hlds__typecheck__PredExistQVars_24, check_hlds__typecheck__PredArgTypes_25, check_hlds__typecheck__PredConstraints_28, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6, &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31);
            }
#line 1820 "typecheck.m"
            /* direct tailcall eliminated */
#line 1820 "typecheck.m"
            {
#line 1820 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__PredIds_16;
#line 1820 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;

#line 1820 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6;
#line 1820 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1820 "typecheck.m"
            }
#line 1820 "typecheck.m"
            continue;
#line 1810 "typecheck.m"
          }
#line 1807 "typecheck.m"
      }
#line 1807 "typecheck.m"
      break;
#line 1807 "typecheck.m"
    }
#line 1803 "typecheck.m"
}

#line 2046 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2046 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2046 "typecheck.m"
{
#line 2046 "typecheck.m"
  {
#line 2046 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2046 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_HeadVar__3_3;

#line 2046 "typecheck.m"
    {
#line 2046 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv1_HeadVar__3_3);
    }
#line 2046 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv1_HeadVar__3_3));
#line 2046 "typecheck.m"
  }
#line 2046 "typecheck.m"
}

#line 1743 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_10,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_13,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27,
#line 1743 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28,
#line 1743 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_29,
#line 1743 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_30)
#line 1743 "typecheck.m"
{
#line 1749 "typecheck.m"
  {
#line 1749 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1749 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_17;
#line 1749 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_18;
#line 1749 "typecheck.m"
    MR_Word check_hlds__typecheck__Preds_19;
#line 1749 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_20;
#line 1749 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTypeVarSet_21;
#line 1749 "typecheck.m"
    MR_Word check_hlds__typecheck__PredExistQVars_22;
#line 1749 "typecheck.m"
    MR_Word check_hlds__typecheck__PredArgTypes_23;
#line 1749 "typecheck.m"
    MR_Word check_hlds__typecheck__PredClassContext_24;
#line 1753 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_PredInfo_20;
#line 1763 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1763 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32;

#line 1750 "typecheck.m"
    {
#line 1750 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, &check_hlds__typecheck__ModuleInfo_17);
    }
#line 1751 "typecheck.m"
    {
#line 1751 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__PredicateTable_18);
    }
#line 1752 "typecheck.m"
    {
#line 1752 "typecheck.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_18, &check_hlds__typecheck__Preds_19);
    }
#line 1753 "typecheck.m"
    {
#line 1753 "typecheck.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_19, ((MR_Box) (check_hlds__typecheck__PredId_13)), &check_hlds__typecheck__conv0_PredInfo_20);
    }
#line 1753 "typecheck.m"
    check_hlds__typecheck__PredInfo_20 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_20);
#line 1754 "typecheck.m"
    {
#line 1754 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_20, &check_hlds__typecheck__PredTypeVarSet_21, &check_hlds__typecheck__PredExistQVars_22, &check_hlds__typecheck__PredArgTypes_23);
    }
#line 1756 "typecheck.m"
    {
#line 1756 "typecheck.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_20, &check_hlds__typecheck__PredClassContext_24);
    }
#line 1763 "typecheck.m"
    {
#line 1763 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__PredTypeVarSet_21);
    }
#line 1763 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1763 "typecheck.m"
      {
#line 1764 "typecheck.m"
        check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_24, (MR_Integer) 0)));
#line 1764 "typecheck.m"
        check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_24, (MR_Integer) 1)));
#line 1764 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1763 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1764 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1763 "typecheck.m"
      }
#line 1762 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2033 "typecheck.m"
      {
#line 2033 "typecheck.m"
        MR_Word check_hlds__typecheck__Specs_51;
#line 2033 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_52;
#line 2037 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgVectorTypeErrors_53;
#line 2038 "typecheck.m"
        MR_Word check_hlds__typecheck__V_64_64;
#line 2039 "typecheck.m"
        MR_Word check_hlds__typecheck__V_54_54;
#line 2039 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 2039 "typecheck.m"
        MR_Word check_hlds__typecheck__V_56_56;

#line 2034 "typecheck.m"
        {
#line 2034 "typecheck.m"
          check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__Context_11, check_hlds__typecheck__ArgVectorKind_10, (MR_Integer) 1, check_hlds__typecheck__Args_14, check_hlds__typecheck__PredArgTypes_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_51, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_52);
        }
#line 2038 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_52)) == (MR_mktag((MR_Integer) 1)));
#line 2038 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2038 "typecheck.m"
          {
#line 2038 "typecheck.m"
            check_hlds__typecheck__ArgVectorTypeErrors_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_52, (MR_Integer) 0)));
#line 2039 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_53)) == (MR_mktag((MR_Integer) 1)));
#line 2039 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2039 "typecheck.m"
              {
#line 2039 "typecheck.m"
                check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_53, (MR_Integer) 0)));
#line 2039 "typecheck.m"
                check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_53, (MR_Integer) 1)));
#line 2039 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 2039 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2039 "typecheck.m"
                  {
#line 2039 "typecheck.m"
                    check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, (MR_Integer) 0)));
#line 2039 "typecheck.m"
                    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, (MR_Integer) 1)));
#line 2039 "typecheck.m"
                  }
#line 2039 "typecheck.m"
              }
#line 2038 "typecheck.m"
          }
#line 2037 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2041 "typecheck.m"
          {
#line 2041 "typecheck.m"
            MR_Word check_hlds__typecheck__ClauseContext_57;
#line 2041 "typecheck.m"
            MR_Word check_hlds__typecheck__AllArgsSpec_58;

#line 2041 "typecheck.m"
            {
#line 2041 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, &check_hlds__typecheck__ClauseContext_57);
            }
#line 2042 "typecheck.m"
            {
#line 2042 "typecheck.m"
              check_hlds__typecheck__AllArgsSpec_58 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_57, check_hlds__typecheck__Context_11, check_hlds__typecheck__ArgVectorKind_10, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, check_hlds__typecheck__ArgVectorTypeErrors_53);
            }
#line 2044 "typecheck.m"
            {
#line 2044 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_58, check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__STATE_VARIABLE_Info_30);
            }
#line 2041 "typecheck.m"
          }
#line 2037 "typecheck.m"
        else
#line 2046 "typecheck.m"
          {
#line 2046 "typecheck.m"
            MR_Box check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30;

#line 2046 "typecheck.m"
            {
#line 2046 "typecheck.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[4], check_hlds__typecheck__Specs_51, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_29)), &check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30);
            }
#line 2046 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_30 = ((MR_Word) check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30);
#line 2046 "typecheck.m"
          }
#line 2033 "typecheck.m"
      }
#line 1762 "typecheck.m"
    else
#line 1769 "typecheck.m"
      {
#line 1769 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassTable_25;
#line 1769 "typecheck.m"
        MR_Word check_hlds__typecheck__PredConstraints_26;
#line 1769 "typecheck.m"
        MR_Word check_hlds__typecheck__V_35_35;
#line 1769 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_85;

#line 1769 "typecheck.m"
        {
#line 1769 "typecheck.m"
          hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__ClassTable_25);
        }
#line 1770 "typecheck.m"
        {
#line 1770 "typecheck.m"
          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_25, check_hlds__typecheck__PredTypeVarSet_21, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__PredClassContext_24, &check_hlds__typecheck__PredConstraints_26);
        }
#line 1772 "typecheck.m"
        {
#line 1772 "typecheck.m"
          check_hlds__typecheck__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorKind_10));
#line 1772 "typecheck.m"
        }
#line 1842 "typecheck.m"
        {
#line 1842 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27, check_hlds__typecheck__PredTypeVarSet_21, check_hlds__typecheck__PredExistQVars_22, check_hlds__typecheck__PredArgTypes_23, check_hlds__typecheck__PredConstraints_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_85);
        }
#line 1844 "typecheck.m"
        {
#line 1844 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__V_35_35, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Args_14, check_hlds__typecheck__ArgsTypeAssignSet_85, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__STATE_VARIABLE_Info_30);
        }
#line 1769 "typecheck.m"
      }
#line 1749 "typecheck.m"
  }
#line 1743 "typecheck.m"
}

#line 1689 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__SimpleCallId_10,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_13,
#line 1689 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_14,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31,
#line 1689 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_33,
#line 1689 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_34)
#line 1689 "typecheck.m"
{
#line 1695 "typecheck.m"
  {
#line 1695 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1695 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_17;
#line 1695 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_18;
#line 1695 "typecheck.m"
    MR_Word check_hlds__typecheck__PorF_19;
#line 1695 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_20;
#line 1695 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_21;
#line 1695 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_22;
#line 1695 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_23;

#line 1697 "typecheck.m"
    {
#line 1697 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__ModuleInfo_17);
    }
#line 1698 "typecheck.m"
    {
#line 1698 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__PredicateTable_18);
    }
#line 1699 "typecheck.m"
    check_hlds__typecheck__PorF_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 0)));
#line 1699 "typecheck.m"
    check_hlds__typecheck__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 1)));
#line 1699 "typecheck.m"
    check_hlds__typecheck__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 2)));
#line 1700 "typecheck.m"
    {
#line 1700 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__IsFullyQualified_22);
    }
#line 1701 "typecheck.m"
    {
#line 1701 "typecheck.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(check_hlds__typecheck__PredicateTable_18, check_hlds__typecheck__IsFullyQualified_22, check_hlds__typecheck__PorF_19, check_hlds__typecheck__SymName_20, check_hlds__typecheck__Arity_21, &check_hlds__typecheck__PredIds_23);
    }
#line 1709 "typecheck.m"
    if ((check_hlds__typecheck__PredIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1704 "typecheck.m"
      {
#line 1704 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_24;
#line 1704 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_25;

#line 1705 "typecheck.m"
        {
#line 1705 "typecheck.m"
          *check_hlds__typecheck__PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 1706 "typecheck.m"
        {
#line 1706 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__ClauseContext_24);
        }
#line 1707 "typecheck.m"
        {
#line 1707 "typecheck.m"
          check_hlds__typecheck__Spec_25 = check_hlds__typecheck_errors__report_pred_call_error_3_f_0(check_hlds__typecheck__ClauseContext_24, check_hlds__typecheck__Context_11, check_hlds__typecheck__SimpleCallId_10);
        }
#line 1708 "typecheck.m"
        {
#line 1708 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_25, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, check_hlds__typecheck__STATE_VARIABLE_Info_34);
        }
#line 1704 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31;
#line 1704 "typecheck.m"
      }
#line 1709 "typecheck.m"
    else
#line 1710 "typecheck.m"
      {
#line 1710 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 0)));
#line 1710 "typecheck.m"
        MR_Word check_hlds__typecheck__TailPredIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 1)));
#line 1710 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37;
#line 1710 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_38_38;

#line 1720 "typecheck.m"
        if ((check_hlds__typecheck__TailPredIds_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1712 "typecheck.m"
          {
#line 1712 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorKind_28;

#line 1716 "typecheck.m"
            *check_hlds__typecheck__PredId_14 = check_hlds__typecheck__HeadPredId_26;
#line 1717 "typecheck.m"
            {
#line 1717 "typecheck.m"
              check_hlds__typecheck__ArgVectorKind_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1717 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorKind_28, 0) = ((MR_Box) (*check_hlds__typecheck__PredId_14));
#line 1717 "typecheck.m"
            }
#line 1718 "typecheck.m"
            {
#line 1718 "typecheck.m"
              check_hlds__typecheck__typecheck_call_pred_id_9_p_0(check_hlds__typecheck__ArgVectorKind_28, check_hlds__typecheck__Context_11, check_hlds__typecheck__GoalId_12, *check_hlds__typecheck__PredId_14, check_hlds__typecheck__Args_13, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
            }
#line 1712 "typecheck.m"
          }
#line 1720 "typecheck.m"
        else
#line 1721 "typecheck.m"
          {
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__Symbol_52;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_53;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassTable_54;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredicateTable_55;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_56;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssignSet_57;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__VarVectorKind_58;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_59;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__V_61_61;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_71;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_72;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_78;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_79;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_80;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_81;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_82;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarSet_83;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__PredConstraints_84;
#line 1721 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87;
#line 1811 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_78;

#line 1784 "typecheck.m"
            {
#line 1784 "typecheck.m"
              check_hlds__typecheck__Symbol_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1784 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_52, 0) = ((MR_Box) (check_hlds__typecheck__SimpleCallId_10));
#line 1784 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_52, 1) = ((MR_Box) (check_hlds__typecheck__PredIds_23));
#line 1784 "typecheck.m"
            }
#line 1785 "typecheck.m"
            {
#line 1785 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_52, check_hlds__typecheck__Context_11, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__STATE_VARIABLE_Info_27_59);
            }
#line 1790 "typecheck.m"
            {
#line 1790 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_27_59, &check_hlds__typecheck__ModuleInfo_53);
            }
#line 1791 "typecheck.m"
            {
#line 1791 "typecheck.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_53, &check_hlds__typecheck__ClassTable_54);
            }
#line 1792 "typecheck.m"
            {
#line 1792 "typecheck.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_53, &check_hlds__typecheck__PredicateTable_55);
            }
#line 1793 "typecheck.m"
            {
#line 1793 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_55, &check_hlds__typecheck__Preds_56);
            }
#line 1809 "typecheck.m"
            check_hlds__typecheck__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 0)));
#line 1809 "typecheck.m"
            check_hlds__typecheck__PredIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 1)));
#line 1811 "typecheck.m"
            {
#line 1811 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_56, ((MR_Box) (check_hlds__typecheck__PredId_71)), &check_hlds__typecheck__conv0_PredInfo_78);
            }
#line 1811 "typecheck.m"
            check_hlds__typecheck__PredInfo_78 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_78);
#line 1812 "typecheck.m"
            {
#line 1812 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__PredTypeVarSet_79, &check_hlds__typecheck__PredExistQVars_80, &check_hlds__typecheck__PredArgTypes_81);
            }
#line 1814 "typecheck.m"
            {
#line 1814 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__PredClassContext_82);
            }
#line 1815 "typecheck.m"
            {
#line 1815 "typecheck.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__TVarSet_83);
            }
#line 1816 "typecheck.m"
            {
#line 1816 "typecheck.m"
              hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_54, check_hlds__typecheck__TVarSet_83, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__PredClassContext_82, &check_hlds__typecheck__PredConstraints_84);
            }
#line 1818 "typecheck.m"
            {
#line 1818 "typecheck.m"
              check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, check_hlds__typecheck__PredTypeVarSet_79, check_hlds__typecheck__PredExistQVars_80, check_hlds__typecheck__PredArgTypes_81, check_hlds__typecheck__PredConstraints_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87);
            }
#line 1820 "typecheck.m"
            {
#line 1820 "typecheck.m"
              check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(check_hlds__typecheck__PredIds_72, check_hlds__typecheck__Preds_56, check_hlds__typecheck__ClassTable_54, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87, &check_hlds__typecheck__ArgsTypeAssignSet_57);
            }
#line 1799 "typecheck.m"
            {
#line 1799 "typecheck.m"
              check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1799 "typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__SimpleCallId_10));
#line 1799 "typecheck.m"
            }
#line 1799 "typecheck.m"
            {
#line 1799 "typecheck.m"
              check_hlds__typecheck__VarVectorKind_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1799 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__VarVectorKind_58, 0) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 1799 "typecheck.m"
            }
#line 1800 "typecheck.m"
            {
#line 1800 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_58, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Args_13, check_hlds__typecheck__ArgsTypeAssignSet_57, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_Info_27_59, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
            }
#line 1731 "typecheck.m"
            {
#line 1731 "typecheck.m"
              *check_hlds__typecheck__PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1721 "typecheck.m"
          }
#line 1738 "typecheck.m"
        {
#line 1738 "typecheck.m"
          check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_11, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32, check_hlds__typecheck__STATE_VARIABLE_Info_38_38, check_hlds__typecheck__STATE_VARIABLE_Info_34);
        }
#line 1710 "typecheck.m"
      }
#line 1695 "typecheck.m"
  }
#line 1689 "typecheck.m"
}

#line 2046 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2046 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2046 "typecheck.m"
{
#line 2046 "typecheck.m"
  {
#line 2046 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2046 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__3_3;

#line 2046 "typecheck.m"
    {
#line 2046 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_HeadVar__3_3);
    }
#line 2046 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__3_3));
#line 2046 "typecheck.m"
  }
#line 2046 "typecheck.m"
}

#line 1662 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
#line 1662 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_8,
#line 1662 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_9,
#line 1662 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_10,
#line 1662 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1662 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1662 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1662 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1662 "typecheck.m"
{
#line 1666 "typecheck.m"
  {
#line 1666 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1666 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_13;
#line 1666 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSet_14;
#line 1666 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSpecMap_15;
#line 1669 "typecheck.m"
    MR_String check_hlds__typecheck__V_30_30;
#line 1670 "typecheck.m"
    MR_Word check_hlds__typecheck__EventArgTypes_16;

#line 1667 "typecheck.m"
    {
#line 1667 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ModuleInfo_13);
    }
#line 1668 "typecheck.m"
    {
#line 1668 "typecheck.m"
      hlds__hlds_module__module_info_get_event_set_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__EventSet_14);
    }
#line 1669 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_14, (MR_Integer) 0)));
#line 1669 "typecheck.m"
    check_hlds__typecheck__EventSpecMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_14, (MR_Integer) 1)));
#line 1670 "typecheck.m"
    {
#line 1670 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__prog_event__event_arg_types_3_p_0(check_hlds__typecheck__EventSpecMap_15, check_hlds__typecheck__EventName_9, &check_hlds__typecheck__EventArgTypes_16);
    }
#line 1670 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1671 "typecheck.m"
      {
#line 1671 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumArgs_17;
#line 1671 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumEventArgTypes_18;

#line 1671 "typecheck.m"
        {
#line 1671 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_10, &check_hlds__typecheck__NumArgs_17);
        }
#line 1672 "typecheck.m"
        {
#line 1672 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__EventArgTypes_16, &check_hlds__typecheck__NumEventArgTypes_18);
        }
#line 1673 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumArgs_17 == check_hlds__typecheck__NumEventArgTypes_18);
#line 1673 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1674 "typecheck.m"
          {
#line 1674 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorKind_19;
#line 1674 "typecheck.m"
            MR_Word check_hlds__typecheck__Specs_43;
#line 1674 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_44;
#line 2037 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeErrors_45;
#line 2038 "typecheck.m"
            MR_Word check_hlds__typecheck__V_56_56;
#line 2039 "typecheck.m"
            MR_Word check_hlds__typecheck__V_46_46;
#line 2039 "typecheck.m"
            MR_Word check_hlds__typecheck__V_47_47;
#line 2039 "typecheck.m"
            MR_Word check_hlds__typecheck__V_48_48;

#line 1674 "typecheck.m"
            {
#line 1674 "typecheck.m"
              check_hlds__typecheck__ArgVectorKind_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1674 "typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_19, 1) = ((MR_Box) (check_hlds__typecheck__EventName_9));
#line 1674 "typecheck.m"
            }
#line 2034 "typecheck.m"
            {
#line 2034 "typecheck.m"
              check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__Context_8, check_hlds__typecheck__ArgVectorKind_19, (MR_Integer) 1, check_hlds__typecheck__Args_10, check_hlds__typecheck__EventArgTypes_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_43, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_44);
            }
#line 2038 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_44)) == (MR_mktag((MR_Integer) 1)));
#line 2038 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2038 "typecheck.m"
              {
#line 2038 "typecheck.m"
                check_hlds__typecheck__ArgVectorTypeErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_44, (MR_Integer) 0)));
#line 2039 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_45)) == (MR_mktag((MR_Integer) 1)));
#line 2039 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2039 "typecheck.m"
                  {
#line 2039 "typecheck.m"
                    check_hlds__typecheck__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_45, (MR_Integer) 0)));
#line 2039 "typecheck.m"
                    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_45, (MR_Integer) 1)));
#line 2039 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 2039 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2039 "typecheck.m"
                      {
#line 2039 "typecheck.m"
                        check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_56_56, (MR_Integer) 0)));
#line 2039 "typecheck.m"
                        check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_56_56, (MR_Integer) 1)));
#line 2039 "typecheck.m"
                      }
#line 2039 "typecheck.m"
                  }
#line 2038 "typecheck.m"
              }
#line 2037 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2041 "typecheck.m"
              {
#line 2041 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_49;
#line 2041 "typecheck.m"
                MR_Word check_hlds__typecheck__AllArgsSpec_50;

#line 2041 "typecheck.m"
                {
#line 2041 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ClauseContext_49);
                }
#line 2042 "typecheck.m"
                {
#line 2042 "typecheck.m"
                  check_hlds__typecheck__AllArgsSpec_50 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_49, check_hlds__typecheck__Context_8, check_hlds__typecheck__ArgVectorKind_19, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, check_hlds__typecheck__ArgVectorTypeErrors_45);
                }
#line 2044 "typecheck.m"
                {
#line 2044 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_50, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
                }
#line 2041 "typecheck.m"
              }
#line 2037 "typecheck.m"
            else
#line 2046 "typecheck.m"
              {
#line 2046 "typecheck.m"
                MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24;

#line 2046 "typecheck.m"
                {
#line 2046 "typecheck.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[3], check_hlds__typecheck__Specs_43, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_23)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24);
                }
#line 2046 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_Info_24 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24);
#line 2046 "typecheck.m"
              }
#line 1674 "typecheck.m"
          }
#line 1673 "typecheck.m"
        else
#line 1679 "typecheck.m"
          {
#line 1679 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_20;

#line 1678 "typecheck.m"
            {
#line 1678 "typecheck.m"
              check_hlds__typecheck__Spec_20 = check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(check_hlds__typecheck__Context_8, check_hlds__typecheck__EventName_9, check_hlds__typecheck__EventArgTypes_16, check_hlds__typecheck__Args_10);
            }
#line 1680 "typecheck.m"
            {
#line 1680 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_20, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
            }
#line 1679 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1679 "typecheck.m"
          }
#line 1671 "typecheck.m"
      }
#line 1670 "typecheck.m"
    else
#line 1683 "typecheck.m"
      {
#line 1683 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_29;

#line 1683 "typecheck.m"
        {
#line 1683 "typecheck.m"
          check_hlds__typecheck__Spec_29 = check_hlds__typecheck_errors__report_unknown_event_call_error_2_f_0(check_hlds__typecheck__Context_8, check_hlds__typecheck__EventName_9);
        }
#line 1684 "typecheck.m"
        {
#line 1684 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
        }
#line 1683 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1683 "typecheck.m"
      }
#line 1666 "typecheck.m"
  }
#line 1662 "typecheck.m"
}

#line 1600 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__GenericCallId_10,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_12,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_13,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1600 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1600 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1600 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
#line 1600 "typecheck.m"
{
#line 1606 "typecheck.m"
  {
#line 1606 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_45;
#line 1606 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_17;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_18;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__PredVarType_19;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_20;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__VarVectorKind_21;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_22;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_41;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_42;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__V_43_43;
#line 1606 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_60;

#line 1607 "typecheck.m"
    {
#line 1607 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_14, &check_hlds__typecheck__Arity_17);
    }
#line 1608 "typecheck.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 14607 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_17_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1631 "typecheck.m"
    {
#line 1631 "typecheck.m"
      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_17_45, &check_hlds__typecheck__TypeVarSet0_41);
    }
#line 1632 "typecheck.m"
    {
#line 1632 "typecheck.m"
      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_17_45, check_hlds__typecheck__Arity_17, &check_hlds__typecheck__ArgTypeVars_42, check_hlds__typecheck__TypeVarSet0_41, &check_hlds__typecheck__TypeVarSet_18);
    }
#line 1634 "typecheck.m"
    {
#line 1634 "typecheck.m"
      check_hlds__typecheck__V_43_43 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 1634 "typecheck.m"
    {
#line 1634 "typecheck.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_43_43, check_hlds__typecheck__ArgTypeVars_42, &check_hlds__typecheck__ArgTypes_20);
    }
#line 1635 "typecheck.m"
    {
#line 1635 "typecheck.m"
      parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_13, (MR_Integer) 0, check_hlds__typecheck__ArgTypes_20, &check_hlds__typecheck__PredVarType_19);
    }
#line 1610 "typecheck.m"
    {
#line 1610 "typecheck.m"
      check_hlds__typecheck__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1610 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_29_29, 1) = ((MR_Box) (check_hlds__typecheck__GenericCallId_10));
#line 1610 "typecheck.m"
    }
#line 1610 "typecheck.m"
    {
#line 1610 "typecheck.m"
      check_hlds__typecheck__VarVectorKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__VarVectorKind_21, 0) = ((MR_Box) (check_hlds__typecheck__V_29_29));
#line 1610 "typecheck.m"
    }
#line 1613 "typecheck.m"
    {
#line 1613 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_22);
    }
#line 1616 "typecheck.m"
    {
#line 1616 "typecheck.m"
      check_hlds__typecheck__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1616 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_30_30, 0) = ((MR_Box) (check_hlds__typecheck__PredVar_12));
#line 1616 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_30_30, 1) = ((MR_Box) (check_hlds__typecheck__Args_14));
#line 1616 "typecheck.m"
    }
#line 1616 "typecheck.m"
    {
#line 1616 "typecheck.m"
      check_hlds__typecheck__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1616 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck__PredVarType_19));
#line 1616 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_31_31, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_20));
#line 1616 "typecheck.m"
    }
#line 1842 "typecheck.m"
    {
#line 1842 "typecheck.m"
      check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24, check_hlds__typecheck__TypeVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_31_31, check_hlds__typecheck__EmptyConstraints_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_60);
    }
#line 1844 "typecheck.m"
    {
#line 1844 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_21, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__V_30_30, check_hlds__typecheck__ArgsTypeAssignSet_60, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__STATE_VARIABLE_Info_27);
    }
#line 1606 "typecheck.m"
  }
#line 1600 "typecheck.m"
}

#line 1574 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22,
#line 1574 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23,
#line 1574 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_24,
#line 1574 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_25)
#line 1574 "typecheck.m"
{
#line 1581 "typecheck.m"
  {
#line 1581 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1581 "typecheck.m"
    if ((check_hlds__typecheck__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1581 "typecheck.m"
      {
#line 1581 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22;
#line 1581 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_25 = check_hlds__typecheck__STATE_VARIABLE_Info_0_24;
#line 1581 "typecheck.m"
      }
#line 1581 "typecheck.m"
    else
#line 1583 "typecheck.m"
      {
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVar_16;
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_18;
#line 1583 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_19;
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_20;
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_21;
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;

#line 1587 "typecheck.m"
        {
#line 1587 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVarSet0_15);
        }
#line 1588 "typecheck.m"
        {
#line 1588 "typecheck.m"
          mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
        }
#line 1589 "typecheck.m"
        {
#line 1589 "typecheck.m"
          check_hlds__typecheck__Type_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1589 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 1589 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1589 "typecheck.m"
        }
#line 1590 "typecheck.m"
        {
#line 1590 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_10, &check_hlds__typecheck__NumVars_19);
        }
#line 1591 "typecheck.m"
        {
#line 1591 "typecheck.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__NumVars_19, ((MR_Box) (check_hlds__typecheck__Type_18)), &check_hlds__typecheck__Types_20);
        }
#line 1592 "typecheck.m"
        {
#line 1592 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_21);
        }
#line 1842 "typecheck.m"
        {
#line 1842 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22, check_hlds__typecheck__TypeVarSet_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_20, check_hlds__typecheck__EmptyConstraints_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
        }
#line 1844 "typecheck.m"
        {
#line 1844 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_8, (MR_Integer) 1, check_hlds__typecheck__Context_9, check_hlds__typecheck__Vars_10, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23, check_hlds__typecheck__STATE_VARIABLE_Info_0_24, check_hlds__typecheck__STATE_VARIABLE_Info_25);
        }
#line 1583 "typecheck.m"
      }
#line 1581 "typecheck.m"
  }
#line 1574 "typecheck.m"
}

#line 1550 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1550 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1550 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1550 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1550 "typecheck.m"
{
#line 1556 "typecheck.m"
  {
#line 1556 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1556 "typecheck.m"
    if ((check_hlds__typecheck__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "typecheck.m"
      {
#line 1556 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1556 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1556 "typecheck.m"
      }
#line 1556 "typecheck.m"
    else
#line 1558 "typecheck.m"
      {
#line 1558 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_30_30;
#line 1558 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_15;
#line 1558 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_16;
#line 1558 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVars_17;
#line 1558 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_18;
#line 1558 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_19;
#line 1558 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_20;
#line 1558 "typecheck.m"
        MR_Word check_hlds__typecheck__V_25_25;
#line 1558 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;

#line 1562 "typecheck.m"
        {
#line 1562 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_10, &check_hlds__typecheck__NumVars_15);
        }
#line 14863 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1563 "typecheck.m"
        {
#line 1563 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVarSet0_16);
        }
#line 1564 "typecheck.m"
        {
#line 1564 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, check_hlds__typecheck__NumVars_15, &check_hlds__typecheck__TypeVars_17, check_hlds__typecheck__TypeVarSet0_16, &check_hlds__typecheck__TypeVarSet_18);
        }
#line 1565 "typecheck.m"
        {
#line 1565 "typecheck.m"
          check_hlds__typecheck__V_25_25 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 1565 "typecheck.m"
        {
#line 1565 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_25_25, check_hlds__typecheck__TypeVars_17, &check_hlds__typecheck__Types_19);
        }
#line 1566 "typecheck.m"
        {
#line 1566 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
        }
#line 1842 "typecheck.m"
        {
#line 1842 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21, check_hlds__typecheck__TypeVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_19, check_hlds__typecheck__EmptyConstraints_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
        }
#line 1844 "typecheck.m"
        {
#line 1844 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_8, (MR_Integer) 1, check_hlds__typecheck__Context_9, check_hlds__typecheck__Vars_10, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
        }
#line 1558 "typecheck.m"
      }
#line 1556 "typecheck.m"
  }
#line 1550 "typecheck.m"
}

#line 1536 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
#line 1536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
#line 1536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7)
#line 1536 "typecheck.m"
{
#line 1540 "typecheck.m"
  {
#line 1540 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1540 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1540 "typecheck.m"
      {
#line 1540 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1540 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0_6;
#line 1540 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 1540 "typecheck.m"
      }
#line 1540 "typecheck.m"
    else
#line 1542 "typecheck.m"
      {
#line 1542 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1542 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1542 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal_17;
#line 1542 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26;
#line 1542 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
#line 1544 "typecheck.m"
        MR_Word * check_hlds__typecheck__AddrGoals_30;

#line 1543 "typecheck.m"
        {
#line 1543 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Goal0_15, &check_hlds__typecheck__Goal_17, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_Info_0_6, &check_hlds__typecheck__STATE_VARIABLE_Info_27_27);
        }
#line 1541 "typecheck.m"
        {
#line 1541 "typecheck.m"
          MR_Word base;
#line 1541 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1541 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Goal_17));
#line 1541 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 1541 "typecheck.m"
        }
#line 1541 "typecheck.m"
        check_hlds__typecheck__AddrGoals_30 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1));
#line 1544 "typecheck.m"
        {
#line 1544 "typecheck.m"
          check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(check_hlds__typecheck__Goals0_16, check_hlds__typecheck__AddrGoals_30, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5, check_hlds__typecheck__STATE_VARIABLE_Info_27_27, check_hlds__typecheck__STATE_VARIABLE_Info_7);
        }
#line 1542 "typecheck.m"
      }
#line 1540 "typecheck.m"
  }
#line 1536 "typecheck.m"
}

#line 1527 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1527 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1)
#line 1527 "typecheck.m"
{
#line 1530 "typecheck.m"
  {
#line 1530 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1530 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_2;

#line 1530 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "typecheck.m"
      check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1530 "typecheck.m"
    else
#line 1531 "typecheck.m"
      {
#line 1531 "typecheck.m"
        MR_Word check_hlds__typecheck__I_3;
#line 1531 "typecheck.m"
        MR_Word check_hlds__typecheck__O_4;
#line 1531 "typecheck.m"
        MR_Word check_hlds__typecheck__Interfaces_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1531 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1532 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7;
#line 1532 "typecheck.m"
        MR_Word * check_hlds__typecheck__AddrSCCcallarg8_9;

#line 1531 "typecheck.m"
        check_hlds__typecheck__I_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 0)));
#line 1531 "typecheck.m"
        check_hlds__typecheck__O_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 1)));
#line 1532 "typecheck.m"
        {
#line 1532 "typecheck.m"
          check_hlds__typecheck__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck__O_4));
#line 1532 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 1) = NULL;
#line 1532 "typecheck.m"
        }
#line 1532 "typecheck.m"
        check_hlds__typecheck__AddrSCCcallarg8_9 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, (MR_Integer) 1));
#line 1532 "typecheck.m"
        {
#line 1532 "typecheck.m"
          check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck__I_3));
#line 1532 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck__V_7_7));
#line 1532 "typecheck.m"
        }
#line 1532 "typecheck.m"
        {
#line 1532 "typecheck.m"
          check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(check_hlds__typecheck__Interfaces_5, check_hlds__typecheck__AddrSCCcallarg8_9);
        }
#line 1531 "typecheck.m"
      }
#line 1530 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_2;
#line 1530 "typecheck.m"
  }
#line 1527 "typecheck.m"
}

#line 1495 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
#line 1495 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 1495 "typecheck.m"
{
#line 1495 "typecheck.m"
  {
#line 1495 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1495 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 1495 "typecheck.m"
    {
#line 1495 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1495__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 1495 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1495 "typecheck.m"
  }
#line 1495 "typecheck.m"
}

#line 1493 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
#line 1493 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1493 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1493 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1493 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3,
#line 1493 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_4,
#line 1493 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_5)
#line 1493 "typecheck.m"
{
#line 1493 "typecheck.m"
  {
#line 1493 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1493 "typecheck.m"
    MR_Word check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12;
#line 1493 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14;

#line 1493 "typecheck.m"
    {
#line 1493 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) check_hlds__typecheck__wrapper_arg_4), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14);
    }
#line 1493 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12));
#line 1493 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14));
#line 1493 "typecheck.m"
  }
#line 1493 "typecheck.m"
}

#line 1442 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
#line 1442 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1442 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 1442 "typecheck.m"
{
#line 1442 "typecheck.m"
  {
#line 1442 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 1442 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1442 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_2;

#line 1442 "typecheck.m"
    {
#line 1442 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 1442 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_2));
#line 1442 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 1442 "typecheck.m"
  }
#line 1442 "typecheck.m"
}

#line 1297 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
#line 1297 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_8,
#line 1297 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_9,
#line 1297 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_10,
#line 1297 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115,
#line 1297 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116,
#line 1297 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_117,
#line 1297 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_118)
#line 1297 "typecheck.m"
{
#line 1301 "typecheck.m"
  {
#line 1301 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1301 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_16;
#line 1302 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseContext_13;

#line 1302 "typecheck.m"
    {
#line 1302 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__ClauseContext_13);
    }
#line 1305 "typecheck.m"
    {
#line 1305 "typecheck.m"
      check_hlds__typecheck__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo_10);
    }
#line 1313 "typecheck.m"
#line 1313 "typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) {
#line 1313 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1313 "typecheck.m"
      case (MR_Integer) 0:
#line 1338 "typecheck.m"
        {
#line 1338 "typecheck.m"
          MR_Word check_hlds__typecheck__SubGoal0_28 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__GoalExpr0_8), (MR_Integer) 0);
#line 1338 "typecheck.m"
          MR_Word check_hlds__typecheck__SubGoal_29;

#line 1342 "typecheck.m"
          {
#line 1342 "typecheck.m"
            check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_28, &check_hlds__typecheck__SubGoal_29, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
          }
#line 1343 "typecheck.m"
          *check_hlds__typecheck__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__SubGoal_29);
#line 1338 "typecheck.m"
        }
#line 1313 "typecheck.m"
        break;
#line 1313 "typecheck.m"
      case (MR_Integer) 1:
#line 1422 "typecheck.m"
        {
#line 1422 "typecheck.m"
          MR_Word check_hlds__typecheck__LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)));
#line 1422 "typecheck.m"
          MR_Word check_hlds__typecheck__RHS0_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1422 "typecheck.m"
          MR_Word check_hlds__typecheck__UnifyMode_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1422 "typecheck.m"
          MR_Word check_hlds__typecheck__Unification_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1422 "typecheck.m"
          MR_Word check_hlds__typecheck__UnifyContext_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1422 "typecheck.m"
          MR_Word check_hlds__typecheck__GoalId_250;
#line 1427 "typecheck.m"
          MR_Word * check_hlds__typecheck__AddrRHS_304;

#line 1426 "typecheck.m"
          {
#line 1426 "typecheck.m"
            check_hlds__typecheck__GoalId_250 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
          }
#line 1429 "typecheck.m"
          {
#line 1429 "typecheck.m"
            MR_Word base;
#line 1429 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "typecheck.m"
            *check_hlds__typecheck__GoalExpr_9 = base;
#line 1429 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__LHS_75));
#line 1429 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 1429 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__typecheck__UnifyMode_77));
#line 1429 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__typecheck__Unification_78));
#line 1429 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__typecheck__UnifyContext_79));
#line 1429 "typecheck.m"
          }
#line 1429 "typecheck.m"
          check_hlds__typecheck__AddrRHS_304 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__GoalExpr_9, (MR_Integer) 1));
#line 1427 "typecheck.m"
          {
#line 1427 "typecheck.m"
            check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(check_hlds__typecheck__UnifyContext_79, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_250, check_hlds__typecheck__LHS_75, check_hlds__typecheck__RHS0_76, check_hlds__typecheck__AddrRHS_304, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
          }
#line 1422 "typecheck.m"
        }
#line 1313 "typecheck.m"
        break;
#line 1313 "typecheck.m"
      case (MR_Integer) 2:
#line 1381 "typecheck.m"
        {
#line 1381 "typecheck.m"
          MR_Integer check_hlds__typecheck__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1381 "typecheck.m"
          MR_Word check_hlds__typecheck__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1381 "typecheck.m"
          MR_Word check_hlds__typecheck__BI_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1381 "typecheck.m"
          MR_Word check_hlds__typecheck__UC_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1381 "typecheck.m"
          MR_Word check_hlds__typecheck__Name_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));
#line 1381 "typecheck.m"
          MR_Integer check_hlds__typecheck__Arity_56;
#line 1381 "typecheck.m"
          MR_Word check_hlds__typecheck__SimpleCallId_57;
#line 1381 "typecheck.m"
          MR_Word check_hlds__typecheck__GoalId_58;
#line 1381 "typecheck.m"
          MR_Word check_hlds__typecheck__PredId_59;
#line 1381 "typecheck.m"
          MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)));

#line 1385 "typecheck.m"
          {
#line 1385 "typecheck.m"
            mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_52, &check_hlds__typecheck__Arity_56);
          }
#line 1386 "typecheck.m"
          {
#line 1386 "typecheck.m"
            check_hlds__typecheck__SimpleCallId_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1386 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 1) = ((MR_Box) (check_hlds__typecheck__Name_55));
#line 1386 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 2) = ((MR_Box) (check_hlds__typecheck__Arity_56));
#line 1386 "typecheck.m"
          }
#line 1387 "typecheck.m"
          {
#line 1387 "typecheck.m"
            check_hlds__typecheck__GoalId_58 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
          }
#line 1388 "typecheck.m"
          {
#line 1388 "typecheck.m"
            check_hlds__typecheck__typecheck_call_pred_name_9_p_0(check_hlds__typecheck__SimpleCallId_57, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_58, check_hlds__typecheck__Args_52, &check_hlds__typecheck__PredId_59, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
          }
#line 1390 "typecheck.m"
          {
#line 1390 "typecheck.m"
            MR_Word base;
#line 1390 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "typecheck.m"
            *check_hlds__typecheck__GoalExpr_9 = base;
#line 1390 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__PredId_59));
#line 1390 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__typecheck__ProcId_51));
#line 1390 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__Args_52));
#line 1390 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__BI_53));
#line 1390 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__UC_54));
#line 1390 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Name_55));
#line 1390 "typecheck.m"
          }
#line 1381 "typecheck.m"
        }
#line 1313 "typecheck.m"
        break;
#line 1313 "typecheck.m"
      case (MR_Integer) 3:
#line 1313 "typecheck.m"
#line 1313 "typecheck.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) {
#line 1313 "typecheck.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1313 "typecheck.m"
          case (MR_Integer) 0:
#line 1393 "typecheck.m"
            {
#line 1393 "typecheck.m"
              MR_Word check_hlds__typecheck__GenericCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1393 "typecheck.m"
              MR_Word check_hlds__typecheck__Args_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1392 "typecheck.m"
              MR_Word check_hlds__typecheck___Modes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1392 "typecheck.m"
              MR_Word check_hlds__typecheck___MaybeArgRegs_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1392 "typecheck.m"
              MR_Word check_hlds__typecheck___Detism_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));

#line 1404 "typecheck.m"
#line 1404 "typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__typecheck__GenericCall_60)) {
#line 1404 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1404 "typecheck.m"
                case (MR_Integer) 0:
#line 1395 "typecheck.m"
                  {
#line 1395 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 0)));
#line 1395 "typecheck.m"
                    MR_Word check_hlds__typecheck__Purity_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 1)));
#line 1395 "typecheck.m"
                    MR_Word check_hlds__typecheck__GenericCallId_68;
#line 1395 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 2)));
#line 1395 "typecheck.m"
                    MR_Integer check_hlds__typecheck__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 3)));

#line 1401 "typecheck.m"
                    {
#line 1401 "typecheck.m"
                      hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__typecheck__GenericCall_60, &check_hlds__typecheck__GenericCallId_68);
                    }
#line 1402 "typecheck.m"
                    {
#line 1402 "typecheck.m"
                      check_hlds__typecheck__typecheck_higher_order_call_9_p_0(check_hlds__typecheck__GenericCallId_68, check_hlds__typecheck__Context_16, check_hlds__typecheck__PredVar_64, check_hlds__typecheck__Purity_65, check_hlds__typecheck__Args_249, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1395 "typecheck.m"
                  }
#line 1404 "typecheck.m"
                  break;
#line 1404 "typecheck.m"
                case (MR_Integer) 1:
#line 1405 "typecheck.m"
                  {
#line 1406 "typecheck.m"
                    {
#line 1406 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "unexpected class method call");
#line 1406 "typecheck.m"
                      return;
                    }
#line 1405 "typecheck.m"
                  }
#line 1404 "typecheck.m"
                  break;
#line 1404 "typecheck.m"
                case (MR_Integer) 2:
#line 1408 "typecheck.m"
                  {
#line 1408 "typecheck.m"
                    MR_String check_hlds__typecheck__EventName_73 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GenericCall_60, (MR_Integer) 0)));

#line 1413 "typecheck.m"
                    {
#line 1413 "typecheck.m"
                      check_hlds__typecheck__typecheck_event_call_7_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__EventName_73, check_hlds__typecheck__Args_249, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1408 "typecheck.m"
                  }
#line 1404 "typecheck.m"
                  break;
#line 1404 "typecheck.m"
                case (MR_Integer) 3:
#line 1416 "typecheck.m"
                  {
#line 1416 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115;
#line 1416 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_0_117;
#line 1416 "typecheck.m"
                  }
#line 1404 "typecheck.m"
                  break;
#line 1404 "typecheck.m"
              }
#line 1420 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_9 = check_hlds__typecheck__GoalExpr0_8;
#line 1393 "typecheck.m"
            }
#line 1313 "typecheck.m"
            break;
#line 1313 "typecheck.m"
          case (MR_Integer) 1:
#line 1435 "typecheck.m"
            {
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVectorKind_89;
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVars_90;
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169;
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_170_170;
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__Args_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__GoalId_252;
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__PredId_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1435 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 6)));
#line 1435 "typecheck.m"
              MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 7)));

#line 1441 "typecheck.m"
              {
#line 1441 "typecheck.m"
                check_hlds__typecheck__ArgVectorKind_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1441 "typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_89, 1) = ((MR_Box) (check_hlds__typecheck__PredId_253));
#line 1441 "typecheck.m"
              }
#line 1442 "typecheck.m"
              {
#line 1442 "typecheck.m"
                check_hlds__typecheck__ArgVars_90 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_2[2], check_hlds__typecheck__Args_251);
              }
#line 1443 "typecheck.m"
              {
#line 1443 "typecheck.m"
                check_hlds__typecheck__GoalId_252 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
              }
#line 1444 "typecheck.m"
              {
#line 1444 "typecheck.m"
                check_hlds__typecheck__typecheck_call_pred_id_9_p_0(check_hlds__typecheck__ArgVectorKind_89, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_252, check_hlds__typecheck__PredId_253, check_hlds__typecheck__ArgVars_90, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_170_170);
              }
#line 1446 "typecheck.m"
              {
#line 1446 "typecheck.m"
                check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_170_170, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1447 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_9 = check_hlds__typecheck__GoalExpr0_8;
#line 1435 "typecheck.m"
            }
#line 1313 "typecheck.m"
            break;
#line 1313 "typecheck.m"
          case (MR_Integer) 2:
#line 1307 "typecheck.m"
            {
#line 1307 "typecheck.m"
              MR_Word check_hlds__typecheck__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1307 "typecheck.m"
              MR_Word check_hlds__typecheck__List0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1311 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrList_302;

#line 1312 "typecheck.m"
              {
#line 1312 "typecheck.m"
                MR_Word base;
#line 1312 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1312 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1312 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ConjType_17));
#line 1312 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 2) = NULL;
#line 1312 "typecheck.m"
              }
#line 1312 "typecheck.m"
              check_hlds__typecheck__AddrList_302 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__typecheck__GoalExpr_9, (MR_Integer) 2));
#line 1311 "typecheck.m"
              {
#line 1311 "typecheck.m"
                check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(check_hlds__typecheck__List0_18, check_hlds__typecheck__AddrList_302, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1307 "typecheck.m"
            }
#line 1313 "typecheck.m"
            break;
#line 1313 "typecheck.m"
          case (MR_Integer) 3:
#line 1314 "typecheck.m"
            {
#line 1314 "typecheck.m"
              MR_Word check_hlds__typecheck__List0_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1318 "typecheck.m"
              MR_Word * check_hlds__typecheck__AddrList_303;

#line 1319 "typecheck.m"
              {
#line 1319 "typecheck.m"
                MR_Word base;
#line 1319 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1319 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1319 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = NULL;
#line 1319 "typecheck.m"
              }
#line 1319 "typecheck.m"
              check_hlds__typecheck__AddrList_303 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__typecheck__GoalExpr_9, (MR_Integer) 1));
#line 1318 "typecheck.m"
              {
#line 1318 "typecheck.m"
                check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(check_hlds__typecheck__List0_242, check_hlds__typecheck__AddrList_303, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1314 "typecheck.m"
            }
#line 1313 "typecheck.m"
            break;
#line 1313 "typecheck.m"
          case (MR_Integer) 4:
#line 1431 "typecheck.m"
            {
#line 1433 "typecheck.m"
              {
#line 1433 "typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "switch");
#line 1433 "typecheck.m"
                return;
              }
#line 1431 "typecheck.m"
            }
#line 1313 "typecheck.m"
            break;
#line 1313 "typecheck.m"
          case (MR_Integer) 5:
#line 1345 "typecheck.m"
            {
#line 1345 "typecheck.m"
              MR_Word check_hlds__typecheck__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1345 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1345 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1345 "typecheck.m"
              MR_Word check_hlds__typecheck__SubGoal0_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1345 "typecheck.m"
              MR_Word check_hlds__typecheck__SubGoal_248;

#line 1349 "typecheck.m"
              {
#line 1349 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_247, &check_hlds__typecheck__SubGoal_248, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_204_204);
              }
#line 1368 "typecheck.m"
#line 1368 "typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) {
#line 1368 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1368 "typecheck.m"
                case (MR_Integer) 0:
#line 1365 "typecheck.m"
                  {
#line 1365 "typecheck.m"
                    MR_Word check_hlds__typecheck__Vars_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Reason_30, (MR_Integer) 0)));

#line 1366 "typecheck.m"
                    {
#line 1366 "typecheck.m"
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_244, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1365 "typecheck.m"
                  }
#line 1368 "typecheck.m"
                  break;
#line 1368 "typecheck.m"
                case (MR_Integer) 1:
#line 1365 "typecheck.m"
                  {
#line 1365 "typecheck.m"
                    MR_Word check_hlds__typecheck__Vars_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_30, (MR_Integer) 0)));
#line 1356 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_30, (MR_Integer) 1)));

#line 1366 "typecheck.m"
                    {
#line 1366 "typecheck.m"
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_301, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1365 "typecheck.m"
                  }
#line 1368 "typecheck.m"
                  break;
#line 1368 "typecheck.m"
                case (MR_Integer) 2:
#line 1369 "typecheck.m"
                  {
#line 1369 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1369 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1369 "typecheck.m"
                  }
#line 1368 "typecheck.m"
                  break;
#line 1368 "typecheck.m"
                case (MR_Integer) 3:
#line 1368 "typecheck.m"
#line 1368 "typecheck.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) {
#line 1368 "typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1368 "typecheck.m"
                    case (MR_Integer) 0:
#line 1370 "typecheck.m"
                      {
#line 1370 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1370 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1370 "typecheck.m"
                      }
#line 1368 "typecheck.m"
                      break;
#line 1368 "typecheck.m"
                    case (MR_Integer) 1:
#line 1371 "typecheck.m"
                      {
#line 1371 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1371 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1371 "typecheck.m"
                      }
#line 1368 "typecheck.m"
                      break;
#line 1368 "typecheck.m"
                    case (MR_Integer) 2:
#line 1372 "typecheck.m"
                      {
#line 1372 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1372 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1372 "typecheck.m"
                      }
#line 1368 "typecheck.m"
                      break;
#line 1368 "typecheck.m"
                    case (MR_Integer) 3:
#line 1373 "typecheck.m"
                      {
#line 1373 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1373 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1373 "typecheck.m"
                      }
#line 1368 "typecheck.m"
                      break;
#line 1368 "typecheck.m"
                    case (MR_Integer) 4:
#line 1374 "typecheck.m"
                      {
#line 1374 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1374 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1374 "typecheck.m"
                      }
#line 1368 "typecheck.m"
                      break;
#line 1368 "typecheck.m"
                    case (MR_Integer) 5:
#line 1375 "typecheck.m"
                      {
#line 1375 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1375 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1375 "typecheck.m"
                      }
#line 1368 "typecheck.m"
                      break;
#line 1368 "typecheck.m"
                    case (MR_Integer) 6:
#line 1376 "typecheck.m"
                      {
#line 1376 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1376 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1376 "typecheck.m"
                      }
#line 1368 "typecheck.m"
                      break;
#line 1368 "typecheck.m"
                    case (MR_Integer) 7:
#line 1365 "typecheck.m"
                      {
#line 1365 "typecheck.m"
                        MR_Word check_hlds__typecheck__LCVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 1)));
#line 1365 "typecheck.m"
                        MR_Word check_hlds__typecheck__LCSVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 2)));
#line 1365 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_205_205;
#line 1365 "typecheck.m"
                        MR_Word check_hlds__typecheck__Vars_299;
#line 1362 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 3)));

#line 1363 "typecheck.m"
                        {
#line 1363 "typecheck.m"
                          check_hlds__typecheck__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_205_205, 0) = ((MR_Box) (check_hlds__typecheck__LCSVar_34));
#line 1363 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1363 "typecheck.m"
                        }
#line 1363 "typecheck.m"
                        {
#line 1363 "typecheck.m"
                          check_hlds__typecheck__Vars_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_299, 0) = ((MR_Box) (check_hlds__typecheck__LCVar_33));
#line 1363 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_299, 1) = ((MR_Box) (check_hlds__typecheck__V_205_205));
#line 1363 "typecheck.m"
                        }
#line 1366 "typecheck.m"
                        {
#line 1366 "typecheck.m"
                          check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_299, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                        }
#line 1365 "typecheck.m"
                      }
#line 1368 "typecheck.m"
                      break;
#line 1368 "typecheck.m"
                  }
#line 1368 "typecheck.m"
                  break;
#line 1368 "typecheck.m"
              }
#line 1379 "typecheck.m"
              {
#line 1379 "typecheck.m"
                MR_Word base;
#line 1379 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1379 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1379 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Reason_30));
#line 1379 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_248));
#line 1379 "typecheck.m"
              }
#line 1345 "typecheck.m"
            }
#line 1313 "typecheck.m"
            break;
#line 1313 "typecheck.m"
          case (MR_Integer) 6:
#line 1321 "typecheck.m"
            {
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__Cond0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__Then0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__Else0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__Cond_25;
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__Then_26;
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__Else_27;
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217;
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_218_218;
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222;
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_223_223;
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227;
#line 1321 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_228_228;

#line 1325 "typecheck.m"
              {
#line 1325 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Cond0_22, &check_hlds__typecheck__Cond_25, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_218_218);
              }
#line 1329 "typecheck.m"
              {
#line 1329 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Then0_23, &check_hlds__typecheck__Then_26, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222, check_hlds__typecheck__STATE_VARIABLE_Info_218_218, &check_hlds__typecheck__STATE_VARIABLE_Info_223_223);
              }
#line 1333 "typecheck.m"
              {
#line 1333 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Else0_24, &check_hlds__typecheck__Else_27, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227, check_hlds__typecheck__STATE_VARIABLE_Info_223_223, &check_hlds__typecheck__STATE_VARIABLE_Info_228_228);
              }
#line 1334 "typecheck.m"
              {
#line 1334 "typecheck.m"
                check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_228_228, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1336 "typecheck.m"
              {
#line 1336 "typecheck.m"
                MR_Word base;
#line 1336 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1336 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1336 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Vars_21));
#line 1336 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__Cond_25));
#line 1336 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__typecheck__Then_26));
#line 1336 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__typecheck__Else_27));
#line 1336 "typecheck.m"
              }
#line 1321 "typecheck.m"
            }
#line 1313 "typecheck.m"
            break;
#line 1313 "typecheck.m"
          case (MR_Integer) 7:
#line 1449 "typecheck.m"
            {
#line 1449 "typecheck.m"
              MR_Word check_hlds__typecheck__ShortHand0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1449 "typecheck.m"
              MR_Word check_hlds__typecheck__ShortHand_93;

#line 1459 "typecheck.m"
#line 1459 "typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_91)) {
#line 1459 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "typecheck.m"
                case (MR_Integer) 0:
#line 1451 "typecheck.m"
                  {
#line 1451 "typecheck.m"
                    MR_Word check_hlds__typecheck__LHS0_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1451 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164;
#line 1451 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_165_165;
#line 1451 "typecheck.m"
                    MR_Word check_hlds__typecheck__LHS_254;
#line 1451 "typecheck.m"
                    MR_Word check_hlds__typecheck__RHS0_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1451 "typecheck.m"
                    MR_Word check_hlds__typecheck__RHS_256;

#line 1456 "typecheck.m"
                    {
#line 1456 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__LHS0_92, &check_hlds__typecheck__LHS_254, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_165_165);
                    }
#line 1457 "typecheck.m"
                    {
#line 1457 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__RHS0_255, &check_hlds__typecheck__RHS_256, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_165_165, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1458 "typecheck.m"
                    {
#line 1458 "typecheck.m"
                      check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__LHS_254));
#line 1458 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__RHS_256));
#line 1458 "typecheck.m"
                    }
#line 1451 "typecheck.m"
                  }
#line 1459 "typecheck.m"
                  break;
#line 1459 "typecheck.m"
                case (MR_Integer) 1:
#line 1461 "typecheck.m"
                  {
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__GoalType_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__Outer_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__Inner_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 2)));
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeOutputVars_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 3)));
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__MainGoal0_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 4)));
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__OrElseGoals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 5)));
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__OrElseInners_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 6)));
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__MainGoal_103;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__OrElseGoals_104;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__OuterDI_106;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__OuterUO_107;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__InnerVars_108;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_142_142;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_144_144;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_146_146;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_147_147;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_149_149;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_150_150;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_152_152;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_153_153;
#line 1461 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_156_156;
#line 1493 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116;
#line 1493 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118;

#line 1471 "typecheck.m"
                    if ((check_hlds__typecheck__MaybeOutputVars_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1472 "typecheck.m"
                      {
#line 1472 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115;
#line 1472 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_Info_142_142 = check_hlds__typecheck__STATE_VARIABLE_Info_0_117;
#line 1472 "typecheck.m"
                      }
#line 1471 "typecheck.m"
                    else
#line 1467 "typecheck.m"
                      {
#line 1467 "typecheck.m"
                        MR_Word check_hlds__typecheck__OutputVars_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOutputVars_97, (MR_Integer) 0)));

#line 1469 "typecheck.m"
                        {
#line 1469 "typecheck.m"
                          check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), check_hlds__typecheck__Context_16, check_hlds__typecheck__OutputVars_101, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_142_142);
                        }
#line 1467 "typecheck.m"
                      }
#line 1475 "typecheck.m"
                    {
#line 1475 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__MainGoal0_98, &check_hlds__typecheck__MainGoal_103, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143, check_hlds__typecheck__STATE_VARIABLE_Info_142_142, &check_hlds__typecheck__STATE_VARIABLE_Info_144_144);
                    }
#line 1477 "typecheck.m"
                    {
#line 1477 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__OrElseGoals0_99, &check_hlds__typecheck__OrElseGoals_104, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145, check_hlds__typecheck__STATE_VARIABLE_Info_144_144, &check_hlds__typecheck__STATE_VARIABLE_Info_146_146);
                    }
#line 1481 "typecheck.m"
                    check_hlds__typecheck__OuterDI_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_95, (MR_Integer) 0)));
#line 1481 "typecheck.m"
                    check_hlds__typecheck__OuterUO_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_95, (MR_Integer) 1)));
#line 1483 "typecheck.m"
                    {
#line 1483 "typecheck.m"
                      check_hlds__typecheck__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_150_150, 0) = ((MR_Box) (check_hlds__typecheck__OuterUO_107));
#line 1483 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1483 "typecheck.m"
                    }
#line 1483 "typecheck.m"
                    {
#line 1483 "typecheck.m"
                      check_hlds__typecheck__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_147_147, 0) = ((MR_Box) (check_hlds__typecheck__OuterDI_106));
#line 1483 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_147_147, 1) = ((MR_Box) (check_hlds__typecheck__V_150_150));
#line 1483 "typecheck.m"
                    }
#line 1482 "typecheck.m"
                    {
#line 1482 "typecheck.m"
                      check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), check_hlds__typecheck__Context_16, check_hlds__typecheck__V_147_147, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148, check_hlds__typecheck__STATE_VARIABLE_Info_146_146, &check_hlds__typecheck__STATE_VARIABLE_Info_149_149);
                    }
#line 1492 "typecheck.m"
                    {
#line 1492 "typecheck.m"
                      check_hlds__typecheck__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_152_152, 0) = ((MR_Box) (check_hlds__typecheck__Inner_96));
#line 1492 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_152_152, 1) = ((MR_Box) (check_hlds__typecheck__OrElseInners_100));
#line 1492 "typecheck.m"
                    }
#line 1492 "typecheck.m"
                    {
#line 1492 "typecheck.m"
                      check_hlds__typecheck__InnerVars_108 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__V_152_152);
                    }
#line 1493 "typecheck.m"
                    {
#line 1493 "typecheck.m"
                      check_hlds__typecheck__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
#line 1493 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_2));
#line 1493 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1493 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 3) = ((MR_Box) (check_hlds__typecheck__Context_16));
#line 1493 "typecheck.m"
                    }
#line 1493 "typecheck.m"
                    {
#line 1493 "typecheck.m"
                      mercury__list__foldl2_6_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_1[3], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_153_153, check_hlds__typecheck__InnerVars_108, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148)), &check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_149_149)), &check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118);
                    }
#line 1493 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = ((MR_Word) check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116);
#line 1493 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_118 = ((MR_Word) check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118);
#line 1495 "typecheck.m"
                    {
#line 1495 "typecheck.m"
                      check_hlds__typecheck__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1495 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[3]));
#line 1495 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_3));
#line 1495 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1495 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 3) = ((MR_Box) (check_hlds__typecheck__GoalType_94));
#line 1495 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1495 "typecheck.m"
                    }
#line 1495 "typecheck.m"
                    {
#line 1495 "typecheck.m"
                      mercury__require__expect_4_p_0(check_hlds__typecheck__V_156_156, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                    }
#line 1497 "typecheck.m"
                    {
#line 1497 "typecheck.m"
                      check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__GoalType_94));
#line 1497 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__Outer_95));
#line 1497 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 2) = ((MR_Box) (check_hlds__typecheck__Inner_96));
#line 1497 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 3) = ((MR_Box) (check_hlds__typecheck__MaybeOutputVars_97));
#line 1497 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 4) = ((MR_Box) (check_hlds__typecheck__MainGoal_103));
#line 1497 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 5) = ((MR_Box) (check_hlds__typecheck__OrElseGoals_104));
#line 1497 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 6) = ((MR_Box) (check_hlds__typecheck__OrElseInners_100));
#line 1497 "typecheck.m"
                    }
#line 1461 "typecheck.m"
                  }
#line 1459 "typecheck.m"
                  break;
#line 1459 "typecheck.m"
                case (MR_Integer) 2:
#line 1500 "typecheck.m"
                  {
#line 1500 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeIO_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1500 "typecheck.m"
                    MR_Word check_hlds__typecheck__ResultVar_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1500 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122;
#line 1500 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_123_123;
#line 1500 "typecheck.m"
                    MR_Word check_hlds__typecheck__SubGoal0_259 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 2)));
#line 1500 "typecheck.m"
                    MR_Word check_hlds__typecheck__SubGoal_260;

#line 1505 "typecheck.m"
                    {
#line 1505 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_259, &check_hlds__typecheck__SubGoal_260, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_123_123);
                    }
#line 1519 "typecheck.m"
                    if ((check_hlds__typecheck__MaybeIO_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1520 "typecheck.m"
                      {
#line 1520 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122;
#line 1520 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_123_123;
#line 1520 "typecheck.m"
                      }
#line 1519 "typecheck.m"
                    else
#line 1507 "typecheck.m"
                      {
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__InitialIO_111;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__FinalIO_112;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeIO_109, (MR_Integer) 0)));
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_125_125;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_127_127;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_128_128;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_132_132;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_134_134;
#line 1507 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_135_135;

#line 1507 "typecheck.m"
                        check_hlds__typecheck__InitialIO_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_124_124, (MR_Integer) 0)));
#line 1507 "typecheck.m"
                        check_hlds__typecheck__FinalIO_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_124_124, (MR_Integer) 1)));
#line 1510 "typecheck.m"
                        {
#line 1510 "typecheck.m"
                          check_hlds__typecheck__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 0) = ((MR_Box) (check_hlds__typecheck__FinalIO_112));
#line 1510 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1510 "typecheck.m"
                        }
#line 1510 "typecheck.m"
                        {
#line 1510 "typecheck.m"
                          check_hlds__typecheck__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_125_125, 0) = ((MR_Box) (check_hlds__typecheck__InitialIO_111));
#line 1510 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_125_125, 1) = ((MR_Box) (check_hlds__typecheck__V_128_128));
#line 1510 "typecheck.m"
                        }
#line 1509 "typecheck.m"
                        {
#line 1509 "typecheck.m"
                          check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), check_hlds__typecheck__Context_16, check_hlds__typecheck__V_125_125, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126, check_hlds__typecheck__STATE_VARIABLE_Info_123_123, &check_hlds__typecheck__STATE_VARIABLE_Info_127_127);
                        }
#line 1516 "typecheck.m"
                        {
#line 1516 "typecheck.m"
                          check_hlds__typecheck__V_132_132 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                        }
#line 1515 "typecheck.m"
                        {
#line 1515 "typecheck.m"
                          check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[22]), check_hlds__typecheck__Context_16, check_hlds__typecheck__InitialIO_111, check_hlds__typecheck__V_132_132, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133, check_hlds__typecheck__STATE_VARIABLE_Info_127_127, &check_hlds__typecheck__STATE_VARIABLE_Info_134_134);
                        }
#line 1518 "typecheck.m"
                        {
#line 1518 "typecheck.m"
                          check_hlds__typecheck__V_135_135 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                        }
#line 1517 "typecheck.m"
                        {
#line 1517 "typecheck.m"
                          check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[23]), check_hlds__typecheck__Context_16, check_hlds__typecheck__FinalIO_112, check_hlds__typecheck__V_135_135, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_134_134, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                        }
#line 1507 "typecheck.m"
                      }
#line 1522 "typecheck.m"
                    {
#line 1522 "typecheck.m"
                      check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1522 "typecheck.m"
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__MaybeIO_109));
#line 1522 "typecheck.m"
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__ResultVar_110));
#line 1522 "typecheck.m"
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_260));
#line 1522 "typecheck.m"
                    }
#line 1500 "typecheck.m"
                  }
#line 1459 "typecheck.m"
                  break;
#line 1459 "typecheck.m"
              }
#line 1524 "typecheck.m"
              {
#line 1524 "typecheck.m"
                MR_Word base;
#line 1524 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1524 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1524 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ShortHand_93));
#line 1524 "typecheck.m"
              }
#line 1449 "typecheck.m"
            }
#line 1313 "typecheck.m"
            break;
#line 1313 "typecheck.m"
        }
#line 1313 "typecheck.m"
        break;
#line 1313 "typecheck.m"
    }
#line 1301 "typecheck.m"
  }
#line 1297 "typecheck.m"
}

#line 1234 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_8,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_9,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__EnclosingContext_10,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
#line 1234 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
#line 1234 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31)
#line 1234 "typecheck.m"
{
#line 1238 "typecheck.m"
  {
#line 1238 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 0)));
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 1)));
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__Context0_15;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_16;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_17;
#line 1238 "typecheck.m"
    MR_Integer check_hlds__typecheck__NumTypeAssignSets_18;
#line 1238 "typecheck.m"
    MR_Integer check_hlds__typecheck__WarnLimit_19;
#line 1238 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr_24;
#line 1244 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;

#line 1243 "typecheck.m"
    {
#line 1243 "typecheck.m"
      check_hlds__typecheck__Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo0_14);
    }
#line 1244 "typecheck.m"
    {
#line 1244 "typecheck.m"
      check_hlds__typecheck__V_41_41 = mercury__term__context_init_0_f_0();
    }
#line 1244 "typecheck.m"
    {
#line 1244 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck__Context0_15, check_hlds__typecheck__V_41_41);
    }
#line 1244 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1245 "typecheck.m"
      {
#line 1245 "typecheck.m"
        check_hlds__typecheck__Context_16 = check_hlds__typecheck__EnclosingContext_10;
#line 1246 "typecheck.m"
        {
#line 1246 "typecheck.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalInfo0_14, &check_hlds__typecheck__GoalInfo_17);
        }
#line 1245 "typecheck.m"
      }
#line 1244 "typecheck.m"
    else
#line 1248 "typecheck.m"
      {
#line 1248 "typecheck.m"
        check_hlds__typecheck__Context_16 = check_hlds__typecheck__Context0_15;
#line 1249 "typecheck.m"
        check_hlds__typecheck__GoalInfo_17 = check_hlds__typecheck__GoalInfo0_14;
#line 1248 "typecheck.m"
      }
#line 1263 "typecheck.m"
    {
#line 1263 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, &check_hlds__typecheck__NumTypeAssignSets_18);
    }
#line 1264 "typecheck.m"
    {
#line 1264 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__WarnLimit_19);
    }
#line 1265 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__WarnLimit_19);
#line 1265 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1266 "typecheck.m"
      {
#line 1266 "typecheck.m"
        MR_Integer check_hlds__typecheck__ErrorLimit_20;
#line 1266 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_21;
#line 1266 "typecheck.m"
        MR_Word check_hlds__typecheck__OverloadedSymbolMap_22;

#line 1266 "typecheck.m"
        {
#line 1266 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ErrorLimit_20);
        }
#line 1267 "typecheck.m"
        {
#line 1267 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ClauseContext_21);
        }
#line 1268 "typecheck.m"
        {
#line 1268 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__OverloadedSymbolMap_22);
        }
#line 1269 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__ErrorLimit_20);
#line 1269 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1272 "typecheck.m"
          {
#line 1272 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorSpec_23;
#line 1272 "typecheck.m"
            MR_Word check_hlds__typecheck__V_32_32;

#line 1271 "typecheck.m"
            {
#line 1271 "typecheck.m"
              check_hlds__typecheck__ErrorSpec_23 = check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
            }
#line 1273 "typecheck.m"
            {
#line 1273 "typecheck.m"
              check_hlds__typecheck__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_32_32, 0) = ((MR_Box) (check_hlds__typecheck__ErrorSpec_23));
#line 1273 "typecheck.m"
            }
#line 1273 "typecheck.m"
            {
#line 1273 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_32_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
            }
#line 1277 "typecheck.m"
            check_hlds__typecheck__GoalExpr_24 = check_hlds__typecheck__GoalExpr0_13;
#line 1272 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28;
#line 1272 "typecheck.m"
          }
#line 1269 "typecheck.m"
        else
#line 1279 "typecheck.m"
          {
#line 1279 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybePrevSpec_25;
#line 1279 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_35_35;

#line 1279 "typecheck.m"
            {
#line 1279 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__MaybePrevSpec_25);
            }
#line 1285 "typecheck.m"
            if ((check_hlds__typecheck__MaybePrevSpec_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1281 "typecheck.m"
              {
#line 1281 "typecheck.m"
                MR_Word check_hlds__typecheck__WarnSpec_26;
#line 1281 "typecheck.m"
                MR_Word check_hlds__typecheck__V_34_34;

#line 1282 "typecheck.m"
                {
#line 1282 "typecheck.m"
                  check_hlds__typecheck__WarnSpec_26 = check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
                }
#line 1284 "typecheck.m"
                {
#line 1284 "typecheck.m"
                  check_hlds__typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_34_34, 0) = ((MR_Box) (check_hlds__typecheck__WarnSpec_26));
#line 1284 "typecheck.m"
                }
#line 1284 "typecheck.m"
                {
#line 1284 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_34_34, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__STATE_VARIABLE_Info_35_35);
                }
#line 1281 "typecheck.m"
              }
#line 1285 "typecheck.m"
            else
#line 1286 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_35_35 = check_hlds__typecheck__STATE_VARIABLE_Info_0_30;
#line 1288 "typecheck.m"
            {
#line 1288 "typecheck.m"
              check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_35_35, check_hlds__typecheck__STATE_VARIABLE_Info_31);
            }
#line 1279 "typecheck.m"
          }
#line 1266 "typecheck.m"
      }
#line 1265 "typecheck.m"
    else
#line 1292 "typecheck.m"
      {
#line 1292 "typecheck.m"
        check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
      }
#line 1295 "typecheck.m"
    {
#line 1295 "typecheck.m"
      MR_Word base;
#line 1295 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "typecheck.m"
      *check_hlds__typecheck__Goal_9 = base;
#line 1295 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_24));
#line 1295 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_17));
#line 1295 "typecheck.m"
    }
#line 1238 "typecheck.m"
  }
#line 1234 "typecheck.m"
}

#line 1170 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_8,
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet_10,
#line 1170 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_28,
#line 1170 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_29)
#line 1170 "typecheck.m"
{
#line 1182 "typecheck.m"
  {
#line 1182 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1182 "typecheck.m"
    if ((check_hlds__typecheck__TypeAssignSet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1182 "typecheck.m"
      {
#line 1183 "typecheck.m"
        {
#line 1183 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
#line 1183 "typecheck.m"
          return;
        }
#line 1182 "typecheck.m"
      }
#line 1182 "typecheck.m"
    else
#line 1182 "typecheck.m"
      {
#line 1182 "typecheck.m"
        MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_10, (MR_Integer) 1)));
#line 1182 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_10, (MR_Integer) 0)));

#line 1182 "typecheck.m"
        if ((check_hlds__typecheck__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1185 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_28;
#line 1182 "typecheck.m"
        else
#line 1187 "typecheck.m"
          {
#line 1187 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_36_36, (MR_Integer) 0)));
#line 1187 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorsSoFar_16;
#line 1187 "typecheck.m"
            MR_Word check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_36_36, (MR_Integer) 1)));

#line 1197 "typecheck.m"
            {
#line 1197 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__ErrorsSoFar_16);
            }
#line 1199 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ErrorsSoFar_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1202 "typecheck.m"
#line 1202 "typecheck.m"
              switch (check_hlds__typecheck__StuffToCheck_8) {
#line 1202 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1202 "typecheck.m"
                case (MR_Integer) 0:
#line 1203 "typecheck.m"
                  {
#line 1203 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_17;
#line 1203 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes2_18;
#line 1203 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings1_19;
#line 1203 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings2_20;
#line 1203 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes1_21;
#line 1203 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes2_22;
#line 1203 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes1_23;
#line 1203 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes2_24;
#line 1004 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_40_40;
#line 1005 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_41_41;

#line 1208 "typecheck.m"
                    {
#line 1208 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__V_37_37, &check_hlds__typecheck__VarTypes1_17);
                    }
#line 1209 "typecheck.m"
                    {
#line 1209 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign2_14, &check_hlds__typecheck__VarTypes2_18);
                    }
#line 1210 "typecheck.m"
                    {
#line 1210 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__V_37_37, &check_hlds__typecheck__TypeBindings1_19);
                    }
#line 1211 "typecheck.m"
                    {
#line 1211 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign2_14, &check_hlds__typecheck__TypeBindings2_20);
                    }
#line 1212 "typecheck.m"
                    {
#line 1212 "typecheck.m"
                      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes1_17, check_hlds__typecheck__HeadVars_9, &check_hlds__typecheck__HeadTypes1_21);
                    }
#line 1213 "typecheck.m"
                    {
#line 1213 "typecheck.m"
                      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes2_18, check_hlds__typecheck__HeadVars_9, &check_hlds__typecheck__HeadTypes2_22);
                    }
#line 1214 "typecheck.m"
                    {
#line 1214 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings1_19, check_hlds__typecheck__HeadTypes1_21, &check_hlds__typecheck__FinalHeadTypes1_23);
                    }
#line 1216 "typecheck.m"
                    {
#line 1216 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings2_20, check_hlds__typecheck__HeadTypes2_22, &check_hlds__typecheck__FinalHeadTypes2_24);
                    }
#line 1004 "typecheck.m"
                    {
#line 1004 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes1_23, check_hlds__typecheck__FinalHeadTypes2_24, &check_hlds__typecheck__V_40_40);
                    }
#line 1203 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1005 "typecheck.m"
                      {
#line 1005 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes2_24, check_hlds__typecheck__FinalHeadTypes1_23, &check_hlds__typecheck__V_41_41);
                      }
#line 1203 "typecheck.m"
                  }
#line 1202 "typecheck.m"
                  break;
#line 1202 "typecheck.m"
                case (MR_Integer) 1:
#line 1201 "typecheck.m"
                  check_hlds__typecheck__succeeded = MR_TRUE;
#line 1202 "typecheck.m"
                  break;
#line 1202 "typecheck.m"
              }
#line 1198 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1221 "typecheck.m"
              {
#line 1221 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_25;
#line 1221 "typecheck.m"
                MR_Word check_hlds__typecheck__OverloadedSymbolMap_26;
#line 1221 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_27;

#line 1221 "typecheck.m"
                {
#line 1221 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__ClauseContext_25);
                }
#line 1222 "typecheck.m"
                {
#line 1222 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__OverloadedSymbolMap_26);
                }
#line 1224 "typecheck.m"
                {
#line 1224 "typecheck.m"
                  check_hlds__typecheck__Spec_27 = check_hlds__typecheck_errors__report_ambiguity_error_5_f_0(check_hlds__typecheck__ClauseContext_25, check_hlds__typecheck__Context_7, check_hlds__typecheck__OverloadedSymbolMap_26, check_hlds__typecheck__V_37_37, check_hlds__typecheck__TypeAssign2_14);
                }
#line 1226 "typecheck.m"
                {
#line 1226 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_27, check_hlds__typecheck__STATE_VARIABLE_Info_0_28, check_hlds__typecheck__STATE_VARIABLE_Info_29);
                }
#line 1221 "typecheck.m"
              }
#line 1198 "typecheck.m"
            else
#line 1198 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_28;
#line 1187 "typecheck.m"
          }
#line 1182 "typecheck.m"
      }
#line 1182 "typecheck.m"
  }
#line 1170 "typecheck.m"
}

#line 2046 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2046 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2046 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2046 "typecheck.m"
{
#line 2046 "typecheck.m"
  {
#line 2046 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2046 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__3_3;

#line 2046 "typecheck.m"
    {
#line 2046 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_HeadVar__3_3);
    }
#line 2046 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__3_3));
#line 2046 "typecheck.m"
  }
#line 2046 "typecheck.m"
}

#line 1129 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_10,
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_22,
#line 1129 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_23,
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1129 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1129 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1129 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
#line 1129 "typecheck.m"
{
#line 1133 "typecheck.m"
  {
#line 1133 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__Body0_14;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_15;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgVectorKind_16;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_17;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_31_31;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__Specs_67;
#line 1133 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_68;
#line 1135 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 1135 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 1135 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 1135 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 2037 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgVectorTypeErrors_69;
#line 2038 "typecheck.m"
    MR_Word check_hlds__typecheck__V_80_80;
#line 2039 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 2039 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;
#line 2039 "typecheck.m"
    MR_Word check_hlds__typecheck__V_72_72;
#line 1149 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52;
#line 1149 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 1149 "typecheck.m"
    MR_Word check_hlds__typecheck__V_55_55;
#line 1149 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 1149 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;

#line 1134 "typecheck.m"
    {
#line 1134 "typecheck.m"
      check_hlds__typecheck__Body0_14 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Clause_0_22);
    }
#line 1135 "typecheck.m"
    check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 0)));
#line 1135 "typecheck.m"
    check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 1)));
#line 1135 "typecheck.m"
    check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 2)));
#line 1135 "typecheck.m"
    check_hlds__typecheck__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 3)));
#line 1135 "typecheck.m"
    check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 4)));
#line 1138 "typecheck.m"
    check_hlds__typecheck__ArgVectorKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2034 "typecheck.m"
    {
#line 2034 "typecheck.m"
      check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__Context_15, check_hlds__typecheck__ArgVectorKind_16, (MR_Integer) 1, check_hlds__typecheck__HeadVars_9, check_hlds__typecheck__ArgTypes_10, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_67, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_68);
    }
#line 2038 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_68)) == (MR_mktag((MR_Integer) 1)));
#line 2038 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2038 "typecheck.m"
      {
#line 2038 "typecheck.m"
        check_hlds__typecheck__ArgVectorTypeErrors_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_68, (MR_Integer) 0)));
#line 2039 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_69)) == (MR_mktag((MR_Integer) 1)));
#line 2039 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2039 "typecheck.m"
          {
#line 2039 "typecheck.m"
            check_hlds__typecheck__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_69, (MR_Integer) 0)));
#line 2039 "typecheck.m"
            check_hlds__typecheck__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_69, (MR_Integer) 1)));
#line 2039 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 2039 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2039 "typecheck.m"
              {
#line 2039 "typecheck.m"
                check_hlds__typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_80_80, (MR_Integer) 0)));
#line 2039 "typecheck.m"
                check_hlds__typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_80_80, (MR_Integer) 1)));
#line 2039 "typecheck.m"
              }
#line 2039 "typecheck.m"
          }
#line 2038 "typecheck.m"
      }
#line 2037 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2041 "typecheck.m"
      {
#line 2041 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_73;
#line 2041 "typecheck.m"
        MR_Word check_hlds__typecheck__AllArgsSpec_74;

#line 2041 "typecheck.m"
        {
#line 2041 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__ClauseContext_73);
        }
#line 2042 "typecheck.m"
        {
#line 2042 "typecheck.m"
          check_hlds__typecheck__AllArgsSpec_74 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_73, check_hlds__typecheck__Context_15, check_hlds__typecheck__ArgVectorKind_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, check_hlds__typecheck__ArgVectorTypeErrors_69);
        }
#line 2044 "typecheck.m"
        {
#line 2044 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_74, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
        }
#line 2041 "typecheck.m"
      }
#line 2037 "typecheck.m"
    else
#line 2046 "typecheck.m"
      {
#line 2046 "typecheck.m"
        MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29;

#line 2046 "typecheck.m"
        {
#line 2046 "typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[1], check_hlds__typecheck__Specs_67, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_26)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29);
        }
#line 2046 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29);
#line 2046 "typecheck.m"
      }
#line 1141 "typecheck.m"
    {
#line 1141 "typecheck.m"
      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Body0_14, &check_hlds__typecheck__Body_17, check_hlds__typecheck__Context_15, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_29_29, &check_hlds__typecheck__STATE_VARIABLE_Info_31_31);
    }
#line 1149 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 0)));
#line 1149 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 1)));
#line 1149 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 2)));
#line 1149 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 3)));
#line 1149 "typecheck.m"
    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 4)));
#line 1149 "typecheck.m"
    {
#line 1149 "typecheck.m"
      MR_Word base;
#line 1149 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Clause_23 = base;
#line 1149 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_52_52));
#line 1149 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Body_17));
#line 1149 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 1149 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_55_55));
#line 1149 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_56_56));
#line 1149 "typecheck.m"
    }
#line 1150 "typecheck.m"
    {
#line 1150 "typecheck.m"
      check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(check_hlds__typecheck__Context_15, (MR_Integer) 0, check_hlds__typecheck__HeadVars_9, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_31_31, check_hlds__typecheck__STATE_VARIABLE_Info_27);
    }
#line 1133 "typecheck.m"
  }
#line 1129 "typecheck.m"
}

#line 1089 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
#line 1089 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1089 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
#line 1089 "typecheck.m"
{
#line 1094 "typecheck.m"
  {
#line 1094 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1094 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1094 "typecheck.m"
      {
#line 1094 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1094 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1094 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 1094 "typecheck.m"
      }
#line 1094 "typecheck.m"
    else
#line 1096 "typecheck.m"
      {
#line 1096 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 1096 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 1096 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause_21;
#line 1096 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29;
#line 1096 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_30_30;
#line 1099 "typecheck.m"
        MR_Word * check_hlds__typecheck__AddrClauses_33;

#line 1097 "typecheck.m"
        {
#line 1097 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clause0_19, &check_hlds__typecheck__Clause_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_30_30);
        }
#line 1096 "typecheck.m"
        {
#line 1096 "typecheck.m"
          MR_Word base;
#line 1096 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 1096 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Clause_21));
#line 1096 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 1096 "typecheck.m"
        }
#line 1096 "typecheck.m"
        check_hlds__typecheck__AddrClauses_33 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1));
#line 1099 "typecheck.m"
        {
#line 1099 "typecheck.m"
          check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clauses0_20, check_hlds__typecheck__AddrClauses_33, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6, check_hlds__typecheck__STATE_VARIABLE_Info_30_30, check_hlds__typecheck__STATE_VARIABLE_Info_8);
        }
#line 1096 "typecheck.m"
      }
#line 1094 "typecheck.m"
  }
#line 1089 "typecheck.m"
}

#line 984 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 984 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 984 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 984 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 984 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 984 "typecheck.m"
{
#line 987 "typecheck.m"
  {
#line 987 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 987 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "typecheck.m"
      {
#line 987 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 987 "typecheck.m"
          {
#line 987 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 987 "typecheck.m"
            *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 987 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 987 "typecheck.m"
          }
#line 987 "typecheck.m"
      }
#line 987 "typecheck.m"
    else
#line 989 "typecheck.m"
      {
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_16_16;
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintB_7;
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsB_8;
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassName_11;
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesA_12;
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesB_13;
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesA0_14;
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesB0_15;
#line 989 "typecheck.m"
        MR_Word check_hlds__typecheck__V_17_17;

#line 988 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 988 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 988 "typecheck.m"
          {
#line 988 "typecheck.m"
            check_hlds__typecheck__ConstraintB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 988 "typecheck.m"
            check_hlds__typecheck__ConstraintsB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 990 "typecheck.m"
            check_hlds__typecheck__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 0)));
#line 990 "typecheck.m"
            check_hlds__typecheck__ArgTypesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 1)));
#line 991 "typecheck.m"
            check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 0)));
#line 991 "typecheck.m"
            check_hlds__typecheck__ArgTypesB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 1)));
#line 991 "typecheck.m"
            {
#line 991 "typecheck.m"
              check_hlds__typecheck__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__typecheck__ClassName_11, check_hlds__typecheck__V_17_17);
            }
#line 989 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 989 "typecheck.m"
              {
#line 17215 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 992 "typecheck.m"
                {
#line 992 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__ArgTypesB_13);
                }
#line 989 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 989 "typecheck.m"
                  {
#line 993 "typecheck.m"
                    {
#line 993 "typecheck.m"
                      check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ConstraintsA_6, check_hlds__typecheck__ConstraintsB_8, &check_hlds__typecheck__TypesA0_14, &check_hlds__typecheck__TypesB0_15);
                    }
#line 989 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 989 "typecheck.m"
                      {
#line 994 "typecheck.m"
                        {
#line 994 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__TypesA0_14);
                        }
#line 995 "typecheck.m"
                        {
#line 995 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesB_13, check_hlds__typecheck__TypesB0_15);
                        }
#line 995 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 989 "typecheck.m"
                      }
#line 989 "typecheck.m"
                  }
#line 989 "typecheck.m"
              }
#line 988 "typecheck.m"
          }
#line 989 "typecheck.m"
      }
#line 987 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 987 "typecheck.m"
  }
#line 984 "typecheck.m"
}

#line 950 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 950 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14)
#line 950 "typecheck.m"
{
#line 955 "typecheck.m"
  {
#line 955 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_29_29;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_18_43;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesA_15;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesB_16;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesA_17;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesB_18;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListA_19;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListB_20;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 0)));
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 1)));
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 0)));
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 1)));
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesA_38;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesB_39;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesA_40;
#line 955 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesB_41;
#line 1004 "typecheck.m"
    MR_Word check_hlds__typecheck__V_46_46;
#line 1005 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;

#line 977 "typecheck.m"
    {
#line 977 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36);
    }
#line 955 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 955 "typecheck.m"
      {
#line 978 "typecheck.m"
        {
#line 978 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37);
        }
#line 955 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 955 "typecheck.m"
          {
#line 979 "typecheck.m"
            {
#line 979 "typecheck.m"
              check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36, &check_hlds__typecheck__UnivTypesA_38, &check_hlds__typecheck__UnivTypesB_39);
            }
#line 955 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 955 "typecheck.m"
              {
#line 980 "typecheck.m"
                {
#line 980 "typecheck.m"
                  check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37, &check_hlds__typecheck__ExistTypesA_40, &check_hlds__typecheck__ExistTypesB_41);
                }
#line 955 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 955 "typecheck.m"
                  {
#line 17378 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_18_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 981 "typecheck.m"
                    {
#line 981 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesA_15 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesA_40, check_hlds__typecheck__UnivTypesA_38);
                    }
#line 982 "typecheck.m"
                    {
#line 982 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesB_16 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesB_41, check_hlds__typecheck__UnivTypesB_39);
                    }
#line 958 "typecheck.m"
                    {
#line 958 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsA_9, &check_hlds__typecheck__ExistQVarTypesA_17);
                    }
#line 959 "typecheck.m"
                    {
#line 959 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsB_12, &check_hlds__typecheck__ExistQVarTypesB_18);
                    }
#line 960 "typecheck.m"
                    check_hlds__typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 17402 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 960 "typecheck.m"
                    {
#line 960 "typecheck.m"
                      check_hlds__typecheck__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesA_15));
#line 960 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__V_24_24));
#line 960 "typecheck.m"
                    }
#line 960 "typecheck.m"
                    {
#line 960 "typecheck.m"
                      check_hlds__typecheck__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesA_10));
#line 960 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__V_23_23));
#line 960 "typecheck.m"
                    }
#line 960 "typecheck.m"
                    {
#line 960 "typecheck.m"
                      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesA_17));
#line 960 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 960 "typecheck.m"
                    }
#line 960 "typecheck.m"
                    {
#line 960 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_21_21, &check_hlds__typecheck__TypesListA_19);
                    }
#line 961 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 961 "typecheck.m"
                    {
#line 961 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesB_16));
#line 961 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 961 "typecheck.m"
                    }
#line 961 "typecheck.m"
                    {
#line 961 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesB_13));
#line 961 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 961 "typecheck.m"
                    }
#line 961 "typecheck.m"
                    {
#line 961 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesB_18));
#line 961 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 961 "typecheck.m"
                    }
#line 961 "typecheck.m"
                    {
#line 961 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_25_25, &check_hlds__typecheck__TypesListB_20);
                    }
#line 1004 "typecheck.m"
                    {
#line 1004 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListA_19, check_hlds__typecheck__TypesListB_20, &check_hlds__typecheck__V_46_46);
                    }
#line 955 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1005 "typecheck.m"
                      {
#line 1005 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListB_20, check_hlds__typecheck__TypesListA_19, &check_hlds__typecheck__V_47_47);
                      }
#line 955 "typecheck.m"
                  }
#line 955 "typecheck.m"
              }
#line 955 "typecheck.m"
          }
#line 955 "typecheck.m"
      }
#line 955 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 955 "typecheck.m"
  }
#line 950 "typecheck.m"
}

#line 935 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 935 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 935 "typecheck.m"
{
#line 935 "typecheck.m"
  {
#line 935 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 935 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0, 1);
#line 935 "typecheck.m"
  }
#line 935 "typecheck.m"
}

#line 935 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 935 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 935 "typecheck.m"
{
#line 935 "typecheck.m"
  {
#line 935 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 935 "typecheck.m"
    {
#line 938 "typecheck.m"
      {
#line 938 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7)), (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3);
      }
#line 937 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 937 "typecheck.m"
      if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded)
#line 937 "typecheck.m"
        {
#line 937 "typecheck.m"
          check_hlds__typecheck__is_head_class_constraint_2_p_0_1(check_hlds__typecheck__env_ptr);
        }
#line 935 "typecheck.m"
    }
#line 935 "typecheck.m"
  }
#line 935 "typecheck.m"
}

#line 935 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 935 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 935 "typecheck.m"
{
#line 935 "typecheck.m"
  {
#line 935 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 935 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0) == 0)
#line 935 "typecheck.m"
      {
#line 936 "typecheck.m"
        {
#line 936 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7, check_hlds__typecheck__is_head_class_constraint_2_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 935 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_FALSE;
#line 935 "typecheck.m"
      }
#line 935 "typecheck.m"
    else
#line 935 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_TRUE;
#line 935 "typecheck.m"
  }
#line 935 "typecheck.m"
}

#line 930 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 930 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 930 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
#line 930 "typecheck.m"
{
#line 930 "typecheck.m"
  {
#line 930 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s check_hlds__typecheck__env;

#line 930 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3 = check_hlds__typecheck__HeadTypeVars_3;
#line 933 "typecheck.m"
    {
#line 934 "typecheck.m"
      MR_Word check_hlds__typecheck___ClassName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));

#line 934 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));
#line 935 "typecheck.m"
      {
#line 935 "typecheck.m"
        check_hlds__typecheck__is_head_class_constraint_2_p_0_3(&check_hlds__typecheck__env);
      }
#line 935 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 933 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 933 "typecheck.m"
    }
#line 930 "typecheck.m"
  }
#line 930 "typecheck.m"
}

#line 927 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
#line 927 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 927 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 927 "typecheck.m"
{
#line 927 "typecheck.m"
  {
#line 927 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 927 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 927 "typecheck.m"
    {
#line 927 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 927 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 927 "typecheck.m"
  }
#line 927 "typecheck.m"
}

#line 914 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
#line 914 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 914 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
#line 914 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 914 "typecheck.m"
  MR_Word * check_hlds__typecheck__UnprovenCs_10)
#line 914 "typecheck.m"
{
#line 918 "typecheck.m"
  {
#line 918 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 918 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 918 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 918 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCs_8;
#line 918 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCs_9;
#line 918 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;
#line 927 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 927 "typecheck.m"
    {
#line 927 "typecheck.m"
      check_hlds__typecheck__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 927 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[1]));
#line 927 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__typecheck__restrict_to_head_vars_4_p_0_1));
#line 927 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 927 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 3) = ((MR_Box) (check_hlds__typecheck__ArgVarTypes_7));
#line 927 "typecheck.m"
    }
#line 927 "typecheck.m"
    {
#line 927 "typecheck.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__V_16_16, check_hlds__typecheck__UnivCs0_5, &check_hlds__typecheck__UnivCs_8, check_hlds__typecheck__UnprovenCs_10);
    }
#line 927 "typecheck.m"
    {
#line 927 "typecheck.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__V_16_16, check_hlds__typecheck__ExistCs0_6, &check_hlds__typecheck__ExistCs_9, &check_hlds__typecheck__V_11_11);
    }
#line 918 "typecheck.m"
    {
#line 918 "typecheck.m"
      MR_Word base;
#line 918 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 918 "typecheck.m"
      *check_hlds__typecheck__HeadVar__3_3 = base;
#line 918 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__UnivCs_8));
#line 918 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ExistCs_9));
#line 918 "typecheck.m"
    }
#line 918 "typecheck.m"
  }
#line 914 "typecheck.m"
}

#line 879 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
#line 879 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
#line 879 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExistQVars_6,
#line 879 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeParams0_7,
#line 879 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadTypeParams_8)
#line 879 "typecheck.m"
{
#line 883 "typecheck.m"
  {
#line 883 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 883 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 883 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVarsSet_9;
#line 883 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadTypeParamsSet_10;
#line 883 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarsSet_11;
#line 883 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQVarsSet_12;
#line 883 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQVars_13;

#line 891 "typecheck.m"
    {
#line 891 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVars_5, &check_hlds__typecheck__ArgTypeVarsSet_9);
    }
#line 892 "typecheck.m"
    {
#line 892 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__HeadTypeParams0_7, &check_hlds__typecheck__HeadTypeParamsSet_10);
    }
#line 893 "typecheck.m"
    {
#line 893 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__HeadTypeParamsSet_10, &check_hlds__typecheck__ExistQVarsSet_11);
    }
#line 894 "typecheck.m"
    {
#line 894 "typecheck.m"
      mercury__set__difference_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__ExistQVarsSet_11, &check_hlds__typecheck__UnivQVarsSet_12);
    }
#line 895 "typecheck.m"
    {
#line 895 "typecheck.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ExistQVarsSet_11, check_hlds__typecheck__ExistQVars_6);
    }
#line 896 "typecheck.m"
    {
#line 896 "typecheck.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVarsSet_12, &check_hlds__typecheck__UnivQVars_13);
    }
#line 904 "typecheck.m"
    {
#line 904 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVars_13, check_hlds__typecheck__HeadTypeParams0_7, check_hlds__typecheck__HeadTypeParams_8);
    }
#line 883 "typecheck.m"
  }
#line 879 "typecheck.m"
}

#line 857 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
#line 857 "typecheck.m"
  MR_Word check_hlds__typecheck__Renaming_4,
#line 857 "typecheck.m"
  MR_Word check_hlds__typecheck__Origin0_5,
#line 857 "typecheck.m"
  MR_Word * check_hlds__typecheck__Origin_6)
#line 857 "typecheck.m"
{
#line 861 "typecheck.m"
  {
#line 861 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin0_5)) == (MR_mktag((MR_Integer) 1)));
#line 861 "typecheck.m"
    MR_Word check_hlds__typecheck__MethodName_7;
#line 861 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_8;

#line 861 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 861 "typecheck.m"
      {
#line 861 "typecheck.m"
        check_hlds__typecheck__MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 0)));
#line 861 "typecheck.m"
        check_hlds__typecheck__Constraints0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 1)));
#line 863 "typecheck.m"
        {
#line 863 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 0)));
#line 863 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 1)));
#line 863 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceConstraints0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 2)));
#line 863 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassMethodClassContext0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 3)));
#line 863 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceTypes_13;
#line 863 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceConstraints_14;
#line 863 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassMethodClassContext_15;
#line 863 "typecheck.m"
          MR_Word check_hlds__typecheck__Constraints_16;

#line 864 "typecheck.m"
          {
#line 864 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceTypes0_10, &check_hlds__typecheck__InstanceTypes_13);
          }
#line 866 "typecheck.m"
          {
#line 866 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceConstraints0_11, &check_hlds__typecheck__InstanceConstraints_14);
          }
#line 868 "typecheck.m"
          {
#line 868 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__ClassMethodClassContext0_12, &check_hlds__typecheck__ClassMethodClassContext_15);
          }
#line 870 "typecheck.m"
          {
#line 870 "typecheck.m"
            check_hlds__typecheck__Constraints_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 870 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 0) = ((MR_Box) (check_hlds__typecheck__ClassId_9));
#line 870 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 1) = ((MR_Box) (check_hlds__typecheck__InstanceTypes_13));
#line 870 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 2) = ((MR_Box) (check_hlds__typecheck__InstanceConstraints_14));
#line 870 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 3) = ((MR_Box) (check_hlds__typecheck__ClassMethodClassContext_15));
#line 870 "typecheck.m"
          }
#line 872 "typecheck.m"
          {
#line 872 "typecheck.m"
            MR_Word base;
#line 872 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "typecheck.m"
            *check_hlds__typecheck__Origin_6 = base;
#line 872 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__MethodName_7));
#line 872 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Constraints_16));
#line 872 "typecheck.m"
          }
#line 863 "typecheck.m"
        }
#line 861 "typecheck.m"
      }
#line 861 "typecheck.m"
    else
#line 874 "typecheck.m"
      *check_hlds__typecheck__Origin_6 = check_hlds__typecheck__Origin0_5;
#line 861 "typecheck.m"
  }
#line 857 "typecheck.m"
}

#line 806 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
#line 806 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_5,
#line 806 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
#line 806 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
#line 806 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7)
#line 806 "typecheck.m"
{
#line 811 "typecheck.m"
  {
#line 811 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet0_9;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__PredPieces_10;
#line 811 "typecheck.m"
    MR_String check_hlds__typecheck__PredName_11;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__StubClause_12;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet_13;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep_14;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers_15;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_35;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers_36;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__PredNameVar_37;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__UnifyGoal_38;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleName_39;
#line 811 "typecheck.m"
    MR_String check_hlds__typecheck__CalleeName_40;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_41;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__CallGoal_42;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_43;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_44;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 811 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;

#line 811 "typecheck.m"
    {
#line 811 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18);
    }
#line 812 "typecheck.m"
    {
#line 812 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__VarSet0_9);
    }
#line 813 "typecheck.m"
    {
#line 813 "typecheck.m"
      check_hlds__typecheck__PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__typecheck__ModuleInfo_7, (MR_Integer) 0, check_hlds__typecheck__PredId_5);
    }
#line 815 "typecheck.m"
    {
#line 815 "typecheck.m"
      check_hlds__typecheck__PredName_11 = parse_tree__error_util__error_pieces_to_string_1_f_0(check_hlds__typecheck__PredPieces_10);
    }
#line 831 "typecheck.m"
    {
#line 831 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__Markers0_35);
    }
#line 832 "typecheck.m"
    {
#line 832 "typecheck.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, check_hlds__typecheck__Markers0_35, &check_hlds__typecheck__Markers_36);
    }
#line 833 "typecheck.m"
    {
#line 833 "typecheck.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_36, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    }
#line 836 "typecheck.m"
    {
#line 836 "typecheck.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "PredName", &check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__VarSet0_9, &check_hlds__typecheck__VarSet_13);
    }
#line 837 "typecheck.m"
    {
#line 837 "typecheck.m"
      hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__PredName_11, &check_hlds__typecheck__UnifyGoal_38);
    }
#line 841 "typecheck.m"
    {
#line 841 "typecheck.m"
      check_hlds__typecheck__ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    }
#line 842 "typecheck.m"
    {
#line 842 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(check_hlds__typecheck__ModuleName_39);
    }
#line 842 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 843 "typecheck.m"
      check_hlds__typecheck__CalleeName_40 = (MR_String) "sorry";
#line 842 "typecheck.m"
    else
#line 845 "typecheck.m"
      check_hlds__typecheck__CalleeName_40 = (MR_String) "no_clauses";
#line 847 "typecheck.m"
    {
#line 847 "typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_41);
    }
#line 848 "typecheck.m"
    {
#line 848 "typecheck.m"
      check_hlds__typecheck__V_49_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 849 "typecheck.m"
    {
#line 849 "typecheck.m"
      check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (check_hlds__typecheck__PredNameVar_37));
#line 849 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "typecheck.m"
    }
#line 850 "typecheck.m"
    {
#line 850 "typecheck.m"
      check_hlds__typecheck__V_56_56 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 848 "typecheck.m"
    {
#line 848 "typecheck.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__typecheck__V_49_49, check_hlds__typecheck__CalleeName_40, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__typecheck__V_54_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_56_56, check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__Context_41, &check_hlds__typecheck__CallGoal_42);
    }
#line 853 "typecheck.m"
    {
#line 853 "typecheck.m"
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__typecheck__Context_41, &check_hlds__typecheck__GoalInfo_43);
    }
#line 854 "typecheck.m"
    {
#line 854 "typecheck.m"
      check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__CallGoal_42));
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "typecheck.m"
    }
#line 854 "typecheck.m"
    {
#line 854 "typecheck.m"
      check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__UnifyGoal_38));
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 1) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 854 "typecheck.m"
    }
#line 854 "typecheck.m"
    {
#line 854 "typecheck.m"
      check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 2) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 854 "typecheck.m"
    }
#line 854 "typecheck.m"
    {
#line 854 "typecheck.m"
      check_hlds__typecheck__Body_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 0) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 854 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_43));
#line 854 "typecheck.m"
    }
#line 855 "typecheck.m"
    {
#line 855 "typecheck.m"
      check_hlds__typecheck__StubClause_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 855 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 1) = ((MR_Box) (check_hlds__typecheck__Body_44));
#line 855 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 3) = ((MR_Box) (check_hlds__typecheck__Context_41));
#line 855 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "typecheck.m"
    }
#line 818 "typecheck.m"
    {
#line 818 "typecheck.m"
      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__StubClause_12));
#line 818 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "typecheck.m"
    }
#line 818 "typecheck.m"
    {
#line 818 "typecheck.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_21_21, &check_hlds__typecheck__ClausesRep_14);
    }
#line 819 "typecheck.m"
    {
#line 819 "typecheck.m"
      check_hlds__typecheck__ItemNumbers_15 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 820 "typecheck.m"
    {
#line 820 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_14, check_hlds__typecheck__ItemNumbers_15, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23);
    }
#line 821 "typecheck.m"
    {
#line 821 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__typecheck__VarSet_13, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24);
    }
#line 822 "typecheck.m"
    {
#line 822 "typecheck.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, check_hlds__typecheck__STATE_VARIABLE_PredInfo_17);
    }
#line 811 "typecheck.m"
  }
#line 806 "typecheck.m"
}

#line 779 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_8,
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__Impl_9,
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__TVar_10,
#line 779 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 779 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17)
#line 779 "typecheck.m"
{
#line 783 "typecheck.m"
  {
#line 783 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 783 "typecheck.m"
    MR_String check_hlds__typecheck__Name_12;
#line 783 "typecheck.m"
    MR_String check_hlds__typecheck__VarName_13;

#line 784 "typecheck.m"
    {
#line 784 "typecheck.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__TypeVarSet_8, check_hlds__typecheck__TVar_10, &check_hlds__typecheck__Name_12);
    }
#line 785 "typecheck.m"
    {
#line 785 "typecheck.m"
      check_hlds__typecheck__VarName_13 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", check_hlds__typecheck__Name_12);
    }
#line 786 "typecheck.m"
    {
#line 786 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(check_hlds__typecheck__Impl_9, check_hlds__typecheck__VarName_13);
    }
#line 786 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 786 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_17 = check_hlds__typecheck__STATE_VARIABLE_Info_0_16;
#line 786 "typecheck.m"
    else
#line 789 "typecheck.m"
      {
#line 789 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_14;
#line 789 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_15;

#line 789 "typecheck.m"
        {
#line 789 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_16, &check_hlds__typecheck__ClauseContext_14);
        }
#line 790 "typecheck.m"
        {
#line 790 "typecheck.m"
          check_hlds__typecheck__Spec_15 = check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(check_hlds__typecheck__ClauseContext_14, check_hlds__typecheck__Context_7, check_hlds__typecheck__VarName_13);
        }
#line 792 "typecheck.m"
        {
#line 792 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_15, check_hlds__typecheck__STATE_VARIABLE_Info_0_16, check_hlds__typecheck__STATE_VARIABLE_Info_17);
        }
#line 789 "typecheck.m"
      }
#line 783 "typecheck.m"
  }
#line 779 "typecheck.m"
}

#line 773 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
#line 773 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 773 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 773 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 773 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 773 "typecheck.m"
{
#line 773 "typecheck.m"
  {
#line 773 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 773 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17;

#line 773 "typecheck.m"
    {
#line 773 "typecheck.m"
      check_hlds__typecheck__check_mention_existq_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17);
    }
#line 773 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17));
#line 773 "typecheck.m"
  }
#line 773 "typecheck.m"
}

#line 766 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
#line 766 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 766 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVars_7,
#line 766 "typecheck.m"
  MR_Word check_hlds__typecheck__Clause_8,
#line 766 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 766 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21)
#line 766 "typecheck.m"
{
#line 769 "typecheck.m"
  {
#line 769 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 769 "typecheck.m"
    MR_Word check_hlds__typecheck__Goal_10;
#line 771 "typecheck.m"
    MR_Word check_hlds__typecheck__Impl_17;
#line 771 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 771 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 771 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;
#line 771 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 771 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_13_13;
#line 771 "typecheck.m"
    MR_Word check_hlds__typecheck__V_14_14;
#line 771 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 771 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;

#line 770 "typecheck.m"
    {
#line 770 "typecheck.m"
      check_hlds__typecheck__Goal_10 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__Clause_8);
    }
#line 771 "typecheck.m"
    check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 0)));
#line 771 "typecheck.m"
    check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 1)));
#line 771 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 771 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 771 "typecheck.m"
      {
#line 771 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 1)));
#line 771 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 2)));
#line 771 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 3)));
#line 771 "typecheck.m"
        check_hlds__typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 4)));
#line 771 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 5)));
#line 771 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 6)));
#line 771 "typecheck.m"
        check_hlds__typecheck__Impl_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 7)));
#line 772 "typecheck.m"
        {
#line 772 "typecheck.m"
          MR_Word check_hlds__typecheck__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 3)));
#line 772 "typecheck.m"
          MR_Word check_hlds__typecheck__V_23_23;
#line 772 "typecheck.m"
          MR_Word check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 0)));
#line 772 "typecheck.m"
          MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 1)));
#line 772 "typecheck.m"
          MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 2)));
#line 772 "typecheck.m"
          MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 4)));
#line 773 "typecheck.m"
          MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21;

#line 773 "typecheck.m"
          {
#line 773 "typecheck.m"
            check_hlds__typecheck__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 773 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0]));
#line 773 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__check_existq_clause_5_p_0_1));
#line 773 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 773 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 3) = ((MR_Box) (check_hlds__typecheck__Context_19));
#line 773 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 4) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_6));
#line 773 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 5) = ((MR_Box) (check_hlds__typecheck__Impl_17));
#line 773 "typecheck.m"
          }
#line 773 "typecheck.m"
          {
#line 773 "typecheck.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_23_23, check_hlds__typecheck__ExistQVars_7, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_20)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21);
          }
#line 773 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_21 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21);
#line 772 "typecheck.m"
        }
#line 771 "typecheck.m"
      }
#line 771 "typecheck.m"
    else
#line 771 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_21 = check_hlds__typecheck__STATE_VARIABLE_Info_0_20;
#line 769 "typecheck.m"
  }
#line 766 "typecheck.m"
}

#line 750 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__report_any_non_contiguous_clauses_5_f_0(
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7,
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_8,
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__PredInfo_9,
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__ItemNumbers_10,
#line 750 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_11)
#line 750 "typecheck.m"
{
#line 755 "typecheck.m"
  {
#line 755 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 755 "typecheck.m"
    MR_Word check_hlds__typecheck__Specs_12;
#line 755 "typecheck.m"
    MR_Word check_hlds__typecheck__FirstRegion_13;
#line 755 "typecheck.m"
    MR_Word check_hlds__typecheck__SecondRegion_14;
#line 755 "typecheck.m"
    MR_Word check_hlds__typecheck__LaterRegions_15;

#line 756 "typecheck.m"
    {
#line 756 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers_10, check_hlds__typecheck__Type_11, &check_hlds__typecheck__FirstRegion_13, &check_hlds__typecheck__SecondRegion_14, &check_hlds__typecheck__LaterRegions_15);
    }
#line 755 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 760 "typecheck.m"
      {
#line 760 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_16;

#line 759 "typecheck.m"
        {
#line 759 "typecheck.m"
          check_hlds__typecheck__Spec_16 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__PredInfo_9, check_hlds__typecheck__FirstRegion_13, check_hlds__typecheck__SecondRegion_14, check_hlds__typecheck__LaterRegions_15);
        }
#line 761 "typecheck.m"
        {
#line 761 "typecheck.m"
          check_hlds__typecheck__Specs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Specs_12, 0) = ((MR_Box) (check_hlds__typecheck__Spec_16));
#line 761 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Specs_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "typecheck.m"
        }
#line 760 "typecheck.m"
      }
#line 755 "typecheck.m"
    else
#line 763 "typecheck.m"
      check_hlds__typecheck__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "typecheck.m"
    return check_hlds__typecheck__Specs_12;
#line 755 "typecheck.m"
  }
#line 750 "typecheck.m"
}

#line 717 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
#line 717 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 717 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 717 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 717 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 717 "typecheck.m"
{
#line 717 "typecheck.m"
  {
#line 717 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 717 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21;

#line 717 "typecheck.m"
    {
#line 717 "typecheck.m"
      check_hlds__typecheck__check_existq_clause_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21);
    }
#line 717 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21));
#line 717 "typecheck.m"
  }
#line 717 "typecheck.m"
}

#line 557 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
#line 557 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 557 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 557 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69,
#line 557 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_70,
#line 557 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_71,
#line 557 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_72,
#line 557 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_12)
#line 557 "typecheck.m"
{
#line 563 "typecheck.m"
  {
#line 563 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0_17;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers_18;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVars_19;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseVarSet_20;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes0_21;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__PredStatus_22;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_23;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_25;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes0_26;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_27;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__Inferring_28;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConstraints_30;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ClassTable_32;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints_33;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunction_34;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers_35;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__Clauses0_36;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__Clauses_37;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_38;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_39;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredVarTypes0_40;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredTypeConstraints0_41;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstraintProofMap_42;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstraintMap_43;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarRenaming_44;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypeRenaming_45;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredVarTypes_46;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes1_47;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes_50;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep_51;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_52;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_53;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredTypeConstraints_54;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__UnprovenBodyConstraints_55;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_90_90;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_92_92;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_94_94;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105;
#line 563 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_108_108;
#line 570 "typecheck.m"
    MR_Word check_hlds__typecheck___ArgTypeVarSet_24;

#line 563 "typecheck.m"
    {
#line 563 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73);
    }
#line 564 "typecheck.m"
    {
#line 564 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__ItemNumbers_18);
    }
#line 565 "typecheck.m"
    {
#line 565 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__HeadVars_19);
    }
#line 566 "typecheck.m"
    {
#line 566 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ClauseVarSet_20);
    }
#line 567 "typecheck.m"
    {
#line 567 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ExplicitVarTypes0_21);
    }
#line 568 "typecheck.m"
    {
#line 568 "typecheck.m"
      hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredStatus_22);
    }
#line 569 "typecheck.m"
    {
#line 569 "typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__TypeVarSet0_23);
    }
#line 570 "typecheck.m"
    {
#line 570 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck___ArgTypeVarSet_24, &check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__ArgTypes0_26);
    }
#line 572 "typecheck.m"
    {
#line 572 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Markers0_27);
    }
#line 573 "typecheck.m"
    {
#line 573 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_27, (MR_Integer) 2);
    }
#line 573 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 578 "typecheck.m"
      {
#line 578 "typecheck.m"
        check_hlds__typecheck__Inferring_28 = (MR_Integer) 1;
#line 580 "typecheck.m"
        {
#line 580 "typecheck.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Inferring type of ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
        }
#line 583 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "typecheck.m"
        check_hlds__typecheck__PredConstraints_30 = (MR_Word) &check_hlds__typecheck_scalar_common_1[21];
#line 578 "typecheck.m"
      }
#line 573 "typecheck.m"
    else
#line 586 "typecheck.m"
      {
#line 586 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_121_121;
#line 586 "typecheck.m"
        MR_Word check_hlds__typecheck__UnivTVars_31;
#line 586 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84;
#line 586 "typecheck.m"
        MR_Word check_hlds__typecheck__V_85_85;
#line 586 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86;
#line 586 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87;
#line 593 "typecheck.m"
        MR_Word check_hlds__typecheck__V_120_120;

#line 586 "typecheck.m"
        check_hlds__typecheck__Inferring_28 = (MR_Integer) 0;
#line 588 "typecheck.m"
        {
#line 588 "typecheck.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Type-checking ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
        }
#line 591 "typecheck.m"
        {
#line 591 "typecheck.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_26, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84);
        }
#line 592 "typecheck.m"
        {
#line 592 "typecheck.m"
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredConstraints_30);
        }
#line 593 "typecheck.m"
        check_hlds__typecheck__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_30, (MR_Integer) 0)));
#line 593 "typecheck.m"
        check_hlds__typecheck__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_30, (MR_Integer) 1)));
#line 593 "typecheck.m"
        {
#line 593 "typecheck.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__typecheck__V_85_85, &check_hlds__typecheck__UnivTVars_31);
        }
#line 18750 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeInfo_121_121 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 595 "typecheck.m"
        {
#line 595 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__UnivTVars_31, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84);
        }
#line 596 "typecheck.m"
        {
#line 596 "typecheck.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87);
        }
#line 597 "typecheck.m"
        {
#line 597 "typecheck.m"
          mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87, check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78);
        }
#line 586 "typecheck.m"
      }
#line 600 "typecheck.m"
    {
#line 600 "typecheck.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_8, &check_hlds__typecheck__ClassTable_32);
    }
#line 601 "typecheck.m"
    {
#line 601 "typecheck.m"
      hlds__hlds_data__make_head_hlds_constraints_4_p_0(check_hlds__typecheck__ClassTable_32, check_hlds__typecheck__TypeVarSet0_23, check_hlds__typecheck__PredConstraints_30, &check_hlds__typecheck__Constraints_33);
    }
#line 603 "typecheck.m"
    {
#line 603 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69);
    }
#line 603 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 604 "typecheck.m"
      check_hlds__typecheck__IsFieldAccessFunction_34 = (MR_Integer) 1;
#line 603 "typecheck.m"
    else
#line 606 "typecheck.m"
      check_hlds__typecheck__IsFieldAccessFunction_34 = (MR_Integer) 0;
#line 608 "typecheck.m"
    {
#line 608 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredMarkers_35);
    }
#line 609 "typecheck.m"
    {
#line 609 "typecheck.m"
      check_hlds__type_assign__type_assign_set_init_5_p_0(check_hlds__typecheck__TypeVarSet0_23, check_hlds__typecheck__ExplicitVarTypes0_21, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78, check_hlds__typecheck__Constraints_33, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89);
    }
#line 611 "typecheck.m"
    {
#line 611 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_init_8_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__IsFieldAccessFunction_34, check_hlds__typecheck__ClauseVarSet_20, check_hlds__typecheck__PredStatus_22, check_hlds__typecheck__PredMarkers_35, check_hlds__typecheck__STATE_VARIABLE_Specs_0_71, &check_hlds__typecheck__STATE_VARIABLE_Info_90_90);
    }
#line 613 "typecheck.m"
    {
#line 613 "typecheck.m"
      hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__Clauses0_36);
    }
#line 614 "typecheck.m"
    {
#line 614 "typecheck.m"
      check_hlds__typecheck__typecheck_clause_list_8_p_0(check_hlds__typecheck__HeadVars_19, check_hlds__typecheck__ArgTypes0_26, check_hlds__typecheck__Clauses0_36, &check_hlds__typecheck__Clauses_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91, check_hlds__typecheck__STATE_VARIABLE_Info_90_90, &check_hlds__typecheck__STATE_VARIABLE_Info_92_92);
    }
#line 618 "typecheck.m"
    {
#line 618 "typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Context_38);
    }
#line 619 "typecheck.m"
    {
#line 619 "typecheck.m"
      check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_38, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_Info_92_92, &check_hlds__typecheck__STATE_VARIABLE_Info_94_94);
    }
#line 620 "typecheck.m"
    {
#line 620 "typecheck.m"
      check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(check_hlds__typecheck__Context_38, (MR_Integer) 1, check_hlds__typecheck__HeadVars_19, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_Info_94_94, &check_hlds__typecheck__STATE_VARIABLE_Info_96_96);
    }
#line 622 "typecheck.m"
    {
#line 622 "typecheck.m"
      check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ExplicitVarTypes0_21, &check_hlds__typecheck__TypeVarSet_39, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, &check_hlds__typecheck__InferredVarTypes0_40, &check_hlds__typecheck__InferredTypeConstraints0_41, &check_hlds__typecheck__ConstraintProofMap_42, &check_hlds__typecheck__ConstraintMap_43, &check_hlds__typecheck__TVarRenaming_44, &check_hlds__typecheck__ExistTypeRenaming_45);
    }
#line 627 "typecheck.m"
    {
#line 627 "typecheck.m"
      hlds__vartypes__vartypes_optimize_2_p_0(check_hlds__typecheck__InferredVarTypes0_40, &check_hlds__typecheck__InferredVarTypes_46);
    }
#line 628 "typecheck.m"
    {
#line 628 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__InferredVarTypes_46, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98);
    }
#line 634 "typecheck.m"
    if ((check_hlds__typecheck__ExistQVars0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "typecheck.m"
      check_hlds__typecheck__ExplicitVarTypes1_47 = check_hlds__typecheck__ExplicitVarTypes0_21;
#line 634 "typecheck.m"
    else
#line 636 "typecheck.m"
      {
#line 636 "typecheck.m"
        hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ExplicitVarTypes0_21, &check_hlds__typecheck__ExplicitVarTypes1_47);
      }
#line 639 "typecheck.m"
    {
#line 639 "typecheck.m"
      hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ExplicitVarTypes1_47, &check_hlds__typecheck__ExplicitVarTypes_50);
    }
#line 642 "typecheck.m"
    {
#line 642 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(check_hlds__typecheck__ExplicitVarTypes_50, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99);
    }
#line 643 "typecheck.m"
    {
#line 643 "typecheck.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__Clauses_37, &check_hlds__typecheck__ClausesRep_51);
    }
#line 644 "typecheck.m"
    {
#line 644 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_51, check_hlds__typecheck__ItemNumbers_18, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100);
    }
#line 645 "typecheck.m"
    {
#line 645 "typecheck.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101);
    }
#line 646 "typecheck.m"
    {
#line 646 "typecheck.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102);
    }
#line 647 "typecheck.m"
    {
#line 647 "typecheck.m"
      hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__typecheck__ConstraintProofMap_42, check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103);
    }
#line 648 "typecheck.m"
    {
#line 648 "typecheck.m"
      hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__typecheck__ConstraintMap_43, check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104);
    }
#line 653 "typecheck.m"
    {
#line 653 "typecheck.m"
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__InferredVarTypes_46, check_hlds__typecheck__HeadVars_19, &check_hlds__typecheck__ArgTypes_52);
    }
#line 654 "typecheck.m"
    {
#line 654 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes_52, &check_hlds__typecheck__ArgTypeVars_53);
    }
#line 655 "typecheck.m"
    {
#line 655 "typecheck.m"
      check_hlds__typecheck__restrict_to_head_vars_4_p_0(check_hlds__typecheck__InferredTypeConstraints0_41, check_hlds__typecheck__ArgTypeVars_53, &check_hlds__typecheck__InferredTypeConstraints_54, &check_hlds__typecheck__UnprovenBodyConstraints_55);
    }
#line 665 "typecheck.m"
    {
#line 665 "typecheck.m"
      hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(check_hlds__typecheck__UnprovenBodyConstraints_55, check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105);
    }
#line 694 "typecheck.m"
#line 694 "typecheck.m"
    switch (check_hlds__typecheck__Inferring_28) {
#line 694 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 694 "typecheck.m"
      case (MR_Integer) 0:
#line 695 "typecheck.m"
        {
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__Origin0_59;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__ExistQVars1_60;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__ArgTypes1_61;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__PredConstraints1_62;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__Origin1_63;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__RenamedOldArgTypes_66;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__RenamedOldConstraints_67;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__Origin_68;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110;
#line 695 "typecheck.m"
          MR_Word check_hlds__typecheck__ExistQVars_118;

#line 696 "typecheck.m"
          {
#line 696 "typecheck.m"
            hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106);
          }
#line 697 "typecheck.m"
          {
#line 697 "typecheck.m"
            hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__Origin0_59);
          }
#line 714 "typecheck.m"
          if ((check_hlds__typecheck__ExistQVars0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 708 "typecheck.m"
            {
#line 710 "typecheck.m"
              check_hlds__typecheck__ExistQVars1_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "typecheck.m"
              check_hlds__typecheck__ArgTypes1_61 = check_hlds__typecheck__ArgTypes0_26;
#line 712 "typecheck.m"
              check_hlds__typecheck__PredConstraints1_62 = check_hlds__typecheck__PredConstraints_30;
#line 713 "typecheck.m"
              check_hlds__typecheck__Origin1_63 = check_hlds__typecheck__Origin0_59;
#line 708 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 708 "typecheck.m"
            }
#line 714 "typecheck.m"
          else
#line 715 "typecheck.m"
            {
#line 715 "typecheck.m"
              MR_Word check_hlds__typecheck__V_107_107;
#line 716 "typecheck.m"
              MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108;

#line 717 "typecheck.m"
              {
#line 717 "typecheck.m"
                check_hlds__typecheck__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 717 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[0]));
#line 717 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 1) = ((MR_Box) (check_hlds__typecheck__do_typecheck_pred_7_p_0_1));
#line 717 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 717 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 3) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_39));
#line 717 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 4) = ((MR_Box) (check_hlds__typecheck__ExistQVars0_25));
#line 717 "typecheck.m"
              }
#line 716 "typecheck.m"
              {
#line 716 "typecheck.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_107_107, check_hlds__typecheck__Clauses_37, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_96_96)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108);
              }
#line 716 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108);
#line 720 "typecheck.m"
              {
#line 720 "typecheck.m"
                mercury__term__apply_renaming_in_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__ExistQVars1_60);
              }
#line 722 "typecheck.m"
              {
#line 722 "typecheck.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ArgTypes0_26, &check_hlds__typecheck__ArgTypes1_61);
              }
#line 724 "typecheck.m"
              {
#line 724 "typecheck.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__PredConstraints_30, &check_hlds__typecheck__PredConstraints1_62);
              }
#line 726 "typecheck.m"
              {
#line 726 "typecheck.m"
                check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__Origin0_59, &check_hlds__typecheck__Origin1_63);
              }
#line 715 "typecheck.m"
            }
#line 731 "typecheck.m"
          {
#line 731 "typecheck.m"
            mercury__term__apply_renaming_in_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ExistQVars1_60, &check_hlds__typecheck__ExistQVars_118);
          }
#line 733 "typecheck.m"
          {
#line 733 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ArgTypes1_61, &check_hlds__typecheck__RenamedOldArgTypes_66);
          }
#line 735 "typecheck.m"
          {
#line 735 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__PredConstraints1_62, &check_hlds__typecheck__RenamedOldConstraints_67);
          }
#line 737 "typecheck.m"
          {
#line 737 "typecheck.m"
            check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__Origin1_63, &check_hlds__typecheck__Origin_68);
          }
#line 740 "typecheck.m"
          {
#line 740 "typecheck.m"
            hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__ExistQVars_118, check_hlds__typecheck__RenamedOldArgTypes_66, check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109);
          }
#line 742 "typecheck.m"
          {
#line 742 "typecheck.m"
            hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__RenamedOldConstraints_67, check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110);
          }
#line 743 "typecheck.m"
          {
#line 743 "typecheck.m"
            hlds__hlds_pred__pred_info_set_origin_3_p_0(check_hlds__typecheck__Origin_68, check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110, check_hlds__typecheck__STATE_VARIABLE_PredInfo_70);
          }
#line 745 "typecheck.m"
          *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
#line 695 "typecheck.m"
        }
#line 694 "typecheck.m"
        break;
#line 694 "typecheck.m"
      case (MR_Integer) 1:
#line 669 "typecheck.m"
        {
#line 669 "typecheck.m"
          MR_Word check_hlds__typecheck__ExistQVars_56;
#line 669 "typecheck.m"
          MR_Word check_hlds__typecheck__OldTypeConstraints_57;
#line 669 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112;
#line 669 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113;
#line 669 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114;
#line 685 "typecheck.m"
          MR_Word check_hlds__typecheck__TVarKindMap_58;

#line 672 "typecheck.m"
          {
#line 672 "typecheck.m"
            check_hlds__typecheck__infer_existential_types_4_p_0(check_hlds__typecheck__ArgTypeVars_53, &check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112);
          }
#line 675 "typecheck.m"
          {
#line 675 "typecheck.m"
            hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112, check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113);
          }
#line 676 "typecheck.m"
          {
#line 676 "typecheck.m"
            hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__ArgTypes_52, check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114);
          }
#line 678 "typecheck.m"
          {
#line 678 "typecheck.m"
            hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114, &check_hlds__typecheck__OldTypeConstraints_57);
          }
#line 679 "typecheck.m"
          {
#line 679 "typecheck.m"
            hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__InferredTypeConstraints_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114, check_hlds__typecheck__STATE_VARIABLE_PredInfo_70);
          }
#line 685 "typecheck.m"
          {
#line 685 "typecheck.m"
            hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*check_hlds__typecheck__STATE_VARIABLE_PredInfo_70, &check_hlds__typecheck__TVarKindMap_58);
          }
#line 686 "typecheck.m"
          {
#line 686 "typecheck.m"
            check_hlds__typecheck__succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(check_hlds__typecheck__TVarKindMap_58, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ArgTypes0_26, check_hlds__typecheck__OldTypeConstraints_57, check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__ArgTypes_52, check_hlds__typecheck__InferredTypeConstraints_54);
          }
#line 682 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 690 "typecheck.m"
            *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
#line 682 "typecheck.m"
          else
#line 692 "typecheck.m"
            *check_hlds__typecheck__Changed_12 = (MR_Integer) 1;
#line 669 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 669 "typecheck.m"
        }
#line 694 "typecheck.m"
        break;
#line 694 "typecheck.m"
    }
#line 747 "typecheck.m"
    {
#line 747 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_108_108, check_hlds__typecheck__STATE_VARIABLE_Specs_72);
    }
#line 563 "typecheck.m"
  }
#line 557 "typecheck.m"
}

#line 512 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_7_p_0_1(
#line 512 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 512 "typecheck.m"
{
#line 512 "typecheck.m"
  {
#line 512 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 512 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 512 "typecheck.m"
    {
#line 512 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__512__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 512 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 512 "typecheck.m"
  }
#line 512 "typecheck.m"
}

#line 446 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_pred_7_p_0(
#line 446 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 446 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 446 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35,
#line 446 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_36,
#line 446 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_11,
#line 446 "typecheck.m"
  MR_Word * check_hlds__typecheck__ContainsErrors_12,
#line 446 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_13)
#line 446 "typecheck.m"
{
#line 451 "typecheck.m"
  {
#line 451 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_14;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes0_17;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesInfo0_18;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0_19;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers0_20;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_21;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0IsEmpty_22;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__StartingSpecs_24;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep1_28;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVars_30;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep1IsEmpty_31;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48;
#line 459 "typecheck.m"
    MR_Word check_hlds__typecheck___ArgTypeVarSet_15;
#line 459 "typecheck.m"
    MR_Word check_hlds__typecheck___ExistQVars0_16;
#line 507 "typecheck.m"
    MR_Word check_hlds__typecheck___ItemNumbers_29;

#line 458 "typecheck.m"
    {
#line 458 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_8, &check_hlds__typecheck__Globals_14);
    }
#line 459 "typecheck.m"
    {
#line 459 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35, &check_hlds__typecheck___ArgTypeVarSet_15, &check_hlds__typecheck___ExistQVars0_16, &check_hlds__typecheck__ArgTypes0_17);
    }
#line 461 "typecheck.m"
    {
#line 461 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35, &check_hlds__typecheck__ClausesInfo0_18);
    }
#line 462 "typecheck.m"
    {
#line 462 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_18, &check_hlds__typecheck__ClausesRep0_19, &check_hlds__typecheck__ItemNumbers0_20);
    }
#line 463 "typecheck.m"
    {
#line 463 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35, &check_hlds__typecheck__Markers0_21);
    }
#line 464 "typecheck.m"
    {
#line 464 "typecheck.m"
      check_hlds__typecheck__ClausesRep0IsEmpty_22 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_19);
    }
#line 482 "typecheck.m"
#line 482 "typecheck.m"
    switch (check_hlds__typecheck__ClausesRep0IsEmpty_22) {
#line 482 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 482 "typecheck.m"
      case (MR_Integer) 0:
#line 483 "typecheck.m"
        {
#line 483 "typecheck.m"
          MR_Word check_hlds__typecheck__WarnNonContiguousForeignProcs_25;

#line 484 "typecheck.m"
          {
#line 484 "typecheck.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_14, (MR_Integer) 17, &check_hlds__typecheck__WarnNonContiguousForeignProcs_25);
          }
#line 490 "typecheck.m"
#line 490 "typecheck.m"
          switch (check_hlds__typecheck__WarnNonContiguousForeignProcs_25) {
#line 490 "typecheck.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 490 "typecheck.m"
            case (MR_Integer) 0:
#line 491 "typecheck.m"
              {
#line 491 "typecheck.m"
                MR_Word check_hlds__typecheck__WarnNonContiguousClauses_26;

#line 492 "typecheck.m"
                {
#line 492 "typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_14, (MR_Integer) 16, &check_hlds__typecheck__WarnNonContiguousClauses_26);
                }
#line 498 "typecheck.m"
#line 498 "typecheck.m"
                switch (check_hlds__typecheck__WarnNonContiguousClauses_26) {
#line 498 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 498 "typecheck.m"
                  case (MR_Integer) 0:
#line 500 "typecheck.m"
                    check_hlds__typecheck__StartingSpecs_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "typecheck.m"
                    break;
#line 498 "typecheck.m"
                  case (MR_Integer) 1:
#line 495 "typecheck.m"
                    {
#line 755 "typecheck.m"
                      MR_Word check_hlds__typecheck__FirstRegion_81;
#line 755 "typecheck.m"
                      MR_Word check_hlds__typecheck__SecondRegion_82;
#line 755 "typecheck.m"
                      MR_Word check_hlds__typecheck__LaterRegions_83;

#line 756 "typecheck.m"
                      {
#line 756 "typecheck.m"
                        check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_20, (MR_Integer) 0, &check_hlds__typecheck__FirstRegion_81, &check_hlds__typecheck__SecondRegion_82, &check_hlds__typecheck__LaterRegions_83);
                      }
#line 755 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 760 "typecheck.m"
                        {
#line 760 "typecheck.m"
                          MR_Word check_hlds__typecheck__Spec_84;

#line 759 "typecheck.m"
                          {
#line 759 "typecheck.m"
                            check_hlds__typecheck__Spec_84 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35, check_hlds__typecheck__FirstRegion_81, check_hlds__typecheck__SecondRegion_82, check_hlds__typecheck__LaterRegions_83);
                          }
#line 761 "typecheck.m"
                          {
#line 761 "typecheck.m"
                            check_hlds__typecheck__StartingSpecs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_24, 0) = ((MR_Box) (check_hlds__typecheck__Spec_84));
#line 761 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "typecheck.m"
                          }
#line 760 "typecheck.m"
                        }
#line 755 "typecheck.m"
                      else
#line 763 "typecheck.m"
                        check_hlds__typecheck__StartingSpecs_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "typecheck.m"
                    }
#line 498 "typecheck.m"
                    break;
#line 498 "typecheck.m"
                }
#line 491 "typecheck.m"
              }
#line 490 "typecheck.m"
              break;
#line 490 "typecheck.m"
            case (MR_Integer) 1:
#line 487 "typecheck.m"
              {
#line 488 "typecheck.m"
                {
#line 488 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_24 = check_hlds__typecheck__report_any_non_contiguous_clauses_5_f_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35, check_hlds__typecheck__ItemNumbers0_20, (MR_Integer) 1);
                }
#line 487 "typecheck.m"
              }
#line 490 "typecheck.m"
              break;
#line 490 "typecheck.m"
          }
#line 483 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35;
#line 483 "typecheck.m"
        }
#line 482 "typecheck.m"
        break;
#line 482 "typecheck.m"
      case (MR_Integer) 1:
#line 467 "typecheck.m"
        {
#line 469 "typecheck.m"
          MR_Word check_hlds__typecheck__V_43_43;

#line 468 "typecheck.m"
          {
#line 468 "typecheck.m"
            check_hlds__typecheck__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__typecheck__Globals_14, (MR_Integer) 167, (MR_Integer) 1);
          }
#line 468 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 468 "typecheck.m"
            {
#line 469 "typecheck.m"
              check_hlds__typecheck__V_43_43 = (MR_Integer) 9;
#line 469 "typecheck.m"
              {
#line 469 "typecheck.m"
                check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_21, check_hlds__typecheck__V_43_43);
              }
#line 469 "typecheck.m"
              check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 468 "typecheck.m"
            }
#line 467 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 471 "typecheck.m"
            {
#line 471 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_23;

#line 471 "typecheck.m"
              {
#line 471 "typecheck.m"
                check_hlds__typecheck__Spec_23 = check_hlds__typecheck_errors__report_no_clauses_stub_3_f_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35);
              }
#line 472 "typecheck.m"
              {
#line 472 "typecheck.m"
                check_hlds__typecheck__StartingSpecs_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_24, 0) = ((MR_Box) (check_hlds__typecheck__Spec_23));
#line 472 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "typecheck.m"
              }
#line 473 "typecheck.m"
              {
#line 473 "typecheck.m"
                check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_9, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45, check_hlds__typecheck__ModuleInfo_8);
              }
#line 471 "typecheck.m"
            }
#line 467 "typecheck.m"
          else
#line 474 "typecheck.m"
            {
#line 475 "typecheck.m"
              {
#line 475 "typecheck.m"
                check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_21, (MR_Integer) 1);
              }
#line 474 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 477 "typecheck.m"
                {
#line 477 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "typecheck.m"
                  {
#line 478 "typecheck.m"
                    check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_9, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45, check_hlds__typecheck__ModuleInfo_8);
                  }
#line 477 "typecheck.m"
                }
#line 474 "typecheck.m"
              else
#line 480 "typecheck.m"
                {
#line 480 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_35;
#line 480 "typecheck.m"
                }
#line 474 "typecheck.m"
            }
#line 467 "typecheck.m"
        }
#line 482 "typecheck.m"
        break;
#line 482 "typecheck.m"
    }
#line 506 "typecheck.m"
    {
#line 506 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48);
    }
#line 507 "typecheck.m"
    {
#line 507 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, &check_hlds__typecheck__ClausesRep1_28, &check_hlds__typecheck___ItemNumbers_29);
    }
#line 508 "typecheck.m"
    {
#line 508 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, &check_hlds__typecheck__HeadVars_30);
    }
#line 509 "typecheck.m"
    {
#line 509 "typecheck.m"
      check_hlds__typecheck__ClausesRep1IsEmpty_31 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep1_28);
    }
#line 549 "typecheck.m"
#line 549 "typecheck.m"
    switch (check_hlds__typecheck__ClausesRep1IsEmpty_31) {
#line 549 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 549 "typecheck.m"
      case (MR_Integer) 0:
#line 550 "typecheck.m"
        {
#line 551 "typecheck.m"
          {
#line 551 "typecheck.m"
            check_hlds__typecheck__do_typecheck_pred_7_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45, check_hlds__typecheck__STATE_VARIABLE_PredInfo_36, check_hlds__typecheck__StartingSpecs_24, check_hlds__typecheck__Specs_11, check_hlds__typecheck__Changed_13);
          }
#line 553 "typecheck.m"
          {
#line 553 "typecheck.m"
            *check_hlds__typecheck__ContainsErrors_12 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_14, *check_hlds__typecheck__Specs_11);
          }
#line 550 "typecheck.m"
        }
#line 549 "typecheck.m"
        break;
#line 549 "typecheck.m"
      case (MR_Integer) 1:
#line 511 "typecheck.m"
        {
#line 511 "typecheck.m"
          MR_Word check_hlds__typecheck__V_50_50;

#line 512 "typecheck.m"
          {
#line 512 "typecheck.m"
            check_hlds__typecheck__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 512 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[0]));
#line 512 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_pred_7_p_0_1));
#line 512 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 512 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 3) = ((MR_Box) (check_hlds__typecheck__StartingSpecs_24));
#line 512 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "typecheck.m"
          }
#line 512 "typecheck.m"
          {
#line 512 "typecheck.m"
            mercury__require__expect_4_p_0(check_hlds__typecheck__V_50_50, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_pred\'/7", (MR_String) "StartingSpecs not empty");
          }
#line 517 "typecheck.m"
          {
#line 517 "typecheck.m"
            check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_21, (MR_Integer) 9);
          }
#line 517 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 521 "typecheck.m"
            {
#line 521 "typecheck.m"
              MR_Word check_hlds__typecheck__VarTypes_32;
#line 521 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVarsIncludingExistentials_33;
#line 521 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_56_56;
#line 521 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_57_57;

#line 520 "typecheck.m"
              {
#line 520 "typecheck.m"
                hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(check_hlds__typecheck__HeadVars_30, check_hlds__typecheck__ArgTypes0_17, &check_hlds__typecheck__VarTypes_32);
              }
#line 522 "typecheck.m"
              {
#line 522 "typecheck.m"
                hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__VarTypes_32, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_56_56);
              }
#line 523 "typecheck.m"
              {
#line 523 "typecheck.m"
                hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_56_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_57_57);
              }
#line 527 "typecheck.m"
              {
#line 527 "typecheck.m"
                parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_17, &check_hlds__typecheck__HeadVarsIncludingExistentials_33);
              }
#line 528 "typecheck.m"
              {
#line 528 "typecheck.m"
                hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__HeadVarsIncludingExistentials_33, check_hlds__typecheck__STATE_VARIABLE_PredInfo_57_57, check_hlds__typecheck__STATE_VARIABLE_PredInfo_36);
              }
#line 530 "typecheck.m"
              *check_hlds__typecheck__ContainsErrors_12 = (MR_Integer) 0;
#line 531 "typecheck.m"
              *check_hlds__typecheck__Specs_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 521 "typecheck.m"
            }
#line 517 "typecheck.m"
          else
#line 533 "typecheck.m"
            {
#line 533 "typecheck.m"
              MR_Word check_hlds__typecheck__HadSyntaxErrors_34;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_65_65;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_66_66;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_67_67;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_68_68;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_69_69;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_70_70;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_71_71;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_72_72;
#line 534 "typecheck.m"
              MR_Word check_hlds__typecheck__V_73_73;

#line 533 "typecheck.m"
              *check_hlds__typecheck__ContainsErrors_12 = (MR_Integer) 1;
#line 534 "typecheck.m"
              check_hlds__typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 0)));
#line 534 "typecheck.m"
              check_hlds__typecheck__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 1)));
#line 534 "typecheck.m"
              check_hlds__typecheck__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 2)));
#line 534 "typecheck.m"
              check_hlds__typecheck__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 3)));
#line 534 "typecheck.m"
              check_hlds__typecheck__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 4)));
#line 534 "typecheck.m"
              check_hlds__typecheck__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 5)));
#line 534 "typecheck.m"
              check_hlds__typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 6)));
#line 534 "typecheck.m"
              check_hlds__typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 7)));
#line 534 "typecheck.m"
              check_hlds__typecheck__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 8)));
#line 534 "typecheck.m"
              check_hlds__typecheck__HadSyntaxErrors_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_48_48, (MR_Integer) 9)));
#line 538 "typecheck.m"
#line 538 "typecheck.m"
              switch (check_hlds__typecheck__HadSyntaxErrors_34) {
#line 538 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 538 "typecheck.m"
                case (MR_Integer) 0:
#line 536 "typecheck.m"
                  {
#line 536 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_59_59;

#line 537 "typecheck.m"
                    {
#line 537 "typecheck.m"
                      check_hlds__typecheck__V_59_59 = check_hlds__typecheck_errors__report_no_clauses_3_f_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45);
                    }
#line 537 "typecheck.m"
                    {
#line 537 "typecheck.m"
                      MR_Word base;
#line 537 "typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "typecheck.m"
                      *check_hlds__typecheck__Specs_11 = base;
#line 537 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_59_59));
#line 537 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "typecheck.m"
                    }
#line 536 "typecheck.m"
                  }
#line 538 "typecheck.m"
                  break;
#line 538 "typecheck.m"
                case (MR_Integer) 1:
#line 545 "typecheck.m"
                  *check_hlds__typecheck__Specs_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 538 "typecheck.m"
                  break;
#line 538 "typecheck.m"
              }
#line 533 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_PredInfo_36 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_45_45;
#line 533 "typecheck.m"
            }
#line 548 "typecheck.m"
          *check_hlds__typecheck__Changed_13 = (MR_Integer) 0;
#line 511 "typecheck.m"
        }
#line 549 "typecheck.m"
        break;
#line 549 "typecheck.m"
    }
#line 451 "typecheck.m"
  }
#line 446 "typecheck.m"
}

#line 347 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10)
#line 347 "typecheck.m"
{
#line 353 "typecheck.m"
  {
#line 353 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 353 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "typecheck.m"
      {
#line 353 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Changed_10 = check_hlds__typecheck__STATE_VARIABLE_Changed_0_9;
#line 354 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Specs_8 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_7;
#line 354 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 353 "typecheck.m"
      }
#line 353 "typecheck.m"
    else
#line 357 "typecheck.m"
      {
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadPredIdInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__TailPredIdsInfos0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo0_24, (MR_Integer) 0)));
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__PredInfo0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo0_24, (MR_Integer) 1)));

#line 361 "typecheck.m"
        {
#line 361 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__typecheck__PredInfo0_31);
        }
#line 362 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 363 "typecheck.m"
          {
#line 363 "typecheck.m"
            {
#line 363 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_30)));
            }
#line 363 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 363 "typecheck.m"
          }
#line 359 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 367 "typecheck.m"
          {
#line 367 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrTailPredIdsInfos_83;

#line 370 "typecheck.m"
            {
#line 370 "typecheck.m"
              MR_Word base;
#line 370 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "typecheck.m"
              *check_hlds__typecheck__HeadVar__4_4 = base;
#line 370 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__HeadPredIdInfo0_24));
#line 370 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 370 "typecheck.m"
            }
#line 370 "typecheck.m"
            check_hlds__typecheck__AddrTailPredIdsInfos_83 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1));
#line 367 "typecheck.m"
            {
#line 367 "typecheck.m"
              check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_10_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__TailPredIdsInfos0_25, check_hlds__typecheck__AddrTailPredIdsInfos_83, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, check_hlds__typecheck__STATE_VARIABLE_Changed_10);
            }
#line 367 "typecheck.m"
          }
#line 359 "typecheck.m"
        else
#line 374 "typecheck.m"
          {
#line 374 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_34;
#line 374 "typecheck.m"
            MR_Word check_hlds__typecheck__PredSpecs_35;
#line 374 "typecheck.m"
            MR_Word check_hlds__typecheck__ContainsErrors_36;
#line 374 "typecheck.m"
            MR_Word check_hlds__typecheck__PredChanged_37;
#line 374 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47;
#line 374 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_48_48;
#line 374 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_49_49;
#line 374 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadPredIdInfo_53;
#line 399 "typecheck.m"
            MR_Word * check_hlds__typecheck__AddrTailPredIdsInfos_84;

#line 421 "typecheck.m"
            {
#line 1018 "typecheck.m"
              MR_Word check_hlds__typecheck__Origin_75;
#line 1018 "typecheck.m"
              MR_Word check_hlds__typecheck__SpecialPredId_76;
#line 1018 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtor_77;
#line 1018 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeTable_78;
#line 1018 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeDefn_79;
#line 1018 "typecheck.m"
              MR_Word check_hlds__typecheck__Body_80;
#line 1026 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtorInfo_12_82;
#line 1026 "typecheck.m"
              MR_Word check_hlds__typecheck__V_81_81;

#line 421 "typecheck.m"
              {
#line 421 "typecheck.m"
                check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo0_31);
              }
#line 421 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 421 "typecheck.m"
                {
#line 1021 "typecheck.m"
                  {
#line 1021 "typecheck.m"
                    hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__Origin_75);
                  }
#line 1022 "typecheck.m"
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin_75)) == (MR_mktag((MR_Integer) 0)));
#line 1022 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 1022 "typecheck.m"
                    {
#line 1022 "typecheck.m"
                      check_hlds__typecheck__SpecialPredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_75, (MR_Integer) 0)));
#line 1022 "typecheck.m"
                      check_hlds__typecheck__TypeCtor_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_75, (MR_Integer) 1)));
#line 1026 "typecheck.m"
                      {
#line 1026 "typecheck.m"
                        check_hlds__typecheck__V_81_81 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
                      }
#line 19882 "check_hlds.typecheck.c"
                      check_hlds__typecheck__TypeCtorInfo_12_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1026 "typecheck.m"
                      {
#line 1026 "typecheck.m"
                        check_hlds__typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck__TypeCtorInfo_12_82, ((MR_Box) (check_hlds__typecheck__TypeCtor_77)), check_hlds__typecheck__V_81_81);
                      }
#line 1026 "typecheck.m"
                      check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 1018 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 1018 "typecheck.m"
                        {
#line 1030 "typecheck.m"
                          {
#line 1030 "typecheck.m"
                            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__TypeTable_78);
                          }
#line 1031 "typecheck.m"
                          {
#line 1031 "typecheck.m"
                            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_78, check_hlds__typecheck__TypeCtor_77, &check_hlds__typecheck__TypeDefn_79);
                          }
#line 1032 "typecheck.m"
                          {
#line 1032 "typecheck.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_79, &check_hlds__typecheck__Body_80);
                          }
#line 1033 "typecheck.m"
                          {
#line 1033 "typecheck.m"
                            check_hlds__typecheck__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__SpecialPredId_76, check_hlds__typecheck__Body_80);
                          }
#line 1018 "typecheck.m"
                        }
#line 1022 "typecheck.m"
                    }
#line 422 "typecheck.m"
                  check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 421 "typecheck.m"
                }
#line 421 "typecheck.m"
            }
#line 423 "typecheck.m"
            if (!(check_hlds__typecheck__succeeded))
#line 424 "typecheck.m"
              {
#line 424 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_65;
#line 426 "typecheck.m"
                MR_Word check_hlds__typecheck__V_70_70;

#line 424 "typecheck.m"
                {
#line 424 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(check_hlds__typecheck__PredInfo0_31);
                }
#line 424 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 424 "typecheck.m"
                  {
#line 425 "typecheck.m"
                    {
#line 425 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__Markers_65);
                    }
#line 426 "typecheck.m"
                    check_hlds__typecheck__V_70_70 = (MR_Integer) 1;
#line 426 "typecheck.m"
                    {
#line 426 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_65, check_hlds__typecheck__V_70_70);
                    }
#line 426 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 424 "typecheck.m"
                  }
#line 424 "typecheck.m"
              }
#line 411 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 429 "typecheck.m"
              {
#line 429 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo0_66;
#line 429 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep0_67;
#line 429 "typecheck.m"
                MR_Word check_hlds__typecheck__IsEmpty_69;
#line 430 "typecheck.m"
                MR_Word check_hlds__typecheck___ItemNumbers_68;

#line 429 "typecheck.m"
                {
#line 429 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__ClausesInfo0_66);
                }
#line 430 "typecheck.m"
                {
#line 430 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_66, &check_hlds__typecheck__ClausesRep0_67, &check_hlds__typecheck___ItemNumbers_68);
                }
#line 431 "typecheck.m"
                {
#line 431 "typecheck.m"
                  check_hlds__typecheck__IsEmpty_69 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_67);
                }
#line 435 "typecheck.m"
#line 435 "typecheck.m"
                switch (check_hlds__typecheck__IsEmpty_69) {
#line 435 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 435 "typecheck.m"
                  case (MR_Integer) 0:
#line 436 "typecheck.m"
                    check_hlds__typecheck__PredInfo_34 = check_hlds__typecheck__PredInfo0_31;
#line 435 "typecheck.m"
                    break;
#line 435 "typecheck.m"
                  case (MR_Integer) 1:
#line 434 "typecheck.m"
                    {
#line 434 "typecheck.m"
                      hlds__hlds_pred__pred_info_mark_as_external_2_p_0(check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__PredInfo_34);
                    }
#line 435 "typecheck.m"
                    break;
#line 435 "typecheck.m"
                }
#line 438 "typecheck.m"
                check_hlds__typecheck__PredSpecs_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "typecheck.m"
                check_hlds__typecheck__ContainsErrors_36 = (MR_Integer) 0;
#line 440 "typecheck.m"
                check_hlds__typecheck__PredChanged_37 = (MR_Integer) 0;
#line 429 "typecheck.m"
              }
#line 411 "typecheck.m"
            else
#line 442 "typecheck.m"
              {
#line 442 "typecheck.m"
                check_hlds__typecheck__typecheck_pred_7_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_30, check_hlds__typecheck__PredInfo0_31, &check_hlds__typecheck__PredInfo_34, &check_hlds__typecheck__PredSpecs_35, &check_hlds__typecheck__ContainsErrors_36, &check_hlds__typecheck__PredChanged_37);
              }
#line 378 "typecheck.m"
#line 378 "typecheck.m"
            switch (check_hlds__typecheck__ContainsErrors_36) {
#line 378 "typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 378 "typecheck.m"
              case (MR_Integer) 0:
#line 377 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 378 "typecheck.m"
                break;
#line 378 "typecheck.m"
              case (MR_Integer) 1:
#line 394 "typecheck.m"
                {
#line 394 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 0) = ((MR_Box) (check_hlds__typecheck__PredId_30));
#line 394 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5));
#line 394 "typecheck.m"
                }
#line 378 "typecheck.m"
                break;
#line 378 "typecheck.m"
            }
#line 396 "typecheck.m"
            {
#line 396 "typecheck.m"
              check_hlds__typecheck__HeadPredIdInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo_53, 0) = ((MR_Box) (check_hlds__typecheck__PredId_30));
#line 396 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadPredIdInfo_53, 1) = ((MR_Box) (check_hlds__typecheck__PredInfo_34));
#line 396 "typecheck.m"
            }
#line 397 "typecheck.m"
            {
#line 397 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__PredSpecs_35, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7);
            }
#line 398 "typecheck.m"
            {
#line 398 "typecheck.m"
              mercury__bool__or_3_p_0(check_hlds__typecheck__PredChanged_37, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, &check_hlds__typecheck__STATE_VARIABLE_Changed_49_49);
            }
#line 402 "typecheck.m"
            {
#line 402 "typecheck.m"
              MR_Word base;
#line 402 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "typecheck.m"
              *check_hlds__typecheck__HeadVar__4_4 = base;
#line 402 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__HeadPredIdInfo_53));
#line 402 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 402 "typecheck.m"
            }
#line 402 "typecheck.m"
            check_hlds__typecheck__AddrTailPredIdsInfos_84 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1));
#line 399 "typecheck.m"
            {
#line 399 "typecheck.m"
              check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_10_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__TailPredIdsInfos0_25, check_hlds__typecheck__AddrTailPredIdsInfos_84, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_48_48, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_Changed_49_49, check_hlds__typecheck__STATE_VARIABLE_Changed_10);
            }
#line 374 "typecheck.m"
          }
#line 357 "typecheck.m"
      }
#line 353 "typecheck.m"
  }
#line 347 "typecheck.m"
}

#line 275 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
#line 275 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5)
#line 275 "typecheck.m"
{
#line 279 "typecheck.m"
  while (MR_TRUE)
#line 279 "typecheck.m"
    {
#line 279 "typecheck.m"
      /* tailcall optimized into a loop */
#line 279 "typecheck.m"
      {
#line 279 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 279 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Specs_5 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
#line 279 "typecheck.m"
        else
#line 281 "typecheck.m"
          {
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_16;
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__Markers_17;
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;
#line 285 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeCtorInfo_25_25;
#line 287 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18;

#line 282 "typecheck.m"
            {
#line 282 "typecheck.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_13, &check_hlds__typecheck__PredInfo_16);
            }
#line 283 "typecheck.m"
            {
#line 283 "typecheck.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Markers_17);
            }
#line 285 "typecheck.m"
            {
#line 285 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_17, (MR_Integer) 2);
            }
#line 285 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 285 "typecheck.m"
              {
#line 20171 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 286 "typecheck.m"
                {
#line 286 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0(check_hlds__typecheck__TypeCtorInfo_25_25, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_13)));
                }
#line 285 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 285 "typecheck.m"
                  {
#line 287 "typecheck.m"
                    {
#line 287 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__V_18_18);
                    }
#line 287 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 285 "typecheck.m"
                  }
#line 285 "typecheck.m"
              }
#line 284 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 289 "typecheck.m"
              {
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_19;
#line 289 "typecheck.m"
                MR_String check_hlds__typecheck__PredName_28;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__PredOrFunc_29;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Name_30;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_31;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__VarSet_32;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_33;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Types0_34;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_35;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassContext_36;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Purity_37;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeDet_38;
#line 289 "typecheck.m"
                MR_String check_hlds__typecheck__TypeStr_40;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_43;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_44;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_57_57;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_66_66;

#line 303 "typecheck.m"
                {
#line 303 "typecheck.m"
                  check_hlds__typecheck__PredName_28 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__PredInfo_16);
                }
#line 304 "typecheck.m"
                {
#line 304 "typecheck.m"
                  check_hlds__typecheck__PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_16);
                }
#line 305 "typecheck.m"
                {
#line 305 "typecheck.m"
                  check_hlds__typecheck__Name_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 305 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Name_30, 0) = ((MR_Box) (check_hlds__typecheck__PredName_28));
#line 305 "typecheck.m"
                }
#line 306 "typecheck.m"
                {
#line 306 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Context_31);
                }
#line 307 "typecheck.m"
                {
#line 307 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__VarSet_32, &check_hlds__typecheck__ExistQVars_33, &check_hlds__typecheck__Types0_34);
                }
#line 308 "typecheck.m"
                {
#line 308 "typecheck.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(check_hlds__typecheck__Types0_34, &check_hlds__typecheck__Types_35);
                }
#line 309 "typecheck.m"
                {
#line 309 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__ClassContext_36);
                }
#line 310 "typecheck.m"
                {
#line 310 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Purity_37);
                }
#line 311 "typecheck.m"
                check_hlds__typecheck__MaybeDet_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 317 "typecheck.m"
#line 317 "typecheck.m"
                switch (check_hlds__typecheck__PredOrFunc_29) {
#line 317 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 317 "typecheck.m"
                  case (MR_Integer) 1:
#line 318 "typecheck.m"
                    {
#line 318 "typecheck.m"
                      MR_Word check_hlds__typecheck__ArgTypes_41;
#line 318 "typecheck.m"
                      MR_Word check_hlds__typecheck__RetType_42;
#line 319 "typecheck.m"
                      MR_Box check_hlds__typecheck__conv0_RetType_42;

#line 319 "typecheck.m"
                      {
#line 319 "typecheck.m"
                        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Types_35, &check_hlds__typecheck__ArgTypes_41, &check_hlds__typecheck__conv0_RetType_42);
                      }
#line 319 "typecheck.m"
                      check_hlds__typecheck__RetType_42 = ((MR_Word) check_hlds__typecheck__conv0_RetType_42);
#line 320 "typecheck.m"
                      {
#line 320 "typecheck.m"
                        check_hlds__typecheck__TypeStr_40 = parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(check_hlds__typecheck__VarSet_32, (MR_Integer) 0, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__ArgTypes_41, check_hlds__typecheck__RetType_42, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36);
                      }
#line 318 "typecheck.m"
                    }
#line 317 "typecheck.m"
                    break;
#line 317 "typecheck.m"
                  case (MR_Integer) 0:
#line 315 "typecheck.m"
                    {
#line 315 "typecheck.m"
                      check_hlds__typecheck__TypeStr_40 = parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(check_hlds__typecheck__VarSet_32, (MR_Integer) 0, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__Types_35, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36);
                    }
#line 317 "typecheck.m"
                    break;
#line 317 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (check_hlds__typecheck__TypeStr_40));
#line 323 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[20])));
#line 323 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[19])));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 1) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 323 "typecheck.m"
                }
#line 325 "typecheck.m"
                {
#line 325 "typecheck.m"
                  check_hlds__typecheck__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_43));
#line 325 "typecheck.m"
                }
#line 325 "typecheck.m"
                {
#line 325 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "typecheck.m"
                }
#line 325 "typecheck.m"
                {
#line 325 "typecheck.m"
                  check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (((MR_Integer) 44 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (check_hlds__typecheck__V_57_57));
#line 325 "typecheck.m"
                }
#line 325 "typecheck.m"
                {
#line 325 "typecheck.m"
                  check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 0) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "typecheck.m"
                }
#line 324 "typecheck.m"
                {
#line 324 "typecheck.m"
                  check_hlds__typecheck__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 0) = ((MR_Box) (check_hlds__typecheck__Context_31));
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 324 "typecheck.m"
                }
#line 328 "typecheck.m"
                {
#line 328 "typecheck.m"
                  check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__Msg_44));
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "typecheck.m"
                }
#line 328 "typecheck.m"
                {
#line 328 "typecheck.m"
                  check_hlds__typecheck__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[0])));
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 2) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 328 "typecheck.m"
                }
#line 290 "typecheck.m"
                {
#line 290 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 0) = ((MR_Box) (check_hlds__typecheck__Spec_19));
#line 290 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_4));
#line 290 "typecheck.m"
                }
#line 289 "typecheck.m"
              }
#line 284 "typecheck.m"
            else
#line 284 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
#line 294 "typecheck.m"
            /* direct tailcall eliminated */
#line 294 "typecheck.m"
            {
#line 294 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__PredIds_14;
#line 294 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;

#line 294 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_0_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 294 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 294 "typecheck.m"
            }
#line 294 "typecheck.m"
            continue;
#line 281 "typecheck.m"
          }
#line 279 "typecheck.m"
      }
#line 279 "typecheck.m"
      break;
#line 279 "typecheck.m"
    }
#line 275 "typecheck.m"
}

#line 221 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 221 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 221 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17)
#line 221 "typecheck.m"
{
#line 228 "typecheck.m"
  while (MR_TRUE)
#line 228 "typecheck.m"
    {
#line 228 "typecheck.m"
      /* tailcall optimized into a loop */
#line 228 "typecheck.m"
      {
#line 228 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_51_51;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_52_52;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap0_18;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_19;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_20;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__NewlyInvalidPredIds_21;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__CurSpecs_22;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__Changed_23;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap_24;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__NewValidPredIdSet_25;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__Globals_26;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;

#line 229 "typecheck.m"
        {
#line 229 "typecheck.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__typecheck__PredMap0_18);
        }
#line 20539 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 20541 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 230 "typecheck.m"
        {
#line 230 "typecheck.m"
          mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_51_51, check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__PredMap0_18, &check_hlds__typecheck__PredIdsInfos0_19);
        }
#line 231 "typecheck.m"
        {
#line 231 "typecheck.m"
          check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, check_hlds__typecheck__OrigValidPredIdSet_14, check_hlds__typecheck__PredIdsInfos0_19, &check_hlds__typecheck__PredIdsInfos_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__NewlyInvalidPredIds_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__CurSpecs_22, (MR_Integer) 0, &check_hlds__typecheck__Changed_23);
        }
#line 234 "typecheck.m"
        {
#line 234 "typecheck.m"
          mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_51_51, check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__PredIdsInfos_20, &check_hlds__typecheck__PredMap_24);
        }
#line 235 "typecheck.m"
        {
#line 235 "typecheck.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_24, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37);
        }
#line 237 "typecheck.m"
        {
#line 237 "typecheck.m"
          hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(check_hlds__typecheck__NewlyInvalidPredIds_21, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38);
        }
#line 238 "typecheck.m"
        {
#line 238 "typecheck.m"
          hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__NewValidPredIdSet_25);
        }
#line 240 "typecheck.m"
        {
#line 240 "typecheck.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__Globals_26);
        }
#line 242 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Changed_23 == (MR_Integer) 0);
#line 243 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 243 "typecheck.m"
          {
#line 243 "typecheck.m"
            MR_Word check_hlds__typecheck__V_39_39;

#line 243 "typecheck.m"
            {
#line 243 "typecheck.m"
              check_hlds__typecheck__V_39_39 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_26, check_hlds__typecheck__CurSpecs_22);
            }
#line 243 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_39_39 == (MR_Integer) 1);
#line 243 "typecheck.m"
          }
#line 241 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 246 "typecheck.m"
          {
#line 246 "typecheck.m"
            *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 247 "typecheck.m"
            *check_hlds__typecheck__Specs_16 = check_hlds__typecheck__CurSpecs_22;
#line 248 "typecheck.m"
            *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 0;
#line 246 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 246 "typecheck.m"
          }
#line 241 "typecheck.m"
        else
#line 250 "typecheck.m"
          {
#line 250 "typecheck.m"
            MR_Word check_hlds__typecheck__DebugTypes_27;

#line 250 "typecheck.m"
            {
#line 250 "typecheck.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_26, (MR_Integer) 60, &check_hlds__typecheck__DebugTypes_27);
            }
#line 258 "typecheck.m"
#line 258 "typecheck.m"
            switch (check_hlds__typecheck__DebugTypes_27) {
#line 258 "typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 258 "typecheck.m"
              case (MR_Integer) 0:
#line 259 "typecheck.m"
                {
#line 259 "typecheck.m"
                }
#line 258 "typecheck.m"
                break;
#line 258 "typecheck.m"
              case (MR_Integer) 1:
#line 252 "typecheck.m"
                {
#line 252 "typecheck.m"
                  MR_Word check_hlds__typecheck__ProgressSpecs_28;
#line 256 "typecheck.m"
                  MR_Integer check_hlds__typecheck__V_30_30;
#line 256 "typecheck.m"
                  MR_Integer check_hlds__typecheck__V_31_31;

#line 253 "typecheck.m"
                  {
#line 253 "typecheck.m"
                    check_hlds__typecheck__construct_type_inference_messages_5_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__typecheck__NewValidPredIdSet_25, check_hlds__typecheck__OrigValidPredIds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ProgressSpecs_28);
                  }
#line 256 "typecheck.m"
                  {
#line 256 "typecheck.m"
                    parse_tree__error_util__write_error_specs_8_p_0(check_hlds__typecheck__ProgressSpecs_28, check_hlds__typecheck__Globals_26, (MR_Integer) 0, &check_hlds__typecheck__V_30_30, (MR_Integer) 0, &check_hlds__typecheck__V_31_31);
                  }
#line 252 "typecheck.m"
                }
#line 258 "typecheck.m"
                break;
#line 258 "typecheck.m"
            }
#line 261 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Iteration_10 < check_hlds__typecheck__MaxIterations_11);
#line 261 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 262 "typecheck.m"
              {
#line 262 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_46_46 = (check_hlds__typecheck__Iteration_10 + (MR_Integer) 1);

#line 262 "typecheck.m"
                /* direct tailcall eliminated */
#line 262 "typecheck.m"
                {
#line 262 "typecheck.m"
                  MR_Integer check_hlds__typecheck__Iteration__tmp_copy_10 = check_hlds__typecheck__V_46_46;
#line 262 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_32 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;

#line 262 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_32;
#line 262 "typecheck.m"
                  check_hlds__typecheck__Iteration_10 = check_hlds__typecheck__Iteration__tmp_copy_10;
#line 262 "typecheck.m"
                }
#line 262 "typecheck.m"
                continue;
#line 262 "typecheck.m"
              }
#line 261 "typecheck.m"
            else
#line 266 "typecheck.m"
              {
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_55;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_56;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_59_59;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_62_62;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_65_65;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_69_69;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_86_86;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_87_87;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_91_91;

#line 266 "typecheck.m"
                *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 336 "typecheck.m"
                {
#line 336 "typecheck.m"
                  check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__MaxIterations_11));
#line 336 "typecheck.m"
                }
#line 336 "typecheck.m"
                {
#line 336 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[14])));
#line 336 "typecheck.m"
                }
#line 336 "typecheck.m"
                {
#line 336 "typecheck.m"
                  check_hlds__typecheck__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[18])));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_65_65, 1) = ((MR_Box) (check_hlds__typecheck__V_68_68));
#line 336 "typecheck.m"
                }
#line 335 "typecheck.m"
                {
#line 335 "typecheck.m"
                  check_hlds__typecheck__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[17])));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck__V_65_65));
#line 335 "typecheck.m"
                }
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[16])));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_59_59, 1) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 334 "typecheck.m"
                }
#line 333 "typecheck.m"
                {
#line 333 "typecheck.m"
                  check_hlds__typecheck__Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[15])));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_55, 1) = ((MR_Box) (check_hlds__typecheck__V_59_59));
#line 333 "typecheck.m"
                }
#line 340 "typecheck.m"
                {
#line 340 "typecheck.m"
                  check_hlds__typecheck__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_87_87, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_55));
#line 340 "typecheck.m"
                }
#line 340 "typecheck.m"
                {
#line 340 "typecheck.m"
                  check_hlds__typecheck__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_86_86, 0) = ((MR_Box) (check_hlds__typecheck__V_87_87));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "typecheck.m"
                }
#line 340 "typecheck.m"
                {
#line 340 "typecheck.m"
                  check_hlds__typecheck__Msg_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 1) = ((MR_Box) ((MR_Integer) 1));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 3) = ((MR_Box) (check_hlds__typecheck__V_86_86));
#line 340 "typecheck.m"
                }
#line 341 "typecheck.m"
                {
#line 341 "typecheck.m"
                  check_hlds__typecheck__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_91_91, 0) = ((MR_Box) (check_hlds__typecheck__Msg_56));
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 341 "typecheck.m"
                }
#line 341 "typecheck.m"
                {
#line 341 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 2) = ((MR_Box) (check_hlds__typecheck__V_91_91));
#line 341 "typecheck.m"
                }
#line 267 "typecheck.m"
                {
#line 267 "typecheck.m"
                  MR_Word base;
#line 267 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "typecheck.m"
                  *check_hlds__typecheck__Specs_16 = base;
#line 267 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 267 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "typecheck.m"
                }
#line 268 "typecheck.m"
                *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 1;
#line 266 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 266 "typecheck.m"
              }
#line 250 "typecheck.m"
          }
#line 228 "typecheck.m"
      }
#line 228 "typecheck.m"
      break;
#line 228 "typecheck.m"
    }
#line 221 "typecheck.m"
}

#line 190 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 190 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 190 "typecheck.m"
{
#line 194 "typecheck.m"
  {
#line 194 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 194 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "typecheck.m"
      *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "typecheck.m"
    else
#line 196 "typecheck.m"
      {
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo_11;
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 0)));
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 1)));
#line 215 "typecheck.m"
        MR_Word * check_hlds__typecheck__AddrPredIdsInfos_77;

#line 199 "typecheck.m"
        {
#line 199 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_14)));
        }
#line 199 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 201 "typecheck.m"
          {
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo0_15;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo_17;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__Globals_18;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__PredStatus_30;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesInfo0_31;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesRep0_32;
#line 202 "typecheck.m"
            MR_Word check_hlds__typecheck___ContainingGoalMap_16;
#line 1049 "typecheck.m"
            MR_Word check_hlds__typecheck___ItemNumbers0_33;
#line 1051 "typecheck.m"
            MR_Word check_hlds__typecheck__V_57_57;
#line 1051 "typecheck.m"
            MR_Word check_hlds__typecheck__V_58_58;

#line 201 "typecheck.m"
            {
#line 201 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__GoalIdClausesInfo0_15);
            }
#line 202 "typecheck.m"
            {
#line 202 "typecheck.m"
              hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck___ContainingGoalMap_16, check_hlds__typecheck__GoalIdClausesInfo0_15, &check_hlds__typecheck__GoalIdClausesInfo_17);
            }
#line 204 "typecheck.m"
            {
#line 204 "typecheck.m"
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__GoalIdClausesInfo_17, check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1047 "typecheck.m"
            {
#line 1047 "typecheck.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__PredStatus_30);
            }
#line 1048 "typecheck.m"
            {
#line 1048 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ClausesInfo0_31);
            }
#line 1049 "typecheck.m"
            {
#line 1049 "typecheck.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesRep0_32, &check_hlds__typecheck___ItemNumbers0_33);
            }
#line 1051 "typecheck.m"
            {
#line 1051 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1051 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1051 "typecheck.m"
              {
#line 1052 "typecheck.m"
                {
#line 1052 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_32);
                }
#line 1052 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_57_57 == (MR_Integer) 1);
#line 1051 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1051 "typecheck.m"
                  {
#line 1053 "typecheck.m"
                    {
#line 1053 "typecheck.m"
                      check_hlds__typecheck__V_58_58 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__typecheck__PredStatus_30);
                    }
#line 1053 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_58_58 == (MR_Integer) 1);
#line 1051 "typecheck.m"
                  }
#line 1051 "typecheck.m"
              }
#line 1050 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1055 "typecheck.m"
              {
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeInfo_53_75;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVars_34;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncArgs_35;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRetVal_36;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_37;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncModule_38;
#line 1055 "typecheck.m"
                MR_String check_hlds__typecheck__FuncName_39;
#line 1055 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredArity_40;
#line 1055 "typecheck.m"
                MR_Integer check_hlds__typecheck__FuncArity_41;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncSymName_42;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncConsId_43;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRHS_44;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal0_45;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalExpr_46;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo0_47;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__NonLocals_48;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo_49;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal_50;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__Clause_51;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep_52;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__ItemNumbers_53;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo_54;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers0_55;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_56;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__V_64_64;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71;
#line 1055 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72;
#line 1056 "typecheck.m"
                MR_Box check_hlds__typecheck__conv0_FuncRetVal_36;

#line 1055 "typecheck.m"
                {
#line 1055 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__HeadVars_34);
                }
#line 21070 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeInfo_53_75 = (MR_Word) &check_hlds__typecheck_scalar_common_1[2];
#line 1056 "typecheck.m"
                {
#line 1056 "typecheck.m"
                  hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34, &check_hlds__typecheck__FuncArgs_35, &check_hlds__typecheck__conv0_FuncRetVal_36);
                }
#line 1056 "typecheck.m"
                check_hlds__typecheck__FuncRetVal_36 = ((MR_Word) check_hlds__typecheck__conv0_FuncRetVal_36);
#line 1057 "typecheck.m"
                {
#line 1057 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_37);
                }
#line 1058 "typecheck.m"
                {
#line 1058 "typecheck.m"
                  check_hlds__typecheck__FuncModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1059 "typecheck.m"
                {
#line 1059 "typecheck.m"
                  check_hlds__typecheck__FuncName_39 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1060 "typecheck.m"
                {
#line 1060 "typecheck.m"
                  check_hlds__typecheck__PredArity_40 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1061 "typecheck.m"
                {
#line 1061 "typecheck.m"
                  parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &check_hlds__typecheck__FuncArity_41, check_hlds__typecheck__PredArity_40);
                }
#line 1062 "typecheck.m"
                {
#line 1062 "typecheck.m"
                  check_hlds__typecheck__FuncSymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 0) = ((MR_Box) (check_hlds__typecheck__FuncModule_38));
#line 1062 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 1) = ((MR_Box) (check_hlds__typecheck__FuncName_39));
#line 1062 "typecheck.m"
                }
#line 1063 "typecheck.m"
                {
#line 1063 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 1063 "typecheck.m"
                {
#line 1063 "typecheck.m"
                  check_hlds__typecheck__FuncConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1063 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 1) = ((MR_Box) (check_hlds__typecheck__FuncSymName_42));
#line 1063 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 2) = ((MR_Box) (check_hlds__typecheck__FuncArity_41));
#line 1063 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 3) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 1063 "typecheck.m"
                }
#line 1064 "typecheck.m"
                {
#line 1064 "typecheck.m"
                  check_hlds__typecheck__FuncRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 0) = ((MR_Box) (check_hlds__typecheck__FuncConsId_43));
#line 1064 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1064 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 2) = ((MR_Box) (check_hlds__typecheck__FuncArgs_35));
#line 1064 "typecheck.m"
                }
#line 1065 "typecheck.m"
                {
#line 1065 "typecheck.m"
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__typecheck__FuncRetVal_36, check_hlds__typecheck__FuncRHS_44, check_hlds__typecheck__Context_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Goal0_45);
                }
#line 1067 "typecheck.m"
                check_hlds__typecheck__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 0)));
#line 1067 "typecheck.m"
                check_hlds__typecheck__GoalInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 1)));
#line 1068 "typecheck.m"
                {
#line 1068 "typecheck.m"
                  check_hlds__typecheck__V_64_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34);
                }
#line 1068 "typecheck.m"
                {
#line 1068 "typecheck.m"
                  check_hlds__typecheck__NonLocals_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck__V_64_64);
                }
#line 1069 "typecheck.m"
                {
#line 1069 "typecheck.m"
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__typecheck__NonLocals_48, check_hlds__typecheck__GoalInfo0_47, &check_hlds__typecheck__GoalInfo_49);
                }
#line 1070 "typecheck.m"
                {
#line 1070 "typecheck.m"
                  check_hlds__typecheck__Goal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_46));
#line 1070 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_49));
#line 1070 "typecheck.m"
                }
#line 1071 "typecheck.m"
                {
#line 1071 "typecheck.m"
                  check_hlds__typecheck__Clause_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 1) = ((MR_Box) (check_hlds__typecheck__Goal_50));
#line 1071 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 3) = ((MR_Box) (check_hlds__typecheck__Context_37));
#line 1071 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "typecheck.m"
                }
#line 1072 "typecheck.m"
                {
#line 1072 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__Clause_51));
#line 1072 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1072 "typecheck.m"
                }
#line 1072 "typecheck.m"
                {
#line 1072 "typecheck.m"
                  hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_68_68, &check_hlds__typecheck__ClausesRep_52);
                }
#line 1073 "typecheck.m"
                {
#line 1073 "typecheck.m"
                  check_hlds__typecheck__ItemNumbers_53 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
                }
#line 1074 "typecheck.m"
                {
#line 1074 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_52, check_hlds__typecheck__ItemNumbers_53, check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesInfo_54);
                }
#line 1076 "typecheck.m"
                {
#line 1076 "typecheck.m"
                  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71);
                }
#line 1077 "typecheck.m"
                {
#line 1077 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__ClausesInfo_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72);
                }
#line 1078 "typecheck.m"
                {
#line 1078 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__Markers0_55);
                }
#line 1079 "typecheck.m"
                {
#line 1079 "typecheck.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, check_hlds__typecheck__Markers0_55, &check_hlds__typecheck__Markers_56);
                }
#line 1080 "typecheck.m"
                {
#line 1080 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21);
                }
#line 1055 "typecheck.m"
              }
#line 1050 "typecheck.m"
            else
#line 1050 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 208 "typecheck.m"
            {
#line 208 "typecheck.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_18);
            }
#line 209 "typecheck.m"
            {
#line 209 "typecheck.m"
              hlds__headvar_names__maybe_improve_headvar_names_3_p_0(check_hlds__typecheck__Globals_18, check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22);
            }
#line 210 "typecheck.m"
            {
#line 210 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__typecheck__PredId_14));
#line 210 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22));
#line 210 "typecheck.m"
            }
#line 201 "typecheck.m"
          }
#line 199 "typecheck.m"
        else
#line 212 "typecheck.m"
          check_hlds__typecheck__PredIdInfo_11 = check_hlds__typecheck__PredIdInfo0_9;
#line 196 "typecheck.m"
        {
#line 196 "typecheck.m"
          MR_Word base;
#line 196 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 196 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_11));
#line 196 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
#line 196 "typecheck.m"
        }
#line 196 "typecheck.m"
        check_hlds__typecheck__AddrPredIdsInfos_77 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1));
#line 215 "typecheck.m"
        {
#line 215 "typecheck.m"
          check_hlds__typecheck__LCMCpr_prepare_for_typecheck_1_4_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_10, check_hlds__typecheck__AddrPredIdsInfos_77);
        }
#line 196 "typecheck.m"
      }
#line 194 "typecheck.m"
  }
#line 190 "typecheck.m"
}

#line 92 "typecheck.m"
void MR_CALL 
check_hlds__typecheck__typecheck_module_4_p_0(
#line 92 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19,
#line 92 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20,
#line 92 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_6,
#line 92 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_7)
#line 92 "typecheck.m"
{
#line 154 "typecheck.m"
  {
#line 154 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_27_27;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_8;
#line 154 "typecheck.m"
    MR_Integer check_hlds__typecheck__MaxIterations_9;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIdSet_10;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIds_11;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap0_12;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos0_13;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos_14;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap_15;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__FinalValidPredIdSet_16;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__CheckSpecs_17;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__InferSpecs_18;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22;

#line 155 "typecheck.m"
    {
#line 155 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__Globals_8);
    }
#line 156 "typecheck.m"
    {
#line 156 "typecheck.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck__Globals_8, (MR_Integer) 172, &check_hlds__typecheck__MaxIterations_9);
    }
#line 159 "typecheck.m"
    {
#line 159 "typecheck.m"
      hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__OrigValidPredIdSet_10);
    }
#line 21366 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 160 "typecheck.m"
    {
#line 160 "typecheck.m"
      check_hlds__typecheck__OrigValidPredIds_11 = mercury__set_tree234__to_sorted_list_1_f_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__OrigValidPredIdSet_10);
    }
#line 162 "typecheck.m"
    {
#line 162 "typecheck.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__PredMap0_12);
    }
#line 21378 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 163 "typecheck.m"
    {
#line 163 "typecheck.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__PredMap0_12, &check_hlds__typecheck__PredIdsInfos0_13);
    }
#line 176 "typecheck.m"
    {
#line 176 "typecheck.m"
      check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__typecheck__OrigValidPredIdSet_10, check_hlds__typecheck__PredIdsInfos0_13, &check_hlds__typecheck__PredIdsInfos_14);
    }
#line 179 "typecheck.m"
    {
#line 179 "typecheck.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__PredIdsInfos_14, &check_hlds__typecheck__PredMap_15);
    }
#line 180 "typecheck.m"
    {
#line 180 "typecheck.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_15, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 182 "typecheck.m"
    {
#line 182 "typecheck.m"
      check_hlds__typecheck__typecheck_to_fixpoint_9_p_0((MR_Integer) 1, check_hlds__typecheck__MaxIterations_9, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__OrigValidPredIds_11, check_hlds__typecheck__OrigValidPredIdSet_10, &check_hlds__typecheck__FinalValidPredIdSet_16, &check_hlds__typecheck__CheckSpecs_17, check_hlds__typecheck__ExceededIterationLimit_7);
    }
#line 186 "typecheck.m"
    {
#line 186 "typecheck.m"
      check_hlds__typecheck__construct_type_inference_messages_5_p_0(*check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__FinalValidPredIdSet_16, check_hlds__typecheck__OrigValidPredIds_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__InferSpecs_18);
    }
#line 188 "typecheck.m"
    {
#line 188 "typecheck.m"
      *check_hlds__typecheck__Specs_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__InferSpecs_18, check_hlds__typecheck__CheckSpecs_17);
    }
#line 154 "typecheck.m"
  }
#line 92 "typecheck.m"
}

void mercury__check_hlds__typecheck__init(void)
{
}

void mercury__check_hlds__typecheck__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_constraints_action_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_stuff_to_check_0);
}

void mercury__check_hlds__typecheck__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.typecheck. */
