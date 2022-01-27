/*
** Automatically generated from `mode_ordering.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module check_hlds.mode_ordering. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_ordering__init
ENDINIT
*/

#include "check_hlds.mode_ordering.mih"


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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 579 "mode_ordering.m"
struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0_s {
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__MCInfo_16;
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Constraint_21;
#line 579 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont;
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont_env_ptr;
#line 579 "mode_ordering.m"
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__succeeded;
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__V_32_32;
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__V_33_33;
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Y_38;
#line 579 "mode_ordering.m"
};

#line 254 "mode_ordering.m"
struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0_s {
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__ProdVars_158;
#line 254 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__HeadVar__5_126;
#line 254 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont;
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont_env_ptr;
#line 254 "mode_ordering.m"
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded;
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarC_48;
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarD_49;
#line 254 "mode_ordering.m"
};

#line 579 "mode_ordering.m"
struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s {
#line 579 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1;
#line 579 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont;
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr;
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_HeadVar__7_31;
#line 579 "mode_ordering.m"
};

#line 552 "mode_ordering.m"
struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s {
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12;
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13;
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14;
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15;
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16;
#line 557 "mode_ordering.m"
  MR_bool check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded;
#line 557 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19;
#line 557 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21;
#line 563 "mode_ordering.m"
  jmp_buf check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0;
#line 563 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22;
#line 563 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23;
#line 552 "mode_ordering.m"
};

#line 254 "mode_ordering.m"
struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s {
#line 254 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1;
#line 254 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont;
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr;
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_HeadVar__5_126;
#line 254 "mode_ordering.m"
};

#line 302 "mode_ordering.m"
struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s {
#line 302 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1;
#line 302 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont;
#line 302 "mode_ordering.m"
  void * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr;
#line 302 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3;
#line 302 "mode_ordering.m"
};


#line 242 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0;

#line 245 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 248 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 251 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

#line 254 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 257 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 260 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 263 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 266 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 269 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 272 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0;

#line 275 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 278 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0;

#line 281 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

#line 284 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 287 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 290 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 293 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0;

#line 296 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 299 "check_hlds.mode_ordering.c"
static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0[6];

#line 302 "check_hlds.mode_ordering.c"
static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0[6];

#line 305 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0;

#line 308 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[1];

#line 311 "check_hlds.mode_ordering.c"
static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[1];

#line 314 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0[1];

#line 317 "check_hlds.mode_ordering.c"
static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0[1];

#line 320 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 323 "check_hlds.mode_ordering.c"
static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0[2];

#line 326 "check_hlds.mode_ordering.c"
static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0[2];

#line 329 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0;

#line 332 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[1];

#line 335 "check_hlds.mode_ordering.c"
static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[1];

#line 338 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0[1];

#line 341 "check_hlds.mode_ordering.c"
static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0[1];

#line 344 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
#line 347 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 349 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 352 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
#line 355 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 357 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 359 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 362 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
#line 365 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 367 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 370 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
#line 373 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 375 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 377 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 380 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
#line 383 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 385 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 388 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
#line 391 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 393 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 395 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 108 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
#line 108 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);

#line 102 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2(
#line 102 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 102 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 102 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 102 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 91 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
#line 91 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 91 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 91 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 91 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 79 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
#line 79 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);

#line 579 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_1(
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 579 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0(
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_13,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCInfo_16,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVars_19,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint_21,
#line 579 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__7_31,
#line 579 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 471 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_2(
#line 471 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 471 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 471 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 463 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_1(
#line 463 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 463 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 463 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 460 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0(
#line 460 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdMap_17,
#line 460 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
#line 460 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__3_72,
#line 460 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_73,
#line 460 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__5_74);

#line 475 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__475__1_4_f_0(
#line 475 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
#line 475 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Key0_27,
#line 475 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_92,
#line 475 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_93);

#line 467 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__467__1_4_f_0(
#line 467 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdMap_17,
#line 467 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Key0_27,
#line 467 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_81,
#line 467 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_82);

#line 453 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0_1(
#line 453 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 453 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 453 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 452 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0(
#line 452 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_57,
#line 452 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_58,
#line 452 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_59);

#line 453 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_3_f_0(
#line 453 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_57,
#line 453 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_62,
#line 453 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_63);

#line 446 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1(
#line 446 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 446 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 446 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 445 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(
#line 445 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_44,
#line 445 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_45,
#line 445 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_46);

#line 446 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__446__1_3_f_0(
#line 446 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_44,
#line 446 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_49,
#line 446 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_50);

#line 431 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__431__1_3_f_0(
#line 431 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
#line 431 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_36,
#line 431 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_37);

#line 254 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_1(
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 254 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0(
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__VarA_37,
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__InstGraph_42,
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__VarB_43,
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_158,
#line 254 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__5_126,
#line 254 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 154 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
#line 154 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
#line 154 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
#line 154 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_3);

#line 154 "mode_ordering.m"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(
#line 154 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 154 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2);

#line 579 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 579 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
#line 579 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 579 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 579 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 563 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
#line 563 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 563 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
#line 563 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 563 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
#line 563 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 552 "mode_ordering.m"
static MR_bool MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0(
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_12,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_13,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCInfo_16,
#line 552 "mode_ordering.m"
  MR_Integer * check_hlds__mode_ordering__ProcId_17,
#line 552 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ConsumingVars_18);

#line 519 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_7_p_0(
#line 519 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 519 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_9,
#line 519 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_10,
#line 519 "mode_ordering.m"
  MR_Integer * check_hlds__mode_ordering__ProcId_11,
#line 519 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ConsumingVars_12,
#line 519 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26,
#line 519 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_27);

#line 488 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(
#line 488 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ProdVars_6,
#line 488 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13,
#line 488 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14,
#line 488 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15,
#line 488 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_16);

#line 460 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
#line 460 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 460 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 460 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 460 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 452 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
#line 452 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 452 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 452 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 452 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 445 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
#line 445 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 445 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 445 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 445 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 431 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
#line 431 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 431 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 431 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 427 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
#line 427 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
#line 427 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goals0_5,
#line 427 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__Goals_6);

#line 418 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
#line 418 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GI_4,
#line 418 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
#line 418 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7);

#line 399 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
#line 399 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goal_4,
#line 399 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12,
#line 399 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13);

#line 397 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
#line 397 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 397 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 397 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 397 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 393 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
#line 393 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goals_4,
#line 393 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
#line 393 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7);

#line 375 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
#line 375 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GI_4,
#line 375 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10,
#line 375 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11);

#line 369 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
#line 369 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 369 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7,
#line 369 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8);

#line 367 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
#line 367 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 367 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 367 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 367 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 361 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
#line 361 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 361 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2,
#line 361 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3);

#line 254 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 254 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
#line 254 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 254 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 254 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 302 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
#line 302 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 302 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
#line 302 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 302 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 302 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 302 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 314 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3(
#line 314 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 314 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 314 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 314 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 314 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

#line 196 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
#line 196 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 196 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 196 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 196 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 196 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

#line 208 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
#line 208 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 208 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 208 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 208 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 208 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

#line 187 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
#line 187 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GoalExpr0_7,
#line 187 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__GoalExpr_8,
#line 187 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81,
#line 187 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82,
#line 187 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83,
#line 187 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);

#line 179 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_4_p_0(
#line 179 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goal0_5,
#line 179 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__Goal_6,
#line 179 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12,
#line 179 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_13);

#line 171 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
#line 171 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
#line 171 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8);

#line 164 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
#line 164 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GoalId_4,
#line 164 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
#line 164 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8);

#line 120 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 120 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__ProcId_14,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22,
#line 120 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23);

#line 108 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModeDeclConstraint_14,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
#line 108 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);

#line 79 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_pred_5_p_0(
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering___SCC_7,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
#line 79 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);

#line 77 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
#line 77 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 77 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 77 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 77 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 72 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
#line 72 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_5,
#line 72 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__SCC_6,
#line 72 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8,
#line 72 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9);

#line 69 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
#line 69 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 69 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 69 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 69 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_2[13][3];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_3[5][7];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_4[3][8];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_5[2][6];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_6[1][9];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_7[1][10];

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_8[2][11];




static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[3])),
    ((MR_Box) (&hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[6]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[1])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_disj_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[1])),
    ((MR_Box) (check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[3])),
    ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_3[5][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_4[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_ordering_scalar_common_8[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0)),
    ((MR_Box) (&check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1414 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0
  }
};

#line 1423 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1431 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1439 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1448 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1456 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1464 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1472 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1481 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1490 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1499 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1507 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1515 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1523 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1532 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1540 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1548 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1557 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0
  }
};

#line 1566 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1575 "check_hlds.mode_ordering.c"
static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1585 "check_hlds.mode_ordering.c"
static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0[6] = {
  (MR_String) "moi_inst_graph",
  (MR_String) "moi_prodvars_map",
  (MR_String) "moi_lambda_nesting",
  (MR_String) "moi_module_info",
  (MR_String) "moi_pred_constraint_map",
  (MR_String) "moi_goal_path_map"
};

#line 1595 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0 = {
  (MR_String) "mode_ordering_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0,
  NULL,
  NULL
};

#line 1610 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0
};

#line 1615 "check_hlds.mode_ordering.c"
static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0
  }
};

#line 1624 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0
};

#line 1629 "check_hlds.mode_ordering.c"
static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0[1] = {
  (MR_Integer) 0
};

#line 1634 "check_hlds.mode_ordering.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "mode_ordering_info",
  {     check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0 },
  {     check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0
};

#line 1651 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1659 "check_hlds.mode_ordering.c"
static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0
};

#line 1665 "check_hlds.mode_ordering.c"
static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0[2] = {
  (MR_String) "pci_mode_constraint",
  (MR_String) "pci_mci"
};

#line 1671 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0 = {
  (MR_String) "pci",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0,
  check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0,
  NULL,
  NULL
};

#line 1686 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0
};

#line 1691 "check_hlds.mode_ordering.c"
static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0
  }
};

#line 1700 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0
};

#line 1705 "check_hlds.mode_ordering.c"
static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0[1] = {
  (MR_Integer) 0
};

#line 1710 "check_hlds.mode_ordering.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "pred_constraint_info",
  {     check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0 },
  {     check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0
};

#line 1727 "check_hlds.mode_ordering.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001)),
  (MR_String) "check_hlds.mode_ordering",
  (MR_String) "pred_constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1744 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
#line 1747 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 1749 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 1751 "check_hlds.mode_ordering.c"
{
#line 1753 "check_hlds.mode_ordering.c"
  {
#line 1755 "check_hlds.mode_ordering.c"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 1758 "check_hlds.mode_ordering.c"
    {
#line 1760 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 1763 "check_hlds.mode_ordering.c"
    return check_hlds__mode_ordering__succeeded;
#line 1765 "check_hlds.mode_ordering.c"
  }
#line 1767 "check_hlds.mode_ordering.c"
}

#line 1770 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
#line 1773 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 1775 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 1777 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 1779 "check_hlds.mode_ordering.c"
{
#line 1781 "check_hlds.mode_ordering.c"
  {
#line 1783 "check_hlds.mode_ordering.c"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

#line 1786 "check_hlds.mode_ordering.c"
    {
#line 1788 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 1791 "check_hlds.mode_ordering.c"
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
#line 1793 "check_hlds.mode_ordering.c"
  }
#line 1795 "check_hlds.mode_ordering.c"
}

#line 1798 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
#line 1801 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 1803 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 1805 "check_hlds.mode_ordering.c"
{
#line 1807 "check_hlds.mode_ordering.c"
  {
#line 1809 "check_hlds.mode_ordering.c"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 1812 "check_hlds.mode_ordering.c"
    {
#line 1814 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 1817 "check_hlds.mode_ordering.c"
    return check_hlds__mode_ordering__succeeded;
#line 1819 "check_hlds.mode_ordering.c"
  }
#line 1821 "check_hlds.mode_ordering.c"
}

#line 1824 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
#line 1827 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 1829 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 1831 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 1833 "check_hlds.mode_ordering.c"
{
#line 1835 "check_hlds.mode_ordering.c"
  {
#line 1837 "check_hlds.mode_ordering.c"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

#line 1840 "check_hlds.mode_ordering.c"
    {
#line 1842 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 1845 "check_hlds.mode_ordering.c"
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
#line 1847 "check_hlds.mode_ordering.c"
  }
#line 1849 "check_hlds.mode_ordering.c"
}

#line 1852 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
#line 1855 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 1857 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 1859 "check_hlds.mode_ordering.c"
{
#line 1861 "check_hlds.mode_ordering.c"
  {
#line 1863 "check_hlds.mode_ordering.c"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 1866 "check_hlds.mode_ordering.c"
    {
#line 1868 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 1871 "check_hlds.mode_ordering.c"
    return check_hlds__mode_ordering__succeeded;
#line 1873 "check_hlds.mode_ordering.c"
  }
#line 1875 "check_hlds.mode_ordering.c"
}

#line 1878 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
#line 1881 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 1883 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 1885 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 1887 "check_hlds.mode_ordering.c"
{
#line 1889 "check_hlds.mode_ordering.c"
  {
#line 1891 "check_hlds.mode_ordering.c"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

#line 1894 "check_hlds.mode_ordering.c"
    {
#line 1896 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 1899 "check_hlds.mode_ordering.c"
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
#line 1901 "check_hlds.mode_ordering.c"
  }
#line 1903 "check_hlds.mode_ordering.c"
}

#line 108 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
#line 108 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18)
#line 108 "mode_ordering.m"
{
#line 114 "mode_ordering.m"
  {
#line 114 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 114 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__ProcId_16;

#line 511 "mode_ordering.m"
    {
#line 511 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__builtin__semidet_succeed_0_p_0();
    }
#line 514 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 513 "mode_ordering.m"
      {
#line 513 "mode_ordering.m"
        {
#line 513 "mode_ordering.m"
          mercury__require__sorry_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.pred_info_create_proc_info_for_mode_decl_constraint\'/4", (MR_String) "NYI");
#line 513 "mode_ordering.m"
          return;
        }
#line 513 "mode_ordering.m"
      }
#line 514 "mode_ordering.m"
    else
#line 516 "mode_ordering.m"
      {
#line 516 "mode_ordering.m"
        check_hlds__mode_ordering__ProcId_16 = hlds__hlds_pred__initial_proc_id_0_f_0();
      }
#line 117 "mode_ordering.m"
    {
#line 117 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(check_hlds__mode_ordering__ModuleInfo_9, check_hlds__mode_ordering__PredConstraintMap_10, check_hlds__mode_ordering__PredId_11, check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__ProcId_16, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);
#line 117 "mode_ordering.m"
      return;
    }
#line 114 "mode_ordering.m"
  }
#line 108 "mode_ordering.m"
}

#line 102 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2(
#line 102 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 102 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 102 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 102 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 102 "mode_ordering.m"
{
#line 102 "mode_ordering.m"
  {
#line 102 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 102 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23;

#line 102 "mode_ordering.m"
    {
#line 102 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23);
    }
#line 102 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23));
#line 102 "mode_ordering.m"
  }
#line 102 "mode_ordering.m"
}

#line 91 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
#line 91 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 91 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 91 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 91 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 91 "mode_ordering.m"
{
#line 91 "mode_ordering.m"
  {
#line 91 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 91 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18;

#line 91 "mode_ordering.m"
    {
#line 91 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18);
    }
#line 91 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18));
#line 91 "mode_ordering.m"
  }
#line 91 "mode_ordering.m"
}

#line 79 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
#line 79 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18)
#line 79 "mode_ordering.m"
{
#line 82 "mode_ordering.m"
  {
#line 82 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 82 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 82 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_23_23 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[2];
#line 82 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__RequestedProcsMap0_10;
#line 82 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__PredInfo0_11;
#line 82 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ModeConstraint0_12;
#line 82 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MCI_13;
#line 82 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__PredInfo_15;
#line 82 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_38_38;
#line 603 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_V_38_38;

#line 84 "mode_ordering.m"
    {
#line 84 "mode_ordering.m"
      check_hlds__mode_ordering__RequestedProcsMap0_10 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_22_22, check_hlds__mode_ordering__TypeInfo_23_23);
    }
#line 86 "mode_ordering.m"
    {
#line 86 "mode_ordering.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__PredId_8, &check_hlds__mode_ordering__PredInfo0_11);
    }
#line 603 "mode_ordering.m"
    {
#line 603 "mode_ordering.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0, check_hlds__mode_ordering__PredConstraintMap_6, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv0_V_38_38);
    }
#line 603 "mode_ordering.m"
    check_hlds__mode_ordering__V_38_38 = ((MR_Word) check_hlds__mode_ordering__conv0_V_38_38);
#line 603 "mode_ordering.m"
    check_hlds__mode_ordering__ModeConstraint0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_38_38, (MR_Integer) 0)));
#line 603 "mode_ordering.m"
    check_hlds__mode_ordering__MCI_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_38_38, (MR_Integer) 1)));
#line 88 "mode_ordering.m"
    {
#line 88 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__mode_ordering__PredInfo0_11);
    }
#line 99 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 94 "mode_ordering.m"
      {
#line 94 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__RequestedProcs_14;
#line 89 "mode_ordering.m"
        MR_Box check_hlds__mode_ordering__conv1_RequestedProcs_14;

#line 89 "mode_ordering.m"
        {
#line 89 "mode_ordering.m"
          check_hlds__mode_ordering__succeeded = mercury__map__search_3_p_0(check_hlds__mode_ordering__TypeCtorInfo_22_22, check_hlds__mode_ordering__TypeInfo_23_23, check_hlds__mode_ordering__RequestedProcsMap0_10, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv1_RequestedProcs_14);
        }
#line 89 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 89 "mode_ordering.m"
          {
#line 89 "mode_ordering.m"
            check_hlds__mode_ordering__RequestedProcs_14 = ((MR_Word) check_hlds__mode_ordering__conv1_RequestedProcs_14);
#line 89 "mode_ordering.m"
            check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 89 "mode_ordering.m"
          }
#line 94 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 90 "mode_ordering.m"
          {
#line 90 "mode_ordering.m"
            MR_Word check_hlds__mode_ordering__V_19_19;
#line 90 "mode_ordering.m"
            MR_Box check_hlds__mode_ordering__conv3_PredInfo_15;

#line 91 "mode_ordering.m"
            {
#line 91 "mode_ordering.m"
              check_hlds__mode_ordering__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 91 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_8[0]));
#line 91 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1));
#line 91 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 91 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 3) = ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17));
#line 91 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_6));
#line 91 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 5) = ((MR_Box) (check_hlds__mode_ordering__PredId_8));
#line 91 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 6) = ((MR_Box) (check_hlds__mode_ordering__MCI_13));
#line 91 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 7) = ((MR_Box) (check_hlds__mode_ordering__ModeConstraint0_12));
#line 91 "mode_ordering.m"
            }
#line 90 "mode_ordering.m"
            {
#line 90 "mode_ordering.m"
              mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__mode_ordering__V_19_19, check_hlds__mode_ordering__RequestedProcs_14, ((MR_Box) (check_hlds__mode_ordering__PredInfo0_11)), &check_hlds__mode_ordering__conv3_PredInfo_15);
            }
