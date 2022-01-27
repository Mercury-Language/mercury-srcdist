/*
** Automatically generated from `ordering_mode_constraints.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module check_hlds.ordering_mode_constraints. */
/* :- implementation. */

/*
INIT mercury__check_hlds__ordering_mode_constraints__init
ENDINIT
*/

#include "check_hlds.ordering_mode_constraints.mih"


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
#include "check_hlds.abstract_mode_constraints.mih"
#include "check_hlds.build_mode_constraints.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mcsolver.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.prop_mode_constraints.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 250 "ordering_mode_constraints.m"
struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s {
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__ContainingGoalMap_10;
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__VarMap_12;
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13;
#line 256 "ordering_mode_constraints.m"
  MR_bool check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded;
#line 256 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Goal0_18;
#line 256 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__SolverConstraints_22;
#line 310 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__STATE_VARIABLE_Goal_23_46;
#line 306 "ordering_mode_constraints.m"
  jmp_buf check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_0;
#line 306 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Bindings_44;
#line 311 "ordering_mode_constraints.m"
  jmp_buf check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_1;
#line 250 "ordering_mode_constraints.m"
};


#line 162 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 165 "check_hlds.ordering_mode_constraints.c"
static const MR_VA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

#line 168 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0;

#line 171 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 174 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0;

#line 177 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 180 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 183 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;

#line 186 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 189 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0;

#line 192 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0;

#line 195 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 198 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 201 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;

#line 204 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;

#line 207 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;

#line 213 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 216 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_0[1];

#line 219 "check_hlds.ordering_mode_constraints.c"
static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_0[1];

#line 222 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0;

#line 225 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 228 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_1[2];

#line 231 "check_hlds.ordering_mode_constraints.c"
static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_1[2];

#line 234 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1;

#line 237 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_2[1];

#line 240 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2;

#line 243 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_0[1];

#line 246 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_1[1];

#line 249 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_2[1];

#line 252 "check_hlds.ordering_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_analysis_failure_0[3];

#line 255 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_analysis_failure_0[3];

#line 258 "check_hlds.ordering_mode_constraints.c"
static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_analysis_failure_0[3];

#line 261 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0;

#line 264 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_ordering_constraint_0_0[2];

#line 267 "check_hlds.ordering_mode_constraints.c"
static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_ordering_constraint_0_0[2];

#line 270 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0;

#line 273 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_ordering_constraint_0_0[1];

#line 276 "check_hlds.ordering_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_ordering_constraint_0[1];

#line 279 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_ordering_constraint_0[1];

#line 282 "check_hlds.ordering_mode_constraints.c"
static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_ordering_constraint_0[1];

#line 285 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;

#line 288 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__ti_set_ordlist_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;

#line 291 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_ordering_constraints_info_0_0[3];

#line 294 "check_hlds.ordering_mode_constraints.c"
static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_ordering_constraints_info_0_0[3];

#line 297 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0;

#line 300 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_ordering_constraints_info_0_0[1];

#line 303 "check_hlds.ordering_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_ordering_constraints_info_0[1];

#line 306 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_ordering_constraints_info_0[1];

#line 309 "check_hlds.ordering_mode_constraints.c"
static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_ordering_constraints_info_0[1];

#line 312 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;

#line 315 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0_10001(
#line 318 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 320 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 323 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0_10001(
#line 326 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 328 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 330 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 333 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0_10001(
#line 336 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 338 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 341 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0_10001(
#line 344 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 346 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 348 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 351 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0_10001(
#line 354 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 356 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 359 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0_10001(
#line 362 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 364 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 366 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 369 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0_10001(
#line 372 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 374 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 377 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0_10001(
#line 380 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 382 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 384 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 387 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0_10001(
#line 390 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 392 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 395 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0_10001(
#line 398 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 400 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 402 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 405 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0_10001(
#line 408 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 410 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 413 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0_10001(
#line 416 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 418 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 420 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 423 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0_10001(
#line 426 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 428 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 431 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0_10001(
#line 434 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 436 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 438 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 560 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_3(
#line 560 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 560 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 560 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 560 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 557 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_2(
#line 557 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 557 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 557 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 548 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_1(
#line 548 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 548 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1);

#line 543 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_8,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__RepVars_10,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18,
#line 543 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_19);

#line 674 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__674__1_2_p_0(
#line 674 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__First_11,
#line 674 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_22);

#line 668 "ordering_mode_constraints.m"
static MR_Integer MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__668__1_1_f_0(
#line 668 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_19);

#line 504 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__504__1_5_p_0(
#line 504 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_5,
#line 504 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__GoalId_10,
#line 504 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_18,
#line 504 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__4_19,
#line 504 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__5_20);

#line 444 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__444__1_2_f_0(
#line 444 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__To_9,
#line 444 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_20,
#line 444 "ordering_mode_constraints.m"
  MR_Integer * check_hlds__ordering_mode_constraints__HeadVar__3_21);

#line 442 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__442__1_2_f_0(
#line 442 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__From_8,
#line 442 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_17,
#line 442 "ordering_mode_constraints.m"
  MR_Integer * check_hlds__ordering_mode_constraints__HeadVar__3_18);

#line 354 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_reordering__354__1_3_p_0(
#line 354 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goals0_40,
#line 354 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__HeadVar__2_77,
#line 354 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__3_78);

#line 187 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__187__1_2_p_0(
#line 187 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_18,
#line 187 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_22);

#line 424 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__424__1_1_p_0(
#line 424 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_13);

#line 163 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0(
#line 163 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 163 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 163 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3);

#line 163 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0(
#line 163 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 163 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2);

#line 135 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0(
#line 135 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 135 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 135 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3);

#line 135 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0(
#line 135 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 135 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2);

#line 140 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0(
#line 140 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 140 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 140 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3);

#line 140 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0(
#line 140 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 140 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2);

#line 802 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_4(
#line 802 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 802 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 802 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 802 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 790 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_3(
#line 790 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 790 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 790 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 790 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 783 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_2(
#line 783 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 783 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 783 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 783 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 780 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_1(
#line 780 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 780 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 780 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 780 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 756 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(
#line 756 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Globals_6,
#line 756 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__Indent_7,
#line 756 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goal_8);

#line 737 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_p_0(
#line 737 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Globals_6,
#line 737 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ProcTable_7,
#line 737 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__ProcId_8);

#line 729 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_3(
#line 729 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 729 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 729 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 729 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 726 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_2(
#line 726 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 726 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 726 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 726 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 724 "ordering_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_1(
#line 724 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 724 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1);

#line 701 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0(
#line 701 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ModuleInfo_5,
#line 701 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_6);

#line 674 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_2(
#line 674 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 674 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1);

#line 668 "ordering_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_1(
#line 668 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 668 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1);

#line 664 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0(
#line 664 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Constraints0_4,
#line 664 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Conjuncts0_5,
#line 664 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__Ordering_6);

#line 596 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__minimum_reordering_2_p_0(
#line 596 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__OCI_3,
#line 596 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__Order_4);

#line 577 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__get_position_in_conj_3_p_0(
#line 577 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ContainingGoalMap_4,
#line 577 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 577 "ordering_mode_constraints.m"
  MR_Integer * check_hlds__ordering_mode_constraints__N_8);

#line 567 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__produced_at_path_3_p_0(
#line 567 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_4,
#line 567 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_5,
#line 567 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__RepVar_6);

#line 543 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_p_0(
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_8,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints___ProgVar_9,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__RepVars_10,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18,
#line 543 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_19);

#line 532 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0_1(
#line 532 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 532 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 532 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 532 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3,
#line 532 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_4);

#line 527 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0(
#line 527 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_6,
#line 527 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_7,
#line 527 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__RepVarMap_8,
#line 527 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_10,
#line 527 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_11);

#line 504 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0_1(
#line 504 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 504 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 504 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 504 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 496 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0(
#line 496 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_5,
#line 496 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goal_6,
#line 496 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_RepvarMap_0_14,
#line 496 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_RepvarMap_15);

#line 491 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0_1(
#line 491 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 491 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 491 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 491 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 487 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0(
#line 487 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_4,
#line 487 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goals_5,
#line 487 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__RepvarMap_6);

#line 466 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraint_4_p_0(
#line 466 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__A_5,
#line 466 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__B_6,
#line 466 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_0_8,
#line 466 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_9);

#line 461 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0_1(
#line 461 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 461 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 461 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 461 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 456 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0(
#line 456 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bs_5,
#line 456 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__A_6,
#line 456 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_0_8,
#line 456 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_9);

#line 369 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_4(
#line 369 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 369 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 369 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 358 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_3(
#line 358 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 358 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 358 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 354 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_2(
#line 354 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 354 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 354 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 363 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_1(
#line 363 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 363 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 363 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 329 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ContainingGoalMap_7,
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_8,
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_9,
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_10,
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goal0_11,
#line 329 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__Goal_12);

#line 306 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_1(
#line 306 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg);

#line 306 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_2(
#line 306 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg);

#line 306 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_3(
#line 306 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg);

#line 311 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_4(
#line 311 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg);

#line 311 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_5(
#line 311 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg);

#line 250 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0(
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ContainingGoalMap_10,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredConstraints_11,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_12,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_13,
#line 250 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__ProcId_14,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_0_27,
#line 250 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_28,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_PredInfo_0_29,
#line 250 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_PredInfo_30);

#line 228 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__pred_reordering_5_p_0_1(
#line 228 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 228 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 228 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 228 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3,
#line 228 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_4,
#line 228 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_5);

#line 207 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__pred_reordering_5_p_0(
#line 207 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredConstraintsMap_6,
#line 207 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 207 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_8,
#line 207 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_20,
#line 207 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_21);

#line 200 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_3(
#line 200 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 200 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 200 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 200 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 187 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_2(
#line 187 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 187 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1);

#line 184 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_1(
#line 184 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 184 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1);

#line 179 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0(
#line 179 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredConstraintsMap_6,
#line 179 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 179 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__SCC0_8,
#line 179 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_18,
#line 179 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_19);

#line 424 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_4(
#line 424 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 424 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1);

#line 449 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_3(
#line 449 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 449 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 449 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 449 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 444 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_2(
#line 444 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 444 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 444 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 442 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_1(
#line 442 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 442 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 442 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2);

#line 694 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_2(
#line 694 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 694 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 694 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 694 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);

#line 692 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_1(
#line 692 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 692 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1);

#line 171 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__mode_reordering_5_p_0_1(
#line 171 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 171 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 171 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 171 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_1[16][2];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_4[5][8];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_5[4][5];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_6[5][7];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_7[4][6];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_8[1][12];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_9[2][9];

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_10[1][1];




static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__ordering_mode_constraints_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_10[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Goal paths for"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__ordering_mode_constraints_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__ordering_mode_constraints_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_1[3])),
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_3[1])),
    ((MR_Box) (check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[1])),
    ((MR_Box) (check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[3])),
    ((MR_Box) (check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_2[0])),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_4[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_6[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_7[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_9[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0)),
    ((MR_Box) (&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0))
  },
};

static /* final */ const MR_Box check_hlds__ordering_mode_constraints_scalar_common_10[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1562 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1571 "check_hlds.ordering_mode_constraints.c"
static const MR_VA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &check_hlds__ordering_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
  }
};

#line 1581 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain___vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints____vti_tuple_2tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0check_hlds__abstract_mode_constraints__type_ctor_info_pred_p_c_constraints_0
  }
};

#line 1590 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &check_hlds__abstract_mode_constraints__check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1598 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__bimap__pti_bimap_2__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0,
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0
  }
};

#line 1607 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1615 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1623 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__pti_set_ordlist_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0
  }
};

#line 1631 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 1640 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0
  }
};

#line 1648 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__term__ti_var_1check_hlds__abstract_mode_constraints__type_ctor_info_mc_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1657 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1665 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1673 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0
  }
};

#line 1681 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0
  }
};

#line 1690 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1698 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__pti_list_1__plain_check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0
  }
};

#line 1706 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 1715 "check_hlds.ordering_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_conjunct_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "conjunct_id",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1736 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1741 "check_hlds.ordering_mode_constraints.c"
static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_0[1] = {
  (MR_String) "failing_predicate"
};

#line 1746 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0 = {
  (MR_String) "no_producer_consumer_sols",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_0,
  NULL,
  NULL
};

#line 1761 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1769 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1775 "check_hlds.ordering_mode_constraints.c"
static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_1[2] = {
  (MR_String) "caller",
  (MR_String) "scc"
};

#line 1781 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1 = {
  (MR_String) "mode_inference_failed",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_1,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_analysis_failure_0_1,
  NULL,
  NULL
};

#line 1796 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1801 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2 = {
  (MR_String) "conjunct_ordering_failed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_analysis_failure_0_2,
  NULL,
  NULL,
  NULL
};

#line 1816 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0
};

#line 1821 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_1[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2
};

#line 1826 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_2[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1
};

#line 1831 "check_hlds.ordering_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_analysis_failure_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_analysis_failure_0_2
  }
};

#line 1850 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_analysis_failure_0[3] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_2,
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_1,
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_analysis_failure_0_0
};

#line 1857 "check_hlds.ordering_mode_constraints.c"
static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_analysis_failure_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1864 "check_hlds.ordering_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "mode_analysis_failure",
  {
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_analysis_failure_0
  },
  {
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_analysis_failure_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_analysis_failure_0
};

#line 1885 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0
  }
};

#line 1893 "check_hlds.ordering_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failures_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "mode_analysis_failures",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1914 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_ordering_constraint_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1920 "check_hlds.ordering_mode_constraints.c"
static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_ordering_constraint_0_0[2] = {
  (MR_String) "first",
  (MR_String) "second"
};

#line 1926 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0 = {
  (MR_String) "lt",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_mode_ordering_constraint_0_0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_mode_ordering_constraint_0_0,
  NULL,
  NULL
};

#line 1941 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_ordering_constraint_0_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0
};

#line 1946 "check_hlds.ordering_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_ordering_constraint_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_mode_ordering_constraint_0_0
  }
};

#line 1955 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_ordering_constraint_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_mode_ordering_constraint_0_0
};

#line 1960 "check_hlds.ordering_mode_constraints.c"
static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_ordering_constraint_0[1] = {
  (MR_Integer) 0
};

#line 1965 "check_hlds.ordering_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "mode_ordering_constraint",
  {
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_mode_ordering_constraint_0
  },
  {
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_mode_ordering_constraint_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_mode_ordering_constraint_0
};

#line 1986 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0
  }
};

#line 1994 "check_hlds.ordering_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "mode_ordering_constraints",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2015 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__ordering_mode_constraints__set_ordlist__ti_set_ordlist_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0
  }
};

#line 2023 "check_hlds.ordering_mode_constraints.c"
static const MR_PseudoTypeInfo check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_ordering_constraints_info_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__set_ordlist__ti_set_ordlist_1check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0
};

#line 2030 "check_hlds.ordering_mode_constraints.c"
static const MR_ConstString check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_ordering_constraints_info_0_0[3] = {
  (MR_String) "oci_containing_map",
  (MR_String) "oci_num_conjuncts",
  (MR_String) "oci_constraints"
};

#line 2037 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDesc check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0 = {
  (MR_String) "ordering_constraints_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_types_ordering_constraints_info_0_0,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__field_names_ordering_constraints_info_0_0,
  NULL,
  NULL
};

#line 2052 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_ordering_constraints_info_0_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0
};

#line 2057 "check_hlds.ordering_mode_constraints.c"
static const MR_DuPtagLayout check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_ordering_constraints_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_stag_ordered_ordering_constraints_info_0_0
  }
};

#line 2066 "check_hlds.ordering_mode_constraints.c"
static const MR_DuFunctorDescPtr check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_ordering_constraints_info_0[1] = {
  &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_functor_desc_ordering_constraints_info_0_0
};

#line 2071 "check_hlds.ordering_mode_constraints.c"
static const MR_Integer check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_ordering_constraints_info_0[1] = {
  (MR_Integer) 0
};

#line 2076 "check_hlds.ordering_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "ordering_constraints_info",
  {
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_name_ordered_ordering_constraints_info_0
  },
  {
    check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__du_ptag_ordered_ordering_constraints_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__functor_number_map_ordering_constraints_info_0
};

#line 2097 "check_hlds.ordering_mode_constraints.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__ordering_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__ordering_mode_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__ordering_mode_constraints__list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0
  }
};

#line 2106 "check_hlds.ordering_mode_constraints.c"
const MR_TypeCtorInfo_Struct check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_prog_var_at_conjuncts_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0_10001)),
  ((MR_Box) (check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0_10001)),
  (MR_String) "check_hlds.ordering_mode_constraints",
  (MR_String) "prog_var_at_conjuncts_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__ordering_mode_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2127 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0_10001(
#line 2130 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2132 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 2134 "check_hlds.ordering_mode_constraints.c"
{
#line 2136 "check_hlds.ordering_mode_constraints.c"
  {
#line 2138 "check_hlds.ordering_mode_constraints.c"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;

#line 2141 "check_hlds.ordering_mode_constraints.c"
    {
#line 2143 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0(((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_2));
    }
#line 2146 "check_hlds.ordering_mode_constraints.c"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 2148 "check_hlds.ordering_mode_constraints.c"
  }
#line 2150 "check_hlds.ordering_mode_constraints.c"
}

#line 2153 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0_10001(
#line 2156 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2158 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 2160 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 2162 "check_hlds.ordering_mode_constraints.c"
{
#line 2164 "check_hlds.ordering_mode_constraints.c"
  {
#line 2166 "check_hlds.ordering_mode_constraints.c"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1;

#line 2169 "check_hlds.ordering_mode_constraints.c"
    {
#line 2171 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0(&check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_2), ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_3));
    }
#line 2174 "check_hlds.ordering_mode_constraints.c"
    *check_hlds__ordering_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1));
#line 2176 "check_hlds.ordering_mode_constraints.c"
  }
#line 2178 "check_hlds.ordering_mode_constraints.c"
}

#line 2181 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0_10001(
#line 2184 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2186 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 2188 "check_hlds.ordering_mode_constraints.c"
{
#line 2190 "check_hlds.ordering_mode_constraints.c"
  {
#line 2192 "check_hlds.ordering_mode_constraints.c"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;

#line 2195 "check_hlds.ordering_mode_constraints.c"
    {
#line 2197 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2));
    }
#line 2200 "check_hlds.ordering_mode_constraints.c"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 2202 "check_hlds.ordering_mode_constraints.c"
  }
#line 2204 "check_hlds.ordering_mode_constraints.c"
}

#line 2207 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0_10001(
#line 2210 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2212 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 2214 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 2216 "check_hlds.ordering_mode_constraints.c"
{
#line 2218 "check_hlds.ordering_mode_constraints.c"
  {
#line 2220 "check_hlds.ordering_mode_constraints.c"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1;

#line 2223 "check_hlds.ordering_mode_constraints.c"
    {
#line 2225 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0(&check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_3));
    }
#line 2228 "check_hlds.ordering_mode_constraints.c"
    *check_hlds__ordering_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1));
#line 2230 "check_hlds.ordering_mode_constraints.c"
  }
#line 2232 "check_hlds.ordering_mode_constraints.c"
}

#line 2235 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0_10001(
#line 2238 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2240 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 2242 "check_hlds.ordering_mode_constraints.c"
{
#line 2244 "check_hlds.ordering_mode_constraints.c"
  {
#line 2246 "check_hlds.ordering_mode_constraints.c"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;

#line 2249 "check_hlds.ordering_mode_constraints.c"
    {
#line 2251 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2));
    }
#line 2254 "check_hlds.ordering_mode_constraints.c"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 2256 "check_hlds.ordering_mode_constraints.c"
  }
#line 2258 "check_hlds.ordering_mode_constraints.c"
}

#line 2261 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0_10001(
#line 2264 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2266 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 2268 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 2270 "check_hlds.ordering_mode_constraints.c"
{
#line 2272 "check_hlds.ordering_mode_constraints.c"
  {
#line 2274 "check_hlds.ordering_mode_constraints.c"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1;

#line 2277 "check_hlds.ordering_mode_constraints.c"
    {
#line 2279 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0(&check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_3));
    }
#line 2282 "check_hlds.ordering_mode_constraints.c"
    *check_hlds__ordering_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1));
#line 2284 "check_hlds.ordering_mode_constraints.c"
  }
#line 2286 "check_hlds.ordering_mode_constraints.c"
}

#line 2289 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0_10001(
#line 2292 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2294 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 2296 "check_hlds.ordering_mode_constraints.c"
{
#line 2298 "check_hlds.ordering_mode_constraints.c"
  {
#line 2300 "check_hlds.ordering_mode_constraints.c"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;

#line 2303 "check_hlds.ordering_mode_constraints.c"
    {
#line 2305 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2));
    }
#line 2308 "check_hlds.ordering_mode_constraints.c"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 2310 "check_hlds.ordering_mode_constraints.c"
  }
#line 2312 "check_hlds.ordering_mode_constraints.c"
}

#line 2315 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0_10001(
#line 2318 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2320 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 2322 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 2324 "check_hlds.ordering_mode_constraints.c"
{
#line 2326 "check_hlds.ordering_mode_constraints.c"
  {
#line 2328 "check_hlds.ordering_mode_constraints.c"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1;

#line 2331 "check_hlds.ordering_mode_constraints.c"
    {
#line 2333 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0(&check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_3));
    }
#line 2336 "check_hlds.ordering_mode_constraints.c"
    *check_hlds__ordering_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1));
#line 2338 "check_hlds.ordering_mode_constraints.c"
  }
#line 2340 "check_hlds.ordering_mode_constraints.c"
}

#line 2343 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0_10001(
#line 2346 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2348 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 2350 "check_hlds.ordering_mode_constraints.c"
{
#line 2352 "check_hlds.ordering_mode_constraints.c"
  {
#line 2354 "check_hlds.ordering_mode_constraints.c"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;

#line 2357 "check_hlds.ordering_mode_constraints.c"
    {
#line 2359 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2));
    }
#line 2362 "check_hlds.ordering_mode_constraints.c"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 2364 "check_hlds.ordering_mode_constraints.c"
  }
#line 2366 "check_hlds.ordering_mode_constraints.c"
}

