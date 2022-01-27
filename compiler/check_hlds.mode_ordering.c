/*
** Automatically generated from `mode_ordering.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 577 "mode_ordering.m"
struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0_s {
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__MCInfo_16;
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Constraint_21;
#line 577 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont;
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont_env_ptr;
#line 577 "mode_ordering.m"
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__succeeded;
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_32_32;
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_33_33;
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Y_38;
#line 577 "mode_ordering.m"
};

#line 252 "mode_ordering.m"
struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s {
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_158;
#line 252 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__HeadVar__5_126;
#line 252 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont;
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr;
#line 252 "mode_ordering.m"
  MR_bool check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded;
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48;
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49;
#line 252 "mode_ordering.m"
};

#line 577 "mode_ordering.m"
struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s {
#line 577 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1;
#line 577 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont;
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr;
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_HeadVar__7_31;
#line 577 "mode_ordering.m"
};

#line 550 "mode_ordering.m"
struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s {
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12;
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13;
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14;
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15;
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16;
#line 555 "mode_ordering.m"
  MR_bool check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded;
#line 555 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19;
#line 555 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21;
#line 561 "mode_ordering.m"
  jmp_buf check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0;
#line 561 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22;
#line 561 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23;
#line 550 "mode_ordering.m"
};

#line 252 "mode_ordering.m"
struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s {
#line 252 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1;
#line 252 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont;
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr;
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_HeadVar__5_126;
#line 252 "mode_ordering.m"
};

#line 300 "mode_ordering.m"
struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s {
#line 300 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1;
#line 300 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont;
#line 300 "mode_ordering.m"
  void * check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr;
#line 300 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3;
#line 300 "mode_ordering.m"
};


#line 245 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0;

#line 248 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 251 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 254 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0;

#line 257 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 260 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 263 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 266 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 269 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 272 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

#line 275 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0;

#line 278 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 281 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0;

#line 284 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0;

#line 287 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 290 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 293 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 296 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0;

#line 299 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 302 "check_hlds.mode_ordering.c"
static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0[6];

#line 305 "check_hlds.mode_ordering.c"
static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0[6];

#line 308 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0;

#line 311 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[1];

#line 314 "check_hlds.mode_ordering.c"
static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[1];

#line 317 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0[1];

#line 320 "check_hlds.mode_ordering.c"
static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0[1];

#line 323 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0;

#line 326 "check_hlds.mode_ordering.c"
static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0[2];

#line 329 "check_hlds.mode_ordering.c"
static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0[2];

#line 332 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDesc check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0;

#line 335 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[1];

#line 338 "check_hlds.mode_ordering.c"
static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[1];

#line 341 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0[1];

#line 344 "check_hlds.mode_ordering.c"
static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0[1];

#line 347 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
#line 350 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 352 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 355 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
#line 358 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 360 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 362 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 365 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
#line 368 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 370 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 373 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
#line 376 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 378 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 380 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 383 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
#line 386 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 388 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 391 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
#line 394 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 396 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 398 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 106 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
#line 106 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);

#line 100 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2(
#line 100 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 100 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 100 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 100 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 89 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
#line 89 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 89 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 89 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 89 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 77 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
#line 77 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);

#line 577 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_1(
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 577 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0(
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_13,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCInfo_16,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVars_19,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint_21,
#line 577 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__7_31,
#line 577 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 469 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_2(
#line 469 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 469 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 469 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 461 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_1(
#line 461 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 461 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 461 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 458 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0(
#line 458 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdMap_17,
#line 458 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
#line 458 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__3_72,
#line 458 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_73,
#line 458 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__5_74);

#line 473 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__473__1_4_f_0(
#line 473 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
#line 473 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Key0_27,
#line 473 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_92,
#line 473 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_93);

#line 465 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__465__1_4_f_0(
#line 465 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdMap_17,
#line 465 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Key0_27,
#line 465 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_81,
#line 465 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_82);

#line 451 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0_1(
#line 451 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 451 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 451 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 450 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0(
#line 450 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_57,
#line 450 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_58,
#line 450 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_59);

#line 451 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__451__1_3_f_0(
#line 451 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_57,
#line 451 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_62,
#line 451 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_63);

#line 444 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0_1(
#line 444 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 444 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 444 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 443 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0(
#line 443 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_44,
#line 443 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_45,
#line 443 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_46);

#line 444 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__444__1_3_f_0(
#line 444 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_44,
#line 444 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_49,
#line 444 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_50);

#line 429 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(
#line 429 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
#line 429 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_36,
#line 429 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_37);

#line 252 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1(
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 252 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__VarA_37,
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__InstGraph_42,
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__VarB_43,
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_158,
#line 252 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__5_126,
#line 252 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 152 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
#line 152 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
#line 152 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
#line 152 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_3);

#line 152 "mode_ordering.m"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(
#line 152 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 152 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2);

#line 577 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 577 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
#line 577 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 577 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 577 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 561 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
#line 561 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 561 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
#line 561 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 561 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
#line 561 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 550 "mode_ordering.m"
static MR_bool MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0(
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_12,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_13,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCInfo_16,
#line 550 "mode_ordering.m"
  MR_Integer * check_hlds__mode_ordering__ProcId_17,
#line 550 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ConsumingVars_18);

#line 517 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_7_p_0(
#line 517 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 517 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_9,
#line 517 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_10,
#line 517 "mode_ordering.m"
  MR_Integer * check_hlds__mode_ordering__ProcId_11,
#line 517 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ConsumingVars_12,
#line 517 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26,
#line 517 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_27);

#line 486 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(
#line 486 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ProdVars_6,
#line 486 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13,
#line 486 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14,
#line 486 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15,
#line 486 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_16);

#line 458 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
#line 458 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 458 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 458 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 458 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 450 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
#line 450 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 450 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 450 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 450 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 443 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
#line 443 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 443 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 443 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 443 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3);

#line 429 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
#line 429 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 429 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 429 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2);

#line 425 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
#line 425 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
#line 425 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goals0_5,
#line 425 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__Goals_6);

#line 416 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
#line 416 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GI_4,
#line 416 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
#line 416 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7);

#line 397 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
#line 397 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goal_4,
#line 397 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12,
#line 397 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13);

#line 395 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
#line 395 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 395 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 395 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 395 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 391 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
#line 391 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goals_4,
#line 391 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
#line 391 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7);

#line 373 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
#line 373 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GI_4,
#line 373 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10,
#line 373 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11);

#line 367 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
#line 367 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 367 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7,
#line 367 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8);

#line 365 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
#line 365 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 365 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 365 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 365 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 359 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
#line 359 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 359 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2,
#line 359 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3);

#line 252 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 252 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
#line 252 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 252 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 252 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 300 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
#line 300 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg);

#line 300 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
#line 300 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 300 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 300 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 300 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr);

#line 312 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3(
#line 312 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 312 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 312 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 312 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 312 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

#line 194 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
#line 194 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 194 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 194 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 194 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 194 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

#line 206 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
#line 206 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 206 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 206 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 206 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 206 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4);

#line 185 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
#line 185 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GoalExpr0_7,
#line 185 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__GoalExpr_8,
#line 185 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81,
#line 185 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82,
#line 185 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83,
#line 185 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);

#line 177 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_4_p_0(
#line 177 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goal0_5,
#line 177 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__Goal_6,
#line 177 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12,
#line 177 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_13);

#line 169 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
#line 169 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
#line 169 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8);

#line 162 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
#line 162 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GoalId_4,
#line 162 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
#line 162 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8);

#line 118 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 118 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__ProcId_14,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22,
#line 118 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23);

#line 106 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModeDeclConstraint_14,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
#line 106 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);

#line 77 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_pred_5_p_0(
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering___SCC_7,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
#line 77 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);

#line 75 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
#line 75 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 75 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 75 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 75 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3);

#line 70 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
#line 70 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_5,
#line 70 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__SCC_6,
#line 70 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8,
#line 70 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9);

#line 67 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
#line 67 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 67 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 67 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 67 "mode_ordering.m"
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
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__mode_ordering_scalar_common_1[3]))
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1415 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0
  }
};

#line 1424 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1432 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1440 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1449 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1457 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1465 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1473 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1482 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1491 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__mode_ordering__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1500 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1508 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__pti_tfeirn_1__plain_check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1516 "check_hlds.mode_ordering.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__mode_ordering__digraph__pti_digraph_key_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1524 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__inst_graph__hlds__inst_graph__type_ctor_info_node_0
  }
};

#line 1533 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1541 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1549 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__mode_ordering__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1558 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0
  }
};

#line 1567 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1576 "check_hlds.mode_ordering.c"
static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_mode_ordering_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__inst_graph__type_ctor_info_node_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__stack__ti_stack_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 1586 "check_hlds.mode_ordering.c"
static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_mode_ordering_info_0_0[6] = {
  (MR_String) "moi_inst_graph",
  (MR_String) "moi_prodvars_map",
  (MR_String) "moi_lambda_nesting",
  (MR_String) "moi_module_info",
  (MR_String) "moi_pred_constraint_map",
  (MR_String) "moi_goal_path_map"
};

#line 1596 "check_hlds.mode_ordering.c"
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

#line 1611 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0
};

#line 1616 "check_hlds.mode_ordering.c"
static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_mode_ordering_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_mode_ordering_info_0_0
  }
};

#line 1625 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_mode_ordering_info_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_mode_ordering_info_0_0
};

#line 1630 "check_hlds.mode_ordering.c"
static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_mode_ordering_info_0[1] = {
  (MR_Integer) 0
};

#line 1635 "check_hlds.mode_ordering.c"
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

#line 1652 "check_hlds.mode_ordering.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0 = {
  &mode_robdd__tfeirn__mode_robdd__tfeirn__type_ctor_info_tfeirn_1,
  {
    (MR_TypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0
  }
};

#line 1660 "check_hlds.mode_ordering.c"
static const MR_PseudoTypeInfo check_hlds__mode_ordering__check_hlds__mode_ordering__field_types_pred_constraint_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_ordering__mode_robdd__tfeirn__ti_tfeirn_1check_hlds__mode_constraint_robdd__type_ctor_info_mc_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_constraint_robdd__check_hlds__mode_constraint_robdd__type_ctor_info_mode_constraint_info_0
};

#line 1666 "check_hlds.mode_ordering.c"
static const MR_ConstString check_hlds__mode_ordering__check_hlds__mode_ordering__field_names_pred_constraint_info_0_0[2] = {
  (MR_String) "pci_mode_constraint",
  (MR_String) "pci_mci"
};

#line 1672 "check_hlds.mode_ordering.c"
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

#line 1687 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0
};

#line 1692 "check_hlds.mode_ordering.c"
static const MR_DuPtagLayout check_hlds__mode_ordering__check_hlds__mode_ordering__du_ptag_ordered_pred_constraint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_ordering__check_hlds__mode_ordering__du_stag_ordered_pred_constraint_info_0_0
  }
};

#line 1701 "check_hlds.mode_ordering.c"
static const MR_DuFunctorDescPtr check_hlds__mode_ordering__check_hlds__mode_ordering__du_name_ordered_pred_constraint_info_0[1] = {
  &check_hlds__mode_ordering__check_hlds__mode_ordering__du_functor_desc_pred_constraint_info_0_0
};

#line 1706 "check_hlds.mode_ordering.c"
static const MR_Integer check_hlds__mode_ordering__check_hlds__mode_ordering__functor_number_map_pred_constraint_info_0[1] = {
  (MR_Integer) 0
};

#line 1711 "check_hlds.mode_ordering.c"
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

#line 1728 "check_hlds.mode_ordering.c"
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

#line 1745 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0_10001(
#line 1748 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 1750 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 1752 "check_hlds.mode_ordering.c"
{
#line 1754 "check_hlds.mode_ordering.c"
  {
#line 1756 "check_hlds.mode_ordering.c"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 1759 "check_hlds.mode_ordering.c"
    {
#line 1761 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 1764 "check_hlds.mode_ordering.c"
    return check_hlds__mode_ordering__succeeded;
#line 1766 "check_hlds.mode_ordering.c"
  }
#line 1768 "check_hlds.mode_ordering.c"
}

#line 1771 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0_10001(
#line 1774 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 1776 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 1778 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 1780 "check_hlds.mode_ordering.c"
{
#line 1782 "check_hlds.mode_ordering.c"
  {
#line 1784 "check_hlds.mode_ordering.c"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

#line 1787 "check_hlds.mode_ordering.c"
    {
#line 1789 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 1792 "check_hlds.mode_ordering.c"
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
#line 1794 "check_hlds.mode_ordering.c"
  }
#line 1796 "check_hlds.mode_ordering.c"
}

#line 1799 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_info_0_0_10001(
#line 1802 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 1804 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 1806 "check_hlds.mode_ordering.c"
{
#line 1808 "check_hlds.mode_ordering.c"
  {
#line 1810 "check_hlds.mode_ordering.c"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 1813 "check_hlds.mode_ordering.c"
    {
#line 1815 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____pred_constraint_info_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 1818 "check_hlds.mode_ordering.c"
    return check_hlds__mode_ordering__succeeded;
#line 1820 "check_hlds.mode_ordering.c"
  }
#line 1822 "check_hlds.mode_ordering.c"
}

#line 1825 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_info_0_0_10001(
#line 1828 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 1830 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 1832 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 1834 "check_hlds.mode_ordering.c"
{
#line 1836 "check_hlds.mode_ordering.c"
  {
#line 1838 "check_hlds.mode_ordering.c"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

#line 1841 "check_hlds.mode_ordering.c"
    {
#line 1843 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering____Compare____pred_constraint_info_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 1846 "check_hlds.mode_ordering.c"
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
#line 1848 "check_hlds.mode_ordering.c"
  }
#line 1850 "check_hlds.mode_ordering.c"
}

#line 1853 "check_hlds.mode_ordering.c"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____pred_constraint_map_0_0_10001(
#line 1856 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 1858 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 1860 "check_hlds.mode_ordering.c"
{
#line 1862 "check_hlds.mode_ordering.c"
  {
#line 1864 "check_hlds.mode_ordering.c"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 1867 "check_hlds.mode_ordering.c"
    {
#line 1869 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering____Unify____pred_constraint_map_0_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 1872 "check_hlds.mode_ordering.c"
    return check_hlds__mode_ordering__succeeded;
#line 1874 "check_hlds.mode_ordering.c"
  }
#line 1876 "check_hlds.mode_ordering.c"
}

#line 1879 "check_hlds.mode_ordering.c"
static void MR_CALL 
check_hlds__mode_ordering____Compare____pred_constraint_map_0_0_10001(
#line 1882 "check_hlds.mode_ordering.c"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 1884 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 1886 "check_hlds.mode_ordering.c"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 1888 "check_hlds.mode_ordering.c"
{
#line 1890 "check_hlds.mode_ordering.c"
  {
#line 1892 "check_hlds.mode_ordering.c"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__1_1;

#line 1895 "check_hlds.mode_ordering.c"
    {
#line 1897 "check_hlds.mode_ordering.c"
      check_hlds__mode_ordering____Compare____pred_constraint_map_0_0(&check_hlds__mode_ordering__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 1900 "check_hlds.mode_ordering.c"
    *check_hlds__mode_ordering__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__1_1));
#line 1902 "check_hlds.mode_ordering.c"
  }
#line 1904 "check_hlds.mode_ordering.c"
}

#line 106 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
#line 106 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18)
#line 106 "mode_ordering.m"
{
#line 112 "mode_ordering.m"
  {
#line 112 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 112 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__ProcId_16;

#line 509 "mode_ordering.m"
    {
#line 509 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__builtin__semidet_succeed_0_p_0();
    }
#line 512 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 511 "mode_ordering.m"
      {
#line 511 "mode_ordering.m"
        {
#line 511 "mode_ordering.m"
          mercury__require__sorry_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.pred_info_create_proc_info_for_mode_decl_constraint\'/4", (MR_String) "NYI");
#line 511 "mode_ordering.m"
          return;
        }
#line 511 "mode_ordering.m"
      }
#line 512 "mode_ordering.m"
    else
#line 514 "mode_ordering.m"
      {
#line 514 "mode_ordering.m"
        check_hlds__mode_ordering__ProcId_16 = hlds__hlds_pred__initial_proc_id_0_f_0();
      }
#line 115 "mode_ordering.m"
    {
#line 115 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(check_hlds__mode_ordering__ModuleInfo_9, check_hlds__mode_ordering__PredConstraintMap_10, check_hlds__mode_ordering__PredId_11, check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__ProcId_16, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);
#line 115 "mode_ordering.m"
      return;
    }
#line 112 "mode_ordering.m"
  }
#line 106 "mode_ordering.m"
}

#line 100 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2(
#line 100 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 100 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 100 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 100 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 100 "mode_ordering.m"
{
#line 100 "mode_ordering.m"
  {
#line 100 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 100 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23;

#line 100 "mode_ordering.m"
    {
#line 100 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23);
    }
#line 100 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv4_STATE_VARIABLE_PredInfo_23));
#line 100 "mode_ordering.m"
  }
#line 100 "mode_ordering.m"
}

#line 89 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1(
#line 89 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 89 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 89 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 89 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 89 "mode_ordering.m"
{
#line 89 "mode_ordering.m"
  {
#line 89 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 89 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18;

#line 89 "mode_ordering.m"
    {
#line 89 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18);
    }
#line 89 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv2_STATE_VARIABLE_PredInfo_18));
#line 89 "mode_ordering.m"
  }
#line 89 "mode_ordering.m"
}

#line 77 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
#line 77 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18)
#line 77 "mode_ordering.m"
{
#line 80 "mode_ordering.m"
  {
#line 80 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 80 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 80 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_23_23 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[2];
#line 80 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__RequestedProcsMap0_10;
#line 80 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__PredInfo0_11;
#line 80 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ModeConstraint0_12;
#line 80 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MCI_13;
#line 80 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__PredInfo_15;
#line 80 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_38_38;
#line 601 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_V_38_38;

#line 82 "mode_ordering.m"
    {
#line 82 "mode_ordering.m"
      check_hlds__mode_ordering__RequestedProcsMap0_10 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_22_22, check_hlds__mode_ordering__TypeInfo_23_23);
    }
#line 84 "mode_ordering.m"
    {
#line 84 "mode_ordering.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__PredId_8, &check_hlds__mode_ordering__PredInfo0_11);
    }
#line 601 "mode_ordering.m"
    {
#line 601 "mode_ordering.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0, check_hlds__mode_ordering__PredConstraintMap_6, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv0_V_38_38);
    }
#line 601 "mode_ordering.m"
    check_hlds__mode_ordering__V_38_38 = ((MR_Word) check_hlds__mode_ordering__conv0_V_38_38);
#line 601 "mode_ordering.m"
    check_hlds__mode_ordering__ModeConstraint0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_38_38, (MR_Integer) 0)));
#line 601 "mode_ordering.m"
    check_hlds__mode_ordering__MCI_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_38_38, (MR_Integer) 1)));
#line 86 "mode_ordering.m"
    {
#line 86 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__mode_ordering__PredInfo0_11);
    }
#line 97 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 92 "mode_ordering.m"
      {
#line 92 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__RequestedProcs_14;
#line 87 "mode_ordering.m"
        MR_Box check_hlds__mode_ordering__conv1_RequestedProcs_14;

#line 87 "mode_ordering.m"
        {
#line 87 "mode_ordering.m"
          check_hlds__mode_ordering__succeeded = mercury__map__search_3_p_0(check_hlds__mode_ordering__TypeCtorInfo_22_22, check_hlds__mode_ordering__TypeInfo_23_23, check_hlds__mode_ordering__RequestedProcsMap0_10, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv1_RequestedProcs_14);
        }
#line 87 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 87 "mode_ordering.m"
          {
#line 87 "mode_ordering.m"
            check_hlds__mode_ordering__RequestedProcs_14 = ((MR_Word) check_hlds__mode_ordering__conv1_RequestedProcs_14);
#line 87 "mode_ordering.m"
            check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 87 "mode_ordering.m"
          }
#line 92 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 88 "mode_ordering.m"
          {
#line 88 "mode_ordering.m"
            MR_Word check_hlds__mode_ordering__V_19_19;
#line 88 "mode_ordering.m"
            MR_Box check_hlds__mode_ordering__conv3_PredInfo_15;

#line 89 "mode_ordering.m"
            {
#line 89 "mode_ordering.m"
              check_hlds__mode_ordering__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 89 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_8[0]));
#line 89 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_1));
#line 89 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 89 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 3) = ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17));
#line 89 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_6));
#line 89 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 5) = ((MR_Box) (check_hlds__mode_ordering__PredId_8));
#line 89 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 6) = ((MR_Box) (check_hlds__mode_ordering__MCI_13));
#line 89 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_19_19, 7) = ((MR_Box) (check_hlds__mode_ordering__ModeConstraint0_12));
#line 89 "mode_ordering.m"
            }
#line 88 "mode_ordering.m"
            {
#line 88 "mode_ordering.m"
              mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__mode_ordering__V_19_19, check_hlds__mode_ordering__RequestedProcs_14, ((MR_Box) (check_hlds__mode_ordering__PredInfo0_11)), &check_hlds__mode_ordering__conv3_PredInfo_15);
            }
#line 88 "mode_ordering.m"
            check_hlds__mode_ordering__PredInfo_15 = ((MR_Word) check_hlds__mode_ordering__conv3_PredInfo_15);
#line 88 "mode_ordering.m"
          }
#line 92 "mode_ordering.m"
        else
#line 95 "mode_ordering.m"
          check_hlds__mode_ordering__PredInfo_15 = check_hlds__mode_ordering__PredInfo0_11;
#line 92 "mode_ordering.m"
      }
#line 97 "mode_ordering.m"
    else
#line 98 "mode_ordering.m"
      {
#line 98 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__ProcIds_16;
#line 98 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_20_20;
#line 99 "mode_ordering.m"
        MR_Box check_hlds__mode_ordering__conv5_PredInfo_15;

#line 98 "mode_ordering.m"
        {
#line 98 "mode_ordering.m"
          check_hlds__mode_ordering__ProcIds_16 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__mode_ordering__PredInfo0_11);
        }
#line 100 "mode_ordering.m"
        {
#line 100 "mode_ordering.m"
          check_hlds__mode_ordering__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 100 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_8[1]));
#line 100 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 1) = ((MR_Box) (check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0_2));
#line 100 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 100 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 3) = ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17));
#line 100 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_6));
#line 100 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 5) = ((MR_Box) (check_hlds__mode_ordering__PredId_8));
#line 100 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 6) = ((MR_Box) (check_hlds__mode_ordering__MCI_13));
#line 100 "mode_ordering.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_20_20, 7) = ((MR_Box) (check_hlds__mode_ordering__ModeConstraint0_12));
#line 100 "mode_ordering.m"
        }
#line 99 "mode_ordering.m"
        {
#line 99 "mode_ordering.m"
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__mode_ordering__V_20_20, check_hlds__mode_ordering__ProcIds_16, ((MR_Box) (check_hlds__mode_ordering__PredInfo0_11)), &check_hlds__mode_ordering__conv5_PredInfo_15);
        }
#line 99 "mode_ordering.m"
        check_hlds__mode_ordering__PredInfo_15 = ((MR_Word) check_hlds__mode_ordering__conv5_PredInfo_15);
#line 98 "mode_ordering.m"
      }
#line 104 "mode_ordering.m"
    {
#line 104 "mode_ordering.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__mode_ordering__PredId_8, check_hlds__mode_ordering__PredInfo_15, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);
#line 104 "mode_ordering.m"
      return;
    }
#line 80 "mode_ordering.m"
  }
#line 77 "mode_ordering.m"
}

#line 577 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_1(
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 577 "mode_ordering.m"
{
#line 577 "mode_ordering.m"
  {
#line 577 "mode_ordering.m"
    struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 581 "mode_ordering.m"
    {
#line 581 "mode_ordering.m"
      MR_Word base;
#line 581 "mode_ordering.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 581 "mode_ordering.m"
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_33_33 = base;
#line 581 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Y_38));
#line 581 "mode_ordering.m"
    }
#line 581 "mode_ordering.m"
    {
#line 581 "mode_ordering.m"
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_32_32 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__MCInfo_16, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_33_33);
    }
#line 581 "mode_ordering.m"
    {
#line 581 "mode_ordering.m"
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Constraint_21, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__V_32_32);
    }
#line 581 "mode_ordering.m"
    if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__succeeded)
#line 581 "mode_ordering.m"
      {
#line 581 "mode_ordering.m"
        ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont_env_ptr);
#line 581 "mode_ordering.m"
        return;
      }
#line 577 "mode_ordering.m"
  }
#line 577 "mode_ordering.m"
}

#line 577 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0(
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_13,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCInfo_16,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVars_19,
#line 577 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint_21,
#line 577 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__7_31,
#line 577 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 577 "mode_ordering.m"
{
#line 577 "mode_ordering.m"
  {
#line 577 "mode_ordering.m"
    struct check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0_s check_hlds__mode_ordering__env;

#line 577 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__MCInfo_16 = check_hlds__mode_ordering__MCInfo_16;
#line 577 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Constraint_21 = check_hlds__mode_ordering__Constraint_21;
#line 577 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont = check_hlds__mode_ordering__cont;
#line 577 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 579 "mode_ordering.m"
    {
#line 579 "mode_ordering.m"
      hlds__inst_graph__corresponding_nodes_from_lists_6_p_0(check_hlds__mode_ordering__CallerInstGraph_14, check_hlds__mode_ordering__CalleeInstGraph_15, check_hlds__mode_ordering__Args_13, check_hlds__mode_ordering__HeadVars_19, check_hlds__mode_ordering__HeadVar__7_31, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_env_0__Y_38, check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0_1, &check_hlds__mode_ordering__env);
    }
#line 577 "mode_ordering.m"
  }
#line 577 "mode_ordering.m"
}

#line 469 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_2(
#line 469 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 469 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 469 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 469 "mode_ordering.m"
{
#line 469 "mode_ordering.m"
  {
#line 469 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 469 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 469 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv2_HeadVar__5_94;

#line 469 "mode_ordering.m"
    {
#line 469 "mode_ordering.m"
      check_hlds__mode_ordering__conv2_HeadVar__5_94 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__473__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 469 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv2_HeadVar__5_94));
#line 469 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 469 "mode_ordering.m"
  }
#line 469 "mode_ordering.m"
}

#line 461 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_1(
#line 461 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 461 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 461 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 461 "mode_ordering.m"
{
#line 461 "mode_ordering.m"
  {
#line 461 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 461 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 461 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__5_83;

#line 461 "mode_ordering.m"
    {
#line 461 "mode_ordering.m"
      check_hlds__mode_ordering__conv0_HeadVar__5_83 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__465__1_4_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 461 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__5_83));
#line 461 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 461 "mode_ordering.m"
  }
#line 461 "mode_ordering.m"
}

#line 458 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0(
#line 458 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdMap_17,
#line 458 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
#line 458 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__3_72,
#line 458 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_73,
#line 458 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__5_74)
#line 458 "mode_ordering.m"
{
#line 458 "mode_ordering.m"
  {
#line 458 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__6_75;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_149_149;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_150_150;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_154_154;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Key0_27;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R_76_76;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R_77_77;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_78_78;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_86_86;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_87_87;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_89_89;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_97_97;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_98_98;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GI_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__4_73, (MR_Integer) 1)));
#line 459 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__4_73, (MR_Integer) 0)));
#line 461 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77;
#line 469 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv3_HeadVar__6_75;

#line 460 "mode_ordering.m"
    {
#line 460 "mode_ordering.m"
      mercury__digraph__add_vertex_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_72)), &check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__HeadVar__5_74, &check_hlds__mode_ordering__STATE_VARIABLE_R_76_76);
    }
#line 2446 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeInfo_149_149 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[3];
#line 2448 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeInfo_150_150 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[4];
#line 461 "mode_ordering.m"
    {
#line 461 "mode_ordering.m"
      check_hlds__mode_ordering__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 461 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
#line 461 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_1));
#line 461 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 461 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 3) = ((MR_Box) (check_hlds__mode_ordering__ProdMap_17));
#line 461 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_78_78, 4) = ((MR_Box) (check_hlds__mode_ordering__Key0_27));
#line 461 "mode_ordering.m"
    }
#line 2466 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 468 "mode_ordering.m"
    {
#line 468 "mode_ordering.m"
      check_hlds__mode_ordering__V_87_87 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_120);
    }
#line 468 "mode_ordering.m"
    {
#line 468 "mode_ordering.m"
      check_hlds__mode_ordering__V_86_86 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_154_154, check_hlds__mode_ordering__V_87_87);
    }
#line 461 "mode_ordering.m"
    {
#line 461 "mode_ordering.m"
      check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeInfo_149_149, check_hlds__mode_ordering__TypeInfo_150_150, check_hlds__mode_ordering__V_78_78, check_hlds__mode_ordering__V_86_86, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_R_76_76)));
    }
#line 461 "mode_ordering.m"
    check_hlds__mode_ordering__STATE_VARIABLE_R_77_77 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_R_77_77);
#line 469 "mode_ordering.m"
    {
#line 469 "mode_ordering.m"
      check_hlds__mode_ordering__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 469 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[2]));
#line 469 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0_2));
#line 469 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 469 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 3) = ((MR_Box) (check_hlds__mode_ordering__MakeVisMap_22));
#line 469 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_89_89, 4) = ((MR_Box) (check_hlds__mode_ordering__Key0_27));
#line 469 "mode_ordering.m"
    }
#line 476 "mode_ordering.m"
    {
#line 476 "mode_ordering.m"
      check_hlds__mode_ordering__V_98_98 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_120);
    }
#line 476 "mode_ordering.m"
    {
#line 476 "mode_ordering.m"
      check_hlds__mode_ordering__V_97_97 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_154_154, check_hlds__mode_ordering__V_98_98);
    }
#line 469 "mode_ordering.m"
    {
#line 469 "mode_ordering.m"
      check_hlds__mode_ordering__conv3_HeadVar__6_75 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeInfo_149_149, check_hlds__mode_ordering__TypeInfo_150_150, check_hlds__mode_ordering__V_89_89, check_hlds__mode_ordering__V_97_97, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_R_77_77)));
    }
#line 469 "mode_ordering.m"
    check_hlds__mode_ordering__HeadVar__6_75 = ((MR_Word) check_hlds__mode_ordering__conv3_HeadVar__6_75);
#line 458 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__6_75;
#line 458 "mode_ordering.m"
  }
#line 458 "mode_ordering.m"
}

#line 473 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__473__1_4_f_0(
#line 473 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MakeVisMap_22,
#line 473 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Key0_27,
#line 473 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_92,
#line 473 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_93)
#line 473 "mode_ordering.m"
{
#line 473 "mode_ordering.m"
  {
#line 473 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 473 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__5_94;
#line 473 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__Index2_32;
#line 470 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_Index2_32;

#line 470 "mode_ordering.m"
    {
#line 470 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__map__search_2_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__MakeVisMap_22, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_92)), &check_hlds__mode_ordering__conv0_Index2_32);
    }
#line 470 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 470 "mode_ordering.m"
      {
#line 470 "mode_ordering.m"
        check_hlds__mode_ordering__Index2_32 = ((MR_Integer) check_hlds__mode_ordering__conv0_Index2_32);
#line 470 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 470 "mode_ordering.m"
      }
#line 473 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 471 "mode_ordering.m"
      {
#line 471 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_157_157 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 471 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__Key2_33;
#line 471 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95;

#line 471 "mode_ordering.m"
        {
#line 471 "mode_ordering.m"
          mercury__digraph__add_vertex_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_157_157, ((MR_Box) (check_hlds__mode_ordering__Index2_32)), &check_hlds__mode_ordering__Key2_33, check_hlds__mode_ordering__HeadVar__4_93, &check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95);
        }
#line 472 "mode_ordering.m"
        {
#line 472 "mode_ordering.m"
          mercury__digraph__add_edge_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_157_157, check_hlds__mode_ordering__Key2_33, check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__STATE_VARIABLE_R2_95_95, &check_hlds__mode_ordering__HeadVar__5_94);
        }
#line 471 "mode_ordering.m"
      }
#line 473 "mode_ordering.m"
    else
#line 473 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__5_94 = check_hlds__mode_ordering__HeadVar__4_93;
#line 473 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__5_94;
#line 473 "mode_ordering.m"
  }
#line 473 "mode_ordering.m"
}

#line 465 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__465__1_4_f_0(
#line 465 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdMap_17,
#line 465 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Key0_27,
#line 465 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_81,
#line 465 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__4_82)
#line 465 "mode_ordering.m"
{
#line 465 "mode_ordering.m"
  {
#line 465 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 465 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__5_83;
#line 465 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__Index1_29;
#line 462 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_Index1_29;

#line 462 "mode_ordering.m"
    {
#line 462 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__map__search_2_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__ProdMap_17, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_81)), &check_hlds__mode_ordering__conv0_Index1_29);
    }
#line 462 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 462 "mode_ordering.m"
      {
#line 462 "mode_ordering.m"
        check_hlds__mode_ordering__Index1_29 = ((MR_Integer) check_hlds__mode_ordering__conv0_Index1_29);
#line 462 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 462 "mode_ordering.m"
      }
#line 465 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 463 "mode_ordering.m"
      {
#line 463 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_153_153 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 463 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__Key1_30;
#line 463 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84;

#line 463 "mode_ordering.m"
        {
#line 463 "mode_ordering.m"
          mercury__digraph__add_vertex_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_153_153, ((MR_Box) (check_hlds__mode_ordering__Index1_29)), &check_hlds__mode_ordering__Key1_30, check_hlds__mode_ordering__HeadVar__4_82, &check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84);
        }
#line 464 "mode_ordering.m"
        {
#line 464 "mode_ordering.m"
          mercury__digraph__add_edge_4_p_0(check_hlds__mode_ordering__TypeCtorInfo_153_153, check_hlds__mode_ordering__Key1_30, check_hlds__mode_ordering__Key0_27, check_hlds__mode_ordering__STATE_VARIABLE_R1_84_84, &check_hlds__mode_ordering__HeadVar__5_83);
        }
#line 463 "mode_ordering.m"
      }
#line 465 "mode_ordering.m"
    else
#line 465 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__5_83 = check_hlds__mode_ordering__HeadVar__4_82;
#line 465 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__5_83;
#line 465 "mode_ordering.m"
  }
#line 465 "mode_ordering.m"
}

#line 451 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0_1(
#line 451 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 451 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 451 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 451 "mode_ordering.m"
{
#line 451 "mode_ordering.m"
  {
#line 451 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 451 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 451 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__4_64;

#line 451 "mode_ordering.m"
    {
#line 451 "mode_ordering.m"
      check_hlds__mode_ordering__conv0_HeadVar__4_64 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__451__1_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 451 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__4_64));
#line 451 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 451 "mode_ordering.m"
  }
#line 451 "mode_ordering.m"
}

#line 450 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0(
#line 450 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_57,
#line 450 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_58,
#line 450 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_59)
#line 450 "mode_ordering.m"
{
#line 450 "mode_ordering.m"
  {
#line 450 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 450 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_60;
#line 450 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_61_61;
#line 450 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_65_65;
#line 450 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_66_66;
#line 450 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_67_67;
#line 453 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_126_126;
#line 451 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_HeadVar__4_60;

#line 451 "mode_ordering.m"
    {
#line 451 "mode_ordering.m"
      check_hlds__mode_ordering__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 451 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
#line 451 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0_1));
#line 451 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 451 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_61_61, 3) = ((MR_Box) (check_hlds__mode_ordering__HeadVar__1_57));
#line 451 "mode_ordering.m"
    }
#line 453 "mode_ordering.m"
    check_hlds__mode_ordering__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_58, (MR_Integer) 0)));
#line 453 "mode_ordering.m"
    check_hlds__mode_ordering__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_58, (MR_Integer) 1)));
#line 453 "mode_ordering.m"
    {
#line 453 "mode_ordering.m"
      check_hlds__mode_ordering__V_66_66 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__V_67_67);
    }
#line 453 "mode_ordering.m"
    {
#line 453 "mode_ordering.m"
      check_hlds__mode_ordering__V_65_65 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__V_66_66);
    }
#line 451 "mode_ordering.m"
    {
#line 451 "mode_ordering.m"
      check_hlds__mode_ordering__conv1_HeadVar__4_60 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1], check_hlds__mode_ordering__V_61_61, check_hlds__mode_ordering__V_65_65, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_59)));
    }
#line 451 "mode_ordering.m"
    check_hlds__mode_ordering__HeadVar__4_60 = ((MR_Word) check_hlds__mode_ordering__conv1_HeadVar__4_60);
#line 450 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_60;
#line 450 "mode_ordering.m"
  }
#line 450 "mode_ordering.m"
}

#line 451 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__451__1_3_f_0(
#line 451 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_57,
#line 451 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_62,
#line 451 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_63)
#line 451 "mode_ordering.m"
{
#line 451 "mode_ordering.m"
  {
#line 451 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 451 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_64;

#line 451 "mode_ordering.m"
    {
#line 451 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__4_64 = mercury__map__set_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__HeadVar__3_63, ((MR_Box) (check_hlds__mode_ordering__HeadVar__2_62)), ((MR_Box) (check_hlds__mode_ordering__HeadVar__1_57)));
    }
#line 451 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_64;
#line 451 "mode_ordering.m"
  }
#line 451 "mode_ordering.m"
}

#line 444 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0_1(
#line 444 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 444 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 444 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 444 "mode_ordering.m"
{
#line 444 "mode_ordering.m"
  {
#line 444 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 444 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 444 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__4_51;

#line 444 "mode_ordering.m"
    {
#line 444 "mode_ordering.m"
      check_hlds__mode_ordering__conv0_HeadVar__4_51 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__444__1_3_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 444 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__4_51));
#line 444 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 444 "mode_ordering.m"
  }
#line 444 "mode_ordering.m"
}

#line 443 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0(
#line 443 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_44,
#line 443 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_45,
#line 443 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_46)
#line 443 "mode_ordering.m"
{
#line 443 "mode_ordering.m"
  {
#line 443 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 443 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_47;
#line 443 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_48_48;
#line 443 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_52_52;
#line 443 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_53_53;
#line 443 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_54_54;
#line 445 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_125_125;
#line 444 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_HeadVar__4_47;

#line 444 "mode_ordering.m"
    {
#line 444 "mode_ordering.m"
      check_hlds__mode_ordering__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 444 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[4]));
#line 444 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 1) = ((MR_Box) (check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0_1));
#line 444 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 444 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_48_48, 3) = ((MR_Box) (check_hlds__mode_ordering__HeadVar__1_44));
#line 444 "mode_ordering.m"
    }
#line 445 "mode_ordering.m"
    check_hlds__mode_ordering__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_45, (MR_Integer) 0)));
#line 445 "mode_ordering.m"
    check_hlds__mode_ordering__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_45, (MR_Integer) 1)));
#line 445 "mode_ordering.m"
    {
#line 445 "mode_ordering.m"
      check_hlds__mode_ordering__V_53_53 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__V_54_54);
    }
#line 445 "mode_ordering.m"
    {
#line 445 "mode_ordering.m"
      check_hlds__mode_ordering__V_52_52 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__V_53_53);
    }
#line 444 "mode_ordering.m"
    {
#line 444 "mode_ordering.m"
      check_hlds__mode_ordering__conv1_HeadVar__4_47 = mercury__list__foldl_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1], check_hlds__mode_ordering__V_48_48, check_hlds__mode_ordering__V_52_52, ((MR_Box) (check_hlds__mode_ordering__HeadVar__3_46)));
    }
#line 444 "mode_ordering.m"
    check_hlds__mode_ordering__HeadVar__4_47 = ((MR_Word) check_hlds__mode_ordering__conv1_HeadVar__4_47);
#line 443 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_47;
#line 443 "mode_ordering.m"
  }
#line 443 "mode_ordering.m"
}

#line 444 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__444__1_3_f_0(
#line 444 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__HeadVar__1_44,
#line 444 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_49,
#line 444 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_50)
#line 444 "mode_ordering.m"
{
#line 444 "mode_ordering.m"
  {
#line 444 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 444 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_51;

#line 444 "mode_ordering.m"
    {
#line 444 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__4_51 = mercury__map__det_insert_3_f_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__mode_ordering__HeadVar__3_50, ((MR_Box) (check_hlds__mode_ordering__HeadVar__2_49)), ((MR_Box) (check_hlds__mode_ordering__HeadVar__1_44)));
    }
#line 444 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_51;
#line 444 "mode_ordering.m"
  }
#line 444 "mode_ordering.m"
}

#line 429 "mode_ordering.m"
static MR_Word MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(
#line 429 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
#line 429 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_36,
#line 429 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_37)
#line 429 "mode_ordering.m"
{
#line 429 "mode_ordering.m"
  {
#line 429 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 429 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__HeadVar__4_38;
#line 429 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__Index_10;
#line 429 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GI_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_36, (MR_Integer) 1)));
#line 429 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalId_13;
#line 429 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalPath_14;
#line 430 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_36, (MR_Integer) 0)));
#line 432 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_GoalPath_14;
#line 438 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__Index0_16;
#line 434 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LastStep_15;

#line 431 "mode_ordering.m"
    {
#line 431 "mode_ordering.m"
      check_hlds__mode_ordering__GoalId_13 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__GI_12);
    }
#line 432 "mode_ordering.m"
    {
#line 432 "mode_ordering.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0, check_hlds__mode_ordering__ForwardGoalPathMap_4, ((MR_Box) (check_hlds__mode_ordering__GoalId_13)), &check_hlds__mode_ordering__conv0_GoalPath_14);
    }
#line 432 "mode_ordering.m"
    check_hlds__mode_ordering__GoalPath_14 = ((MR_Word) check_hlds__mode_ordering__conv0_GoalPath_14);
#line 434 "mode_ordering.m"
    {
#line 434 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mdbcomp__goal_path__goal_path_get_last_2_p_0(check_hlds__mode_ordering__GoalPath_14, &check_hlds__mode_ordering__LastStep_15);
    }
#line 434 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 434 "mode_ordering.m"
      {
#line 435 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = ((MR_tag((MR_Word) check_hlds__mode_ordering__LastStep_15)) == (MR_mktag((MR_Integer) 1)));
#line 435 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 435 "mode_ordering.m"
          check_hlds__mode_ordering__Index0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__LastStep_15, (MR_Integer) 0)));
#line 434 "mode_ordering.m"
      }
#line 438 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 437 "mode_ordering.m"
      check_hlds__mode_ordering__Index_10 = check_hlds__mode_ordering__Index0_16;
#line 438 "mode_ordering.m"
    else
#line 439 "mode_ordering.m"
      {
#line 439 "mode_ordering.m"
        {
#line 439 "mode_ordering.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "goal_path error");
        }
#line 439 "mode_ordering.m"
      }
#line 429 "mode_ordering.m"
    {
#line 429 "mode_ordering.m"
      check_hlds__mode_ordering__HeadVar__4_38 = mercury__map__det_insert_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__mode_ordering__HeadVar__3_37, ((MR_Box) (check_hlds__mode_ordering__Index_10)), ((MR_Box) (check_hlds__mode_ordering__HeadVar__2_36)));
    }
#line 429 "mode_ordering.m"
    return check_hlds__mode_ordering__HeadVar__4_38;
#line 429 "mode_ordering.m"
  }
#line 429 "mode_ordering.m"
}

#line 252 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1(
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 252 "mode_ordering.m"
{
#line 252 "mode_ordering.m"
  {
#line 252 "mode_ordering.m"
    struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 252 "mode_ordering.m"
    {
#line 256 "mode_ordering.m"
      {
#line 256 "mode_ordering.m"
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_158, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48);
      }
#line 258 "mode_ordering.m"
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
#line 257 "mode_ordering.m"
        {
#line 257 "mode_ordering.m"
          *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__HeadVar__5_126) = (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49;
#line 257 "mode_ordering.m"
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = MR_TRUE;
#line 257 "mode_ordering.m"
        }
#line 258 "mode_ordering.m"
      else
#line 260 "mode_ordering.m"
        {
#line 258 "mode_ordering.m"
          {
#line 258 "mode_ordering.m"
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_158, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49);
          }
#line 260 "mode_ordering.m"
          if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
#line 260 "mode_ordering.m"
            {
#line 259 "mode_ordering.m"
              *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__HeadVar__5_126) = (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48;
#line 259 "mode_ordering.m"
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded = MR_TRUE;
#line 260 "mode_ordering.m"
            }
#line 260 "mode_ordering.m"
        }
#line 258 "mode_ordering.m"
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__succeeded)
#line 258 "mode_ordering.m"
        {
#line 258 "mode_ordering.m"
          ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr);
#line 258 "mode_ordering.m"
          return;
        }
#line 252 "mode_ordering.m"
    }
#line 252 "mode_ordering.m"
  }
#line 252 "mode_ordering.m"
}

#line 252 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__VarA_37,
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__InstGraph_42,
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__VarB_43,
#line 252 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_158,
#line 252 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__5_126,
#line 252 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 252 "mode_ordering.m"
{
#line 252 "mode_ordering.m"
  {
#line 252 "mode_ordering.m"
    struct check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0_s check_hlds__mode_ordering__env;

#line 252 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__ProdVars_158 = check_hlds__mode_ordering__ProdVars_158;
#line 252 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__HeadVar__5_126 = check_hlds__mode_ordering__HeadVar__5_126;
#line 252 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont = check_hlds__mode_ordering__cont;
#line 252 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 254 "mode_ordering.m"
    {
#line 254 "mode_ordering.m"
      hlds__inst_graph__same_graph_corresponding_nodes_5_p_0(check_hlds__mode_ordering__InstGraph_42, check_hlds__mode_ordering__VarA_37, check_hlds__mode_ordering__VarB_43, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarC_48, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_env_0__VarD_49, check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0_1, &check_hlds__mode_ordering__env);
    }
#line 252 "mode_ordering.m"
  }
#line 252 "mode_ordering.m"
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
#line 3227 "check_hlds.mode_ordering.c"
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
#line 3249 "check_hlds.mode_ordering.c"
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

#line 3310 "check_hlds.mode_ordering.c"
        {
#line 3312 "check_hlds.mode_ordering.c"
          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[1], ((MR_Box) (check_hlds__mode_ordering__V_3_3)), ((MR_Box) (check_hlds__mode_ordering__V_5_5)));
        }
#line 26 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 3317 "check_hlds.mode_ordering.c"
          {
#line 3319 "check_hlds.mode_ordering.c"
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

#line 152 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering____Compare____mode_ordering_info_0_0(
#line 152 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__HeadVar__1_1,
#line 152 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2,
#line 152 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__3_3)
#line 152 "mode_ordering.m"
{
#line 152 "mode_ordering.m"
  {
#line 152 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 152 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastX_21 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;
#line 152 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastY_22 = (MR_Integer) check_hlds__mode_ordering__HeadVar__3_3;

#line 152 "mode_ordering.m"
    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_21 == check_hlds__mode_ordering__CastY_22);
#line 152 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 3355 "check_hlds.mode_ordering.c"
      *check_hlds__mode_ordering__HeadVar__1_1 = (MR_Integer) 0;
#line 152 "mode_ordering.m"
    else
#line 152 "mode_ordering.m"
      {
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 2)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 3)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 4)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 5)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 0)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 1)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 2)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 3)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 4)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__3_3, (MR_Integer) 5)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_16_16;

#line 152 "mode_ordering.m"
        {
#line 152 "mode_ordering.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[2], &check_hlds__mode_ordering__V_16_16, ((MR_Box) (check_hlds__mode_ordering__V_4_4)), ((MR_Box) (check_hlds__mode_ordering__V_10_10)));
        }
#line 3393 "check_hlds.mode_ordering.c"
        check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_16_16 == (MR_Integer) 0);
#line 152 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 152 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
          *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_16_16;
#line 152 "mode_ordering.m"
        else
#line 152 "mode_ordering.m"
          {
#line 152 "mode_ordering.m"
            MR_Word check_hlds__mode_ordering__V_17_17;

#line 152 "mode_ordering.m"
            {
#line 152 "mode_ordering.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[3], &check_hlds__mode_ordering__V_17_17, ((MR_Box) (check_hlds__mode_ordering__V_5_5)), ((MR_Box) (check_hlds__mode_ordering__V_11_11)));
            }
#line 3413 "check_hlds.mode_ordering.c"
            check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_17_17 == (MR_Integer) 0);
#line 152 "mode_ordering.m"
            check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 152 "mode_ordering.m"
            if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
              *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_17_17;
#line 152 "mode_ordering.m"
            else
#line 152 "mode_ordering.m"
              {
#line 152 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__V_18_18;

#line 152 "mode_ordering.m"
                {
#line 152 "mode_ordering.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[5], &check_hlds__mode_ordering__V_18_18, ((MR_Box) (check_hlds__mode_ordering__V_6_6)), ((MR_Box) (check_hlds__mode_ordering__V_12_12)));
                }
#line 3433 "check_hlds.mode_ordering.c"
                check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_18_18 == (MR_Integer) 0);
#line 152 "mode_ordering.m"
                check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 152 "mode_ordering.m"
                if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
                  *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_18_18;
#line 152 "mode_ordering.m"
                else
#line 152 "mode_ordering.m"
                  {
#line 152 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_19_19;

#line 152 "mode_ordering.m"
                    {
#line 152 "mode_ordering.m"
                      hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_ordering__V_19_19, check_hlds__mode_ordering__V_7_7, check_hlds__mode_ordering__V_13_13);
                    }
#line 3453 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_19_19 == (MR_Integer) 0);
#line 152 "mode_ordering.m"
                    check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 152 "mode_ordering.m"
                    if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
                      *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_19_19;
#line 152 "mode_ordering.m"
                    else
#line 152 "mode_ordering.m"
                      {
#line 152 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__V_20_20;

#line 152 "mode_ordering.m"
                        {
#line 152 "mode_ordering.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[4], &check_hlds__mode_ordering__V_20_20, ((MR_Box) (check_hlds__mode_ordering__V_8_8)), ((MR_Box) (check_hlds__mode_ordering__V_14_14)));
                        }
#line 3473 "check_hlds.mode_ordering.c"
                        check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__V_20_20 == (MR_Integer) 0);
#line 152 "mode_ordering.m"
                        check_hlds__mode_ordering__succeeded = !(check_hlds__mode_ordering__succeeded);
#line 152 "mode_ordering.m"
                        if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
                          *check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__V_20_20;
#line 152 "mode_ordering.m"
                        else
#line 152 "mode_ordering.m"
                          {
#line 152 "mode_ordering.m"
                            {
#line 152 "mode_ordering.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[5], check_hlds__mode_ordering__HeadVar__1_1, ((MR_Box) (check_hlds__mode_ordering__V_9_9)), ((MR_Box) (check_hlds__mode_ordering__V_15_15)));
#line 152 "mode_ordering.m"
                              return;
                            }
#line 152 "mode_ordering.m"
                          }
#line 152 "mode_ordering.m"
                      }
#line 152 "mode_ordering.m"
                  }
#line 152 "mode_ordering.m"
              }
#line 152 "mode_ordering.m"
          }
#line 152 "mode_ordering.m"
      }
#line 152 "mode_ordering.m"
  }
#line 152 "mode_ordering.m"
}

#line 152 "mode_ordering.m"
static MR_bool MR_CALL 
check_hlds__mode_ordering____Unify____mode_ordering_info_0_0(
#line 152 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 152 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__2_2)
#line 152 "mode_ordering.m"
{
#line 152 "mode_ordering.m"
  {
#line 152 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 152 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastX_15 = (MR_Integer) check_hlds__mode_ordering__HeadVar__1_1;
#line 152 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__CastY_16 = (MR_Integer) check_hlds__mode_ordering__HeadVar__2_2;

#line 152 "mode_ordering.m"
    check_hlds__mode_ordering__succeeded = (check_hlds__mode_ordering__CastX_15 == check_hlds__mode_ordering__CastY_16);
#line 152 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 152 "mode_ordering.m"
    else
#line 152 "mode_ordering.m"
      {
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeInfo_18_18;
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeInfo_19_19;
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeInfo_21_21;
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeInfo_22_22;
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 2)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 3)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 4)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 5)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 2)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 3)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 4)));
#line 152 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__2_2, (MR_Integer) 5)));

#line 3570 "check_hlds.mode_ordering.c"
        {
#line 3572 "check_hlds.mode_ordering.c"
          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_2[2], ((MR_Box) (check_hlds__mode_ordering__V_3_3)), ((MR_Box) (check_hlds__mode_ordering__V_9_9)));
        }
#line 152 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
          {
#line 3579 "check_hlds.mode_ordering.c"
            check_hlds__mode_ordering__TypeInfo_18_18 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[3];
#line 3581 "check_hlds.mode_ordering.c"
            {
#line 3583 "check_hlds.mode_ordering.c"
              check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_18_18, ((MR_Box) (check_hlds__mode_ordering__V_4_4)), ((MR_Box) (check_hlds__mode_ordering__V_10_10)));
            }
#line 152 "mode_ordering.m"
            if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
              {
#line 3590 "check_hlds.mode_ordering.c"
                check_hlds__mode_ordering__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[5];
#line 3592 "check_hlds.mode_ordering.c"
                {
#line 3594 "check_hlds.mode_ordering.c"
                  check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_19_19, ((MR_Box) (check_hlds__mode_ordering__V_5_5)), ((MR_Box) (check_hlds__mode_ordering__V_11_11)));
                }
#line 152 "mode_ordering.m"
                if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
                  {
#line 3601 "check_hlds.mode_ordering.c"
                    {
#line 3603 "check_hlds.mode_ordering.c"
                      check_hlds__mode_ordering__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_ordering__V_6_6, check_hlds__mode_ordering__V_12_12);
                    }
#line 152 "mode_ordering.m"
                    if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
                      {
#line 3610 "check_hlds.mode_ordering.c"
                        check_hlds__mode_ordering__TypeInfo_21_21 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[4];
#line 3612 "check_hlds.mode_ordering.c"
                        {
#line 3614 "check_hlds.mode_ordering.c"
                          check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_21_21, ((MR_Box) (check_hlds__mode_ordering__V_7_7)), ((MR_Box) (check_hlds__mode_ordering__V_13_13)));
                        }
#line 152 "mode_ordering.m"
                        if (check_hlds__mode_ordering__succeeded)
#line 152 "mode_ordering.m"
                          {
#line 3621 "check_hlds.mode_ordering.c"
                            check_hlds__mode_ordering__TypeInfo_22_22 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[5];
#line 3623 "check_hlds.mode_ordering.c"
                            {
#line 3625 "check_hlds.mode_ordering.c"
                              return check_hlds__mode_ordering__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_ordering__TypeInfo_22_22, ((MR_Box) (check_hlds__mode_ordering__V_8_8)), ((MR_Box) (check_hlds__mode_ordering__V_14_14)));
                            }
#line 152 "mode_ordering.m"
                          }
#line 152 "mode_ordering.m"
                      }
#line 152 "mode_ordering.m"
                  }
#line 152 "mode_ordering.m"
              }
#line 152 "mode_ordering.m"
          }
#line 152 "mode_ordering.m"
      }
#line 152 "mode_ordering.m"
    return check_hlds__mode_ordering__succeeded;
#line 152 "mode_ordering.m"
  }
#line 152 "mode_ordering.m"
}

#line 577 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4(
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 577 "mode_ordering.m"
{
#line 577 "mode_ordering.m"
  {
#line 577 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 577 "mode_ordering.m"
    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_HeadVar__7_31));
#line 577 "mode_ordering.m"
    {
#line 577 "mode_ordering.m"
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr);
#line 577 "mode_ordering.m"
      return;
    }
#line 577 "mode_ordering.m"
  }
#line 577 "mode_ordering.m"
}

#line 577 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5(
#line 577 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 577 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 577 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 577 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 577 "mode_ordering.m"
{
#line 577 "mode_ordering.m"
  {
#line 577 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0_s check_hlds__mode_ordering__env;

#line 577 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
#line 577 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont = check_hlds__mode_ordering__cont;
#line 577 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 577 "mode_ordering.m"
    {
#line 577 "mode_ordering.m"
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

#line 577 "mode_ordering.m"
      {
#line 577 "mode_ordering.m"
        check_hlds__mode_ordering__IntroducedFrom__pred__find_matching_proc_2__577__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 8))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5_env_0__conv0_HeadVar__7_31, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_4, &check_hlds__mode_ordering__env);
      }
#line 577 "mode_ordering.m"
    }
#line 577 "mode_ordering.m"
  }
#line 577 "mode_ordering.m"
}

#line 561 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(
#line 561 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 561 "mode_ordering.m"
{
#line 561 "mode_ordering.m"
  {
#line 561 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 561 "mode_ordering.m"
    MR_builtin_longjmp((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0, 1);
#line 561 "mode_ordering.m"
  }
#line 561 "mode_ordering.m"
}

#line 561 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2(
#line 561 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 561 "mode_ordering.m"
{
#line 561 "mode_ordering.m"
  {
#line 561 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 566 "mode_ordering.m"
    {
#line 569 "mode_ordering.m"
      MR_Word check_hlds__mode_ordering__V_26_26;
#line 569 "mode_ordering.m"
      MR_Word check_hlds__mode_ordering__V_27_27;
#line 570 "mode_ordering.m"
      MR_Word check_hlds__mode_ordering__V_28_28;
#line 570 "mode_ordering.m"
      MR_Word check_hlds__mode_ordering__V_29_29;

#line 565 "mode_ordering.m"
      {
#line 565 "mode_ordering.m"
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
      }
#line 566 "mode_ordering.m"
      if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 566 "mode_ordering.m"
        {
#line 569 "mode_ordering.m"
          {
#line 569 "mode_ordering.m"
            check_hlds__mode_ordering__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_27_27, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
#line 569 "mode_ordering.m"
          }
#line 569 "mode_ordering.m"
          {
#line 569 "mode_ordering.m"
            check_hlds__mode_ordering__V_26_26 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_27_27);
          }
#line 568 "mode_ordering.m"
          {
#line 568 "mode_ordering.m"
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_26_26);
          }
#line 569 "mode_ordering.m"
          if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 569 "mode_ordering.m"
            {
#line 571 "mode_ordering.m"
              {
#line 571 "mode_ordering.m"
                check_hlds__mode_ordering__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 571 "mode_ordering.m"
                MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_29_29, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
#line 571 "mode_ordering.m"
              }
#line 571 "mode_ordering.m"
              {
#line 571 "mode_ordering.m"
                check_hlds__mode_ordering__V_28_28 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_29_29);
              }
#line 570 "mode_ordering.m"
              {
#line 570 "mode_ordering.m"
                (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_28_28);
              }
#line 570 "mode_ordering.m"
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 569 "mode_ordering.m"
            }
#line 566 "mode_ordering.m"
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 566 "mode_ordering.m"
        }
#line 566 "mode_ordering.m"
    }
#line 563 "mode_ordering.m"
    if (!((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded))
#line 566 "mode_ordering.m"
      {
#line 566 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_34_34;
#line 566 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_35_35;
#line 570 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_36_36;
#line 570 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_37_37;
#line 565 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__TypeCtorInfo_42_42;

#line 569 "mode_ordering.m"
        {
#line 569 "mode_ordering.m"
          check_hlds__mode_ordering__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "mode_ordering.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_35_35, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
#line 569 "mode_ordering.m"
        }
#line 569 "mode_ordering.m"
        {
#line 569 "mode_ordering.m"
          check_hlds__mode_ordering__V_34_34 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_35_35);
        }
#line 568 "mode_ordering.m"
        {
#line 568 "mode_ordering.m"
          (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_34_34);
        }
#line 566 "mode_ordering.m"
        if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 566 "mode_ordering.m"
          {
#line 571 "mode_ordering.m"
            {
#line 571 "mode_ordering.m"
              check_hlds__mode_ordering__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 571 "mode_ordering.m"
              MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_37_37, 0) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23));
#line 571 "mode_ordering.m"
            }
#line 571 "mode_ordering.m"
            {
#line 571 "mode_ordering.m"
              check_hlds__mode_ordering__V_36_36 = check_hlds__mode_constraint_robdd__mode_constraint_var_2_f_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16, check_hlds__mode_ordering__V_37_37);
            }
#line 570 "mode_ordering.m"
            {
#line 570 "mode_ordering.m"
              (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_118_97_114_95_101_110_116_97_105_108_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21, check_hlds__mode_ordering__V_36_36);
            }
#line 570 "mode_ordering.m"
            (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 566 "mode_ordering.m"
            if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 566 "mode_ordering.m"
              {
#line 3876 "check_hlds.mode_ordering.c"
                check_hlds__mode_ordering__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 565 "mode_ordering.m"
                {
#line 565 "mode_ordering.m"
                  (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0(check_hlds__mode_ordering__TypeCtorInfo_42_42, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22);
                }
#line 566 "mode_ordering.m"
                (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 566 "mode_ordering.m"
              }
#line 566 "mode_ordering.m"
          }
#line 566 "mode_ordering.m"
      }
#line 563 "mode_ordering.m"
    if ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 563 "mode_ordering.m"
      {
#line 563 "mode_ordering.m"
        check_hlds__mode_ordering__find_matching_proc_2_8_p_0_1(check_hlds__mode_ordering__env_ptr);
#line 563 "mode_ordering.m"
        return;
      }
#line 561 "mode_ordering.m"
  }
#line 561 "mode_ordering.m"
}

#line 561 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(
#line 561 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 561 "mode_ordering.m"
{
#line 561 "mode_ordering.m"
  {
#line 561 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 561 "mode_ordering.m"
    if (MR_builtin_setjmp((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__commit_0) == 0)
#line 561 "mode_ordering.m"
      {
#line 561 "mode_ordering.m"
        {
#line 561 "mode_ordering.m"
          hlds__inst_graph__corresponding_nodes_from_lists_6_p_0((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13, (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19, &(check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__X_22, &(check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Y_23, check_hlds__mode_ordering__find_matching_proc_2_8_p_0_2, check_hlds__mode_ordering__env_ptr);
        }
#line 561 "mode_ordering.m"
        (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_FALSE;
#line 561 "mode_ordering.m"
      }
#line 561 "mode_ordering.m"
    else
#line 561 "mode_ordering.m"
      (check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 561 "mode_ordering.m"
  }
#line 561 "mode_ordering.m"
}

#line 550 "mode_ordering.m"
static MR_bool MR_CALL 
check_hlds__mode_ordering__find_matching_proc_2_8_p_0(
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_12,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_13,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CallerInstGraph_14,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__CalleeInstGraph_15,
#line 550 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCInfo_16,
#line 550 "mode_ordering.m"
  MR_Integer * check_hlds__mode_ordering__ProcId_17,
#line 550 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ConsumingVars_18)
#line 550 "mode_ordering.m"
{
#line 550 "mode_ordering.m"
  {
#line 550 "mode_ordering.m"
    struct check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0_s check_hlds__mode_ordering__env;

#line 550 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__ProdVars_12 = check_hlds__mode_ordering__ProdVars_12;
#line 550 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13 = check_hlds__mode_ordering__Args_13;
#line 550 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14 = check_hlds__mode_ordering__CallerInstGraph_14;
#line 550 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15 = check_hlds__mode_ordering__CalleeInstGraph_15;
#line 550 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16 = check_hlds__mode_ordering__MCInfo_16;
#line 555 "mode_ordering.m"
    while (MR_TRUE)
#line 555 "mode_ordering.m"
      {
#line 555 "mode_ordering.m"
        /* tailcall optimized into a loop */