#line 90 "mode_ordering.m"
            check_hlds__mode_ordering__PredInfo_15 = ((MR_Word) check_hlds__mode_ordering__conv3_PredInfo_15);
#line 90 "mode_ordering.m"
          }
#line 94 "mode_ordering.m"
        else
#line 97 "mode_ordering.m"
          check_hlds__mode_ordering__PredInfo_15 = check_hlds__mode_ordering__PredInfo0_11;
#line 94 "mode_ordering.m"
      }
#line 99 "mode_ordering.m"
    else
#line 100 "mode_ordering.m"
      {
#line 100 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__ProcIds_16;
#line 100 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_20_20;
#line 101 "mode_ordering.m"
        MR_Box check_hlds__mode_ordering__conv5_PredInfo_15;

#line 100 "mode_ordering.m"
        {
#line 100 "mode_ordering.m"
          check_hlds__mode_ordering__ProcIds_16 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__mode_ordering__PredInfo0_11);
        }
#line 102 "mode_ordering.m"
        {
#line 102 "mode_ordering.m"
          check_hlds__mode_ordering__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 102 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_8[1]));
#line 102 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2));
#line 102 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 102 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 3) = ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17));
#line 102 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_6));
#line 102 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 5) = ((MR_Box) (check_hlds__mode_ordering__PredId_8));
#line 102 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 6) = ((MR_Box) (check_hlds__mode_ordering__MCI_13));
#line 102 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 7) = ((MR_Box) (check_hlds__mode_ordering__ModeConstraint0_12));
#line 102 "mode_ordering.m"
        }
#line 101 "mode_ordering.m"
        {
#line 101 "mode_ordering.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__mode_ordering__V_20_20, check_hlds__mode_ordering__ProcIds_16, ((MR_Box) (check_hlds__mode_ordering__PredInfo0_11)), &check_hlds__mode_ordering__conv5_PredInfo_15);
        }
#line 101 "mode_ordering.m"
        check_hlds__mode_ordering__PredInfo_15 = ((MR_Word) check_hlds__mode_ordering__conv5_PredInfo_15);
#line 100 "mode_ordering.m"
      }
#line 106 "mode_ordering.m"
    {
#line 106 "mode_ordering.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__mode_ordering__PredId_8, check_hlds__mode_ordering__PredInfo_15, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);
#line 106 "mode_ordering.m"
      return;
    }
#line 82 "mode_ordering.m"
  }
#line 79 "mode_ordering.m"
}

#line 579 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_1(
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 579 "mode_ordering.m"
{
#line 579 "mode_ordering.m"
  {
#line 579 "mode_ordering.m"
    struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 583 "mode_ordering.m"
    {
#line 583 "mode_ordering.m"
      MR_Word base;
#line 583 "mode_ordering.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 583 "mode_ordering.m"
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__V_33_33 = base;
#line 583 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Y_38));
#line 583 "mode_ordering.m"
    }
#line 583 "mode_ordering.m"
    {
#line 583 "mode_ordering.m"
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__V_32_32 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__MCInfo_16, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__V_33_33);
    }
#line 583 "mode_ordering.m"
    {
#line 583 "mode_ordering.m"
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Constraint_21, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__V_32_32);
    }
#line 583 "mode_ordering.m"
    if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__succeeded)
#line 583 "mode_ordering.m"
      {
#line 583 "mode_ordering.m"
        ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont_env_ptr);
#line 583 "mode_ordering.m"
        return;
      }
#line 579 "mode_ordering.m"
  }
#line 579 "mode_ordering.m"
}

#line 579 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0(
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_13,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCInfo_16,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVars_19,
#line 579 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint_21,
#line 579 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__7_31,
#line 579 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 579 "mode_ordering.m"
{
#line 579 "mode_ordering.m"
  {
#line 579 "mode_ordering.m"
    struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0_s check_hlds__mode_ordering__env;

#line 579 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__MCInfo_16 = check_hlds__mode_ordering__MCInfo_16;
#line 579 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Constraint_21 = check_hlds__mode_ordering__Constraint_21;
#line 579 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont = check_hlds__mode_ordering__cont;
#line 579 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 581 "mode_ordering.m"
    {
#line 581 "mode_ordering.m"
      hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(check_hlds__mode_ordering__CallerInstGraph_14, check_hlds__mode_ordering__CalleeInstGraph_15, check_hlds__mode_ordering__Args_13, check_hlds__mode_ordering__HeadVars_19, check_hlds__mode_ordering__HeadVar__7_31, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_env_0__Y_38, check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0_1, &check_hlds__mode_ordering__env);
    }
#line 579 "mode_ordering.m"
  }
#line 579 "mode_ordering.m"
}

#line 471 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_2(
#line 471 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 471 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 471 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 471 "mode_ordering.m"
{
#line 471 "mode_ordering.m"
  {
#line 471 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 471 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 471 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv2_HeadVar__5_94;

#line 471 "mode_ordering.m"
    {
#line 471 "mode_ordering.m"
      check_hlds__mode_ordering__conv2_HeadVar__5_94 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__475__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 471 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv2_HeadVar__5_94));
#line 471 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 471 "mode_ordering.m"
  }
#line 471 "mode_ordering.m"
}

#line 463 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_1(
#line 463 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 463 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 463 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 463 "mode_ordering.m"
{
#line 463 "mode_ordering.m"
  {
#line 463 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 463 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 463 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__5_83;

#line 463 "mode_ordering.m"
    {
#line 463 "mode_ordering.m"
      check_hlds__mode_ordering__conv0_HeadVar__5_83 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__467__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 463 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__5_83));
#line 463 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 463 "mode_ordering.m"
  }
#line 463 "mode_ordering.m"
}

#line 460 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0(
#line 460 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdMap_17,
#line 460 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
#line 460 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__3_72,
#line 460 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_73,
#line 460 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__5_74)
#line 460 "mode_ordering.m"
{
#line 460 "mode_ordering.m"
  {
#line 460 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__6_75;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_149_149;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_150_150;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_154_154;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Key0_27;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R_76_76;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R_77_77;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_78_78;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_86_86;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_87_87;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_89_89;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_97_97;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_98_98;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GI_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__4_73, (MR_Integer) 1)));
#line 461 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__4_73, (MR_Integer) 0)));
#line 463 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77;
#line 471 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv3_HeadVar__6_75;

#line 462 "mode_ordering.m"
    {
#line 462 "mode_ordering.m"
      mercury__digraph__add_vertex_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_72)), &check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__HeadVar__5_74, &check_hlds__mode_ordering__STATE_VARIABLE_R_76_76);
    }
#line 2445 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeInfo_149_149 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[3];
#line 2447 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeInfo_150_150 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[4];
#line 463 "mode_ordering.m"
    {
#line 463 "mode_ordering.m"
      check_hlds__mode_ordering__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 463 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
#line 463 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_1));
#line 463 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 463 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 3) = ((MR_Box) (check_hlds__mode_ordering__ProdMap_17));
#line 463 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 4) = ((MR_Box) (check_hlds__mode_ordering__Key0_27));
#line 463 "mode_ordering.m"
    }
#line 2465 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 470 "mode_ordering.m"
    {
#line 470 "mode_ordering.m"
      check_hlds__mode_ordering__V_87_87 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_120);
    }
#line 470 "mode_ordering.m"
    {
#line 470 "mode_ordering.m"
      check_hlds__mode_ordering__V_86_86 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_154_154, check_hlds__mode_ordering__V_87_87);
    }
#line 463 "mode_ordering.m"
    {
#line 463 "mode_ordering.m"
      check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeInfo_149_149, check_hlds__mode_ordering__TypeInfo_150_150, check_hlds__mode_ordering__V_78_78, check_hlds__mode_ordering__V_86_86, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_R_76_76)));
    }
#line 463 "mode_ordering.m"
    check_hlds__mode_ordering__STATE_VARIABLE_R_77_77 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77);
#line 471 "mode_ordering.m"
    {
#line 471 "mode_ordering.m"
      check_hlds__mode_ordering__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 471 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
#line 471 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0_2));
#line 471 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 471 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 3) = ((MR_Box) (check_hlds__mode_ordering__MakeVisMap_22));
#line 471 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 4) = ((MR_Box) (check_hlds__mode_ordering__Key0_27));
#line 471 "mode_ordering.m"
    }
#line 478 "mode_ordering.m"
    {
#line 478 "mode_ordering.m"
      check_hlds__mode_ordering__V_98_98 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_120);
    }
#line 478 "mode_ordering.m"
    {
#line 478 "mode_ordering.m"
      check_hlds__mode_ordering__V_97_97 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_154_154, check_hlds__mode_ordering__V_98_98);
    }
#line 471 "mode_ordering.m"
    {
#line 471 "mode_ordering.m"
      check_hlds__mode_ordering__conv3_HeadVar__6_75 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeInfo_149_149, check_hlds__mode_ordering__TypeInfo_150_150, check_hlds__mode_ordering__V_89_89, check_hlds__mode_ordering__V_97_97, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_R_77_77)));
    }
#line 471 "mode_ordering.m"
    check_hlds__mode_ordering__HeadVar__6_75 = ((MR_Word) check_hlds__mode_ordering__conv3_HeadVar__6_75);
#line 460 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__6_75;
#line 460 "mode_ordering.m"
  }
#line 460 "mode_ordering.m"
}

#line 475 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__475__1_4_f_0(
#line 475 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
#line 475 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Key0_27,
#line 475 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_92,
#line 475 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_93)
#line 475 "mode_ordering.m"
{
#line 475 "mode_ordering.m"
  {
#line 475 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 475 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__5_94;
#line 475 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__Index2_32;
#line 472 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_Index2_32;

#line 472 "mode_ordering.m"
    {
#line 472 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__map__search_2_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__MakeVisMap_22, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_92)), &check_hlds__mode_ordering__conv0_Index2_32);
    }
#line 472 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 472 "mode_ordering.m"
      {
#line 472 "mode_ordering.m"
        check_hlds__mode_ordering__Index2_32 = ((MR_Integer) check_hlds__mode_ordering__conv0_Index2_32);
#line 472 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 472 "mode_ordering.m"
      }
#line 475 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 473 "mode_ordering.m"
      {
#line 473 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_157_157 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 473 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__Key2_33;
#line 473 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95;

#line 473 "mode_ordering.m"
        {
#line 473 "mode_ordering.m"
          mercury__digraph__add_vertex_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_157_157, ((MR_Box) (check_hlds__mode_ordering__Index2_32)), &check_hlds__mode_ordering__Key2_33, check_hlds__mode_ordering__HeadVar__4_93, &check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95);
        }
#line 474 "mode_ordering.m"
        {
#line 474 "mode_ordering.m"
          mercury__digraph__add_edge_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_157_157, check_hlds__mode_ordering__Key2_33, check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95, &check_hlds__mode_ordering__HeadVar__5_94);
        }
#line 473 "mode_ordering.m"
      }
#line 475 "mode_ordering.m"
    else
#line 475 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__5_94 = check_hlds__mode_ordering__HeadVar__4_93;
#line 475 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__5_94;
#line 475 "mode_ordering.m"
  }
#line 475 "mode_ordering.m"
}

#line 467 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__467__1_4_f_0(
#line 467 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdMap_17,
#line 467 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Key0_27,
#line 467 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_81,
#line 467 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_82)
#line 467 "mode_ordering.m"
{
#line 467 "mode_ordering.m"
  {
#line 467 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 467 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__5_83;
#line 467 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__Index1_29;
#line 464 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_Index1_29;

#line 464 "mode_ordering.m"
    {
#line 464 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__map__search_2_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__ProdMap_17, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_81)), &check_hlds__mode_ordering__conv0_Index1_29);
    }
#line 464 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 464 "mode_ordering.m"
      {
#line 464 "mode_ordering.m"
        check_hlds__mode_ordering__Index1_29 = ((MR_Integer) check_hlds__mode_ordering__conv0_Index1_29);
#line 464 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 464 "mode_ordering.m"
      }
#line 467 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 465 "mode_ordering.m"
      {
#line 465 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_153_153 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 465 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__Key1_30;
#line 465 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84;

#line 465 "mode_ordering.m"
        {
#line 465 "mode_ordering.m"
          mercury__digraph__add_vertex_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_153_153, ((MR_Box) (check_hlds__mode_ordering__Index1_29)), &check_hlds__mode_ordering__Key1_30, check_hlds__mode_ordering__HeadVar__4_82, &check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84);
        }
#line 466 "mode_ordering.m"
        {
#line 466 "mode_ordering.m"
          mercury__digraph__add_edge_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_153_153, check_hlds__mode_ordering__Key1_30, check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84, &check_hlds__mode_ordering__HeadVar__5_83);
        }
#line 465 "mode_ordering.m"
      }
#line 467 "mode_ordering.m"
    else
#line 467 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__5_83 = check_hlds__mode_ordering__HeadVar__4_82;
#line 467 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__5_83;
#line 467 "mode_ordering.m"
  }
#line 467 "mode_ordering.m"
}

#line 453 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0_1(
#line 453 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 453 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 453 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 453 "mode_ordering.m"
{
#line 453 "mode_ordering.m"
  {
#line 453 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 453 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 453 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__4_64;

#line 453 "mode_ordering.m"
    {
#line 453 "mode_ordering.m"
      check_hlds__mode_ordering__conv0_HeadVar__4_64 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 453 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__4_64));
#line 453 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 453 "mode_ordering.m"
  }
#line 453 "mode_ordering.m"
}

#line 452 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0(
#line 452 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_57,
#line 452 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_58,
#line 452 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_59)
#line 452 "mode_ordering.m"
{
#line 452 "mode_ordering.m"
  {
#line 452 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 452 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_60;
#line 452 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_61_61;
#line 452 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_65_65;
#line 452 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_66_66;
#line 452 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_67_67;
#line 455 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_126_126;
#line 453 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_HeadVar__4_60;

#line 453 "mode_ordering.m"
    {
#line 453 "mode_ordering.m"
      check_hlds__mode_ordering__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
#line 453 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0_1));
#line 453 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 3) = ((MR_Box) (check_hlds__mode_ordering__HeadVar__1_57));
#line 453 "mode_ordering.m"
    }
#line 455 "mode_ordering.m"
    check_hlds__mode_ordering__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_58, (MR_Integer) 0)));
#line 455 "mode_ordering.m"
    check_hlds__mode_ordering__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_58, (MR_Integer) 1)));
#line 455 "mode_ordering.m"
    {
#line 455 "mode_ordering.m"
      check_hlds__mode_ordering__V_66_66 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__V_67_67);
    }
#line 455 "mode_ordering.m"
    {
#line 455 "mode_ordering.m"
      check_hlds__mode_ordering__V_65_65 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__V_66_66);
    }
#line 453 "mode_ordering.m"
    {
#line 453 "mode_ordering.m"
      check_hlds__mode_ordering__conv1_HeadVar__4_60 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1], check_hlds__mode_ordering__V_61_61, check_hlds__mode_ordering__V_65_65, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_59)));
    }
#line 453 "mode_ordering.m"
    check_hlds__mode_ordering__HeadVar__4_60 = ((MR_Word) check_hlds__mode_ordering__conv1_HeadVar__4_60);
#line 452 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_60;
#line 452 "mode_ordering.m"
  }
#line 452 "mode_ordering.m"
}

#line 453 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__453__1_3_f_0(
#line 453 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_57,
#line 453 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_62,
#line 453 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_63)
#line 453 "mode_ordering.m"
{
#line 453 "mode_ordering.m"
  {
#line 453 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 453 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_64;

#line 453 "mode_ordering.m"
    {
#line 453 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__4_64 = mercury__map__set_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__HeadVar__3_63, ((MR_Box) (check_hlds__mode_ordering__HeadVar__2_62)), ((MR_Box) (check_hlds__mode_ordering__HeadVar__1_57)));
    }
#line 453 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_64;
#line 453 "mode_ordering.m"
  }
#line 453 "mode_ordering.m"
}

#line 446 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1(
#line 446 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 446 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 446 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 446 "mode_ordering.m"
{
#line 446 "mode_ordering.m"
  {
#line 446 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 446 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 446 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__4_51;

#line 446 "mode_ordering.m"
    {
#line 446 "mode_ordering.m"
      check_hlds__mode_ordering__conv0_HeadVar__4_51 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__446__1_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 446 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__4_51));
#line 446 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 446 "mode_ordering.m"
  }
#line 446 "mode_ordering.m"
}