#line 2369 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0_10001(
#line 2372 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2374 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 2376 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 2378 "check_hlds.ordering_mode_constraints.c"
{
#line 2380 "check_hlds.ordering_mode_constraints.c"
  {
#line 2382 "check_hlds.ordering_mode_constraints.c"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1;

#line 2385 "check_hlds.ordering_mode_constraints.c"
    {
#line 2387 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0(&check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_3));
    }
#line 2390 "check_hlds.ordering_mode_constraints.c"
    *check_hlds__ordering_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1));
#line 2392 "check_hlds.ordering_mode_constraints.c"
  }
#line 2394 "check_hlds.ordering_mode_constraints.c"
}

#line 2397 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0_10001(
#line 2400 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2402 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 2404 "check_hlds.ordering_mode_constraints.c"
{
#line 2406 "check_hlds.ordering_mode_constraints.c"
  {
#line 2408 "check_hlds.ordering_mode_constraints.c"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;

#line 2411 "check_hlds.ordering_mode_constraints.c"
    {
#line 2413 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2));
    }
#line 2416 "check_hlds.ordering_mode_constraints.c"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 2418 "check_hlds.ordering_mode_constraints.c"
  }
#line 2420 "check_hlds.ordering_mode_constraints.c"
}

#line 2423 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0_10001(
#line 2426 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2428 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 2430 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 2432 "check_hlds.ordering_mode_constraints.c"
{
#line 2434 "check_hlds.ordering_mode_constraints.c"
  {
#line 2436 "check_hlds.ordering_mode_constraints.c"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1;

#line 2439 "check_hlds.ordering_mode_constraints.c"
    {
#line 2441 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0(&check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_3));
    }
#line 2444 "check_hlds.ordering_mode_constraints.c"
    *check_hlds__ordering_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1));
#line 2446 "check_hlds.ordering_mode_constraints.c"
  }
#line 2448 "check_hlds.ordering_mode_constraints.c"
}

#line 2451 "check_hlds.ordering_mode_constraints.c"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0_10001(
#line 2454 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2456 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 2458 "check_hlds.ordering_mode_constraints.c"
{
#line 2460 "check_hlds.ordering_mode_constraints.c"
  {
#line 2462 "check_hlds.ordering_mode_constraints.c"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;

#line 2465 "check_hlds.ordering_mode_constraints.c"
    {
#line 2467 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2));
    }
#line 2470 "check_hlds.ordering_mode_constraints.c"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 2472 "check_hlds.ordering_mode_constraints.c"
  }
#line 2474 "check_hlds.ordering_mode_constraints.c"
}

#line 2477 "check_hlds.ordering_mode_constraints.c"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0_10001(
#line 2480 "check_hlds.ordering_mode_constraints.c"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 2482 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 2484 "check_hlds.ordering_mode_constraints.c"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 2486 "check_hlds.ordering_mode_constraints.c"
{
#line 2488 "check_hlds.ordering_mode_constraints.c"
  {
#line 2490 "check_hlds.ordering_mode_constraints.c"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1;

#line 2493 "check_hlds.ordering_mode_constraints.c"
    {
#line 2495 "check_hlds.ordering_mode_constraints.c"
      check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0(&check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1, ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_3));
    }
#line 2498 "check_hlds.ordering_mode_constraints.c"
    *check_hlds__ordering_mode_constraints__wrapper_arg_1 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__1_1));
#line 2500 "check_hlds.ordering_mode_constraints.c"
  }
#line 2502 "check_hlds.ordering_mode_constraints.c"
}

#line 560 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_3(
#line 560 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 560 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 560 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 560 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 560 "ordering_mode_constraints.m"
{
#line 560 "ordering_mode_constraints.m"
  {
#line 560 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 560 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 560 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_OCI_9;

#line 560 "ordering_mode_constraints.m"
    {
#line 560 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__add_lt_constraint_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), &check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_OCI_9);
    }
#line 560 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 560 "ordering_mode_constraints.m"
      {
#line 560 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_OCI_9));
#line 560 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 560 "ordering_mode_constraints.m"
      }
#line 560 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 560 "ordering_mode_constraints.m"
  }
#line 560 "ordering_mode_constraints.m"
}

#line 557 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_2(
#line 557 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 557 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 557 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 557 "ordering_mode_constraints.m"
{
#line 557 "ordering_mode_constraints.m"
  {
#line 557 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 557 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 557 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__conv1_N_8;

#line 557 "ordering_mode_constraints.m"
    {
#line 557 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__get_position_in_conj_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), &check_hlds__ordering_mode_constraints__conv1_N_8);
    }
#line 557 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 557 "ordering_mode_constraints.m"
      {
#line 557 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv1_N_8));
#line 557 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 557 "ordering_mode_constraints.m"
      }
#line 557 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 557 "ordering_mode_constraints.m"
  }
#line 557 "ordering_mode_constraints.m"
}

#line 548 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_1(
#line 548 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 548 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1)
#line 548 "ordering_mode_constraints.m"
{
#line 548 "ordering_mode_constraints.m"
  {
#line 548 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 548 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 548 "ordering_mode_constraints.m"
    {
#line 548 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__produced_at_path_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
    }
#line 548 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 548 "ordering_mode_constraints.m"
  }
#line 548 "ordering_mode_constraints.m"
}

#line 543 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_8,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__RepVars_10,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18,
#line 543 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_19)
#line 543 "ordering_mode_constraints.m"
{
#line 547 "ordering_mode_constraints.m"
  {
#line 547 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 547 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_28_28 = (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0;
#line 547 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__ProgVarAtProducers_12;
#line 547 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__ProgVarAtConsumers_13;
#line 547 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_20_20;

#line 548 "ordering_mode_constraints.m"
    {
#line 548 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 548 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[2]));
#line 548 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_1));
#line 548 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 548 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__VarMap_7));
#line 548 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__Bindings_8));
#line 548 "ordering_mode_constraints.m"
    }
#line 548 "ordering_mode_constraints.m"
    {
#line 548 "ordering_mode_constraints.m"
      mercury__list__filter_4_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_28_28, check_hlds__ordering_mode_constraints__V_20_20, check_hlds__ordering_mode_constraints__RepVars_10, &check_hlds__ordering_mode_constraints__ProgVarAtProducers_12, &check_hlds__ordering_mode_constraints__ProgVarAtConsumers_13);
    }
#line 553 "ordering_mode_constraints.m"
    if ((check_hlds__ordering_mode_constraints__ProgVarAtProducers_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "ordering_mode_constraints.m"
      {
#line 551 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_19 = check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18;
#line 551 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 551 "ordering_mode_constraints.m"
      }
#line 553 "ordering_mode_constraints.m"
    else
#line 554 "ordering_mode_constraints.m"
      {
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_31_31;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_35_35;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_13_45;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_14_46;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__RepVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ProgVarAtProducers_12, (MR_Integer) 0)));
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__ContainingGoalMap_15;
#line 554 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__First_16;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__Laters_17;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ProgVarAtProducers_12, (MR_Integer) 1)));
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_22_22;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_23_23;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__GoalId_40;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__ContainingGoal_41;
#line 554 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__LastStep_43;
#line 555 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_25_25;
#line 555 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_26_26;
#line 580 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_44_44;
#line 581 "ordering_mode_constraints.m"
        MR_Box check_hlds__ordering_mode_constraints__conv0_ContainingGoal_41;
#line 582 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_42_42;
#line 560 "ordering_mode_constraints.m"
        MR_Box check_hlds__ordering_mode_constraints__conv3_STATE_VARIABLE_OCInfo_19;

#line 554 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 554 "ordering_mode_constraints.m"
          {
#line 555 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__ContainingGoalMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18, (MR_Integer) 0)));
#line 555 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18, (MR_Integer) 1)));
#line 555 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18, (MR_Integer) 2)));
#line 580 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__RepVar_14, (MR_Integer) 0)));
#line 580 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__GoalId_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__RepVar_14, (MR_Integer) 1)));
#line 2739 "check_hlds.ordering_mode_constraints.c"
            check_hlds__ordering_mode_constraints__TypeCtorInfo_13_45 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 2741 "check_hlds.ordering_mode_constraints.c"
            check_hlds__ordering_mode_constraints__TypeCtorInfo_14_46 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0;
#line 581 "ordering_mode_constraints.m"
            {
#line 581 "ordering_mode_constraints.m"
              mercury__map__lookup_3_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_13_45, check_hlds__ordering_mode_constraints__TypeCtorInfo_14_46, check_hlds__ordering_mode_constraints__ContainingGoalMap_15, ((MR_Box) (check_hlds__ordering_mode_constraints__GoalId_40)), &check_hlds__ordering_mode_constraints__conv0_ContainingGoal_41);
            }
#line 581 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__ContainingGoal_41 = ((MR_Word) check_hlds__ordering_mode_constraints__conv0_ContainingGoal_41);
#line 582 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__ContainingGoal_41)) == (MR_mktag((MR_Integer) 1)));
#line 582 "ordering_mode_constraints.m"
            if (check_hlds__ordering_mode_constraints__succeeded)
#line 582 "ordering_mode_constraints.m"
              {
#line 582 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ContainingGoal_41, (MR_Integer) 0)));
#line 582 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__LastStep_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ContainingGoal_41, (MR_Integer) 1)));
#line 583 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__LastStep_43)) == (MR_mktag((MR_Integer) 1)));
#line 583 "ordering_mode_constraints.m"
                if (check_hlds__ordering_mode_constraints__succeeded)
#line 583 "ordering_mode_constraints.m"
                  {
#line 583 "ordering_mode_constraints.m"
                    check_hlds__ordering_mode_constraints__First_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__LastStep_43, (MR_Integer) 0)));
#line 2768 "check_hlds.ordering_mode_constraints.c"
                    check_hlds__ordering_mode_constraints__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 557 "ordering_mode_constraints.m"
                    {
#line 557 "ordering_mode_constraints.m"
                      check_hlds__ordering_mode_constraints__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 557 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_22_22, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[3]));
#line 557 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_22_22, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_2));
#line 557 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 557 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_22_22, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__ContainingGoalMap_15));
#line 557 "ordering_mode_constraints.m"
                    }
#line 557 "ordering_mode_constraints.m"
                    {
#line 557 "ordering_mode_constraints.m"
                      check_hlds__ordering_mode_constraints__succeeded = mercury__list__map_3_p_2(check_hlds__ordering_mode_constraints__TypeCtorInfo_28_28, check_hlds__ordering_mode_constraints__TypeCtorInfo_31_31, check_hlds__ordering_mode_constraints__V_22_22, check_hlds__ordering_mode_constraints__ProgVarAtConsumers_13, &check_hlds__ordering_mode_constraints__Laters_17);
                    }
#line 554 "ordering_mode_constraints.m"
                    if (check_hlds__ordering_mode_constraints__succeeded)
#line 554 "ordering_mode_constraints.m"
                      {
#line 2793 "check_hlds.ordering_mode_constraints.c"
                        check_hlds__ordering_mode_constraints__TypeCtorInfo_35_35 = (MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0;
#line 560 "ordering_mode_constraints.m"
                        {
#line 560 "ordering_mode_constraints.m"
                          check_hlds__ordering_mode_constraints__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 560 "ordering_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_23_23, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[4]));
#line 560 "ordering_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_23_23, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0_3));
#line 560 "ordering_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 560 "ordering_mode_constraints.m"
                          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_23_23, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__First_16));
#line 560 "ordering_mode_constraints.m"
                        }
#line 560 "ordering_mode_constraints.m"
                        {
#line 560 "ordering_mode_constraints.m"
                          check_hlds__ordering_mode_constraints__succeeded = mercury__list__foldl_4_p_3(check_hlds__ordering_mode_constraints__TypeCtorInfo_31_31, check_hlds__ordering_mode_constraints__TypeCtorInfo_35_35, check_hlds__ordering_mode_constraints__V_23_23, check_hlds__ordering_mode_constraints__Laters_17, ((MR_Box) (check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18)), &check_hlds__ordering_mode_constraints__conv3_STATE_VARIABLE_OCInfo_19);
                        }
#line 560 "ordering_mode_constraints.m"
                        if (check_hlds__ordering_mode_constraints__succeeded)
#line 560 "ordering_mode_constraints.m"
                          {
#line 560 "ordering_mode_constraints.m"
                            *check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_19 = ((MR_Word) check_hlds__ordering_mode_constraints__conv3_STATE_VARIABLE_OCInfo_19);
#line 560 "ordering_mode_constraints.m"
                            check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 560 "ordering_mode_constraints.m"
                          }
#line 554 "ordering_mode_constraints.m"
                      }
#line 583 "ordering_mode_constraints.m"
                  }
#line 582 "ordering_mode_constraints.m"
              }
#line 554 "ordering_mode_constraints.m"
          }
#line 554 "ordering_mode_constraints.m"
      }
#line 547 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 547 "ordering_mode_constraints.m"
  }
#line 543 "ordering_mode_constraints.m"
}

#line 674 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__674__1_2_p_0(
#line 674 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__First_11,
#line 674 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_22)
#line 674 "ordering_mode_constraints.m"
{
#line 674 "ordering_mode_constraints.m"
  {
#line 674 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 674 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__From_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_22, (MR_Integer) 0)));
#line 675 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints___To_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_22, (MR_Integer) 1)));

#line 675 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__From_27 == check_hlds__ordering_mode_constraints__First_11);
#line 675 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = !(check_hlds__ordering_mode_constraints__succeeded);
#line 674 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 674 "ordering_mode_constraints.m"
  }
#line 674 "ordering_mode_constraints.m"
}

#line 668 "ordering_mode_constraints.m"
static MR_Integer MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__668__1_1_f_0(
#line 668 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_19)
#line 668 "ordering_mode_constraints.m"
{
#line 668 "ordering_mode_constraints.m"
  {
#line 668 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 668 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__HeadVar__2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_19, (MR_Integer) 1)));
#line 668 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints___From_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_19, (MR_Integer) 0)));

#line 668 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__HeadVar__2_20;
#line 668 "ordering_mode_constraints.m"
  }
#line 668 "ordering_mode_constraints.m"
}

#line 504 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__504__1_5_p_0(
#line 504 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_5,
#line 504 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__GoalId_10,
#line 504 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_18,
#line 504 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__4_19,
#line 504 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__5_20)
#line 504 "ordering_mode_constraints.m"
{
#line 504 "ordering_mode_constraints.m"
  {
#line 504 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 504 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_21_21;
#line 504 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_22_22;

#line 506 "ordering_mode_constraints.m"
    {
#line 506 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 506 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_22_22, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__HeadVar__3_18));
#line 506 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_22_22, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_5));
#line 506 "ordering_mode_constraints.m"
    }
#line 506 "ordering_mode_constraints.m"
    {
#line 506 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 506 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_22_22));
#line 506 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__GoalId_10));
#line 506 "ordering_mode_constraints.m"
    }
#line 506 "ordering_mode_constraints.m"
    {
#line 506 "ordering_mode_constraints.m"
      mercury__multi_map__set_4_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[3], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, ((MR_Box) (check_hlds__ordering_mode_constraints__HeadVar__3_18)), ((MR_Box) (check_hlds__ordering_mode_constraints__V_21_21)), check_hlds__ordering_mode_constraints__HeadVar__4_19, check_hlds__ordering_mode_constraints__HeadVar__5_20);
#line 506 "ordering_mode_constraints.m"
      return;
    }
#line 504 "ordering_mode_constraints.m"
  }
#line 504 "ordering_mode_constraints.m"
}

#line 444 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__444__1_2_f_0(
#line 444 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__To_9,
#line 444 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_20,
#line 444 "ordering_mode_constraints.m"
  MR_Integer * check_hlds__ordering_mode_constraints__HeadVar__3_21)
#line 444 "ordering_mode_constraints.m"
{
#line 444 "ordering_mode_constraints.m"
  {
#line 444 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 444 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__T_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_20, (MR_Integer) 0)));

#line 445 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__HeadVar__3_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_20, (MR_Integer) 1)));
#line 445 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__T_28 == check_hlds__ordering_mode_constraints__To_9);
#line 444 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 444 "ordering_mode_constraints.m"
  }
#line 444 "ordering_mode_constraints.m"
}

#line 442 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__442__1_2_f_0(
#line 442 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__From_8,
#line 442 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_17,
#line 442 "ordering_mode_constraints.m"
  MR_Integer * check_hlds__ordering_mode_constraints__HeadVar__3_18)
#line 442 "ordering_mode_constraints.m"
{
#line 442 "ordering_mode_constraints.m"
  {
#line 442 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 442 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__F_27;

#line 443 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__HeadVar__3_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_17, (MR_Integer) 0)));
#line 443 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__F_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_17, (MR_Integer) 1)));
#line 443 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__F_27 == check_hlds__ordering_mode_constraints__From_8);
#line 442 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 442 "ordering_mode_constraints.m"
  }
#line 442 "ordering_mode_constraints.m"
}

#line 354 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_reordering__354__1_3_p_0(
#line 354 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goals0_40,
#line 354 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__HeadVar__2_77,
#line 354 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__3_78)
#line 354 "ordering_mode_constraints.m"
{
#line 354 "ordering_mode_constraints.m"
  {
#line 354 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 354 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv0_HeadVar__3_78;

#line 354 "ordering_mode_constraints.m"
    {
#line 354 "ordering_mode_constraints.m"
      mercury__list__det_index1_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__ordering_mode_constraints__Goals0_40, check_hlds__ordering_mode_constraints__HeadVar__2_77, &check_hlds__ordering_mode_constraints__conv0_HeadVar__3_78);
    }
#line 354 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__HeadVar__3_78 = ((MR_Word) check_hlds__ordering_mode_constraints__conv0_HeadVar__3_78);
#line 354 "ordering_mode_constraints.m"
  }
#line 354 "ordering_mode_constraints.m"
}

#line 187 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__187__1_2_p_0(
#line 187 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_18,
#line 187 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_22)
#line 187 "ordering_mode_constraints.m"
{
#line 187 "ordering_mode_constraints.m"
  {
#line 187 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 187 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__PredInfo_13;

#line 189 "ordering_mode_constraints.m"
    {
#line 189 "ordering_mode_constraints.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_18, check_hlds__ordering_mode_constraints__HeadVar__2_22, &check_hlds__ordering_mode_constraints__PredInfo_13);
    }
#line 190 "ordering_mode_constraints.m"
    {
#line 190 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__ordering_mode_constraints__PredInfo_13);
    }
#line 187 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 187 "ordering_mode_constraints.m"
  }
#line 187 "ordering_mode_constraints.m"
}

#line 424 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__424__1_1_p_0(
#line 424 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_13)
#line 424 "ordering_mode_constraints.m"
{
#line 424 "ordering_mode_constraints.m"
  {
#line 424 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 424 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_13, (MR_Integer) 1)));
#line 424 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__X_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_13, (MR_Integer) 0)));

#line 424 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_14_14 == check_hlds__ordering_mode_constraints__X_18);
#line 424 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 424 "ordering_mode_constraints.m"
  }
#line 424 "ordering_mode_constraints.m"
}

#line 163 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____prog_var_at_conjuncts_map_0_0(
#line 163 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 163 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 163 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3)
#line 163 "ordering_mode_constraints.m"
{
#line 163 "ordering_mode_constraints.m"
  {
#line 163 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 163 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar1_4 = check_hlds__ordering_mode_constraints__HeadVar__2_2;
#line 163 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar2_5 = check_hlds__ordering_mode_constraints__HeadVar__3_3;

#line 163 "ordering_mode_constraints.m"
    {
#line 163 "ordering_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[1], check_hlds__ordering_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar2_5)));
#line 163 "ordering_mode_constraints.m"
      return;
    }
#line 163 "ordering_mode_constraints.m"
  }
#line 163 "ordering_mode_constraints.m"
}

#line 163 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____prog_var_at_conjuncts_map_0_0(
#line 163 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 163 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2)
#line 163 "ordering_mode_constraints.m"
{
#line 163 "ordering_mode_constraints.m"
  {
#line 163 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 163 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar1_3 = check_hlds__ordering_mode_constraints__HeadVar__1_1;
#line 163 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar2_4 = check_hlds__ordering_mode_constraints__HeadVar__2_2;

#line 163 "ordering_mode_constraints.m"
    {
#line 163 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[1], ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar2_4)));
    }
#line 163 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 163 "ordering_mode_constraints.m"
  }
#line 163 "ordering_mode_constraints.m"
}

#line 50 "ordering_mode_constraints.m"
void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____ordering_constraints_info_0_0(
#line 50 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 50 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 50 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3)
#line 50 "ordering_mode_constraints.m"
{
#line 50 "ordering_mode_constraints.m"
  {
#line 50 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 50 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastX_12 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__2_2;
#line 50 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastY_13 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__3_3;

#line 50 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__CastX_12 == check_hlds__ordering_mode_constraints__CastY_13);
#line 50 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 3183 "check_hlds.ordering_mode_constraints.c"
      *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "ordering_mode_constraints.m"
    else
#line 50 "ordering_mode_constraints.m"
      {
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 50 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__3_3, (MR_Integer) 2)));
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_10_10;

#line 50 "ordering_mode_constraints.m"
        {
#line 50 "ordering_mode_constraints.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[0], &check_hlds__ordering_mode_constraints__V_10_10, ((MR_Box) (check_hlds__ordering_mode_constraints__V_4_4)), ((MR_Box) (check_hlds__ordering_mode_constraints__V_7_7)));
        }
#line 3209 "check_hlds.ordering_mode_constraints.c"
        check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_10_10 == (MR_Integer) 0);
#line 50 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = !(check_hlds__ordering_mode_constraints__succeeded);
#line 50 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 50 "ordering_mode_constraints.m"
          *check_hlds__ordering_mode_constraints__HeadVar__1_1 = check_hlds__ordering_mode_constraints__V_10_10;
#line 50 "ordering_mode_constraints.m"
        else
#line 50 "ordering_mode_constraints.m"
          {
#line 50 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_11_11;

#line 50 "ordering_mode_constraints.m"
            {
#line 50 "ordering_mode_constraints.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__ordering_mode_constraints__V_11_11, check_hlds__ordering_mode_constraints__V_5_5, check_hlds__ordering_mode_constraints__V_8_8);
            }
#line 3229 "check_hlds.ordering_mode_constraints.c"
            check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_11_11 == (MR_Integer) 0);