#line 555 "mode_ordering.m"
        {
#line 555 "mode_ordering.m"
          MR_Integer check_hlds__mode_ordering__ProcId0_9;
#line 555 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ProcInfo_10;
#line 555 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ProcList_11;
#line 555 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Constraint0_20;
#line 555 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_25_25;

#line 554 "mode_ordering.m"
          (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__mode_ordering__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 554 "mode_ordering.m"
          if ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 554 "mode_ordering.m"
            {
#line 554 "mode_ordering.m"
              check_hlds__mode_ordering__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
#line 554 "mode_ordering.m"
              check_hlds__mode_ordering__ProcList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 554 "mode_ordering.m"
              check_hlds__mode_ordering__ProcId0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_25_25, (MR_Integer) 0)));
#line 554 "mode_ordering.m"
              check_hlds__mode_ordering__ProcInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_25_25, (MR_Integer) 1)));
#line 556 "mode_ordering.m"
              {
#line 556 "mode_ordering.m"
                hlds__hlds_pred__proc_info_get_headvars_2_p_0(check_hlds__mode_ordering__ProcInfo_10, &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19);
              }
#line 557 "mode_ordering.m"
              {
#line 557 "mode_ordering.m"
                hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(check_hlds__mode_ordering__ProcInfo_10, &check_hlds__mode_ordering__Constraint0_20);
              }