#line 445 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(
#line 445 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_44,
#line 445 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_45,
#line 445 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_46)
#line 445 "mode_ordering.m"
{
#line 445 "mode_ordering.m"
  {
#line 445 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 445 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_47;
#line 445 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_48_48;
#line 445 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_52_52;
#line 445 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_53_53;
#line 445 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_54_54;
#line 447 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_125_125;
#line 446 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_HeadVar__4_47;

#line 446 "mode_ordering.m"
    {
#line 446 "mode_ordering.m"
      check_hlds__mode_ordering__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 446 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
#line 446 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0_1));
#line 446 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 446 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 3) = ((MR_Box) (check_hlds__mode_ordering__HeadVar__1_44));
#line 446 "mode_ordering.m"
    }
#line 447 "mode_ordering.m"
    check_hlds__mode_ordering__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_45, (MR_Integer) 0)));
#line 447 "mode_ordering.m"
    check_hlds__mode_ordering__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_45, (MR_Integer) 1)));
#line 447 "mode_ordering.m"
    {
#line 447 "mode_ordering.m"
      check_hlds__mode_ordering__V_53_53 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__V_54_54);
    }
#line 447 "mode_ordering.m"
    {
#line 447 "mode_ordering.m"
      check_hlds__mode_ordering__V_52_52 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__V_53_53);
    }
#line 446 "mode_ordering.m"
    {
#line 446 "mode_ordering.m"
      check_hlds__mode_ordering__conv1_HeadVar__4_47 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1], check_hlds__mode_ordering__V_48_48, check_hlds__mode_ordering__V_52_52, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_46)));
    }
#line 446 "mode_ordering.m"
    check_hlds__mode_ordering__HeadVar__4_47 = ((MR_Word) check_hlds__mode_ordering__conv1_HeadVar__4_47);
#line 445 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_47;
#line 445 "mode_ordering.m"
  }
#line 445 "mode_ordering.m"
}

#line 446 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__446__1_3_f_0(
#line 446 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_44,
#line 446 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_49,
#line 446 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_50)
#line 446 "mode_ordering.m"
{
#line 446 "mode_ordering.m"
  {
#line 446 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 446 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_51;

#line 446 "mode_ordering.m"
    {
#line 446 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__4_51 = mercury__map__det_insert_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__HeadVar__3_50, ((MR_Box) (check_hlds__mode_ordering__HeadVar__2_49)), ((MR_Box) (check_hlds__mode_ordering__HeadVar__1_44)));
    }
#line 446 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_51;
#line 446 "mode_ordering.m"
  }
#line 446 "mode_ordering.m"
}

#line 431 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__431__1_3_f_0(
#line 431 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
#line 431 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_36,
#line 431 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_37)
#line 431 "mode_ordering.m"
{
#line 431 "mode_ordering.m"
  {
#line 431 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 431 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_38;
#line 431 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__Index_10;
#line 431 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GI_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_36, (MR_Integer) 1)));
#line 431 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalId_13;
#line 431 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalPath_14;
#line 432 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_36, (MR_Integer) 0)));
#line 434 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_GoalPath_14;
#line 440 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__Index0_16;
#line 436 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LastStep_15;

#line 433 "mode_ordering.m"
    {
#line 433 "mode_ordering.m"
      check_hlds__mode_ordering__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__GI_12);
    }
#line 434 "mode_ordering.m"
    {
#line 434 "mode_ordering.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0, check_hlds__mode_ordering__ForwardGoalPathMap_4, ((MR_Box) (check_hlds__mode_ordering__GoalId_13)), &check_hlds__mode_ordering__conv0_GoalPath_14);
    }
#line 434 "mode_ordering.m"
    check_hlds__mode_ordering__GoalPath_14 = ((MR_Word) check_hlds__mode_ordering__conv0_GoalPath_14);
#line 436 "mode_ordering.m"
    {
#line 436 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mdbcomp__goal_path__goal_path_get_last_2_p_0(check_hlds__mode_ordering__GoalPath_14, &check_hlds__mode_ordering__LastStep_15);
    }
#line 436 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 436 "mode_ordering.m"
      {
#line 437 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = ((MR_tag((MR_Word) check_hlds__mode_ordering__LastStep_15)) == (MR_mktag((MR_Integer) 1)));
#line 437 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 437 "mode_ordering.m"
          check_hlds__mode_ordering__Index0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__LastStep_15, (MR_Integer) 0)));
#line 436 "mode_ordering.m"
      }
#line 440 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 439 "mode_ordering.m"
      check_hlds__mode_ordering__Index_10 = check_hlds__mode_ordering__Index0_16;
#line 440 "mode_ordering.m"
    else
#line 441 "mode_ordering.m"
      {
#line 441 "mode_ordering.m"
        {
#line 441 "mode_ordering.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "goal_path error");
        }
#line 441 "mode_ordering.m"
      }
#line 431 "mode_ordering.m"
    {
#line 431 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__4_38 = mercury__map__det_insert_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__mode_ordering__HeadVar__3_37, ((MR_Box) (check_hlds__mode_ordering__Index_10)), ((MR_Box) (check_hlds__mode_ordering__HeadVar__2_36)));
    }
#line 431 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_38;
#line 431 "mode_ordering.m"
  }
#line 431 "mode_ordering.m"
}

#line 254 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_1(
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 254 "mode_ordering.m"
{
#line 254 "mode_ordering.m"
  {
#line 254 "mode_ordering.m"
    struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 254 "mode_ordering.m"
    {
#line 258 "mode_ordering.m"
      {
#line 258 "mode_ordering.m"
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__ProdVars_158, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarC_48);
      }
#line 260 "mode_ordering.m"
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded)
#line 259 "mode_ordering.m"
        {
#line 259 "mode_ordering.m"
          *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__HeadVar__5_126) = (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarD_49;
#line 259 "mode_ordering.m"
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded = MR_TRUE;
#line 259 "mode_ordering.m"
        }
#line 260 "mode_ordering.m"
      else
#line 262 "mode_ordering.m"
        {
#line 260 "mode_ordering.m"
          {
#line 260 "mode_ordering.m"
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__ProdVars_158, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarD_49);
          }
#line 262 "mode_ordering.m"
          if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded)
#line 262 "mode_ordering.m"
            {
#line 261 "mode_ordering.m"
              *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__HeadVar__5_126) = (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarC_48;
#line 261 "mode_ordering.m"
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded = MR_TRUE;
#line 262 "mode_ordering.m"
            }
#line 262 "mode_ordering.m"
        }
#line 260 "mode_ordering.m"
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__succeeded)
#line 260 "mode_ordering.m"
        {
#line 260 "mode_ordering.m"
          ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont_env_ptr);
#line 260 "mode_ordering.m"
          return;
        }
#line 254 "mode_ordering.m"
    }
#line 254 "mode_ordering.m"
  }
#line 254 "mode_ordering.m"
}

#line 254 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0(
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__VarA_37,
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__InstGraph_42,
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__VarB_43,
#line 254 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_158,
#line 254 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__5_126,
#line 254 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 254 "mode_ordering.m"
{
#line 254 "mode_ordering.m"
  {
#line 254 "mode_ordering.m"
    struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0_s check_hlds__mode_ordering__env;

#line 254 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__ProdVars_158 = check_hlds__mode_ordering__ProdVars_158;
#line 254 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__HeadVar__5_126 = check_hlds__mode_ordering__HeadVar__5_126;
#line 254 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont = check_hlds__mode_ordering__cont;
#line 254 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 256 "mode_ordering.m"
    {
#line 256 "mode_ordering.m"
      hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(check_hlds__mode_ordering__InstGraph_42, check_hlds__mode_ordering__VarA_37, check_hlds__mode_ordering__VarB_43, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarC_48, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_env_0__VarD_49, check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0_1, &check_hlds__mode_ordering__env);
    }
#line 254 "mode_ordering.m"
  }
#line 254 "mode_ordering.m"
}

#line 32 "mode_ordering.m"
void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(
#line 32 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
#line 32 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
#line 32 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_3)
#line 32 "mode_ordering.m"
{
#line 32 "mode_ordering.m"
  {
#line 32 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 32 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Cast_HeadVar1_4 = check_hlds__mode_ordering__HeadVar__2_2;
#line 32 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Cast_HeadVar2_5 = check_hlds__mode_ordering__HeadVar__3_3;

#line 32 "mode_ordering.m"
    {
#line 32 "mode_ordering.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], check_hlds__mode_ordering__HeadVar__1_1, ((MR_Box) (check_hlds__mode_ordering__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_ordering__Cast_HeadVar2_5)));
#line 32 "mode_ordering.m"
      return;
    }
#line 32 "mode_ordering.m"
  }
#line 32 "mode_ordering.m"
}

#line 32 "mode_ordering.m"
MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(
#line 32 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 32 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2)
#line 32 "mode_ordering.m"
{
#line 32 "mode_ordering.m"
  {
#line 32 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 32 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Cast_HeadVar1_3 = check_hlds__mode_ordering__HeadVar__1_1;
#line 32 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Cast_HeadVar2_4 = check_hlds__mode_ordering__HeadVar__2_2;

#line 32 "mode_ordering.m"
    {
#line 32 "mode_ordering.m"
      return check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], ((MR_Box) (check_hlds__mode_ordering__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_ordering__Cast_HeadVar2_4)));
    }
#line 32 "mode_ordering.m"
    return check_hlds__mode_ordering__succeeded;
#line 32 "mode_ordering.m"
  }
#line 32 "mode_ordering.m"
}

#line 26 "mode_ordering.m"
void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(
#line 26 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
#line 26 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
#line 26 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_3)
#line 26 "mode_ordering.m"
{
#line 26 "mode_ordering.m"
  {
#line 26 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 26 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastX_9 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;
#line 26 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastY_10 = (MR_Integer) check_hlds__mode_ordering__HeadVar__3_3;

#line 26 "mode_ordering.m"
    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_9 == check_hlds__mode_ordering__CastY_10);
#line 26 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 3226 "check_hlds.mode_ordering.c"
      *check_hlds__mode_ordering__HeadVar__1_1 = (MR_Integer) 0;
#line 26 "mode_ordering.m"
    else
#line 26 "mode_ordering.m"
      {
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 0)));
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 1)));
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_8_8;

#line 26 "mode_ordering.m"
        {
#line 26 "mode_ordering.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], &check_hlds__mode_ordering__V_8_8, ((MR_Box) (check_hlds__mode_ordering__V_4_4)), ((MR_Box) (check_hlds__mode_ordering__V_6_6)));
        }
#line 3248 "check_hlds.mode_ordering.c"
        check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_8_8 == (MR_Integer) 0);
#line 26 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 26 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 26 "mode_ordering.m"
          *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_8_8;
#line 26 "mode_ordering.m"
        else
#line 26 "mode_ordering.m"
          {
#line 26 "mode_ordering.m"
            check_hlds__mode_constraint_robdd____Compare____mode_constraint_info_0_0(check_hlds__mode_ordering__HeadVar__1_1, check_hlds__mode_ordering__V_5_5, check_hlds__mode_ordering__V_7_7);
#line 26 "mode_ordering.m"
            return;
          }
#line 26 "mode_ordering.m"
      }
#line 26 "mode_ordering.m"
  }
#line 26 "mode_ordering.m"
}

#line 26 "mode_ordering.m"
MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(
#line 26 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 26 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2)
#line 26 "mode_ordering.m"
{
#line 26 "mode_ordering.m"
  {
#line 26 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 26 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastX_7 = (MR_Integer) check_hlds__mode_ordering__HeadVar__1_1;
#line 26 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastY_8 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;

#line 26 "mode_ordering.m"
    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_7 == check_hlds__mode_ordering__CastY_8);
#line 26 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 26 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 26 "mode_ordering.m"
    else
#line 26 "mode_ordering.m"
      {
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
#line 26 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));

#line 3309 "check_hlds.mode_ordering.c"
        {
#line 3311 "check_hlds.mode_ordering.c"
          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], ((MR_Box) (check_hlds__mode_ordering__V_3_3)), ((MR_Box) (check_hlds__mode_ordering__V_5_5)));
        }
#line 26 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 3316 "check_hlds.mode_ordering.c"
          {
#line 3318 "check_hlds.mode_ordering.c"
            return check_hlds__mode_ordering__succeeded = check_hlds__mode_constraint_robdd____Unify____mode_constraint_info_0_0(check_hlds__mode_ordering__V_4_4, check_hlds__mode_ordering__V_6_6);
          }
#line 26 "mode_ordering.m"
      }
#line 26 "mode_ordering.m"
    return check_hlds__mode_ordering__succeeded;
#line 26 "mode_ordering.m"
  }
#line 26 "mode_ordering.m"
}

#line 154 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
#line 154 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
#line 154 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
#line 154 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_3)
#line 154 "mode_ordering.m"
{
#line 154 "mode_ordering.m"
  {
#line 154 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 154 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastX_21 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;
#line 154 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastY_22 = (MR_Integer) check_hlds__mode_ordering__HeadVar__3_3;

#line 154 "mode_ordering.m"
    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_21 == check_hlds__mode_ordering__CastY_22);
#line 154 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 3354 "check_hlds.mode_ordering.c"
      *check_hlds__mode_ordering__HeadVar__1_1 = (MR_Integer) 0;
#line 154 "mode_ordering.m"
    else
#line 154 "mode_ordering.m"
      {
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 2)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 3)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 4)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 5)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 0)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 1)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 2)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 3)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 4)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 5)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_16_16;

#line 154 "mode_ordering.m"
        {
#line 154 "mode_ordering.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[2], &check_hlds__mode_ordering__V_16_16, ((MR_Box) (check_hlds__mode_ordering__V_4_4)), ((MR_Box) (check_hlds__mode_ordering__V_10_10)));
        }
#line 3392 "check_hlds.mode_ordering.c"
        check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_16_16 == (MR_Integer) 0);
#line 154 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 154 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
          *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_16_16;
#line 154 "mode_ordering.m"
        else
#line 154 "mode_ordering.m"
          {
#line 154 "mode_ordering.m"
            MR_Word check_hlds__mode_ordering__V_17_17;

#line 154 "mode_ordering.m"
            {
#line 154 "mode_ordering.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[3], &check_hlds__mode_ordering__V_17_17, ((MR_Box) (check_hlds__mode_ordering__V_5_5)), ((MR_Box) (check_hlds__mode_ordering__V_11_11)));
            }
#line 3412 "check_hlds.mode_ordering.c"
            check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_17_17 == (MR_Integer) 0);
#line 154 "mode_ordering.m"
            check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 154 "mode_ordering.m"
            if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
              *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_17_17;
#line 154 "mode_ordering.m"
            else
#line 154 "mode_ordering.m"
              {
#line 154 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__V_18_18;

#line 154 "mode_ordering.m"
                {
#line 154 "mode_ordering.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[5], &check_hlds__mode_ordering__V_18_18, ((MR_Box) (check_hlds__mode_ordering__V_6_6)), ((MR_Box) (check_hlds__mode_ordering__V_12_12)));
                }
#line 3432 "check_hlds.mode_ordering.c"
                check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_18_18 == (MR_Integer) 0);
#line 154 "mode_ordering.m"
                check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 154 "mode_ordering.m"
                if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
                  *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_18_18;
#line 154 "mode_ordering.m"
                else
#line 154 "mode_ordering.m"
                  {
#line 154 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_19_19;

#line 154 "mode_ordering.m"
                    {
#line 154 "mode_ordering.m"
                      hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_ordering__V_19_19, check_hlds__mode_ordering__V_7_7, check_hlds__mode_ordering__V_13_13);
                    }
#line 3452 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_19_19 == (MR_Integer) 0);
#line 154 "mode_ordering.m"
                    check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 154 "mode_ordering.m"
                    if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
                      *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_19_19;
#line 154 "mode_ordering.m"
                    else
#line 154 "mode_ordering.m"
                      {
#line 154 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__V_20_20;

#line 154 "mode_ordering.m"
                        {
#line 154 "mode_ordering.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], &check_hlds__mode_ordering__V_20_20, ((MR_Box) (check_hlds__mode_ordering__V_8_8)), ((MR_Box) (check_hlds__mode_ordering__V_14_14)));
                        }
#line 3472 "check_hlds.mode_ordering.c"
                        check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_20_20 == (MR_Integer) 0);
#line 154 "mode_ordering.m"
                        check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 154 "mode_ordering.m"
                        if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
                          *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_20_20;
#line 154 "mode_ordering.m"
                        else
#line 154 "mode_ordering.m"
                          {
#line 154 "mode_ordering.m"
                            {
#line 154 "mode_ordering.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[5], check_hlds__mode_ordering__HeadVar__1_1, ((MR_Box) (check_hlds__mode_ordering__V_9_9)), ((MR_Box) (check_hlds__mode_ordering__V_15_15)));
#line 154 "mode_ordering.m"
                              return;
                            }
#line 154 "mode_ordering.m"
                          }
#line 154 "mode_ordering.m"
                      }
#line 154 "mode_ordering.m"
                  }
#line 154 "mode_ordering.m"
              }
#line 154 "mode_ordering.m"
          }
#line 154 "mode_ordering.m"
      }
#line 154 "mode_ordering.m"
  }
#line 154 "mode_ordering.m"
}

#line 154 "mode_ordering.m"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(
#line 154 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 154 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2)
#line 154 "mode_ordering.m"
{
#line 154 "mode_ordering.m"
  {
#line 154 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 154 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastX_15 = (MR_Integer) check_hlds__mode_ordering__HeadVar__1_1;
#line 154 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastY_16 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;

#line 154 "mode_ordering.m"
    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_15 == check_hlds__mode_ordering__CastY_16);
#line 154 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 154 "mode_ordering.m"
    else
#line 154 "mode_ordering.m"
      {
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeInfo_18_18;
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeInfo_19_19;
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeInfo_21_21;
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeInfo_22_22;
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 2)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 3)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 4)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 5)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 2)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 3)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 4)));
#line 154 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 5)));