#line 50 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__succeeded = !(check_hlds__ordering_mode_constraints__succeeded);
#line 50 "ordering_mode_constraints.m"
            if (check_hlds__ordering_mode_constraints__succeeded)
#line 50 "ordering_mode_constraints.m"
              *check_hlds__ordering_mode_constraints__HeadVar__1_1 = check_hlds__ordering_mode_constraints__V_11_11;
#line 50 "ordering_mode_constraints.m"
            else
#line 50 "ordering_mode_constraints.m"
              {
#line 50 "ordering_mode_constraints.m"
                {
#line 50 "ordering_mode_constraints.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[2], check_hlds__ordering_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__ordering_mode_constraints__V_6_6)), ((MR_Box) (check_hlds__ordering_mode_constraints__V_9_9)));
#line 50 "ordering_mode_constraints.m"
                  return;
                }
#line 50 "ordering_mode_constraints.m"
              }
#line 50 "ordering_mode_constraints.m"
          }
#line 50 "ordering_mode_constraints.m"
      }
#line 50 "ordering_mode_constraints.m"
  }
#line 50 "ordering_mode_constraints.m"
}

#line 50 "ordering_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____ordering_constraints_info_0_0(
#line 50 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 50 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2)
#line 50 "ordering_mode_constraints.m"
{
#line 50 "ordering_mode_constraints.m"
  {
#line 50 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 50 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastX_9 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__1_1;
#line 50 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastY_10 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__2_2;

#line 50 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__CastX_9 == check_hlds__ordering_mode_constraints__CastY_10);
#line 50 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 50 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 50 "ordering_mode_constraints.m"
    else
#line 50 "ordering_mode_constraints.m"
      {
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeInfo_12_12;
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_1, (MR_Integer) 2)));
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 2)));

#line 3302 "check_hlds.ordering_mode_constraints.c"
        {
#line 3304 "check_hlds.ordering_mode_constraints.c"
          check_hlds__ordering_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[0], ((MR_Box) (check_hlds__ordering_mode_constraints__V_3_3)), ((MR_Box) (check_hlds__ordering_mode_constraints__V_6_6)));
        }
#line 50 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 50 "ordering_mode_constraints.m"
          {
#line 3311 "check_hlds.ordering_mode_constraints.c"
            check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_4_4 == check_hlds__ordering_mode_constraints__V_7_7);
#line 50 "ordering_mode_constraints.m"
            if (check_hlds__ordering_mode_constraints__succeeded)
#line 50 "ordering_mode_constraints.m"
              {
#line 3317 "check_hlds.ordering_mode_constraints.c"
                check_hlds__ordering_mode_constraints__TypeInfo_12_12 = (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[2];
#line 3319 "check_hlds.ordering_mode_constraints.c"
                {
#line 3321 "check_hlds.ordering_mode_constraints.c"
                  return check_hlds__ordering_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__ordering_mode_constraints__TypeInfo_12_12, ((MR_Box) (check_hlds__ordering_mode_constraints__V_5_5)), ((MR_Box) (check_hlds__ordering_mode_constraints__V_8_8)));
                }
#line 50 "ordering_mode_constraints.m"
              }
#line 50 "ordering_mode_constraints.m"
          }
#line 50 "ordering_mode_constraints.m"
      }
#line 50 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 50 "ordering_mode_constraints.m"
  }
#line 50 "ordering_mode_constraints.m"
}

#line 38 "ordering_mode_constraints.m"
void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraints_0_0(
#line 38 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 38 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 38 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3)
#line 38 "ordering_mode_constraints.m"
{
#line 38 "ordering_mode_constraints.m"
  {
#line 38 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 38 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar1_4 = check_hlds__ordering_mode_constraints__HeadVar__2_2;
#line 38 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar2_5 = check_hlds__ordering_mode_constraints__HeadVar__3_3;

#line 38 "ordering_mode_constraints.m"
    {
#line 38 "ordering_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[6], check_hlds__ordering_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar2_5)));
#line 38 "ordering_mode_constraints.m"
      return;
    }
#line 38 "ordering_mode_constraints.m"
  }
#line 38 "ordering_mode_constraints.m"
}

#line 38 "ordering_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraints_0_0(
#line 38 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 38 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2)
#line 38 "ordering_mode_constraints.m"
{
#line 38 "ordering_mode_constraints.m"
  {
#line 38 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 38 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar1_3 = check_hlds__ordering_mode_constraints__HeadVar__1_1;
#line 38 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar2_4 = check_hlds__ordering_mode_constraints__HeadVar__2_2;

#line 38 "ordering_mode_constraints.m"
    {
#line 38 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[6], ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar2_4)));
    }
#line 38 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 38 "ordering_mode_constraints.m"
  }
#line 38 "ordering_mode_constraints.m"
}

#line 42 "ordering_mode_constraints.m"
void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_ordering_constraint_0_0(
#line 42 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 42 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 42 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3)
#line 42 "ordering_mode_constraints.m"
{
#line 42 "ordering_mode_constraints.m"
  {
#line 42 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 42 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastX_9 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__2_2;
#line 42 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastY_10 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__3_3;

#line 42 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__CastX_9 == check_hlds__ordering_mode_constraints__CastY_10);
#line 42 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 3423 "check_hlds.ordering_mode_constraints.c"
      *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "ordering_mode_constraints.m"
    else
#line 42 "ordering_mode_constraints.m"
      {
#line 42 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 42 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 42 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_8_8;

#line 42 "ordering_mode_constraints.m"
        {
#line 42 "ordering_mode_constraints.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__ordering_mode_constraints__V_8_8, check_hlds__ordering_mode_constraints__V_4_4, check_hlds__ordering_mode_constraints__V_6_6);
        }
#line 3445 "check_hlds.ordering_mode_constraints.c"
        check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_8_8 == (MR_Integer) 0);
#line 42 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = !(check_hlds__ordering_mode_constraints__succeeded);
#line 42 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 42 "ordering_mode_constraints.m"
          *check_hlds__ordering_mode_constraints__HeadVar__1_1 = check_hlds__ordering_mode_constraints__V_8_8;
#line 42 "ordering_mode_constraints.m"
        else
#line 42 "ordering_mode_constraints.m"
          {
#line 42 "ordering_mode_constraints.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__ordering_mode_constraints__HeadVar__1_1, check_hlds__ordering_mode_constraints__V_5_5, check_hlds__ordering_mode_constraints__V_7_7);
#line 42 "ordering_mode_constraints.m"
            return;
          }
#line 42 "ordering_mode_constraints.m"
      }
#line 42 "ordering_mode_constraints.m"
  }
#line 42 "ordering_mode_constraints.m"
}

#line 42 "ordering_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_ordering_constraint_0_0(
#line 42 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 42 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2)
#line 42 "ordering_mode_constraints.m"
{
#line 42 "ordering_mode_constraints.m"
  {
#line 42 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 42 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastX_7 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__1_1;
#line 42 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastY_8 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__2_2;

#line 42 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__CastX_7 == check_hlds__ordering_mode_constraints__CastY_8);
#line 42 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 42 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 42 "ordering_mode_constraints.m"
    else
#line 42 "ordering_mode_constraints.m"
      {
#line 42 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 42 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 42 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));

#line 3506 "check_hlds.ordering_mode_constraints.c"
        check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_3_3 == check_hlds__ordering_mode_constraints__V_5_5);
#line 42 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 3510 "check_hlds.ordering_mode_constraints.c"
          check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_4_4 == check_hlds__ordering_mode_constraints__V_6_6);
#line 42 "ordering_mode_constraints.m"
      }
#line 42 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 42 "ordering_mode_constraints.m"
  }
#line 42 "ordering_mode_constraints.m"
}

#line 135 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failures_0_0(
#line 135 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 135 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 135 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3)
#line 135 "ordering_mode_constraints.m"
{
#line 135 "ordering_mode_constraints.m"
  {
#line 135 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 135 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar1_4 = check_hlds__ordering_mode_constraints__HeadVar__2_2;
#line 135 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar2_5 = check_hlds__ordering_mode_constraints__HeadVar__3_3;

#line 135 "ordering_mode_constraints.m"
    {
#line 135 "ordering_mode_constraints.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[1], check_hlds__ordering_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar2_5)));
#line 135 "ordering_mode_constraints.m"
      return;
    }
#line 135 "ordering_mode_constraints.m"
  }
#line 135 "ordering_mode_constraints.m"
}

#line 135 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failures_0_0(
#line 135 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 135 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2)
#line 135 "ordering_mode_constraints.m"
{
#line 135 "ordering_mode_constraints.m"
  {
#line 135 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 135 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar1_3 = check_hlds__ordering_mode_constraints__HeadVar__1_1;
#line 135 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Cast_HeadVar2_4 = check_hlds__ordering_mode_constraints__HeadVar__2_2;

#line 135 "ordering_mode_constraints.m"
    {
#line 135 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[1], ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__ordering_mode_constraints__Cast_HeadVar2_4)));
    }
#line 135 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 135 "ordering_mode_constraints.m"
  }
#line 135 "ordering_mode_constraints.m"
}

#line 140 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____mode_analysis_failure_0_0(
#line 140 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 140 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 140 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__3_3)
#line 140 "ordering_mode_constraints.m"
{
#line 140 "ordering_mode_constraints.m"
  {
#line 140 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 140 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastX_29 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__2_2;
#line 140 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastY_30 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__3_3;

#line 140 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__CastX_29 == check_hlds__ordering_mode_constraints__CastY_30);
#line 140 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 3607 "check_hlds.ordering_mode_constraints.c"
      *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 0;
#line 140 "ordering_mode_constraints.m"
    else
#line 140 "ordering_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 140 "ordering_mode_constraints.m"
        {
#line 140 "ordering_mode_constraints.m"
          MR_Word check_hlds__ordering_mode_constraints__V_35_35 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2), (MR_Integer) 1);

#line 140 "ordering_mode_constraints.m"
          if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 140 "ordering_mode_constraints.m"
            {
#line 140 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_28_28 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__3_3), (MR_Integer) 1);

#line 140 "ordering_mode_constraints.m"
              {
#line 140 "ordering_mode_constraints.m"
                hlds__hlds_pred____Compare____pred_proc_id_0_0(check_hlds__ordering_mode_constraints__HeadVar__1_1, check_hlds__ordering_mode_constraints__V_35_35, check_hlds__ordering_mode_constraints__V_28_28);
#line 140 "ordering_mode_constraints.m"
                return;
              }
#line 140 "ordering_mode_constraints.m"
            }
#line 140 "ordering_mode_constraints.m"
          else
#line 140 "ordering_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3638 "check_hlds.ordering_mode_constraints.c"
              *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 140 "ordering_mode_constraints.m"
            else
#line 3642 "check_hlds.ordering_mode_constraints.c"
              *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 140 "ordering_mode_constraints.m"
        }
#line 140 "ordering_mode_constraints.m"
      else
#line 140 "ordering_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 140 "ordering_mode_constraints.m"
          {
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));

#line 140 "ordering_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3659 "check_hlds.ordering_mode_constraints.c"
              *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 140 "ordering_mode_constraints.m"
            else
#line 140 "ordering_mode_constraints.m"
              if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 140 "ordering_mode_constraints.m"
                {
#line 140 "ordering_mode_constraints.m"
                  MR_Word check_hlds__ordering_mode_constraints__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__ordering_mode_constraints__HeadVar__3_3, (MR_Integer) 0)));
#line 140 "ordering_mode_constraints.m"
                  MR_Word check_hlds__ordering_mode_constraints__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__ordering_mode_constraints__HeadVar__3_3, (MR_Integer) 1)));
#line 140 "ordering_mode_constraints.m"
                  MR_Word check_hlds__ordering_mode_constraints__V_18_18;

#line 140 "ordering_mode_constraints.m"
                  {
#line 140 "ordering_mode_constraints.m"
                    hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__ordering_mode_constraints__V_18_18, check_hlds__ordering_mode_constraints__V_37_37, check_hlds__ordering_mode_constraints__V_16_16);
                  }
#line 3679 "check_hlds.ordering_mode_constraints.c"
                  check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_18_18 == (MR_Integer) 0);
#line 140 "ordering_mode_constraints.m"
                  check_hlds__ordering_mode_constraints__succeeded = !(check_hlds__ordering_mode_constraints__succeeded);
#line 140 "ordering_mode_constraints.m"
                  if (check_hlds__ordering_mode_constraints__succeeded)
#line 140 "ordering_mode_constraints.m"
                    *check_hlds__ordering_mode_constraints__HeadVar__1_1 = check_hlds__ordering_mode_constraints__V_18_18;
#line 140 "ordering_mode_constraints.m"
                  else
#line 140 "ordering_mode_constraints.m"
                    {
#line 140 "ordering_mode_constraints.m"
                      {
#line 140 "ordering_mode_constraints.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[0], check_hlds__ordering_mode_constraints__HeadVar__1_1, ((MR_Box) (check_hlds__ordering_mode_constraints__V_36_36)), ((MR_Box) (check_hlds__ordering_mode_constraints__V_17_17)));
#line 140 "ordering_mode_constraints.m"
                        return;
                      }
#line 140 "ordering_mode_constraints.m"
                    }
#line 140 "ordering_mode_constraints.m"
                }
#line 140 "ordering_mode_constraints.m"
              else
#line 3704 "check_hlds.ordering_mode_constraints.c"
                *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 2;
#line 140 "ordering_mode_constraints.m"
          }
#line 140 "ordering_mode_constraints.m"
        else
#line 140 "ordering_mode_constraints.m"
          {
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_38_38 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2), (MR_Integer) 0);

#line 140 "ordering_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3717 "check_hlds.ordering_mode_constraints.c"
              *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 140 "ordering_mode_constraints.m"
            else
#line 140 "ordering_mode_constraints.m"
              if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3723 "check_hlds.ordering_mode_constraints.c"
                *check_hlds__ordering_mode_constraints__HeadVar__1_1 = (MR_Integer) 1;
#line 140 "ordering_mode_constraints.m"
              else
#line 140 "ordering_mode_constraints.m"
                {
#line 140 "ordering_mode_constraints.m"
                  MR_Word check_hlds__ordering_mode_constraints__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__3_3), (MR_Integer) 0);

#line 140 "ordering_mode_constraints.m"
                  {
#line 140 "ordering_mode_constraints.m"
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(check_hlds__ordering_mode_constraints__HeadVar__1_1, check_hlds__ordering_mode_constraints__V_38_38, check_hlds__ordering_mode_constraints__V_5_5);
#line 140 "ordering_mode_constraints.m"
                    return;
                  }
#line 140 "ordering_mode_constraints.m"
                }
#line 140 "ordering_mode_constraints.m"
          }
#line 140 "ordering_mode_constraints.m"
  }
#line 140 "ordering_mode_constraints.m"
}

#line 140 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____mode_analysis_failure_0_0(
#line 140 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 140 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2)
#line 140 "ordering_mode_constraints.m"
{
#line 140 "ordering_mode_constraints.m"
  {
#line 140 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 140 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastX_11 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__1_1;
#line 140 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__CastY_12 = (MR_Integer) check_hlds__ordering_mode_constraints__HeadVar__2_2;

#line 140 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__CastX_11 == check_hlds__ordering_mode_constraints__CastY_12);
#line 140 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 140 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 140 "ordering_mode_constraints.m"
    else
#line 140 "ordering_mode_constraints.m"
      if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 140 "ordering_mode_constraints.m"
        {
#line 140 "ordering_mode_constraints.m"
          MR_Word check_hlds__ordering_mode_constraints__V_9_9 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__1_1), (MR_Integer) 1);
#line 140 "ordering_mode_constraints.m"
          MR_Word check_hlds__ordering_mode_constraints__V_10_10;

#line 140 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 140 "ordering_mode_constraints.m"
          if (check_hlds__ordering_mode_constraints__succeeded)
#line 140 "ordering_mode_constraints.m"
            {
#line 140 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__V_10_10 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2), (MR_Integer) 1);
#line 3791 "check_hlds.ordering_mode_constraints.c"
              {
#line 3793 "check_hlds.ordering_mode_constraints.c"
                return check_hlds__ordering_mode_constraints__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(check_hlds__ordering_mode_constraints__V_9_9, check_hlds__ordering_mode_constraints__V_10_10);
              }
#line 140 "ordering_mode_constraints.m"
            }
#line 140 "ordering_mode_constraints.m"
        }
#line 140 "ordering_mode_constraints.m"
      else
#line 140 "ordering_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 140 "ordering_mode_constraints.m"
          {
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__TypeInfo_15_15;
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__ordering_mode_constraints__HeadVar__1_1, (MR_Integer) 0)));
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__ordering_mode_constraints__HeadVar__1_1, (MR_Integer) 1)));
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_7_7;
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_8_8;

#line 140 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 140 "ordering_mode_constraints.m"
            if (check_hlds__ordering_mode_constraints__succeeded)
#line 140 "ordering_mode_constraints.m"
              {
#line 140 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 140 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 3827 "check_hlds.ordering_mode_constraints.c"
                {
#line 3829 "check_hlds.ordering_mode_constraints.c"
                  check_hlds__ordering_mode_constraints__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__ordering_mode_constraints__V_5_5, check_hlds__ordering_mode_constraints__V_7_7);
                }
#line 140 "ordering_mode_constraints.m"
                if (check_hlds__ordering_mode_constraints__succeeded)
#line 140 "ordering_mode_constraints.m"
                  {
#line 3836 "check_hlds.ordering_mode_constraints.c"
                    check_hlds__ordering_mode_constraints__TypeInfo_15_15 = (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[0];
#line 3838 "check_hlds.ordering_mode_constraints.c"
                    {
#line 3840 "check_hlds.ordering_mode_constraints.c"
                      return check_hlds__ordering_mode_constraints__succeeded = mercury__builtin__unify_2_p_0(check_hlds__ordering_mode_constraints__TypeInfo_15_15, ((MR_Box) (check_hlds__ordering_mode_constraints__V_6_6)), ((MR_Box) (check_hlds__ordering_mode_constraints__V_8_8)));
                    }
#line 140 "ordering_mode_constraints.m"
                  }
#line 140 "ordering_mode_constraints.m"
              }
#line 140 "ordering_mode_constraints.m"
          }
#line 140 "ordering_mode_constraints.m"
        else
#line 140 "ordering_mode_constraints.m"
          {
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__1_1), (MR_Integer) 0);
#line 140 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_4_4;

#line 140 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 140 "ordering_mode_constraints.m"
            if (check_hlds__ordering_mode_constraints__succeeded)
#line 140 "ordering_mode_constraints.m"
              {
#line 140 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__HeadVar__2_2), (MR_Integer) 0);
#line 3866 "check_hlds.ordering_mode_constraints.c"
                {
#line 3868 "check_hlds.ordering_mode_constraints.c"
                  return check_hlds__ordering_mode_constraints__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(check_hlds__ordering_mode_constraints__V_3_3, check_hlds__ordering_mode_constraints__V_4_4);
                }
#line 140 "ordering_mode_constraints.m"
              }
#line 140 "ordering_mode_constraints.m"
          }
#line 140 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 140 "ordering_mode_constraints.m"
  }
#line 140 "ordering_mode_constraints.m"
}

#line 36 "ordering_mode_constraints.m"
void MR_CALL 
check_hlds__ordering_mode_constraints____Compare____conjunct_id_0_0(
#line 36 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 36 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 36 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__HeadVar__3_3)
#line 36 "ordering_mode_constraints.m"
{
#line 36 "ordering_mode_constraints.m"
  {
#line 36 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 36 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__Cast_HeadVar1_4 = check_hlds__ordering_mode_constraints__HeadVar__2_2;
#line 36 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__Cast_HeadVar2_5 = check_hlds__ordering_mode_constraints__HeadVar__3_3;

#line 36 "ordering_mode_constraints.m"
    {
#line 36 "ordering_mode_constraints.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__ordering_mode_constraints__HeadVar__1_1, check_hlds__ordering_mode_constraints__Cast_HeadVar1_4, check_hlds__ordering_mode_constraints__Cast_HeadVar2_5);
#line 36 "ordering_mode_constraints.m"
      return;
    }
#line 36 "ordering_mode_constraints.m"
  }
#line 36 "ordering_mode_constraints.m"
}

#line 36 "ordering_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__ordering_mode_constraints____Unify____conjunct_id_0_0(
#line 36 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__HeadVar__1_1,
#line 36 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__HeadVar__2_2)
#line 36 "ordering_mode_constraints.m"
{
#line 36 "ordering_mode_constraints.m"
  {
#line 36 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 36 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__Cast_HeadVar1_3 = check_hlds__ordering_mode_constraints__HeadVar__1_1;
#line 36 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__Cast_HeadVar2_4 = check_hlds__ordering_mode_constraints__HeadVar__2_2;

#line 36 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__Cast_HeadVar1_3 == check_hlds__ordering_mode_constraints__Cast_HeadVar2_4);
#line 36 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 36 "ordering_mode_constraints.m"
  }
#line 36 "ordering_mode_constraints.m"
}

#line 802 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_4(
#line 802 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 802 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 802 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 802 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 802 "ordering_mode_constraints.m"
{
#line 802 "ordering_mode_constraints.m"
  {
#line 802 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 802 "ordering_mode_constraints.m"
    {
#line 802 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
#line 802 "ordering_mode_constraints.m"
      return;
    }
#line 802 "ordering_mode_constraints.m"
  }
#line 802 "ordering_mode_constraints.m"
}

#line 790 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_3(
#line 790 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 790 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 790 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 790 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 790 "ordering_mode_constraints.m"
{
#line 790 "ordering_mode_constraints.m"
  {
#line 790 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 790 "ordering_mode_constraints.m"
    {
#line 790 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
#line 790 "ordering_mode_constraints.m"
      return;
    }
#line 790 "ordering_mode_constraints.m"
  }
#line 790 "ordering_mode_constraints.m"
}

#line 783 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_2(
#line 783 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 783 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 783 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 783 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 783 "ordering_mode_constraints.m"
{
#line 783 "ordering_mode_constraints.m"
  {
#line 783 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 783 "ordering_mode_constraints.m"
    {
#line 783 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
#line 783 "ordering_mode_constraints.m"
      return;
    }
#line 783 "ordering_mode_constraints.m"
  }
#line 783 "ordering_mode_constraints.m"
}

#line 780 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_1(
#line 780 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 780 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 780 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 780 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 780 "ordering_mode_constraints.m"
{
#line 780 "ordering_mode_constraints.m"
  {
#line 780 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 780 "ordering_mode_constraints.m"
    {
#line 780 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
#line 780 "ordering_mode_constraints.m"
      return;
    }
#line 780 "ordering_mode_constraints.m"
  }
#line 780 "ordering_mode_constraints.m"
}

#line 756 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(
#line 756 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Globals_6,
#line 756 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__Indent_7,
#line 756 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goal_8)
#line 756 "ordering_mode_constraints.m"
{
#line 759 "ordering_mode_constraints.m"
  while (MR_TRUE)
#line 759 "ordering_mode_constraints.m"
    {
#line 759 "ordering_mode_constraints.m"
      /* tailcall optimized into a loop */
#line 759 "ordering_mode_constraints.m"
      {
#line 759 "ordering_mode_constraints.m"
        MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 759 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__Goal_8, (MR_Integer) 0)));
#line 759 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__Goal_8, (MR_Integer) 1)));
#line 759 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__GoalId_12;
#line 759 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__GoalIdNum_13;
#line 759 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__GoalIdPieces_14;
#line 759 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__SubGoalIndent_15;
#line 759 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_65_65;
#line 759 "ordering_mode_constraints.m"
        MR_String check_hlds__ordering_mode_constraints__V_66_66;

#line 761 "ordering_mode_constraints.m"
        {
#line 761 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__GoalId_12 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__ordering_mode_constraints__GoalInfo_11);
        }
#line 762 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__GoalIdNum_13 = (MR_Integer) check_hlds__ordering_mode_constraints__GoalId_12;
#line 763 "ordering_mode_constraints.m"
        {
#line 763 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_66_66 = mercury__string__int_to_string_1_f_0(check_hlds__ordering_mode_constraints__GoalIdNum_13);
        }
#line 763 "ordering_mode_constraints.m"
        {
#line 763 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 763 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__V_65_65, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_66_66));
#line 763 "ordering_mode_constraints.m"
        }
#line 763 "ordering_mode_constraints.m"
        {
#line 763 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__GoalIdPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__GoalIdPieces_14, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_65_65));
#line 763 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__GoalIdPieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[7])));
#line 763 "ordering_mode_constraints.m"
        }
#line 764 "ordering_mode_constraints.m"
        {
#line 764 "ordering_mode_constraints.m"
          parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(check_hlds__ordering_mode_constraints__Globals_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__ordering_mode_constraints__Indent_7, check_hlds__ordering_mode_constraints__GoalIdPieces_14);
        }
#line 770 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__SubGoalIndent_15 = (check_hlds__ordering_mode_constraints__Indent_7 + (MR_Integer) 1);
#line 778 "ordering_mode_constraints.m"
        if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 0))))