#line 558 "mode_ordering.m"
              {
#line 558 "mode_ordering.m"
                (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_101_110_115_117_114_101_95_110_111_114_109_97_108_105_115_101_100_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_1_f_0(check_hlds__mode_ordering__Constraint0_20);
              }
#line 561 "mode_ordering.m"
              {
#line 561 "mode_ordering.m"
                check_hlds__mode_ordering__find_matching_proc_2_8_p_0_3(&check_hlds__mode_ordering__env);
              }
#line 561 "mode_ordering.m"
              (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = !((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded);
#line 585 "mode_ordering.m"
              if ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded)
#line 576 "mode_ordering.m"
                {
#line 576 "mode_ordering.m"
                  MR_Word check_hlds__mode_ordering__ConsumingVarsList_24;
#line 576 "mode_ordering.m"
                  MR_Word check_hlds__mode_ordering__V_30_30;

#line 576 "mode_ordering.m"
                  *check_hlds__mode_ordering__ProcId_17 = check_hlds__mode_ordering__ProcId0_9;
#line 577 "mode_ordering.m"
                  {
#line 577 "mode_ordering.m"
                    check_hlds__mode_ordering__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_7[0]));
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 1) = ((MR_Box) (check_hlds__mode_ordering__find_matching_proc_2_8_p_0_5));
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 3) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Args_13));
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 4) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CallerInstGraph_14));
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 5) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__CalleeInstGraph_15));
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 6) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__MCInfo_16));
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 7) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__HeadVars_19));
#line 577 "mode_ordering.m"
                    MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_30_30, 8) = ((MR_Box) ((check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__Constraint_21));
#line 577 "mode_ordering.m"
                  }