#line 3569 "check_hlds.mode_ordering.c"
        {
#line 3571 "check_hlds.mode_ordering.c"
          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[2], ((MR_Box) (check_hlds__mode_ordering__V_3_3)), ((MR_Box) (check_hlds__mode_ordering__V_9_9)));
        }
#line 154 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
          {
#line 3578 "check_hlds.mode_ordering.c"
            check_hlds__mode_ordering__TypeInfo_18_18 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[3];
#line 3580 "check_hlds.mode_ordering.c"
            {
#line 3582 "check_hlds.mode_ordering.c"
              check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_18_18, ((MR_Box) (check_hlds__mode_ordering__V_4_4)), ((MR_Box) (check_hlds__mode_ordering__V_10_10)));
            }
#line 154 "mode_ordering.m"
            if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
              {
#line 3589 "check_hlds.mode_ordering.c"
                check_hlds__mode_ordering__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[5];
#line 3591 "check_hlds.mode_ordering.c"
                {
#line 3593 "check_hlds.mode_ordering.c"
                  check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_19_19, ((MR_Box) (check_hlds__mode_ordering__V_5_5)), ((MR_Box) (check_hlds__mode_ordering__V_11_11)));
                }
#line 154 "mode_ordering.m"
                if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
                  {
#line 3600 "check_hlds.mode_ordering.c"
                    {
#line 3602 "check_hlds.mode_ordering.c"
                      check_hlds__mode_ordering__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_ordering__V_6_6, check_hlds__mode_ordering__V_12_12);
                    }
#line 154 "mode_ordering.m"
                    if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
                      {
#line 3609 "check_hlds.mode_ordering.c"
                        check_hlds__mode_ordering__TypeInfo_21_21 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[4];
#line 3611 "check_hlds.mode_ordering.c"
                        {
#line 3613 "check_hlds.mode_ordering.c"
                          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_21_21, ((MR_Box) (check_hlds__mode_ordering__V_7_7)), ((MR_Box) (check_hlds__mode_ordering__V_13_13)));
                        }
#line 154 "mode_ordering.m"
                        if (check_hlds__mode_ordering__succeeded)
#line 154 "mode_ordering.m"
                          {
#line 3620 "check_hlds.mode_ordering.c"
                            check_hlds__mode_ordering__TypeInfo_22_22 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[5];
#line 3622 "check_hlds.mode_ordering.c"
                            {
#line 3624 "check_hlds.mode_ordering.c"
                              return check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_22_22, ((MR_Box) (check_hlds__mode_ordering__V_8_8)), ((MR_Box) (check_hlds__mode_ordering__V_14_14)));
                            }
#line 154 "mode_ordering.m"
                          }
#line 154 "mode_ordering.m"
                      }
#line 154 "mode_ordering.m"
                  }
#line 154 "mode_ordering.m"
              }
#line 154 "mode_ordering.m"
          }
#line 154 "mode_ordering.m"
      }
#line 154 "mode_ordering.m"
    return check_hlds__mode_ordering__succeeded;
#line 154 "mode_ordering.m"
  }
#line 154 "mode_ordering.m"
}

#line 579 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 579 "mode_ordering.m"
{
#line 579 "mode_ordering.m"
  {
#line 579 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 579 "mode_ordering.m"
    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_HeadVar__7_31));
#line 579 "mode_ordering.m"
    {
#line 579 "mode_ordering.m"
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr);
#line 579 "mode_ordering.m"
      return;
    }
#line 579 "mode_ordering.m"
  }
#line 579 "mode_ordering.m"
}

#line 579 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
#line 579 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 579 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 579 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 579 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 579 "mode_ordering.m"
{
#line 579 "mode_ordering.m"
  {
#line 579 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s check_hlds__mode_ordering__env;

#line 579 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
#line 579 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont = check_hlds__mode_ordering__cont;
#line 579 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 579 "mode_ordering.m"
    {
#line 579 "mode_ordering.m"
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

#line 579 "mode_ordering.m"
      {
#line 579 "mode_ordering.m"
        check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__579__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 8))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_HeadVar__7_31, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4, &check_hlds__mode_ordering__env);
      }
#line 579 "mode_ordering.m"
    }
#line 579 "mode_ordering.m"
  }
#line 579 "mode_ordering.m"
}

#line 563 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
#line 563 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 563 "mode_ordering.m"
{
#line 563 "mode_ordering.m"
  {
#line 563 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 563 "mode_ordering.m"
    MR_builtin_longjmp((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0, 1);
#line 563 "mode_ordering.m"
  }
#line 563 "mode_ordering.m"
}

#line 563 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
#line 563 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 563 "mode_ordering.m"
{
#line 563 "mode_ordering.m"
  {
#line 563 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 568 "mode_ordering.m"
    {
#line 571 "mode_ordering.m"
      MR_Word check_hlds__mode_ordering__V_26_26;
#line 571 "mode_ordering.m"
      MR_Word check_hlds__mode_ordering__V_27_27;
#line 572 "mode_ordering.m"
      MR_Word check_hlds__mode_ordering__V_28_28;
#line 572 "mode_ordering.m"
      MR_Word check_hlds__mode_ordering__V_29_29;

#line 567 "mode_ordering.m"
      {
#line 567 "mode_ordering.m"
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
      }
#line 568 "mode_ordering.m"
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 568 "mode_ordering.m"
        {
#line 571 "mode_ordering.m"
          {
#line 571 "mode_ordering.m"
            check_hlds__mode_ordering__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 571 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_27_27, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
#line 571 "mode_ordering.m"
          }
#line 571 "mode_ordering.m"
          {
#line 571 "mode_ordering.m"
            check_hlds__mode_ordering__V_26_26 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_27_27);
          }
#line 570 "mode_ordering.m"
          {
#line 570 "mode_ordering.m"
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_26_26);
          }
#line 571 "mode_ordering.m"
          if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 571 "mode_ordering.m"
            {
#line 573 "mode_ordering.m"
              {
#line 573 "mode_ordering.m"
                check_hlds__mode_ordering__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 573 "mode_ordering.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_29_29, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
#line 573 "mode_ordering.m"
              }
#line 573 "mode_ordering.m"
              {
#line 573 "mode_ordering.m"
                check_hlds__mode_ordering__V_28_28 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_29_29);
              }
#line 572 "mode_ordering.m"
              {
#line 572 "mode_ordering.m"
                (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_28_28);
              }
#line 572 "mode_ordering.m"
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 571 "mode_ordering.m"
            }
#line 568 "mode_ordering.m"
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 568 "mode_ordering.m"
        }
#line 568 "mode_ordering.m"
    }
#line 565 "mode_ordering.m"
    if (!((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded))
#line 568 "mode_ordering.m"
      {
#line 568 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_34_34;
#line 568 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_35_35;
#line 572 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_36_36;
#line 572 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_37_37;
#line 567 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_42_42;

#line 571 "mode_ordering.m"
        {
#line 571 "mode_ordering.m"
          check_hlds__mode_ordering__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 571 "mode_ordering.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_35_35, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
#line 571 "mode_ordering.m"
        }
#line 571 "mode_ordering.m"
        {
#line 571 "mode_ordering.m"
          check_hlds__mode_ordering__V_34_34 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_35_35);
        }
#line 570 "mode_ordering.m"
        {
#line 570 "mode_ordering.m"
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_34_34);
        }
#line 568 "mode_ordering.m"
        if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 568 "mode_ordering.m"
          {
#line 573 "mode_ordering.m"
            {
#line 573 "mode_ordering.m"
              check_hlds__mode_ordering__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 573 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_37_37, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
#line 573 "mode_ordering.m"
            }
#line 573 "mode_ordering.m"
            {
#line 573 "mode_ordering.m"
              check_hlds__mode_ordering__V_36_36 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_37_37);
            }
#line 572 "mode_ordering.m"
            {
#line 572 "mode_ordering.m"
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_36_36);
            }
#line 572 "mode_ordering.m"
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 568 "mode_ordering.m"
            if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 568 "mode_ordering.m"
              {
#line 3875 "check_hlds.mode_ordering.c"
                check_hlds__mode_ordering__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 567 "mode_ordering.m"
                {
#line 567 "mode_ordering.m"
                  (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0(check_hlds__mode_ordering__TypeCtorInfo_42_42, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
                }
#line 568 "mode_ordering.m"
                (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 568 "mode_ordering.m"
              }
#line 568 "mode_ordering.m"
          }
#line 568 "mode_ordering.m"
      }
#line 565 "mode_ordering.m"
    if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 565 "mode_ordering.m"
      {
#line 565 "mode_ordering.m"
        check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(check_hlds__mode_ordering__env_ptr);
#line 565 "mode_ordering.m"
        return;
      }
#line 563 "mode_ordering.m"
  }
#line 563 "mode_ordering.m"
}

#line 563 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
#line 563 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 563 "mode_ordering.m"
{
#line 563 "mode_ordering.m"
  {
#line 563 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 563 "mode_ordering.m"
    if (MR_builtin_setjmp((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0) == 0)
#line 563 "mode_ordering.m"
      {
#line 563 "mode_ordering.m"
        {
#line 563 "mode_ordering.m"
          hlds__inst_graph__corresponding_nodes_from_lists_6_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19, &(check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22, &(check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2, check_hlds__mode_ordering__env_ptr);
        }
#line 563 "mode_ordering.m"
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_FALSE;
#line 563 "mode_ordering.m"
      }
#line 563 "mode_ordering.m"
    else
#line 563 "mode_ordering.m"
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 563 "mode_ordering.m"
  }
#line 563 "mode_ordering.m"
}

#line 552 "mode_ordering.m"
static MR_bool MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0(
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_12,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_13,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
#line 552 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCInfo_16,
#line 552 "mode_ordering.m"
  MR_Integer * check_hlds__mode_ordering__ProcId_17,
#line 552 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ConsumingVars_18)
#line 552 "mode_ordering.m"
{
#line 552 "mode_ordering.m"
  {
#line 552 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s check_hlds__mode_ordering__env;

#line 552 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12 = check_hlds__mode_ordering__ProdVars_12;
#line 552 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13 = check_hlds__mode_ordering__Args_13;
#line 552 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14 = check_hlds__mode_ordering__CallerInstGraph_14;
#line 552 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15 = check_hlds__mode_ordering__CalleeInstGraph_15;
#line 552 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16 = check_hlds__mode_ordering__MCInfo_16;
#line 557 "mode_ordering.m"
    while (MR_TRUE)
#line 557 "mode_ordering.m"
      {
#line 557 "mode_ordering.m"
        /* tailcall optimized into a loop */
#line 557 "mode_ordering.m"
        {
#line 557 "mode_ordering.m"
          MR_Integer check_hlds__mode_ordering__ProcId0_9;
#line 557 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ProcInfo_10;
#line 557 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ProcList_11;
#line 557 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Constraint0_20;
#line 557 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_25_25;

#line 556 "mode_ordering.m"
          (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__mode_ordering__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 556 "mode_ordering.m"
          if ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 556 "mode_ordering.m"
            {
#line 556 "mode_ordering.m"
              check_hlds__mode_ordering__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
#line 556 "mode_ordering.m"
              check_hlds__mode_ordering__ProcList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 556 "mode_ordering.m"
              check_hlds__mode_ordering__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_25_25, (MR_Integer) 0)));
#line 556 "mode_ordering.m"
              check_hlds__mode_ordering__ProcInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_25_25, (MR_Integer) 1)));
#line 558 "mode_ordering.m"
              {
#line 558 "mode_ordering.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__mode_ordering__ProcInfo_10, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19);
              }
#line 559 "mode_ordering.m"
              {
#line 559 "mode_ordering.m"
                hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(check_hlds__mode_ordering__ProcInfo_10, &check_hlds__mode_ordering__Constraint0_20);
              }
#line 560 "mode_ordering.m"
              {
#line 560 "mode_ordering.m"
                (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_ordering__Constraint0_20);
              }
#line 563 "mode_ordering.m"
              {
#line 563 "mode_ordering.m"
                check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(&check_hlds__mode_ordering__env);
              }
#line 563 "mode_ordering.m"
              (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 587 "mode_ordering.m"
              if ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 578 "mode_ordering.m"
                {
#line 578 "mode_ordering.m"
                  MR_Word check_hlds__mode_ordering__ConsumingVarsList_24;
#line 578 "mode_ordering.m"
                  MR_Word check_hlds__mode_ordering__V_30_30;

#line 578 "mode_ordering.m"
                  *check_hlds__mode_ordering__ProcId_17 = check_hlds__mode_ordering__ProcId0_9;
#line 579 "mode_ordering.m"
                  {
#line 579 "mode_ordering.m"
                    check_hlds__mode_ordering__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_7[0]));
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 1) = ((MR_Box) (check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5));
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 3) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13));
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 4) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14));
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 5) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15));
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 6) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16));
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 7) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19));
#line 579 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 8) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21));
#line 579 "mode_ordering.m"
                  }
#line 579 "mode_ordering.m"
                  {
#line 579 "mode_ordering.m"
                    check_hlds__mode_ordering__ConsumingVarsList_24 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_30_30);
                  }
#line 586 "mode_ordering.m"
                  {
#line 586 "mode_ordering.m"
                    parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ConsumingVarsList_24, check_hlds__mode_ordering__ConsumingVars_18);
                  }
#line 578 "mode_ordering.m"
                  (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 578 "mode_ordering.m"
                }
#line 587 "mode_ordering.m"
              else
#line 588 "mode_ordering.m"
                {
#line 588 "mode_ordering.m"
                  /* direct tailcall eliminated */
#line 588 "mode_ordering.m"
                  {
#line 588 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__HeadVar__1__tmp_copy_1 = check_hlds__mode_ordering__ProcList_11;

#line 588 "mode_ordering.m"
                    check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__HeadVar__1__tmp_copy_1;
#line 588 "mode_ordering.m"
                  }
#line 588 "mode_ordering.m"
                  continue;
#line 588 "mode_ordering.m"
                }
#line 556 "mode_ordering.m"
            }
#line 557 "mode_ordering.m"
          return (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded;
#line 557 "mode_ordering.m"
        }
#line 557 "mode_ordering.m"
        break;
#line 557 "mode_ordering.m"
      }
#line 552 "mode_ordering.m"
  }
#line 552 "mode_ordering.m"
}

#line 519 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_7_p_0(
#line 519 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 519 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_9,
#line 519 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_10,
#line 519 "mode_ordering.m"
  MR_Integer * check_hlds__mode_ordering__ProcId_11,
#line 519 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ConsumingVars_12,
#line 519 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26,
#line 519 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_27)
#line 519 "mode_ordering.m"
{
#line 523 "mode_ordering.m"
  {
#line 523 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 3)));
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__CallerInstGraph_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 0)));
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__PredConstraintMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 4)));
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MCInfo_18;
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__PredInfo_19;
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__CalleeInstGraphInfo_20;
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__CalleeInstGraph_21;
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProcTable_22;
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProcList_23;
#line 523 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_55_55;
#line 524 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 1)));
#line 524 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 2)));
#line 524 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 5)));
#line 603 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_V_55_55;
#line 603 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;
#line 540 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__ProcId0_24;
#line 540 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ConsumingVars0_25;

#line 603 "mode_ordering.m"
    {
#line 603 "mode_ordering.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0, check_hlds__mode_ordering__PredConstraintMap_16, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv0_V_55_55);
    }
#line 603 "mode_ordering.m"
    check_hlds__mode_ordering__V_55_55 = ((MR_Word) check_hlds__mode_ordering__conv0_V_55_55);
#line 603 "mode_ordering.m"
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_55_55, (MR_Integer) 0)));
#line 603 "mode_ordering.m"
    check_hlds__mode_ordering__MCInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_55_55, (MR_Integer) 1)));
#line 529 "mode_ordering.m"
    {
#line 529 "mode_ordering.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_ordering__ModuleInfo_14, check_hlds__mode_ordering__PredId_8, &check_hlds__mode_ordering__PredInfo_19);
    }
#line 530 "mode_ordering.m"
    {
#line 530 "mode_ordering.m"
      hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(check_hlds__mode_ordering__PredInfo_19, &check_hlds__mode_ordering__CalleeInstGraphInfo_20);
    }
#line 531 "mode_ordering.m"
    {
#line 531 "mode_ordering.m"
      check_hlds__mode_ordering__CalleeInstGraph_21 = hlds__inst_graph__interface_inst_graph_1_f_0(check_hlds__mode_ordering__CalleeInstGraphInfo_20);
    }
#line 532 "mode_ordering.m"
    {
#line 532 "mode_ordering.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__mode_ordering__PredInfo_19, &check_hlds__mode_ordering__ProcTable_22);
    }
#line 533 "mode_ordering.m"
    {
#line 533 "mode_ordering.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__mode_ordering__ProcTable_22, &check_hlds__mode_ordering__ProcList_23);
    }
#line 535 "mode_ordering.m"
    {
#line 535 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering__find_matching_proc_2_8_p_0(check_hlds__mode_ordering__ProcList_23, check_hlds__mode_ordering__ProdVars_10, check_hlds__mode_ordering__Args_9, check_hlds__mode_ordering__CallerInstGraph_15, check_hlds__mode_ordering__CalleeInstGraph_21, check_hlds__mode_ordering__MCInfo_18, &check_hlds__mode_ordering__ProcId0_24, &check_hlds__mode_ordering__ConsumingVars0_25);
    }
#line 540 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 538 "mode_ordering.m"
      {
#line 538 "mode_ordering.m"
        *check_hlds__mode_ordering__ProcId_11 = check_hlds__mode_ordering__ProcId0_24;
#line 539 "mode_ordering.m"
        *check_hlds__mode_ordering__ConsumingVars_12 = check_hlds__mode_ordering__ConsumingVars0_25;
#line 538 "mode_ordering.m"
      }
#line 540 "mode_ordering.m"
    else
#line 546 "mode_ordering.m"
      {
#line 541 "mode_ordering.m"
        {
#line 541 "mode_ordering.m"
          check_hlds__mode_ordering__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__mode_ordering__PredInfo_19);
        }