#line 792 "ordering_mode_constraints.m"
          {
#line 792 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__SubGoal_48 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10), (MR_Integer) 0);

#line 793 "ordering_mode_constraints.m"
            /* direct tailcall eliminated */
#line 793 "ordering_mode_constraints.m"
            {
#line 793 "ordering_mode_constraints.m"
              MR_Integer check_hlds__ordering_mode_constraints__Indent__tmp_copy_7 = check_hlds__ordering_mode_constraints__SubGoalIndent_15;
#line 793 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Goal__tmp_copy_8 = check_hlds__ordering_mode_constraints__SubGoal_48;

#line 793 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__Goal_8 = check_hlds__ordering_mode_constraints__Goal__tmp_copy_8;
#line 793 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__Indent_7 = check_hlds__ordering_mode_constraints__Indent__tmp_copy_7;
#line 793 "ordering_mode_constraints.m"
            }
#line 793 "ordering_mode_constraints.m"
            continue;
#line 792 "ordering_mode_constraints.m"
          }
#line 778 "ordering_mode_constraints.m"
        else
#line 778 "ordering_mode_constraints.m"
          if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 2))))
#line 772 "ordering_mode_constraints.m"
            {
#line 772 "ordering_mode_constraints.m"
            }
#line 778 "ordering_mode_constraints.m"
          else
#line 778 "ordering_mode_constraints.m"
            if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 1))))
#line 774 "ordering_mode_constraints.m"
              {
#line 774 "ordering_mode_constraints.m"
              }
#line 778 "ordering_mode_constraints.m"
            else
#line 778 "ordering_mode_constraints.m"
              if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 775 "ordering_mode_constraints.m"
                {
#line 775 "ordering_mode_constraints.m"
                }
#line 778 "ordering_mode_constraints.m"
              else
#line 778 "ordering_mode_constraints.m"
                if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 779 "ordering_mode_constraints.m"
                  {
#line 779 "ordering_mode_constraints.m"
                    MR_Word check_hlds__ordering_mode_constraints__Goals_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 2)));
#line 779 "ordering_mode_constraints.m"
                    MR_Word check_hlds__ordering_mode_constraints__V_93_93;
#line 779 "ordering_mode_constraints.m"
                    MR_Word check_hlds__ordering_mode_constraints__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 1)));
#line 780 "ordering_mode_constraints.m"
                    MR_Box check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_IO_64;

#line 780 "ordering_mode_constraints.m"
                    {
#line 780 "ordering_mode_constraints.m"
                      check_hlds__ordering_mode_constraints__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 780 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_93_93, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
#line 780 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_93_93, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_1));
#line 780 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 780 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_93_93, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__Globals_6));
#line 780 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_93_93, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__SubGoalIndent_15));
#line 780 "ordering_mode_constraints.m"
                    }
#line 780 "ordering_mode_constraints.m"
                    {
#line 780 "ordering_mode_constraints.m"
                      mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__ordering_mode_constraints__V_93_93, check_hlds__ordering_mode_constraints__Goals_40, ((MR_Box) ((MR_Integer) 0)), &check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_IO_64);
                    }
#line 779 "ordering_mode_constraints.m"
                  }
#line 778 "ordering_mode_constraints.m"
                else
#line 778 "ordering_mode_constraints.m"
                  if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 782 "ordering_mode_constraints.m"
                    {
#line 782 "ordering_mode_constraints.m"
                      MR_Word check_hlds__ordering_mode_constraints__V_91_91;
#line 782 "ordering_mode_constraints.m"
                      MR_Word check_hlds__ordering_mode_constraints__Goals_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 1)));
#line 783 "ordering_mode_constraints.m"
                      MR_Box check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_IO_64;

#line 783 "ordering_mode_constraints.m"
                      {
#line 783 "ordering_mode_constraints.m"
                        check_hlds__ordering_mode_constraints__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 783 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_91_91, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
#line 783 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_91_91, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_2));
#line 783 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 783 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_91_91, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__Globals_6));
#line 783 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_91_91, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__SubGoalIndent_15));
#line 783 "ordering_mode_constraints.m"
                      }
#line 783 "ordering_mode_constraints.m"
                      {
#line 783 "ordering_mode_constraints.m"
                        mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__ordering_mode_constraints__V_91_91, check_hlds__ordering_mode_constraints__Goals_95, ((MR_Box) ((MR_Integer) 0)), &check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_IO_64);
                      }
#line 782 "ordering_mode_constraints.m"
                    }
#line 778 "ordering_mode_constraints.m"
                  else
#line 778 "ordering_mode_constraints.m"
                    if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 773 "ordering_mode_constraints.m"
                      {
#line 773 "ordering_mode_constraints.m"
                      }
#line 778 "ordering_mode_constraints.m"
                    else
#line 778 "ordering_mode_constraints.m"
                      if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 788 "ordering_mode_constraints.m"
                        {
#line 788 "ordering_mode_constraints.m"
                          MR_Word check_hlds__ordering_mode_constraints__CondGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 2)));
#line 788 "ordering_mode_constraints.m"
                          MR_Word check_hlds__ordering_mode_constraints__ThenGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 3)));
#line 788 "ordering_mode_constraints.m"
                          MR_Word check_hlds__ordering_mode_constraints__ElseGoal_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 4)));
#line 788 "ordering_mode_constraints.m"
                          MR_Word check_hlds__ordering_mode_constraints__V_83_83;
#line 788 "ordering_mode_constraints.m"
                          MR_Word check_hlds__ordering_mode_constraints__V_84_84;
#line 788 "ordering_mode_constraints.m"
                          MR_Word check_hlds__ordering_mode_constraints__V_86_86;
#line 788 "ordering_mode_constraints.m"
                          MR_Word check_hlds__ordering_mode_constraints__Goals_96;
#line 788 "ordering_mode_constraints.m"
                          MR_Word check_hlds__ordering_mode_constraints__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 1)));
#line 790 "ordering_mode_constraints.m"
                          MR_Box check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_IO_64;

#line 789 "ordering_mode_constraints.m"
                          {
#line 789 "ordering_mode_constraints.m"
                            check_hlds__ordering_mode_constraints__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__V_84_84, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__ElseGoal_47));
#line 789 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "ordering_mode_constraints.m"
                          }
#line 789 "ordering_mode_constraints.m"
                          {
#line 789 "ordering_mode_constraints.m"
                            check_hlds__ordering_mode_constraints__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__V_83_83, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__ThenGoal_46));
#line 789 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__V_83_83, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_84_84));
#line 789 "ordering_mode_constraints.m"
                          }
#line 789 "ordering_mode_constraints.m"
                          {
#line 789 "ordering_mode_constraints.m"
                            check_hlds__ordering_mode_constraints__Goals_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__Goals_96, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__CondGoal_45));
#line 789 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__Goals_96, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_83_83));
#line 789 "ordering_mode_constraints.m"
                          }
#line 790 "ordering_mode_constraints.m"
                          {
#line 790 "ordering_mode_constraints.m"
                            check_hlds__ordering_mode_constraints__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 790 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_86_86, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
#line 790 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_86_86, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_3));
#line 790 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 790 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_86_86, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__Globals_6));
#line 790 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_86_86, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__SubGoalIndent_15));
#line 790 "ordering_mode_constraints.m"
                          }
#line 790 "ordering_mode_constraints.m"
                          {
#line 790 "ordering_mode_constraints.m"
                            mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__ordering_mode_constraints__V_86_86, check_hlds__ordering_mode_constraints__Goals_96, ((MR_Box) ((MR_Integer) 0)), &check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_IO_64);
                          }
#line 788 "ordering_mode_constraints.m"
                        }
#line 778 "ordering_mode_constraints.m"
                      else
#line 778 "ordering_mode_constraints.m"
                        if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 795 "ordering_mode_constraints.m"
                          {
#line 795 "ordering_mode_constraints.m"
                            MR_Word check_hlds__ordering_mode_constraints__SubGoal_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 2)));
#line 795 "ordering_mode_constraints.m"
                            MR_Word check_hlds__ordering_mode_constraints__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 1)));

#line 796 "ordering_mode_constraints.m"
                            /* direct tailcall eliminated */
#line 796 "ordering_mode_constraints.m"
                            {
#line 796 "ordering_mode_constraints.m"
                              MR_Integer check_hlds__ordering_mode_constraints__Indent__tmp_copy_7 = check_hlds__ordering_mode_constraints__SubGoalIndent_15;
#line 796 "ordering_mode_constraints.m"
                              MR_Word check_hlds__ordering_mode_constraints__Goal__tmp_copy_8 = check_hlds__ordering_mode_constraints__SubGoal_97;

#line 796 "ordering_mode_constraints.m"
                              check_hlds__ordering_mode_constraints__Goal_8 = check_hlds__ordering_mode_constraints__Goal__tmp_copy_8;
#line 796 "ordering_mode_constraints.m"
                              check_hlds__ordering_mode_constraints__Indent_7 = check_hlds__ordering_mode_constraints__Indent__tmp_copy_7;
#line 796 "ordering_mode_constraints.m"
                            }
#line 796 "ordering_mode_constraints.m"
                            continue;
#line 795 "ordering_mode_constraints.m"
                          }
#line 778 "ordering_mode_constraints.m"
                        else
#line 778 "ordering_mode_constraints.m"
                          if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 798 "ordering_mode_constraints.m"
                            {
#line 798 "ordering_mode_constraints.m"
                              MR_Word check_hlds__ordering_mode_constraints__ShortHand_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_10, (MR_Integer) 1)));

#line 804 "ordering_mode_constraints.m"
                              if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__ShortHand_50)) == (MR_mktag((MR_Integer) 1))))
#line 800 "ordering_mode_constraints.m"
                                {
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__MainGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ShortHand_50, (MR_Integer) 4)));
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__OrElseGoals_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ShortHand_50, (MR_Integer) 5)));
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__V_79_79;
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__Goals_98;
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ShortHand_50, (MR_Integer) 0)));
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ShortHand_50, (MR_Integer) 1)));
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ShortHand_50, (MR_Integer) 2)));
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ShortHand_50, (MR_Integer) 3)));
#line 800 "ordering_mode_constraints.m"
                                  MR_Word check_hlds__ordering_mode_constraints__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ShortHand_50, (MR_Integer) 6)));
#line 802 "ordering_mode_constraints.m"
                                  MR_Box check_hlds__ordering_mode_constraints__conv3_STATE_VARIABLE_IO_64;

#line 801 "ordering_mode_constraints.m"
                                  {
#line 801 "ordering_mode_constraints.m"
                                    check_hlds__ordering_mode_constraints__Goals_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "ordering_mode_constraints.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__Goals_98, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__MainGoal_55));
#line 801 "ordering_mode_constraints.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__Goals_98, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__OrElseGoals_56));
#line 801 "ordering_mode_constraints.m"
                                  }
#line 802 "ordering_mode_constraints.m"
                                  {
#line 802 "ordering_mode_constraints.m"
                                    check_hlds__ordering_mode_constraints__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 802 "ordering_mode_constraints.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_79_79, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
#line 802 "ordering_mode_constraints.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_79_79, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0_4));
#line 802 "ordering_mode_constraints.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 802 "ordering_mode_constraints.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_79_79, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__Globals_6));
#line 802 "ordering_mode_constraints.m"
                                    MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_79_79, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__SubGoalIndent_15));
#line 802 "ordering_mode_constraints.m"
                                  }
#line 802 "ordering_mode_constraints.m"
                                  {
#line 802 "ordering_mode_constraints.m"
                                    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__ordering_mode_constraints__V_79_79, check_hlds__ordering_mode_constraints__Goals_98, ((MR_Box) ((MR_Integer) 0)), &check_hlds__ordering_mode_constraints__conv3_STATE_VARIABLE_IO_64);
                                  }
#line 800 "ordering_mode_constraints.m"
                                }
#line 804 "ordering_mode_constraints.m"
                              else
#line 804 "ordering_mode_constraints.m"
                                if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__ShortHand_50)) == (MR_mktag((MR_Integer) 0))))
#line 808 "ordering_mode_constraints.m"
                                  {
#line 809 "ordering_mode_constraints.m"
                                    {
#line 809 "ordering_mode_constraints.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.ordering_mode_constraints", (MR_String) "predicate \140check_hlds.ordering_mode_constraints.dump_goal_goal_paths\'/5", (MR_String) "bi_implication");
#line 809 "ordering_mode_constraints.m"
                                      return;
                                    }
#line 808 "ordering_mode_constraints.m"
                                  }
#line 804 "ordering_mode_constraints.m"
                                else
#line 805 "ordering_mode_constraints.m"
                                  {
#line 806 "ordering_mode_constraints.m"
                                    {
#line 806 "ordering_mode_constraints.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.ordering_mode_constraints", (MR_String) "predicate \140check_hlds.ordering_mode_constraints.dump_goal_goal_paths\'/5", (MR_String) "try_goal");
#line 806 "ordering_mode_constraints.m"
                                      return;
                                    }
#line 805 "ordering_mode_constraints.m"
                                  }
#line 798 "ordering_mode_constraints.m"
                            }
#line 778 "ordering_mode_constraints.m"
                          else
#line 785 "ordering_mode_constraints.m"
                            {
#line 786 "ordering_mode_constraints.m"
                              {
#line 786 "ordering_mode_constraints.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.ordering_mode_constraints", (MR_String) "predicate \140check_hlds.ordering_mode_constraints.dump_goal_goal_paths\'/5", (MR_String) "switch");
#line 786 "ordering_mode_constraints.m"
                                return;
                              }
#line 785 "ordering_mode_constraints.m"
                            }
#line 759 "ordering_mode_constraints.m"
      }
#line 759 "ordering_mode_constraints.m"
      break;
#line 759 "ordering_mode_constraints.m"
    }
#line 756 "ordering_mode_constraints.m"
}

#line 737 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_p_0(
#line 737 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Globals_6,
#line 737 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ProcTable_7,
#line 737 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__ProcId_8)
#line 737 "ordering_mode_constraints.m"
{
#line 740 "ordering_mode_constraints.m"
  {
#line 740 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 740 "ordering_mode_constraints.m"
    MR_String check_hlds__ordering_mode_constraints__ProcIdString_10;
#line 740 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__ProcHeaderFormat_11;
#line 740 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__ProcInfo_12;
#line 740 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Goal_13;
#line 740 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__V_17_17;
#line 740 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_20_20;
#line 740 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_21_21;
#line 744 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv0_ProcInfo_12;

#line 741 "ordering_mode_constraints.m"
    {
#line 741 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_17_17 = hlds__hlds_pred__proc_id_to_int_1_f_0(check_hlds__ordering_mode_constraints__ProcId_8);
    }
#line 741 "ordering_mode_constraints.m"
    {
#line 741 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__ProcIdString_10 = mercury__string__from_int_1_f_0(check_hlds__ordering_mode_constraints__V_17_17);
    }
#line 742 "ordering_mode_constraints.m"
    {
#line 742 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 742 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__V_21_21, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__ProcIdString_10));
#line 742 "ordering_mode_constraints.m"
    }
#line 742 "ordering_mode_constraints.m"
    {
#line 742 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__V_20_20, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_21_21));
#line 742 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[15])));
#line 742 "ordering_mode_constraints.m"
    }
#line 742 "ordering_mode_constraints.m"
    {
#line 742 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__ProcHeaderFormat_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ProcHeaderFormat_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__ordering_mode_constraints_scalar_common_1[13])));
#line 742 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ProcHeaderFormat_11, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_20_20));
#line 742 "ordering_mode_constraints.m"
    }
#line 743 "ordering_mode_constraints.m"
    {
#line 743 "ordering_mode_constraints.m"
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__ordering_mode_constraints__Globals_6, check_hlds__ordering_mode_constraints__ProcHeaderFormat_11);
    }
#line 744 "ordering_mode_constraints.m"
    {
#line 744 "ordering_mode_constraints.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__ordering_mode_constraints__ProcTable_7, ((MR_Box) (check_hlds__ordering_mode_constraints__ProcId_8)), &check_hlds__ordering_mode_constraints__conv0_ProcInfo_12);
    }
#line 744 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__ProcInfo_12 = ((MR_Word) check_hlds__ordering_mode_constraints__conv0_ProcInfo_12);
#line 745 "ordering_mode_constraints.m"
    {
#line 745 "ordering_mode_constraints.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__ordering_mode_constraints__ProcInfo_12, &check_hlds__ordering_mode_constraints__Goal_13);
    }
#line 747 "ordering_mode_constraints.m"
    {
#line 747 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(check_hlds__ordering_mode_constraints__Globals_6, (MR_Integer) 0, check_hlds__ordering_mode_constraints__Goal_13);
#line 747 "ordering_mode_constraints.m"
      return;
    }
#line 740 "ordering_mode_constraints.m"
  }
#line 737 "ordering_mode_constraints.m"
}

#line 729 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_3(
#line 729 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 729 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 729 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 729 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 729 "ordering_mode_constraints.m"
{
#line 729 "ordering_mode_constraints.m"
  {
#line 729 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 729 "ordering_mode_constraints.m"
    {
#line 729 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__dump_proc_goal_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_1));
#line 729 "ordering_mode_constraints.m"
      return;
    }
#line 729 "ordering_mode_constraints.m"
  }
#line 729 "ordering_mode_constraints.m"
}

#line 726 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_2(
#line 726 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 726 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 726 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 726 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 726 "ordering_mode_constraints.m"
{
#line 726 "ordering_mode_constraints.m"
  {
#line 726 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 726 "ordering_mode_constraints.m"
    {
#line 726 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__dump_goal_goal_paths_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
#line 726 "ordering_mode_constraints.m"
      return;
    }
#line 726 "ordering_mode_constraints.m"
  }
#line 726 "ordering_mode_constraints.m"
}

#line 724 "ordering_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_1(
#line 724 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 724 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1)
#line 724 "ordering_mode_constraints.m"
{
#line 724 "ordering_mode_constraints.m"
  {
#line 724 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2;
#line 724 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 724 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__2_2;

#line 724 "ordering_mode_constraints.m"
    {
#line 724 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__conv0_HeadVar__2_2 = hlds__hlds_clauses__clause_body_1_f_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
    }
#line 724 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__2_2));
#line 724 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__wrapper_arg_2;
#line 724 "ordering_mode_constraints.m"
  }
#line 724 "ordering_mode_constraints.m"
}

#line 701 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0(
#line 701 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ModuleInfo_5,
#line 701 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_6)
#line 701 "ordering_mode_constraints.m"
{
#line 704 "ordering_mode_constraints.m"
  {
#line 704 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_51_51;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_53_53;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__PredInfo_8;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__ProcTable_9;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__ProcIds_10;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Globals_11;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__PredHeaderFormat_12;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_33_33;
#line 704 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_34_34;

#line 705 "ordering_mode_constraints.m"
    {
#line 705 "ordering_mode_constraints.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__ordering_mode_constraints__ModuleInfo_5, check_hlds__ordering_mode_constraints__PredId_6, &check_hlds__ordering_mode_constraints__PredInfo_8);
    }
#line 706 "ordering_mode_constraints.m"
    {
#line 706 "ordering_mode_constraints.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__ordering_mode_constraints__PredInfo_8, &check_hlds__ordering_mode_constraints__ProcTable_9);
    }
#line 4732 "check_hlds.ordering_mode_constraints.c"
    check_hlds__ordering_mode_constraints__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 707 "ordering_mode_constraints.m"
    {
#line 707 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__ProcIds_10 = mercury__map__keys_1_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_51_51, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__ordering_mode_constraints__ProcTable_9);
    }
#line 710 "ordering_mode_constraints.m"
    {
#line 710 "ordering_mode_constraints.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__ordering_mode_constraints__ModuleInfo_5, &check_hlds__ordering_mode_constraints__Globals_11);
    }
#line 711 "ordering_mode_constraints.m"
    {
#line 711 "ordering_mode_constraints.m"
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__ordering_mode_constraints__Globals_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[10]));
    }