#line 577 "mode_ordering.m"
                  {
#line 577 "mode_ordering.m"
                    check_hlds__mode_ordering__ConsumingVarsList_24 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_30_30);
                  }
#line 584 "mode_ordering.m"
                  {
#line 584 "mode_ordering.m"
                    parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ConsumingVarsList_24, check_hlds__mode_ordering__ConsumingVars_18);
                  }
#line 576 "mode_ordering.m"
                  (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded = MR_TRUE;
#line 576 "mode_ordering.m"
                }
#line 585 "mode_ordering.m"
              else
#line 586 "mode_ordering.m"
                {
#line 586 "mode_ordering.m"
                  /* direct tailcall eliminated */
#line 586 "mode_ordering.m"
                  {
#line 586 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__HeadVar__1__tmp_copy_1 = check_hlds__mode_ordering__ProcList_11;

#line 586 "mode_ordering.m"
                    check_hlds__mode_ordering__HeadVar__1_1 = check_hlds__mode_ordering__HeadVar__1__tmp_copy_1;
#line 586 "mode_ordering.m"
                  }
#line 586 "mode_ordering.m"
                  continue;
#line 586 "mode_ordering.m"
                }
#line 554 "mode_ordering.m"
            }
#line 555 "mode_ordering.m"
          return (check_hlds__mode_ordering__env).check_hlds__mode_ordering__find_matching_proc_2_8_p_0_env_0__succeeded;
#line 555 "mode_ordering.m"
        }
#line 555 "mode_ordering.m"
        break;
#line 555 "mode_ordering.m"
      }
#line 550 "mode_ordering.m"
  }
#line 550 "mode_ordering.m"
}

#line 517 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__find_matching_proc_7_p_0(
#line 517 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 517 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Args_9,
#line 517 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ProdVars_10,
#line 517 "mode_ordering.m"
  MR_Integer * check_hlds__mode_ordering__ProcId_11,
#line 517 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ConsumingVars_12,
#line 517 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26,
#line 517 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_27)
#line 517 "mode_ordering.m"
{
#line 521 "mode_ordering.m"
  {
#line 521 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 3)));
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__CallerInstGraph_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 0)));
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__PredConstraintMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 4)));
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MCInfo_18;
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__PredInfo_19;
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__CalleeInstGraphInfo_20;
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__CalleeInstGraph_21;
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProcTable_22;
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProcList_23;
#line 521 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_55_55;
#line 522 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 1)));
#line 522 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 2)));
#line 522 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26, (MR_Integer) 5)));
#line 601 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_V_55_55;
#line 601 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;
#line 538 "mode_ordering.m"
    MR_Integer check_hlds__mode_ordering__ProcId0_24;
#line 538 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ConsumingVars0_25;

#line 601 "mode_ordering.m"
    {
#line 601 "mode_ordering.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_pred_constraint_info_0, check_hlds__mode_ordering__PredConstraintMap_16, ((MR_Box) (check_hlds__mode_ordering__PredId_8)), &check_hlds__mode_ordering__conv0_V_55_55);
    }
#line 601 "mode_ordering.m"
    check_hlds__mode_ordering__V_55_55 = ((MR_Word) check_hlds__mode_ordering__conv0_V_55_55);
#line 601 "mode_ordering.m"
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_55_55, (MR_Integer) 0)));
#line 601 "mode_ordering.m"
    check_hlds__mode_ordering__MCInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_55_55, (MR_Integer) 1)));
#line 527 "mode_ordering.m"
    {
#line 527 "mode_ordering.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_ordering__ModuleInfo_14, check_hlds__mode_ordering__PredId_8, &check_hlds__mode_ordering__PredInfo_19);
    }
#line 528 "mode_ordering.m"
    {
#line 528 "mode_ordering.m"
      hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(check_hlds__mode_ordering__PredInfo_19, &check_hlds__mode_ordering__CalleeInstGraphInfo_20);
    }
#line 529 "mode_ordering.m"
    {
#line 529 "mode_ordering.m"
      check_hlds__mode_ordering__CalleeInstGraph_21 = hlds__inst_graph__interface_inst_graph_1_f_0(check_hlds__mode_ordering__CalleeInstGraphInfo_20);
    }
#line 530 "mode_ordering.m"
    {
#line 530 "mode_ordering.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__mode_ordering__PredInfo_19, &check_hlds__mode_ordering__ProcTable_22);
    }
#line 531 "mode_ordering.m"
    {
#line 531 "mode_ordering.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__mode_ordering__ProcTable_22, &check_hlds__mode_ordering__ProcList_23);
    }
#line 533 "mode_ordering.m"
    {
#line 533 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = check_hlds__mode_ordering__find_matching_proc_2_8_p_0(check_hlds__mode_ordering__ProcList_23, check_hlds__mode_ordering__ProdVars_10, check_hlds__mode_ordering__Args_9, check_hlds__mode_ordering__CallerInstGraph_15, check_hlds__mode_ordering__CalleeInstGraph_21, check_hlds__mode_ordering__MCInfo_18, &check_hlds__mode_ordering__ProcId0_24, &check_hlds__mode_ordering__ConsumingVars0_25);
    }
#line 538 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 536 "mode_ordering.m"
      {
#line 536 "mode_ordering.m"
        *check_hlds__mode_ordering__ProcId_11 = check_hlds__mode_ordering__ProcId0_24;
#line 537 "mode_ordering.m"
        *check_hlds__mode_ordering__ConsumingVars_12 = check_hlds__mode_ordering__ConsumingVars0_25;
#line 536 "mode_ordering.m"
      }
#line 538 "mode_ordering.m"
    else
#line 544 "mode_ordering.m"
      {
#line 539 "mode_ordering.m"
        {
#line 539 "mode_ordering.m"
          check_hlds__mode_ordering__succeeded = hlds__hlds_pred__pred_info_infer_modes_1_p_0(check_hlds__mode_ordering__PredInfo_19);
        }
#line 544 "mode_ordering.m"
        if (check_hlds__mode_ordering__succeeded)
#line 543 "mode_ordering.m"
          {
#line 543 "mode_ordering.m"
            {
#line 543 "mode_ordering.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.find_matching_proc\'/7", (MR_String) "infer_modes NYI");
#line 543 "mode_ordering.m"
              return;
            }
#line 543 "mode_ordering.m"
          }
#line 544 "mode_ordering.m"
        else
#line 547 "mode_ordering.m"
          {
#line 547 "mode_ordering.m"
            {
#line 547 "mode_ordering.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.find_matching_proc\'/7", (MR_String) "unexpected mode error");
#line 547 "mode_ordering.m"
              return;
            }
#line 547 "mode_ordering.m"
          }
#line 544 "mode_ordering.m"
      }
#line 521 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_27 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_26;
#line 521 "mode_ordering.m"
  }
#line 517 "mode_ordering.m"
}

#line 486 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(
#line 486 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__ProdVars_6,
#line 486 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13,
#line 486 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14,
#line 486 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15,
#line 486 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_16)
#line 486 "mode_ordering.m"
{
#line 490 "mode_ordering.m"
  {
#line 490 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 490 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 2)));
#line 490 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__AtomicProdVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 1)));
#line 490 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalId_11;
#line 491 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 0)));
#line 491 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 3)));
#line 491 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 4)));
#line 491 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15, (MR_Integer) 5)));
#line 499 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVars0_12;
#line 495 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;
#line 495 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_ProdVars0_12;

#line 493 "mode_ordering.m"
    {
#line 493 "mode_ordering.m"
      check_hlds__mode_ordering__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13);
    }
#line 495 "mode_ordering.m"
    {
#line 495 "mode_ordering.m"
      check_hlds__mode_ordering__V_17_17 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_ordering__LambdaNesting_9, ((MR_Box) (check_hlds__mode_ordering__GoalId_11)));
    }
#line 495 "mode_ordering.m"
    {
#line 495 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[5], (MR_Word) &check_hlds__mode_ordering_scalar_common_1[6], check_hlds__mode_ordering__AtomicProdVars_10, ((MR_Box) (check_hlds__mode_ordering__V_17_17)), &check_hlds__mode_ordering__conv0_ProdVars0_12);
    }
#line 495 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 495 "mode_ordering.m"
      {
#line 495 "mode_ordering.m"
        check_hlds__mode_ordering__ProdVars0_12 = ((MR_Word) check_hlds__mode_ordering__conv0_ProdVars0_12);
#line 495 "mode_ordering.m"
        check_hlds__mode_ordering__succeeded = MR_TRUE;
#line 495 "mode_ordering.m"
      }
#line 499 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 498 "mode_ordering.m"
      *check_hlds__mode_ordering__ProdVars_6 = check_hlds__mode_ordering__ProdVars0_12;
#line 499 "mode_ordering.m"
    else
#line 500 "mode_ordering.m"
      {
#line 500 "mode_ordering.m"
        {
#line 500 "mode_ordering.m"
          *check_hlds__mode_ordering__ProdVars_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 500 "mode_ordering.m"
      }
#line 502 "mode_ordering.m"
    {
#line 502 "mode_ordering.m"
      hlds__hlds_goal__goal_info_set_producing_vars_3_p_0(*check_hlds__mode_ordering__ProdVars_6, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_13, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14);
    }
#line 490 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_16 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_15;
#line 490 "mode_ordering.m"
  }
#line 486 "mode_ordering.m"
}

#line 458 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_4(
#line 458 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 458 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 458 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 458 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 458 "mode_ordering.m"
{
#line 458 "mode_ordering.m"
  {
#line 458 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
#line 458 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 458 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv6_HeadVar__6_75;

#line 458 "mode_ordering.m"
    {
#line 458 "mode_ordering.m"
      check_hlds__mode_ordering__conv6_HeadVar__6_75 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__458__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 458 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv6_HeadVar__6_75));
#line 458 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_4;
#line 458 "mode_ordering.m"
  }
#line 458 "mode_ordering.m"
}

#line 450 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_3(
#line 450 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 450 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 450 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 450 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 450 "mode_ordering.m"
{
#line 450 "mode_ordering.m"
  {
#line 450 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
#line 450 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 450 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv4_HeadVar__4_60;

#line 450 "mode_ordering.m"
    {
#line 450 "mode_ordering.m"
      check_hlds__mode_ordering__conv4_HeadVar__4_60 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__450__1_3_f_0(((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 450 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv4_HeadVar__4_60));
#line 450 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_4;
#line 450 "mode_ordering.m"
  }
#line 450 "mode_ordering.m"
}

#line 443 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_2(
#line 443 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 443 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 443 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 443 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3)
#line 443 "mode_ordering.m"
{
#line 443 "mode_ordering.m"
  {
#line 443 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_4;
#line 443 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 443 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv2_HeadVar__4_47;

#line 443 "mode_ordering.m"
    {
#line 443 "mode_ordering.m"
      check_hlds__mode_ordering__conv2_HeadVar__4_47 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__443__1_3_f_0(((MR_Integer) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3));
    }
#line 443 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv2_HeadVar__4_47));
#line 443 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_4;
#line 443 "mode_ordering.m"
  }
#line 443 "mode_ordering.m"
}

#line 429 "mode_ordering.m"
static MR_Box MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0_1(
#line 429 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 429 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 429 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2)
#line 429 "mode_ordering.m"
{
#line 429 "mode_ordering.m"
  {
#line 429 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__wrapper_arg_3;
#line 429 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 429 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_HeadVar__4_38;

#line 429 "mode_ordering.m"
    {
#line 429 "mode_ordering.m"
      check_hlds__mode_ordering__conv0_HeadVar__4_38 = check_hlds__mode_ordering__IntroducedFrom__func__mode_order_conj__429__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2));
    }
#line 429 "mode_ordering.m"
    check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_HeadVar__4_38));
#line 429 "mode_ordering.m"
    return check_hlds__mode_ordering__wrapper_arg_3;
#line 429 "mode_ordering.m"
  }