#line 546 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 545 "mode_ordering.m"
          {
#line 545 "mode_ordering.m"
            {
#line 545 "mode_ordering.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.find_matching_proc\'/7", (MR_String) "infer_modes NYI");
#line 545 "mode_ordering.m"
              return;
            }
#line 545 "mode_ordering.m"
          }
#line 546 "mode_ordering.m"
        else
#line 549 "mode_ordering.m"
          {
#line 549 "mode_ordering.m"
            {
#line 549 "mode_ordering.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.find_matching_proc\'/7", (MR_String) "unexpected mode error");
#line 549 "mode_ordering.m"
              return;
            }
#line 549 "mode_ordering.m"
          }
#line 546 "mode_ordering.m"
      }
#line 523 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_27 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26;
#line 523 "mode_ordering.m"
  }
#line 519 "mode_ordering.m"
}

#line 488 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(
#line 488 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ProdVars_6,
#line 488 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13,
#line 488 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14,
#line 488 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15,
#line 488 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_16)
#line 488 "mode_ordering.m"
{
#line 492 "mode_ordering.m"
  {
#line 492 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 492 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 2)));
#line 492 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__AtomicProdVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 1)));
#line 492 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalId_11;
#line 493 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 0)));
#line 493 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 3)));
#line 493 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 4)));
#line 493 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 5)));
#line 501 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVars0_12;
#line 497 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;
#line 497 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_ProdVars0_12;

#line 495 "mode_ordering.m"
    {
#line 495 "mode_ordering.m"
      check_hlds__mode_ordering__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13);
    }
#line 497 "mode_ordering.m"
    {
#line 497 "mode_ordering.m"
      check_hlds__mode_ordering__V_17_17 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_ordering__LambdaNesting_9, ((MR_Box) (check_hlds__mode_ordering__GoalId_11)));
    }
#line 497 "mode_ordering.m"
    {
#line 497 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[5], (MR_Word) &check_hlds__mode_ordering_scalar_common_1[6], check_hlds__mode_ordering__AtomicProdVars_10, ((MR_Box) (check_hlds__mode_ordering__V_17_17)), &check_hlds__mode_ordering__conv0_ProdVars0_12);
    }
#line 497 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 497 "mode_ordering.m"
      {
#line 497 "mode_ordering.m"
        check_hlds__mode_ordering__ProdVars0_12 = ((MR_Word) check_hlds__mode_ordering__conv0_ProdVars0_12);
#line 497 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 497 "mode_ordering.m"
      }
#line 501 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 500 "mode_ordering.m"
      *check_hlds__mode_ordering__ProdVars_6 = check_hlds__mode_ordering__ProdVars0_12;
#line 501 "mode_ordering.m"
    else
#line 502 "mode_ordering.m"
      {
#line 502 "mode_ordering.m"
        {
#line 502 "mode_ordering.m"
          *check_hlds__mode_ordering__ProdVars_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 502 "mode_ordering.m"
      }
#line 504 "mode_ordering.m"
    {
#line 504 "mode_ordering.m"
      hlds__hlds_goal__goal_info_set_producing_vars_3_p_0(*check_hlds__mode_ordering__ProdVars_6, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14);
    }
#line 492 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_16 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15;
#line 492 "mode_ordering.m"
  }
#line 488 "mode_ordering.m"
}

#line 460 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
#line 460 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 460 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 460 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 460 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 460 "mode_ordering.m"
{
#line 460 "mode_ordering.m"
  {
#line 460 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
#line 460 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 460 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv6_HeadVar__6_75;

#line 460 "mode_ordering.m"
    {
#line 460 "mode_ordering.m"
      check_hlds__mode_ordering__conv6_HeadVar__6_75 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__460__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 460 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv6_HeadVar__6_75));
#line 460 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_4;
#line 460 "mode_ordering.m"
  }
#line 460 "mode_ordering.m"
}

#line 452 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
#line 452 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 452 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 452 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 452 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 452 "mode_ordering.m"
{
#line 452 "mode_ordering.m"
  {
#line 452 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
#line 452 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 452 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv4_HeadVar__4_60;

#line 452 "mode_ordering.m"
    {
#line 452 "mode_ordering.m"
      check_hlds__mode_ordering__conv4_HeadVar__4_60 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__452__1_3_f_0(((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 452 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv4_HeadVar__4_60));
#line 452 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_4;
#line 452 "mode_ordering.m"
  }
#line 452 "mode_ordering.m"
}

#line 445 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
#line 445 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 445 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 445 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 445 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 445 "mode_ordering.m"
{
#line 445 "mode_ordering.m"
  {
#line 445 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
#line 445 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 445 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv2_HeadVar__4_47;

#line 445 "mode_ordering.m"
    {
#line 445 "mode_ordering.m"
      check_hlds__mode_ordering__conv2_HeadVar__4_47 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__445__1_3_f_0(((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 445 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv2_HeadVar__4_47));
#line 445 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_4;
#line 445 "mode_ordering.m"
  }
#line 445 "mode_ordering.m"
}

#line 431 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
#line 431 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 431 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 431 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 431 "mode_ordering.m"
{
#line 431 "mode_ordering.m"
  {
#line 431 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 431 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 431 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__4_38;

#line 431 "mode_ordering.m"
    {
#line 431 "mode_ordering.m"
      check_hlds__mode_ordering__conv0_HeadVar__4_38 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__431__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 431 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__4_38));
#line 431 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 431 "mode_ordering.m"
  }
#line 431 "mode_ordering.m"
}

#line 427 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
#line 427 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
#line 427 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goals0_5,
#line 427 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__Goals_6)
#line 427 "mode_ordering.m"
{
#line 430 "mode_ordering.m"
  {
#line 430 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_134_134;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_135_135;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_141_141;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalMap_7;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdMap_17;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MakeVisMap_22;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Graph_25;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_35_35;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_42_42;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_55_55;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_68_68;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_69_69;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_99_99;
#line 431 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_GoalMap_7;
#line 445 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv3_ProdMap_17;
#line 452 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv5_MakeVisMap_22;
#line 460 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv7_Graph_25;
#line 483 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TSort_34;

#line 431 "mode_ordering.m"
    {
#line 431 "mode_ordering.m"
      check_hlds__mode_ordering__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 431 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[2]));
#line 431 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_1));
#line 431 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 431 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 3) = ((MR_Box) (check_hlds__mode_ordering__ForwardGoalPathMap_4));
#line 431 "mode_ordering.m"
    }
#line 4567 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 442 "mode_ordering.m"
    {
#line 442 "mode_ordering.m"
      check_hlds__mode_ordering__V_42_42 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128);
    }
#line 431 "mode_ordering.m"
    {
#line 431 "mode_ordering.m"
      check_hlds__mode_ordering__conv1_GoalMap_7 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[0], check_hlds__mode_ordering__V_35_35, check_hlds__mode_ordering__Goals0_5, ((MR_Box) (check_hlds__mode_ordering__V_42_42)));
    }
#line 431 "mode_ordering.m"
    check_hlds__mode_ordering__GoalMap_7 = ((MR_Word) check_hlds__mode_ordering__conv1_GoalMap_7);
#line 4581 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeInfo_135_135 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1];
#line 4583 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeInfo_141_141 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[3];
#line 449 "mode_ordering.m"
    {
#line 449 "mode_ordering.m"
      check_hlds__mode_ordering__V_55_55 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeInfo_141_141, check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
#line 445 "mode_ordering.m"
    {
#line 445 "mode_ordering.m"
      check_hlds__mode_ordering__conv3_ProdMap_17 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TypeInfo_135_135, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[11], check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_55_55)));
    }
#line 445 "mode_ordering.m"
    check_hlds__mode_ordering__ProdMap_17 = ((MR_Word) check_hlds__mode_ordering__conv3_ProdMap_17);
#line 458 "mode_ordering.m"
    {
#line 458 "mode_ordering.m"
      check_hlds__mode_ordering__V_68_68 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeInfo_141_141, check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
#line 452 "mode_ordering.m"
    {
#line 452 "mode_ordering.m"
      check_hlds__mode_ordering__conv5_MakeVisMap_22 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TypeInfo_135_135, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[12], check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_68_68)));
    }
#line 452 "mode_ordering.m"
    check_hlds__mode_ordering__MakeVisMap_22 = ((MR_Word) check_hlds__mode_ordering__conv5_MakeVisMap_22);
#line 460 "mode_ordering.m"
    {
#line 460 "mode_ordering.m"
      check_hlds__mode_ordering__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 460 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[0]));
#line 460 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_4));
#line 460 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 460 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 3) = ((MR_Box) (check_hlds__mode_ordering__ProdMap_17));
#line 460 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 4) = ((MR_Box) (check_hlds__mode_ordering__MakeVisMap_22));
#line 460 "mode_ordering.m"
    }
#line 479 "mode_ordering.m"
    {
#line 479 "mode_ordering.m"
      check_hlds__mode_ordering__V_99_99 = mercury__digraph__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
#line 460 "mode_ordering.m"
    {
#line 460 "mode_ordering.m"
      check_hlds__mode_ordering__conv7_Graph_25 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_ordering_scalar_common_1[4], check_hlds__mode_ordering__V_69_69, check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_99_99)));
    }
#line 460 "mode_ordering.m"
    check_hlds__mode_ordering__Graph_25 = ((MR_Word) check_hlds__mode_ordering__conv7_Graph_25);
#line 481 "mode_ordering.m"
    {
#line 481 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__digraph__tsort_2_p_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__Graph_25, &check_hlds__mode_ordering__TSort_34);
    }
#line 483 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 482 "mode_ordering.m"
      {
#line 482 "mode_ordering.m"
        *check_hlds__mode_ordering__Goals_6 = mercury__map__apply_to_list_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TSort_34, check_hlds__mode_ordering__GoalMap_7);
      }
#line 483 "mode_ordering.m"
    else
#line 485 "mode_ordering.m"
      {
#line 485 "mode_ordering.m"
        {
#line 485 "mode_ordering.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "tsort failed");
#line 485 "mode_ordering.m"
          return;
        }
#line 485 "mode_ordering.m"
      }
#line 430 "mode_ordering.m"
  }
#line 427 "mode_ordering.m"
}

#line 418 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
#line 418 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GI_4,
#line 418 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
#line 418 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7)
#line 418 "mode_ordering.m"
{
#line 421 "mode_ordering.m"
  {
#line 421 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 421 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8;
#line 421 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_9_9;
#line 421 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10;
#line 421 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11;
#line 421 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12;
#line 421 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_13_13;
#line 421 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15;

#line 422 "mode_ordering.m"
    {
#line 422 "mode_ordering.m"
      check_hlds__mode_ordering__V_9_9 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 422 "mode_ordering.m"
    {
#line 422 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6, check_hlds__mode_ordering__V_9_9);
    }
#line 423 "mode_ordering.m"
    {
#line 423 "mode_ordering.m"
      check_hlds__mode_ordering__V_11_11 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 423 "mode_ordering.m"
    {
#line 423 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8, check_hlds__mode_ordering__V_11_11);
    }
#line 424 "mode_ordering.m"
    {
#line 424 "mode_ordering.m"
      check_hlds__mode_ordering__V_13_13 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 424 "mode_ordering.m"
    {
#line 424 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10, check_hlds__mode_ordering__V_13_13);
    }
#line 425 "mode_ordering.m"
    {
#line 425 "mode_ordering.m"
      check_hlds__mode_ordering__V_15_15 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 425 "mode_ordering.m"
    {
#line 425 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12, check_hlds__mode_ordering__V_15_15);
    }
#line 421 "mode_ordering.m"
  }
#line 418 "mode_ordering.m"
}

#line 399 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
#line 399 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goal_4,
#line 399 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12,
#line 399 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13)
#line 399 "mode_ordering.m"
{
#line 402 "mode_ordering.m"
  {
#line 402 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_26_26;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVars0_6;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ConsumVars0_7;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_8;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_9;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GI_11;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_16_16;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_18_18;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_21_21;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_22_22;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_24_24;
#line 402 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_25_25;
#line 407 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_10_10;

#line 403 "mode_ordering.m"
    {
#line 403 "mode_ordering.m"
      check_hlds__mode_ordering__ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 404 "mode_ordering.m"
    {
#line 404 "mode_ordering.m"
      check_hlds__mode_ordering__ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 405 "mode_ordering.m"
    {
#line 405 "mode_ordering.m"
      check_hlds__mode_ordering__MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 406 "mode_ordering.m"
    {
#line 406 "mode_ordering.m"
      check_hlds__mode_ordering__NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 407 "mode_ordering.m"
    check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_4, (MR_Integer) 0)));
#line 407 "mode_ordering.m"
    check_hlds__mode_ordering__GI_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_4, (MR_Integer) 1)));
#line 4818 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 410 "mode_ordering.m"
    {
#line 410 "mode_ordering.m"
      check_hlds__mode_ordering__V_16_16 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
#line 410 "mode_ordering.m"
    {
#line 410 "mode_ordering.m"
      check_hlds__mode_ordering__V_15_15 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__ProdVars0_6, check_hlds__mode_ordering__V_16_16);
    }
#line 410 "mode_ordering.m"
    {
#line 410 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12, check_hlds__mode_ordering__V_15_15);
    }
#line 412 "mode_ordering.m"
    {
#line 412 "mode_ordering.m"
      check_hlds__mode_ordering__V_19_19 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
#line 412 "mode_ordering.m"
    {
#line 412 "mode_ordering.m"
      check_hlds__mode_ordering__V_18_18 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__ConsumVars0_7, check_hlds__mode_ordering__V_19_19);
    }
#line 412 "mode_ordering.m"
    {
#line 412 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14, check_hlds__mode_ordering__V_18_18);
    }
#line 414 "mode_ordering.m"
    {
#line 414 "mode_ordering.m"
      check_hlds__mode_ordering__V_22_22 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
#line 414 "mode_ordering.m"
    {
#line 414 "mode_ordering.m"
      check_hlds__mode_ordering__V_21_21 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__MakeVisibleVars0_8, check_hlds__mode_ordering__V_22_22);
    }
#line 414 "mode_ordering.m"
    {
#line 414 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17, check_hlds__mode_ordering__V_21_21);
    }
#line 416 "mode_ordering.m"
    {
#line 416 "mode_ordering.m"
      check_hlds__mode_ordering__V_25_25 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
#line 416 "mode_ordering.m"
    {
#line 416 "mode_ordering.m"
      check_hlds__mode_ordering__V_24_24 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__NeedVisibleVars0_9, check_hlds__mode_ordering__V_25_25);
    }
#line 416 "mode_ordering.m"
    {
#line 416 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20, check_hlds__mode_ordering__V_24_24);
    }
#line 402 "mode_ordering.m"
  }
#line 399 "mode_ordering.m"
}

#line 397 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
#line 397 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 397 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 397 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 397 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 397 "mode_ordering.m"
{
#line 397 "mode_ordering.m"
  {
#line 397 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 397 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13;

#line 397 "mode_ordering.m"
    {
#line 397 "mode_ordering.m"
      check_hlds__mode_ordering__union_mode_vars_set_3_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13);
    }
#line 397 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13));
#line 397 "mode_ordering.m"
  }
#line 397 "mode_ordering.m"
}

#line 393 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
#line 393 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goals_4,
#line 393 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
#line 393 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7)
#line 393 "mode_ordering.m"
{
#line 396 "mode_ordering.m"
  {
#line 396 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 397 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7;

#line 397 "mode_ordering.m"
    {
#line 397 "mode_ordering.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[10], check_hlds__mode_ordering__Goals_4, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7);
    }
#line 397 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7);
#line 396 "mode_ordering.m"
  }
#line 393 "mode_ordering.m"
}

#line 375 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
#line 375 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GI_4,
#line 375 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10,
#line 375 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11)
#line 375 "mode_ordering.m"
{
#line 378 "mode_ordering.m"
  {
#line 378 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_24_24;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVars0_6;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ConsumVars0_7;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_8;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_9;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_13_13;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_14_14;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_16_16;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_20_20;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_22_22;
#line 378 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_23_23;

#line 379 "mode_ordering.m"
    {
#line 379 "mode_ordering.m"
      check_hlds__mode_ordering__ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 380 "mode_ordering.m"
    {
#line 380 "mode_ordering.m"
      check_hlds__mode_ordering__ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 381 "mode_ordering.m"
    {
#line 381 "mode_ordering.m"
      check_hlds__mode_ordering__MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 382 "mode_ordering.m"
    {
#line 382 "mode_ordering.m"
      check_hlds__mode_ordering__NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 5015 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__V_14_14 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__V_13_13 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__ProdVars0_6, check_hlds__mode_ordering__V_14_14);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10, check_hlds__mode_ordering__V_13_13);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__V_17_17 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__V_16_16 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__ConsumVars0_7, check_hlds__mode_ordering__V_17_17);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12, check_hlds__mode_ordering__V_16_16);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__V_20_20 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__V_19_19 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__MakeVisibleVars0_8, check_hlds__mode_ordering__V_20_20);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15, check_hlds__mode_ordering__V_19_19);
    }
#line 391 "mode_ordering.m"
    {
#line 391 "mode_ordering.m"
      check_hlds__mode_ordering__V_23_23 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 391 "mode_ordering.m"
    {
#line 391 "mode_ordering.m"
      check_hlds__mode_ordering__V_22_22 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__NeedVisibleVars0_9, check_hlds__mode_ordering__V_23_23);
    }
#line 391 "mode_ordering.m"
    {
#line 391 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18, check_hlds__mode_ordering__V_22_22);
    }
#line 378 "mode_ordering.m"
  }
#line 375 "mode_ordering.m"
}