#line 4749 "check_hlds.ordering_mode_constraints.c"
    check_hlds__ordering_mode_constraints__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 714 "ordering_mode_constraints.m"
    {
#line 714 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_34_34 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, check_hlds__ordering_mode_constraints__PredInfo_8);
    }
#line 714 "ordering_mode_constraints.m"
    {
#line 714 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_33_33 = mercury__list__f_43_43_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_53_53, check_hlds__ordering_mode_constraints__V_34_34, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[9]));
    }
#line 713 "ordering_mode_constraints.m"
    {
#line 713 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__PredHeaderFormat_12 = mercury__list__f_43_43_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_53_53, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__ordering_mode_constraints_scalar_common_1[12]), check_hlds__ordering_mode_constraints__V_33_33);
    }
#line 717 "ordering_mode_constraints.m"
    {
#line 717 "ordering_mode_constraints.m"
      parse_tree__error_util__write_error_pieces_plain_4_p_0(check_hlds__ordering_mode_constraints__Globals_11, check_hlds__ordering_mode_constraints__PredHeaderFormat_12);
    }
#line 727 "ordering_mode_constraints.m"
    if ((check_hlds__ordering_mode_constraints__ProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "ordering_mode_constraints.m"
      {
#line 720 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_55_55;
#line 720 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__ClausesInfo_13;
#line 720 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__ClausesRep_14;
#line 720 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__Clauses_16;
#line 720 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__Goals_17;
#line 720 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_48_48;
#line 722 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints___ItemNumbers_15;
#line 726 "ordering_mode_constraints.m"
        MR_Box check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_IO_23;

#line 721 "ordering_mode_constraints.m"
        {
#line 721 "ordering_mode_constraints.m"
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__ordering_mode_constraints__PredInfo_8, &check_hlds__ordering_mode_constraints__ClausesInfo_13);
        }
#line 722 "ordering_mode_constraints.m"
        {
#line 722 "ordering_mode_constraints.m"
          hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__ordering_mode_constraints__ClausesInfo_13, &check_hlds__ordering_mode_constraints__ClausesRep_14, &check_hlds__ordering_mode_constraints___ItemNumbers_15);
        }
#line 723 "ordering_mode_constraints.m"
        {
#line 723 "ordering_mode_constraints.m"
          hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__ordering_mode_constraints__ClausesRep_14, &check_hlds__ordering_mode_constraints__Clauses_16);
        }
#line 4807 "check_hlds.ordering_mode_constraints.c"
        check_hlds__ordering_mode_constraints__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 724 "ordering_mode_constraints.m"
        {
#line 724 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__Goals_17 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, check_hlds__ordering_mode_constraints__TypeCtorInfo_55_55, (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[4], check_hlds__ordering_mode_constraints__Clauses_16);
        }
#line 726 "ordering_mode_constraints.m"
        {
#line 726 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 726 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_48_48, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[3]));
#line 726 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_48_48, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_2));
#line 726 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 726 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_48_48, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__Globals_11));
#line 726 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_48_48, 4) = ((MR_Box) ((MR_Integer) 0));
#line 726 "ordering_mode_constraints.m"
        }
#line 726 "ordering_mode_constraints.m"
        {
#line 726 "ordering_mode_constraints.m"
          mercury__list__foldl_4_p_2(check_hlds__ordering_mode_constraints__TypeCtorInfo_55_55, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__ordering_mode_constraints__V_48_48, check_hlds__ordering_mode_constraints__Goals_17, ((MR_Box) ((MR_Integer) 0)), &check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_IO_23);
        }
#line 720 "ordering_mode_constraints.m"
      }
#line 727 "ordering_mode_constraints.m"
    else
#line 728 "ordering_mode_constraints.m"
      {
#line 728 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_43_43;
#line 729 "ordering_mode_constraints.m"
        MR_Box check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_IO_23;

#line 729 "ordering_mode_constraints.m"
        {
#line 729 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 729 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[4]));
#line 729 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0_3));
#line 729 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 729 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__Globals_11));
#line 729 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__ProcTable_9));
#line 729 "ordering_mode_constraints.m"
        }
#line 729 "ordering_mode_constraints.m"
        {
#line 729 "ordering_mode_constraints.m"
          mercury__list__foldl_4_p_2(check_hlds__ordering_mode_constraints__TypeCtorInfo_51_51, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__ordering_mode_constraints__V_43_43, check_hlds__ordering_mode_constraints__ProcIds_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_IO_23);
        }
#line 728 "ordering_mode_constraints.m"
      }
#line 704 "ordering_mode_constraints.m"
  }
#line 701 "ordering_mode_constraints.m"
}

#line 674 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_2(
#line 674 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 674 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1)
#line 674 "ordering_mode_constraints.m"
{
#line 674 "ordering_mode_constraints.m"
  {
#line 674 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 674 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 674 "ordering_mode_constraints.m"
    {
#line 674 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__pred__topological_sort_min_reordering__674__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
    }
#line 674 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 674 "ordering_mode_constraints.m"
  }
#line 674 "ordering_mode_constraints.m"
}

#line 668 "ordering_mode_constraints.m"
static MR_Box MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_1(
#line 668 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 668 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1)
#line 668 "ordering_mode_constraints.m"
{
#line 668 "ordering_mode_constraints.m"
  {
#line 668 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2;
#line 668 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 668 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__conv0_HeadVar__2_20;

#line 668 "ordering_mode_constraints.m"
    {
#line 668 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__conv0_HeadVar__2_20 = check_hlds__ordering_mode_constraints__IntroducedFrom__func__topological_sort_min_reordering__668__1_1_f_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
    }
#line 668 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__2_20));
#line 668 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__wrapper_arg_2;
#line 668 "ordering_mode_constraints.m"
  }
#line 668 "ordering_mode_constraints.m"
}

#line 664 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0(
#line 664 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Constraints0_4,
#line 664 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Conjuncts0_5,
#line 664 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__Ordering_6)
#line 664 "ordering_mode_constraints.m"
{
#line 667 "ordering_mode_constraints.m"
  {
#line 667 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 667 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_29_29 = (MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;
#line 667 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 667 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__NotFirst_7;
#line 667 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__CandidatesForFirst_10;
#line 681 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__First_11;
#line 671 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_12_12;
#line 671 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv1_First_11;

#line 668 "ordering_mode_constraints.m"
    {
#line 668 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__NotFirst_7 = mercury__set__map_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_29_29, check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30, (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[3], check_hlds__ordering_mode_constraints__Constraints0_4);
    }
#line 669 "ordering_mode_constraints.m"
    {
#line 669 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__CandidatesForFirst_10 = mercury__set__difference_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30, check_hlds__ordering_mode_constraints__Conjuncts0_5, check_hlds__ordering_mode_constraints__NotFirst_7);
    }
#line 671 "ordering_mode_constraints.m"
    {
#line 671 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = mercury__set__remove_least_3_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30, &check_hlds__ordering_mode_constraints__conv1_First_11, check_hlds__ordering_mode_constraints__CandidatesForFirst_10, &check_hlds__ordering_mode_constraints__V_12_12);
    }
#line 671 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 671 "ordering_mode_constraints.m"
      {
#line 671 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__First_11 = ((MR_Integer) check_hlds__ordering_mode_constraints__conv1_First_11);
#line 671 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 671 "ordering_mode_constraints.m"
      }
#line 681 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 673 "ordering_mode_constraints.m"
      {
#line 673 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__Conjuncts_13;
#line 673 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__Constraints_14;
#line 673 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__Ordering0_17;
#line 673 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_21_21;

#line 673 "ordering_mode_constraints.m"
        {
#line 673 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__succeeded = mercury__set__remove_3_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30, ((MR_Box) (check_hlds__ordering_mode_constraints__First_11)), check_hlds__ordering_mode_constraints__Conjuncts0_5, &check_hlds__ordering_mode_constraints__Conjuncts_13);
        }
#line 673 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 673 "ordering_mode_constraints.m"
          {
#line 674 "ordering_mode_constraints.m"
            {
#line 674 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 674 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[2]));
#line 674 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0_2));
#line 674 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 674 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__First_11));
#line 674 "ordering_mode_constraints.m"
            }
#line 674 "ordering_mode_constraints.m"
            {
#line 674 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__Constraints_14 = mercury__set__filter_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_29_29, check_hlds__ordering_mode_constraints__V_21_21, check_hlds__ordering_mode_constraints__Constraints0_4);
            }
#line 679 "ordering_mode_constraints.m"
            {
#line 679 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0(check_hlds__ordering_mode_constraints__Constraints_14, check_hlds__ordering_mode_constraints__Conjuncts_13, &check_hlds__ordering_mode_constraints__Ordering0_17);
            }
#line 673 "ordering_mode_constraints.m"
            if (check_hlds__ordering_mode_constraints__succeeded)
#line 673 "ordering_mode_constraints.m"
              {
#line 680 "ordering_mode_constraints.m"
                {
#line 680 "ordering_mode_constraints.m"
                  MR_Word base;
#line 680 "ordering_mode_constraints.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "ordering_mode_constraints.m"
                  *check_hlds__ordering_mode_constraints__Ordering_6 = base;
#line 680 "ordering_mode_constraints.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__First_11));
#line 680 "ordering_mode_constraints.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__Ordering0_17));
#line 680 "ordering_mode_constraints.m"
                }
#line 680 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 673 "ordering_mode_constraints.m"
              }
#line 673 "ordering_mode_constraints.m"
          }
#line 673 "ordering_mode_constraints.m"
      }
#line 681 "ordering_mode_constraints.m"
    else
#line 684 "ordering_mode_constraints.m"
      {
#line 684 "ordering_mode_constraints.m"
        {
#line 684 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__succeeded = mercury__set__empty_1_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30, check_hlds__ordering_mode_constraints__Conjuncts0_5);
        }
#line 684 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 684 "ordering_mode_constraints.m"
          {
#line 685 "ordering_mode_constraints.m"
            *check_hlds__ordering_mode_constraints__Ordering_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 684 "ordering_mode_constraints.m"
          }
#line 684 "ordering_mode_constraints.m"
      }
#line 667 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 667 "ordering_mode_constraints.m"
  }
#line 664 "ordering_mode_constraints.m"
}

#line 596 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__minimum_reordering_2_p_0(
#line 596 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__OCI_3,
#line 596 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__Order_4)
#line 596 "ordering_mode_constraints.m"
{
#line 599 "ordering_mode_constraints.m"
  {
#line 599 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 599 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Conjuncts_5;
#line 599 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_6_6;
#line 599 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCI_3, (MR_Integer) 1)));
#line 599 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_9_9;
#line 605 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCI_3, (MR_Integer) 0)));
#line 605 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCI_3, (MR_Integer) 2)));
#line 606 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_12_12;
#line 606 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__V_13_13;

#line 605 "ordering_mode_constraints.m"
    {
#line 605 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_6_6 = mercury__list__f_46_46_2_f_0((MR_Integer) 1, check_hlds__ordering_mode_constraints__V_8_8);
    }
#line 605 "ordering_mode_constraints.m"
    {
#line 605 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__Conjuncts_5 = mercury__set__from_sorted_list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__ordering_mode_constraints__V_6_6);
    }
#line 606 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCI_3, (MR_Integer) 0)));
#line 606 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCI_3, (MR_Integer) 1)));
#line 606 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCI_3, (MR_Integer) 2)));
#line 606 "ordering_mode_constraints.m"
    {
#line 606 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__topological_sort_min_reordering_3_p_0(check_hlds__ordering_mode_constraints__V_9_9, check_hlds__ordering_mode_constraints__Conjuncts_5, check_hlds__ordering_mode_constraints__Order_4);
    }
#line 599 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 599 "ordering_mode_constraints.m"
  }
#line 596 "ordering_mode_constraints.m"
}

#line 577 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__get_position_in_conj_3_p_0(
#line 577 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ContainingGoalMap_4,
#line 577 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__HeadVar__2_2,
#line 577 "ordering_mode_constraints.m"
  MR_Integer * check_hlds__ordering_mode_constraints__N_8)
#line 577 "ordering_mode_constraints.m"
{
#line 580 "ordering_mode_constraints.m"
  {
#line 580 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 580 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__GoalId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 1)));
#line 580 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__ContainingGoal_9;
#line 580 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__LastStep_11;
#line 580 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__HeadVar__2_2, (MR_Integer) 0)));
#line 581 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv0_ContainingGoal_9;
#line 582 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_10_10;

#line 581 "ordering_mode_constraints.m"
    {
#line 581 "ordering_mode_constraints.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, check_hlds__ordering_mode_constraints__ContainingGoalMap_4, ((MR_Box) (check_hlds__ordering_mode_constraints__GoalId_7)), &check_hlds__ordering_mode_constraints__conv0_ContainingGoal_9);
    }
#line 581 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__ContainingGoal_9 = ((MR_Word) check_hlds__ordering_mode_constraints__conv0_ContainingGoal_9);
#line 582 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__ContainingGoal_9)) == (MR_mktag((MR_Integer) 1)));
#line 582 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 582 "ordering_mode_constraints.m"
      {
#line 582 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ContainingGoal_9, (MR_Integer) 0)));
#line 582 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__LastStep_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__ContainingGoal_9, (MR_Integer) 1)));
#line 583 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = ((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__LastStep_11)) == (MR_mktag((MR_Integer) 1)));
#line 583 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 583 "ordering_mode_constraints.m"
          *check_hlds__ordering_mode_constraints__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__LastStep_11, (MR_Integer) 0)));
#line 582 "ordering_mode_constraints.m"
      }
#line 580 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 580 "ordering_mode_constraints.m"
  }
#line 577 "ordering_mode_constraints.m"
}

#line 567 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__produced_at_path_3_p_0(
#line 567 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_4,
#line 567 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_5,
#line 567 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__RepVar_6)
#line 567 "ordering_mode_constraints.m"
{
#line 570 "ordering_mode_constraints.m"
  {
#line 570 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 570 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__TypeInfo_9_9 = (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[5];
#line 570 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_7_7;
#line 570 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_8_8;
#line 571 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv0_V_8_8;
#line 571 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv1_V_7_7;

#line 571 "ordering_mode_constraints.m"
    {
#line 571 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__conv0_V_8_8 = mercury__bimap__lookup_2_f_0((MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0, check_hlds__ordering_mode_constraints__TypeInfo_9_9, check_hlds__ordering_mode_constraints__VarMap_4, ((MR_Box) (check_hlds__ordering_mode_constraints__RepVar_6)));
    }
#line 571 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__V_8_8 = ((MR_Word) check_hlds__ordering_mode_constraints__conv0_V_8_8);
#line 571 "ordering_mode_constraints.m"
    {
#line 571 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__conv1_V_7_7 = mercury__map__lookup_2_f_0(check_hlds__ordering_mode_constraints__TypeInfo_9_9, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, check_hlds__ordering_mode_constraints__Bindings_5, ((MR_Box) (check_hlds__ordering_mode_constraints__V_8_8)));
    }
#line 571 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__V_7_7 = ((MR_Word) check_hlds__ordering_mode_constraints__conv1_V_7_7);
#line 571 "ordering_mode_constraints.m"
    check_hlds__ordering_mode_constraints__succeeded = (check_hlds__ordering_mode_constraints__V_7_7 == (MR_Integer) 1);
#line 570 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 570 "ordering_mode_constraints.m"
  }
#line 567 "ordering_mode_constraints.m"
}

#line 543 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_p_0(
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_8,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints___ProgVar_9,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__RepVars_10,
#line 543 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18,
#line 543 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_19)
#line 543 "ordering_mode_constraints.m"
{
#line 547 "ordering_mode_constraints.m"
  {
#line 547 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;

#line 547 "ordering_mode_constraints.m"
    {
#line 547 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_103_95_118_97_114_95_111_114_100_101_114_105_110_103_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_51_93_95_48_6_p_0(check_hlds__ordering_mode_constraints__VarMap_7, check_hlds__ordering_mode_constraints__Bindings_8, check_hlds__ordering_mode_constraints__RepVars_10, check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_18, check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_19);
    }
#line 547 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 547 "ordering_mode_constraints.m"
  }
#line 543 "ordering_mode_constraints.m"
}

#line 532 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0_1(
#line 532 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 532 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 532 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 532 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_3,
#line 532 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_4)
#line 532 "ordering_mode_constraints.m"
{
#line 532 "ordering_mode_constraints.m"
  {
#line 532 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 532 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 532 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_OCInfo_19;

#line 532 "ordering_mode_constraints.m"
    {
#line 532 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__prog_var_ordering_constraints_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_3), &check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_OCInfo_19);
    }
#line 532 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 532 "ordering_mode_constraints.m"
      {
#line 532 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__wrapper_arg_4 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_OCInfo_19));
#line 532 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 532 "ordering_mode_constraints.m"
      }
#line 532 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 532 "ordering_mode_constraints.m"
  }
#line 532 "ordering_mode_constraints.m"
}

#line 527 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0(
#line 527 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_6,
#line 527 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_7,
#line 527 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__RepVarMap_8,
#line 527 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_10,
#line 527 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_11)
#line 527 "ordering_mode_constraints.m"
{
#line 531 "ordering_mode_constraints.m"
  {
#line 531 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 531 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_12_12;
#line 532 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_OCInfo_11;

#line 532 "ordering_mode_constraints.m"
    {
#line 532 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 532 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_9[1]));
#line 532 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0_1));
#line 532 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 532 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__VarMap_6));
#line 532 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__Bindings_7));
#line 532 "ordering_mode_constraints.m"
    }
#line 532 "ordering_mode_constraints.m"
    {
#line 532 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = mercury__map__foldl_4_p_3((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[3], (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[4], (MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0, check_hlds__ordering_mode_constraints__V_12_12, check_hlds__ordering_mode_constraints__RepVarMap_8, ((MR_Box) (check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_0_10)), &check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_OCInfo_11);
    }
#line 532 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 532 "ordering_mode_constraints.m"
      {
#line 532 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCInfo_11 = ((MR_Word) check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_OCInfo_11);
#line 532 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 532 "ordering_mode_constraints.m"
      }
#line 531 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 531 "ordering_mode_constraints.m"
  }
#line 527 "ordering_mode_constraints.m"
}

#line 504 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0_1(
#line 504 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 504 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 504 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 504 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 504 "ordering_mode_constraints.m"
{
#line 504 "ordering_mode_constraints.m"
  {
#line 504 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 504 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv0_HeadVar__5_20;

#line 504 "ordering_mode_constraints.m"
    {
#line 504 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__IntroducedFrom__pred__make_conjunct_nonlocal_repvars__504__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), &check_hlds__ordering_mode_constraints__conv0_HeadVar__5_20);
    }
#line 504 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__5_20));
#line 504 "ordering_mode_constraints.m"
  }
#line 504 "ordering_mode_constraints.m"
}

#line 496 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0(
#line 496 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_5,
#line 496 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goal_6,
#line 496 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_RepvarMap_0_14,
#line 496 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_RepvarMap_15)
#line 496 "ordering_mode_constraints.m"
{
#line 499 "ordering_mode_constraints.m"
  {
#line 499 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 499 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__Goal_6, (MR_Integer) 1)));
#line 499 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__Nonlocals_9;
#line 499 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__GoalId_10;
#line 499 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_16_16;
#line 500 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__Goal_6, (MR_Integer) 0)));
#line 504 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_RepvarMap_15;

#line 501 "ordering_mode_constraints.m"
    {
#line 501 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__Nonlocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__ordering_mode_constraints__GoalInfo_8);
    }
#line 502 "ordering_mode_constraints.m"
    {
#line 502 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__GoalId_10 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__ordering_mode_constraints__GoalInfo_8);
    }
#line 504 "ordering_mode_constraints.m"
    {
#line 504 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 504 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_16_16, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[2]));
#line 504 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_16_16, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0_1));
#line 504 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 504 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_16_16, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_5));
#line 504 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_16_16, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__GoalId_10));
#line 504 "ordering_mode_constraints.m"
    }
#line 504 "ordering_mode_constraints.m"
    {
#line 504 "ordering_mode_constraints.m"
      parse_tree__set_of_var__fold_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[1], check_hlds__ordering_mode_constraints__V_16_16, check_hlds__ordering_mode_constraints__Nonlocals_9, ((MR_Box) (check_hlds__ordering_mode_constraints__STATE_VARIABLE_RepvarMap_0_14)), &check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_RepvarMap_15);
    }
#line 504 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__STATE_VARIABLE_RepvarMap_15 = ((MR_Word) check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_RepvarMap_15);
#line 499 "ordering_mode_constraints.m"
  }
#line 496 "ordering_mode_constraints.m"
}

#line 491 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0_1(
#line 491 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 491 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 491 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 491 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 491 "ordering_mode_constraints.m"
{
#line 491 "ordering_mode_constraints.m"
  {
#line 491 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 491 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_RepvarMap_15;

#line 491 "ordering_mode_constraints.m"
    {
#line 491 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__make_conjunct_nonlocal_repvars_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), &check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_RepvarMap_15);
    }
#line 491 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_RepvarMap_15));
#line 491 "ordering_mode_constraints.m"
  }
#line 491 "ordering_mode_constraints.m"
}

#line 487 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0(
#line 487 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_4,
#line 487 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goals_5,
#line 487 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__RepvarMap_6)
#line 487 "ordering_mode_constraints.m"
{
#line 490 "ordering_mode_constraints.m"
  {
#line 490 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 490 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_7_7;
#line 490 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_8_8;
#line 491 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv1_RepvarMap_6;

#line 491 "ordering_mode_constraints.m"
    {
#line 491 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 491 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_7_7, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[3]));
#line 491 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_7_7, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0_1));
#line 491 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 491 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_7_7, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_4));
#line 491 "ordering_mode_constraints.m"
    }
#line 492 "ordering_mode_constraints.m"
    {
#line 492 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_8_8 = mercury__multi_map__init_0_f_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[3], (MR_Word) &check_hlds__build_mode_constraints__check_hlds__build_mode_constraints__type_ctor_info_mc_rep_var_0);
    }
#line 491 "ordering_mode_constraints.m"
    {
#line 491 "ordering_mode_constraints.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[1], check_hlds__ordering_mode_constraints__V_7_7, check_hlds__ordering_mode_constraints__Goals_5, ((MR_Box) (check_hlds__ordering_mode_constraints__V_8_8)), &check_hlds__ordering_mode_constraints__conv1_RepvarMap_6);
    }
#line 491 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__RepvarMap_6 = ((MR_Word) check_hlds__ordering_mode_constraints__conv1_RepvarMap_6);
#line 490 "ordering_mode_constraints.m"
  }
#line 487 "ordering_mode_constraints.m"
}