#line 429 "mode_ordering.m"
}

#line 425 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_conj_3_p_0(
#line 425 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_4,
#line 425 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goals0_5,
#line 425 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__Goals_6)
#line 425 "mode_ordering.m"
{
#line 428 "mode_ordering.m"
  {
#line 428 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_134_134;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_135_135;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeInfo_141_141;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalMap_7;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdMap_17;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MakeVisMap_22;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Graph_25;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_35_35;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_42_42;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_55_55;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_68_68;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_69_69;
#line 428 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_99_99;
#line 429 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_GoalMap_7;
#line 443 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv3_ProdMap_17;
#line 450 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv5_MakeVisMap_22;
#line 458 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv7_Graph_25;
#line 481 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TSort_34;

#line 429 "mode_ordering.m"
    {
#line 429 "mode_ordering.m"
      check_hlds__mode_ordering__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 429 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[2]));
#line 429 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_1));
#line 429 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 429 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_35_35, 3) = ((MR_Box) (check_hlds__mode_ordering__ForwardGoalPathMap_4));
#line 429 "mode_ordering.m"
    }
#line 4568 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_134_134 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 440 "mode_ordering.m"
    {
#line 440 "mode_ordering.m"
      check_hlds__mode_ordering__V_42_42 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128);
    }
#line 429 "mode_ordering.m"
    {
#line 429 "mode_ordering.m"
      check_hlds__mode_ordering__conv1_GoalMap_7 = mercury__list__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[0], check_hlds__mode_ordering__V_35_35, check_hlds__mode_ordering__Goals0_5, ((MR_Box) (check_hlds__mode_ordering__V_42_42)));
    }
#line 429 "mode_ordering.m"
    check_hlds__mode_ordering__GoalMap_7 = ((MR_Word) check_hlds__mode_ordering__conv1_GoalMap_7);
#line 4582 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeInfo_135_135 = (MR_Word) &check_hlds__mode_ordering_scalar_common_2[1];
#line 4584 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeInfo_141_141 = (MR_Word) &check_hlds__mode_ordering_scalar_common_1[3];
#line 447 "mode_ordering.m"
    {
#line 447 "mode_ordering.m"
      check_hlds__mode_ordering__V_55_55 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeInfo_141_141, check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
#line 443 "mode_ordering.m"
    {
#line 443 "mode_ordering.m"
      check_hlds__mode_ordering__conv3_ProdMap_17 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TypeInfo_135_135, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[11], check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_55_55)));
    }
#line 443 "mode_ordering.m"
    check_hlds__mode_ordering__ProdMap_17 = ((MR_Word) check_hlds__mode_ordering__conv3_ProdMap_17);
#line 456 "mode_ordering.m"
    {
#line 456 "mode_ordering.m"
      check_hlds__mode_ordering__V_68_68 = mercury__map__init_0_f_0(check_hlds__mode_ordering__TypeInfo_141_141, check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
#line 450 "mode_ordering.m"
    {
#line 450 "mode_ordering.m"
      check_hlds__mode_ordering__conv5_MakeVisMap_22 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TypeInfo_135_135, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[12], check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_68_68)));
    }
#line 450 "mode_ordering.m"
    check_hlds__mode_ordering__MakeVisMap_22 = ((MR_Word) check_hlds__mode_ordering__conv5_MakeVisMap_22);
#line 458 "mode_ordering.m"
    {
#line 458 "mode_ordering.m"
      check_hlds__mode_ordering__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 458 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_6[0]));
#line 458 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_conj_3_p_0_4));
#line 458 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 458 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 3) = ((MR_Box) (check_hlds__mode_ordering__ProdMap_17));
#line 458 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_69_69, 4) = ((MR_Box) (check_hlds__mode_ordering__MakeVisMap_22));
#line 458 "mode_ordering.m"
    }
#line 477 "mode_ordering.m"
    {
#line 477 "mode_ordering.m"
      check_hlds__mode_ordering__V_99_99 = mercury__digraph__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134);
    }
#line 458 "mode_ordering.m"
    {
#line 458 "mode_ordering.m"
      check_hlds__mode_ordering__conv7_Graph_25 = mercury__map__foldl_3_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, (MR_Word) &check_hlds__mode_ordering_scalar_common_1[4], check_hlds__mode_ordering__V_69_69, check_hlds__mode_ordering__GoalMap_7, ((MR_Box) (check_hlds__mode_ordering__V_99_99)));
    }
#line 458 "mode_ordering.m"
    check_hlds__mode_ordering__Graph_25 = ((MR_Word) check_hlds__mode_ordering__conv7_Graph_25);
#line 479 "mode_ordering.m"
    {
#line 479 "mode_ordering.m"
      check_hlds__mode_ordering__succeeded = mercury__digraph__tsort_2_p_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__Graph_25, &check_hlds__mode_ordering__TSort_34);
    }
#line 481 "mode_ordering.m"
    if (check_hlds__mode_ordering__succeeded)
#line 480 "mode_ordering.m"
      {
#line 480 "mode_ordering.m"
        *check_hlds__mode_ordering__Goals_6 = mercury__map__apply_to_list_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_134_134, check_hlds__mode_ordering__TypeCtorInfo_128_128, check_hlds__mode_ordering__TSort_34, check_hlds__mode_ordering__GoalMap_7);
      }
#line 481 "mode_ordering.m"
    else
#line 483 "mode_ordering.m"
      {
#line 483 "mode_ordering.m"
        {
#line 483 "mode_ordering.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_conj\'/3", (MR_String) "tsort failed");
#line 483 "mode_ordering.m"
          return;
        }
#line 483 "mode_ordering.m"
      }
#line 428 "mode_ordering.m"
  }
#line 425 "mode_ordering.m"
}

#line 416 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(
#line 416 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GI_4,
#line 416 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
#line 416 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7)
#line 416 "mode_ordering.m"
{
#line 419 "mode_ordering.m"
  {
#line 419 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 419 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8;
#line 419 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_9_9;
#line 419 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10;
#line 419 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11;
#line 419 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12;
#line 419 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_13_13;
#line 419 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15;

#line 420 "mode_ordering.m"
    {
#line 420 "mode_ordering.m"
      check_hlds__mode_ordering__V_9_9 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 420 "mode_ordering.m"
    {
#line 420 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6, check_hlds__mode_ordering__V_9_9);
    }
#line 421 "mode_ordering.m"
    {
#line 421 "mode_ordering.m"
      check_hlds__mode_ordering__V_11_11 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 421 "mode_ordering.m"
    {
#line 421 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_8, check_hlds__mode_ordering__V_11_11);
    }
#line 422 "mode_ordering.m"
    {
#line 422 "mode_ordering.m"
      check_hlds__mode_ordering__V_13_13 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 422 "mode_ordering.m"
    {
#line 422 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_10, check_hlds__mode_ordering__V_13_13);
    }
#line 423 "mode_ordering.m"
    {
#line 423 "mode_ordering.m"
      check_hlds__mode_ordering__V_15_15 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 423 "mode_ordering.m"
    {
#line 423 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12, check_hlds__mode_ordering__V_15_15);
    }
#line 419 "mode_ordering.m"
  }
#line 416 "mode_ordering.m"
}

#line 397 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_set_3_p_0(
#line 397 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goal_4,
#line 397 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12,
#line 397 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13)
#line 397 "mode_ordering.m"
{
#line 400 "mode_ordering.m"
  {
#line 400 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_26_26;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVars0_6;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ConsumVars0_7;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_8;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_9;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GI_11;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_16_16;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_18_18;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_21_21;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_22_22;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_24_24;
#line 400 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_25_25;
#line 405 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_10_10;

#line 401 "mode_ordering.m"
    {
#line 401 "mode_ordering.m"
      check_hlds__mode_ordering__ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 402 "mode_ordering.m"
    {
#line 402 "mode_ordering.m"
      check_hlds__mode_ordering__ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 403 "mode_ordering.m"
    {
#line 403 "mode_ordering.m"
      check_hlds__mode_ordering__MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 404 "mode_ordering.m"
    {
#line 404 "mode_ordering.m"
      check_hlds__mode_ordering__NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12);
    }
#line 405 "mode_ordering.m"
    check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_4, (MR_Integer) 0)));
#line 405 "mode_ordering.m"
    check_hlds__mode_ordering__GI_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_4, (MR_Integer) 1)));
#line 4819 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 408 "mode_ordering.m"
    {
#line 408 "mode_ordering.m"
      check_hlds__mode_ordering__V_16_16 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
#line 408 "mode_ordering.m"
    {
#line 408 "mode_ordering.m"
      check_hlds__mode_ordering__V_15_15 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__ProdVars0_6, check_hlds__mode_ordering__V_16_16);
    }
#line 408 "mode_ordering.m"
    {
#line 408 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_12, check_hlds__mode_ordering__V_15_15);
    }
#line 410 "mode_ordering.m"
    {
#line 410 "mode_ordering.m"
      check_hlds__mode_ordering__V_19_19 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
#line 410 "mode_ordering.m"
    {
#line 410 "mode_ordering.m"
      check_hlds__mode_ordering__V_18_18 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__ConsumVars0_7, check_hlds__mode_ordering__V_19_19);
    }
#line 410 "mode_ordering.m"
    {
#line 410 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14, check_hlds__mode_ordering__V_18_18);
    }
#line 412 "mode_ordering.m"
    {
#line 412 "mode_ordering.m"
      check_hlds__mode_ordering__V_22_22 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
#line 412 "mode_ordering.m"
    {
#line 412 "mode_ordering.m"
      check_hlds__mode_ordering__V_21_21 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__MakeVisibleVars0_8, check_hlds__mode_ordering__V_22_22);
    }
#line 412 "mode_ordering.m"
    {
#line 412 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_17_17, check_hlds__mode_ordering__V_21_21);
    }
#line 414 "mode_ordering.m"
    {
#line 414 "mode_ordering.m"
      check_hlds__mode_ordering__V_25_25 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_11);
    }
#line 414 "mode_ordering.m"
    {
#line 414 "mode_ordering.m"
      check_hlds__mode_ordering__V_24_24 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_26_26, check_hlds__mode_ordering__NeedVisibleVars0_9, check_hlds__mode_ordering__V_25_25);
    }
#line 414 "mode_ordering.m"
    {
#line 414 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_13 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_20_20, check_hlds__mode_ordering__V_24_24);
    }
#line 400 "mode_ordering.m"
  }
#line 397 "mode_ordering.m"
}

#line 395 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0_1(
#line 395 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 395 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 395 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 395 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 395 "mode_ordering.m"
{
#line 395 "mode_ordering.m"
  {
#line 395 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 395 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13;

#line 395 "mode_ordering.m"
    {
#line 395 "mode_ordering.m"
      check_hlds__mode_ordering__union_mode_vars_set_3_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13);
    }
#line 395 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_13));
#line 395 "mode_ordering.m"
  }
#line 395 "mode_ordering.m"
}

#line 391 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(
#line 391 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goals_4,
#line 391 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6,
#line 391 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7)
#line 391 "mode_ordering.m"
{
#line 394 "mode_ordering.m"
  {
#line 394 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 395 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7;

#line 395 "mode_ordering.m"
    {
#line 395 "mode_ordering.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[10], check_hlds__mode_ordering__Goals_4, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_6)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7);
    }
#line 395 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_7 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_7);
#line 394 "mode_ordering.m"
  }
#line 391 "mode_ordering.m"
}

#line 373 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(
#line 373 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GI_4,
#line 373 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10,
#line 373 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11)
#line 373 "mode_ordering.m"
{
#line 376 "mode_ordering.m"
  {
#line 376 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_24_24;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVars0_6;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ConsumVars0_7;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_8;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_9;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_13_13;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_14_14;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_16_16;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_20_20;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_22_22;
#line 376 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_23_23;

#line 377 "mode_ordering.m"
    {
#line 377 "mode_ordering.m"
      check_hlds__mode_ordering__ProdVars0_6 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 378 "mode_ordering.m"
    {
#line 378 "mode_ordering.m"
      check_hlds__mode_ordering__ConsumVars0_7 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 379 "mode_ordering.m"
    {
#line 379 "mode_ordering.m"
      check_hlds__mode_ordering__MakeVisibleVars0_8 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 380 "mode_ordering.m"
    {
#line 380 "mode_ordering.m"
      check_hlds__mode_ordering__NeedVisibleVars0_9 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 5016 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 383 "mode_ordering.m"
    {
#line 383 "mode_ordering.m"
      check_hlds__mode_ordering__V_14_14 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 383 "mode_ordering.m"
    {
#line 383 "mode_ordering.m"
      check_hlds__mode_ordering__V_13_13 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__ProdVars0_6, check_hlds__mode_ordering__V_14_14);
    }
#line 383 "mode_ordering.m"
    {
#line 383 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_10, check_hlds__mode_ordering__V_13_13);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__V_17_17 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__V_16_16 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__ConsumVars0_7, check_hlds__mode_ordering__V_17_17);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_12, check_hlds__mode_ordering__V_16_16);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__V_20_20 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__V_19_19 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__MakeVisibleVars0_8, check_hlds__mode_ordering__V_20_20);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_15, check_hlds__mode_ordering__V_19_19);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__V_23_23 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_4);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__V_22_22 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_24, check_hlds__mode_ordering__NeedVisibleVars0_9, check_hlds__mode_ordering__V_23_23);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_11 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_18, check_hlds__mode_ordering__V_22_22);
    }
#line 376 "mode_ordering.m"
  }
#line 373 "mode_ordering.m"
}

#line 367 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_2_3_p_0(
#line 367 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 367 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7,
#line 367 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8)
#line 367 "mode_ordering.m"
{
#line 370 "mode_ordering.m"
  {
#line 370 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__TypeCtorInfo_24_30;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVars0_14;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ConsumVars0_15;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MakeVisibleVars0_16;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__NeedVisibleVars0_17;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_20_20;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_22_22;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_23_23;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_25_25;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_26_26;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_28_28;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_29_29;
#line 370 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));

#line 377 "mode_ordering.m"
    {
#line 377 "mode_ordering.m"
      check_hlds__mode_ordering__ProdVars0_14 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
#line 378 "mode_ordering.m"
    {
#line 378 "mode_ordering.m"
      check_hlds__mode_ordering__ConsumVars0_15 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
#line 379 "mode_ordering.m"
    {
#line 379 "mode_ordering.m"
      check_hlds__mode_ordering__MakeVisibleVars0_16 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
#line 380 "mode_ordering.m"
    {
#line 380 "mode_ordering.m"
      check_hlds__mode_ordering__NeedVisibleVars0_17 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7);
    }
#line 5155 "check_hlds.mode_ordering.c"
    check_hlds__mode_ordering__TypeCtorInfo_24_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 383 "mode_ordering.m"
    {
#line 383 "mode_ordering.m"
      check_hlds__mode_ordering__V_20_20 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
#line 383 "mode_ordering.m"
    {
#line 383 "mode_ordering.m"
      check_hlds__mode_ordering__V_19_19 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__ProdVars0_14, check_hlds__mode_ordering__V_20_20);
    }
#line 383 "mode_ordering.m"
    {
#line 383 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_7, check_hlds__mode_ordering__V_19_19);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__V_23_23 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__V_22_22 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__ConsumVars0_15, check_hlds__mode_ordering__V_23_23);
    }
#line 385 "mode_ordering.m"
    {
#line 385 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_18, check_hlds__mode_ordering__V_22_22);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__V_26_26 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__V_25_25 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__MakeVisibleVars0_16, check_hlds__mode_ordering__V_26_26);
    }
#line 387 "mode_ordering.m"
    {
#line 387 "mode_ordering.m"
      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_15_21, check_hlds__mode_ordering__V_25_25);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__V_29_29 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_5);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      check_hlds__mode_ordering__V_28_28 = parse_tree__set_of_var__union_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_24_30, check_hlds__mode_ordering__NeedVisibleVars0_17, check_hlds__mode_ordering__V_29_29);
    }
#line 389 "mode_ordering.m"
    {
#line 389 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_18_24, check_hlds__mode_ordering__V_28_28);
    }
#line 370 "mode_ordering.m"
  }
#line 367 "mode_ordering.m"
}

#line 365 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0_1(
#line 365 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 365 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 365 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 365 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 365 "mode_ordering.m"
{
#line 365 "mode_ordering.m"
  {
#line 365 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 365 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8;

#line 365 "mode_ordering.m"
    {
#line 365 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_disj_2_3_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8);
    }
#line 365 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_GoalInfo_8));
#line 365 "mode_ordering.m"
  }
#line 365 "mode_ordering.m"
}

#line 359 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_disj_3_p_0(
#line 359 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__HeadVar__1_1,
#line 359 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2,
#line 359 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3)
#line 359 "mode_ordering.m"
{
#line 362 "mode_ordering.m"
  {
#line 362 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 362 "mode_ordering.m"
    if ((check_hlds__mode_ordering__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3 = check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2;
#line 362 "mode_ordering.m"
    else
#line 363 "mode_ordering.m"
      {
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__GI_8;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__Goals_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 1)));
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__HeadVar__1_1, (MR_Integer) 0)));
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_27_27;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_29_29;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_31_31;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_33_33;
#line 363 "mode_ordering.m"
        MR_Word check_hlds__mode_ordering__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_13_13, (MR_Integer) 0)));
#line 365 "mode_ordering.m"
        MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3;

#line 363 "mode_ordering.m"
        check_hlds__mode_ordering__GI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_13_13, (MR_Integer) 1)));
#line 420 "mode_ordering.m"
        {
#line 420 "mode_ordering.m"
          check_hlds__mode_ordering__V_27_27 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
#line 420 "mode_ordering.m"
        {
#line 420 "mode_ordering.m"
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26 = hlds__hlds_goal__f_112_114_111_100_117_99_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_2, check_hlds__mode_ordering__V_27_27);
        }
#line 421 "mode_ordering.m"
        {
#line 421 "mode_ordering.m"
          check_hlds__mode_ordering__V_29_29 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
#line 421 "mode_ordering.m"
        {
#line 421 "mode_ordering.m"
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_8_26, check_hlds__mode_ordering__V_29_29);
        }
#line 422 "mode_ordering.m"
        {
#line 422 "mode_ordering.m"
          check_hlds__mode_ordering__V_31_31 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
#line 422 "mode_ordering.m"
        {
#line 422 "mode_ordering.m"
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30 = hlds__hlds_goal__f_109_97_107_101_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_10_28, check_hlds__mode_ordering__V_31_31);
        }
#line 423 "mode_ordering.m"
        {
#line 423 "mode_ordering.m"
          check_hlds__mode_ordering__V_33_33 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__GI_8);
        }
#line 423 "mode_ordering.m"
        {
#line 423 "mode_ordering.m"
          check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_12_30, check_hlds__mode_ordering__V_33_33);
        }
#line 365 "mode_ordering.m"
        {
#line 365 "mode_ordering.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[9], check_hlds__mode_ordering__Goals_9, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_14_14)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3);
        }
#line 365 "mode_ordering.m"
        *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_3 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_GoalInfo_3);
#line 363 "mode_ordering.m"
      }
#line 362 "mode_ordering.m"
  }
#line 359 "mode_ordering.m"
}

#line 252 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6(
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 252 "mode_ordering.m"
{
#line 252 "mode_ordering.m"
  {
#line 252 "mode_ordering.m"
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 252 "mode_ordering.m"
    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_HeadVar__5_126));