#line 369 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
#line 369 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 369 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7,
#line 369 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8)
#line 369 "mode_ordering.m"
{
#line 372 "mode_ordering.m"
  {
#line 372 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_24_30;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVars0_14;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ConsumVars0_15;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_16;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_17;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_20_20;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_22_22;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_23_23;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_25_25;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_26_26;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_28_28;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_29_29;
#line 372 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));

#line 379 "mode_ordering.m"
    {
#line 379 "mode_ordering.m"
      check_hlds__mode_ordering__ProdVars0_14 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
#line 380 "mode_ordering.m"
    {
#line 380 "mode_ordering.m"
      check_hlds__mode_ordering__ConsumVars0_15 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
#line 381 "mode_ordering.m"
    {
#line 381 "mode_ordering.m"
      check_hlds__mode_ordering__MakeVisibleVars0_16 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
#line 382 "mode_ordering.m"
    {
#line 382 "mode_ordering.m"
      check_hlds__mode_ordering__NeedVisibleVars0_17 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
#line 5154 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_24_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__V_20_20 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__V_19_19 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__ProdVars0_14, check_hlds__mode_ordering__V_20_20);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7, check_hlds__mode_ordering__V_19_19);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__V_23_23 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__V_22_22 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__ConsumVars0_15, check_hlds__mode_ordering__V_23_23);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18, check_hlds__mode_ordering__V_22_22);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__V_26_26 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__V_25_25 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__MakeVisibleVars0_16, check_hlds__mode_ordering__V_26_26);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21, check_hlds__mode_ordering__V_25_25);
    }
#line 391 "mode_ordering.m"
    {
#line 391 "mode_ordering.m"
      check_hlds__mode_ordering__V_29_29 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
#line 391 "mode_ordering.m"
    {
#line 391 "mode_ordering.m"
      check_hlds__mode_ordering__V_28_28 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__NeedVisibleVars0_17, check_hlds__mode_ordering__V_29_29);
    }
#line 391 "mode_ordering.m"
    {
#line 391 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24, check_hlds__mode_ordering__V_28_28);
    }
#line 372 "mode_ordering.m"
  }
#line 369 "mode_ordering.m"
}

#line 367 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
#line 367 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 367 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 367 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 367 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 367 "mode_ordering.m"
{
#line 367 "mode_ordering.m"
  {
#line 367 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 367 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8;

#line 367 "mode_ordering.m"
    {
#line 367 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_disj_2_3_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8);
    }
#line 367 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8));
#line 367 "mode_ordering.m"
  }
#line 367 "mode_ordering.m"
}

#line 361 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
#line 361 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 361 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2,
#line 361 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3)
#line 361 "mode_ordering.m"
{
#line 364 "mode_ordering.m"
  {
#line 364 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 364 "mode_ordering.m"
    if ((check_hlds__mode_ordering__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3 = check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2;
#line 364 "mode_ordering.m"
    else
#line 365 "mode_ordering.m"
      {
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__GI_8;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_27_27;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_29_29;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_31_31;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_33_33;
#line 365 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_13_13, (MR_Integer) 0)));
#line 367 "mode_ordering.m"
        MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3;

#line 365 "mode_ordering.m"
        check_hlds__mode_ordering__GI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_13_13, (MR_Integer) 1)));
#line 422 "mode_ordering.m"
        {
#line 422 "mode_ordering.m"
          check_hlds__mode_ordering__V_27_27 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
#line 422 "mode_ordering.m"
        {
#line 422 "mode_ordering.m"
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2, check_hlds__mode_ordering__V_27_27);
        }
#line 423 "mode_ordering.m"
        {
#line 423 "mode_ordering.m"
          check_hlds__mode_ordering__V_29_29 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
#line 423 "mode_ordering.m"
        {
#line 423 "mode_ordering.m"
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26, check_hlds__mode_ordering__V_29_29);
        }
#line 424 "mode_ordering.m"
        {
#line 424 "mode_ordering.m"
          check_hlds__mode_ordering__V_31_31 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
#line 424 "mode_ordering.m"
        {
#line 424 "mode_ordering.m"
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28, check_hlds__mode_ordering__V_31_31);
        }
#line 425 "mode_ordering.m"
        {
#line 425 "mode_ordering.m"
          check_hlds__mode_ordering__V_33_33 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
#line 425 "mode_ordering.m"
        {
#line 425 "mode_ordering.m"
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30, check_hlds__mode_ordering__V_33_33);
        }
#line 367 "mode_ordering.m"
        {
#line 367 "mode_ordering.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[9], check_hlds__mode_ordering__Goals_9, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3);
        }
#line 367 "mode_ordering.m"
        *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3);
#line 365 "mode_ordering.m"
      }
#line 364 "mode_ordering.m"
  }
#line 361 "mode_ordering.m"
}

#line 254 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 254 "mode_ordering.m"
{
#line 254 "mode_ordering.m"
  {
#line 254 "mode_ordering.m"
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 254 "mode_ordering.m"
    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_HeadVar__5_126));
#line 254 "mode_ordering.m"
    {
#line 254 "mode_ordering.m"
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr);
#line 254 "mode_ordering.m"
      return;
    }
#line 254 "mode_ordering.m"
  }
#line 254 "mode_ordering.m"
}

#line 254 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
#line 254 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 254 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 254 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 254 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 254 "mode_ordering.m"
{
#line 254 "mode_ordering.m"
  {
#line 254 "mode_ordering.m"
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s check_hlds__mode_ordering__env;

#line 254 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
#line 254 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont = check_hlds__mode_ordering__cont;
#line 254 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 254 "mode_ordering.m"
    {
#line 254 "mode_ordering.m"
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

#line 254 "mode_ordering.m"
      {
#line 254 "mode_ordering.m"
        check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__254__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_HeadVar__5_126, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6, &check_hlds__mode_ordering__env);
      }
#line 254 "mode_ordering.m"
    }
#line 254 "mode_ordering.m"
  }
#line 254 "mode_ordering.m"
}

#line 302 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
#line 302 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 302 "mode_ordering.m"
{
#line 302 "mode_ordering.m"
  {
#line 302 "mode_ordering.m"
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 302 "mode_ordering.m"
    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3));
#line 302 "mode_ordering.m"
    {
#line 302 "mode_ordering.m"
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr);
#line 302 "mode_ordering.m"
      return;
    }
#line 302 "mode_ordering.m"
  }
#line 302 "mode_ordering.m"
}

#line 302 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
#line 302 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 302 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 302 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 302 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 302 "mode_ordering.m"
{
#line 302 "mode_ordering.m"
  {
#line 302 "mode_ordering.m"
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s check_hlds__mode_ordering__env;

#line 302 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
#line 302 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont = check_hlds__mode_ordering__cont;
#line 302 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 302 "mode_ordering.m"
    {
#line 302 "mode_ordering.m"
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

#line 302 "mode_ordering.m"
      {
#line 302 "mode_ordering.m"
        hlds__inst_graph__reachable_from_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4, &check_hlds__mode_ordering__env);
      }
#line 302 "mode_ordering.m"
    }
#line 302 "mode_ordering.m"
  }
#line 302 "mode_ordering.m"
}

#line 314 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3(
#line 314 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 314 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 314 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 314 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 314 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
#line 314 "mode_ordering.m"
{
#line 314 "mode_ordering.m"
  {
#line 314 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 314 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv7_Goal_6;
#line 314 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13;

#line 314 "mode_ordering.m"
    {
#line 314 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv7_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13);
    }
#line 314 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv7_Goal_6));
#line 314 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13));
#line 314 "mode_ordering.m"
  }
#line 314 "mode_ordering.m"
}

#line 196 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
#line 196 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 196 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 196 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 196 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 196 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
#line 196 "mode_ordering.m"
{
#line 196 "mode_ordering.m"
  {
#line 196 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 196 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv4_Goal_6;
#line 196 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13;

#line 196 "mode_ordering.m"
    {
#line 196 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv4_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13);
    }
#line 196 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv4_Goal_6));
#line 196 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13));
#line 196 "mode_ordering.m"
  }
#line 196 "mode_ordering.m"
}

#line 208 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
#line 208 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 208 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 208 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 208 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 208 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
#line 208 "mode_ordering.m"
{
#line 208 "mode_ordering.m"
  {
#line 208 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 208 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv1_Goal_6;
#line 208 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13;

#line 208 "mode_ordering.m"
    {
#line 208 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv1_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13);
    }
#line 208 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv1_Goal_6));
#line 208 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13));
#line 208 "mode_ordering.m"
  }
#line 208 "mode_ordering.m"
}

#line 187 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
#line 187 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GoalExpr0_7,
#line 187 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__GoalExpr_8,
#line 187 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81,
#line 187 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82,
#line 187 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83,
#line 187 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_84)
#line 187 "mode_ordering.m"
{
#line 193 "mode_ordering.m"
  {
#line 193 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 193 "mode_ordering.m"
#line 193 "mode_ordering.m"
    switch (MR_tag((MR_Word) check_hlds__mode_ordering__GoalExpr0_7)) {
#line 193 "mode_ordering.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 193 "mode_ordering.m"
      case (MR_Integer) 0:
#line 318 "mode_ordering.m"
        {
#line 318 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_110_110;
#line 318 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__SubGoal0_164 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_ordering__GoalExpr0_7), (MR_Integer) 0);
#line 318 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__SubGoal_165;
#line 320 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_186_186;

#line 319 "mode_ordering.m"
          {
#line 319 "mode_ordering.m"
            check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_164, &check_hlds__mode_ordering__SubGoal_165, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
          }
#line 320 "mode_ordering.m"
          check_hlds__mode_ordering__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_165, (MR_Integer) 0)));
#line 320 "mode_ordering.m"
          check_hlds__mode_ordering__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_165, (MR_Integer) 1)));
#line 320 "mode_ordering.m"
          {
#line 320 "mode_ordering.m"
            check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(check_hlds__mode_ordering__V_110_110, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
#line 321 "mode_ordering.m"
          *check_hlds__mode_ordering__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__mode_ordering__SubGoal_165);
#line 318 "mode_ordering.m"
        }
#line 193 "mode_ordering.m"
        break;
#line 193 "mode_ordering.m"
      case (MR_Integer) 1:
#line 234 "mode_ordering.m"
        {
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__VarA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__RHS0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__UnifyMode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Unification0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__InstGraph_42;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__RHS_44;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Unification_45;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ProdVars_158;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__MakeVisibleVars_159;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ConsumingVars_160;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__NeedVisibleVars_161;
#line 236 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_181_181;
#line 236 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_182_182;
#line 236 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_183_183;
#line 236 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_184_184;
#line 236 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_185_185;

#line 235 "mode_ordering.m"
          {
#line 235 "mode_ordering.m"
            check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116);
          }
#line 236 "mode_ordering.m"
          check_hlds__mode_ordering__InstGraph_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 0)));
#line 236 "mode_ordering.m"
          check_hlds__mode_ordering__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 1)));
#line 236 "mode_ordering.m"
          check_hlds__mode_ordering__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 2)));
#line 236 "mode_ordering.m"
          check_hlds__mode_ordering__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 3)));
#line 236 "mode_ordering.m"
          check_hlds__mode_ordering__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 4)));
#line 236 "mode_ordering.m"
          check_hlds__mode_ordering__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 5)));
#line 268 "mode_ordering.m"
#line 268 "mode_ordering.m"
          switch (MR_tag((MR_Word) check_hlds__mode_ordering__RHS0_38)) {
#line 268 "mode_ordering.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 268 "mode_ordering.m"
            case (MR_Integer) 0:
#line 238 "mode_ordering.m"
              {
#line 238 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__VarB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)));
#line 238 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__ConsumingVarsList_46;
#line 238 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__V_125_125;

#line 239 "mode_ordering.m"
                check_hlds__mode_ordering__RHS_44 = check_hlds__mode_ordering__RHS0_38;
#line 240 "mode_ordering.m"
                {
#line 240 "mode_ordering.m"
                  check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarA_37);
                }
#line 244 "mode_ordering.m"
                if (check_hlds__mode_ordering__succeeded)
#line 241 "mode_ordering.m"
                  {
#line 241 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_204_204;

#line 241 "mode_ordering.m"
                    {
#line 241 "mode_ordering.m"
                      check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "mode_ordering.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 241 "mode_ordering.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 241 "mode_ordering.m"
                    }
#line 5772 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 242 "mode_ordering.m"
                    {
#line 242 "mode_ordering.m"
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_204_204, check_hlds__mode_ordering__VarA_37);
                    }
#line 243 "mode_ordering.m"
                    {
#line 243 "mode_ordering.m"
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_204_204, check_hlds__mode_ordering__VarB_43);
                    }
#line 241 "mode_ordering.m"
                  }
#line 244 "mode_ordering.m"
                else
#line 248 "mode_ordering.m"
                  {
#line 244 "mode_ordering.m"
                    {
#line 244 "mode_ordering.m"
                      check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarB_43);
                    }
#line 248 "mode_ordering.m"
                    if (check_hlds__mode_ordering__succeeded)
#line 245 "mode_ordering.m"
                      {
#line 245 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__TypeCtorInfo_206_206;

#line 245 "mode_ordering.m"
                        {
#line 245 "mode_ordering.m"
                          check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "mode_ordering.m"
                          MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 245 "mode_ordering.m"
                          MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 245 "mode_ordering.m"
                        }
#line 5812 "check_hlds.mode_ordering.c"
                        check_hlds__mode_ordering__TypeCtorInfo_206_206 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 246 "mode_ordering.m"
                        {
#line 246 "mode_ordering.m"
                          check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_206_206, check_hlds__mode_ordering__VarB_43);
                        }
#line 247 "mode_ordering.m"
                        {
#line 247 "mode_ordering.m"
                          check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_206_206, check_hlds__mode_ordering__VarA_37);
                        }
#line 245 "mode_ordering.m"
                      }
#line 248 "mode_ordering.m"
                    else
#line 249 "mode_ordering.m"
                      {
#line 249 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__TypeCtorInfo_207_207;
#line 249 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__V_122_122;
#line 249 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__V_123_123;

#line 249 "mode_ordering.m"
                        {
#line 249 "mode_ordering.m"
                          check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 249 "mode_ordering.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 249 "mode_ordering.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 249 "mode_ordering.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 2) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 249 "mode_ordering.m"
                        }
#line 5849 "check_hlds.mode_ordering.c"
                        check_hlds__mode_ordering__TypeCtorInfo_207_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 251 "mode_ordering.m"
                        {
#line 251 "mode_ordering.m"
                          check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_207_207);
                        }
#line 252 "mode_ordering.m"
                        {
#line 252 "mode_ordering.m"
                          check_hlds__mode_ordering__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "mode_ordering.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_123_123, 0) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 252 "mode_ordering.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "mode_ordering.m"
                        }
#line 252 "mode_ordering.m"
                        {
#line 252 "mode_ordering.m"
                          check_hlds__mode_ordering__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "mode_ordering.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_122_122, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 252 "mode_ordering.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_122_122, 1) = ((MR_Box) (check_hlds__mode_ordering__V_123_123));
#line 252 "mode_ordering.m"
                        }
#line 252 "mode_ordering.m"
                        {
#line 252 "mode_ordering.m"
                          check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_207_207, check_hlds__mode_ordering__V_122_122);
                        }
#line 249 "mode_ordering.m"
                      }
#line 248 "mode_ordering.m"
                  }
#line 254 "mode_ordering.m"
                {
#line 254 "mode_ordering.m"
                  check_hlds__mode_ordering__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 254 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[1]));
#line 254 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7));
#line 254 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 254 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 3) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 254 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 4) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_42));
#line 254 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 5) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 254 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 6) = ((MR_Box) (check_hlds__mode_ordering__ProdVars_158));
#line 254 "mode_ordering.m"
                }
#line 254 "mode_ordering.m"
                {
#line 254 "mode_ordering.m"
                  check_hlds__mode_ordering__ConsumingVarsList_46 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_125_125);
                }
#line 267 "mode_ordering.m"
                {
#line 267 "mode_ordering.m"
                  check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ConsumingVarsList_46);
                }
#line 238 "mode_ordering.m"
                *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
#line 238 "mode_ordering.m"
              }
#line 268 "mode_ordering.m"
              break;
#line 268 "mode_ordering.m"
            case (MR_Integer) 1:
#line 269 "mode_ordering.m"
              {
#line 269 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__ArgVars_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 2)));
#line 269 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering___ConsId_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)));
#line 269 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering___IsExistConstruct_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 1)));

#line 270 "mode_ordering.m"
                check_hlds__mode_ordering__RHS_44 = check_hlds__mode_ordering__RHS0_38;
#line 271 "mode_ordering.m"
                {
#line 271 "mode_ordering.m"
                  check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarA_37);
                }
#line 278 "mode_ordering.m"
                if (check_hlds__mode_ordering__succeeded)
#line 274 "mode_ordering.m"
                  {
#line 274 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_213_213;
#line 274 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_121_121;

#line 274 "mode_ordering.m"
                    check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
#line 5950 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__TypeCtorInfo_213_213 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 275 "mode_ordering.m"
                    {
#line 275 "mode_ordering.m"
                      check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213);
                    }
#line 276 "mode_ordering.m"
                    {
#line 276 "mode_ordering.m"
                      check_hlds__mode_ordering__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "mode_ordering.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_121_121, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 276 "mode_ordering.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_121_121, 1) = ((MR_Box) (check_hlds__mode_ordering__ArgVars_52));
#line 276 "mode_ordering.m"
                    }
#line 276 "mode_ordering.m"
                    {
#line 276 "mode_ordering.m"
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213, check_hlds__mode_ordering__V_121_121);
                    }
#line 277 "mode_ordering.m"
                    {
#line 277 "mode_ordering.m"
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213);
                    }
#line 274 "mode_ordering.m"
                  }
#line 278 "mode_ordering.m"
                else
#line 281 "mode_ordering.m"
                  {
#line 281 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_214_214;

#line 281 "mode_ordering.m"
                    check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
#line 5988 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__TypeCtorInfo_214_214 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 282 "mode_ordering.m"
                    {
#line 282 "mode_ordering.m"
                      check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__VarA_37);
                    }