#line 466 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraint_4_p_0(
#line 466 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__A_5,
#line 466 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__B_6,
#line 466 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_0_8,
#line 466 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_9)
#line 466 "ordering_mode_constraints.m"
{
#line 470 "ordering_mode_constraints.m"
  {
#line 470 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 470 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_10_10;

#line 471 "ordering_mode_constraints.m"
    {
#line 471 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 471 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_10_10, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__A_5));
#line 471 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_10_10, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__B_6));
#line 471 "ordering_mode_constraints.m"
    }
#line 471 "ordering_mode_constraints.m"
    {
#line 471 "ordering_mode_constraints.m"
      mercury__set__insert_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0, ((MR_Box) (check_hlds__ordering_mode_constraints__V_10_10)), check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_0_8, check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_9);
#line 471 "ordering_mode_constraints.m"
      return;
    }
#line 470 "ordering_mode_constraints.m"
  }
#line 466 "ordering_mode_constraints.m"
}

#line 461 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0_1(
#line 461 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 461 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 461 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 461 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 461 "ordering_mode_constraints.m"
{
#line 461 "ordering_mode_constraints.m"
  {
#line 461 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 461 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_Cs_9;

#line 461 "ordering_mode_constraints.m"
    {
#line 461 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__insert_lt_constraint_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), &check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_Cs_9);
    }
#line 461 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_Cs_9));
#line 461 "ordering_mode_constraints.m"
  }
#line 461 "ordering_mode_constraints.m"
}

#line 456 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0(
#line 456 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bs_5,
#line 456 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__A_6,
#line 456 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_0_8,
#line 456 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_9)
#line 456 "ordering_mode_constraints.m"
{
#line 460 "ordering_mode_constraints.m"
  {
#line 460 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 460 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_10_10;
#line 461 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_Cs_9;

#line 461 "ordering_mode_constraints.m"
    {
#line 461 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 461 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_10_10, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[2]));
#line 461 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_10_10, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0_1));
#line 461 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 461 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_10_10, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__A_6));
#line 461 "ordering_mode_constraints.m"
    }
#line 461 "ordering_mode_constraints.m"
    {
#line 461 "ordering_mode_constraints.m"
      mercury__set__fold_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[2], check_hlds__ordering_mode_constraints__V_10_10, check_hlds__ordering_mode_constraints__Bs_5, ((MR_Box) (check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_0_8)), &check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_Cs_9);
    }
#line 461 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__STATE_VARIABLE_Cs_9 = ((MR_Word) check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_Cs_9);
#line 460 "ordering_mode_constraints.m"
  }
#line 456 "ordering_mode_constraints.m"
}

#line 369 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_4(
#line 369 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 369 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 369 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 369 "ordering_mode_constraints.m"
{
#line 369 "ordering_mode_constraints.m"
  {
#line 369 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 369 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 369 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv3_Goal_12;

#line 369 "ordering_mode_constraints.m"
    {
#line 369 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), &check_hlds__ordering_mode_constraints__conv3_Goal_12);
    }
#line 369 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 369 "ordering_mode_constraints.m"
      {
#line 369 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv3_Goal_12));
#line 369 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 369 "ordering_mode_constraints.m"
      }
#line 369 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 369 "ordering_mode_constraints.m"
  }
#line 369 "ordering_mode_constraints.m"
}

#line 358 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_3(
#line 358 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 358 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 358 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 358 "ordering_mode_constraints.m"
{
#line 358 "ordering_mode_constraints.m"
  {
#line 358 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 358 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 358 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv2_Goal_12;

#line 358 "ordering_mode_constraints.m"
    {
#line 358 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), &check_hlds__ordering_mode_constraints__conv2_Goal_12);
    }
#line 358 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 358 "ordering_mode_constraints.m"
      {
#line 358 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv2_Goal_12));
#line 358 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 358 "ordering_mode_constraints.m"
      }
#line 358 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 358 "ordering_mode_constraints.m"
  }
#line 358 "ordering_mode_constraints.m"
}

#line 354 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_2(
#line 354 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 354 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 354 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 354 "ordering_mode_constraints.m"
{
#line 354 "ordering_mode_constraints.m"
  {
#line 354 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 354 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv1_HeadVar__3_78;

#line 354 "ordering_mode_constraints.m"
    {
#line 354 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__IntroducedFrom__pred__goal_reordering__354__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_1), &check_hlds__ordering_mode_constraints__conv1_HeadVar__3_78);
    }
#line 354 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv1_HeadVar__3_78));
#line 354 "ordering_mode_constraints.m"
  }
#line 354 "ordering_mode_constraints.m"
}

#line 363 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_1(
#line 363 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 363 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 363 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 363 "ordering_mode_constraints.m"
{
#line 363 "ordering_mode_constraints.m"
  {
#line 363 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 363 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 363 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv0_Goal_12;

#line 363 "ordering_mode_constraints.m"
    {
#line 363 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), &check_hlds__ordering_mode_constraints__conv0_Goal_12);
    }
#line 363 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 363 "ordering_mode_constraints.m"
      {
#line 363 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_Goal_12));
#line 363 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 363 "ordering_mode_constraints.m"
      }
#line 363 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 363 "ordering_mode_constraints.m"
  }
#line 363 "ordering_mode_constraints.m"
}

#line 329 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ContainingGoalMap_7,
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_8,
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_9,
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Bindings_10,
#line 329 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Goal0_11,
#line 329 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__Goal_12)
#line 329 "ordering_mode_constraints.m"
{
#line 332 "ordering_mode_constraints.m"
  {
#line 332 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 332 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__Goal0_11, (MR_Integer) 0)));
#line 332 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__Goal0_11, (MR_Integer) 1)));
#line 332 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__GoalExpr_38;

#line 342 "ordering_mode_constraints.m"
    if (((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr0_13)) == (MR_mktag((MR_Integer) 0))))
#line 386 "ordering_mode_constraints.m"
      {
#line 386 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__SubGoal0_57 = (MR_Word) MR_body(((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr0_13), (MR_Integer) 0);
#line 386 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__SubGoal_58;

#line 387 "ordering_mode_constraints.m"
        {
#line 387 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(check_hlds__ordering_mode_constraints__ContainingGoalMap_7, check_hlds__ordering_mode_constraints__PredId_8, check_hlds__ordering_mode_constraints__VarMap_9, check_hlds__ordering_mode_constraints__Bindings_10, check_hlds__ordering_mode_constraints__SubGoal0_57, &check_hlds__ordering_mode_constraints__SubGoal_58);
        }
#line 386 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 386 "ordering_mode_constraints.m"
          {
#line 389 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__ordering_mode_constraints__SubGoal_58);
#line 389 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 386 "ordering_mode_constraints.m"
          }
#line 386 "ordering_mode_constraints.m"
      }
#line 342 "ordering_mode_constraints.m"
    else
#line 342 "ordering_mode_constraints.m"
      if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "ordering_mode_constraints.m"
        {
#line 343 "ordering_mode_constraints.m"
          MR_Word check_hlds__ordering_mode_constraints__ConjType_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 1)));
#line 343 "ordering_mode_constraints.m"
          MR_Word check_hlds__ordering_mode_constraints__Goals0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 2)));
#line 343 "ordering_mode_constraints.m"
          MR_Word check_hlds__ordering_mode_constraints__Goals_46;

#line 360 "ordering_mode_constraints.m"
          if ((check_hlds__ordering_mode_constraints__ConjType_39 == (MR_Integer) 1))
#line 361 "ordering_mode_constraints.m"
            {
#line 361 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 361 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_68_68;

#line 363 "ordering_mode_constraints.m"
              {
#line 363 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 363 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_68_68, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_9[0]));
#line 363 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_68_68, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_1));
#line 363 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 363 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_68_68, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__ContainingGoalMap_7));
#line 363 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_68_68, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_8));
#line 363 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_68_68, 5) = ((MR_Box) (check_hlds__ordering_mode_constraints__VarMap_9));
#line 363 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_68_68, 6) = ((MR_Box) (check_hlds__ordering_mode_constraints__Bindings_10));
#line 363 "ordering_mode_constraints.m"
              }
#line 362 "ordering_mode_constraints.m"
              {
#line 362 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__succeeded = mercury__list__map_3_p_2(check_hlds__ordering_mode_constraints__TypeCtorInfo_85_85, check_hlds__ordering_mode_constraints__TypeCtorInfo_85_85, check_hlds__ordering_mode_constraints__V_68_68, check_hlds__ordering_mode_constraints__Goals0_40, &check_hlds__ordering_mode_constraints__Goals_46);
              }
#line 361 "ordering_mode_constraints.m"
            }
#line 360 "ordering_mode_constraints.m"
          else
#line 345 "ordering_mode_constraints.m"
            {
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_76_76;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_80_80;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__RepVarMap_41;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__OCInfo0_42;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__OCInfo_43;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Order_44;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Goals1_45;
#line 345 "ordering_mode_constraints.m"
              MR_Integer check_hlds__ordering_mode_constraints__V_69_69;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_70_70;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_71_71;
#line 345 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_91_91;

#line 347 "ordering_mode_constraints.m"
              {
#line 347 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__make_conjuncts_nonlocal_repvars_3_p_0(check_hlds__ordering_mode_constraints__PredId_8, check_hlds__ordering_mode_constraints__Goals0_40, &check_hlds__ordering_mode_constraints__RepVarMap_41);
              }
#line 5996 "check_hlds.ordering_mode_constraints.c"
              check_hlds__ordering_mode_constraints__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 348 "ordering_mode_constraints.m"
              {
#line 348 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_69_69 = mercury__list__length_1_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_76_76, check_hlds__ordering_mode_constraints__Goals0_40);
              }
#line 413 "ordering_mode_constraints.m"
              {
#line 413 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_91_91 = mercury__set__init_0_f_0((MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0);
              }
#line 413 "ordering_mode_constraints.m"
              {
#line 413 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__OCInfo0_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 413 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCInfo0_42, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__ContainingGoalMap_7));
#line 413 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCInfo0_42, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_69_69));
#line 413 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__OCInfo0_42, 2) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_91_91));
#line 413 "ordering_mode_constraints.m"
              }
#line 349 "ordering_mode_constraints.m"
              {
#line 349 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__conjunct_ordering_constraints_5_p_0(check_hlds__ordering_mode_constraints__VarMap_9, check_hlds__ordering_mode_constraints__Bindings_10, check_hlds__ordering_mode_constraints__RepVarMap_41, check_hlds__ordering_mode_constraints__OCInfo0_42, &check_hlds__ordering_mode_constraints__OCInfo_43);
              }
#line 345 "ordering_mode_constraints.m"
              if (check_hlds__ordering_mode_constraints__succeeded)
#line 345 "ordering_mode_constraints.m"
                {
#line 353 "ordering_mode_constraints.m"
                  {
#line 353 "ordering_mode_constraints.m"
                    check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__minimum_reordering_2_p_0(check_hlds__ordering_mode_constraints__OCInfo_43, &check_hlds__ordering_mode_constraints__Order_44);
                  }
#line 345 "ordering_mode_constraints.m"
                  if (check_hlds__ordering_mode_constraints__succeeded)
#line 345 "ordering_mode_constraints.m"
                    {
#line 6038 "check_hlds.ordering_mode_constraints.c"
                      check_hlds__ordering_mode_constraints__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 354 "ordering_mode_constraints.m"
                      {
#line 354 "ordering_mode_constraints.m"
                        check_hlds__ordering_mode_constraints__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 354 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_70_70, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[1]));
#line 354 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_70_70, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_2));
#line 354 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 354 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_70_70, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__Goals0_40));
#line 354 "ordering_mode_constraints.m"
                      }
#line 354 "ordering_mode_constraints.m"
                      {
#line 354 "ordering_mode_constraints.m"
                        mercury__list__map_3_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_80_80, check_hlds__ordering_mode_constraints__TypeCtorInfo_76_76, check_hlds__ordering_mode_constraints__V_70_70, check_hlds__ordering_mode_constraints__Order_44, &check_hlds__ordering_mode_constraints__Goals1_45);
                      }
#line 358 "ordering_mode_constraints.m"
                      {
#line 358 "ordering_mode_constraints.m"
                        check_hlds__ordering_mode_constraints__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 358 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_71_71, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_9[0]));
#line 358 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_71_71, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_3));
#line 358 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 358 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_71_71, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__ContainingGoalMap_7));
#line 358 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_71_71, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_8));
#line 358 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_71_71, 5) = ((MR_Box) (check_hlds__ordering_mode_constraints__VarMap_9));
#line 358 "ordering_mode_constraints.m"
                        MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_71_71, 6) = ((MR_Box) (check_hlds__ordering_mode_constraints__Bindings_10));
#line 358 "ordering_mode_constraints.m"
                      }
#line 357 "ordering_mode_constraints.m"
                      {
#line 357 "ordering_mode_constraints.m"
                        check_hlds__ordering_mode_constraints__succeeded = mercury__list__map_3_p_2(check_hlds__ordering_mode_constraints__TypeCtorInfo_76_76, check_hlds__ordering_mode_constraints__TypeCtorInfo_76_76, check_hlds__ordering_mode_constraints__V_71_71, check_hlds__ordering_mode_constraints__Goals1_45, &check_hlds__ordering_mode_constraints__Goals_46);
                      }
#line 345 "ordering_mode_constraints.m"
                    }
#line 345 "ordering_mode_constraints.m"
                }
#line 345 "ordering_mode_constraints.m"
            }
#line 343 "ordering_mode_constraints.m"
          if (check_hlds__ordering_mode_constraints__succeeded)
#line 343 "ordering_mode_constraints.m"
            {
#line 366 "ordering_mode_constraints.m"
              {
#line 366 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 366 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 366 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__ConjType_39));
#line 366 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 2) = ((MR_Box) (check_hlds__ordering_mode_constraints__Goals_46));
#line 366 "ordering_mode_constraints.m"
              }
#line 366 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 343 "ordering_mode_constraints.m"
            }
#line 343 "ordering_mode_constraints.m"
        }
#line 342 "ordering_mode_constraints.m"
      else
#line 342 "ordering_mode_constraints.m"
        if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 368 "ordering_mode_constraints.m"
          {
#line 368 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_88_88 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 368 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__V_67_67;
#line 368 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__Goals0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 1)));
#line 368 "ordering_mode_constraints.m"
            MR_Word check_hlds__ordering_mode_constraints__Goals_73;

#line 369 "ordering_mode_constraints.m"
            {
#line 369 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 369 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_67_67, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_9[0]));
#line 369 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_67_67, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__goal_reordering_6_p_0_4));
#line 369 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 369 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_67_67, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__ContainingGoalMap_7));
#line 369 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_67_67, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_8));
#line 369 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_67_67, 5) = ((MR_Box) (check_hlds__ordering_mode_constraints__VarMap_9));
#line 369 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_67_67, 6) = ((MR_Box) (check_hlds__ordering_mode_constraints__Bindings_10));
#line 369 "ordering_mode_constraints.m"
            }
#line 369 "ordering_mode_constraints.m"
            {
#line 369 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__succeeded = mercury__list__map_3_p_2(check_hlds__ordering_mode_constraints__TypeCtorInfo_88_88, check_hlds__ordering_mode_constraints__TypeCtorInfo_88_88, check_hlds__ordering_mode_constraints__V_67_67, check_hlds__ordering_mode_constraints__Goals0_72, &check_hlds__ordering_mode_constraints__Goals_73);
            }
#line 368 "ordering_mode_constraints.m"
            if (check_hlds__ordering_mode_constraints__succeeded)
#line 368 "ordering_mode_constraints.m"
              {
#line 371 "ordering_mode_constraints.m"
                {
#line 371 "ordering_mode_constraints.m"
                  check_hlds__ordering_mode_constraints__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "ordering_mode_constraints.m"
                  MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 371 "ordering_mode_constraints.m"
                  MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__Goals_73));
#line 371 "ordering_mode_constraints.m"
                }
#line 371 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 368 "ordering_mode_constraints.m"
              }
#line 368 "ordering_mode_constraints.m"
          }
#line 342 "ordering_mode_constraints.m"
        else
#line 342 "ordering_mode_constraints.m"
          if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 377 "ordering_mode_constraints.m"
            {
#line 377 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Vars_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 1)));
#line 377 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Cond0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 2)));
#line 377 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Then0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 3)));
#line 377 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Else0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 4)));
#line 377 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Cond_54;
#line 377 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Then_55;
#line 377 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__Else_56;

#line 378 "ordering_mode_constraints.m"
              {
#line 378 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(check_hlds__ordering_mode_constraints__ContainingGoalMap_7, check_hlds__ordering_mode_constraints__PredId_8, check_hlds__ordering_mode_constraints__VarMap_9, check_hlds__ordering_mode_constraints__Bindings_10, check_hlds__ordering_mode_constraints__Cond0_51, &check_hlds__ordering_mode_constraints__Cond_54);
              }
#line 377 "ordering_mode_constraints.m"
              if (check_hlds__ordering_mode_constraints__succeeded)
#line 377 "ordering_mode_constraints.m"
                {
#line 380 "ordering_mode_constraints.m"
                  {
#line 380 "ordering_mode_constraints.m"
                    check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(check_hlds__ordering_mode_constraints__ContainingGoalMap_7, check_hlds__ordering_mode_constraints__PredId_8, check_hlds__ordering_mode_constraints__VarMap_9, check_hlds__ordering_mode_constraints__Bindings_10, check_hlds__ordering_mode_constraints__Then0_52, &check_hlds__ordering_mode_constraints__Then_55);
                  }
#line 377 "ordering_mode_constraints.m"
                  if (check_hlds__ordering_mode_constraints__succeeded)
#line 377 "ordering_mode_constraints.m"
                    {
#line 382 "ordering_mode_constraints.m"
                      {
#line 382 "ordering_mode_constraints.m"
                        check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(check_hlds__ordering_mode_constraints__ContainingGoalMap_7, check_hlds__ordering_mode_constraints__PredId_8, check_hlds__ordering_mode_constraints__VarMap_9, check_hlds__ordering_mode_constraints__Bindings_10, check_hlds__ordering_mode_constraints__Else0_53, &check_hlds__ordering_mode_constraints__Else_56);
                      }
#line 377 "ordering_mode_constraints.m"
                      if (check_hlds__ordering_mode_constraints__succeeded)
#line 377 "ordering_mode_constraints.m"
                        {
#line 384 "ordering_mode_constraints.m"
                          {
#line 384 "ordering_mode_constraints.m"
                            check_hlds__ordering_mode_constraints__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 384 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 384 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__Vars_50));
#line 384 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 2) = ((MR_Box) (check_hlds__ordering_mode_constraints__Cond_54));
#line 384 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__Then_55));
#line 384 "ordering_mode_constraints.m"
                            MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__Else_56));
#line 384 "ordering_mode_constraints.m"
                          }
#line 384 "ordering_mode_constraints.m"
                          check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 377 "ordering_mode_constraints.m"
                        }
#line 377 "ordering_mode_constraints.m"
                    }
#line 377 "ordering_mode_constraints.m"
                }
#line 377 "ordering_mode_constraints.m"
            }
#line 342 "ordering_mode_constraints.m"
          else
#line 342 "ordering_mode_constraints.m"
            if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 391 "ordering_mode_constraints.m"
              {
#line 391 "ordering_mode_constraints.m"
                MR_Word check_hlds__ordering_mode_constraints__Reason_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 1)));
#line 391 "ordering_mode_constraints.m"
                MR_Word check_hlds__ordering_mode_constraints__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 2)));
#line 391 "ordering_mode_constraints.m"
                MR_Word check_hlds__ordering_mode_constraints__SubGoal_75;

#line 394 "ordering_mode_constraints.m"
                {
#line 394 "ordering_mode_constraints.m"
                  check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0(check_hlds__ordering_mode_constraints__ContainingGoalMap_7, check_hlds__ordering_mode_constraints__PredId_8, check_hlds__ordering_mode_constraints__VarMap_9, check_hlds__ordering_mode_constraints__Bindings_10, check_hlds__ordering_mode_constraints__SubGoal0_74, &check_hlds__ordering_mode_constraints__SubGoal_75);
                }
#line 391 "ordering_mode_constraints.m"
                if (check_hlds__ordering_mode_constraints__succeeded)
#line 391 "ordering_mode_constraints.m"
                  {
#line 396 "ordering_mode_constraints.m"
                    {
#line 396 "ordering_mode_constraints.m"
                      check_hlds__ordering_mode_constraints__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__Reason_59));
#line 396 "ordering_mode_constraints.m"
                      MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr_38, 2) = ((MR_Box) (check_hlds__ordering_mode_constraints__SubGoal_75));
#line 396 "ordering_mode_constraints.m"
                    }
#line 396 "ordering_mode_constraints.m"
                    check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 391 "ordering_mode_constraints.m"
                  }
#line 391 "ordering_mode_constraints.m"
              }
#line 342 "ordering_mode_constraints.m"
            else
#line 342 "ordering_mode_constraints.m"
              if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 398 "ordering_mode_constraints.m"
                {
#line 401 "ordering_mode_constraints.m"
                  {
#line 401 "ordering_mode_constraints.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.ordering_mode_constraints", (MR_String) "predicate \140check_hlds.ordering_mode_constraints.goal_reordering\'/6", (MR_String) "NYI: shorthand");
                  }
#line 398 "ordering_mode_constraints.m"
                  check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 398 "ordering_mode_constraints.m"
                }
#line 342 "ordering_mode_constraints.m"
              else