#line 252 "mode_ordering.m"
    {
#line 252 "mode_ordering.m"
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr);
#line 252 "mode_ordering.m"
      return;
    }
#line 252 "mode_ordering.m"
  }
#line 252 "mode_ordering.m"
}

#line 252 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7(
#line 252 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 252 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 252 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 252 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 252 "mode_ordering.m"
{
#line 252 "mode_ordering.m"
  {
#line 252 "mode_ordering.m"
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0_s check_hlds__mode_ordering__env;

#line 252 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
#line 252 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont = check_hlds__mode_ordering__cont;
#line 252 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 252 "mode_ordering.m"
    {
#line 252 "mode_ordering.m"
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

#line 252 "mode_ordering.m"
      {
#line 252 "mode_ordering.m"
        check_hlds__mode_ordering__IntroducedFrom__pred__mode_order_goal_2__252__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 6))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7_env_0__conv10_HeadVar__5_126, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_6, &check_hlds__mode_ordering__env);
      }
#line 252 "mode_ordering.m"
    }
#line 252 "mode_ordering.m"
  }
#line 252 "mode_ordering.m"
}

#line 300 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4(
#line 300 "mode_ordering.m"
  void * check_hlds__mode_ordering__env_ptr_arg)
#line 300 "mode_ordering.m"
{
#line 300 "mode_ordering.m"
  {
#line 300 "mode_ordering.m"
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s * check_hlds__mode_ordering__env_ptr = (struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s *) check_hlds__mode_ordering__env_ptr_arg;

#line 300 "mode_ordering.m"
    *((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3));
#line 300 "mode_ordering.m"
    {
#line 300 "mode_ordering.m"
      ((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont)((check_hlds__mode_ordering__env_ptr)->check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr);
#line 300 "mode_ordering.m"
      return;
    }
#line 300 "mode_ordering.m"
  }
#line 300 "mode_ordering.m"
}

#line 300 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5(
#line 300 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 300 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_1,
#line 300 "mode_ordering.m"
  MR_Cont check_hlds__mode_ordering__cont,
#line 300 "mode_ordering.m"
  void * check_hlds__mode_ordering__cont_env_ptr)
#line 300 "mode_ordering.m"
{
#line 300 "mode_ordering.m"
  {
#line 300 "mode_ordering.m"
    struct check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0_s check_hlds__mode_ordering__env;

#line 300 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__wrapper_arg_1 = check_hlds__mode_ordering__wrapper_arg_1;
#line 300 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont = check_hlds__mode_ordering__cont;
#line 300 "mode_ordering.m"
    (check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__cont_env_ptr = check_hlds__mode_ordering__cont_env_ptr;
#line 300 "mode_ordering.m"
    {
#line 300 "mode_ordering.m"
      MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;

#line 300 "mode_ordering.m"
      {
#line 300 "mode_ordering.m"
        hlds__inst_graph__reachable_from_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), &(check_hlds__mode_ordering__env).check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5_env_0__conv9_HeadVar__3_3, check_hlds__mode_ordering__mode_order_goal_2_6_p_0_4, &check_hlds__mode_ordering__env);
      }
#line 300 "mode_ordering.m"
    }
#line 300 "mode_ordering.m"
  }
#line 300 "mode_ordering.m"
}

#line 312 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_3(
#line 312 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 312 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 312 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 312 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 312 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
#line 312 "mode_ordering.m"
{
#line 312 "mode_ordering.m"
  {
#line 312 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 312 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv7_Goal_6;
#line 312 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13;

#line 312 "mode_ordering.m"
    {
#line 312 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv7_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13);
    }
#line 312 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv7_Goal_6));
#line 312 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv6_STATE_VARIABLE_MOI_13));
#line 312 "mode_ordering.m"
  }
#line 312 "mode_ordering.m"
}

#line 194 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_2(
#line 194 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 194 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 194 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 194 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 194 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
#line 194 "mode_ordering.m"
{
#line 194 "mode_ordering.m"
  {
#line 194 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 194 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv4_Goal_6;
#line 194 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13;

#line 194 "mode_ordering.m"
    {
#line 194 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv4_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13);
    }
#line 194 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv4_Goal_6));
#line 194 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv3_STATE_VARIABLE_MOI_13));
#line 194 "mode_ordering.m"
  }
#line 194 "mode_ordering.m"
}

#line 206 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0_1(
#line 206 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 206 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 206 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_2,
#line 206 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_3,
#line 206 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_4)
#line 206 "mode_ordering.m"
{
#line 206 "mode_ordering.m"
  {
#line 206 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 206 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv1_Goal_6;
#line 206 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13;

#line 206 "mode_ordering.m"
    {
#line 206 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_4_p_0(((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), &check_hlds__mode_ordering__conv1_Goal_6, ((MR_Word) check_hlds__mode_ordering__wrapper_arg_3), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13);
    }
#line 206 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_2 = ((MR_Box) (check_hlds__mode_ordering__conv1_Goal_6));
#line 206 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_4 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_MOI_13));
#line 206 "mode_ordering.m"
  }
#line 206 "mode_ordering.m"
}

#line 185 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_2_6_p_0(
#line 185 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GoalExpr0_7,
#line 185 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__GoalExpr_8,
#line 185 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81,
#line 185 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82,
#line 185 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83,
#line 185 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_84)
#line 185 "mode_ordering.m"
{
#line 191 "mode_ordering.m"
  {
#line 191 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 191 "mode_ordering.m"
#line 191 "mode_ordering.m"
    switch (MR_tag((MR_Word) check_hlds__mode_ordering__GoalExpr0_7)) {
#line 191 "mode_ordering.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 191 "mode_ordering.m"
      case (MR_Integer) 0:
#line 316 "mode_ordering.m"
        {
#line 316 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_110_110;
#line 316 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__SubGoal0_164 = (MR_Word) MR_body(((MR_Word) check_hlds__mode_ordering__GoalExpr0_7), (MR_Integer) 0);
#line 316 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__SubGoal_165;
#line 318 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_186_186;

#line 317 "mode_ordering.m"
          {
#line 317 "mode_ordering.m"
            check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_164, &check_hlds__mode_ordering__SubGoal_165, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
          }
#line 318 "mode_ordering.m"
          check_hlds__mode_ordering__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_165, (MR_Integer) 0)));
#line 318 "mode_ordering.m"
          check_hlds__mode_ordering__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_165, (MR_Integer) 1)));
#line 318 "mode_ordering.m"
          {
#line 318 "mode_ordering.m"
            check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(check_hlds__mode_ordering__V_110_110, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
#line 319 "mode_ordering.m"
          *check_hlds__mode_ordering__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__mode_ordering__SubGoal_165);
#line 316 "mode_ordering.m"
        }
#line 191 "mode_ordering.m"
        break;
#line 191 "mode_ordering.m"
      case (MR_Integer) 1:
#line 232 "mode_ordering.m"
        {
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__VarA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__RHS0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__UnifyMode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Unification0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Context_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__InstGraph_42;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__RHS_44;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Unification_45;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ProdVars_158;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__MakeVisibleVars_159;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ConsumingVars_160;
#line 232 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__NeedVisibleVars_161;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_181_181;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_182_182;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_183_183;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_184_184;
#line 234 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_185_185;

#line 233 "mode_ordering.m"
          {
#line 233 "mode_ordering.m"
            check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116);
          }
#line 234 "mode_ordering.m"
          check_hlds__mode_ordering__InstGraph_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 0)));
#line 234 "mode_ordering.m"
          check_hlds__mode_ordering__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 1)));
#line 234 "mode_ordering.m"
          check_hlds__mode_ordering__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 2)));
#line 234 "mode_ordering.m"
          check_hlds__mode_ordering__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 3)));
#line 234 "mode_ordering.m"
          check_hlds__mode_ordering__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 4)));
#line 234 "mode_ordering.m"
          check_hlds__mode_ordering__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, (MR_Integer) 5)));
#line 266 "mode_ordering.m"
#line 266 "mode_ordering.m"
          switch (MR_tag((MR_Word) check_hlds__mode_ordering__RHS0_38)) {
#line 266 "mode_ordering.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 266 "mode_ordering.m"
            case (MR_Integer) 0:
#line 236 "mode_ordering.m"
              {
#line 236 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__VarB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)));
#line 236 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__ConsumingVarsList_46;
#line 236 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__V_125_125;

#line 237 "mode_ordering.m"
                check_hlds__mode_ordering__RHS_44 = check_hlds__mode_ordering__RHS0_38;
#line 238 "mode_ordering.m"
                {
#line 238 "mode_ordering.m"
                  check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarA_37);
                }
#line 242 "mode_ordering.m"
                if (check_hlds__mode_ordering__succeeded)
#line 239 "mode_ordering.m"
                  {
#line 239 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_204_204;

#line 239 "mode_ordering.m"
                    {
#line 239 "mode_ordering.m"
                      check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "mode_ordering.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 239 "mode_ordering.m"
                      MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 239 "mode_ordering.m"
                    }
#line 5773 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 240 "mode_ordering.m"
                    {
#line 240 "mode_ordering.m"
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_204_204, check_hlds__mode_ordering__VarA_37);
                    }
#line 241 "mode_ordering.m"
                    {
#line 241 "mode_ordering.m"
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_204_204, check_hlds__mode_ordering__VarB_43);
                    }
#line 239 "mode_ordering.m"
                  }
#line 242 "mode_ordering.m"
                else
#line 246 "mode_ordering.m"
                  {
#line 242 "mode_ordering.m"
                    {
#line 242 "mode_ordering.m"
                      check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarB_43);
                    }
#line 246 "mode_ordering.m"
                    if (check_hlds__mode_ordering__succeeded)
#line 243 "mode_ordering.m"
                      {
#line 243 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__TypeCtorInfo_206_206;

#line 243 "mode_ordering.m"
                        {
#line 243 "mode_ordering.m"
                          check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "mode_ordering.m"
                          MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 243 "mode_ordering.m"
                          MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 243 "mode_ordering.m"
                        }
#line 5813 "check_hlds.mode_ordering.c"
                        check_hlds__mode_ordering__TypeCtorInfo_206_206 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 244 "mode_ordering.m"
                        {
#line 244 "mode_ordering.m"
                          check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_206_206, check_hlds__mode_ordering__VarB_43);
                        }
#line 245 "mode_ordering.m"
                        {
#line 245 "mode_ordering.m"
                          check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_206_206, check_hlds__mode_ordering__VarA_37);
                        }
#line 243 "mode_ordering.m"
                      }
#line 246 "mode_ordering.m"
                    else
#line 247 "mode_ordering.m"
                      {
#line 247 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__TypeCtorInfo_207_207;
#line 247 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__V_122_122;
#line 247 "mode_ordering.m"
                        MR_Word check_hlds__mode_ordering__V_123_123;

#line 247 "mode_ordering.m"
                        {
#line 247 "mode_ordering.m"
                          check_hlds__mode_ordering__Unification_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 247 "mode_ordering.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 247 "mode_ordering.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 1) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 247 "mode_ordering.m"
                          MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__Unification_45, 2) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 247 "mode_ordering.m"
                        }
#line 5850 "check_hlds.mode_ordering.c"
                        check_hlds__mode_ordering__TypeCtorInfo_207_207 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 249 "mode_ordering.m"
                        {
#line 249 "mode_ordering.m"
                          check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_207_207);
                        }
#line 250 "mode_ordering.m"
                        {
#line 250 "mode_ordering.m"
                          check_hlds__mode_ordering__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "mode_ordering.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_123_123, 0) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 250 "mode_ordering.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "mode_ordering.m"
                        }
#line 250 "mode_ordering.m"
                        {
#line 250 "mode_ordering.m"
                          check_hlds__mode_ordering__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "mode_ordering.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_122_122, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 250 "mode_ordering.m"
                          MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_122_122, 1) = ((MR_Box) (check_hlds__mode_ordering__V_123_123));
#line 250 "mode_ordering.m"
                        }
#line 250 "mode_ordering.m"
                        {
#line 250 "mode_ordering.m"
                          check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_207_207, check_hlds__mode_ordering__V_122_122);
                        }
#line 247 "mode_ordering.m"
                      }
#line 246 "mode_ordering.m"
                  }
#line 252 "mode_ordering.m"
                {
#line 252 "mode_ordering.m"
                  check_hlds__mode_ordering__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 252 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[1]));
#line 252 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_7));
#line 252 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 252 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 3) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 252 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 4) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_42));
#line 252 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 5) = ((MR_Box) (check_hlds__mode_ordering__VarB_43));
#line 252 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_125_125, 6) = ((MR_Box) (check_hlds__mode_ordering__ProdVars_158));
#line 252 "mode_ordering.m"
                }
#line 252 "mode_ordering.m"
                {
#line 252 "mode_ordering.m"
                  check_hlds__mode_ordering__ConsumingVarsList_46 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_125_125);
                }
#line 265 "mode_ordering.m"
                {
#line 265 "mode_ordering.m"
                  check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ConsumingVarsList_46);
                }
#line 236 "mode_ordering.m"
                *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
#line 236 "mode_ordering.m"
              }
#line 266 "mode_ordering.m"
              break;
#line 266 "mode_ordering.m"
            case (MR_Integer) 1:
#line 267 "mode_ordering.m"
              {
#line 267 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__ArgVars_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 2)));
#line 267 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering___ConsId_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)));
#line 267 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering___IsExistConstruct_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 1)));

#line 268 "mode_ordering.m"
                check_hlds__mode_ordering__RHS_44 = check_hlds__mode_ordering__RHS0_38;
#line 269 "mode_ordering.m"
                {
#line 269 "mode_ordering.m"
                  check_hlds__mode_ordering__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_ordering__ProdVars_158, check_hlds__mode_ordering__VarA_37);
                }
#line 276 "mode_ordering.m"
                if (check_hlds__mode_ordering__succeeded)
#line 272 "mode_ordering.m"
                  {
#line 272 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_213_213;
#line 272 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_121_121;

#line 272 "mode_ordering.m"
                    check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
#line 5951 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__TypeCtorInfo_213_213 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 273 "mode_ordering.m"
                    {
#line 273 "mode_ordering.m"
                      check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213);
                    }
#line 274 "mode_ordering.m"
                    {
#line 274 "mode_ordering.m"
                      check_hlds__mode_ordering__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "mode_ordering.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_121_121, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 274 "mode_ordering.m"
                      MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_121_121, 1) = ((MR_Box) (check_hlds__mode_ordering__ArgVars_52));
#line 274 "mode_ordering.m"
                    }
#line 274 "mode_ordering.m"
                    {
#line 274 "mode_ordering.m"
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213, check_hlds__mode_ordering__V_121_121);
                    }
#line 275 "mode_ordering.m"
                    {
#line 275 "mode_ordering.m"
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__init_0_f_0(check_hlds__mode_ordering__TypeCtorInfo_213_213);
                    }
#line 272 "mode_ordering.m"
                  }
#line 276 "mode_ordering.m"
                else
#line 279 "mode_ordering.m"
                  {
#line 279 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_214_214;

#line 279 "mode_ordering.m"
                    check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
#line 5989 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__TypeCtorInfo_214_214 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 280 "mode_ordering.m"
                    {
#line 280 "mode_ordering.m"
                      check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__VarA_37);
                    }
#line 281 "mode_ordering.m"
                    {
#line 281 "mode_ordering.m"
                      check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__ArgVars_52);
                    }
#line 282 "mode_ordering.m"
                    {
#line 282 "mode_ordering.m"
                      check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_214_214, check_hlds__mode_ordering__VarA_37);
                    }
#line 279 "mode_ordering.m"
                  }
#line 267 "mode_ordering.m"
                *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116;
#line 267 "mode_ordering.m"
              }
#line 266 "mode_ordering.m"
              break;
#line 266 "mode_ordering.m"
            case (MR_Integer) 2:
#line 287 "mode_ordering.m"
              {
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__TypeCtorInfo_217_217;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__A_53;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__B_54;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__C_55;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__NonLocals_57;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__LambdaVars_58;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__H_60;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__SubGoal0_61;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__Modes_62;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__SubGoal_63;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__GoalId_64;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__V_120_120;
#line 287 "mode_ordering.m"
                MR_Word check_hlds__mode_ordering__ConsumingVarsList_157;

#line 287 "mode_ordering.m"
                check_hlds__mode_ordering__Unification_45 = check_hlds__mode_ordering__Unification0_40;
#line 288 "mode_ordering.m"
                check_hlds__mode_ordering__A_53 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 288 "mode_ordering.m"
                check_hlds__mode_ordering__B_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 288 "mode_ordering.m"
                check_hlds__mode_ordering__C_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 288 "mode_ordering.m"
                check_hlds__mode_ordering__NonLocals_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 2)));
#line 288 "mode_ordering.m"
                check_hlds__mode_ordering__LambdaVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 3)));
#line 288 "mode_ordering.m"
                check_hlds__mode_ordering__Modes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 4)));
#line 288 "mode_ordering.m"
                check_hlds__mode_ordering__H_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 5)));
#line 288 "mode_ordering.m"
                check_hlds__mode_ordering__SubGoal0_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS0_38, (MR_Integer) 6)));
#line 294 "mode_ordering.m"
                {
#line 294 "mode_ordering.m"
                  check_hlds__mode_ordering__GoalId_64 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115);
                }
#line 295 "mode_ordering.m"
                {
#line 295 "mode_ordering.m"
                  check_hlds__mode_ordering__enter_lambda_goal_3_p_0(check_hlds__mode_ordering__GoalId_64, check_hlds__mode_ordering__STATE_VARIABLE_MOI_116_116, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117);
                }
#line 296 "mode_ordering.m"
                {
#line 296 "mode_ordering.m"
                  check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_61, &check_hlds__mode_ordering__SubGoal_63, check_hlds__mode_ordering__STATE_VARIABLE_MOI_117_117, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118);
                }
#line 291 "mode_ordering.m"
                {
#line 291 "mode_ordering.m"
                  check_hlds__mode_ordering__RHS_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 291 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 0) = ((MR_Box) ((check_hlds__mode_ordering__A_53 | ((((check_hlds__mode_ordering__B_54 << (MR_Integer) 2)) | ((check_hlds__mode_ordering__C_55 << (MR_Integer) 3)))))));
#line 291 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 1) = (MR_Integer) 0;
#line 291 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 2) = ((MR_Box) (check_hlds__mode_ordering__NonLocals_57));
#line 291 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 3) = ((MR_Box) (check_hlds__mode_ordering__LambdaVars_58));
#line 291 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 4) = ((MR_Box) (check_hlds__mode_ordering__Modes_62));
#line 291 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 5) = ((MR_Box) (check_hlds__mode_ordering__H_60));
#line 291 "mode_ordering.m"
                  MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__RHS_44, 6) = ((MR_Box) (check_hlds__mode_ordering__SubGoal_63));
#line 291 "mode_ordering.m"
                }
#line 297 "mode_ordering.m"
                {
#line 297 "mode_ordering.m"
                  check_hlds__mode_ordering__leave_lambda_goal_2_p_0(check_hlds__mode_ordering__STATE_VARIABLE_MOI_118_118, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
                }
#line 300 "mode_ordering.m"
                {
#line 300 "mode_ordering.m"
                  check_hlds__mode_ordering__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 300 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_5[0]));
#line 300 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_order_goal_2_6_p_0_5));
#line 300 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 300 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 3) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_42));
#line 300 "mode_ordering.m"
                  MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_120_120, 4) = ((MR_Box) (check_hlds__mode_ordering__NonLocals_57));
#line 300 "mode_ordering.m"
                }