#line 283 "mode_ordering.m"
                    {
#line 283 "mode_ordering.m"
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__ArgVars_52);
                    }
#line 284 "mode_ordering.m"
                    {
#line 284 "mode_ordering.m"
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__VarA_37);
                    }
#line 281 "mode_ordering.m"
                  }
#line 269 "mode_ordering.m"
                *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
#line 269 "mode_ordering.m"
              }
#line 268 "mode_ordering.m"
              break;
#line 268 "mode_ordering.m"
            case (MR_Integer) 2:
#line 289 "mode_ordering.m"
              {
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__TypeCtorInfo_217_217;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__A_53;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__B_54;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__C_55;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__NonLocals_57;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__LambdaVars_58;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__H_60;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__SubGoal0_61;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__Modes_62;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__SubGoal_63;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__GoalId_64;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__V_120_120;
#line 289 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__ConsumingVarsList_157;

#line 289 "mode_ordering.m"
                check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
#line 290 "mode_ordering.m"
                check_hlds__mode_ordering__A_53 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 290 "mode_ordering.m"
                check_hlds__mode_ordering__B_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 290 "mode_ordering.m"
                check_hlds__mode_ordering__C_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 290 "mode_ordering.m"
                check_hlds__mode_ordering__NonLocals_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 2)));
#line 290 "mode_ordering.m"
                check_hlds__mode_ordering__LambdaVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 3)));
#line 290 "mode_ordering.m"
                check_hlds__mode_ordering__Modes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 4)));
#line 290 "mode_ordering.m"
                check_hlds__mode_ordering__H_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 5)));
#line 290 "mode_ordering.m"
                check_hlds__mode_ordering__SubGoal0_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 6)));
#line 296 "mode_ordering.m"
                {
#line 296 "mode_ordering.m"
                  check_hlds__mode_ordering__GoalId_64 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115);
                }
#line 297 "mode_ordering.m"
                {
#line 297 "mode_ordering.m"
                  check_hlds__mode_ordering__enter_lambda_goal_3_p_0(check_hlds__mode_ordering__GoalId_64, check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117);
                }
#line 298 "mode_ordering.m"
                {
#line 298 "mode_ordering.m"
                  check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_61, &check_hlds__mode_ordering__SubGoal_63, check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118);
                }
#line 293 "mode_ordering.m"
                {
#line 293 "mode_ordering.m"
                  check_hlds__mode_ordering__RHS_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 293 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 0) = ((MR_Box) ((check_hlds__mode_ordering__A_53 | ((((check_hlds__mode_ordering__B_54 << (MR_Integer) 2)) | ((check_hlds__mode_ordering__C_55 << (MR_Integer) 3)))))));
#line 293 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 1) = (MR_Integer) 0;
#line 293 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 2) = ((MR_Box) (check_hlds__mode_ordering__NonLocals_57));
#line 293 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 3) = ((MR_Box) (check_hlds__mode_ordering__LambdaVars_58));
#line 293 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 4) = ((MR_Box) (check_hlds__mode_ordering__Modes_62));
#line 293 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 5) = ((MR_Box) (check_hlds__mode_ordering__H_60));
#line 293 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 6) = ((MR_Box) (check_hlds__mode_ordering__SubGoal_63));
#line 293 "mode_ordering.m"
                }
#line 299 "mode_ordering.m"
                {
#line 299 "mode_ordering.m"
                  check_hlds__mode_ordering__leave_lambda_goal_2_p_0(check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
                }
#line 302 "mode_ordering.m"
                {
#line 302 "mode_ordering.m"
                  check_hlds__mode_ordering__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 302 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[0]));
#line 302 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5));
#line 302 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 3) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_42));
#line 302 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 4) = ((MR_Box) (check_hlds__mode_ordering__NonLocals_57));
#line 302 "mode_ordering.m"
                }
#line 301 "mode_ordering.m"
                {
#line 301 "mode_ordering.m"
                  check_hlds__mode_ordering__ConsumingVarsList_157 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_120_120);
                }
#line 6127 "check_hlds.mode_ordering.c"
                check_hlds__mode_ordering__TypeCtorInfo_217_217 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 303 "mode_ordering.m"
                {
#line 303 "mode_ordering.m"
                  check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__ConsumingVarsList_157);
                }
#line 304 "mode_ordering.m"
                {
#line 304 "mode_ordering.m"
                  check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__VarA_37);
                }
#line 305 "mode_ordering.m"
                {
#line 305 "mode_ordering.m"
                  check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__NonLocals_57);
                }
#line 289 "mode_ordering.m"
              }
#line 268 "mode_ordering.m"
              break;
#line 268 "mode_ordering.m"
          }
#line 307 "mode_ordering.m"
          {
#line 307 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(check_hlds__mode_ordering__ConsumingVars_160, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127);
          }
#line 308 "mode_ordering.m"
          {
#line 308 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(check_hlds__mode_ordering__MakeVisibleVars_159, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128);
          }
#line 309 "mode_ordering.m"
          {
#line 309 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(check_hlds__mode_ordering__NeedVisibleVars_161, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
#line 311 "mode_ordering.m"
          {
#line 311 "mode_ordering.m"
            MR_Word base;
#line 311 "mode_ordering.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 311 "mode_ordering.m"
            *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 311 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 311 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_ordering__RHS_44));
#line 311 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__mode_ordering__UnifyMode_39));
#line 311 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__mode_ordering__Unification_45));
#line 311 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__mode_ordering__Context_41));
#line 311 "mode_ordering.m"
          }
#line 234 "mode_ordering.m"
        }
#line 193 "mode_ordering.m"
        break;
#line 193 "mode_ordering.m"
      case (MR_Integer) 2:
#line 213 "mode_ordering.m"
        {
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__TypeCtorInfo_202_202;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ProdVars_24;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__MakeVisibleVars_25;
#line 213 "mode_ordering.m"
          MR_Integer check_hlds__mode_ordering__ProcId_26;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ConsumingVars_27;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__NeedVisibleVars_28;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_138_138;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_140_140;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141;
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142;
#line 213 "mode_ordering.m"
          MR_Integer check_hlds__mode_ordering__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
#line 213 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 5)));
#line 226 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_175_175;
#line 226 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_177_177;
#line 226 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_178_178;
#line 226 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_179_179;
#line 226 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_180_180;
#line 226 "mode_ordering.m"
          MR_Integer check_hlds__mode_ordering__V_176_176;

#line 214 "mode_ordering.m"
          {
#line 214 "mode_ordering.m"
            check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&check_hlds__mode_ordering__ProdVars_24, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137);
          }
#line 6247 "check_hlds.mode_ordering.c"
          check_hlds__mode_ordering__TypeCtorInfo_202_202 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 216 "mode_ordering.m"
          {
#line 216 "mode_ordering.m"
            check_hlds__mode_ordering__V_138_138 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__Args_20);
          }
#line 216 "mode_ordering.m"
          {
#line 216 "mode_ordering.m"
            check_hlds__mode_ordering__MakeVisibleVars_25 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__V_138_138, check_hlds__mode_ordering__ProdVars_24);
          }
#line 218 "mode_ordering.m"
          {
#line 218 "mode_ordering.m"
            check_hlds__mode_ordering__find_matching_proc_7_p_0(check_hlds__mode_ordering__PredId_18, check_hlds__mode_ordering__Args_20, check_hlds__mode_ordering__ProdVars_24, &check_hlds__mode_ordering__ProcId_26, &check_hlds__mode_ordering__ConsumingVars_27, check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
          }
#line 221 "mode_ordering.m"
          {
#line 221 "mode_ordering.m"
            check_hlds__mode_ordering__V_140_140 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__Args_20);
          }
#line 221 "mode_ordering.m"
          {
#line 221 "mode_ordering.m"
            check_hlds__mode_ordering__NeedVisibleVars_28 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__V_140_140, check_hlds__mode_ordering__ConsumingVars_27);
          }
#line 223 "mode_ordering.m"
          {
#line 223 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(check_hlds__mode_ordering__ConsumingVars_27, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141);
          }
#line 224 "mode_ordering.m"
          {
#line 224 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(check_hlds__mode_ordering__MakeVisibleVars_25, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142);
          }
#line 225 "mode_ordering.m"
          {
#line 225 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(check_hlds__mode_ordering__NeedVisibleVars_28, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
#line 226 "mode_ordering.m"
          check_hlds__mode_ordering__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
#line 226 "mode_ordering.m"
          check_hlds__mode_ordering__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 226 "mode_ordering.m"
          check_hlds__mode_ordering__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 226 "mode_ordering.m"
          check_hlds__mode_ordering__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
#line 226 "mode_ordering.m"
          check_hlds__mode_ordering__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
#line 226 "mode_ordering.m"
          check_hlds__mode_ordering__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 5)));
#line 226 "mode_ordering.m"
          {
#line 226 "mode_ordering.m"
            MR_Word base;
#line 226 "mode_ordering.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 226 "mode_ordering.m"
            *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 226 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_175_175));
#line 226 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_ordering__ProcId_26));
#line 226 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__mode_ordering__V_177_177));
#line 226 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_178_178));
#line 226 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_179_179));
#line 226 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_180_180));
#line 226 "mode_ordering.m"
          }
#line 213 "mode_ordering.m"
        }
#line 193 "mode_ordering.m"
        break;
#line 193 "mode_ordering.m"
      case (MR_Integer) 3:
#line 193 "mode_ordering.m"
#line 193 "mode_ordering.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)))) {
#line 193 "mode_ordering.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 193 "mode_ordering.m"
          case (MR_Integer) 0:
#line 228 "mode_ordering.m"
            {
#line 229 "mode_ordering.m"
              {
#line 229 "mode_ordering.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "generic_call NYI");
#line 229 "mode_ordering.m"
                return;
              }
#line 228 "mode_ordering.m"
            }
#line 193 "mode_ordering.m"
            break;
#line 193 "mode_ordering.m"
          case (MR_Integer) 1:
#line 347 "mode_ordering.m"
            {
#line 348 "mode_ordering.m"
              {
#line 348 "mode_ordering.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "pragma_foreign_code NYI");
#line 348 "mode_ordering.m"
                return;
              }
#line 347 "mode_ordering.m"
            }
#line 193 "mode_ordering.m"
            break;
#line 193 "mode_ordering.m"
          case (MR_Integer) 2:
#line 193 "mode_ordering.m"
            {
#line 193 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 193 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 193 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Goals_15;

#line 206 "mode_ordering.m"
#line 206 "mode_ordering.m"
              switch (check_hlds__mode_ordering__ConjType_11) {
#line 206 "mode_ordering.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 206 "mode_ordering.m"
                case (MR_Integer) 1:
#line 207 "mode_ordering.m"
                  {
#line 207 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_200_200 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 208 "mode_ordering.m"
                    MR_Box check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84;

#line 208 "mode_ordering.m"
                    {
#line 208 "mode_ordering.m"
                      mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_200_200, check_hlds__mode_ordering__TypeCtorInfo_200_200, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[6], check_hlds__mode_ordering__Goals0_12, &check_hlds__mode_ordering__Goals_15, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84);
                    }
#line 208 "mode_ordering.m"
                    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84);
#line 209 "mode_ordering.m"
                    {
#line 209 "mode_ordering.m"
                      check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__Goals_15, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
                    }
#line 207 "mode_ordering.m"
                  }
#line 206 "mode_ordering.m"
                  break;
#line 206 "mode_ordering.m"
                case (MR_Integer) 0:
#line 195 "mode_ordering.m"
                  {
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_193_193 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_195_195;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__Goals1_13;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_14;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__ConsVars_16;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__NeedVars_17;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_151_151;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_152_152;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_154_154;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_155_155;
#line 196 "mode_ordering.m"
                    MR_Box check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84;
#line 197 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_170_170;
#line 197 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_171_171;
#line 197 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_172_172;
#line 197 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_173_173;
#line 197 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_174_174;

#line 196 "mode_ordering.m"
                    {
#line 196 "mode_ordering.m"
                      mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_193_193, check_hlds__mode_ordering__TypeCtorInfo_193_193, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[7], check_hlds__mode_ordering__Goals0_12, &check_hlds__mode_ordering__Goals1_13, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84);
                    }
#line 196 "mode_ordering.m"
                    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84);
#line 197 "mode_ordering.m"
                    check_hlds__mode_ordering__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 0)));
#line 197 "mode_ordering.m"
                    check_hlds__mode_ordering__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 1)));
#line 197 "mode_ordering.m"
                    check_hlds__mode_ordering__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 2)));
#line 197 "mode_ordering.m"
                    check_hlds__mode_ordering__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 3)));
#line 197 "mode_ordering.m"
                    check_hlds__mode_ordering__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 4)));
#line 197 "mode_ordering.m"
                    check_hlds__mode_ordering__ForwardGoalPathMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 5)));
#line 198 "mode_ordering.m"
                    {
#line 198 "mode_ordering.m"
                      check_hlds__mode_ordering__mode_order_conj_3_p_0(check_hlds__mode_ordering__ForwardGoalPathMap_14, check_hlds__mode_ordering__Goals1_13, &check_hlds__mode_ordering__Goals_15);
                    }
#line 199 "mode_ordering.m"
                    {
#line 199 "mode_ordering.m"
                      check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__Goals_15, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
#line 200 "mode_ordering.m"
                    {
#line 200 "mode_ordering.m"
                      check_hlds__mode_ordering__ConsVars_16 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
#line 6480 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__TypeCtorInfo_195_195 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 202 "mode_ordering.m"
                    {
#line 202 "mode_ordering.m"
                      check_hlds__mode_ordering__V_152_152 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
#line 202 "mode_ordering.m"
                    {
#line 202 "mode_ordering.m"
                      check_hlds__mode_ordering__V_151_151 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_195_195, check_hlds__mode_ordering__ConsVars_16, check_hlds__mode_ordering__V_152_152);
                    }
#line 201 "mode_ordering.m"
                    {
#line 201 "mode_ordering.m"
                      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149, check_hlds__mode_ordering__V_151_151);
                    }
#line 203 "mode_ordering.m"
                    {
#line 203 "mode_ordering.m"
                      check_hlds__mode_ordering__NeedVars_17 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150);
                    }
#line 205 "mode_ordering.m"
                    {
#line 205 "mode_ordering.m"
                      check_hlds__mode_ordering__V_155_155 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150);
                    }
#line 205 "mode_ordering.m"
                    {
#line 205 "mode_ordering.m"
                      check_hlds__mode_ordering__V_154_154 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_195_195, check_hlds__mode_ordering__NeedVars_17, check_hlds__mode_ordering__V_155_155);
                    }
#line 204 "mode_ordering.m"
                    {
#line 204 "mode_ordering.m"
                      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150, check_hlds__mode_ordering__V_154_154);
                    }
#line 195 "mode_ordering.m"
                  }
#line 206 "mode_ordering.m"
                  break;
#line 206 "mode_ordering.m"
              }
#line 211 "mode_ordering.m"
              {
#line 211 "mode_ordering.m"
                MR_Word base;
#line 211 "mode_ordering.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 211 "mode_ordering.m"
                *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 211 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 211 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__ConjType_11));
#line 211 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__Goals_15));
#line 211 "mode_ordering.m"
              }
#line 193 "mode_ordering.m"
            }
#line 193 "mode_ordering.m"
            break;
#line 193 "mode_ordering.m"
          case (MR_Integer) 3:
#line 313 "mode_ordering.m"
            {
#line 313 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__TypeCtorInfo_222_222 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 313 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Goals0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 313 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Goals_163;
#line 314 "mode_ordering.m"
              MR_Box check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84;

#line 314 "mode_ordering.m"
              {
#line 314 "mode_ordering.m"
                mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_222_222, check_hlds__mode_ordering__TypeCtorInfo_222_222, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[8], check_hlds__mode_ordering__Goals0_162, &check_hlds__mode_ordering__Goals_163, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84);
              }
#line 314 "mode_ordering.m"
              *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84);
#line 315 "mode_ordering.m"
              {
#line 315 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_disj_3_p_0(check_hlds__mode_ordering__Goals_163, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
#line 316 "mode_ordering.m"
              {
#line 316 "mode_ordering.m"
                MR_Word base;
#line 316 "mode_ordering.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "mode_ordering.m"
                *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 316 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 316 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Goals_163));
#line 316 "mode_ordering.m"
              }
#line 313 "mode_ordering.m"
            }
#line 193 "mode_ordering.m"
            break;
#line 193 "mode_ordering.m"
          case (MR_Integer) 4:
#line 231 "mode_ordering.m"
            {
#line 232 "mode_ordering.m"
              {
#line 232 "mode_ordering.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "switch");
#line 232 "mode_ordering.m"
                return;
              }
#line 231 "mode_ordering.m"
            }
#line 193 "mode_ordering.m"
            break;
#line 193 "mode_ordering.m"
          case (MR_Integer) 5:
#line 325 "mode_ordering.m"
            {
#line 325 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 325 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_107_107;
#line 325 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 325 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__SubGoal_167;
#line 327 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_187_187;

#line 326 "mode_ordering.m"
              {
#line 326 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_166, &check_hlds__mode_ordering__SubGoal_167, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
              }
#line 327 "mode_ordering.m"
              check_hlds__mode_ordering__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_167, (MR_Integer) 0)));
#line 327 "mode_ordering.m"
              check_hlds__mode_ordering__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_167, (MR_Integer) 1)));
#line 327 "mode_ordering.m"
              {
#line 327 "mode_ordering.m"
                check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(check_hlds__mode_ordering__V_107_107, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
#line 328 "mode_ordering.m"
              {
#line 328 "mode_ordering.m"
                MR_Word base;
#line 328 "mode_ordering.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 328 "mode_ordering.m"
                *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 328 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 328 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Reason_65));
#line 328 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__SubGoal_167));
#line 328 "mode_ordering.m"
              }
#line 325 "mode_ordering.m"
            }