#line 342 "ordering_mode_constraints.m"
                if (((((MR_tag((MR_Word) check_hlds__ordering_mode_constraints__GoalExpr0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__ordering_mode_constraints__GoalExpr0_13, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 373 "ordering_mode_constraints.m"
                  {
#line 375 "ordering_mode_constraints.m"
                    {
#line 375 "ordering_mode_constraints.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.ordering_mode_constraints", (MR_String) "predicate \140check_hlds.ordering_mode_constraints.goal_reordering\'/6", (MR_String) "switch");
                    }
#line 373 "ordering_mode_constraints.m"
                    check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 373 "ordering_mode_constraints.m"
                  }
#line 342 "ordering_mode_constraints.m"
                else
#line 341 "ordering_mode_constraints.m"
                  {
#line 341 "ordering_mode_constraints.m"
                    check_hlds__ordering_mode_constraints__GoalExpr_38 = check_hlds__ordering_mode_constraints__GoalExpr0_13;
#line 341 "ordering_mode_constraints.m"
                    check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 341 "ordering_mode_constraints.m"
                  }
#line 332 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 332 "ordering_mode_constraints.m"
      {
#line 403 "ordering_mode_constraints.m"
        {
#line 403 "ordering_mode_constraints.m"
          MR_Word base;
#line 403 "ordering_mode_constraints.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "ordering_mode_constraints.m"
          *check_hlds__ordering_mode_constraints__Goal_12 = base;
#line 403 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__GoalExpr_38));
#line 403 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__GoalInfo_14));
#line 403 "ordering_mode_constraints.m"
        }
#line 403 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 332 "ordering_mode_constraints.m"
      }
#line 332 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 332 "ordering_mode_constraints.m"
  }
#line 329 "ordering_mode_constraints.m"
}

#line 306 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_1(
#line 306 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg)
#line 306 "ordering_mode_constraints.m"
{
#line 306 "ordering_mode_constraints.m"
  {
#line 306 "ordering_mode_constraints.m"
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * check_hlds__ordering_mode_constraints__env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) check_hlds__ordering_mode_constraints__env_ptr_arg;

#line 306 "ordering_mode_constraints.m"
    MR_builtin_longjmp((check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_0, 1);
#line 306 "ordering_mode_constraints.m"
  }
#line 306 "ordering_mode_constraints.m"
}

#line 306 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_2(
#line 306 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg)
#line 306 "ordering_mode_constraints.m"
{
#line 306 "ordering_mode_constraints.m"
  {
#line 306 "ordering_mode_constraints.m"
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * check_hlds__ordering_mode_constraints__env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) check_hlds__ordering_mode_constraints__env_ptr_arg;

#line 307 "ordering_mode_constraints.m"
    {
#line 307 "ordering_mode_constraints.m"
      (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = check_hlds__ordering_mode_constraints__goal_reordering_6_p_0((check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__ContainingGoalMap_10, (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13, (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__VarMap_12, (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Bindings_44, (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Goal0_18, &(check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__STATE_VARIABLE_Goal_23_46);
    }
#line 307 "ordering_mode_constraints.m"
    if ((check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded)
#line 307 "ordering_mode_constraints.m"
      {
#line 307 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_1(check_hlds__ordering_mode_constraints__env_ptr);
#line 307 "ordering_mode_constraints.m"
        return;
      }
#line 306 "ordering_mode_constraints.m"
  }
#line 306 "ordering_mode_constraints.m"
}

#line 306 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_3(
#line 306 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg)
#line 306 "ordering_mode_constraints.m"
{
#line 306 "ordering_mode_constraints.m"
  {
#line 306 "ordering_mode_constraints.m"
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * check_hlds__ordering_mode_constraints__env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) check_hlds__ordering_mode_constraints__env_ptr_arg;

#line 306 "ordering_mode_constraints.m"
    if (MR_builtin_setjmp((check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_0) == 0)
#line 306 "ordering_mode_constraints.m"
      {
#line 306 "ordering_mode_constraints.m"
        {
#line 306 "ordering_mode_constraints.m"
          check_hlds__mcsolver__solve_2_p_0((check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__SolverConstraints_22, &(check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Bindings_44, check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_2, check_hlds__ordering_mode_constraints__env_ptr);
        }
#line 306 "ordering_mode_constraints.m"
        (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = MR_FALSE;
#line 306 "ordering_mode_constraints.m"
      }
#line 306 "ordering_mode_constraints.m"
    else
#line 306 "ordering_mode_constraints.m"
      (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = MR_TRUE;
#line 306 "ordering_mode_constraints.m"
  }
#line 306 "ordering_mode_constraints.m"
}

#line 311 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_4(
#line 311 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg)
#line 311 "ordering_mode_constraints.m"
{
#line 311 "ordering_mode_constraints.m"
  {
#line 311 "ordering_mode_constraints.m"
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * check_hlds__ordering_mode_constraints__env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) check_hlds__ordering_mode_constraints__env_ptr_arg;

#line 311 "ordering_mode_constraints.m"
    MR_builtin_longjmp((check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_1, 1);
#line 311 "ordering_mode_constraints.m"
  }
#line 311 "ordering_mode_constraints.m"
}

#line 311 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_5(
#line 311 "ordering_mode_constraints.m"
  void * check_hlds__ordering_mode_constraints__env_ptr_arg)
#line 311 "ordering_mode_constraints.m"
{
#line 311 "ordering_mode_constraints.m"
  {
#line 311 "ordering_mode_constraints.m"
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s * check_hlds__ordering_mode_constraints__env_ptr = (struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s *) check_hlds__ordering_mode_constraints__env_ptr_arg;

#line 311 "ordering_mode_constraints.m"
    if (MR_builtin_setjmp((check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__commit_1) == 0)
#line 311 "ordering_mode_constraints.m"
      {
#line 311 "ordering_mode_constraints.m"
        {
#line 311 "ordering_mode_constraints.m"
          MR_Word check_hlds__ordering_mode_constraints__V_45_45;

#line 311 "ordering_mode_constraints.m"
          {
#line 311 "ordering_mode_constraints.m"
            check_hlds__mcsolver__solve_2_p_0((check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__SolverConstraints_22, &check_hlds__ordering_mode_constraints__V_45_45, check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_4, check_hlds__ordering_mode_constraints__env_ptr);
          }
#line 311 "ordering_mode_constraints.m"
        }
#line 311 "ordering_mode_constraints.m"
        (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = MR_FALSE;
#line 311 "ordering_mode_constraints.m"
      }
#line 311 "ordering_mode_constraints.m"
    else
#line 311 "ordering_mode_constraints.m"
      (check_hlds__ordering_mode_constraints__env_ptr)->check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded = MR_TRUE;
#line 311 "ordering_mode_constraints.m"
  }
#line 311 "ordering_mode_constraints.m"
}

#line 250 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__proc_reordering_9_p_0(
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ContainingGoalMap_10,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredConstraints_11,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_12,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_13,
#line 250 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__ProcId_14,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_0_27,
#line 250 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_28,
#line 250 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_PredInfo_0_29,
#line 250 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_PredInfo_30)
#line 250 "ordering_mode_constraints.m"
{
#line 250 "ordering_mode_constraints.m"
  {
#line 250 "ordering_mode_constraints.m"
    struct check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0_s check_hlds__ordering_mode_constraints__env;

#line 250 "ordering_mode_constraints.m"
    (check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__ContainingGoalMap_10 = check_hlds__ordering_mode_constraints__ContainingGoalMap_10;
#line 250 "ordering_mode_constraints.m"
    (check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__VarMap_12 = check_hlds__ordering_mode_constraints__VarMap_12;
#line 250 "ordering_mode_constraints.m"
    (check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13 = check_hlds__ordering_mode_constraints__PredId_13;
#line 256 "ordering_mode_constraints.m"
    {
#line 256 "ordering_mode_constraints.m"
      MR_Word check_hlds__ordering_mode_constraints__ProcInfo0_17;
#line 256 "ordering_mode_constraints.m"
      MR_Word check_hlds__ordering_mode_constraints__ConstraintsForProc_19;
#line 256 "ordering_mode_constraints.m"
      MR_Word check_hlds__ordering_mode_constraints__PrepConstraints0_20;
#line 256 "ordering_mode_constraints.m"
      MR_Word check_hlds__ordering_mode_constraints__PrepConstraints1_21;
#line 256 "ordering_mode_constraints.m"
      MR_Word check_hlds__ordering_mode_constraints__Goal_25;
#line 256 "ordering_mode_constraints.m"
      MR_Word check_hlds__ordering_mode_constraints__ProcInfo_26;

#line 257 "ordering_mode_constraints.m"
      {
#line 257 "ordering_mode_constraints.m"
        hlds__hlds_pred__pred_info_proc_info_3_p_0(check_hlds__ordering_mode_constraints__STATE_VARIABLE_PredInfo_0_29, check_hlds__ordering_mode_constraints__ProcId_14, &check_hlds__ordering_mode_constraints__ProcInfo0_17);
      }
#line 258 "ordering_mode_constraints.m"
      {
#line 258 "ordering_mode_constraints.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__ordering_mode_constraints__ProcInfo0_17, &(check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Goal0_18);
      }
#line 260 "ordering_mode_constraints.m"
      {
#line 260 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__ConstraintsForProc_19 = check_hlds__abstract_mode_constraints__all_constraints_for_proc_2_f_0(check_hlds__ordering_mode_constraints__ProcId_14, check_hlds__ordering_mode_constraints__PredConstraints_11);
      }
#line 262 "ordering_mode_constraints.m"
      {
#line 262 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__PrepConstraints0_20 = check_hlds__mcsolver__new_prep_cstrts_0_f_0();
      }
#line 263 "ordering_mode_constraints.m"
      {
#line 263 "ordering_mode_constraints.m"
        check_hlds__mcsolver__prepare_abstract_constraints_3_p_0(check_hlds__ordering_mode_constraints__ConstraintsForProc_19, check_hlds__ordering_mode_constraints__PrepConstraints0_20, &check_hlds__ordering_mode_constraints__PrepConstraints1_21);
      }
#line 265 "ordering_mode_constraints.m"
      {
#line 265 "ordering_mode_constraints.m"
        (check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__SolverConstraints_22 = check_hlds__mcsolver__make_solver_cstrts_1_f_0(check_hlds__ordering_mode_constraints__PrepConstraints1_21);
      }
#line 306 "ordering_mode_constraints.m"
      {
#line 306 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_3(&check_hlds__ordering_mode_constraints__env);
      }
#line 310 "ordering_mode_constraints.m"
      if ((check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded)
#line 309 "ordering_mode_constraints.m"
        {
#line 309 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__Goal_25 = (check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__STATE_VARIABLE_Goal_23_46;
#line 309 "ordering_mode_constraints.m"
          *check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_28 = check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_0_27;
#line 309 "ordering_mode_constraints.m"
        }
#line 310 "ordering_mode_constraints.m"
      else
#line 313 "ordering_mode_constraints.m"
        {
#line 311 "ordering_mode_constraints.m"
          {
#line 311 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_5(&check_hlds__ordering_mode_constraints__env);
          }
#line 313 "ordering_mode_constraints.m"
          if ((check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__succeeded)
#line 312 "ordering_mode_constraints.m"
            {
#line 312 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_47_47;
#line 312 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_49_49;

#line 312 "ordering_mode_constraints.m"
              {
#line 312 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_49_49, 0) = ((MR_Box) ((check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13));
#line 312 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_49_49, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__ProcId_14));
#line 312 "ordering_mode_constraints.m"
              }
#line 312 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__ordering_mode_constraints__V_49_49);
#line 312 "ordering_mode_constraints.m"
              {
#line 312 "ordering_mode_constraints.m"
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0, ((MR_Box) (check_hlds__ordering_mode_constraints__V_47_47)), check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_0_27, check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_28);
              }
#line 312 "ordering_mode_constraints.m"
            }
#line 313 "ordering_mode_constraints.m"
          else
#line 314 "ordering_mode_constraints.m"
            {
#line 314 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_50_50;
#line 314 "ordering_mode_constraints.m"
              MR_Word check_hlds__ordering_mode_constraints__V_52_52;

#line 314 "ordering_mode_constraints.m"
              {
#line 314 "ordering_mode_constraints.m"
                check_hlds__ordering_mode_constraints__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_52_52, 0) = ((MR_Box) ((check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__PredId_13));
#line 314 "ordering_mode_constraints.m"
                MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_52_52, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__ProcId_14));
#line 314 "ordering_mode_constraints.m"
              }
#line 314 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__ordering_mode_constraints__V_52_52);
#line 314 "ordering_mode_constraints.m"
              {
#line 314 "ordering_mode_constraints.m"
                mercury__list__cons_3_p_0((MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0, ((MR_Box) (check_hlds__ordering_mode_constraints__V_50_50)), check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_0_27, check_hlds__ordering_mode_constraints__STATE_VARIABLE_Errors_28);
              }
#line 314 "ordering_mode_constraints.m"
            }
#line 314 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__Goal_25 = (check_hlds__ordering_mode_constraints__env).check_hlds__ordering_mode_constraints__proc_reordering_9_p_0_env_0__Goal0_18;
#line 313 "ordering_mode_constraints.m"
        }
#line 279 "ordering_mode_constraints.m"
      {
#line 279 "ordering_mode_constraints.m"
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__ordering_mode_constraints__Goal_25, check_hlds__ordering_mode_constraints__ProcInfo0_17, &check_hlds__ordering_mode_constraints__ProcInfo_26);
      }
#line 280 "ordering_mode_constraints.m"
      {
#line 280 "ordering_mode_constraints.m"
        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(check_hlds__ordering_mode_constraints__ProcId_14, check_hlds__ordering_mode_constraints__ProcInfo_26, check_hlds__ordering_mode_constraints__STATE_VARIABLE_PredInfo_0_29, check_hlds__ordering_mode_constraints__STATE_VARIABLE_PredInfo_30);
#line 280 "ordering_mode_constraints.m"
        return;
      }
#line 256 "ordering_mode_constraints.m"
    }
#line 250 "ordering_mode_constraints.m"
  }
#line 250 "ordering_mode_constraints.m"
}

#line 228 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__pred_reordering_5_p_0_1(
#line 228 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 228 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 228 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 228 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3,
#line 228 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_4,
#line 228 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_5)
#line 228 "ordering_mode_constraints.m"
{
#line 228 "ordering_mode_constraints.m"
  {
#line 228 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 228 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_Errors_28;
#line 228 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_PredInfo_30;

#line 228 "ordering_mode_constraints.m"
    {
#line 228 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__proc_reordering_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 6))), ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), &check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_Errors_28, ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_4), &check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_PredInfo_30);
    }
#line 228 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_Errors_28));
#line 228 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_5 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_PredInfo_30));
#line 228 "ordering_mode_constraints.m"
  }
#line 228 "ordering_mode_constraints.m"
}

#line 207 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__pred_reordering_5_p_0(
#line 207 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredConstraintsMap_6,
#line 207 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 207 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredId_8,
#line 207 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_20,
#line 207 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_21)
#line 207 "ordering_mode_constraints.m"
{
#line 210 "ordering_mode_constraints.m"
  {
#line 210 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 210 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__PredInfo0_10;

#line 211 "ordering_mode_constraints.m"
    {
#line 211 "ordering_mode_constraints.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_20, check_hlds__ordering_mode_constraints__PredId_8, &check_hlds__ordering_mode_constraints__PredInfo0_10);
    }
#line 212 "ordering_mode_constraints.m"
    {
#line 212 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__ordering_mode_constraints__PredInfo0_10);
    }
#line 216 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 215 "ordering_mode_constraints.m"
      {
#line 215 "ordering_mode_constraints.m"
        {
#line 215 "ordering_mode_constraints.m"
          mercury__require__sorry_3_p_0((MR_String) "check_hlds.ordering_mode_constraints", (MR_String) "predicate \140check_hlds.ordering_mode_constraints.pred_reordering\'/5", (MR_String) "mode inference constraints");
#line 215 "ordering_mode_constraints.m"
          return;
        }
#line 215 "ordering_mode_constraints.m"
      }
#line 216 "ordering_mode_constraints.m"
    else
#line 220 "ordering_mode_constraints.m"
      {
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeInfo_44_44;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__PredInfo1_11;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__ContainingGoalMap_12;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__PredConstraints_13;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__ProcIds_14;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__Errors_15;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__PredInfo_16;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_25_25;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_26_26;
#line 220 "ordering_mode_constraints.m"
        MR_Tuple check_hlds__ordering_mode_constraints__V_28_28;
#line 220 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_29_29;
#line 224 "ordering_mode_constraints.m"
        MR_Box check_hlds__ordering_mode_constraints__conv0_V_28_28;
#line 227 "ordering_mode_constraints.m"
        MR_Box check_hlds__ordering_mode_constraints__conv4_Errors_15;
#line 227 "ordering_mode_constraints.m"
        MR_Box check_hlds__ordering_mode_constraints__conv3_PredInfo_16;

#line 220 "ordering_mode_constraints.m"
        {
#line 220 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__V_25_25, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_8));
#line 220 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(1), check_hlds__ordering_mode_constraints__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "ordering_mode_constraints.m"
        }
#line 220 "ordering_mode_constraints.m"
        {
#line 220 "ordering_mode_constraints.m"
          check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__ordering_mode_constraints__V_25_25, check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_20, &check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_26_26);
        }
#line 222 "ordering_mode_constraints.m"
        {
#line 222 "ordering_mode_constraints.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_26_26, check_hlds__ordering_mode_constraints__PredId_8, &check_hlds__ordering_mode_constraints__PredInfo1_11);
        }
#line 224 "ordering_mode_constraints.m"
        {
#line 224 "ordering_mode_constraints.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_3[0], check_hlds__ordering_mode_constraints__PredConstraintsMap_6, ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_8)), &check_hlds__ordering_mode_constraints__conv0_V_28_28);
        }
#line 224 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__V_28_28 = ((MR_Tuple) check_hlds__ordering_mode_constraints__conv0_V_28_28);
#line 225 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__ContainingGoalMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_28_28, (MR_Integer) 0)));
#line 225 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__PredConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_28_28, (MR_Integer) 1)));
#line 226 "ordering_mode_constraints.m"
        {
#line 226 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__ProcIds_14 = hlds__hlds_pred__pred_info_all_procids_1_f_0(check_hlds__ordering_mode_constraints__PredInfo1_11);
        }
#line 228 "ordering_mode_constraints.m"
        {
#line 228 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 228 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_29_29, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_8[0]));
#line 228 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_29_29, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__pred_reordering_5_p_0_1));
#line 228 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 228 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_29_29, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__ContainingGoalMap_12));
#line 228 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_29_29, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredConstraints_13));
#line 228 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_29_29, 5) = ((MR_Box) (check_hlds__ordering_mode_constraints__VarMap_7));
#line 228 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_29_29, 6) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredId_8));
#line 228 "ordering_mode_constraints.m"
        }
#line 6855 "check_hlds.ordering_mode_constraints.c"
        check_hlds__ordering_mode_constraints__TypeInfo_44_44 = (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[1];
#line 227 "ordering_mode_constraints.m"
        {
#line 227 "ordering_mode_constraints.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__ordering_mode_constraints__TypeInfo_44_44, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__ordering_mode_constraints__V_29_29, check_hlds__ordering_mode_constraints__ProcIds_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__ordering_mode_constraints__conv4_Errors_15, ((MR_Box) (check_hlds__ordering_mode_constraints__PredInfo1_11)), &check_hlds__ordering_mode_constraints__conv3_PredInfo_16);
        }
#line 227 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__Errors_15 = ((MR_Word) check_hlds__ordering_mode_constraints__conv4_Errors_15);
#line 227 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__PredInfo_16 = ((MR_Word) check_hlds__ordering_mode_constraints__conv3_PredInfo_16);
#line 235 "ordering_mode_constraints.m"
        if ((check_hlds__ordering_mode_constraints__Errors_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "ordering_mode_constraints.m"
          {
#line 234 "ordering_mode_constraints.m"
            hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__ordering_mode_constraints__PredId_8, check_hlds__ordering_mode_constraints__PredInfo_16, check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_26_26, check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_21);
#line 234 "ordering_mode_constraints.m"
            return;
          }
#line 235 "ordering_mode_constraints.m"
        else
#line 236 "ordering_mode_constraints.m"
          {
#line 236 "ordering_mode_constraints.m"
            MR_String check_hlds__ordering_mode_constraints__ErrorsString_19;
#line 236 "ordering_mode_constraints.m"
            MR_String check_hlds__ordering_mode_constraints__V_33_33;

#line 239 "ordering_mode_constraints.m"
            {
#line 239 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__ErrorsString_19 = mercury__string__string_1_f_0(check_hlds__ordering_mode_constraints__TypeInfo_44_44, ((MR_Box) (check_hlds__ordering_mode_constraints__Errors_15)));
            }
#line 240 "ordering_mode_constraints.m"
            {
#line 240 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "mode checking failure: ", check_hlds__ordering_mode_constraints__ErrorsString_19);
            }
#line 240 "ordering_mode_constraints.m"
            {
#line 240 "ordering_mode_constraints.m"
              mercury__require__sorry_3_p_0((MR_String) "check_hlds.ordering_mode_constraints", (MR_String) "predicate \140check_hlds.ordering_mode_constraints.pred_reordering\'/5", check_hlds__ordering_mode_constraints__V_33_33);
#line 240 "ordering_mode_constraints.m"
              return;
            }
#line 236 "ordering_mode_constraints.m"
          }
#line 220 "ordering_mode_constraints.m"
      }
#line 210 "ordering_mode_constraints.m"
  }
#line 207 "ordering_mode_constraints.m"
}

#line 200 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_3(
#line 200 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 200 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 200 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 200 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 200 "ordering_mode_constraints.m"
{
#line 200 "ordering_mode_constraints.m"
  {
#line 200 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 200 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_ModuleInfo_21;

#line 200 "ordering_mode_constraints.m"
    {
#line 200 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__pred_reordering_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), &check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_ModuleInfo_21);
    }
#line 200 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_ModuleInfo_21));
#line 200 "ordering_mode_constraints.m"
  }
#line 200 "ordering_mode_constraints.m"
}

#line 187 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_2(
#line 187 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 187 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1)
#line 187 "ordering_mode_constraints.m"
{
#line 187 "ordering_mode_constraints.m"
  {
#line 187 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 187 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 187 "ordering_mode_constraints.m"
    {
#line 187 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__pred__scc_reordering__187__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
    }
#line 187 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 187 "ordering_mode_constraints.m"
  }
#line 187 "ordering_mode_constraints.m"
}

#line 184 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_1(
#line 184 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 184 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1)
#line 184 "ordering_mode_constraints.m"
{
#line 184 "ordering_mode_constraints.m"
  {
#line 184 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 184 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 184 "ordering_mode_constraints.m"
    {
#line 184 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
    }
#line 184 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 184 "ordering_mode_constraints.m"
  }
#line 184 "ordering_mode_constraints.m"
}

#line 179 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__scc_reordering_5_p_0(
#line 179 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredConstraintsMap_6,
#line 179 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 179 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__SCC0_8,
#line 179 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_18,
#line 179 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_19)
#line 179 "ordering_mode_constraints.m"
{
#line 182 "ordering_mode_constraints.m"
  {
#line 182 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 182 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30;
#line 182 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__SCC_11;
#line 182 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__PredsToInfer_14;
#line 182 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__PredsToCheck_15;
#line 182 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_20_20;
#line 182 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_21_21;
#line 182 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_26_26;
#line 184 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_10_10;
#line 200 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_ModuleInfo_19;

#line 184 "ordering_mode_constraints.m"
    {
#line 184 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 184 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[0]));
#line 184 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_1));
#line 184 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_20_20, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_18));
#line 184 "ordering_mode_constraints.m"
    }
#line 7050 "check_hlds.ordering_mode_constraints.c"
    check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 184 "ordering_mode_constraints.m"
    {
#line 184 "ordering_mode_constraints.m"
      mercury__list__filter_4_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30, check_hlds__ordering_mode_constraints__V_20_20, check_hlds__ordering_mode_constraints__SCC0_8, &check_hlds__ordering_mode_constraints__V_10_10, &check_hlds__ordering_mode_constraints__SCC_11);
    }
#line 187 "ordering_mode_constraints.m"
    {
#line 187 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 187 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[0]));
#line 187 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_2));
#line 187 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 187 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_21_21, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_18));
#line 187 "ordering_mode_constraints.m"
    }
#line 187 "ordering_mode_constraints.m"
    {
#line 187 "ordering_mode_constraints.m"
      mercury__list__filter_4_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30, check_hlds__ordering_mode_constraints__V_21_21, check_hlds__ordering_mode_constraints__SCC_11, &check_hlds__ordering_mode_constraints__PredsToInfer_14, &check_hlds__ordering_mode_constraints__PredsToCheck_15);
    }
#line 196 "ordering_mode_constraints.m"
    if ((check_hlds__ordering_mode_constraints__PredsToInfer_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 197 "ordering_mode_constraints.m"
      {
#line 197 "ordering_mode_constraints.m"
      }
#line 196 "ordering_mode_constraints.m"
    else
#line 194 "ordering_mode_constraints.m"
      {
#line 195 "ordering_mode_constraints.m"
        {
#line 195 "ordering_mode_constraints.m"
          mercury__require__sorry_3_p_0((MR_String) "check_hlds.ordering_mode_constraints", (MR_String) "predicate \140check_hlds.ordering_mode_constraints.scc_reordering\'/5", (MR_String) "NYI: mode inference");
#line 195 "ordering_mode_constraints.m"
          return;
        }
#line 194 "ordering_mode_constraints.m"
      }
#line 200 "ordering_mode_constraints.m"
    {
#line 200 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 200 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_26_26, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[1]));
#line 200 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_26_26, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__scc_reordering_5_p_0_3));
#line 200 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 200 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_26_26, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredConstraintsMap_6));
#line 200 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_26_26, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__VarMap_7));
#line 200 "ordering_mode_constraints.m"
    }
#line 200 "ordering_mode_constraints.m"
    {
#line 200 "ordering_mode_constraints.m"
      mercury__list__foldl_4_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_30_30, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, check_hlds__ordering_mode_constraints__V_26_26, check_hlds__ordering_mode_constraints__PredsToCheck_15, ((MR_Box) (check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_18)), &check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_ModuleInfo_19);
    }
#line 200 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_ModuleInfo_19);
#line 182 "ordering_mode_constraints.m"
  }
#line 179 "ordering_mode_constraints.m"
}

#line 98 "ordering_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_lt_constraint_4_p_0(
#line 98 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__A_5,
#line 98 "ordering_mode_constraints.m"
  MR_Integer check_hlds__ordering_mode_constraints__B_6,
#line 98 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8,
#line 98 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_9)
#line 98 "ordering_mode_constraints.m"
{
#line 475 "ordering_mode_constraints.m"
  {
#line 475 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 475 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_10_10;

#line 476 "ordering_mode_constraints.m"
    {
#line 476 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_10_10, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__A_5));
#line 476 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_10_10, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__B_6));
#line 476 "ordering_mode_constraints.m"
    }
#line 476 "ordering_mode_constraints.m"
    {
#line 476 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0(check_hlds__ordering_mode_constraints__V_10_10, check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_9);
    }
#line 475 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 475 "ordering_mode_constraints.m"
  }
#line 98 "ordering_mode_constraints.m"
}

#line 424 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_4(
#line 424 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 424 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1)
#line 424 "ordering_mode_constraints.m"
{
#line 424 "ordering_mode_constraints.m"
  {
#line 424 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 424 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 424 "ordering_mode_constraints.m"
    {
#line 424 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__pred__add_ordering_constraint__424__1_1_p_0(((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
    }
#line 424 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 424 "ordering_mode_constraints.m"
  }
#line 424 "ordering_mode_constraints.m"
}

#line 449 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_3(
#line 449 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 449 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 449 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 449 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 449 "ordering_mode_constraints.m"
{
#line 449 "ordering_mode_constraints.m"
  {
#line 449 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 449 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_Cs_9;

#line 449 "ordering_mode_constraints.m"
    {
#line 449 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__insert_lt_constraints_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), &check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_Cs_9);
    }
#line 449 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv2_STATE_VARIABLE_Cs_9));
#line 449 "ordering_mode_constraints.m"
  }
#line 449 "ordering_mode_constraints.m"
}

#line 444 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_2(
#line 444 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 444 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 444 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 444 "ordering_mode_constraints.m"
{
#line 444 "ordering_mode_constraints.m"
  {
#line 444 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 444 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 444 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__conv1_HeadVar__3_21;

#line 444 "ordering_mode_constraints.m"
    {
#line 444 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__444__1_2_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), &check_hlds__ordering_mode_constraints__conv1_HeadVar__3_21);
    }
#line 444 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 444 "ordering_mode_constraints.m"
      {
#line 444 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv1_HeadVar__3_21));
#line 444 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 444 "ordering_mode_constraints.m"
      }
#line 444 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 444 "ordering_mode_constraints.m"
  }
#line 444 "ordering_mode_constraints.m"
}

#line 442 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_1(
#line 442 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 442 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 442 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_2)
#line 442 "ordering_mode_constraints.m"
{
#line 442 "ordering_mode_constraints.m"
  {
#line 442 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 442 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 442 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__conv0_HeadVar__3_18;

#line 442 "ordering_mode_constraints.m"
    {
#line 442 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = check_hlds__ordering_mode_constraints__IntroducedFrom__func__constraint_transitive_closure__442__1_2_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), &check_hlds__ordering_mode_constraints__conv0_HeadVar__3_18);
    }
#line 442 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 442 "ordering_mode_constraints.m"
      {
#line 442 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__wrapper_arg_2 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_HeadVar__3_18));
#line 442 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 442 "ordering_mode_constraints.m"
      }
#line 442 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 442 "ordering_mode_constraints.m"
  }
#line 442 "ordering_mode_constraints.m"
}

#line 92 "ordering_mode_constraints.m"
MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0(
#line 92 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__Constraint_4,
#line 92 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8,
#line 92 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_9)
#line 92 "ordering_mode_constraints.m"
{
#line 420 "ordering_mode_constraints.m"
  {
#line 420 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 418 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 2)));
#line 418 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 0)));
#line 418 "ordering_mode_constraints.m"
    MR_Integer check_hlds__ordering_mode_constraints__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 1)));

#line 418 "ordering_mode_constraints.m"
    {
#line 418 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__succeeded = mercury__set__member_2_p_0((MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0, ((MR_Box) (check_hlds__ordering_mode_constraints__Constraint_4)), check_hlds__ordering_mode_constraints__V_10_10);
    }
#line 420 "ordering_mode_constraints.m"
    if (check_hlds__ordering_mode_constraints__succeeded)
#line 418 "ordering_mode_constraints.m"
      {
#line 418 "ordering_mode_constraints.m"
        *check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_9 = check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8;
#line 418 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 418 "ordering_mode_constraints.m"
      }
#line 420 "ordering_mode_constraints.m"
    else
#line 421 "ordering_mode_constraints.m"
      {
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_27_27;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_32_56 = (MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_33_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__NewConstraints_6;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_11_11;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_16_16;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_17_17;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__Constraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 2)));
#line 421 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__From_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__Constraint_4, (MR_Integer) 0)));
#line 421 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__To_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__Constraint_4, (MR_Integer) 1)));
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__ComesBefore_34;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__ComesAfter_37;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_40_40;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_43_43;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_46_46;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_47_47;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_48_48;
#line 421 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_49_49;
#line 440 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 0)));
#line 440 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 1)));
#line 449 "ordering_mode_constraints.m"
        MR_Box check_hlds__ordering_mode_constraints__conv3_NewConstraints_6;
#line 427 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_21_21;
#line 427 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_22_22;
#line 426 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_23_23;
#line 426 "ordering_mode_constraints.m"
        MR_Integer check_hlds__ordering_mode_constraints__V_24_24;
#line 426 "ordering_mode_constraints.m"
        MR_Word check_hlds__ordering_mode_constraints__V_25_25;

#line 442 "ordering_mode_constraints.m"
        {
#line 442 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_40_40, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[0]));
#line 442 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_40_40, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_1));
#line 442 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 442 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_40_40, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__From_32));
#line 442 "ordering_mode_constraints.m"
        }
#line 442 "ordering_mode_constraints.m"
        {
#line 442 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__ComesBefore_34 = mercury__set__filter_map_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_32_56, check_hlds__ordering_mode_constraints__TypeCtorInfo_33_57, check_hlds__ordering_mode_constraints__V_40_40, check_hlds__ordering_mode_constraints__Constraints_31);
        }
#line 444 "ordering_mode_constraints.m"
        {
#line 444 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 444 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_7[0]));
#line 444 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_2));
#line 444 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 444 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_43_43, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__To_33));
#line 444 "ordering_mode_constraints.m"
        }
#line 444 "ordering_mode_constraints.m"
        {
#line 444 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__ComesAfter_37 = mercury__set__filter_map_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_32_56, check_hlds__ordering_mode_constraints__TypeCtorInfo_33_57, check_hlds__ordering_mode_constraints__V_43_43, check_hlds__ordering_mode_constraints__Constraints_31);
        }
#line 449 "ordering_mode_constraints.m"
        {
#line 449 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_49_49 = mercury__set__insert_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_33_57, check_hlds__ordering_mode_constraints__ComesAfter_37, ((MR_Box) (check_hlds__ordering_mode_constraints__To_33)));
        }
#line 449 "ordering_mode_constraints.m"
        {
#line 449 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 449 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_46_46, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[1]));
#line 449 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_46_46, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__add_ordering_constraint_3_p_0_3));
#line 449 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 449 "ordering_mode_constraints.m"
          MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_46_46, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_49_49));
#line 449 "ordering_mode_constraints.m"
        }
#line 450 "ordering_mode_constraints.m"
        {
#line 450 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_47_47 = mercury__set__insert_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_33_57, check_hlds__ordering_mode_constraints__ComesBefore_34, ((MR_Box) (check_hlds__ordering_mode_constraints__From_32)));
        }
#line 450 "ordering_mode_constraints.m"
        {
#line 450 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_48_48 = mercury__set__init_0_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_32_56);
        }
#line 449 "ordering_mode_constraints.m"
        {
#line 449 "ordering_mode_constraints.m"
          mercury__set__fold_4_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_33_57, (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[2], check_hlds__ordering_mode_constraints__V_46_46, check_hlds__ordering_mode_constraints__V_47_47, ((MR_Box) (check_hlds__ordering_mode_constraints__V_48_48)), &check_hlds__ordering_mode_constraints__conv3_NewConstraints_6);
        }
#line 449 "ordering_mode_constraints.m"
        check_hlds__ordering_mode_constraints__NewConstraints_6 = ((MR_Word) check_hlds__ordering_mode_constraints__conv3_NewConstraints_6);
#line 7477 "check_hlds.ordering_mode_constraints.c"
        check_hlds__ordering_mode_constraints__TypeCtorInfo_27_27 = (MR_Word) &check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0;
#line 424 "ordering_mode_constraints.m"
        {
#line 424 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__V_11_11 = mercury__set__filter_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_27_27, (MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_2[2], check_hlds__ordering_mode_constraints__NewConstraints_6);
        }
#line 424 "ordering_mode_constraints.m"
        {
#line 424 "ordering_mode_constraints.m"
          check_hlds__ordering_mode_constraints__succeeded = mercury__set__empty_1_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_27_27, check_hlds__ordering_mode_constraints__V_11_11);
        }
#line 421 "ordering_mode_constraints.m"
        if (check_hlds__ordering_mode_constraints__succeeded)
#line 421 "ordering_mode_constraints.m"
          {
#line 427 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 0)));
#line 427 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 1)));
#line 427 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 2)));
#line 427 "ordering_mode_constraints.m"
            {
#line 427 "ordering_mode_constraints.m"
              check_hlds__ordering_mode_constraints__V_16_16 = mercury__set__union_2_f_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_27_27, check_hlds__ordering_mode_constraints__NewConstraints_6, check_hlds__ordering_mode_constraints__V_17_17);
            }
#line 426 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 0)));
#line 426 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 1)));
#line 426 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_0_8, (MR_Integer) 2)));
#line 426 "ordering_mode_constraints.m"
            {
#line 426 "ordering_mode_constraints.m"
              MR_Word base;
#line 426 "ordering_mode_constraints.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 426 "ordering_mode_constraints.m"
              *check_hlds__ordering_mode_constraints__STATE_VARIABLE_OCI_9 = base;
#line 426 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_23_23));
#line 426 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_24_24));
#line 426 "ordering_mode_constraints.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__ordering_mode_constraints__V_16_16));
#line 426 "ordering_mode_constraints.m"
            }
#line 426 "ordering_mode_constraints.m"
            check_hlds__ordering_mode_constraints__succeeded = MR_TRUE;
#line 421 "ordering_mode_constraints.m"
          }
#line 421 "ordering_mode_constraints.m"
      }
#line 420 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 420 "ordering_mode_constraints.m"
  }
#line 92 "ordering_mode_constraints.m"
}

#line 694 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_2(
#line 694 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 694 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 694 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 694 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 694 "ordering_mode_constraints.m"
{
#line 694 "ordering_mode_constraints.m"
  {
#line 694 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 694 "ordering_mode_constraints.m"
    {
#line 694 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__dump_pred_goal_paths_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
#line 694 "ordering_mode_constraints.m"
      return;
    }
#line 694 "ordering_mode_constraints.m"
  }
#line 694 "ordering_mode_constraints.m"
}

#line 692 "ordering_mode_constraints.m"
static MR_bool MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_1(
#line 692 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 692 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1)
#line 692 "ordering_mode_constraints.m"
{
#line 692 "ordering_mode_constraints.m"
  {
#line 692 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 692 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;

#line 692 "ordering_mode_constraints.m"
    {
#line 692 "ordering_mode_constraints.m"
      return check_hlds__ordering_mode_constraints__succeeded = check_hlds__prop_mode_constraints__module_info_pred_status_is_imported_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1));
    }
#line 692 "ordering_mode_constraints.m"
    return check_hlds__ordering_mode_constraints__succeeded;
#line 692 "ordering_mode_constraints.m"
  }
#line 692 "ordering_mode_constraints.m"
}

#line 77 "ordering_mode_constraints.m"
void MR_CALL 
check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0(
#line 77 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__ModuleInfo_5,
#line 77 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredIds0_6)
#line 77 "ordering_mode_constraints.m"
{
#line 690 "ordering_mode_constraints.m"
  {
#line 690 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 690 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__TypeCtorInfo_16_16;
#line 690 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__PredIds_9;
#line 690 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_12_12;
#line 690 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_13_13;
#line 692 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_8_8;
#line 694 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_IO_11;

#line 692 "ordering_mode_constraints.m"
    {
#line 692 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 692 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_5[0]));
#line 692 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_1));
#line 692 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 692 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__ModuleInfo_5));
#line 692 "ordering_mode_constraints.m"
    }
#line 7637 "check_hlds.ordering_mode_constraints.c"
    check_hlds__ordering_mode_constraints__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 692 "ordering_mode_constraints.m"
    {
#line 692 "ordering_mode_constraints.m"
      mercury__list__filter_4_p_0(check_hlds__ordering_mode_constraints__TypeCtorInfo_16_16, check_hlds__ordering_mode_constraints__V_12_12, check_hlds__ordering_mode_constraints__PredIds0_6, &check_hlds__ordering_mode_constraints__V_8_8, &check_hlds__ordering_mode_constraints__PredIds_9);
    }
#line 694 "ordering_mode_constraints.m"
    {
#line 694 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 694 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_13_13, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_6[0]));
#line 694 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_13_13, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__dump_goal_paths_4_p_0_2));
#line 694 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 694 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_13_13, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__ModuleInfo_5));
#line 694 "ordering_mode_constraints.m"
    }
#line 694 "ordering_mode_constraints.m"
    {
#line 694 "ordering_mode_constraints.m"
      mercury__list__foldl_4_p_2(check_hlds__ordering_mode_constraints__TypeCtorInfo_16_16, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__ordering_mode_constraints__V_13_13, check_hlds__ordering_mode_constraints__PredIds_9, ((MR_Box) ((MR_Integer) 0)), &check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_IO_11);
    }
#line 690 "ordering_mode_constraints.m"
  }
#line 77 "ordering_mode_constraints.m"
}

#line 171 "ordering_mode_constraints.m"
static void MR_CALL 
check_hlds__ordering_mode_constraints__mode_reordering_5_p_0_1(
#line 171 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__closure_arg,
#line 171 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_1,
#line 171 "ordering_mode_constraints.m"
  MR_Box check_hlds__ordering_mode_constraints__wrapper_arg_2,
#line 171 "ordering_mode_constraints.m"
  MR_Box * check_hlds__ordering_mode_constraints__wrapper_arg_3)
#line 171 "ordering_mode_constraints.m"
{
#line 171 "ordering_mode_constraints.m"
  {
#line 171 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__closure = check_hlds__ordering_mode_constraints__closure_arg;
#line 171 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_ModuleInfo_19;

#line 171 "ordering_mode_constraints.m"
    {
#line 171 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__scc_reordering_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_1), ((MR_Word) check_hlds__ordering_mode_constraints__wrapper_arg_2), &check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_ModuleInfo_19);
    }
#line 171 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__wrapper_arg_3 = ((MR_Box) (check_hlds__ordering_mode_constraints__conv0_STATE_VARIABLE_ModuleInfo_19));
#line 171 "ordering_mode_constraints.m"
  }
#line 171 "ordering_mode_constraints.m"
}

#line 69 "ordering_mode_constraints.m"
void MR_CALL 
check_hlds__ordering_mode_constraints__mode_reordering_5_p_0(
#line 69 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__PredConstraintsMap_6,
#line 69 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__VarMap_7,
#line 69 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__SCCs_8,
#line 69 "ordering_mode_constraints.m"
  MR_Word check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_10,
#line 69 "ordering_mode_constraints.m"
  MR_Word * check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_11)
#line 69 "ordering_mode_constraints.m"
{
#line 170 "ordering_mode_constraints.m"
  {
#line 170 "ordering_mode_constraints.m"
    MR_bool check_hlds__ordering_mode_constraints__succeeded;
#line 170 "ordering_mode_constraints.m"
    MR_Word check_hlds__ordering_mode_constraints__V_12_12;
#line 171 "ordering_mode_constraints.m"
    MR_Box check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_ModuleInfo_11;

#line 171 "ordering_mode_constraints.m"
    {
#line 171 "ordering_mode_constraints.m"
      check_hlds__ordering_mode_constraints__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 171 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 0) = ((MR_Box) (&check_hlds__ordering_mode_constraints_scalar_common_4[0]));
#line 171 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 1) = ((MR_Box) (check_hlds__ordering_mode_constraints__mode_reordering_5_p_0_1));
#line 171 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 171 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 3) = ((MR_Box) (check_hlds__ordering_mode_constraints__PredConstraintsMap_6));
#line 171 "ordering_mode_constraints.m"
      MR_hl_field(MR_mktag(0), check_hlds__ordering_mode_constraints__V_12_12, 4) = ((MR_Box) (check_hlds__ordering_mode_constraints__VarMap_7));
#line 171 "ordering_mode_constraints.m"
    }
#line 171 "ordering_mode_constraints.m"
    {
#line 171 "ordering_mode_constraints.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__ordering_mode_constraints_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, check_hlds__ordering_mode_constraints__V_12_12, check_hlds__ordering_mode_constraints__SCCs_8, ((MR_Box) (check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_0_10)), &check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_ModuleInfo_11);
    }
#line 171 "ordering_mode_constraints.m"
    *check_hlds__ordering_mode_constraints__STATE_VARIABLE_ModuleInfo_11 = ((MR_Word) check_hlds__ordering_mode_constraints__conv1_STATE_VARIABLE_ModuleInfo_11);
#line 170 "ordering_mode_constraints.m"
  }
#line 69 "ordering_mode_constraints.m"
}

void mercury__check_hlds__ordering_mode_constraints__init(void)
{
}

void mercury__check_hlds__ordering_mode_constraints__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_conjunct_id_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failure_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_analysis_failures_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraint_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_mode_ordering_constraints_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_ordering_constraints_info_0);
	MR_register_type_ctor_info(&check_hlds__ordering_mode_constraints__check_hlds__ordering_mode_constraints__type_ctor_info_prog_var_at_conjuncts_map_0);
}

void mercury__check_hlds__ordering_mode_constraints__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.ordering_mode_constraints. */