#line 299 "mode_ordering.m"
                {
#line 299 "mode_ordering.m"
                  check_hlds__mode_ordering__ConsumingVarsList_157 = mercury__solutions__solutions_1_f_1((MR_Word) &check_hlds__mode_ordering_scalar_common_1[3], check_hlds__mode_ordering__V_120_120);
                }
#line 6128 "check_hlds.mode_ordering.c"
                check_hlds__mode_ordering__TypeCtorInfo_217_217 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 301 "mode_ordering.m"
                {
#line 301 "mode_ordering.m"
                  check_hlds__mode_ordering__ConsumingVars_160 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__ConsumingVarsList_157);
                }
#line 302 "mode_ordering.m"
                {
#line 302 "mode_ordering.m"
                  check_hlds__mode_ordering__MakeVisibleVars_159 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__VarA_37);
                }
#line 303 "mode_ordering.m"
                {
#line 303 "mode_ordering.m"
                  check_hlds__mode_ordering__NeedVisibleVars_161 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_217_217, check_hlds__mode_ordering__NonLocals_57);
                }
#line 287 "mode_ordering.m"
              }
#line 266 "mode_ordering.m"
              break;
#line 266 "mode_ordering.m"
          }
#line 305 "mode_ordering.m"
          {
#line 305 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(check_hlds__mode_ordering__ConsumingVars_160, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_115_115, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127);
          }
#line 306 "mode_ordering.m"
          {
#line 306 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(check_hlds__mode_ordering__MakeVisibleVars_159, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_127_127, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128);
          }
#line 307 "mode_ordering.m"
          {
#line 307 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(check_hlds__mode_ordering__NeedVisibleVars_161, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_128_128, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
#line 309 "mode_ordering.m"
          {
#line 309 "mode_ordering.m"
            MR_Word base;
#line 309 "mode_ordering.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 309 "mode_ordering.m"
            *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 309 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_ordering__VarA_37));
#line 309 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_ordering__RHS_44));
#line 309 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__mode_ordering__UnifyMode_39));
#line 309 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__mode_ordering__Unification_45));
#line 309 "mode_ordering.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__mode_ordering__Context_41));
#line 309 "mode_ordering.m"
          }
#line 232 "mode_ordering.m"
        }
#line 191 "mode_ordering.m"
        break;
#line 191 "mode_ordering.m"
      case (MR_Integer) 2:
#line 211 "mode_ordering.m"
        {
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__TypeCtorInfo_202_202;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__PredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ProdVars_24;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__MakeVisibleVars_25;
#line 211 "mode_ordering.m"
          MR_Integer check_hlds__mode_ordering__ProcId_26;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__ConsumingVars_27;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__NeedVisibleVars_28;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_138_138;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_140_140;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141;
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142;
#line 211 "mode_ordering.m"
          MR_Integer check_hlds__mode_ordering__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
#line 211 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 5)));
#line 224 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_175_175;
#line 224 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_177_177;
#line 224 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_178_178;
#line 224 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_179_179;
#line 224 "mode_ordering.m"
          MR_Word check_hlds__mode_ordering__V_180_180;
#line 224 "mode_ordering.m"
          MR_Integer check_hlds__mode_ordering__V_176_176;

#line 212 "mode_ordering.m"
          {
#line 212 "mode_ordering.m"
            check_hlds__mode_ordering__set_atomic_prod_vars_5_p_0(&check_hlds__mode_ordering__ProdVars_24, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137);
          }
#line 6248 "check_hlds.mode_ordering.c"
          check_hlds__mode_ordering__TypeCtorInfo_202_202 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 214 "mode_ordering.m"
          {
#line 214 "mode_ordering.m"
            check_hlds__mode_ordering__V_138_138 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__Args_20);
          }
#line 214 "mode_ordering.m"
          {
#line 214 "mode_ordering.m"
            check_hlds__mode_ordering__MakeVisibleVars_25 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__V_138_138, check_hlds__mode_ordering__ProdVars_24);
          }
#line 216 "mode_ordering.m"
          {
#line 216 "mode_ordering.m"
            check_hlds__mode_ordering__find_matching_proc_7_p_0(check_hlds__mode_ordering__PredId_18, check_hlds__mode_ordering__Args_20, check_hlds__mode_ordering__ProdVars_24, &check_hlds__mode_ordering__ProcId_26, &check_hlds__mode_ordering__ConsumingVars_27, check_hlds__mode_ordering__STATE_VARIABLE_MOI_137_137, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
          }
#line 219 "mode_ordering.m"
          {
#line 219 "mode_ordering.m"
            check_hlds__mode_ordering__V_140_140 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__Args_20);
          }
#line 219 "mode_ordering.m"
          {
#line 219 "mode_ordering.m"
            check_hlds__mode_ordering__NeedVisibleVars_28 = parse_tree__set_of_var__intersect_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_202_202, check_hlds__mode_ordering__V_140_140, check_hlds__mode_ordering__ConsumingVars_27);
          }
#line 221 "mode_ordering.m"
          {
#line 221 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_consuming_vars_3_p_0(check_hlds__mode_ordering__ConsumingVars_27, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_136_136, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141);
          }
#line 222 "mode_ordering.m"
          {
#line 222 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_make_visible_vars_3_p_0(check_hlds__mode_ordering__MakeVisibleVars_25, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_141_141, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142);
          }
#line 223 "mode_ordering.m"
          {
#line 223 "mode_ordering.m"
            hlds__hlds_goal__goal_info_set_need_visible_vars_3_p_0(check_hlds__mode_ordering__NeedVisibleVars_28, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_142_142, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
          }
#line 224 "mode_ordering.m"
          check_hlds__mode_ordering__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)));
#line 224 "mode_ordering.m"
          check_hlds__mode_ordering__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 224 "mode_ordering.m"
          check_hlds__mode_ordering__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 224 "mode_ordering.m"
          check_hlds__mode_ordering__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
#line 224 "mode_ordering.m"
          check_hlds__mode_ordering__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
#line 224 "mode_ordering.m"
          check_hlds__mode_ordering__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 5)));
#line 224 "mode_ordering.m"
          {
#line 224 "mode_ordering.m"
            MR_Word base;
#line 224 "mode_ordering.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 224 "mode_ordering.m"
            *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 224 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_175_175));
#line 224 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__mode_ordering__ProcId_26));
#line 224 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__mode_ordering__V_177_177));
#line 224 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_178_178));
#line 224 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_179_179));
#line 224 "mode_ordering.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_180_180));
#line 224 "mode_ordering.m"
          }
#line 211 "mode_ordering.m"
        }
#line 191 "mode_ordering.m"
        break;
#line 191 "mode_ordering.m"
      case (MR_Integer) 3:
#line 191 "mode_ordering.m"
#line 191 "mode_ordering.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 0)))) {
#line 191 "mode_ordering.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 191 "mode_ordering.m"
          case (MR_Integer) 0:
#line 226 "mode_ordering.m"
            {
#line 227 "mode_ordering.m"
              {
#line 227 "mode_ordering.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "generic_call NYI");
#line 227 "mode_ordering.m"
                return;
              }
#line 226 "mode_ordering.m"
            }
#line 191 "mode_ordering.m"
            break;
#line 191 "mode_ordering.m"
          case (MR_Integer) 1:
#line 345 "mode_ordering.m"
            {
#line 346 "mode_ordering.m"
              {
#line 346 "mode_ordering.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "pragma_foreign_code NYI");
#line 346 "mode_ordering.m"
                return;
              }
#line 345 "mode_ordering.m"
            }
#line 191 "mode_ordering.m"
            break;
#line 191 "mode_ordering.m"
          case (MR_Integer) 2:
#line 191 "mode_ordering.m"
            {
#line 191 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 191 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 191 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Goals_15;

#line 204 "mode_ordering.m"
#line 204 "mode_ordering.m"
              switch (check_hlds__mode_ordering__ConjType_11) {
#line 204 "mode_ordering.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 204 "mode_ordering.m"
                case (MR_Integer) 1:
#line 205 "mode_ordering.m"
                  {
#line 205 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_200_200 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 206 "mode_ordering.m"
                    MR_Box check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84;

#line 206 "mode_ordering.m"
                    {
#line 206 "mode_ordering.m"
                      mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_200_200, check_hlds__mode_ordering__TypeCtorInfo_200_200, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[6], check_hlds__mode_ordering__Goals0_12, &check_hlds__mode_ordering__Goals_15, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84);
                    }
#line 206 "mode_ordering.m"
                    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv2_STATE_VARIABLE_MOI_84);
#line 207 "mode_ordering.m"
                    {
#line 207 "mode_ordering.m"
                      check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__Goals_15, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
                    }
#line 205 "mode_ordering.m"
                  }
#line 204 "mode_ordering.m"
                  break;
#line 204 "mode_ordering.m"
                case (MR_Integer) 0:
#line 193 "mode_ordering.m"
                  {
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_193_193 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__TypeCtorInfo_195_195;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__Goals1_13;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_14;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__ConsVars_16;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__NeedVars_17;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_151_151;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_152_152;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_154_154;
#line 193 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_155_155;
#line 194 "mode_ordering.m"
                    MR_Box check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_170_170;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_171_171;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_172_172;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_173_173;
#line 195 "mode_ordering.m"
                    MR_Word check_hlds__mode_ordering__V_174_174;

#line 194 "mode_ordering.m"
                    {
#line 194 "mode_ordering.m"
                      mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_193_193, check_hlds__mode_ordering__TypeCtorInfo_193_193, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[7], check_hlds__mode_ordering__Goals0_12, &check_hlds__mode_ordering__Goals1_13, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84);
                    }
#line 194 "mode_ordering.m"
                    *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv5_STATE_VARIABLE_MOI_84);
#line 195 "mode_ordering.m"
                    check_hlds__mode_ordering__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 0)));
#line 195 "mode_ordering.m"
                    check_hlds__mode_ordering__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 1)));
#line 195 "mode_ordering.m"
                    check_hlds__mode_ordering__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 2)));
#line 195 "mode_ordering.m"
                    check_hlds__mode_ordering__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 3)));
#line 195 "mode_ordering.m"
                    check_hlds__mode_ordering__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 4)));
#line 195 "mode_ordering.m"
                    check_hlds__mode_ordering__ForwardGoalPathMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84, (MR_Integer) 5)));
#line 196 "mode_ordering.m"
                    {
#line 196 "mode_ordering.m"
                      check_hlds__mode_ordering__mode_order_conj_3_p_0(check_hlds__mode_ordering__ForwardGoalPathMap_14, check_hlds__mode_ordering__Goals1_13, &check_hlds__mode_ordering__Goals_15);
                    }
#line 197 "mode_ordering.m"
                    {
#line 197 "mode_ordering.m"
                      check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__Goals_15, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
#line 198 "mode_ordering.m"
                    {
#line 198 "mode_ordering.m"
                      check_hlds__mode_ordering__ConsVars_16 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
#line 6481 "check_hlds.mode_ordering.c"
                    check_hlds__mode_ordering__TypeCtorInfo_195_195 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 200 "mode_ordering.m"
                    {
#line 200 "mode_ordering.m"
                      check_hlds__mode_ordering__V_152_152 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149);
                    }
#line 200 "mode_ordering.m"
                    {
#line 200 "mode_ordering.m"
                      check_hlds__mode_ordering__V_151_151 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_195_195, check_hlds__mode_ordering__ConsVars_16, check_hlds__mode_ordering__V_152_152);
                    }
#line 199 "mode_ordering.m"
                    {
#line 199 "mode_ordering.m"
                      check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_149_149, check_hlds__mode_ordering__V_151_151);
                    }
#line 201 "mode_ordering.m"
                    {
#line 201 "mode_ordering.m"
                      check_hlds__mode_ordering__NeedVars_17 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150);
                    }
#line 203 "mode_ordering.m"
                    {
#line 203 "mode_ordering.m"
                      check_hlds__mode_ordering__V_155_155 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150);
                    }
#line 203 "mode_ordering.m"
                    {
#line 203 "mode_ordering.m"
                      check_hlds__mode_ordering__V_154_154 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_195_195, check_hlds__mode_ordering__NeedVars_17, check_hlds__mode_ordering__V_155_155);
                    }
#line 202 "mode_ordering.m"
                    {
#line 202 "mode_ordering.m"
                      *check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_150_150, check_hlds__mode_ordering__V_154_154);
                    }
#line 193 "mode_ordering.m"
                  }
#line 204 "mode_ordering.m"
                  break;
#line 204 "mode_ordering.m"
              }
#line 209 "mode_ordering.m"
              {
#line 209 "mode_ordering.m"
                MR_Word base;
#line 209 "mode_ordering.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 209 "mode_ordering.m"
                *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 209 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 209 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__ConjType_11));
#line 209 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__Goals_15));
#line 209 "mode_ordering.m"
              }
#line 191 "mode_ordering.m"
            }
#line 191 "mode_ordering.m"
            break;
#line 191 "mode_ordering.m"
          case (MR_Integer) 3:
#line 311 "mode_ordering.m"
            {
#line 311 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__TypeCtorInfo_222_222 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 311 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Goals0_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 311 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Goals_163;
#line 312 "mode_ordering.m"
              MR_Box check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84;

#line 312 "mode_ordering.m"
              {
#line 312 "mode_ordering.m"
                mercury__list__map_foldl_5_p_0(check_hlds__mode_ordering__TypeCtorInfo_222_222, check_hlds__mode_ordering__TypeCtorInfo_222_222, (MR_Word) &check_hlds__mode_ordering__check_hlds__mode_ordering__type_ctor_info_mode_ordering_info_0, (MR_Word) &check_hlds__mode_ordering_scalar_common_2[8], check_hlds__mode_ordering__Goals0_162, &check_hlds__mode_ordering__Goals_163, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83)), &check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84);
              }
#line 312 "mode_ordering.m"
              *check_hlds__mode_ordering__STATE_VARIABLE_MOI_84 = ((MR_Word) check_hlds__mode_ordering__conv8_STATE_VARIABLE_MOI_84);
#line 313 "mode_ordering.m"
              {
#line 313 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_disj_3_p_0(check_hlds__mode_ordering__Goals_163, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
#line 314 "mode_ordering.m"
              {
#line 314 "mode_ordering.m"
                MR_Word base;
#line 314 "mode_ordering.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "mode_ordering.m"
                *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 314 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 314 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Goals_163));
#line 314 "mode_ordering.m"
              }
#line 311 "mode_ordering.m"
            }
#line 191 "mode_ordering.m"
            break;
#line 191 "mode_ordering.m"
          case (MR_Integer) 4:
#line 229 "mode_ordering.m"
            {
#line 230 "mode_ordering.m"
              {
#line 230 "mode_ordering.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "switch");
#line 230 "mode_ordering.m"
                return;
              }
#line 229 "mode_ordering.m"
            }
#line 191 "mode_ordering.m"
            break;
#line 191 "mode_ordering.m"
          case (MR_Integer) 5:
#line 323 "mode_ordering.m"
            {
#line 323 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 323 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_107_107;
#line 323 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__SubGoal0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 323 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__SubGoal_167;
#line 325 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_187_187;

#line 324 "mode_ordering.m"
              {
#line 324 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__SubGoal0_166, &check_hlds__mode_ordering__SubGoal_167, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
              }
#line 325 "mode_ordering.m"
              check_hlds__mode_ordering__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_167, (MR_Integer) 0)));
#line 325 "mode_ordering.m"
              check_hlds__mode_ordering__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__SubGoal_167, (MR_Integer) 1)));
#line 325 "mode_ordering.m"
              {
#line 325 "mode_ordering.m"
                check_hlds__mode_ordering__goal_info_copy_mode_var_sets_3_p_0(check_hlds__mode_ordering__V_107_107, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
#line 326 "mode_ordering.m"
              {
#line 326 "mode_ordering.m"
                MR_Word base;
#line 326 "mode_ordering.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 326 "mode_ordering.m"
                *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 326 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 326 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Reason_65));
#line 326 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__SubGoal_167));
#line 326 "mode_ordering.m"
              }
#line 323 "mode_ordering.m"
            }
#line 191 "mode_ordering.m"
            break;
#line 191 "mode_ordering.m"
          case (MR_Integer) 6:
#line 328 "mode_ordering.m"
            {
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__TypeCtorInfo_224_224;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Locals_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 1)));
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Cond0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 2)));
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Then0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 3)));
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Else0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__mode_ordering__GoalExpr0_7, (MR_Integer) 4)));
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Cond_70;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Then_71;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__Else_72;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_94_94;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_96_96;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_99_99;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_100_100;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_102_102;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_103_103;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_104_104;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__ConsVars_168;
#line 328 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__NeedVars_169;
#line 342 "mode_ordering.m"
              MR_Word check_hlds__mode_ordering__V_188_188;

#line 329 "mode_ordering.m"
              {
#line 329 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Cond0_67, &check_hlds__mode_ordering__Cond_70, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_83, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91);
              }
#line 330 "mode_ordering.m"
              {
#line 330 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Then0_68, &check_hlds__mode_ordering__Then_71, check_hlds__mode_ordering__STATE_VARIABLE_MOI_91_91, &check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92);
              }
#line 331 "mode_ordering.m"
              {
#line 331 "mode_ordering.m"
                check_hlds__mode_ordering__mode_order_goal_4_p_0(check_hlds__mode_ordering__Else0_69, &check_hlds__mode_ordering__Else_72, check_hlds__mode_ordering__STATE_VARIABLE_MOI_92_92, check_hlds__mode_ordering__STATE_VARIABLE_MOI_84);
              }
#line 334 "mode_ordering.m"
              {
#line 334 "mode_ordering.m"
                check_hlds__mode_ordering__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "mode_ordering.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_96_96, 0) = ((MR_Box) (check_hlds__mode_ordering__Then_71));
#line 334 "mode_ordering.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "mode_ordering.m"
              }
#line 334 "mode_ordering.m"
              {
#line 334 "mode_ordering.m"
                check_hlds__mode_ordering__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "mode_ordering.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_94_94, 0) = ((MR_Box) (check_hlds__mode_ordering__Cond_70));
#line 334 "mode_ordering.m"
                MR_hl_field(MR_mktag(1), check_hlds__mode_ordering__V_94_94, 1) = ((MR_Box) (check_hlds__mode_ordering__V_96_96));
#line 334 "mode_ordering.m"
              }
#line 334 "mode_ordering.m"
              {
#line 334 "mode_ordering.m"
                check_hlds__mode_ordering__union_mode_vars_sets_3_p_0(check_hlds__mode_ordering__V_94_94, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_0_81, &check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
#line 335 "mode_ordering.m"
              {
#line 335 "mode_ordering.m"
                check_hlds__mode_ordering__ConsVars_168 = hlds__hlds_goal__consuming_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
#line 6747 "check_hlds.mode_ordering.c"
              check_hlds__mode_ordering__TypeCtorInfo_224_224 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 337 "mode_ordering.m"
              {
#line 337 "mode_ordering.m"
                check_hlds__mode_ordering__V_100_100 = hlds__hlds_goal__producing_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95);
              }
#line 337 "mode_ordering.m"
              {
#line 337 "mode_ordering.m"
                check_hlds__mode_ordering__V_99_99 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_224_224, check_hlds__mode_ordering__ConsVars_168, check_hlds__mode_ordering__V_100_100);
              }
#line 336 "mode_ordering.m"
              {
#line 336 "mode_ordering.m"
                check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98 = hlds__hlds_goal__f_99_111_110_115_117_109_105_110_103_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_95_95, check_hlds__mode_ordering__V_99_99);
              }
#line 338 "mode_ordering.m"
              {
#line 338 "mode_ordering.m"
                check_hlds__mode_ordering__NeedVars_169 = hlds__hlds_goal__need_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98);
              }