#line 193 "mode_ordering.m"
            break;
#line 193 "mode_ordering.m"
          case (MR_Integer) 6:
#line 330 "mode_ordering.m"
            {
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__TypeCtorInfo_224_224;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Locals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Cond_70;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Then_71;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Else_72;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_94_94;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_96_96;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_99_99;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_100_100;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_102_102;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_103_103;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_104_104;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__ConsVars_168;
#line 330 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__NeedVars_169;
#line 344 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_188_188;

#line 331 "mode_ordering.m"
              {
#line 331 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Cond0_67, &check_hlds__mode_ordering__Cond_70, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91);
              }
#line 332 "mode_ordering.m"
              {
#line 332 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Then0_68, &check_hlds__mode_ordering__Then_71, check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92);
              }
#line 333 "mode_ordering.m"
              {
#line 333 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Else0_69, &check_hlds__mode_ordering__Else_72, check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
              }
#line 336 "mode_ordering.m"
              {
#line 336 "mode_ordering.m"
                check_hlds__mode_ordering__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "mode_ordering.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_96_96, 0) = ((MR_Box) (check_hlds__mode_ordering__Then_71));
#line 336 "mode_ordering.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "mode_ordering.m"
              }
#line 336 "mode_ordering.m"
              {
#line 336 "mode_ordering.m"
                check_hlds__mode_ordering__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "mode_ordering.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_94_94, 0) = ((MR_Box) (check_hlds__mode_ordering__Cond_70));
#line 336 "mode_ordering.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_94_94, 1) = ((MR_Box) (check_hlds__mode_ordering__V_96_96));
#line 336 "mode_ordering.m"
              }
#line 336 "mode_ordering.m"
              {
#line 336 "mode_ordering.m"
                check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__V_94_94, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
#line 337 "mode_ordering.m"
              {
#line 337 "mode_ordering.m"
                check_hlds__mode_ordering__ConsVars_168 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
#line 6746 "check_hlds.mode_ordering.c"
              check_hlds__mode_ordering__TypeCtorInfo_224_224 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 339 "mode_ordering.m"
              {
#line 339 "mode_ordering.m"
                check_hlds__mode_ordering__V_100_100 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
#line 339 "mode_ordering.m"
              {
#line 339 "mode_ordering.m"
                check_hlds__mode_ordering__V_99_99 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_224_224, check_hlds__mode_ordering__ConsVars_168, check_hlds__mode_ordering__V_100_100);
              }
#line 338 "mode_ordering.m"
              {
#line 338 "mode_ordering.m"
                check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95, check_hlds__mode_ordering__V_99_99);
              }
#line 340 "mode_ordering.m"
              {
#line 340 "mode_ordering.m"
                check_hlds__mode_ordering__NeedVars_169 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98);
              }
#line 342 "mode_ordering.m"
              {
#line 342 "mode_ordering.m"
                check_hlds__mode_ordering__V_103_103 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98);
              }
#line 342 "mode_ordering.m"
              {
#line 342 "mode_ordering.m"
                check_hlds__mode_ordering__V_102_102 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_224_224, check_hlds__mode_ordering__NeedVars_169, check_hlds__mode_ordering__V_103_103);
              }
#line 341 "mode_ordering.m"
              {
#line 341 "mode_ordering.m"
                check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98, check_hlds__mode_ordering__V_102_102);
              }
#line 344 "mode_ordering.m"
              check_hlds__mode_ordering__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Else_72, (MR_Integer) 0)));
#line 344 "mode_ordering.m"
              check_hlds__mode_ordering__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Else_72, (MR_Integer) 1)));
#line 344 "mode_ordering.m"
              {
#line 344 "mode_ordering.m"
                check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(check_hlds__mode_ordering__V_104_104, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
#line 345 "mode_ordering.m"
              {
#line 345 "mode_ordering.m"
                MR_Word base;
#line 345 "mode_ordering.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 345 "mode_ordering.m"
                *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 345 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 345 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Locals_66));
#line 345 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__Cond_70));
#line 345 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_ordering__Then_71));
#line 345 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__mode_ordering__Else_72));
#line 345 "mode_ordering.m"
              }
#line 330 "mode_ordering.m"
            }
#line 193 "mode_ordering.m"
            break;
#line 193 "mode_ordering.m"
          case (MR_Integer) 7:
#line 350 "mode_ordering.m"
            {
#line 351 "mode_ordering.m"
              {
#line 351 "mode_ordering.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "shorthand");
#line 351 "mode_ordering.m"
                return;
              }
#line 350 "mode_ordering.m"
            }
#line 193 "mode_ordering.m"
            break;
#line 193 "mode_ordering.m"
        }
#line 193 "mode_ordering.m"
        break;
#line 193 "mode_ordering.m"
    }
#line 193 "mode_ordering.m"
  }
#line 187 "mode_ordering.m"
}

#line 179 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_4_p_0(
#line 179 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goal0_5,
#line 179 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__Goal_6,
#line 179 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12,
#line 179 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_13)
#line 179 "mode_ordering.m"
{
#line 182 "mode_ordering.m"
  {
#line 182 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 182 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_5, (MR_Integer) 0)));
#line 182 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_5, (MR_Integer) 1)));
#line 182 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalExpr_10;
#line 182 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalInfo_11;

#line 184 "mode_ordering.m"
    {
#line 184 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_2_6_p_0(check_hlds__mode_ordering__GoalExpr0_8, &check_hlds__mode_ordering__GoalExpr_10, check_hlds__mode_ordering__GoalInfo0_9, &check_hlds__mode_ordering__GoalInfo_11, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12, check_hlds__mode_ordering__STATE_VARIABLE_MOI_13);
    }
#line 185 "mode_ordering.m"
    {
#line 185 "mode_ordering.m"
      MR_Word base;
#line 185 "mode_ordering.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "mode_ordering.m"
      *check_hlds__mode_ordering__Goal_6 = base;
#line 185 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__GoalExpr_10));
#line 185 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__GoalInfo_11));
#line 185 "mode_ordering.m"
    }
#line 182 "mode_ordering.m"
  }
#line 179 "mode_ordering.m"
}

#line 171 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
#line 171 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
#line 171 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8)
#line 171 "mode_ordering.m"
{
#line 174 "mode_ordering.m"
  {
#line 174 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 174 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
#line 174 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting_6;
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
#line 176 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_5_5;
#line 176 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_V_5_5;
#line 177 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15;
#line 177 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_16_16;
#line 177 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_18_18;
#line 177 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 177 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_20_20;
#line 177 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;

#line 176 "mode_ordering.m"
    {
#line 176 "mode_ordering.m"
      mercury__stack__det_pop_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, &check_hlds__mode_ordering__conv0_V_5_5, check_hlds__mode_ordering__LambdaNesting0_4, &check_hlds__mode_ordering__LambdaNesting_6);
    }
#line 176 "mode_ordering.m"
    check_hlds__mode_ordering__V_5_5 = ((MR_Word) check_hlds__mode_ordering__conv0_V_5_5);
#line 177 "mode_ordering.m"
    check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
#line 177 "mode_ordering.m"
    check_hlds__mode_ordering__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
#line 177 "mode_ordering.m"
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
#line 177 "mode_ordering.m"
    check_hlds__mode_ordering__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
#line 177 "mode_ordering.m"
    check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
#line 177 "mode_ordering.m"
    check_hlds__mode_ordering__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
#line 177 "mode_ordering.m"
    {
#line 177 "mode_ordering.m"
      MR_Word base;
#line 177 "mode_ordering.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 177 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_MOI_8 = base;
#line 177 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_15_15));
#line 177 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__V_16_16));
#line 177 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_ordering__LambdaNesting_6));
#line 177 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_18_18));
#line 177 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_19_19));
#line 177 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_20_20));
#line 177 "mode_ordering.m"
    }
#line 174 "mode_ordering.m"
  }
#line 171 "mode_ordering.m"
}

#line 164 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
#line 164 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GoalId_4,
#line 164 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
#line 164 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8)
#line 164 "mode_ordering.m"
{
#line 167 "mode_ordering.m"
  {
#line 167 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 167 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
#line 167 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_10_10;
#line 168 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
#line 168 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
#line 168 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
#line 168 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
#line 168 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
#line 169 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_16_16;
#line 169 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;
#line 169 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 169 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_20_20;
#line 169 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_21_21;
#line 169 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_18_18;

#line 169 "mode_ordering.m"
    {
#line 169 "mode_ordering.m"
      check_hlds__mode_ordering__V_10_10 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_ordering__LambdaNesting0_6, ((MR_Box) (check_hlds__mode_ordering__GoalId_4)));
    }
#line 169 "mode_ordering.m"
    check_hlds__mode_ordering__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
#line 169 "mode_ordering.m"
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
#line 169 "mode_ordering.m"
    check_hlds__mode_ordering__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
#line 169 "mode_ordering.m"
    check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
#line 169 "mode_ordering.m"
    check_hlds__mode_ordering__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
#line 169 "mode_ordering.m"
    check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
#line 169 "mode_ordering.m"
    {
#line 169 "mode_ordering.m"
      MR_Word base;
#line 169 "mode_ordering.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 169 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_MOI_8 = base;
#line 169 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_16_16));
#line 169 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__V_17_17));
#line 169 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_ordering__V_10_10));
#line 169 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_19_19));
#line 169 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_20_20));
#line 169 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_21_21));
#line 169 "mode_ordering.m"
    }
#line 167 "mode_ordering.m"
  }
#line 164 "mode_ordering.m"
}

#line 120 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 120 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__ProcId_14,
#line 120 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22,
#line 120 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23)
#line 120 "mode_ordering.m"
{
#line 125 "mode_ordering.m"
  {
#line 125 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProcInfo0_16;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ModeDeclConstraint_17;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Constraint_18;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__InstGraphInfo_19;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__InstGraph_20;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProcInfo_21;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVarsMap_35;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting0_36;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_37;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MOI0_38;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Goal0_39;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Goal_40;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalExpr0_49;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalInfo0_50;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalExpr_51;
#line 125 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalInfo_52;
#line 184 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering___MOI_41;

#line 126 "mode_ordering.m"
    {
#line 126 "mode_ordering.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, check_hlds__mode_ordering__ProcId_14, &check_hlds__mode_ordering__ProcInfo0_16);
    }
#line 127 "mode_ordering.m"
    {
#line 127 "mode_ordering.m"
      hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__ModeDeclConstraint_17);
    }
#line 128 "mode_ordering.m"
    {
#line 128 "mode_ordering.m"
      check_hlds__mode_ordering__Constraint_18 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__ModeDeclConstraint_17);
    }
#line 129 "mode_ordering.m"
    {
#line 129 "mode_ordering.m"
      hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, &check_hlds__mode_ordering__InstGraphInfo_19);
    }
#line 130 "mode_ordering.m"
    {
#line 130 "mode_ordering.m"
      check_hlds__mode_ordering__InstGraph_20 = hlds__inst_graph__implementation_inst_graph_1_f_0(check_hlds__mode_ordering__InstGraphInfo_19);
    }
#line 144 "mode_ordering.m"
    {
#line 144 "mode_ordering.m"
      check_hlds__mode_ordering__ProdVarsMap_35 = check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0(check_hlds__mode_ordering__Constraint_18, check_hlds__mode_ordering__MCI_12);
    }
#line 145 "mode_ordering.m"
    {
#line 145 "mode_ordering.m"
      check_hlds__mode_ordering__LambdaNesting0_36 = mercury__stack__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    }
#line 146 "mode_ordering.m"
    {
#line 146 "mode_ordering.m"
      check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_p_0(check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__PredId_11, &check_hlds__mode_ordering__ForwardGoalPathMap_37);
    }
#line 147 "mode_ordering.m"
    {
#line 147 "mode_ordering.m"
      check_hlds__mode_ordering__MOI0_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 147 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 0) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_20));
#line 147 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 1) = ((MR_Box) (check_hlds__mode_ordering__ProdVarsMap_35));
#line 147 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 2) = ((MR_Box) (check_hlds__mode_ordering__LambdaNesting0_36));
#line 147 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 3) = ((MR_Box) (check_hlds__mode_ordering__ModuleInfo_9));
#line 147 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_10));
#line 147 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 5) = ((MR_Box) (check_hlds__mode_ordering__ForwardGoalPathMap_37));
#line 147 "mode_ordering.m"
    }
#line 150 "mode_ordering.m"
    {
#line 150 "mode_ordering.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__Goal0_39);
    }
#line 183 "mode_ordering.m"
    check_hlds__mode_ordering__GoalExpr0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_39, (MR_Integer) 0)));
#line 183 "mode_ordering.m"
    check_hlds__mode_ordering__GoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_39, (MR_Integer) 1)));
#line 184 "mode_ordering.m"
    {
#line 184 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_2_6_p_0(check_hlds__mode_ordering__GoalExpr0_49, &check_hlds__mode_ordering__GoalExpr_51, check_hlds__mode_ordering__GoalInfo0_50, &check_hlds__mode_ordering__GoalInfo_52, check_hlds__mode_ordering__MOI0_38, &check_hlds__mode_ordering___MOI_41);
    }
#line 185 "mode_ordering.m"
    {
#line 185 "mode_ordering.m"
      check_hlds__mode_ordering__Goal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_40, 0) = ((MR_Box) (check_hlds__mode_ordering__GoalExpr_51));
#line 185 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_40, 1) = ((MR_Box) (check_hlds__mode_ordering__GoalInfo_52));
#line 185 "mode_ordering.m"
    }
#line 152 "mode_ordering.m"
    {
#line 152 "mode_ordering.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__mode_ordering__Goal_40, check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__ProcInfo_21);
    }
#line 133 "mode_ordering.m"
    {
#line 133 "mode_ordering.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(check_hlds__mode_ordering__ProcId_14, check_hlds__mode_ordering__ProcInfo_21, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23);
#line 133 "mode_ordering.m"
      return;
    }
#line 125 "mode_ordering.m"
  }
#line 120 "mode_ordering.m"
}

#line 108 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModeDeclConstraint_14,
#line 108 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
#line 108 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18)
#line 108 "mode_ordering.m"
{
#line 114 "mode_ordering.m"
  {
#line 114 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 114 "mode_ordering.m"
    {
#line 114 "mode_ordering.m"
      check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(check_hlds__mode_ordering__ModuleInfo_9, check_hlds__mode_ordering__PredConstraintMap_10, check_hlds__mode_ordering__PredId_11, check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);
#line 114 "mode_ordering.m"
      return;
    }
#line 114 "mode_ordering.m"
  }
#line 108 "mode_ordering.m"
}

#line 79 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_pred_5_p_0(
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering___SCC_7,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 79 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
#line 79 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18)
#line 79 "mode_ordering.m"
{
#line 82 "mode_ordering.m"
  {
#line 82 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 82 "mode_ordering.m"
    {
#line 82 "mode_ordering.m"
      check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(check_hlds__mode_ordering__PredConstraintMap_6, check_hlds__mode_ordering__PredId_8, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);
#line 82 "mode_ordering.m"
      return;
    }
#line 82 "mode_ordering.m"
  }
#line 79 "mode_ordering.m"
}

#line 77 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
#line 77 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 77 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 77 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 77 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 77 "mode_ordering.m"
{
#line 77 "mode_ordering.m"
  {
#line 77 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 77 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 77 "mode_ordering.m"
    {
#line 77 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_pred_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 77 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 77 "mode_ordering.m"
  }
#line 77 "mode_ordering.m"
}

#line 72 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
#line 72 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_5,
#line 72 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__SCC_6,
#line 72 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8,
#line 72 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9)
#line 72 "mode_ordering.m"
{
#line 75 "mode_ordering.m"
  {
#line 75 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 75 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10;
#line 75 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11;
#line 77 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 76 "mode_ordering.m"
    {
#line 76 "mode_ordering.m"
      check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__mode_ordering__SCC_6, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10);
    }
#line 77 "mode_ordering.m"
    {
#line 77 "mode_ordering.m"
      check_hlds__mode_ordering__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 77 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[0]));
#line 77 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1));
#line 77 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 77 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 3) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_5));
#line 77 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 4) = ((MR_Box) (check_hlds__mode_ordering__SCC_6));
#line 77 "mode_ordering.m"
    }
#line 77 "mode_ordering.m"
    {
#line 77 "mode_ordering.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, check_hlds__mode_ordering__V_11_11, check_hlds__mode_ordering__SCC_6, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 77 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 75 "mode_ordering.m"
  }
#line 72 "mode_ordering.m"
}

#line 69 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
#line 69 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 69 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 69 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 69 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 69 "mode_ordering.m"
{
#line 69 "mode_ordering.m"
  {
#line 69 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 69 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9;

#line 69 "mode_ordering.m"
    {
#line 69 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
#line 69 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9));
#line 69 "mode_ordering.m"
  }
#line 69 "mode_ordering.m"
}

#line 38 "mode_ordering.m"
void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0(
#line 38 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_7,
#line 38 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__SCCs_8,
#line 38 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_11,
#line 38 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_12)
#line 38 "mode_ordering.m"
{
#line 68 "mode_ordering.m"
  {
#line 68 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 68 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15;
#line 69 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12;

#line 69 "mode_ordering.m"
    {
#line 69 "mode_ordering.m"
      check_hlds__mode_ordering__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[0]));
#line 69 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_6_p_0_1));
#line 69 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 3) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_7));
#line 69 "mode_ordering.m"
    }
#line 69 "mode_ordering.m"
    {
#line 69 "mode_ordering.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, check_hlds__mode_ordering__V_15_15, check_hlds__mode_ordering__SCCs_8, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_11)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12);
    }
#line 69 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12);
#line 68 "mode_ordering.m"
  }
#line 38 "mode_ordering.m"
}

void mercury__check_hlds__mode_ordering__init(void)
{
}

void mercury__check_hlds__mode_ordering__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_map_0);
}

void mercury__check_hlds__mode_ordering__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.mode_ordering. */