#line 340 "mode_ordering.m"
              {
#line 340 "mode_ordering.m"
                check_hlds__mode_ordering__V_103_103 = hlds__hlds_goal__make_visible_vars_1_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98);
              }
#line 340 "mode_ordering.m"
              {
#line 340 "mode_ordering.m"
                check_hlds__mode_ordering__V_102_102 = parse_tree__set_of_var__difference_2_f_0(check_hlds__mode_ordering__TypeCtorInfo_224_224, check_hlds__mode_ordering__NeedVars_169, check_hlds__mode_ordering__V_103_103);
              }
#line 339 "mode_ordering.m"
              {
#line 339 "mode_ordering.m"
                check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101 = hlds__hlds_goal__f_110_101_101_100_95_118_105_115_105_98_108_101_95_118_97_114_115_32_58_61_2_f_0(check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_98_98, check_hlds__mode_ordering__V_102_102);
              }
#line 342 "mode_ordering.m"
              check_hlds__mode_ordering__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Else_72, (MR_Integer) 0)));
#line 342 "mode_ordering.m"
              check_hlds__mode_ordering__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Else_72, (MR_Integer) 1)));
#line 342 "mode_ordering.m"
              {
#line 342 "mode_ordering.m"
                check_hlds__mode_ordering__combine_mode_vars_sets_3_p_0(check_hlds__mode_ordering__V_104_104, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_101_101, check_hlds__mode_ordering__STATE_VARIABLE_GoalInfo_82);
              }
#line 343 "mode_ordering.m"
              {
#line 343 "mode_ordering.m"
                MR_Word base;
#line 343 "mode_ordering.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 343 "mode_ordering.m"
                *check_hlds__mode_ordering__GoalExpr_8 = base;
#line 343 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 343 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__mode_ordering__Locals_66));
#line 343 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__mode_ordering__Cond_70));
#line 343 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__mode_ordering__Then_71));
#line 343 "mode_ordering.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__mode_ordering__Else_72));
#line 343 "mode_ordering.m"
              }
#line 328 "mode_ordering.m"
            }
#line 191 "mode_ordering.m"
            break;
#line 191 "mode_ordering.m"
          case (MR_Integer) 7:
#line 348 "mode_ordering.m"
            {
#line 349 "mode_ordering.m"
              {
#line 349 "mode_ordering.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_ordering", (MR_String) "predicate \140check_hlds.mode_ordering.mode_order_goal_2\'/6", (MR_String) "shorthand");
#line 349 "mode_ordering.m"
                return;
              }
#line 348 "mode_ordering.m"
            }
#line 191 "mode_ordering.m"
            break;
#line 191 "mode_ordering.m"
        }
#line 191 "mode_ordering.m"
        break;
#line 191 "mode_ordering.m"
    }
#line 191 "mode_ordering.m"
  }
#line 185 "mode_ordering.m"
}

#line 177 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_order_goal_4_p_0(
#line 177 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Goal0_5,
#line 177 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__Goal_6,
#line 177 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12,
#line 177 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_13)
#line 177 "mode_ordering.m"
{
#line 180 "mode_ordering.m"
  {
#line 180 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 180 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_5, (MR_Integer) 0)));
#line 180 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_5, (MR_Integer) 1)));
#line 180 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalExpr_10;
#line 180 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalInfo_11;

#line 182 "mode_ordering.m"
    {
#line 182 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_2_6_p_0(check_hlds__mode_ordering__GoalExpr0_8, &check_hlds__mode_ordering__GoalExpr_10, check_hlds__mode_ordering__GoalInfo0_9, &check_hlds__mode_ordering__GoalInfo_11, check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_12, check_hlds__mode_ordering__STATE_VARIABLE_MOI_13);
    }
#line 183 "mode_ordering.m"
    {
#line 183 "mode_ordering.m"
      MR_Word base;
#line 183 "mode_ordering.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "mode_ordering.m"
      *check_hlds__mode_ordering__Goal_6 = base;
#line 183 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__GoalExpr_10));
#line 183 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__GoalInfo_11));
#line 183 "mode_ordering.m"
    }
#line 180 "mode_ordering.m"
  }
#line 177 "mode_ordering.m"
}

#line 169 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__leave_lambda_goal_2_p_0(
#line 169 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
#line 169 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8)
#line 169 "mode_ordering.m"
{
#line 172 "mode_ordering.m"
  {
#line 172 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 172 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
#line 172 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting_6;
#line 173 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
#line 173 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
#line 173 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
#line 173 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
#line 173 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
#line 174 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_5_5;
#line 174 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv0_V_5_5;
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15;
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_16_16;
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_18_18;
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_20_20;
#line 175 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;

#line 174 "mode_ordering.m"
    {
#line 174 "mode_ordering.m"
      mercury__stack__det_pop_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, &check_hlds__mode_ordering__conv0_V_5_5, check_hlds__mode_ordering__LambdaNesting0_4, &check_hlds__mode_ordering__LambdaNesting_6);
    }
#line 174 "mode_ordering.m"
    check_hlds__mode_ordering__V_5_5 = ((MR_Word) check_hlds__mode_ordering__conv0_V_5_5);
#line 175 "mode_ordering.m"
    check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
#line 175 "mode_ordering.m"
    check_hlds__mode_ordering__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
#line 175 "mode_ordering.m"
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
#line 175 "mode_ordering.m"
    check_hlds__mode_ordering__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
#line 175 "mode_ordering.m"
    check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
#line 175 "mode_ordering.m"
    check_hlds__mode_ordering__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
#line 175 "mode_ordering.m"
    {
#line 175 "mode_ordering.m"
      MR_Word base;
#line 175 "mode_ordering.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 175 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_MOI_8 = base;
#line 175 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_15_15));
#line 175 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__V_16_16));
#line 175 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_ordering__LambdaNesting_6));
#line 175 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_18_18));
#line 175 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_19_19));
#line 175 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_20_20));
#line 175 "mode_ordering.m"
    }
#line 172 "mode_ordering.m"
  }
#line 169 "mode_ordering.m"
}

#line 162 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__enter_lambda_goal_3_p_0(
#line 162 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__GoalId_4,
#line 162 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7,
#line 162 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_MOI_8)
#line 162 "mode_ordering.m"
{
#line 165 "mode_ordering.m"
  {
#line 165 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 165 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
#line 165 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_10_10;
#line 166 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
#line 166 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
#line 166 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
#line 166 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
#line 166 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
#line 167 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_16_16;
#line 167 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_17_17;
#line 167 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_19_19;
#line 167 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_20_20;
#line 167 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_21_21;
#line 167 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_18_18;

#line 167 "mode_ordering.m"
    {
#line 167 "mode_ordering.m"
      check_hlds__mode_ordering__V_10_10 = mercury__stack__push_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__mode_ordering__LambdaNesting0_6, ((MR_Box) (check_hlds__mode_ordering__GoalId_4)));
    }
#line 167 "mode_ordering.m"
    check_hlds__mode_ordering__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 0)));
#line 167 "mode_ordering.m"
    check_hlds__mode_ordering__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 1)));
#line 167 "mode_ordering.m"
    check_hlds__mode_ordering__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 2)));
#line 167 "mode_ordering.m"
    check_hlds__mode_ordering__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 3)));
#line 167 "mode_ordering.m"
    check_hlds__mode_ordering__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 4)));
#line 167 "mode_ordering.m"
    check_hlds__mode_ordering__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__STATE_VARIABLE_MOI_0_7, (MR_Integer) 5)));
#line 167 "mode_ordering.m"
    {
#line 167 "mode_ordering.m"
      MR_Word base;
#line 167 "mode_ordering.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 167 "mode_ordering.m"
      *check_hlds__mode_ordering__STATE_VARIABLE_MOI_8 = base;
#line 167 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_ordering__V_16_16));
#line 167 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_ordering__V_17_17));
#line 167 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_ordering__V_10_10));
#line 167 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_ordering__V_19_19));
#line 167 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_ordering__V_20_20));
#line 167 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_ordering__V_21_21));
#line 167 "mode_ordering.m"
    }
#line 165 "mode_ordering.m"
  }
#line 162 "mode_ordering.m"
}

#line 118 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_check_proc_8_p_0(
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 118 "mode_ordering.m"
  MR_Integer check_hlds__mode_ordering__ProcId_14,
#line 118 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22,
#line 118 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23)
#line 118 "mode_ordering.m"
{
#line 123 "mode_ordering.m"
  {
#line 123 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProcInfo0_16;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ModeDeclConstraint_17;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Constraint_18;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__InstGraphInfo_19;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__InstGraph_20;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProcInfo_21;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ProdVarsMap_35;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__LambdaNesting0_36;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__ForwardGoalPathMap_37;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__MOI0_38;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Goal0_39;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__Goal_40;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalExpr0_49;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalInfo0_50;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalExpr_51;
#line 123 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__GoalInfo_52;
#line 182 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering___MOI_41;

#line 124 "mode_ordering.m"
    {
#line 124 "mode_ordering.m"
      hlds__hlds_pred__pred_info_proc_info_3_p_0(check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, check_hlds__mode_ordering__ProcId_14, &check_hlds__mode_ordering__ProcInfo0_16);
    }
#line 125 "mode_ordering.m"
    {
#line 125 "mode_ordering.m"
      hlds__hlds_pred__proc_info_head_modes_constraint_2_p_0(check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__ModeDeclConstraint_17);
    }
#line 126 "mode_ordering.m"
    {
#line 126 "mode_ordering.m"
      check_hlds__mode_ordering__Constraint_18 = mode_robdd__tfeirn__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_42_95_95_91_84_32_61_32_109_99_95_116_121_112_101_93_95_48_95_49_2_f_0(check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__ModeDeclConstraint_17);
    }
#line 127 "mode_ordering.m"
    {
#line 127 "mode_ordering.m"
      hlds__hlds_pred__pred_info_get_inst_graph_info_2_p_0(check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, &check_hlds__mode_ordering__InstGraphInfo_19);
    }
#line 128 "mode_ordering.m"
    {
#line 128 "mode_ordering.m"
      check_hlds__mode_ordering__InstGraph_20 = hlds__inst_graph__implementation_inst_graph_1_f_0(check_hlds__mode_ordering__InstGraphInfo_19);
    }
#line 142 "mode_ordering.m"
    {
#line 142 "mode_ordering.m"
      check_hlds__mode_ordering__ProdVarsMap_35 = check_hlds__mode_constraint_robdd__atomic_prodvars_map_2_f_0(check_hlds__mode_ordering__Constraint_18, check_hlds__mode_ordering__MCI_12);
    }
#line 143 "mode_ordering.m"
    {
#line 143 "mode_ordering.m"
      check_hlds__mode_ordering__LambdaNesting0_36 = mercury__stack__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    }
#line 144 "mode_ordering.m"
    {
#line 144 "mode_ordering.m"
      check_hlds__mode_constraint_robdd__get_forward_goal_path_map_for_pred_3_p_0(check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__PredId_11, &check_hlds__mode_ordering__ForwardGoalPathMap_37);
    }
#line 145 "mode_ordering.m"
    {
#line 145 "mode_ordering.m"
      check_hlds__mode_ordering__MOI0_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 145 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 0) = ((MR_Box) (check_hlds__mode_ordering__InstGraph_20));
#line 145 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 1) = ((MR_Box) (check_hlds__mode_ordering__ProdVarsMap_35));
#line 145 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 2) = ((MR_Box) (check_hlds__mode_ordering__LambdaNesting0_36));
#line 145 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 3) = ((MR_Box) (check_hlds__mode_ordering__ModuleInfo_9));
#line 145 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 4) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_10));
#line 145 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__MOI0_38, 5) = ((MR_Box) (check_hlds__mode_ordering__ForwardGoalPathMap_37));
#line 145 "mode_ordering.m"
    }
#line 148 "mode_ordering.m"
    {
#line 148 "mode_ordering.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__Goal0_39);
    }
#line 181 "mode_ordering.m"
    check_hlds__mode_ordering__GoalExpr0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_39, (MR_Integer) 0)));
#line 181 "mode_ordering.m"
    check_hlds__mode_ordering__GoalInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal0_39, (MR_Integer) 1)));
#line 182 "mode_ordering.m"
    {
#line 182 "mode_ordering.m"
      check_hlds__mode_ordering__mode_order_goal_2_6_p_0(check_hlds__mode_ordering__GoalExpr0_49, &check_hlds__mode_ordering__GoalExpr_51, check_hlds__mode_ordering__GoalInfo0_50, &check_hlds__mode_ordering__GoalInfo_52, check_hlds__mode_ordering__MOI0_38, &check_hlds__mode_ordering___MOI_41);
    }
#line 183 "mode_ordering.m"
    {
#line 183 "mode_ordering.m"
      check_hlds__mode_ordering__Goal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_40, 0) = ((MR_Box) (check_hlds__mode_ordering__GoalExpr_51));
#line 183 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__Goal_40, 1) = ((MR_Box) (check_hlds__mode_ordering__GoalInfo_52));
#line 183 "mode_ordering.m"
    }
#line 150 "mode_ordering.m"
    {
#line 150 "mode_ordering.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__mode_ordering__Goal_40, check_hlds__mode_ordering__ProcInfo0_16, &check_hlds__mode_ordering__ProcInfo_21);
    }
#line 131 "mode_ordering.m"
    {
#line 131 "mode_ordering.m"
      hlds__hlds_pred__pred_info_set_proc_info_4_p_0(check_hlds__mode_ordering__ProcId_14, check_hlds__mode_ordering__ProcInfo_21, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_22, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_23);
#line 131 "mode_ordering.m"
      return;
    }
#line 123 "mode_ordering.m"
  }
#line 118 "mode_ordering.m"
}

#line 106 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_infer_proc_8_p_0(
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModuleInfo_9,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_10,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_11,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__MCI_12,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__Constraint0_13,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__ModeDeclConstraint_14,
#line 106 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17,
#line 106 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18)
#line 106 "mode_ordering.m"
{
#line 112 "mode_ordering.m"
  {
#line 112 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 112 "mode_ordering.m"
    {
#line 112 "mode_ordering.m"
      check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_105_110_102_101_114_95_112_114_111_99_95_95_91_54_93_95_48_8_p_0(check_hlds__mode_ordering__ModuleInfo_9, check_hlds__mode_ordering__PredConstraintMap_10, check_hlds__mode_ordering__PredId_11, check_hlds__mode_ordering__MCI_12, check_hlds__mode_ordering__Constraint0_13, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_PredInfo_18);
#line 112 "mode_ordering.m"
      return;
    }
#line 112 "mode_ordering.m"
  }
#line 106 "mode_ordering.m"
}

#line 77 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_pred_5_p_0(
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_6,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering___SCC_7,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredId_8,
#line 77 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17,
#line 77 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18)
#line 77 "mode_ordering.m"
{
#line 80 "mode_ordering.m"
  {
#line 80 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;

#line 80 "mode_ordering.m"
    {
#line 80 "mode_ordering.m"
      check_hlds__mode_ordering__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_111_114_100_101_114_105_110_103_95_112_114_101_100_95_95_91_50_93_95_48_5_p_0(check_hlds__mode_ordering__PredConstraintMap_6, check_hlds__mode_ordering__PredId_8, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_17, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_18);
#line 80 "mode_ordering.m"
      return;
    }
#line 80 "mode_ordering.m"
  }
#line 77 "mode_ordering.m"
}

#line 75 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1(
#line 75 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 75 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 75 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 75 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 75 "mode_ordering.m"
{
#line 75 "mode_ordering.m"
  {
#line 75 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 75 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18;

#line 75 "mode_ordering.m"
    {
#line 75 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_pred_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18);
    }
#line 75 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_18));
#line 75 "mode_ordering.m"
  }
#line 75 "mode_ordering.m"
}

#line 70 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_scc_4_p_0(
#line 70 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__PredConstraintMap_5,
#line 70 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__SCC_6,
#line 70 "mode_ordering.m"
  MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8,
#line 70 "mode_ordering.m"
  MR_Word * check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9)
#line 70 "mode_ordering.m"
{
#line 73 "mode_ordering.m"
  {
#line 73 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 73 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10;
#line 73 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_11_11;
#line 75 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 74 "mode_ordering.m"
    {
#line 74 "mode_ordering.m"
      check_hlds__clause_to_proc__copy_module_clauses_to_procs_3_p_0(check_hlds__mode_ordering__SCC_6, check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10);
    }
#line 75 "mode_ordering.m"
    {
#line 75 "mode_ordering.m"
      check_hlds__mode_ordering__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 75 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_4[0]));
#line 75 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_scc_4_p_0_1));
#line 75 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 75 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 3) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_5));
#line 75 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_11_11, 4) = ((MR_Box) (check_hlds__mode_ordering__SCC_6));
#line 75 "mode_ordering.m"
    }
#line 75 "mode_ordering.m"
    {
#line 75 "mode_ordering.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, check_hlds__mode_ordering__V_11_11, check_hlds__mode_ordering__SCC_6, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_10_10)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 75 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 73 "mode_ordering.m"
  }
#line 70 "mode_ordering.m"
}

#line 67 "mode_ordering.m"
static void MR_CALL 
check_hlds__mode_ordering__mode_ordering_6_p_0_1(
#line 67 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__closure_arg,
#line 67 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_1,
#line 67 "mode_ordering.m"
  MR_Box check_hlds__mode_ordering__wrapper_arg_2,
#line 67 "mode_ordering.m"
  MR_Box * check_hlds__mode_ordering__wrapper_arg_3)
#line 67 "mode_ordering.m"
{
#line 67 "mode_ordering.m"
  {
#line 67 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__closure = check_hlds__mode_ordering__closure_arg;
#line 67 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9;

#line 67 "mode_ordering.m"
    {
#line 67 "mode_ordering.m"
      check_hlds__mode_ordering__mode_ordering_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_1), ((MR_Word) check_hlds__mode_ordering__wrapper_arg_2), &check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
#line 67 "mode_ordering.m"
    *check_hlds__mode_ordering__wrapper_arg_3 = ((MR_Box) (check_hlds__mode_ordering__conv0_STATE_VARIABLE_ModuleInfo_9));
#line 67 "mode_ordering.m"
  }
#line 67 "mode_ordering.m"
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
#line 66 "mode_ordering.m"
  {
#line 66 "mode_ordering.m"
    MR_bool check_hlds__mode_ordering__succeeded;
#line 66 "mode_ordering.m"
    MR_Word check_hlds__mode_ordering__V_15_15;
#line 67 "mode_ordering.m"
    MR_Box check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12;

#line 67 "mode_ordering.m"
    {
#line 67 "mode_ordering.m"
      check_hlds__mode_ordering__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 67 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 0) = ((MR_Box) (&check_hlds__mode_ordering_scalar_common_3[0]));
#line 67 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 1) = ((MR_Box) (check_hlds__mode_ordering__mode_ordering_6_p_0_1));
#line 67 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 67 "mode_ordering.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_ordering__V_15_15, 3) = ((MR_Box) (check_hlds__mode_ordering__PredConstraintMap_7));
#line 67 "mode_ordering.m"
    }
#line 67 "mode_ordering.m"
    {
#line 67 "mode_ordering.m"
      mercury__list__foldl_4_p_0((MR_Word) &check_hlds__mode_ordering_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, check_hlds__mode_ordering__V_15_15, check_hlds__mode_ordering__SCCs_8, ((MR_Box) (check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_0_11)), &check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12);
    }
#line 67 "mode_ordering.m"
    *check_hlds__mode_ordering__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) check_hlds__mode_ordering__conv1_STATE_VARIABLE_ModuleInfo_12);
#line 66 "mode_ordering.m"
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
