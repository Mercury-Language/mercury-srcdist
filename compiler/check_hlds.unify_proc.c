/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module check_hlds.unify_proc. */
/* :- implementation. */

/*
INIT mercury__check_hlds__unify_proc__init
ENDINIT
*/

#include "check_hlds.unify_proc.mih"


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
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.post_typecheck.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_hlds.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1902 "unify_proc.m"
struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s {
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2;
#line 1906 "unify_proc.m"
  MR_bool check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded;
#line 1908 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22;
#line 1923 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0;
#line 1923 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43;
#line 1923 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25;
#line 1923 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42;
#line 1923 "unify_proc.m"
  MR_Box check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25;
#line 1902 "unify_proc.m"
};

#line 1727 "unify_proc.m"
struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s {
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2;
#line 1731 "unify_proc.m"
  MR_bool check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded;
#line 1734 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30;
#line 1746 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0;
#line 1746 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77;
#line 1746 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71;
#line 1746 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76;
#line 1746 "unify_proc.m"
  MR_Box check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71;
#line 1727 "unify_proc.m"
};

#line 90 "unify_proc.m"
struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s {
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11;
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_31;
#line 325 "unify_proc.m"
  MR_bool check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded;
#line 325 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_56_56;
#line 351 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0;
#line 351 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_26;
#line 352 "unify_proc.m"
  MR_Box check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_26;
#line 90 "unify_proc.m"
};


#line 204 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 207 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 210 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0;

#line 213 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1;

#line 216 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2];

#line 219 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2];

#line 222 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2];

#line 225 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0;

#line 228 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 231 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0[2];

#line 234 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0[2];

#line 237 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0;

#line 240 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[1];

#line 243 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[1];

#line 246 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0[1];

#line 249 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0[1];

#line 252 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0;

#line 255 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1;

#line 258 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2];

#line 261 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2];

#line 264 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2];

#line 267 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0[2];

#line 270 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0;

#line 273 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[1];

#line 276 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[1];

#line 279 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[1];

#line 282 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0[1];

#line 285 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 288 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 291 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 294 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4];

#line 297 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4];

#line 300 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0;

#line 303 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1];

#line 306 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1];

#line 309 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1];

#line 312 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1];

#line 315 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
#line 318 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 320 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 323 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
#line 326 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 328 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 330 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 333 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0_10001(
#line 336 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 338 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 341 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0_10001(
#line 344 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 346 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 348 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 351 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0_10001(
#line 354 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 356 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 359 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0_10001(
#line 362 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 364 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 366 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 369 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
#line 372 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 374 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 377 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
#line 380 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 382 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 384 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 387 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001(
#line 390 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 392 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 395 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001(
#line 398 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 400 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 402 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 405 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
#line 408 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 410 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 413 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
#line 416 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 418 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 420 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 423 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0_10001(
#line 426 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 428 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 431 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0_10001(
#line 434 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 436 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 438 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 566 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(
#line 566 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_9,
#line 566 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 566 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 566 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 566 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_47,
#line 566 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_48);

#line 1876 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1876__1_1_f_0(
#line 1876 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_21);

#line 479 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__479__1_2_p_0(
#line 479 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ErrorProcs_24,
#line 479 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_35);

#line 395 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__395__1_2_f_0(
#line 395 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 395 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_37);

#line 174 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0(
#line 174 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 174 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 174 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 174 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0(
#line 174 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 174 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 2068 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
#line 2068 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 2068 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 2068 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 2068 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
#line 2068 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 2068 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 491 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
#line 491 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 491 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 491 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 491 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
#line 491 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 491 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 1615 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
#line 1615 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 1615 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1615 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 1615 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
#line 1615 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 1615 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 2048 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
#line 2048 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_6,
#line 2048 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 2048 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_8,
#line 2048 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
#line 2048 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15);

#line 2046 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
#line 2046 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_5,
#line 2046 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_6,
#line 2046 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
#line 2046 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13);

#line 2032 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
#line 2032 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_3);

#line 2008 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
#line 2008 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVars_7,
#line 2008 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_8,
#line 2008 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 2008 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 2008 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 2008 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

#line 1935 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_11,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__MaybeCompareRes_12,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_13,
#line 1935 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_14,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_38,
#line 1935 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_39);

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_3(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_4(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1902 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0(
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1902 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 1902 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

#line 1891 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_7_p_0(
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgTypes_8,
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQVars_9,
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Vars1_10,
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Vars2_11,
#line 1891 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_12,
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
#line 1891 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16);

#line 1876 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
#line 1876 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1876 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 1870 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
#line 1870 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorArgs_6,
#line 1870 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_7,
#line 1870 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Vars_8,
#line 1870 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1870 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

#line 1862 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
#line 1862 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1862 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__2_2,
#line 1862 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_3,
#line 1862 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_4);

#line 1852 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
#line 1852 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1852 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_2,
#line 1852 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_3,
#line 1852 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
#line 1852 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
#line 1852 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6);

#line 1844 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
#line 1844 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_7,
#line 1844 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_8,
#line 1844 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_9,
#line 1844 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_10,
#line 1844 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1844 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

#line 1815 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialPredId_11,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_12,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstmapDelta_13,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Detism_14,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1815 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_26,
#line 1815 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_27);

#line 1796 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
#line 1796 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 1796 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_8,
#line 1796 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1796 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_10,
#line 1796 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1796 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_1(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_3(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_4(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_2(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_5(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1727 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0(
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_5,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_6,
#line 1727 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1727 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9);

#line 1714 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_9_p_0(
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgTypes_10,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_11,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Xs_12,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ys_13,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_14,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1714 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_19,
#line 1714 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_20);

#line 1663 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_12,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor1_13,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor2_14,
#line 1663 "unify_proc.m"
  MR_String check_hlds__unify_proc__CompareOp_15,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_16,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_17,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_18,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_19,
#line 1663 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_20,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_46,
#line 1663 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_47);

#line 1619 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_12,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_13,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_14,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_15,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_16,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Kind_17,
#line 1619 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_18,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 1619 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42);

#line 1604 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1604 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1604 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9);

#line 1517 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_11,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1517 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 1517 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

#line 1452 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1452 "unify_proc.m"
  MR_String check_hlds__unify_proc__HeadVar__4_4,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__8_8,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9,
#line 1452 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_10,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_11,
#line 1452 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_12);

#line 1437 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8,
#line 1437 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_9,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_10,
#line 1437 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_11);

#line 1339 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
#line 1339 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1339 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1339 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 1339 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_3);

#line 1327 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors0_11,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1327 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_30,
#line 1327 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_31);

#line 1876 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
#line 1876 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1876 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 1306 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_12,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_13,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_14,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1306 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1306 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__STATE_VARIABLE_N_0_32,
#line 1306 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__STATE_VARIABLE_N_33,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_34,
#line 1306 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_35);

#line 1299 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
#line 1299 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1299 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1299 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1299 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1299 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4,
#line 1299 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_5,
#line 1299 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_6);

#line 1293 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1293 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_21,
#line 1293 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_22);

#line 1216 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_10,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1216 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_43,
#line 1216 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_44);

#line 1208 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
#line 1208 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1208 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1208 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1208 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1208 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4);

#line 1202 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1202 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 1202 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

#line 1129 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_9,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_10,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1129 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_24,
#line 1129 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_25);

#line 1095 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_2,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_3,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_4,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_5,
#line 1095 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_6,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_7,
#line 1095 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_8);

#line 1085 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1085 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_16,
#line 1085 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_17);

#line 1076 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
#line 1076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_7,
#line 1076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_8,
#line 1076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1076 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 1076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1076 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

#line 1029 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1029 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
#line 1029 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16);

#line 1011 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1011 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_23,
#line 1011 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_24);

#line 990 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
#line 990 "unify_proc.m"
  MR_Word check_hlds__unify_proc__A_4,
#line 990 "unify_proc.m"
  MR_Word check_hlds__unify_proc__B_5,
#line 990 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Res_6);

#line 902 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_11,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 902 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 902 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42);

#line 835 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 835 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_37,
#line 835 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_38);

#line 804 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_8,
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 804 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 804 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

#line 752 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UserEqCompare_1,
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_2,
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_3,
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_4,
#line 752 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_5,
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 752 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

#line 714 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorCat_8,
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 714 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 714 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

#line 628 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 628 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 628 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

#line 479 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
#line 479 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 446 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialId_12,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Item_13,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TVarSet_14,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_15,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_16,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_17,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PredStatus_19,
#line 446 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_20,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26,
#line 446 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27);

#line 479 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
#line 479 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 508 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
#line 508 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 508 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
#line 508 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 395 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
#line 395 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 395 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 351 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_1(
#line 351 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 352 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_3(
#line 352 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 351 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_2(
#line 351 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 351 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_4(
#line 351 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[5][3];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[6][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[2][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[1][12];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][13];




static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_index_case_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[1])),
    ((MR_Box) (check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[1])),
    ((MR_Box) (check_hlds__unify_proc__make_fresh_vars_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__queue__queue__type_ctor_info_queue_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_body_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
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



#line 1697 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1705 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1713 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0 = {
  (MR_String) "linear",
  (MR_Integer) 0
};

#line 1719 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1 = {
  (MR_String) "quad",
  (MR_Integer) 1
};

#line 1725 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

#line 1731 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

#line 1737 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1743 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "linear_or_quad",
  {
    check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0
  },
  {
    check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0
};

#line 1764 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1773 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1781 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1787 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0[2] = {
  (MR_String) "unify_req_map",
  (MR_String) "req_queue"
};

#line 1793 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0 = {
  (MR_String) "proc_requests",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0,
  NULL,
  NULL
};

#line 1808 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

#line 1813 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0
  }
};

#line 1822 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

#line 1827 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0[1] = {
  (MR_Integer) 0
};

#line 1832 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_proc_requests_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____proc_requests_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____proc_requests_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "proc_requests",
  {
    check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0
  },
  {
    check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0
};

#line 1853 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_req_queue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__unify_proc____Unify____req_queue_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____req_queue_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "req_queue",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1874 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0 = {
  (MR_String) "declaration",
  (MR_Integer) 0
};

#line 1880 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1 = {
  (MR_String) "clauses",
  (MR_Integer) 1
};

#line 1886 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1
};

#line 1892 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0
};

#line 1898 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1904 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_pred_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_pred_item",
  {
    check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0
  },
  {
    check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0
};

#line 1925 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0
};

#line 1931 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0 = {
  (MR_String) "unify_proc_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 1946 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

#line 1951 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0
  }
};

#line 1960 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

#line 1965 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0[1] = {
  (MR_Integer) 0
};

#line 1970 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_id",
  {
    check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0
  },
  {
    check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0
};

#line 1991 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1999 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2007 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2016 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 2024 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4] = {
  (MR_String) "upi_varset",
  (MR_String) "upi_vartypes",
  (MR_String) "upi_rtti_varmaps",
  (MR_String) "upi_module_info"
};

#line 2032 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 = {
  (MR_String) "unify_proc_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0,
  NULL,
  NULL
};

#line 2047 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

#line 2052 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0
  }
};

#line 2061 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

#line 2066 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 2071 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_info",
  {
    check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0
  },
  {
    check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0
};

#line 2092 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_req_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_req_map_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_req_map_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_req_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2113 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
#line 2116 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2118 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2120 "check_hlds.unify_proc.c"
{
#line 2122 "check_hlds.unify_proc.c"
  {
#line 2124 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2127 "check_hlds.unify_proc.c"
    {
#line 2129 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____linear_or_quad_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2132 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2134 "check_hlds.unify_proc.c"
  }
#line 2136 "check_hlds.unify_proc.c"
}

#line 2139 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
#line 2142 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2144 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2146 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2148 "check_hlds.unify_proc.c"
{
#line 2150 "check_hlds.unify_proc.c"
  {
#line 2152 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2155 "check_hlds.unify_proc.c"
    {
#line 2157 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____linear_or_quad_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2160 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2162 "check_hlds.unify_proc.c"
  }
#line 2164 "check_hlds.unify_proc.c"
}

#line 2167 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0_10001(
#line 2170 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2172 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2174 "check_hlds.unify_proc.c"
{
#line 2176 "check_hlds.unify_proc.c"
  {
#line 2178 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2181 "check_hlds.unify_proc.c"
    {
#line 2183 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____proc_requests_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2186 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2188 "check_hlds.unify_proc.c"
  }
#line 2190 "check_hlds.unify_proc.c"
}

#line 2193 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0_10001(
#line 2196 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2198 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2200 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2202 "check_hlds.unify_proc.c"
{
#line 2204 "check_hlds.unify_proc.c"
  {
#line 2206 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2209 "check_hlds.unify_proc.c"
    {
#line 2211 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____proc_requests_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2214 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2216 "check_hlds.unify_proc.c"
  }
#line 2218 "check_hlds.unify_proc.c"
}

#line 2221 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0_10001(
#line 2224 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2226 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2228 "check_hlds.unify_proc.c"
{
#line 2230 "check_hlds.unify_proc.c"
  {
#line 2232 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2235 "check_hlds.unify_proc.c"
    {
#line 2237 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____req_queue_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2240 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2242 "check_hlds.unify_proc.c"
  }
#line 2244 "check_hlds.unify_proc.c"
}

#line 2247 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0_10001(
#line 2250 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2252 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2254 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2256 "check_hlds.unify_proc.c"
{
#line 2258 "check_hlds.unify_proc.c"
  {
#line 2260 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2263 "check_hlds.unify_proc.c"
    {
#line 2265 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____req_queue_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2268 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2270 "check_hlds.unify_proc.c"
  }
#line 2272 "check_hlds.unify_proc.c"
}

#line 2275 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
#line 2278 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2280 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2282 "check_hlds.unify_proc.c"
{
#line 2284 "check_hlds.unify_proc.c"
  {
#line 2286 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2289 "check_hlds.unify_proc.c"
    {
#line 2291 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_pred_item_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2294 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2296 "check_hlds.unify_proc.c"
  }
#line 2298 "check_hlds.unify_proc.c"
}

#line 2301 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
#line 2304 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2306 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2308 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2310 "check_hlds.unify_proc.c"
{
#line 2312 "check_hlds.unify_proc.c"
  {
#line 2314 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2317 "check_hlds.unify_proc.c"
    {
#line 2319 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_pred_item_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2322 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2324 "check_hlds.unify_proc.c"
  }
#line 2326 "check_hlds.unify_proc.c"
}

#line 2329 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001(
#line 2332 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2334 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2336 "check_hlds.unify_proc.c"
{
#line 2338 "check_hlds.unify_proc.c"
  {
#line 2340 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2343 "check_hlds.unify_proc.c"
    {
#line 2345 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_proc_id_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2348 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2350 "check_hlds.unify_proc.c"
  }
#line 2352 "check_hlds.unify_proc.c"
}

#line 2355 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001(
#line 2358 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2360 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2362 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2364 "check_hlds.unify_proc.c"
{
#line 2366 "check_hlds.unify_proc.c"
  {
#line 2368 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2371 "check_hlds.unify_proc.c"
    {
#line 2373 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_proc_id_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2376 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2378 "check_hlds.unify_proc.c"
  }
#line 2380 "check_hlds.unify_proc.c"
}

#line 2383 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
#line 2386 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2388 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2390 "check_hlds.unify_proc.c"
{
#line 2392 "check_hlds.unify_proc.c"
  {
#line 2394 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2397 "check_hlds.unify_proc.c"
    {
#line 2399 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_proc_info_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2402 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2404 "check_hlds.unify_proc.c"
  }
#line 2406 "check_hlds.unify_proc.c"
}

#line 2409 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
#line 2412 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2414 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2416 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2418 "check_hlds.unify_proc.c"
{
#line 2420 "check_hlds.unify_proc.c"
  {
#line 2422 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2425 "check_hlds.unify_proc.c"
    {
#line 2427 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_proc_info_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2430 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2432 "check_hlds.unify_proc.c"
  }
#line 2434 "check_hlds.unify_proc.c"
}

#line 2437 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0_10001(
#line 2440 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2442 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2444 "check_hlds.unify_proc.c"
{
#line 2446 "check_hlds.unify_proc.c"
  {
#line 2448 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2451 "check_hlds.unify_proc.c"
    {
#line 2453 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_req_map_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2456 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2458 "check_hlds.unify_proc.c"
  }
#line 2460 "check_hlds.unify_proc.c"
}

#line 2463 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0_10001(
#line 2466 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2468 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2470 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2472 "check_hlds.unify_proc.c"
{
#line 2474 "check_hlds.unify_proc.c"
  {
#line 2476 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2479 "check_hlds.unify_proc.c"
    {
#line 2481 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_req_map_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2484 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2486 "check_hlds.unify_proc.c"
  }
#line 2488 "check_hlds.unify_proc.c"
}

#line 566 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(
#line 566 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_9,
#line 566 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 566 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 566 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 566 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_47,
#line 566 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_48)
#line 566 "unify_proc.m"
{
#line 570 "unify_proc.m"
  {
#line 570 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 570 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 3)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 2)));

#line 597 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_9)) == (MR_mktag((MR_Integer) 2))))
#line 576 "unify_proc.m"
      {
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqvType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 0)));
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo_16;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X0_17;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtor_18;
#line 576 "unify_proc.m"
        MR_String check_hlds__unify_proc__PredName_19;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ModuleName_20;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeSymName_21;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeModuleName_23;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InitPred_24;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredId_25;
#line 576 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__ModeId_26;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InitCall_27;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InitGoal_28;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Any_29;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastGoal_30;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_31;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_68_68;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_70_70;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_78_78;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_80_80;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_81_81;
#line 576 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_83_83;
#line 583 "unify_proc.m"
        MR_Integer check_hlds__unify_proc___TypeArity_22;

#line 577 "unify_proc.m"
        {
#line 577 "unify_proc.m"
          hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__GoalInfo_16);
        }
#line 578 "unify_proc.m"
        {
#line 578 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_15, (MR_String) "PreCast_HeadVar", (MR_Integer) 1, &check_hlds__unify_proc__X0_17, check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, &check_hlds__unify_proc__STATE_VARIABLE_Info_68_68);
        }
#line 580 "unify_proc.m"
        {
#line 580 "unify_proc.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__EqvType_15, &check_hlds__unify_proc__TypeCtor_18);
        }
#line 581 "unify_proc.m"
        {
#line 581 "unify_proc.m"
          check_hlds__unify_proc__PredName_19 = hlds__special_pred__special_pred_name_2_f_0((MR_Integer) 3, check_hlds__unify_proc__TypeCtor_18);
        }
#line 582 "unify_proc.m"
        {
#line 582 "unify_proc.m"
          hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unify_proc__ModuleInfo_14, &check_hlds__unify_proc__ModuleName_20);
        }
#line 583 "unify_proc.m"
        check_hlds__unify_proc__TypeSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_18, (MR_Integer) 0)));
#line 583 "unify_proc.m"
        check_hlds__unify_proc___TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_18, (MR_Integer) 1)));
#line 584 "unify_proc.m"
        {
#line 584 "unify_proc.m"
          mdbcomp__prim_data__sym_name_get_module_name_default_3_p_0(check_hlds__unify_proc__TypeSymName_21, check_hlds__unify_proc__ModuleName_20, &check_hlds__unify_proc__TypeModuleName_23);
        }
#line 586 "unify_proc.m"
        {
#line 586 "unify_proc.m"
          check_hlds__unify_proc__InitPred_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__InitPred_24, 0) = ((MR_Box) (check_hlds__unify_proc__TypeModuleName_23));
#line 586 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__InitPred_24, 1) = ((MR_Box) (check_hlds__unify_proc__PredName_19));
#line 586 "unify_proc.m"
        }
#line 587 "unify_proc.m"
        {
#line 587 "unify_proc.m"
          check_hlds__unify_proc__PredId_25 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 588 "unify_proc.m"
        {
#line 588 "unify_proc.m"
          check_hlds__unify_proc__ModeId_26 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 589 "unify_proc.m"
        {
#line 589 "unify_proc.m"
          check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__X0_17));
#line 589 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "unify_proc.m"
        }
#line 589 "unify_proc.m"
        {
#line 589 "unify_proc.m"
          check_hlds__unify_proc__InitCall_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 589 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_25));
#line 589 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_26));
#line 589 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 2) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
#line 589 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 3) = ((MR_Box) ((MR_Integer) 2));
#line 589 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 5) = ((MR_Box) (check_hlds__unify_proc__InitPred_24));
#line 589 "unify_proc.m"
        }
#line 590 "unify_proc.m"
        {
#line 590 "unify_proc.m"
          check_hlds__unify_proc__InitGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__InitGoal_28, 0) = ((MR_Box) (check_hlds__unify_proc__InitCall_27));
#line 590 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__InitGoal_28, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_16));
#line 590 "unify_proc.m"
        }
#line 592 "unify_proc.m"
        check_hlds__unify_proc__Any_29 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_2[5]);
#line 593 "unify_proc.m"
        {
#line 593 "unify_proc.m"
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 2, check_hlds__unify_proc__X0_17, check_hlds__unify_proc__X_10, check_hlds__unify_proc__Any_29, check_hlds__unify_proc__Any_29, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastGoal_30);
        }
#line 595 "unify_proc.m"
        {
#line 595 "unify_proc.m"
          check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__CastGoal_30));
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "unify_proc.m"
        }
#line 595 "unify_proc.m"
        {
#line 595 "unify_proc.m"
          check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (check_hlds__unify_proc__InitGoal_28));
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 595 "unify_proc.m"
        }
#line 595 "unify_proc.m"
        {
#line 595 "unify_proc.m"
          check_hlds__unify_proc__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 1) = ((MR_Box) ((MR_Integer) 0));
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 2) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 595 "unify_proc.m"
        }
#line 595 "unify_proc.m"
        {
#line 595 "unify_proc.m"
          check_hlds__unify_proc__Goal_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 595 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_31, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_16));
#line 595 "unify_proc.m"
        }
#line 596 "unify_proc.m"
        {
#line 596 "unify_proc.m"
          check_hlds__unify_proc__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_83_83, 0) = ((MR_Box) (check_hlds__unify_proc__X_10));
#line 596 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "unify_proc.m"
        }
#line 596 "unify_proc.m"
        {
#line 596 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_83_83, check_hlds__unify_proc__Goal_31, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_68_68, check_hlds__unify_proc__STATE_VARIABLE_Info_48);
#line 596 "unify_proc.m"
          return;
        }
#line 576 "unify_proc.m"
      }
#line 597 "unify_proc.m"
    else
#line 597 "unify_proc.m"
      if (((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 598 "unify_proc.m"
        {
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__SolverTypeDetails_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 1)));
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__HowToInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 1)));
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Call_35;
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_59_59;
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__GoalInfo_86;
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__InitPred_87;
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__PredId_88;
#line 598 "unify_proc.m"
          MR_Integer check_hlds__unify_proc__ModeId_89;
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Goal_90;
#line 598 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 2)));
#line 605 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 0)));
#line 605 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 2)));
#line 605 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 3)));
#line 605 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 4)));

#line 608 "unify_proc.m"
          if ((check_hlds__unify_proc__HowToInit_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "unify_proc.m"
            {
#line 610 "unify_proc.m"
              {
#line 610 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_initialise_proc_body\'/7", (MR_String) "generating initialise pred. for solver type that does not have automatic initialisation");
#line 610 "unify_proc.m"
                return;
              }
#line 609 "unify_proc.m"
            }
#line 608 "unify_proc.m"
          else
#line 607 "unify_proc.m"
            check_hlds__unify_proc__InitPred_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HowToInit_34, (MR_Integer) 0)));
#line 613 "unify_proc.m"
          {
#line 613 "unify_proc.m"
            check_hlds__unify_proc__PredId_88 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          }
#line 614 "unify_proc.m"
          {
#line 614 "unify_proc.m"
            check_hlds__unify_proc__ModeId_89 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          }
#line 615 "unify_proc.m"
          {
#line 615 "unify_proc.m"
            check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_10));
#line 615 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "unify_proc.m"
          }
#line 615 "unify_proc.m"
          {
#line 615 "unify_proc.m"
            check_hlds__unify_proc__Call_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 615 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_88));
#line 615 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_89));
#line 615 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 2) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 615 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 3) = ((MR_Box) ((MR_Integer) 2));
#line 615 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 5) = ((MR_Box) (check_hlds__unify_proc__InitPred_87));
#line 615 "unify_proc.m"
          }
#line 616 "unify_proc.m"
          {
#line 616 "unify_proc.m"
            hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__GoalInfo_86);
          }
#line 617 "unify_proc.m"
          {
#line 617 "unify_proc.m"
            check_hlds__unify_proc__Goal_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_90, 0) = ((MR_Box) (check_hlds__unify_proc__Call_35));
#line 617 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_90, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_86));
#line 617 "unify_proc.m"
          }
#line 618 "unify_proc.m"
          {
#line 618 "unify_proc.m"
            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Goal_90, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, check_hlds__unify_proc__STATE_VARIABLE_Info_48);
#line 618 "unify_proc.m"
            return;
          }
#line 598 "unify_proc.m"
        }
#line 597 "unify_proc.m"
      else
#line 623 "unify_proc.m"
        {
#line 624 "unify_proc.m"
          {
#line 624 "unify_proc.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_initialise_proc_body\'/7", (MR_String) "trying to create initialisation proc for type that has no solver_type_details");
#line 624 "unify_proc.m"
            return;
          }
#line 623 "unify_proc.m"
        }
#line 570 "unify_proc.m"
  }
#line 566 "unify_proc.m"
}

#line 1876 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1876__1_1_f_0(
#line 1876 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_21)
#line 1876 "unify_proc.m"
{
#line 1876 "unify_proc.m"
  {
#line 1876 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1876 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_21, (MR_Integer) 1)));
#line 1876 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_21, (MR_Integer) 0)));
#line 1876 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_21, (MR_Integer) 2)));
#line 1876 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_21, (MR_Integer) 3)));

#line 1876 "unify_proc.m"
    return check_hlds__unify_proc__HeadVar__2_22;
#line 1876 "unify_proc.m"
  }
#line 1876 "unify_proc.m"
}

#line 479 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__479__1_2_p_0(
#line 479 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ErrorProcs_24,
#line 479 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_35)
#line 479 "unify_proc.m"
{
#line 479 "unify_proc.m"
  {
#line 479 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 479 "unify_proc.m"
    {
#line 479 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[2], ((MR_Box) (check_hlds__unify_proc__ErrorProcs_24)), ((MR_Box) (check_hlds__unify_proc__HeadVar__2_35)));
    }
#line 479 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 479 "unify_proc.m"
  }
#line 479 "unify_proc.m"
}

#line 395 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__395__1_2_f_0(
#line 395 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 395 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_37)
#line 395 "unify_proc.m"
{
#line 395 "unify_proc.m"
  {
#line 395 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 395 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HeadVar__3_38;

#line 395 "unify_proc.m"
    {
#line 395 "unify_proc.m"
      check_hlds__unify_proc__HeadVar__3_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 395 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_38, 1) = ((MR_Box) (check_hlds__unify_proc__HeadVar__2_37));
#line 395 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_38, 3) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 395 "unify_proc.m"
    }
#line 395 "unify_proc.m"
    return check_hlds__unify_proc__HeadVar__3_38;
#line 395 "unify_proc.m"
  }
#line 395 "unify_proc.m"
}

#line 174 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0(
#line 174 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 174 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 174 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 174 "unify_proc.m"
{
#line 174 "unify_proc.m"
  {
#line 174 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 174 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_4 = check_hlds__unify_proc__HeadVar__2_2;
#line 174 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_5 = check_hlds__unify_proc__HeadVar__3_3;

#line 174 "unify_proc.m"
    {
#line 174 "unify_proc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_5)));
#line 174 "unify_proc.m"
      return;
    }
#line 174 "unify_proc.m"
  }
#line 174 "unify_proc.m"
}

#line 174 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0(
#line 174 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 174 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 174 "unify_proc.m"
{
#line 174 "unify_proc.m"
  {
#line 174 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 174 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_3 = check_hlds__unify_proc__HeadVar__1_1;
#line 174 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_4 = check_hlds__unify_proc__HeadVar__2_2;

#line 174 "unify_proc.m"
    {
#line 174 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_4)));
    }
#line 174 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 174 "unify_proc.m"
  }
#line 174 "unify_proc.m"
}

#line 2068 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
#line 2068 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 2068 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 2068 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 2068 "unify_proc.m"
{
#line 2068 "unify_proc.m"
  {
#line 2068 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2068 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_15 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 2068 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_16 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 2068 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_15 == check_hlds__unify_proc__CastY_16);
#line 2068 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 3040 "check_hlds.unify_proc.c"
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
#line 2068 "unify_proc.m"
    else
#line 2068 "unify_proc.m"
      {
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 2)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 3)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_12_12;

#line 2068 "unify_proc.m"
        {
#line 2068 "unify_proc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[4], &check_hlds__unify_proc__V_12_12, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_8_8)));
        }
#line 3070 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_12_12 == (MR_Integer) 0);
#line 2068 "unify_proc.m"
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2068 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 2068 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_12_12;
#line 2068 "unify_proc.m"
        else
#line 2068 "unify_proc.m"
          {
#line 2068 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_13_13;

#line 2068 "unify_proc.m"
            {
#line 2068 "unify_proc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__unify_proc__V_13_13, ((MR_Box) (check_hlds__unify_proc__V_5_5)), ((MR_Box) (check_hlds__unify_proc__V_9_9)));
            }
#line 3090 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_13_13 == (MR_Integer) 0);
#line 2068 "unify_proc.m"
            check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2068 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 2068 "unify_proc.m"
              *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_13_13;
#line 2068 "unify_proc.m"
            else
#line 2068 "unify_proc.m"
              {
#line 2068 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_14_14;

#line 2068 "unify_proc.m"
                {
#line 2068 "unify_proc.m"
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__unify_proc__V_14_14, check_hlds__unify_proc__V_6_6, check_hlds__unify_proc__V_10_10);
                }
#line 3110 "check_hlds.unify_proc.c"
                check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_14_14 == (MR_Integer) 0);
#line 2068 "unify_proc.m"
                check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2068 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 2068 "unify_proc.m"
                  *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_14_14;
#line 2068 "unify_proc.m"
                else
#line 2068 "unify_proc.m"
                  {
#line 2068 "unify_proc.m"
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__V_7_7, check_hlds__unify_proc__V_11_11);
#line 2068 "unify_proc.m"
                    return;
                  }
#line 2068 "unify_proc.m"
              }
#line 2068 "unify_proc.m"
          }
#line 2068 "unify_proc.m"
      }
#line 2068 "unify_proc.m"
  }
#line 2068 "unify_proc.m"
}

#line 2068 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
#line 2068 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 2068 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 2068 "unify_proc.m"
{
#line 2068 "unify_proc.m"
  {
#line 2068 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2068 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_11 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
#line 2068 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_12 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

#line 2068 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_11 == check_hlds__unify_proc__CastY_12);
#line 2068 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 2068 "unify_proc.m"
      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 2068 "unify_proc.m"
    else
#line 2068 "unify_proc.m"
      {
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorInfo_14_14;
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 2)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 3)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
#line 2068 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));

#line 3185 "check_hlds.unify_proc.c"
        {
#line 3187 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[4], ((MR_Box) (check_hlds__unify_proc__V_3_3)), ((MR_Box) (check_hlds__unify_proc__V_7_7)));
        }
#line 2068 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 2068 "unify_proc.m"
          {
#line 3194 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 3196 "check_hlds.unify_proc.c"
            {
#line 3198 "check_hlds.unify_proc.c"
              check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeCtorInfo_14_14, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_8_8)));
            }
#line 2068 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 2068 "unify_proc.m"
              {
#line 3205 "check_hlds.unify_proc.c"
                {
#line 3207 "check_hlds.unify_proc.c"
                  check_hlds__unify_proc__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__unify_proc__V_5_5, check_hlds__unify_proc__V_9_9);
                }
#line 2068 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 3212 "check_hlds.unify_proc.c"
                  {
#line 3214 "check_hlds.unify_proc.c"
                    return check_hlds__unify_proc__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__unify_proc__V_6_6, check_hlds__unify_proc__V_10_10);
                  }
#line 2068 "unify_proc.m"
              }
#line 2068 "unify_proc.m"
          }
#line 2068 "unify_proc.m"
      }
#line 2068 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 2068 "unify_proc.m"
  }
#line 2068 "unify_proc.m"
}

#line 74 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0(
#line 74 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 74 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 74 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 74 "unify_proc.m"
{
#line 74 "unify_proc.m"
  {
#line 74 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 74 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_9 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 74 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_10 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 74 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_9 == check_hlds__unify_proc__CastY_10);
#line 74 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 3254 "check_hlds.unify_proc.c"
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "unify_proc.m"
    else
#line 74 "unify_proc.m"
      {
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8;

#line 74 "unify_proc.m"
        {
#line 74 "unify_proc.m"
          parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__unify_proc__V_8_8, check_hlds__unify_proc__V_4_4, check_hlds__unify_proc__V_6_6);
        }
#line 3276 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_8_8 == (MR_Integer) 0);
#line 74 "unify_proc.m"
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 74 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 74 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_8_8;
#line 74 "unify_proc.m"
        else
#line 74 "unify_proc.m"
          {
#line 74 "unify_proc.m"
            hlds__hlds_goal____Compare____uni_mode_0_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__V_5_5, check_hlds__unify_proc__V_7_7);
#line 74 "unify_proc.m"
            return;
          }
#line 74 "unify_proc.m"
      }
#line 74 "unify_proc.m"
  }
#line 74 "unify_proc.m"
}

#line 74 "unify_proc.m"
MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0(
#line 74 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 74 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 74 "unify_proc.m"
{
#line 74 "unify_proc.m"
  {
#line 74 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 74 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_7 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
#line 74 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_8 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

#line 74 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_7 == check_hlds__unify_proc__CastY_8);
#line 74 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 74 "unify_proc.m"
      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 74 "unify_proc.m"
    else
#line 74 "unify_proc.m"
      {
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));

#line 3337 "check_hlds.unify_proc.c"
        {
#line 3339 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__unify_proc__V_3_3, check_hlds__unify_proc__V_5_5);
        }
#line 74 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 3344 "check_hlds.unify_proc.c"
          {
#line 3346 "check_hlds.unify_proc.c"
            return check_hlds__unify_proc__succeeded = hlds__hlds_goal____Unify____uni_mode_0_0(check_hlds__unify_proc__V_4_4, check_hlds__unify_proc__V_6_6);
          }
#line 74 "unify_proc.m"
      }
#line 74 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 74 "unify_proc.m"
  }
#line 74 "unify_proc.m"
}

#line 491 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
#line 491 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 491 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 491 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 491 "unify_proc.m"
{
#line 491 "unify_proc.m"
  {
#line 491 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 491 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 491 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 491 "unify_proc.m"
    {
#line 491 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Cast_HeadVar1_4, check_hlds__unify_proc__Cast_HeadVar2_5);
#line 491 "unify_proc.m"
      return;
    }
#line 491 "unify_proc.m"
  }
#line 491 "unify_proc.m"
}

#line 491 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
#line 491 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 491 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 491 "unify_proc.m"
{
#line 3399 "check_hlds.unify_proc.c"
  {
#line 3401 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__HeadVar__2_1 == check_hlds__unify_proc__HeadVar__2_2);

#line 3404 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 3406 "check_hlds.unify_proc.c"
  }
#line 491 "unify_proc.m"
}

#line 68 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0(
#line 68 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 68 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 68 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 68 "unify_proc.m"
{
#line 68 "unify_proc.m"
  {
#line 68 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 68 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_4 = check_hlds__unify_proc__HeadVar__2_2;
#line 68 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_5 = check_hlds__unify_proc__HeadVar__3_3;

#line 68 "unify_proc.m"
    {
#line 68 "unify_proc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[3], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_5)));
#line 68 "unify_proc.m"
      return;
    }
#line 68 "unify_proc.m"
  }
#line 68 "unify_proc.m"
}

#line 68 "unify_proc.m"
MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0(
#line 68 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 68 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 68 "unify_proc.m"
{
#line 68 "unify_proc.m"
  {
#line 68 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 68 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_3 = check_hlds__unify_proc__HeadVar__1_1;
#line 68 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_4 = check_hlds__unify_proc__HeadVar__2_2;

#line 68 "unify_proc.m"
    {
#line 68 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[3], ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_4)));
    }
#line 68 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 68 "unify_proc.m"
  }
#line 68 "unify_proc.m"
}

#line 176 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0(
#line 176 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 176 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 176 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 176 "unify_proc.m"
{
#line 176 "unify_proc.m"
  {
#line 176 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 176 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_9 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 176 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_10 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 176 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_9 == check_hlds__unify_proc__CastY_10);
#line 176 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 3497 "check_hlds.unify_proc.c"
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "unify_proc.m"
    else
#line 176 "unify_proc.m"
      {
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8;

#line 176 "unify_proc.m"
        {
#line 176 "unify_proc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], &check_hlds__unify_proc__V_8_8, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_6_6)));
        }
#line 3519 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_8_8 == (MR_Integer) 0);
#line 176 "unify_proc.m"
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 176 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 176 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_8_8;
#line 176 "unify_proc.m"
        else
#line 176 "unify_proc.m"
          {
#line 176 "unify_proc.m"
            {
#line 176 "unify_proc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[3], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__V_5_5)), ((MR_Box) (check_hlds__unify_proc__V_7_7)));
#line 176 "unify_proc.m"
              return;
            }
#line 176 "unify_proc.m"
          }
#line 176 "unify_proc.m"
      }
#line 176 "unify_proc.m"
  }
#line 176 "unify_proc.m"
}

#line 176 "unify_proc.m"
MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0(
#line 176 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 176 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 176 "unify_proc.m"
{
#line 176 "unify_proc.m"
  {
#line 176 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 176 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_7 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
#line 176 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_8 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

#line 176 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_7 == check_hlds__unify_proc__CastY_8);
#line 176 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 176 "unify_proc.m"
      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 176 "unify_proc.m"
    else
#line 176 "unify_proc.m"
      {
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeInfo_10_10;
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));

#line 3586 "check_hlds.unify_proc.c"
        {
#line 3588 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], ((MR_Box) (check_hlds__unify_proc__V_3_3)), ((MR_Box) (check_hlds__unify_proc__V_5_5)));
        }
#line 176 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 176 "unify_proc.m"
          {
#line 3595 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__TypeInfo_10_10 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[3];
#line 3597 "check_hlds.unify_proc.c"
            {
#line 3599 "check_hlds.unify_proc.c"
              return check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_10_10, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_6_6)));
            }
#line 176 "unify_proc.m"
          }
#line 176 "unify_proc.m"
      }
#line 176 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 176 "unify_proc.m"
  }
#line 176 "unify_proc.m"
}

#line 1615 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
#line 1615 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 1615 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1615 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 1615 "unify_proc.m"
{
#line 1615 "unify_proc.m"
  {
#line 1615 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1615 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 1615 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 1615 "unify_proc.m"
    {
#line 1615 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Cast_HeadVar1_4, check_hlds__unify_proc__Cast_HeadVar2_5);
#line 1615 "unify_proc.m"
      return;
    }
#line 1615 "unify_proc.m"
  }
#line 1615 "unify_proc.m"
}

#line 1615 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
#line 1615 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 1615 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 1615 "unify_proc.m"
{
#line 3654 "check_hlds.unify_proc.c"
  {
#line 3656 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__HeadVar__2_1 == check_hlds__unify_proc__HeadVar__2_2);

#line 3659 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 3661 "check_hlds.unify_proc.c"
  }
#line 1615 "unify_proc.m"
}

#line 2048 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
#line 2048 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_6,
#line 2048 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 2048 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_8,
#line 2048 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
#line 2048 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15)
#line 2048 "unify_proc.m"
{
#line 2090 "unify_proc.m"
  {
#line 2090 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
#line 2090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
#line 2090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_12;
#line 2090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_13;
#line 2090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 2090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25;

#line 2093 "unify_proc.m"
    {
#line 2093 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_7, check_hlds__unify_proc__Var_8, check_hlds__unify_proc__VarSet0_10, &check_hlds__unify_proc__VarSet_12);
    }
#line 2094 "unify_proc.m"
    {
#line 2094 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__unify_proc__Var_8, check_hlds__unify_proc__Type_6, check_hlds__unify_proc__VarTypes0_11, &check_hlds__unify_proc__VarTypes_13);
    }
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
    {
#line 2096 "unify_proc.m"
      MR_Word base;
#line 2096 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_15 = base;
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_12));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_13));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_27_27));
#line 2096 "unify_proc.m"
    }
#line 2090 "unify_proc.m"
  }
#line 2048 "unify_proc.m"
}

#line 2046 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
#line 2046 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_5,
#line 2046 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_6,
#line 2046 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
#line 2046 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13)
#line 2046 "unify_proc.m"
{
#line 2082 "unify_proc.m"
  {
#line 2082 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2082 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
#line 2082 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
#line 2082 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_10;
#line 2082 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_11;
#line 2082 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2082 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25;
#line 2083 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
#line 2083 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
#line 2087 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 2087 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;

#line 2085 "unify_proc.m"
    {
#line 2085 "unify_proc.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Var_6, check_hlds__unify_proc__VarSet0_8, &check_hlds__unify_proc__VarSet_10);
    }
#line 2086 "unify_proc.m"
    {
#line 2086 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__unify_proc__Var_6, check_hlds__unify_proc__Type_5, check_hlds__unify_proc__VarTypes0_9, &check_hlds__unify_proc__VarTypes_11);
    }
#line 2087 "unify_proc.m"
    check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
#line 2087 "unify_proc.m"
    check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
#line 2087 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
#line 2087 "unify_proc.m"
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
#line 2088 "unify_proc.m"
    {
#line 2088 "unify_proc.m"
      MR_Word base;
#line 2088 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2088 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_13 = base;
#line 2088 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_10));
#line 2088 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_11));
#line 2088 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_24_24));
#line 2088 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_25_25));
#line 2088 "unify_proc.m"
    }
#line 2082 "unify_proc.m"
  }
#line 2046 "unify_proc.m"
}

#line 2032 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
#line 2032 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_3)
#line 2032 "unify_proc.m"
{
#line 2034 "unify_proc.m"
  {
#line 2034 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2034 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HeadVar__2_2;
#line 2034 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_4;
#line 2034 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_6_6;
#line 2034 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_7_7;
#line 2034 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_9;
#line 2034 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_10_10;

#line 2029 "unify_proc.m"
    {
#line 2029 "unify_proc.m"
      check_hlds__unify_proc__Builtin_9 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 2030 "unify_proc.m"
    {
#line 2030 "unify_proc.m"
      check_hlds__unify_proc__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_10_10, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_9));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_10_10, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2030 "unify_proc.m"
    }
#line 2030 "unify_proc.m"
    {
#line 2030 "unify_proc.m"
      check_hlds__unify_proc__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_6_6, 0) = ((MR_Box) (check_hlds__unify_proc__V_10_10));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_6_6, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2030 "unify_proc.m"
    }
#line 2035 "unify_proc.m"
    {
#line 2035 "unify_proc.m"
      check_hlds__unify_proc__V_7_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 2035 "unify_proc.m"
    {
#line 2035 "unify_proc.m"
      check_hlds__unify_proc__SymName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 0) = ((MR_Box) (check_hlds__unify_proc__V_7_7));
#line 2035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 1) = ((MR_Box) (check_hlds__unify_proc__Name_3));
#line 2035 "unify_proc.m"
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_4));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 3) = ((MR_Box) (check_hlds__unify_proc__V_6_6));
#line 2034 "unify_proc.m"
    }
#line 2034 "unify_proc.m"
    return check_hlds__unify_proc__HeadVar__2_2;
#line 2034 "unify_proc.m"
  }
#line 2032 "unify_proc.m"
}

#line 2008 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
#line 2008 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVars_7,
#line 2008 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_8,
#line 2008 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 2008 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 2008 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 2008 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21)
#line 2008 "unify_proc.m"
{
#line 2012 "unify_proc.m"
  {
#line 2012 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Varset0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_16;
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Varset_17;
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types_18;
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_19;
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_49_49;
#line 2012 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_52_52;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Warnings_15;
#line 2105 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 2105 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 2105 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45;

#line 2016 "unify_proc.m"
    {
#line 2016 "unify_proc.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__unify_proc__HeadVars_7, &check_hlds__unify_proc___Warnings_15, check_hlds__unify_proc__Goal0_8, &check_hlds__unify_proc__Goal_16, check_hlds__unify_proc__Varset0_12, &check_hlds__unify_proc__Varset_17, check_hlds__unify_proc__Types0_13, &check_hlds__unify_proc__Types_18, check_hlds__unify_proc__RttiVarMaps0_14, &check_hlds__unify_proc__RttiVarMaps_19);
    }
#line 2105 "unify_proc.m"
    check_hlds__unify_proc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 2105 "unify_proc.m"
    check_hlds__unify_proc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 2105 "unify_proc.m"
    check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 2105 "unify_proc.m"
    check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 2106 "unify_proc.m"
    check_hlds__unify_proc__V_49_49 = check_hlds__unify_proc__Varset_17;
#line 2106 "unify_proc.m"
    check_hlds__unify_proc__V_52_52 = check_hlds__unify_proc__V_46_46;
#line 2107 "unify_proc.m"
    {
#line 2107 "unify_proc.m"
      MR_Word base;
#line 2107 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2107 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_Info_21 = base;
#line 2107 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_49_49));
#line 2107 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Types_18));
#line 2107 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_19));
#line 2107 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_52_52));
#line 2107 "unify_proc.m"
    }
#line 2022 "unify_proc.m"
    {
#line 2022 "unify_proc.m"
      MR_Word base;
#line 2022 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2022 "unify_proc.m"
      *check_hlds__unify_proc__Clause_10 = base;
#line 2022 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2022 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goal_16));
#line 2022 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2022 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Context_9));
#line 2022 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2022 "unify_proc.m"
    }
#line 2012 "unify_proc.m"
  }
#line 2008 "unify_proc.m"
}

#line 1935 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_11,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__MaybeCompareRes_12,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_13,
#line 1935 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_14,
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_38,
#line 1935 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_39)
#line 1935 "unify_proc.m"
{
#line 1941 "unify_proc.m"
  {
#line 1941 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1941 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ShouldPretestEq_16;
#line 1941 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 1941 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_64;
#line 1988 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 1988 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 1988 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));

#line 1989 "unify_proc.m"
    {
#line 1989 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_63, &check_hlds__unify_proc__Globals_64);
    }
#line 1990 "unify_proc.m"
    {
#line 1990 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_64, (MR_Integer) 316, &check_hlds__unify_proc__ShouldPretestEq_16);
    }
#line 1946 "unify_proc.m"
    if ((check_hlds__unify_proc__ShouldPretestEq_16 == (MR_Integer) 0))
#line 1944 "unify_proc.m"
      {
#line 1945 "unify_proc.m"
        *check_hlds__unify_proc__Goal_14 = check_hlds__unify_proc__Goal0_13;
#line 1945 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_39 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_38;
#line 1944 "unify_proc.m"
      }
#line 1946 "unify_proc.m"
    else
#line 1947 "unify_proc.m"
      {
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastType_17;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastX_18;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastY_19;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal0_20;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal0_21;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal_22;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal_23;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualityGoal0_24;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualityGoal_25;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CondGoalExpr_26;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo0_27;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ContextGoalInfo_28;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CondGoal_29;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualGoal_30;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo_31;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalExpr_36;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__FeaturedGoalInfo_37;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_41_41;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_48_48;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_54_54;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_55_55;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Globals_72;
#line 1947 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastPointers_73;
#line 1995 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 1995 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 1995 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));

#line 1996 "unify_proc.m"
        {
#line 1996 "unify_proc.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_71, &check_hlds__unify_proc__Globals_72);
        }
#line 1997 "unify_proc.m"
        {
#line 1997 "unify_proc.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_72, (MR_Integer) 269, &check_hlds__unify_proc__CastPointers_73);
        }
#line 2001 "unify_proc.m"
        if ((check_hlds__unify_proc__CastPointers_73 == (MR_Integer) 0))
#line 2003 "unify_proc.m"
          {
#line 2003 "unify_proc.m"
            check_hlds__unify_proc__CastType_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 2001 "unify_proc.m"
        else
#line 2000 "unify_proc.m"
          {
#line 2000 "unify_proc.m"
            check_hlds__unify_proc__CastType_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 1949 "unify_proc.m"
        {
#line 1949 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__CastType_17, (MR_String) "CastX", &check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, &check_hlds__unify_proc__STATE_VARIABLE_Info_41_41);
        }
#line 1950 "unify_proc.m"
        {
#line 1950 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__CastType_17, (MR_String) "CastY", &check_hlds__unify_proc__CastY_19, check_hlds__unify_proc__STATE_VARIABLE_Info_41_41, check_hlds__unify_proc__STATE_VARIABLE_Info_39);
        }
#line 1951 "unify_proc.m"
        {
#line 1951 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_10, check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__CastXGoal0_20);
        }
#line 1952 "unify_proc.m"
        {
#line 1952 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_11, check_hlds__unify_proc__CastY_19, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__CastYGoal0_21);
        }
#line 1953 "unify_proc.m"
        {
#line 1953 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastXGoal0_20, &check_hlds__unify_proc__CastXGoal_22);
        }
#line 1954 "unify_proc.m"
        {
#line 1954 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastYGoal0_21, &check_hlds__unify_proc__CastYGoal_23);
        }
#line 1955 "unify_proc.m"
        {
#line 1955 "unify_proc.m"
          check_hlds__unify_proc__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1955 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_48_48, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_19));
#line 1955 "unify_proc.m"
        }
#line 1955 "unify_proc.m"
        {
#line 1955 "unify_proc.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__V_48_48, check_hlds__unify_proc__Context_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__EqualityGoal0_24);
        }
#line 1957 "unify_proc.m"
        {
#line 1957 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 19, check_hlds__unify_proc__EqualityGoal0_24, &check_hlds__unify_proc__EqualityGoal_25);
        }
#line 1959 "unify_proc.m"
        {
#line 1959 "unify_proc.m"
          check_hlds__unify_proc__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 0) = ((MR_Box) (check_hlds__unify_proc__EqualityGoal_25));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1959 "unify_proc.m"
        }
#line 1959 "unify_proc.m"
        {
#line 1959 "unify_proc.m"
          check_hlds__unify_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_23));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (check_hlds__unify_proc__V_55_55));
#line 1959 "unify_proc.m"
        }
#line 1959 "unify_proc.m"
        {
#line 1959 "unify_proc.m"
          check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_22));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_54_54));
#line 1959 "unify_proc.m"
        }
#line 1959 "unify_proc.m"
        {
#line 1959 "unify_proc.m"
          check_hlds__unify_proc__CondGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 2) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1959 "unify_proc.m"
        }
#line 1960 "unify_proc.m"
        {
#line 1960 "unify_proc.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_27);
        }
#line 1961 "unify_proc.m"
        {
#line 1961 "unify_proc.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_9, check_hlds__unify_proc__GoalInfo0_27, &check_hlds__unify_proc__ContextGoalInfo_28);
        }
#line 1962 "unify_proc.m"
        {
#line 1962 "unify_proc.m"
          check_hlds__unify_proc__CondGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1962 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CondGoal_29, 0) = ((MR_Box) (check_hlds__unify_proc__CondGoalExpr_26));
#line 1962 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CondGoal_29, 1) = ((MR_Box) (check_hlds__unify_proc__ContextGoalInfo_28));
#line 1962 "unify_proc.m"
        }
#line 1967 "unify_proc.m"
        if ((check_hlds__unify_proc__MaybeCompareRes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1964 "unify_proc.m"
          {
#line 1965 "unify_proc.m"
            {
#line 1965 "unify_proc.m"
              check_hlds__unify_proc__EqualGoal_30 = hlds__hlds_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_9);
            }
#line 1966 "unify_proc.m"
            check_hlds__unify_proc__GoalInfo_31 = check_hlds__unify_proc__ContextGoalInfo_28;
#line 1964 "unify_proc.m"
          }
#line 1967 "unify_proc.m"
        else
#line 1968 "unify_proc.m"
          {
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Res_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompareRes_12, (MR_Integer) 0)));
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__EqualGoalInfo_34;
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__InstmapDelta_35;
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_57_57;
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__SymName_79;
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_81_81;
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_82_82;
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Builtin_84;
#line 1968 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_85_85;
#line 1970 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_33_33;

#line 2029 "unify_proc.m"
            {
#line 2029 "unify_proc.m"
              check_hlds__unify_proc__Builtin_84 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
            }
#line 2030 "unify_proc.m"
            {
#line 2030 "unify_proc.m"
              check_hlds__unify_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_85_85, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_84));
#line 2030 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_85_85, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2030 "unify_proc.m"
            }
#line 2030 "unify_proc.m"
            {
#line 2030 "unify_proc.m"
              check_hlds__unify_proc__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__V_85_85));
#line 2030 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2030 "unify_proc.m"
            }
#line 2035 "unify_proc.m"
            {
#line 2035 "unify_proc.m"
              check_hlds__unify_proc__V_82_82 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
            }
#line 2035 "unify_proc.m"
            {
#line 2035 "unify_proc.m"
              check_hlds__unify_proc__SymName_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
#line 2035 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 1) = ((MR_Box) ((MR_String) "="));
#line 2035 "unify_proc.m"
            }
#line 2034 "unify_proc.m"
            {
#line 2034 "unify_proc.m"
              check_hlds__unify_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2034 "unify_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_79));
#line 2034 "unify_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 3) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 2034 "unify_proc.m"
            }
#line 1969 "unify_proc.m"
            {
#line 1969 "unify_proc.m"
              hlds__hlds_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_32, check_hlds__unify_proc__V_57_57, &check_hlds__unify_proc__EqualGoal_30);
            }
#line 1970 "unify_proc.m"
            check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 0)));
#line 1970 "unify_proc.m"
            check_hlds__unify_proc__EqualGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 1)));
#line 1971 "unify_proc.m"
            {
#line 1971 "unify_proc.m"
              check_hlds__unify_proc__InstmapDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unify_proc__EqualGoalInfo_34);
            }
#line 1972 "unify_proc.m"
            {
#line 1972 "unify_proc.m"
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__unify_proc__InstmapDelta_35, check_hlds__unify_proc__ContextGoalInfo_28, &check_hlds__unify_proc__GoalInfo_31);
            }
#line 1968 "unify_proc.m"
          }
#line 1975 "unify_proc.m"
        {
#line 1975 "unify_proc.m"
          check_hlds__unify_proc__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1975 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1975 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 2) = ((MR_Box) (check_hlds__unify_proc__CondGoal_29));
#line 1975 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 3) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_30));
#line 1975 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 4) = ((MR_Box) (check_hlds__unify_proc__Goal0_13));
#line 1975 "unify_proc.m"
        }
#line 1976 "unify_proc.m"
        {
#line 1976 "unify_proc.m"
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__unify_proc__GoalInfo_31, &check_hlds__unify_proc__FeaturedGoalInfo_37);
        }
#line 1978 "unify_proc.m"
        {
#line 1978 "unify_proc.m"
          MR_Word base;
#line 1978 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1978 "unify_proc.m"
          *check_hlds__unify_proc__Goal_14 = base;
#line 1978 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__GoalExpr_36));
#line 1978 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__FeaturedGoalInfo_37));
#line 1978 "unify_proc.m"
        }
#line 1947 "unify_proc.m"
      }
#line 1941 "unify_proc.m"
  }
#line 1935 "unify_proc.m"
}

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1923 "unify_proc.m"
{
#line 1923 "unify_proc.m"
  {
#line 1923 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1923 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0, 1);
#line 1923 "unify_proc.m"
  }
#line 1923 "unify_proc.m"
}

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_3(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1923 "unify_proc.m"
{
#line 1923 "unify_proc.m"
  {
#line 1923 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1923 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25);
#line 1923 "unify_proc.m"
    {
#line 1923 "unify_proc.m"
      check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(check_hlds__unify_proc__env_ptr);
#line 1923 "unify_proc.m"
      return;
    }
#line 1923 "unify_proc.m"
  }
#line 1923 "unify_proc.m"
}

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_4(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1923 "unify_proc.m"
{
#line 1923 "unify_proc.m"
  {
#line 1923 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 4488 "check_hlds.unify_proc.c"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[0];
#line 1924 "unify_proc.m"
    {
#line 1924 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42)));
    }
#line 1924 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1924 "unify_proc.m"
      {
#line 1924 "unify_proc.m"
        check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(check_hlds__unify_proc__env_ptr);
#line 1924 "unify_proc.m"
        return;
      }
#line 1923 "unify_proc.m"
  }
#line 1923 "unify_proc.m"
}

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1923 "unify_proc.m"
{
#line 1923 "unify_proc.m"
  {
#line 1923 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1924 "unify_proc.m"
    {
#line 1924 "unify_proc.m"
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42, check_hlds__unify_proc__unify_var_lists_2_7_p_0_4, check_hlds__unify_proc__env_ptr);
    }
#line 1923 "unify_proc.m"
  }
#line 1923 "unify_proc.m"
}

#line 1923 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(
#line 1923 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1923 "unify_proc.m"
{
#line 1923 "unify_proc.m"
  {
#line 1923 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1923 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0) == 0)
#line 1923 "unify_proc.m"
      {
#line 1923 "unify_proc.m"
        {
#line 1923 "unify_proc.m"
          {
#line 1923 "unify_proc.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__unify_var_lists_2_7_p_0_3, check_hlds__unify_proc__env_ptr);
          }
#line 1923 "unify_proc.m"
        }
#line 1923 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 1923 "unify_proc.m"
      }
#line 1923 "unify_proc.m"
    else
#line 1923 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1923 "unify_proc.m"
  }
#line 1923 "unify_proc.m"
}

#line 1902 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0(
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1902 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
#line 1902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 1902 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
#line 1902 "unify_proc.m"
{
#line 1902 "unify_proc.m"
  {
#line 1902 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s check_hlds__unify_proc__env;

#line 1902 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2 = check_hlds__unify_proc__ExistQTVars_2;
#line 1906 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1906 "unify_proc.m"
      {
#line 1906 "unify_proc.m"
        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1906 "unify_proc.m"
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1906 "unify_proc.m"
          {
#line 1906 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1906 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1906 "unify_proc.m"
              {
#line 1906 "unify_proc.m"
                *check_hlds__unify_proc__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1906 "unify_proc.m"
                *check_hlds__unify_proc__STATE_VARIABLE_Info_7 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1906 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1906 "unify_proc.m"
              }
#line 1906 "unify_proc.m"
          }
#line 1906 "unify_proc.m"
      }
#line 1906 "unify_proc.m"
    else
#line 1908 "unify_proc.m"
      {
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_15;
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Xs_16;
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_17;
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ys_18;
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_19;
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goals_20;
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Context_23;
#line 1908 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
#line 1909 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_38_38;
#line 1909 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1909 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ModuleInfo_24;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_28_28;
#line 2103 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_45_45;
#line 2103 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_46_46;
#line 2103 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_47_47;

#line 1908 "unify_proc.m"
        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1908 "unify_proc.m"
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1908 "unify_proc.m"
          {
#line 1908 "unify_proc.m"
            check_hlds__unify_proc__X_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1908 "unify_proc.m"
            check_hlds__unify_proc__Xs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1908 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1908 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1908 "unify_proc.m"
              {
#line 1908 "unify_proc.m"
                check_hlds__unify_proc__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 0)));
#line 1908 "unify_proc.m"
                check_hlds__unify_proc__Ys_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 1)));
#line 1909 "unify_proc.m"
                check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 0)));
#line 1909 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 1)));
#line 1909 "unify_proc.m"
                check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 2)));
#line 1909 "unify_proc.m"
                check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 3)));
#line 1910 "unify_proc.m"
                {
#line 1910 "unify_proc.m"
                  mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_23);
                }
#line 2103 "unify_proc.m"
                check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
                check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
                check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2103 "unify_proc.m"
                check_hlds__unify_proc__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 1913 "unify_proc.m"
                {
#line 1913 "unify_proc.m"
                  check_hlds__unify_proc__V_28_28 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_24, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22);
                }
#line 1913 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__V_28_28 == (MR_Integer) 0);
#line 1916 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1915 "unify_proc.m"
                  {
#line 1915 "unify_proc.m"
                    {
#line 1915 "unify_proc.m"
                      check_hlds__unify_proc__Goal_19 = hlds__hlds_goal__true_goal_0_f_0();
                    }
#line 1915 "unify_proc.m"
                    check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1915 "unify_proc.m"
                  }
#line 1916 "unify_proc.m"
                else
#line 1927 "unify_proc.m"
                  {
#line 1923 "unify_proc.m"
                    {
#line 1923 "unify_proc.m"
                      check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(&check_hlds__unify_proc__env);
                    }
#line 1927 "unify_proc.m"
                    if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1926 "unify_proc.m"
                      {
#line 1926 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_30_30;
#line 1926 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_32_32;

#line 1926 "unify_proc.m"
                        {
#line 1926 "unify_proc.m"
                          check_hlds__unify_proc__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1926 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (check_hlds__unify_proc__Y_17));
#line 1926 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1926 "unify_proc.m"
                        }
#line 1926 "unify_proc.m"
                        {
#line 1926 "unify_proc.m"
                          check_hlds__unify_proc__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1926 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__X_15));
#line 1926 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_32_32));
#line 1926 "unify_proc.m"
                        }
#line 1926 "unify_proc.m"
                        {
#line 1926 "unify_proc.m"
                          check_hlds__unify_proc__build_call_6_p_0((MR_String) "typed_unify", check_hlds__unify_proc__V_30_30, check_hlds__unify_proc__Context_23, &check_hlds__unify_proc__Goal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
                        }
#line 1926 "unify_proc.m"
                      }
#line 1927 "unify_proc.m"
                    else
#line 1928 "unify_proc.m"
                      {
#line 1928 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_34_34;

#line 1928 "unify_proc.m"
                        {
#line 1928 "unify_proc.m"
                          check_hlds__unify_proc__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1928 "unify_proc.m"
                          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_34_34, 0) = ((MR_Box) (check_hlds__unify_proc__Y_17));
#line 1928 "unify_proc.m"
                        }
#line 1928 "unify_proc.m"
                        {
#line 1928 "unify_proc.m"
                          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_15, check_hlds__unify_proc__V_34_34, check_hlds__unify_proc__Context_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_19);
                        }
#line 1928 "unify_proc.m"
                        check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1928 "unify_proc.m"
                      }
#line 1927 "unify_proc.m"
                  }
#line 1931 "unify_proc.m"
                {
#line 1931 "unify_proc.m"
                  (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = check_hlds__unify_proc__unify_var_lists_2_7_p_0(check_hlds__unify_proc__ArgTypes_13, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__Xs_16, check_hlds__unify_proc__Ys_18, &check_hlds__unify_proc__Goals_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
                }
#line 1908 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1908 "unify_proc.m"
                  {
#line 1908 "unify_proc.m"
                    {
#line 1908 "unify_proc.m"
                      MR_Word base;
#line 1908 "unify_proc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1908 "unify_proc.m"
                      *check_hlds__unify_proc__HeadVar__5_5 = base;
#line 1908 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Goal_19));
#line 1908 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goals_20));
#line 1908 "unify_proc.m"
                    }
#line 1908 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1908 "unify_proc.m"
                  }
#line 1908 "unify_proc.m"
              }
#line 1908 "unify_proc.m"
          }
#line 1908 "unify_proc.m"
      }
#line 1906 "unify_proc.m"
    return (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded;
#line 1902 "unify_proc.m"
  }
#line 1902 "unify_proc.m"
}

#line 1891 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_7_p_0(
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgTypes_8,
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQVars_9,
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Vars1_10,
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Vars2_11,
#line 1891 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_12,
#line 1891 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
#line 1891 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16)
#line 1891 "unify_proc.m"
{
#line 1898 "unify_proc.m"
  {
#line 1898 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1898 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_14;
#line 1898 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_17_17;

#line 1896 "unify_proc.m"
    {
#line 1896 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__unify_var_lists_2_7_p_0(check_hlds__unify_proc__ArgTypes_8, check_hlds__unify_proc__ExistQVars_9, check_hlds__unify_proc__Vars1_10, check_hlds__unify_proc__Vars2_11, &check_hlds__unify_proc__Goal0_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_15, &check_hlds__unify_proc__STATE_VARIABLE_Info_17_17);
    }
#line 1898 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1897 "unify_proc.m"
      {
#line 1897 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_16 = check_hlds__unify_proc__STATE_VARIABLE_Info_17_17;
#line 1897 "unify_proc.m"
        *check_hlds__unify_proc__Goal_12 = check_hlds__unify_proc__Goal0_14;
#line 1897 "unify_proc.m"
      }
#line 1898 "unify_proc.m"
    else
#line 1899 "unify_proc.m"
      {
#line 1899 "unify_proc.m"
        {
#line 1899 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.unify_var_lists\'/7", (MR_String) "length mismatch");
#line 1899 "unify_proc.m"
          return;
        }
#line 1899 "unify_proc.m"
      }
#line 1898 "unify_proc.m"
  }
#line 1891 "unify_proc.m"
}

#line 1876 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
#line 1876 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1876 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 1876 "unify_proc.m"
{
#line 1876 "unify_proc.m"
  {
#line 1876 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 1876 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1876 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__2_22;

#line 1876 "unify_proc.m"
    {
#line 1876 "unify_proc.m"
      check_hlds__unify_proc__conv0_HeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1876__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 1876 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__2_22));
#line 1876 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 1876 "unify_proc.m"
  }
#line 1876 "unify_proc.m"
}

#line 1870 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
#line 1870 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorArgs_6,
#line 1870 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_7,
#line 1870 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Vars_8,
#line 1870 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1870 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
#line 1870 "unify_proc.m"
{
#line 1875 "unify_proc.m"
  {
#line 1875 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1875 "unify_proc.m"
    if ((check_hlds__unify_proc__ExistQTVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1875 "unify_proc.m"
      {
#line 1875 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_10;

#line 1876 "unify_proc.m"
        {
#line 1876 "unify_proc.m"
          check_hlds__unify_proc__ArgTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[4], check_hlds__unify_proc__CtorArgs_6);
        }
#line 1877 "unify_proc.m"
        {
#line 1877 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, check_hlds__unify_proc__STATE_VARIABLE_Info_18);
#line 1877 "unify_proc.m"
          return;
        }
#line 1875 "unify_proc.m"
      }
#line 1875 "unify_proc.m"
    else
#line 1879 "unify_proc.m"
      {
#line 1879 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1879 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumVars_15;
#line 1879 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_16;
#line 2100 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2100 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 2100 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_41_41;
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_38_38;

#line 1886 "unify_proc.m"
        {
#line 1886 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__CtorArgs_6, &check_hlds__unify_proc__NumVars_15);
        }
#line 1887 "unify_proc.m"
        {
#line 1887 "unify_proc.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_15, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__VarSet0_14, &check_hlds__unify_proc__VarSet_16);
        }
#line 2105 "unify_proc.m"
        check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 2105 "unify_proc.m"
        check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2105 "unify_proc.m"
        check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 2105 "unify_proc.m"
        check_hlds__unify_proc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 2105 "unify_proc.m"
        {
#line 2105 "unify_proc.m"
          MR_Word base;
#line 2105 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2105 "unify_proc.m"
          *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = base;
#line 2105 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_16));
#line 2105 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 2105 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 2105 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 2105 "unify_proc.m"
        }
#line 1879 "unify_proc.m"
      }
#line 1875 "unify_proc.m"
  }
#line 1870 "unify_proc.m"
}

#line 1862 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
#line 1862 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1862 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__2_2,
#line 1862 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_3,
#line 1862 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_4)
#line 1862 "unify_proc.m"
{
#line 1865 "unify_proc.m"
  {
#line 1865 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1865 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1865 "unify_proc.m"
      {
#line 1865 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1865 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_4 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_3;
#line 1865 "unify_proc.m"
      }
#line 1865 "unify_proc.m"
    else
#line 1866 "unify_proc.m"
      {
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Var_10;
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars_11;
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_15_15;
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_24;
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes_25;
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_36_36;
#line 1866 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_37_37;
#line 2083 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 2083 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 2087 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_34_34;
#line 2087 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_35_35;

#line 2085 "unify_proc.m"
        {
#line 2085 "unify_proc.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_22, &check_hlds__unify_proc__VarSet_24);
        }
#line 2086 "unify_proc.m"
        {
#line 2086 "unify_proc.m"
          parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__VarTypes0_23, &check_hlds__unify_proc__VarTypes_25);
        }
#line 2087 "unify_proc.m"
        check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 2087 "unify_proc.m"
        check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 2087 "unify_proc.m"
        check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 2087 "unify_proc.m"
        check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 2088 "unify_proc.m"
        {
#line 2088 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2088 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_24));
#line 2088 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_25));
#line 2088 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 2088 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 2088 "unify_proc.m"
        }
#line 1868 "unify_proc.m"
        {
#line 1868 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__Types_9, &check_hlds__unify_proc__Vars_11, check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, check_hlds__unify_proc__STATE_VARIABLE_Info_4);
        }
#line 1866 "unify_proc.m"
        {
#line 1866 "unify_proc.m"
          MR_Word base;
#line 1866 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1866 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__2_2 = base;
#line 1866 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_10));
#line 1866 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Vars_11));
#line 1866 "unify_proc.m"
        }
#line 1866 "unify_proc.m"
      }
#line 1865 "unify_proc.m"
  }
#line 1862 "unify_proc.m"
}

#line 1852 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
#line 1852 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1852 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_2,
#line 1852 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_3,
#line 1852 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
#line 1852 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
#line 1852 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6)
#line 1852 "unify_proc.m"
{
#line 1856 "unify_proc.m"
  {
#line 1856 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1856 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1856 "unify_proc.m"
      {
#line 1856 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1856 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_6 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_5;
#line 1856 "unify_proc.m"
      }
#line 1856 "unify_proc.m"
    else
#line 1858 "unify_proc.m"
      {
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Var_16;
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars_17;
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;
#line 1858 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__V_22_22;
#line 1858 "unify_proc.m"
        MR_String check_hlds__unify_proc__NumStr_32;
#line 1858 "unify_proc.m"
        MR_String check_hlds__unify_proc__Name_33;
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_41;
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes0_42;
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_43;
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes_44;
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_55_55;
#line 1858 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_56_56;
#line 2091 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_48_48;
#line 2091 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_49_49;
#line 2095 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 2095 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_54_54;

#line 1848 "unify_proc.m"
        {
#line 1848 "unify_proc.m"
          mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_3, &check_hlds__unify_proc__NumStr_32);
        }
#line 1849 "unify_proc.m"
        {
#line 1849 "unify_proc.m"
          mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__NumStr_32, &check_hlds__unify_proc__Name_33);
        }
#line 2091 "unify_proc.m"
        check_hlds__unify_proc__VarSet0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 2091 "unify_proc.m"
        check_hlds__unify_proc__VarTypes0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 2091 "unify_proc.m"
        check_hlds__unify_proc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 2091 "unify_proc.m"
        check_hlds__unify_proc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 2093 "unify_proc.m"
        {
#line 2093 "unify_proc.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_33, &check_hlds__unify_proc__Var_16, check_hlds__unify_proc__VarSet0_41, &check_hlds__unify_proc__VarSet_43);
        }
#line 2094 "unify_proc.m"
        {
#line 2094 "unify_proc.m"
          parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__Var_16, check_hlds__unify_proc__Type_12, check_hlds__unify_proc__VarTypes0_42, &check_hlds__unify_proc__VarTypes_44);
        }
#line 2095 "unify_proc.m"
        check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 2095 "unify_proc.m"
        check_hlds__unify_proc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 2095 "unify_proc.m"
        check_hlds__unify_proc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 2095 "unify_proc.m"
        check_hlds__unify_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
        {
#line 2096 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_43));
#line 2096 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_44));
#line 2096 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (check_hlds__unify_proc__V_55_55));
#line 2096 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 2096 "unify_proc.m"
        }
#line 1860 "unify_proc.m"
        check_hlds__unify_proc__V_22_22 = (check_hlds__unify_proc__Num_3 + (MR_Integer) 1);
#line 1860 "unify_proc.m"
        {
#line 1860 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__Types_13, check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__V_22_22, &check_hlds__unify_proc__Vars_17, check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, check_hlds__unify_proc__STATE_VARIABLE_Info_6);
        }
#line 1858 "unify_proc.m"
        {
#line 1858 "unify_proc.m"
          MR_Word base;
#line 1858 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1858 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__4_4 = base;
#line 1858 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_16));
#line 1858 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Vars_17));
#line 1858 "unify_proc.m"
        }
#line 1858 "unify_proc.m"
      }
#line 1856 "unify_proc.m"
  }
#line 1852 "unify_proc.m"
}

#line 1844 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
#line 1844 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_7,
#line 1844 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_8,
#line 1844 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_9,
#line 1844 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_10,
#line 1844 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1844 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15)
#line 1844 "unify_proc.m"
{
#line 1847 "unify_proc.m"
  {
#line 1847 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1847 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_12;
#line 1847 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_13;
#line 1847 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_23;
#line 1847 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_24;
#line 1847 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_25;
#line 1847 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_26;
#line 1847 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1847 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;

#line 1848 "unify_proc.m"
    {
#line 1848 "unify_proc.m"
      mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_9, &check_hlds__unify_proc__NumStr_12);
    }
#line 1849 "unify_proc.m"
    {
#line 1849 "unify_proc.m"
      mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_8, check_hlds__unify_proc__NumStr_12, &check_hlds__unify_proc__Name_13);
    }
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 2093 "unify_proc.m"
    {
#line 2093 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_13, check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_23, &check_hlds__unify_proc__VarSet_25);
    }
#line 2094 "unify_proc.m"
    {
#line 2094 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_7, check_hlds__unify_proc__VarTypes0_24, &check_hlds__unify_proc__VarTypes_26);
    }
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
    {
#line 2096 "unify_proc.m"
      MR_Word base;
#line 2096 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_Info_15 = base;
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_25));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_26));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_38_38));
#line 2096 "unify_proc.m"
    }
#line 1847 "unify_proc.m"
  }
#line 1844 "unify_proc.m"
}

#line 1815 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialPredId_11,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_12,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstmapDelta_13,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Detism_14,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1815 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1815 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_26,
#line 1815 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_27)
#line 1815 "unify_proc.m"
{
#line 1821 "unify_proc.m"
  {
#line 1821 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1821 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 1834 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredName_19;
#line 1834 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredId_20;
#line 1834 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ProcId_21;

#line 1824 "unify_proc.m"
    {
#line 1824 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__polymorphism__get_special_proc_6_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__SpecialPredId_11, check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__PredName_19, &check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__ProcId_21);
    }
#line 1834 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1828 "unify_proc.m"
      {
#line 1828 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalExpr_22;
#line 1828 "unify_proc.m"
        MR_Word check_hlds__unify_proc__NonLocals_23;
#line 1828 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo0_24;
#line 1828 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo_25;

#line 1827 "unify_proc.m"
        {
#line 1827 "unify_proc.m"
          check_hlds__unify_proc__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_20));
#line 1827 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 1) = ((MR_Box) (check_hlds__unify_proc__ProcId_21));
#line 1827 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_12));
#line 1827 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1827 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1827 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 5) = ((MR_Box) (check_hlds__unify_proc__PredName_19));
#line 1827 "unify_proc.m"
        }
#line 1829 "unify_proc.m"
        {
#line 1829 "unify_proc.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__ArgVars_12, &check_hlds__unify_proc__NonLocals_23);
        }
#line 1830 "unify_proc.m"
        {
#line 1830 "unify_proc.m"
          hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__unify_proc__NonLocals_23, check_hlds__unify_proc__InstmapDelta_13, check_hlds__unify_proc__Detism_14, (MR_Integer) 0, &check_hlds__unify_proc__GoalInfo0_24);
        }
#line 1832 "unify_proc.m"
        {
#line 1832 "unify_proc.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_24, &check_hlds__unify_proc__GoalInfo_25);
        }
#line 1833 "unify_proc.m"
        {
#line 1833 "unify_proc.m"
          MR_Word base;
#line 1833 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1833 "unify_proc.m"
          *check_hlds__unify_proc__Goal_16 = base;
#line 1833 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__GoalExpr_22));
#line 1833 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_25));
#line 1833 "unify_proc.m"
        }
#line 1828 "unify_proc.m"
      }
#line 1834 "unify_proc.m"
    else
#line 1839 "unify_proc.m"
      {
#line 1839 "unify_proc.m"
        {
#line 1839 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.build_specific_call\'/9", (MR_String) "lookup failed");
#line 1839 "unify_proc.m"
          return;
        }
#line 1839 "unify_proc.m"
      }
#line 1839 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_Info_27 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_26;
#line 1821 "unify_proc.m"
  }
#line 1815 "unify_proc.m"
}

#line 1796 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
#line 1796 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 1796 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_8,
#line 1796 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1796 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_10,
#line 1796 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1796 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
#line 1796 "unify_proc.m"
{
#line 1799 "unify_proc.m"
  {
#line 1799 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1799 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1799 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Arity_13;
#line 1799 "unify_proc.m"
    MR_Word check_hlds__unify_proc__MercuryBuiltin_16;
#line 1799 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1806 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_27_27;
#line 1806 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_14_14;
#line 1806 "unify_proc.m"
    MR_String check_hlds__unify_proc__V_15_15;

#line 1801 "unify_proc.m"
    {
#line 1801 "unify_proc.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[1], check_hlds__unify_proc__ArgVars_8, &check_hlds__unify_proc__Arity_13);
    }
#line 1806 "unify_proc.m"
    {
#line 1806 "unify_proc.m"
      check_hlds__unify_proc__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&check_hlds__unify_proc__V_14_14, check_hlds__unify_proc__Name_7, &check_hlds__unify_proc__V_15_15, &check_hlds__unify_proc__V_27_27);
    }
#line 1806 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1806 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Arity_13 == check_hlds__unify_proc__V_27_27);
#line 1808 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1807 "unify_proc.m"
      {
#line 1807 "unify_proc.m"
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
      }
#line 1808 "unify_proc.m"
    else
#line 1809 "unify_proc.m"
      {
#line 1809 "unify_proc.m"
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
      }
#line 1811 "unify_proc.m"
    {
#line 1811 "unify_proc.m"
      check_hlds__unify_proc__V_24_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1811 "unify_proc.m"
    {
#line 1811 "unify_proc.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__unify_proc__MercuryBuiltin_16, check_hlds__unify_proc__Name_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_3[2]), (MR_Integer) 6, (MR_Integer) 0, check_hlds__unify_proc__ArgVars_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__V_24_24, check_hlds__unify_proc__ModuleInfo_12, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Goal_10);
    }
#line 1811 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_17;
#line 1799 "unify_proc.m"
  }
#line 1796 "unify_proc.m"
}

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_1(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1746 "unify_proc.m"
{
#line 1746 "unify_proc.m"
  {
#line 1746 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1746 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0, 1);
#line 1746 "unify_proc.m"
  }
#line 1746 "unify_proc.m"
}

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_3(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1746 "unify_proc.m"
{
#line 1746 "unify_proc.m"
  {
#line 1746 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1746 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71);
#line 1746 "unify_proc.m"
    {
#line 1746 "unify_proc.m"
      check_hlds__unify_proc__compare_args_2_9_p_0_2(check_hlds__unify_proc__env_ptr);
#line 1746 "unify_proc.m"
      return;
    }
#line 1746 "unify_proc.m"
  }
#line 1746 "unify_proc.m"
}

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_4(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1746 "unify_proc.m"
{
#line 1746 "unify_proc.m"
  {
#line 1746 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 5688 "check_hlds.unify_proc.c"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[0];
#line 1747 "unify_proc.m"
    {
#line 1747 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76)));
    }
#line 1747 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1747 "unify_proc.m"
      {
#line 1747 "unify_proc.m"
        check_hlds__unify_proc__compare_args_2_9_p_0_1(check_hlds__unify_proc__env_ptr);
#line 1747 "unify_proc.m"
        return;
      }
#line 1746 "unify_proc.m"
  }
#line 1746 "unify_proc.m"
}

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_2(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1746 "unify_proc.m"
{
#line 1746 "unify_proc.m"
  {
#line 1746 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1747 "unify_proc.m"
    {
#line 1747 "unify_proc.m"
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76, check_hlds__unify_proc__compare_args_2_9_p_0_4, check_hlds__unify_proc__env_ptr);
    }
#line 1746 "unify_proc.m"
  }
#line 1746 "unify_proc.m"
}

#line 1746 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_5(
#line 1746 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1746 "unify_proc.m"
{
#line 1746 "unify_proc.m"
  {
#line 1746 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1746 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0) == 0)
#line 1746 "unify_proc.m"
      {
#line 1746 "unify_proc.m"
        {
#line 1746 "unify_proc.m"
          {
#line 1746 "unify_proc.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__compare_args_2_9_p_0_3, check_hlds__unify_proc__env_ptr);
          }
#line 1746 "unify_proc.m"
        }
#line 1746 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_FALSE;
#line 1746 "unify_proc.m"
      }
#line 1746 "unify_proc.m"
    else
#line 1746 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1746 "unify_proc.m"
  }
#line 1746 "unify_proc.m"
}

#line 1727 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0(
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_5,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_6,
#line 1727 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1727 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1727 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9)
#line 1727 "unify_proc.m"
{
#line 1727 "unify_proc.m"
  {
#line 1727 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s check_hlds__unify_proc__env;

#line 1727 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2 = check_hlds__unify_proc__ExistQTVars_2;
#line 1731 "unify_proc.m"
    while (MR_TRUE)
#line 1731 "unify_proc.m"
      {
#line 1731 "unify_proc.m"
        /* tailcall optimized into a loop */
#line 1731 "unify_proc.m"
        if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1731 "unify_proc.m"
          {
#line 1731 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Goal0_81;
#line 1731 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_82_82;
#line 1731 "unify_proc.m"
            MR_String check_hlds__unify_proc__V_83_83;
#line 1731 "unify_proc.m"
            MR_Word check_hlds__unify_proc__SymName_85;
#line 1731 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__V_86_86;
#line 1731 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_87_87;
#line 1731 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_88_88;
#line 1731 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Builtin_90;
#line 1731 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_91_91;
#line 1731 "unify_proc.m"
            MR_String check_hlds__unify_proc__V_92_92;
#line 1731 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__V_93_93;

#line 1731 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1731 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1731 "unify_proc.m"
              {
#line 1731 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1731 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1731 "unify_proc.m"
                  {
#line 1791 "unify_proc.m"
                    check_hlds__unify_proc__V_83_83 = (MR_String) "=";
#line 2034 "unify_proc.m"
                    check_hlds__unify_proc__V_86_86 = (MR_Integer) 0;
#line 2029 "unify_proc.m"
                    {
#line 2029 "unify_proc.m"
                      check_hlds__unify_proc__Builtin_90 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                    }
#line 2030 "unify_proc.m"
                    check_hlds__unify_proc__V_92_92 = (MR_String) "comparison_result";
#line 2030 "unify_proc.m"
                    check_hlds__unify_proc__V_93_93 = (MR_Integer) 0;
#line 2030 "unify_proc.m"
                    {
#line 2030 "unify_proc.m"
                      check_hlds__unify_proc__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_91_91, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_90));
#line 2030 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_91_91, 1) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
#line 2030 "unify_proc.m"
                    }
#line 2030 "unify_proc.m"
                    {
#line 2030 "unify_proc.m"
                      check_hlds__unify_proc__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "unify_proc.m"
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_87_87, 0) = ((MR_Box) (check_hlds__unify_proc__V_91_91));
#line 2030 "unify_proc.m"
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_87_87, 1) = ((MR_Box) (check_hlds__unify_proc__V_93_93));
#line 2030 "unify_proc.m"
                    }
#line 2035 "unify_proc.m"
                    {
#line 2035 "unify_proc.m"
                      check_hlds__unify_proc__V_88_88 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                    }
#line 2035 "unify_proc.m"
                    {
#line 2035 "unify_proc.m"
                      check_hlds__unify_proc__SymName_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 0) = ((MR_Box) (check_hlds__unify_proc__V_88_88));
#line 2035 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 1) = ((MR_Box) (check_hlds__unify_proc__V_83_83));
#line 2035 "unify_proc.m"
                    }
#line 2034 "unify_proc.m"
                    {
#line 2034 "unify_proc.m"
                      check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2034 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_85));
#line 2034 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 2) = ((MR_Box) (check_hlds__unify_proc__V_86_86));
#line 2034 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 3) = ((MR_Box) (check_hlds__unify_proc__V_87_87));
#line 2034 "unify_proc.m"
                    }
#line 1791 "unify_proc.m"
                    {
#line 1791 "unify_proc.m"
                      hlds__hlds_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_5, check_hlds__unify_proc__V_82_82, &check_hlds__unify_proc__Goal0_81);
                    }
#line 1792 "unify_proc.m"
                    {
#line 1792 "unify_proc.m"
                      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_6, check_hlds__unify_proc__Goal0_81, check_hlds__unify_proc__HeadVar__7_7);
                    }
#line 1731 "unify_proc.m"
                    *check_hlds__unify_proc__STATE_VARIABLE_Info_9 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_8;
#line 1731 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1731 "unify_proc.m"
                  }
#line 1731 "unify_proc.m"
              }
#line 1731 "unify_proc.m"
          }
#line 1731 "unify_proc.m"
        else
#line 1734 "unify_proc.m"
          {
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Arg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__X_20;
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Xs_21;
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Y_22;
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Ys_23;
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo0_28;
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_29;
#line 1734 "unify_proc.m"
            MR_String check_hlds__unify_proc__ComparePred_32;
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ModuleInfo_33;
#line 1734 "unify_proc.m"
            MR_Word check_hlds__unify_proc__IsDummy_34;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_72_72;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_73_73;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_74_74;
#line 2103 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_95_95;
#line 2103 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_96_96;
#line 2103 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_97_97;

#line 1734 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1734 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1734 "unify_proc.m"
              {
#line 1734 "unify_proc.m"
                check_hlds__unify_proc__X_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1734 "unify_proc.m"
                check_hlds__unify_proc__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1734 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1734 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1734 "unify_proc.m"
                  {
#line 1734 "unify_proc.m"
                    check_hlds__unify_proc__Y_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 0)));
#line 1734 "unify_proc.m"
                    check_hlds__unify_proc__Ys_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 1)));
#line 1735 "unify_proc.m"
                    {
#line 1735 "unify_proc.m"
                      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_28);
                    }
#line 1736 "unify_proc.m"
                    {
#line 1736 "unify_proc.m"
                      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_6, check_hlds__unify_proc__GoalInfo0_28, &check_hlds__unify_proc__GoalInfo_29);
                    }
#line 1738 "unify_proc.m"
                    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 0)));
#line 1738 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 1)));
#line 1738 "unify_proc.m"
                    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 2)));
#line 1738 "unify_proc.m"
                    check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 3)));
#line 1746 "unify_proc.m"
                    {
#line 1746 "unify_proc.m"
                      check_hlds__unify_proc__compare_args_2_9_p_0_5(&check_hlds__unify_proc__env);
                    }
#line 1751 "unify_proc.m"
                    if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1750 "unify_proc.m"
                      check_hlds__unify_proc__ComparePred_32 = (MR_String) "typed_compare";
#line 1751 "unify_proc.m"
                    else
#line 1752 "unify_proc.m"
                      check_hlds__unify_proc__ComparePred_32 = (MR_String) "compare";
#line 2103 "unify_proc.m"
                    check_hlds__unify_proc__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
                    check_hlds__unify_proc__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
                    check_hlds__unify_proc__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 2103 "unify_proc.m"
                    check_hlds__unify_proc__ModuleInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1755 "unify_proc.m"
                    {
#line 1755 "unify_proc.m"
                      check_hlds__unify_proc__IsDummy_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_33, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30);
                    }
#line 1760 "unify_proc.m"
                    if ((check_hlds__unify_proc__IsDummy_34 == (MR_Integer) 0))
#line 1759 "unify_proc.m"
                      {
#line 1759 "unify_proc.m"
                        /* direct tailcall eliminated */
#line 1759 "unify_proc.m"
                        {
#line 1759 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__HeadVar__1__tmp_copy_1 = check_hlds__unify_proc__ArgTypes_18;
#line 1759 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__HeadVar__3__tmp_copy_3 = check_hlds__unify_proc__Xs_21;
#line 1759 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__HeadVar__4__tmp_copy_4 = check_hlds__unify_proc__Ys_23;

#line 1759 "unify_proc.m"
                          check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__HeadVar__4__tmp_copy_4;
#line 1759 "unify_proc.m"
                          check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__HeadVar__3__tmp_copy_3;
#line 1759 "unify_proc.m"
                          check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__HeadVar__1__tmp_copy_1;
#line 1759 "unify_proc.m"
                        }
#line 1759 "unify_proc.m"
                        continue;
#line 1759 "unify_proc.m"
                      }
#line 1760 "unify_proc.m"
                    else
#line 1767 "unify_proc.m"
                      {
#line 1763 "unify_proc.m"
                        (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__Xs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1763 "unify_proc.m"
                        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1764 "unify_proc.m"
                          (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__Ys_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1767 "unify_proc.m"
                        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1766 "unify_proc.m"
                          {
#line 1766 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_44_44;
#line 1766 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_46_46;

#line 1766 "unify_proc.m"
                            {
#line 1766 "unify_proc.m"
                              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1766 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_20));
#line 1766 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__HeadVar__4_4));
#line 1766 "unify_proc.m"
                            }
#line 1766 "unify_proc.m"
                            {
#line 1766 "unify_proc.m"
                              check_hlds__unify_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1766 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 0) = ((MR_Box) (check_hlds__unify_proc__R_5));
#line 1766 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1766 "unify_proc.m"
                            }
#line 1766 "unify_proc.m"
                            {
#line 1766 "unify_proc.m"
                              check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_32, check_hlds__unify_proc__V_44_44, check_hlds__unify_proc__Context_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
                            }
#line 1766 "unify_proc.m"
                            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1766 "unify_proc.m"
                          }
#line 1767 "unify_proc.m"
                        else
#line 1768 "unify_proc.m"
                          {
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__R1_35;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Do_Comparison_36;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Check_Equal_37;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Check_Not_Equal_38;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Return_R1_39;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Condition_40;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__ElseCase_41;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_49_49;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_50_50;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_51_51;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_52_52;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_53_53;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_54_54;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_56_56;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_58_58;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_59_59;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_62_62;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_64_64;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_65_65;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_68_68;
#line 1768 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_69_69;

#line 1768 "unify_proc.m"
                            {
#line 1768 "unify_proc.m"
                              check_hlds__unify_proc__V_49_49 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                            }
#line 1768 "unify_proc.m"
                            {
#line 1768 "unify_proc.m"
                              check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_49_49, &check_hlds__unify_proc__R1_35, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
                            }
#line 1769 "unify_proc.m"
                            {
#line 1769 "unify_proc.m"
                              check_hlds__unify_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (check_hlds__unify_proc__Y_22));
#line 1769 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1769 "unify_proc.m"
                            }
#line 1769 "unify_proc.m"
                            {
#line 1769 "unify_proc.m"
                              check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__X_20));
#line 1769 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_54_54));
#line 1769 "unify_proc.m"
                            }
#line 1769 "unify_proc.m"
                            {
#line 1769 "unify_proc.m"
                              check_hlds__unify_proc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1769 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 0) = ((MR_Box) (check_hlds__unify_proc__R1_35));
#line 1769 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 1) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1769 "unify_proc.m"
                            }
#line 1769 "unify_proc.m"
                            {
#line 1769 "unify_proc.m"
                              check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_32, check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__Context_6, &check_hlds__unify_proc__Do_Comparison_36, check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, &check_hlds__unify_proc__STATE_VARIABLE_Info_52_52);
                            }
#line 1771 "unify_proc.m"
                            {
#line 1771 "unify_proc.m"
                              check_hlds__unify_proc__V_56_56 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "=");
                            }
#line 1771 "unify_proc.m"
                            {
#line 1771 "unify_proc.m"
                              hlds__hlds_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R1_35, check_hlds__unify_proc__V_56_56, &check_hlds__unify_proc__Check_Equal_37);
                            }
#line 1772 "unify_proc.m"
                            check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__unify_proc__Check_Equal_37);
#line 1772 "unify_proc.m"
                            {
#line 1772 "unify_proc.m"
                              check_hlds__unify_proc__Check_Not_Equal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1772 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Check_Not_Equal_38, 0) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 1772 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Check_Not_Equal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1772 "unify_proc.m"
                            }
#line 1774 "unify_proc.m"
                            {
#line 1774 "unify_proc.m"
                              check_hlds__unify_proc__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1774 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__R1_35));
#line 1774 "unify_proc.m"
                            }
#line 1774 "unify_proc.m"
                            {
#line 1774 "unify_proc.m"
                              hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__R_5, check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R1_39);
                            }
#line 1777 "unify_proc.m"
                            {
#line 1777 "unify_proc.m"
                              check_hlds__unify_proc__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 0) = ((MR_Box) (check_hlds__unify_proc__Check_Not_Equal_38));
#line 1777 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1777 "unify_proc.m"
                            }
#line 1777 "unify_proc.m"
                            {
#line 1777 "unify_proc.m"
                              check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__Do_Comparison_36));
#line 1777 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 1777 "unify_proc.m"
                            }
#line 1776 "unify_proc.m"
                            {
#line 1776 "unify_proc.m"
                              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1776 "unify_proc.m"
                              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1776 "unify_proc.m"
                              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1776 "unify_proc.m"
                              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 2) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1776 "unify_proc.m"
                            }
#line 1776 "unify_proc.m"
                            {
#line 1776 "unify_proc.m"
                              check_hlds__unify_proc__Condition_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1776 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_40, 0) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 1776 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_40, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1776 "unify_proc.m"
                            }
#line 1779 "unify_proc.m"
                            {
#line 1779 "unify_proc.m"
                              (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = check_hlds__unify_proc__compare_args_2_9_p_0(check_hlds__unify_proc__ArgTypes_18, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__Xs_21, check_hlds__unify_proc__Ys_23, check_hlds__unify_proc__R_5, check_hlds__unify_proc__Context_6, &check_hlds__unify_proc__ElseCase_41, check_hlds__unify_proc__STATE_VARIABLE_Info_52_52, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
                            }
#line 1768 "unify_proc.m"
                            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1768 "unify_proc.m"
                              {
#line 1782 "unify_proc.m"
                                check_hlds__unify_proc__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1781 "unify_proc.m"
                                {
#line 1781 "unify_proc.m"
                                  check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1781 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (check_hlds__unify_proc__V_69_69));
#line 1781 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 2) = ((MR_Box) (check_hlds__unify_proc__Condition_40));
#line 1781 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R1_39));
#line 1781 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 4) = ((MR_Box) (check_hlds__unify_proc__ElseCase_41));
#line 1781 "unify_proc.m"
                                }
#line 1781 "unify_proc.m"
                                {
#line 1781 "unify_proc.m"
                                  MR_Word base;
#line 1781 "unify_proc.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1781 "unify_proc.m"
                                  *check_hlds__unify_proc__HeadVar__7_7 = base;
#line 1781 "unify_proc.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
#line 1781 "unify_proc.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1781 "unify_proc.m"
                                }
#line 1781 "unify_proc.m"
                                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1768 "unify_proc.m"
                              }
#line 1768 "unify_proc.m"
                          }
#line 1767 "unify_proc.m"
                      }
#line 1734 "unify_proc.m"
                  }
#line 1734 "unify_proc.m"
              }
#line 1734 "unify_proc.m"
          }
#line 1731 "unify_proc.m"
        return (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded;
#line 1731 "unify_proc.m"
        break;
#line 1731 "unify_proc.m"
      }
#line 1727 "unify_proc.m"
  }
#line 1727 "unify_proc.m"
}

#line 1714 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_9_p_0(
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgTypes_10,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_11,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Xs_12,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ys_13,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_14,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1714 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_19,
#line 1714 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_20)
#line 1714 "unify_proc.m"
{
#line 1723 "unify_proc.m"
  {
#line 1723 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1723 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_18;
#line 1723 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;

#line 1720 "unify_proc.m"
    {
#line 1720 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__compare_args_2_9_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__ExistQTVars_11, check_hlds__unify_proc__Xs_12, check_hlds__unify_proc__Ys_13, check_hlds__unify_proc__R_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Goal0_18, check_hlds__unify_proc__STATE_VARIABLE_Info_0_19, &check_hlds__unify_proc__STATE_VARIABLE_Info_21_21);
    }
#line 1723 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1722 "unify_proc.m"
      {
#line 1722 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_20 = check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;
#line 1722 "unify_proc.m"
        *check_hlds__unify_proc__Goal_16 = check_hlds__unify_proc__Goal0_18;
#line 1722 "unify_proc.m"
      }
#line 1723 "unify_proc.m"
    else
#line 1724 "unify_proc.m"
      {
#line 1724 "unify_proc.m"
        {
#line 1724 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.compare_args\'/9", (MR_String) "length mismatch");
#line 1724 "unify_proc.m"
          return;
        }
#line 1724 "unify_proc.m"
      }
#line 1723 "unify_proc.m"
  }
#line 1714 "unify_proc.m"
}

#line 1663 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_12,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor1_13,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor2_14,
#line 1663 "unify_proc.m"
  MR_String check_hlds__unify_proc__CompareOp_15,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_16,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_17,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_18,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_19,
#line 1663 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_20,
#line 1663 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_46,
#line 1663 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_47)
#line 1663 "unify_proc.m"
{
#line 1669 "unify_proc.m"
  {
#line 1669 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 0)));
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 2)));
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 3)));
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 0)));
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 2)));
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 3)));
#line 1669 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity1_32;
#line 1669 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity2_33;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId1_34;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId2_35;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Vars1_36;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Vars2_37;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RHS1_38;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RHS2_39;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyX_Goal_40;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyY_Goal_41;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ReturnResult_42;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_43;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_44;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_45;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_48_48;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_56_56;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_57_57;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_58_58;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_62;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_64_64;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_65_65;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_67;
#line 1669 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68;
#line 1670 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 1)));
#line 1670 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 4)));
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 1)));
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 4)));

#line 1672 "unify_proc.m"
    {
#line 1672 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_60_60, check_hlds__unify_proc__ArgTypes1_25, &check_hlds__unify_proc__FunctorArity1_32);
    }
#line 1673 "unify_proc.m"
    {
#line 1673 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_60_60, check_hlds__unify_proc__ArgTypes2_30, &check_hlds__unify_proc__FunctorArity2_33);
    }
#line 1674 "unify_proc.m"
    {
#line 1674 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId1_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1674 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_34, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName1_24));
#line 1674 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_34, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity1_32));
#line 1674 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_34, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
#line 1674 "unify_proc.m"
    }
#line 1675 "unify_proc.m"
    {
#line 1675 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId2_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1675 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1675 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_35, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName2_29));
#line 1675 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_35, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity2_33));
#line 1675 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_35, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
#line 1675 "unify_proc.m"
    }
#line 1676 "unify_proc.m"
    {
#line 1676 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes1_25, check_hlds__unify_proc__ExistQTVars1_22, &check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_46, &check_hlds__unify_proc__STATE_VARIABLE_Info_48_48);
    }
#line 1677 "unify_proc.m"
    {
#line 1677 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes2_30, check_hlds__unify_proc__ExistQTVars2_27, &check_hlds__unify_proc__Vars2_37, check_hlds__unify_proc__STATE_VARIABLE_Info_48_48, check_hlds__unify_proc__STATE_VARIABLE_Info_47);
    }
#line 1678 "unify_proc.m"
    {
#line 1678 "unify_proc.m"
      check_hlds__unify_proc__RHS1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1678 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId1_34));
#line 1678 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1678 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_36));
#line 1678 "unify_proc.m"
    }
#line 1679 "unify_proc.m"
    {
#line 1679 "unify_proc.m"
      check_hlds__unify_proc__RHS2_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1679 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId2_35));
#line 1679 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1679 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_37));
#line 1679 "unify_proc.m"
    }
#line 1680 "unify_proc.m"
    {
#line 1680 "unify_proc.m"
      hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_17, check_hlds__unify_proc__RHS1_38, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_40);
    }
#line 1682 "unify_proc.m"
    {
#line 1682 "unify_proc.m"
      hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_18, check_hlds__unify_proc__RHS2_39, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_41);
    }
#line 2029 "unify_proc.m"
    {
#line 2029 "unify_proc.m"
      check_hlds__unify_proc__Builtin_67 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 2030 "unify_proc.m"
    {
#line 2030 "unify_proc.m"
      check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_67));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2030 "unify_proc.m"
    }
#line 2030 "unify_proc.m"
    {
#line 2030 "unify_proc.m"
      check_hlds__unify_proc__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2030 "unify_proc.m"
    }
#line 2035 "unify_proc.m"
    {
#line 2035 "unify_proc.m"
      check_hlds__unify_proc__V_65_65 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 2035 "unify_proc.m"
    {
#line 2035 "unify_proc.m"
      check_hlds__unify_proc__SymName_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_62, 0) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 2035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_62, 1) = ((MR_Box) (check_hlds__unify_proc__CompareOp_15));
#line 2035 "unify_proc.m"
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_62));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 3) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 2034 "unify_proc.m"
    }
#line 1684 "unify_proc.m"
    {
#line 1684 "unify_proc.m"
      hlds__hlds_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_16, check_hlds__unify_proc__V_56_56, &check_hlds__unify_proc__ReturnResult_42);
    }
#line 1685 "unify_proc.m"
    {
#line 1685 "unify_proc.m"
      check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1685 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__ReturnResult_42));
#line 1685 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1685 "unify_proc.m"
    }
#line 1685 "unify_proc.m"
    {
#line 1685 "unify_proc.m"
      check_hlds__unify_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1685 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_57_57, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_41));
#line 1685 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_57_57, 1) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 1685 "unify_proc.m"
    }
#line 1685 "unify_proc.m"
    {
#line 1685 "unify_proc.m"
      check_hlds__unify_proc__GoalList_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1685 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_43, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_40));
#line 1685 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_57_57));
#line 1685 "unify_proc.m"
    }
#line 1686 "unify_proc.m"
    {
#line 1686 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_44);
    }
#line 1687 "unify_proc.m"
    {
#line 1687 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_19, check_hlds__unify_proc__GoalInfo0_44, &check_hlds__unify_proc__GoalInfo_45);
    }
#line 1688 "unify_proc.m"
    {
#line 1688 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_43, check_hlds__unify_proc__GoalInfo_45, check_hlds__unify_proc__Case_20);
#line 1688 "unify_proc.m"
      return;
    }
#line 1669 "unify_proc.m"
  }
#line 1663 "unify_proc.m"
}

#line 1619 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_12,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_13,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_14,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_15,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_16,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Kind_17,
#line 1619 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_18,
#line 1619 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 1619 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42)
#line 1619 "unify_proc.m"
{
#line 1623 "unify_proc.m"
  {
#line 1623 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1623 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 0)));
#line 1623 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 2)));
#line 1623 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 3)));
#line 1623 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_25;
#line 1623 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_26;
#line 1623 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_30;
#line 1623 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_39;
#line 1623 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_40;
#line 1624 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 1)));
#line 1624 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 4)));

#line 1625 "unify_proc.m"
    {
#line 1625 "unify_proc.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__ArgTypes_23, &check_hlds__unify_proc__FunctorArity_25);
    }
#line 1626 "unify_proc.m"
    {
#line 1626 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1626 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_22));
#line 1626 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_25));
#line 1626 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_11));
#line 1626 "unify_proc.m"
    }
#line 1645 "unify_proc.m"
    if ((check_hlds__unify_proc__ArgTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1628 "unify_proc.m"
      {
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS_27;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_28;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualGoal_29;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_72;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_73_73;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__SymName_76;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_78_78;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_79_79;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Builtin_81;
#line 1628 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_82_82;

#line 1629 "unify_proc.m"
        {
#line 1629 "unify_proc.m"
          check_hlds__unify_proc__RHS_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1629 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1629 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1629 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1629 "unify_proc.m"
        }
#line 1630 "unify_proc.m"
        {
#line 1630 "unify_proc.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_28);
        }
#line 2029 "unify_proc.m"
        {
#line 2029 "unify_proc.m"
          check_hlds__unify_proc__Builtin_81 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
        }
#line 2030 "unify_proc.m"
        {
#line 2030 "unify_proc.m"
          check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_81));
#line 2030 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2030 "unify_proc.m"
        }
#line 2030 "unify_proc.m"
        {
#line 2030 "unify_proc.m"
          check_hlds__unify_proc__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_78_78, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
#line 2030 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_78_78, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2030 "unify_proc.m"
        }
#line 2035 "unify_proc.m"
        {
#line 2035 "unify_proc.m"
          check_hlds__unify_proc__V_79_79 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
        }
#line 2035 "unify_proc.m"
        {
#line 2035 "unify_proc.m"
          check_hlds__unify_proc__SymName_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_76, 0) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2035 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_76, 1) = ((MR_Box) ((MR_String) "="));
#line 2035 "unify_proc.m"
        }
#line 2034 "unify_proc.m"
        {
#line 2034 "unify_proc.m"
          check_hlds__unify_proc__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2034 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_73_73, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_76));
#line 2034 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_73_73, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_73_73, 3) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 2034 "unify_proc.m"
        }
#line 1791 "unify_proc.m"
        {
#line 1791 "unify_proc.m"
          hlds__hlds_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_13, check_hlds__unify_proc__V_73_73, &check_hlds__unify_proc__Goal0_72);
        }
#line 1792 "unify_proc.m"
        {
#line 1792 "unify_proc.m"
          hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__Goal0_72, &check_hlds__unify_proc__EqualGoal_29);
        }
#line 1639 "unify_proc.m"
        if ((check_hlds__unify_proc__Kind_17 == (MR_Integer) 0))
#line 1634 "unify_proc.m"
          {
#line 1634 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_64_64;

#line 1638 "unify_proc.m"
            {
#line 1638 "unify_proc.m"
              check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1638 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
#line 1638 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1638 "unify_proc.m"
            }
#line 1638 "unify_proc.m"
            {
#line 1638 "unify_proc.m"
              check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1638 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
#line 1638 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1638 "unify_proc.m"
            }
#line 1634 "unify_proc.m"
          }
#line 1639 "unify_proc.m"
        else
#line 1640 "unify_proc.m"
          {
#line 1640 "unify_proc.m"
            MR_Word check_hlds__unify_proc__UnifyY_Goal_31;
#line 1640 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_61_61;
#line 1640 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_62_62;

#line 1641 "unify_proc.m"
            {
#line 1641 "unify_proc.m"
              hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_31);
            }
#line 1643 "unify_proc.m"
            {
#line 1643 "unify_proc.m"
              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
#line 1643 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1643 "unify_proc.m"
            }
#line 1643 "unify_proc.m"
            {
#line 1643 "unify_proc.m"
              check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_31));
#line 1643 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 1) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 1643 "unify_proc.m"
            }
#line 1643 "unify_proc.m"
            {
#line 1643 "unify_proc.m"
              check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
#line 1643 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_61_61));
#line 1643 "unify_proc.m"
            }
#line 1640 "unify_proc.m"
          }
#line 1643 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_42 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_41;
#line 1628 "unify_proc.m"
      }
#line 1645 "unify_proc.m"
    else
#line 1646 "unify_proc.m"
      {
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars1_34;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars2_35;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS1_36;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS2_37;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CompareArgs_Goal_38;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_52_52;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_66;
#line 1646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_67;

#line 1647 "unify_proc.m"
        {
#line 1647 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, &check_hlds__unify_proc__Vars1_34, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
        }
#line 1648 "unify_proc.m"
        {
#line 1648 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, &check_hlds__unify_proc__Vars2_35, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
        }
#line 1649 "unify_proc.m"
        {
#line 1649 "unify_proc.m"
          check_hlds__unify_proc__RHS1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1649 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1649 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1649 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_34));
#line 1649 "unify_proc.m"
        }
#line 1650 "unify_proc.m"
        {
#line 1650 "unify_proc.m"
          check_hlds__unify_proc__RHS2_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1650 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1650 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1650 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_35));
#line 1650 "unify_proc.m"
        }
#line 1651 "unify_proc.m"
        {
#line 1651 "unify_proc.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHS1_36, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_66);
        }
#line 1653 "unify_proc.m"
        {
#line 1653 "unify_proc.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS2_37, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_67);
        }
#line 1655 "unify_proc.m"
        {
#line 1655 "unify_proc.m"
          check_hlds__unify_proc__compare_args_9_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, check_hlds__unify_proc__Vars1_34, check_hlds__unify_proc__Vars2_35, check_hlds__unify_proc__R_13, check_hlds__unify_proc__Context_16, &check_hlds__unify_proc__CompareArgs_Goal_38, check_hlds__unify_proc__STATE_VARIABLE_Info_44_44, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
        }
#line 1657 "unify_proc.m"
        {
#line 1657 "unify_proc.m"
          check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1657 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__CompareArgs_Goal_38));
#line 1657 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1657 "unify_proc.m"
        }
#line 1657 "unify_proc.m"
        {
#line 1657 "unify_proc.m"
          check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1657 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_67));
#line 1657 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1657 "unify_proc.m"
        }
#line 1657 "unify_proc.m"
        {
#line 1657 "unify_proc.m"
          check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1657 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_66));
#line 1657 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_52_52));
#line 1657 "unify_proc.m"
        }
#line 1646 "unify_proc.m"
      }
#line 1659 "unify_proc.m"
    {
#line 1659 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_39);
    }
#line 1660 "unify_proc.m"
    {
#line 1660 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__GoalInfo0_39, &check_hlds__unify_proc__GoalInfo_40);
    }
#line 1661 "unify_proc.m"
    {
#line 1661 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_30, check_hlds__unify_proc__GoalInfo_40, check_hlds__unify_proc__Case_18);
#line 1661 "unify_proc.m"
      return;
    }
#line 1623 "unify_proc.m"
  }
#line 1619 "unify_proc.m"
}

#line 1604 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1604 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1604 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1604 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9)
#line 1604 "unify_proc.m"
{
#line 1608 "unify_proc.m"
  {
#line 1608 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1608 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1608 "unify_proc.m"
      {
#line 1608 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1608 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_9 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_8;
#line 1608 "unify_proc.m"
      }
#line 1608 "unify_proc.m"
    else
#line 1610 "unify_proc.m"
      {
#line 1610 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 1610 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 1610 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Case_25;
#line 1610 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Cases_26;
#line 1610 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;

#line 1611 "unify_proc.m"
        {
#line 1611 "unify_proc.m"
          check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Ctor_19, check_hlds__unify_proc__HeadVar__3_3, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, (MR_Integer) 0, &check_hlds__unify_proc__Case_25, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
        }
#line 1613 "unify_proc.m"
        {
#line 1613 "unify_proc.m"
          check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__HeadVar__3_3, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, &check_hlds__unify_proc__Cases_26, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
        }
#line 1610 "unify_proc.m"
        {
#line 1610 "unify_proc.m"
          MR_Word base;
#line 1610 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__7_7 = base;
#line 1610 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Case_25));
#line 1610 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_26));
#line 1610 "unify_proc.m"
        }
#line 1610 "unify_proc.m"
      }
#line 1608 "unify_proc.m"
  }
#line 1604 "unify_proc.m"
}

#line 1517 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_11,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1517 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1517 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 1517 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
#line 1517 "unify_proc.m"
{
#line 1523 "unify_proc.m"
  {
#line 1523 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__IntType_18;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__X_Index_19;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Y_Index_20;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__R_21;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_22;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_23;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__X_InstmapDelta_24;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_X_Index_25;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Y_InstmapDelta_26;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Y_Index_27;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Less_Than_28;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Greater_Than_29;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_Less_Than_30;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_Greater_Than_31;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_R_32;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_33;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cases_34;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CasesGoal_35;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Abort_36;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleEqualGoal_37;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleGreaterEqualGoal_38;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleLessGreaterEqualGoal_39;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_42_42;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_49_49;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_50_50;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_53_53;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_55_55;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_56_56;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_59_59;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_60_60;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_65_65;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_70_70;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_75_75;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_76_76;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_80_80;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_82_82;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_84_84;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_86_86;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_88_88;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_89_89;
#line 1523 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_90_90;

#line 1524 "unify_proc.m"
    {
#line 1524 "unify_proc.m"
      check_hlds__unify_proc__IntType_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1525 "unify_proc.m"
    {
#line 1525 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__IntType_18, &check_hlds__unify_proc__X_Index_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, &check_hlds__unify_proc__STATE_VARIABLE_Info_42_42);
    }
#line 1526 "unify_proc.m"
    {
#line 1526 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__IntType_18, &check_hlds__unify_proc__Y_Index_20, check_hlds__unify_proc__STATE_VARIABLE_Info_42_42, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
    }
#line 1527 "unify_proc.m"
    {
#line 1527 "unify_proc.m"
      check_hlds__unify_proc__V_44_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
#line 1527 "unify_proc.m"
    {
#line 1527 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_44_44, &check_hlds__unify_proc__R_21, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
    }
#line 1529 "unify_proc.m"
    {
#line 1529 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_22);
    }
#line 1530 "unify_proc.m"
    {
#line 1530 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_22, &check_hlds__unify_proc__GoalInfo_23);
    }
#line 1532 "unify_proc.m"
    {
#line 1532 "unify_proc.m"
      check_hlds__unify_proc__X_InstmapDelta_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__X_Index_19);
    }
#line 1533 "unify_proc.m"
    {
#line 1533 "unify_proc.m"
      check_hlds__unify_proc__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_50_50, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
#line 1533 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1533 "unify_proc.m"
    }
#line 1533 "unify_proc.m"
    {
#line 1533 "unify_proc.m"
      check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1533 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_50_50));
#line 1533 "unify_proc.m"
    }
#line 1533 "unify_proc.m"
    {
#line 1533 "unify_proc.m"
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__V_47_47, check_hlds__unify_proc__X_InstmapDelta_24, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_X_Index_25, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_49_49);
    }
#line 1535 "unify_proc.m"
    {
#line 1535 "unify_proc.m"
      check_hlds__unify_proc__Y_InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__Y_Index_20);
    }
#line 1536 "unify_proc.m"
    {
#line 1536 "unify_proc.m"
      check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Index_20));
#line 1536 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "unify_proc.m"
    }
#line 1536 "unify_proc.m"
    {
#line 1536 "unify_proc.m"
      check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1536 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 1536 "unify_proc.m"
    }
#line 1536 "unify_proc.m"
    {
#line 1536 "unify_proc.m"
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__V_53_53, check_hlds__unify_proc__Y_InstmapDelta_26, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Y_Index_27, check_hlds__unify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__unify_proc__STATE_VARIABLE_Info_55_55);
    }
#line 1539 "unify_proc.m"
    {
#line 1539 "unify_proc.m"
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
#line 1539 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 1539 "unify_proc.m"
    }
#line 1539 "unify_proc.m"
    {
#line 1539 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_lt", check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Less_Than_28, check_hlds__unify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__unify_proc__STATE_VARIABLE_Info_60_60);
    }
#line 1541 "unify_proc.m"
    {
#line 1541 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_gt", check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Greater_Than_29, check_hlds__unify_proc__STATE_VARIABLE_Info_60_60, &check_hlds__unify_proc__STATE_VARIABLE_Info_65_65);
    }
#line 1544 "unify_proc.m"
    {
#line 1544 "unify_proc.m"
      check_hlds__unify_proc__V_68_68 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
    }
#line 1544 "unify_proc.m"
    {
#line 1544 "unify_proc.m"
      hlds__hlds_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_68_68, &check_hlds__unify_proc__Return_Less_Than_30);
    }
#line 1545 "unify_proc.m"
    {
#line 1545 "unify_proc.m"
      check_hlds__unify_proc__V_70_70 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
    }
#line 1545 "unify_proc.m"
    {
#line 1545 "unify_proc.m"
      hlds__hlds_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_70_70, &check_hlds__unify_proc__Return_Greater_Than_31);
    }
#line 1547 "unify_proc.m"
    {
#line 1547 "unify_proc.m"
      check_hlds__unify_proc__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1547 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__R_21));
#line 1547 "unify_proc.m"
    }
#line 1547 "unify_proc.m"
    {
#line 1547 "unify_proc.m"
      hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R_32);
    }
#line 1550 "unify_proc.m"
    {
#line 1550 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_33);
    }
#line 1551 "unify_proc.m"
    {
#line 1551 "unify_proc.m"
      check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__TypeCtor_33, check_hlds__unify_proc__Ctors_11, check_hlds__unify_proc__R_21, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Cases_34, check_hlds__unify_proc__STATE_VARIABLE_Info_65_65, &check_hlds__unify_proc__STATE_VARIABLE_Info_75_75);
    }
#line 1552 "unify_proc.m"
    {
#line 1552 "unify_proc.m"
      check_hlds__unify_proc__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1552 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_76_76, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_34));
#line 1552 "unify_proc.m"
    }
#line 1552 "unify_proc.m"
    {
#line 1552 "unify_proc.m"
      check_hlds__unify_proc__CasesGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1552 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 0) = ((MR_Box) (check_hlds__unify_proc__V_76_76));
#line 1552 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1552 "unify_proc.m"
    }
#line 1554 "unify_proc.m"
    {
#line 1554 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare_error", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Abort_36, check_hlds__unify_proc__STATE_VARIABLE_Info_75_75, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
    }
#line 1557 "unify_proc.m"
    {
#line 1557 "unify_proc.m"
      check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1557 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1557 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 2) = ((MR_Box) (check_hlds__unify_proc__CasesGoal_35));
#line 1557 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R_32));
#line 1557 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 4) = ((MR_Box) (check_hlds__unify_proc__Abort_36));
#line 1557 "unify_proc.m"
    }
#line 1556 "unify_proc.m"
    {
#line 1556 "unify_proc.m"
      check_hlds__unify_proc__HandleEqualGoal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1556 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 0) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 1556 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1556 "unify_proc.m"
    }
#line 1561 "unify_proc.m"
    {
#line 1561 "unify_proc.m"
      check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1561 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1561 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Greater_Than_29));
#line 1561 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Greater_Than_31));
#line 1561 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 4) = ((MR_Box) (check_hlds__unify_proc__HandleEqualGoal_37));
#line 1561 "unify_proc.m"
    }
#line 1560 "unify_proc.m"
    {
#line 1560 "unify_proc.m"
      check_hlds__unify_proc__HandleGreaterEqualGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
#line 1560 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1560 "unify_proc.m"
    }
#line 1566 "unify_proc.m"
    {
#line 1566 "unify_proc.m"
      check_hlds__unify_proc__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1566 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1566 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1566 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Less_Than_28));
#line 1566 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Less_Than_30));
#line 1566 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 4) = ((MR_Box) (check_hlds__unify_proc__HandleGreaterEqualGoal_38));
#line 1566 "unify_proc.m"
    }
#line 1565 "unify_proc.m"
    {
#line 1565 "unify_proc.m"
      check_hlds__unify_proc__HandleLessGreaterEqualGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1565 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 0) = ((MR_Box) (check_hlds__unify_proc__V_84_84));
#line 1565 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1565 "unify_proc.m"
    }
#line 1573 "unify_proc.m"
    {
#line 1573 "unify_proc.m"
      check_hlds__unify_proc__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_90_90, 0) = ((MR_Box) (check_hlds__unify_proc__HandleLessGreaterEqualGoal_39));
#line 1573 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1573 "unify_proc.m"
    }
#line 1573 "unify_proc.m"
    {
#line 1573 "unify_proc.m"
      check_hlds__unify_proc__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_89_89, 0) = ((MR_Box) (check_hlds__unify_proc__Call_Y_Index_27));
#line 1573 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_89_89, 1) = ((MR_Box) (check_hlds__unify_proc__V_90_90));
#line 1573 "unify_proc.m"
    }
#line 1572 "unify_proc.m"
    {
#line 1572 "unify_proc.m"
      check_hlds__unify_proc__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_88_88, 0) = ((MR_Box) (check_hlds__unify_proc__Call_X_Index_25));
#line 1572 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_88_88, 1) = ((MR_Box) (check_hlds__unify_proc__V_89_89));
#line 1572 "unify_proc.m"
    }
#line 1571 "unify_proc.m"
    {
#line 1571 "unify_proc.m"
      check_hlds__unify_proc__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1571 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1571 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1571 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 2) = ((MR_Box) (check_hlds__unify_proc__V_88_88));
#line 1571 "unify_proc.m"
    }
#line 1570 "unify_proc.m"
    {
#line 1570 "unify_proc.m"
      MR_Word base;
#line 1570 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1570 "unify_proc.m"
      *check_hlds__unify_proc__Goal_16 = base;
#line 1570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_86_86));
#line 1570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1570 "unify_proc.m"
    }
#line 1523 "unify_proc.m"
  }
#line 1517 "unify_proc.m"
}

#line 1452 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1452 "unify_proc.m"
  MR_String check_hlds__unify_proc__HeadVar__4_4,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__8_8,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9,
#line 1452 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_10,
#line 1452 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_11,
#line 1452 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_12)
#line 1452 "unify_proc.m"
{
#line 1458 "unify_proc.m"
  while (MR_TRUE)
#line 1458 "unify_proc.m"
    {
#line 1458 "unify_proc.m"
      /* tailcall optimized into a loop */
#line 1458 "unify_proc.m"
      {
#line 1458 "unify_proc.m"
        MR_bool check_hlds__unify_proc__succeeded;

#line 1458 "unify_proc.m"
        if ((check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1458 "unify_proc.m"
          {
#line 1458 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Info_12 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_11;
#line 1458 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Cases_10 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9;
#line 1458 "unify_proc.m"
          }
#line 1458 "unify_proc.m"
        else
#line 1461 "unify_proc.m"
          {
#line 1461 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1461 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1461 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Case_37;
#line 1461 "unify_proc.m"
            MR_String check_hlds__unify_proc__Cmp1_38;
#line 1461 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
#line 1461 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_46_46;

#line 1462 "unify_proc.m"
            {
#line 1462 "unify_proc.m"
              check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____constructor_0_0(check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__RightCtor_28);
            }
#line 1466 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 1464 "unify_proc.m"
              {
#line 1463 "unify_proc.m"
                {
#line 1463 "unify_proc.m"
                  check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__HeadVar__8_8, (MR_Integer) 1, &check_hlds__unify_proc__Case_37, check_hlds__unify_proc__STATE_VARIABLE_Info_0_11, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
                }
#line 1465 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_38 = (MR_String) "<";
#line 1464 "unify_proc.m"
              }
#line 1466 "unify_proc.m"
            else
#line 1468 "unify_proc.m"
              {
#line 1467 "unify_proc.m"
                {
#line 1467 "unify_proc.m"
                  check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__RightCtor_28, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__HeadVar__8_8, &check_hlds__unify_proc__Case_37, check_hlds__unify_proc__STATE_VARIABLE_Info_0_11, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
                }
#line 1469 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_38 = check_hlds__unify_proc__HeadVar__4_4;
#line 1468 "unify_proc.m"
              }
#line 1471 "unify_proc.m"
            {
#line 1471 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Case_37));
#line 1471 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9));
#line 1471 "unify_proc.m"
            }
#line 1471 "unify_proc.m"
            /* direct tailcall eliminated */
#line 1471 "unify_proc.m"
            {
#line 1471 "unify_proc.m"
              MR_Word check_hlds__unify_proc__HeadVar__3__tmp_copy_3 = check_hlds__unify_proc__RightCtors_29;
#line 1471 "unify_proc.m"
              MR_String check_hlds__unify_proc__HeadVar__4__tmp_copy_4 = check_hlds__unify_proc__Cmp1_38;
#line 1471 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_9 = check_hlds__unify_proc__V_46_46;
#line 1471 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;

#line 1471 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Info_0_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_11;
#line 1471 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_9;
#line 1471 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__HeadVar__4__tmp_copy_4;
#line 1471 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__HeadVar__3__tmp_copy_3;
#line 1471 "unify_proc.m"
            }
#line 1471 "unify_proc.m"
            continue;
#line 1461 "unify_proc.m"
          }
#line 1458 "unify_proc.m"
      }
#line 1458 "unify_proc.m"
      break;
#line 1458 "unify_proc.m"
    }
#line 1452 "unify_proc.m"
}

#line 1437 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8,
#line 1437 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_9,
#line 1437 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_10,
#line 1437 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_11)
#line 1437 "unify_proc.m"
{
#line 1443 "unify_proc.m"
  while (MR_TRUE)
#line 1443 "unify_proc.m"
    {
#line 1443 "unify_proc.m"
      /* tailcall optimized into a loop */
#line 1443 "unify_proc.m"
      {
#line 1443 "unify_proc.m"
        MR_bool check_hlds__unify_proc__succeeded;

#line 1443 "unify_proc.m"
        if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1443 "unify_proc.m"
          {
#line 1443 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Info_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_10;
#line 1443 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Cases_9 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8;
#line 1443 "unify_proc.m"
          }
#line 1443 "unify_proc.m"
        else
#line 1446 "unify_proc.m"
          {
#line 1446 "unify_proc.m"
            MR_Word check_hlds__unify_proc__LeftCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 1446 "unify_proc.m"
            MR_Word check_hlds__unify_proc__LeftCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 1446 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
#line 1446 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

#line 1447 "unify_proc.m"
            {
#line 1447 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__LeftCtor_25, check_hlds__unify_proc__HeadVar__3_3, (MR_String) ">", check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39, check_hlds__unify_proc__STATE_VARIABLE_Info_0_10, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_40);
            }
#line 1449 "unify_proc.m"
            /* direct tailcall eliminated */
#line 1449 "unify_proc.m"
            {
#line 1449 "unify_proc.m"
              MR_Word check_hlds__unify_proc__HeadVar__2__tmp_copy_2 = check_hlds__unify_proc__LeftCtors_26;
#line 1449 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
#line 1449 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

#line 1449 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Info_0_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_10;
#line 1449 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_8;
#line 1449 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__2_2 = check_hlds__unify_proc__HeadVar__2__tmp_copy_2;
#line 1449 "unify_proc.m"
            }
#line 1449 "unify_proc.m"
            continue;
#line 1446 "unify_proc.m"
          }
#line 1443 "unify_proc.m"
      }
#line 1443 "unify_proc.m"
      break;
#line 1443 "unify_proc.m"
    }
#line 1437 "unify_proc.m"
}

#line 1339 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
#line 1339 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1339 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1339 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 1339 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_3)
#line 1339 "unify_proc.m"
{
#line 1339 "unify_proc.m"
  {
#line 1339 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1339 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_Res_6;

#line 1339 "unify_proc.m"
    {
#line 1339 "unify_proc.m"
      check_hlds__unify_proc__compare_ctors_lexically_3_p_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), &check_hlds__unify_proc__conv0_Res_6);
    }
#line 1339 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__unify_proc__conv0_Res_6));
#line 1339 "unify_proc.m"
  }
#line 1339 "unify_proc.m"
}

#line 1327 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors0_11,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1327 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 1327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_30,
#line 1327 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_31)
#line 1327 "unify_proc.m"
{
#line 1332 "unify_proc.m"
  {
#line 1332 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1332 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1332 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_19;
#line 1332 "unify_proc.m"
    MR_Word check_hlds__unify_proc__LexicalOrder_20;
#line 1332 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Ctors_21;
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));

#line 1334 "unify_proc.m"
    {
#line 1334 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__Globals_19);
    }
#line 1335 "unify_proc.m"
    {
#line 1335 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 271, &check_hlds__unify_proc__LexicalOrder_20);
    }
#line 1340 "unify_proc.m"
    if ((check_hlds__unify_proc__LexicalOrder_20 == (MR_Integer) 0))
#line 1342 "unify_proc.m"
      check_hlds__unify_proc__Ctors_21 = check_hlds__unify_proc__Ctors0_11;
#line 1340 "unify_proc.m"
    else
#line 1338 "unify_proc.m"
      {
#line 1339 "unify_proc.m"
        {
#line 1339 "unify_proc.m"
          mercury__list__sort_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[3], check_hlds__unify_proc__Ctors0_11, &check_hlds__unify_proc__Ctors_21);
        }
#line 1338 "unify_proc.m"
      }
#line 1347 "unify_proc.m"
    if ((check_hlds__unify_proc__Ctors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1345 "unify_proc.m"
      {
#line 1346 "unify_proc.m"
        {
#line 1346 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_du_compare_proc_body\'/9", (MR_String) "compare for type with no functors");
#line 1346 "unify_proc.m"
          return;
        }
#line 1345 "unify_proc.m"
      }
#line 1347 "unify_proc.m"
    else
#line 1348 "unify_proc.m"
      {
#line 1348 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__CompareSpec_24;
#line 1348 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumCtors_25;
#line 1348 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_27;
#line 1348 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_28;
#line 1348 "unify_proc.m"
        MR_Word check_hlds__unify_proc__HeadVars_29;
#line 1348 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
#line 1348 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_37_37;
#line 1348 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_38_38;
#line 1348 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1348 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;

#line 1349 "unify_proc.m"
        {
#line 1349 "unify_proc.m"
          libs__globals__lookup_int_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 315, &check_hlds__unify_proc__CompareSpec_24);
        }
#line 1351 "unify_proc.m"
        {
#line 1351 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, check_hlds__unify_proc__Ctors_21, &check_hlds__unify_proc__NumCtors_25);
        }
#line 1352 "unify_proc.m"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__NumCtors_25 <= check_hlds__unify_proc__CompareSpec_24);
#line 1356 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 1353 "unify_proc.m"
          {
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__TypeCtor_26;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Cases_65;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo0_66;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_67;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_40_99;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtor_117;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtors_118;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Case_126;
#line 1353 "unify_proc.m"
            MR_String check_hlds__unify_proc__Cmp1_127;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_133;
#line 1353 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_135_135;

#line 1353 "unify_proc.m"
            {
#line 1353 "unify_proc.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_26);
            }
#line 1446 "unify_proc.m"
            check_hlds__unify_proc__RightCtor_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Ctors_21, (MR_Integer) 0)));
#line 1446 "unify_proc.m"
            check_hlds__unify_proc__RightCtors_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Ctors_21, (MR_Integer) 1)));
#line 1462 "unify_proc.m"
            {
#line 1462 "unify_proc.m"
              check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____constructor_0_0(check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtor_117);
            }
#line 1466 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 1464 "unify_proc.m"
              {
#line 1463 "unify_proc.m"
                {
#line 1463 "unify_proc.m"
                  check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, (MR_Integer) 1, &check_hlds__unify_proc__Case_126, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_133);
                }
#line 1465 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_127 = (MR_String) "<";
#line 1464 "unify_proc.m"
              }
#line 1466 "unify_proc.m"
            else
#line 1468 "unify_proc.m"
              {
#line 1467 "unify_proc.m"
                {
#line 1467 "unify_proc.m"
                  check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtor_117, (MR_String) ">", check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Case_126, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_133);
                }
#line 1469 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_127 = (MR_String) ">";
#line 1468 "unify_proc.m"
              }
#line 1471 "unify_proc.m"
            {
#line 1471 "unify_proc.m"
              check_hlds__unify_proc__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_135_135, 0) = ((MR_Box) (check_hlds__unify_proc__Case_126));
#line 1471 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1471 "unify_proc.m"
            }
#line 1471 "unify_proc.m"
            {
#line 1471 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Cmp1_127, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__V_135_135, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, check_hlds__unify_proc__STATE_VARIABLE_Info_44_133, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_99);
            }
#line 1449 "unify_proc.m"
            {
#line 1449 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, &check_hlds__unify_proc__Cases_65, check_hlds__unify_proc__STATE_VARIABLE_Info_40_99, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
            }
#line 1433 "unify_proc.m"
            {
#line 1433 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_66);
            }
#line 1434 "unify_proc.m"
            {
#line 1434 "unify_proc.m"
              hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_66, &check_hlds__unify_proc__GoalInfo_67);
            }
#line 1435 "unify_proc.m"
            {
#line 1435 "unify_proc.m"
              hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__unify_proc__Cases_65, check_hlds__unify_proc__GoalInfo_67, &check_hlds__unify_proc__Goal0_27);
            }
#line 1353 "unify_proc.m"
          }
#line 1356 "unify_proc.m"
        else
#line 1357 "unify_proc.m"
          {
#line 1357 "unify_proc.m"
            check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Goal0_27, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
          }
#line 1360 "unify_proc.m"
        {
#line 1360 "unify_proc.m"
          check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1360 "unify_proc.m"
        }
#line 1360 "unify_proc.m"
        {
#line 1360 "unify_proc.m"
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__V_37_37, check_hlds__unify_proc__Goal0_27, &check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, &check_hlds__unify_proc__STATE_VARIABLE_Info_38_38);
        }
#line 1362 "unify_proc.m"
        {
#line 1362 "unify_proc.m"
          check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1362 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1362 "unify_proc.m"
        }
#line 1362 "unify_proc.m"
        {
#line 1362 "unify_proc.m"
          check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1362 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1362 "unify_proc.m"
        }
#line 1362 "unify_proc.m"
        {
#line 1362 "unify_proc.m"
          check_hlds__unify_proc__HeadVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1362 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 1362 "unify_proc.m"
        }
#line 1363 "unify_proc.m"
        {
#line 1363 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__HeadVars_29, check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_38_38, check_hlds__unify_proc__STATE_VARIABLE_Info_31);
#line 1363 "unify_proc.m"
          return;
        }
#line 1348 "unify_proc.m"
      }
#line 1332 "unify_proc.m"
  }
#line 1327 "unify_proc.m"
}

#line 1876 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
#line 1876 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1876 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 1876 "unify_proc.m"
{
#line 1876 "unify_proc.m"
  {
#line 1876 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 1876 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1876 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__2_22;

#line 1876 "unify_proc.m"
    {
#line 1876 "unify_proc.m"
      check_hlds__unify_proc__conv0_HeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1876__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 1876 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__2_22));
#line 1876 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 1876 "unify_proc.m"
  }
#line 1876 "unify_proc.m"
}

#line 1306 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_12,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_13,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_14,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1306 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1306 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__STATE_VARIABLE_N_0_32,
#line 1306 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__STATE_VARIABLE_N_33,
#line 1306 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_34,
#line 1306 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_35)
#line 1306 "unify_proc.m"
{
#line 1310 "unify_proc.m"
  {
#line 1310 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
#line 1310 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_24;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_26;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyX_Goal_27;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyIndex_Goal_28;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_29;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_30;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_31;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1310 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 1311 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
#line 1311 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));

#line 1312 "unify_proc.m"
    {
#line 1312 "unify_proc.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__ArgTypes_22, &check_hlds__unify_proc__FunctorArity_24);
    }
#line 1313 "unify_proc.m"
    {
#line 1313 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_21));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_24));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_11));
#line 1313 "unify_proc.m"
    }
#line 1875 "unify_proc.m"
    if ((check_hlds__unify_proc__ExistQTVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1875 "unify_proc.m"
      {
#line 1875 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_52;

#line 1876 "unify_proc.m"
        {
#line 1876 "unify_proc.m"
          check_hlds__unify_proc__ArgTypes_52 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[2], check_hlds__unify_proc__ArgTypes_22);
        }
#line 1877 "unify_proc.m"
        {
#line 1877 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_52, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, check_hlds__unify_proc__STATE_VARIABLE_Info_35);
        }
#line 1875 "unify_proc.m"
      }
#line 1875 "unify_proc.m"
    else
#line 1879 "unify_proc.m"
      {
#line 1879 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 1879 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumVars_57;
#line 1879 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_58;
#line 2100 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 2100 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 2100 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_79_79;
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_80_80;
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_81_81;
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_78_78;

#line 1886 "unify_proc.m"
        {
#line 1886 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__ArgTypes_22, &check_hlds__unify_proc__NumVars_57);
        }
#line 1887 "unify_proc.m"
        {
#line 1887 "unify_proc.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_57, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__VarSet0_56, &check_hlds__unify_proc__VarSet_58);
        }
#line 2105 "unify_proc.m"
        check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 2105 "unify_proc.m"
        check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 2105 "unify_proc.m"
        check_hlds__unify_proc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 2105 "unify_proc.m"
        check_hlds__unify_proc__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 2105 "unify_proc.m"
        {
#line 2105 "unify_proc.m"
          MR_Word base;
#line 2105 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2105 "unify_proc.m"
          *check_hlds__unify_proc__STATE_VARIABLE_Info_35 = base;
#line 2105 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_58));
#line 2105 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2105 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 2105 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 2105 "unify_proc.m"
        }
#line 1879 "unify_proc.m"
      }
#line 1315 "unify_proc.m"
    {
#line 1315 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1315 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1315 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_26));
#line 1315 "unify_proc.m"
    }
#line 1315 "unify_proc.m"
    {
#line 1315 "unify_proc.m"
      hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_12, check_hlds__unify_proc__V_37_37, check_hlds__unify_proc__Context_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
    }
#line 1318 "unify_proc.m"
    {
#line 1318 "unify_proc.m"
      hlds__hlds_goal__make_int_const_construction_3_p_0(check_hlds__unify_proc__Index_13, check_hlds__unify_proc__STATE_VARIABLE_N_0_32, &check_hlds__unify_proc__UnifyIndex_Goal_28);
    }
#line 1319 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_N_33 = (check_hlds__unify_proc__STATE_VARIABLE_N_0_32 + (MR_Integer) 1);
#line 1320 "unify_proc.m"
    {
#line 1320 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyIndex_Goal_28));
#line 1320 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "unify_proc.m"
    }
#line 1320 "unify_proc.m"
    {
#line 1320 "unify_proc.m"
      check_hlds__unify_proc__GoalList_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
#line 1320 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_43_43));
#line 1320 "unify_proc.m"
    }
#line 1321 "unify_proc.m"
    {
#line 1321 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_30);
    }
#line 1322 "unify_proc.m"
    {
#line 1322 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_14, check_hlds__unify_proc__GoalInfo0_30, &check_hlds__unify_proc__GoalInfo_31);
    }
#line 1323 "unify_proc.m"
    {
#line 1323 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_29, check_hlds__unify_proc__GoalInfo_31, check_hlds__unify_proc__Goal_16);
#line 1323 "unify_proc.m"
      return;
    }
#line 1310 "unify_proc.m"
  }
#line 1306 "unify_proc.m"
}

#line 1299 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
#line 1299 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1299 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1299 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1299 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1299 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4,
#line 1299 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_5,
#line 1299 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_6)
#line 1299 "unify_proc.m"
{
#line 1299 "unify_proc.m"
  {
#line 1299 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1299 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv2_Goal_16;
#line 1299 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33;
#line 1299 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35;

#line 1299 "unify_proc.m"
    {
#line 1299 "unify_proc.m"
      check_hlds__unify_proc__generate_du_index_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv2_Goal_16, ((MR_Integer) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33, ((MR_Word) check_hlds__unify_proc__wrapper_arg_5), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35);
    }
#line 1299 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv2_Goal_16));
#line 1299 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33));
#line 1299 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_6 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35));
#line 1299 "unify_proc.m"
  }
#line 1299 "unify_proc.m"
}

#line 1293 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1293 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1293 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_21,
#line 1293 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_22)
#line 1293 "unify_proc.m"
{
#line 1298 "unify_proc.m"
  {
#line 1298 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Disjuncts_16;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_18;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_19;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_20;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27;
#line 1298 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29;
#line 1299 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_17_17;
#line 1299 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv4_V_17_17;
#line 1299 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25;

#line 1299 "unify_proc.m"
    {
#line 1299 "unify_proc.m"
      check_hlds__unify_proc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0]));
#line 1299 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1));
#line 1299 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1299 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
#line 1299 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1299 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 5) = ((MR_Box) (check_hlds__unify_proc__Index_12));
#line 1299 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
#line 1299 "unify_proc.m"
    }
#line 1299 "unify_proc.m"
    {
#line 1299 "unify_proc.m"
      mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__V_23_23, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_16, ((MR_Box) ((MR_Integer) 0)), &check_hlds__unify_proc__conv4_V_17_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_21)), &check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
    }
#line 1299 "unify_proc.m"
    check_hlds__unify_proc__V_17_17 = ((MR_Integer) check_hlds__unify_proc__conv4_V_17_17);
#line 1299 "unify_proc.m"
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
#line 1301 "unify_proc.m"
    {
#line 1301 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
#line 1302 "unify_proc.m"
    {
#line 1302 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
#line 1303 "unify_proc.m"
    {
#line 1303 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1303 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_16));
#line 1303 "unify_proc.m"
    }
#line 1303 "unify_proc.m"
    {
#line 1303 "unify_proc.m"
      check_hlds__unify_proc__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 0) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 1303 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
#line 1303 "unify_proc.m"
    }
#line 1304 "unify_proc.m"
    {
#line 1304 "unify_proc.m"
      check_hlds__unify_proc__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 0) = ((MR_Box) (check_hlds__unify_proc__Index_12));
#line 1304 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1304 "unify_proc.m"
    }
#line 1304 "unify_proc.m"
    {
#line 1304 "unify_proc.m"
      check_hlds__unify_proc__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1304 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__V_29_29));
#line 1304 "unify_proc.m"
    }
#line 1304 "unify_proc.m"
    {
#line 1304 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_27_27, check_hlds__unify_proc__Goal_20, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, check_hlds__unify_proc__STATE_VARIABLE_Info_22);
#line 1304 "unify_proc.m"
      return;
    }
#line 1298 "unify_proc.m"
  }
#line 1293 "unify_proc.m"
}

#line 1216 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_10,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1216 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1216 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_43,
#line 1216 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_44)
#line 1216 "unify_proc.m"
{
#line 1221 "unify_proc.m"
  {
#line 1221 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1221 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
#line 1221 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
#line 1221 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
#line 1221 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_23;
#line 1221 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
#line 1221 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_35;
#line 1221 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_41;
#line 1221 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_42;
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));
#line 1224 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45;
#line 1224 "unify_proc.m"
    MR_String check_hlds__unify_proc__V_46_46;
#line 1224 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_24_24;

#line 1223 "unify_proc.m"
    {
#line 1223 "unify_proc.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__ArgTypes_21, &check_hlds__unify_proc__FunctorArity_23);
    }
#line 1224 "unify_proc.m"
    check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 0)));
#line 1224 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 1)));
#line 1224 "unify_proc.m"
    check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 1224 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1224 "unify_proc.m"
      {
#line 1224 "unify_proc.m"
        check_hlds__unify_proc__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_45_45, (MR_Integer) 0)));
#line 1224 "unify_proc.m"
        check_hlds__unify_proc__succeeded = (strcmp(check_hlds__unify_proc__V_46_46, (MR_String) "{}") == 0);
#line 1224 "unify_proc.m"
      }
#line 1226 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1225 "unify_proc.m"
      {
#line 1225 "unify_proc.m"
        check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1225 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_23));
#line 1225 "unify_proc.m"
      }
#line 1226 "unify_proc.m"
    else
#line 1227 "unify_proc.m"
      {
#line 1227 "unify_proc.m"
        check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1227 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_20));
#line 1227 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_23));
#line 1227 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_10));
#line 1227 "unify_proc.m"
      }
#line 1230 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__ArgTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1230 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1231 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CanCompareAsInt_14 == (MR_Integer) 1);
#line 1245 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1233 "unify_proc.m"
      {
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS_26;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_27;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastX_28;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastY_29;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal0_30;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal0_31;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal_32;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal_33;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_34;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_51_51;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_53_53;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_54_54;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_61_61;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_64_64;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_65_65;
#line 1233 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_66_66;

#line 1233 "unify_proc.m"
        {
#line 1233 "unify_proc.m"
          check_hlds__unify_proc__RHS_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1233 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1233 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "unify_proc.m"
        }
#line 1234 "unify_proc.m"
        {
#line 1234 "unify_proc.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHS_26, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
        }
#line 1236 "unify_proc.m"
        {
#line 1236 "unify_proc.m"
          check_hlds__unify_proc__V_51_51 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 1236 "unify_proc.m"
        {
#line 1236 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__V_51_51, (MR_String) "CastX", &check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__STATE_VARIABLE_Info_0_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_53_53);
        }
#line 1237 "unify_proc.m"
        {
#line 1237 "unify_proc.m"
          check_hlds__unify_proc__V_54_54 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 1237 "unify_proc.m"
        {
#line 1237 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__V_54_54, (MR_String) "CastY", &check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__STATE_VARIABLE_Info_53_53, check_hlds__unify_proc__STATE_VARIABLE_Info_44);
        }
#line 1238 "unify_proc.m"
        {
#line 1238 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal0_30);
        }
#line 1239 "unify_proc.m"
        {
#line 1239 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal0_31);
        }
#line 1240 "unify_proc.m"
        {
#line 1240 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastXGoal0_30, &check_hlds__unify_proc__CastXGoal_32);
        }
#line 1241 "unify_proc.m"
        {
#line 1241 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastYGoal0_31, &check_hlds__unify_proc__CastYGoal_33);
        }
#line 1242 "unify_proc.m"
        {
#line 1242 "unify_proc.m"
          check_hlds__unify_proc__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_28));
#line 1242 "unify_proc.m"
        }
#line 1242 "unify_proc.m"
        {
#line 1242 "unify_proc.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__V_61_61, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_34);
        }
#line 1244 "unify_proc.m"
        {
#line 1244 "unify_proc.m"
          check_hlds__unify_proc__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_34));
#line 1244 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1244 "unify_proc.m"
        }
#line 1244 "unify_proc.m"
        {
#line 1244 "unify_proc.m"
          check_hlds__unify_proc__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_33));
#line 1244 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 1) = ((MR_Box) (check_hlds__unify_proc__V_66_66));
#line 1244 "unify_proc.m"
        }
#line 1244 "unify_proc.m"
        {
#line 1244 "unify_proc.m"
          check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_32));
#line 1244 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 1244 "unify_proc.m"
        }
#line 1244 "unify_proc.m"
        {
#line 1244 "unify_proc.m"
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
#line 1244 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1244 "unify_proc.m"
        }
#line 1233 "unify_proc.m"
      }
#line 1245 "unify_proc.m"
    else
#line 1246 "unify_proc.m"
      {
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars1_36;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars2_37;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS1_38;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS2_39;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyArgs_Goals_40;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_68_68;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_69_69;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_78;
#line 1246 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_79;

#line 1246 "unify_proc.m"
        {
#line 1246 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, &check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_68_68);
        }
#line 1247 "unify_proc.m"
        {
#line 1247 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, &check_hlds__unify_proc__Vars2_37, check_hlds__unify_proc__STATE_VARIABLE_Info_68_68, &check_hlds__unify_proc__STATE_VARIABLE_Info_69_69);
        }
#line 1248 "unify_proc.m"
        {
#line 1248 "unify_proc.m"
          check_hlds__unify_proc__RHS1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1248 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1248 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_36));
#line 1248 "unify_proc.m"
        }
#line 1249 "unify_proc.m"
        {
#line 1249 "unify_proc.m"
          check_hlds__unify_proc__RHS2_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1249 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1249 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_37));
#line 1249 "unify_proc.m"
        }
#line 1250 "unify_proc.m"
        {
#line 1250 "unify_proc.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHS1_38, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_78);
        }
#line 1252 "unify_proc.m"
        {
#line 1252 "unify_proc.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_12, check_hlds__unify_proc__RHS2_39, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_79);
        }
#line 1254 "unify_proc.m"
        {
#line 1254 "unify_proc.m"
          check_hlds__unify_proc__unify_var_lists_7_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__Vars2_37, &check_hlds__unify_proc__UnifyArgs_Goals_40, check_hlds__unify_proc__STATE_VARIABLE_Info_69_69, check_hlds__unify_proc__STATE_VARIABLE_Info_44);
        }
#line 1256 "unify_proc.m"
        {
#line 1256 "unify_proc.m"
          check_hlds__unify_proc__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_77_77, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_79));
#line 1256 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_77_77, 1) = ((MR_Box) (check_hlds__unify_proc__UnifyArgs_Goals_40));
#line 1256 "unify_proc.m"
        }
#line 1256 "unify_proc.m"
        {
#line 1256 "unify_proc.m"
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_78));
#line 1256 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_77_77));
#line 1256 "unify_proc.m"
        }
#line 1246 "unify_proc.m"
      }
#line 1258 "unify_proc.m"
    {
#line 1258 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_41);
    }
#line 1259 "unify_proc.m"
    {
#line 1259 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_41, &check_hlds__unify_proc__GoalInfo_42);
    }
#line 1260 "unify_proc.m"
    {
#line 1260 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_35, check_hlds__unify_proc__GoalInfo_42, check_hlds__unify_proc__Goal_16);
#line 1260 "unify_proc.m"
      return;
    }
#line 1221 "unify_proc.m"
  }
#line 1216 "unify_proc.m"
}

#line 1208 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
#line 1208 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1208 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1208 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1208 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1208 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4)
#line 1208 "unify_proc.m"
{
#line 1208 "unify_proc.m"
  {
#line 1208 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1208 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv1_Goal_16;
#line 1208 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44;

#line 1208 "unify_proc.m"
    {
#line 1208 "unify_proc.m"
      check_hlds__unify_proc__generate_du_unify_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv1_Goal_16, ((MR_Word) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44);
    }
#line 1208 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv1_Goal_16));
#line 1208 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44));
#line 1208 "unify_proc.m"
  }
#line 1208 "unify_proc.m"
}

#line 1202 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1202 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1202 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 1202 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
#line 1202 "unify_proc.m"
{
#line 1206 "unify_proc.m"
  {
#line 1206 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CanCompareAsInt_16;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Disjuncts_17;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_18;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_19;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_20;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_21;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 1206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_43;
#line 1269 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 1269 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 1269 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 1208 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25;

#line 1270 "unify_proc.m"
    {
#line 1270 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_42, &check_hlds__unify_proc__Globals_43);
    }
#line 1271 "unify_proc.m"
    {
#line 1271 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_43, (MR_Integer) 268, &check_hlds__unify_proc__CanCompareAsInt_16);
    }
#line 1208 "unify_proc.m"
    {
#line 1208 "unify_proc.m"
      check_hlds__unify_proc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[0]));
#line 1208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1));
#line 1208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
#line 1208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 5) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
#line 1208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 7) = ((MR_Box) (check_hlds__unify_proc__CanCompareAsInt_16));
#line 1208 "unify_proc.m"
    }
#line 1208 "unify_proc.m"
    {
#line 1208 "unify_proc.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__V_24_24, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_22)), &check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
    }
#line 1208 "unify_proc.m"
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
#line 1210 "unify_proc.m"
    {
#line 1210 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
#line 1211 "unify_proc.m"
    {
#line 1211 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
#line 1212 "unify_proc.m"
    {
#line 1212 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1212 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_17));
#line 1212 "unify_proc.m"
    }
#line 1212 "unify_proc.m"
    {
#line 1212 "unify_proc.m"
      check_hlds__unify_proc__Goal0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 0) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 1212 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
#line 1212 "unify_proc.m"
    }
#line 1213 "unify_proc.m"
    {
#line 1213 "unify_proc.m"
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_20, &check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, &check_hlds__unify_proc__STATE_VARIABLE_Info_28_28);
    }
#line 1214 "unify_proc.m"
    {
#line 1214 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1214 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1214 "unify_proc.m"
    }
#line 1214 "unify_proc.m"
    {
#line 1214 "unify_proc.m"
      check_hlds__unify_proc__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1214 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_31_31));
#line 1214 "unify_proc.m"
    }
#line 1214 "unify_proc.m"
    {
#line 1214 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_29_29, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
#line 1214 "unify_proc.m"
      return;
    }
#line 1206 "unify_proc.m"
  }
#line 1202 "unify_proc.m"
}

#line 1129 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_9,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_10,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1129 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1129 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_24,
#line 1129 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_25)
#line 1129 "unify_proc.m"
{
#line 1133 "unify_proc.m"
  {
#line 1133 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_16;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_17;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_18;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_19;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CompareGoal_20;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_21;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_22;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_23;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_36_36;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_40_40;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_42_42;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47;
#line 1133 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_56;
#line 1133 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_57;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_65;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_66;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_67;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_68;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_79_79;
#line 1133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_80_80;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_73_73;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_77_77;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_78_78;

#line 1848 "unify_proc.m"
    {
#line 1848 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_56);
    }
#line 1849 "unify_proc.m"
    {
#line 1849 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_56, &check_hlds__unify_proc__Name_57);
    }
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2093 "unify_proc.m"
    {
#line 2093 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_57, &check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__VarSet0_65, &check_hlds__unify_proc__VarSet_67);
    }
#line 2094 "unify_proc.m"
    {
#line 2094 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__EqvType_9, check_hlds__unify_proc__VarTypes0_66, &check_hlds__unify_proc__VarTypes_68);
    }
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
    {
#line 2096 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_67));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_68));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 2096 "unify_proc.m"
    }
#line 1141 "unify_proc.m"
    {
#line 1141 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_9, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_17, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
    }
#line 1143 "unify_proc.m"
    {
#line 1143 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal_18);
    }
#line 1144 "unify_proc.m"
    {
#line 1144 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_17, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal_19);
    }
#line 1145 "unify_proc.m"
    {
#line 1145 "unify_proc.m"
      check_hlds__unify_proc__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_38_38, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_17));
#line 1145 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "unify_proc.m"
    }
#line 1145 "unify_proc.m"
    {
#line 1145 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_16));
#line 1145 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (check_hlds__unify_proc__V_38_38));
#line 1145 "unify_proc.m"
    }
#line 1145 "unify_proc.m"
    {
#line 1145 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
#line 1145 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 1145 "unify_proc.m"
    }
#line 1145 "unify_proc.m"
    {
#line 1145 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare", check_hlds__unify_proc__V_35_35, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CompareGoal_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, &check_hlds__unify_proc__STATE_VARIABLE_Info_36_36);
    }
#line 1148 "unify_proc.m"
    {
#line 1148 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_21);
    }
#line 1149 "unify_proc.m"
    {
#line 1149 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_21, &check_hlds__unify_proc__GoalInfo_22);
    }
#line 1150 "unify_proc.m"
    {
#line 1150 "unify_proc.m"
      check_hlds__unify_proc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_20));
#line 1150 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1150 "unify_proc.m"
    }
#line 1150 "unify_proc.m"
    {
#line 1150 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_19));
#line 1150 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (check_hlds__unify_proc__V_42_42));
#line 1150 "unify_proc.m"
    }
#line 1150 "unify_proc.m"
    {
#line 1150 "unify_proc.m"
      check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_18));
#line 1150 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 1150 "unify_proc.m"
    }
#line 1150 "unify_proc.m"
    {
#line 1150 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_40_40, check_hlds__unify_proc__GoalInfo_22, &check_hlds__unify_proc__Goal_23);
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_47_47));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_44_44, check_hlds__unify_proc__Goal_23, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_36_36, check_hlds__unify_proc__STATE_VARIABLE_Info_25);
#line 1151 "unify_proc.m"
      return;
    }
#line 1133 "unify_proc.m"
  }
#line 1129 "unify_proc.m"
}

#line 1095 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_2,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_3,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_4,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_5,
#line 1095 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_6,
#line 1095 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_7,
#line 1095 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_8)
#line 1095 "unify_proc.m"
{
#line 1100 "unify_proc.m"
  {
#line 1100 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1100 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1100 "unify_proc.m"
      {
#line 1101 "unify_proc.m"
        {
#line 1101 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_compare_proc_body\'/8", (MR_String) "trying to create compare proc for abstract noncanonical type");
#line 1101 "unify_proc.m"
          return;
        }
#line 1100 "unify_proc.m"
      }
#line 1100 "unify_proc.m"
    else
#line 1104 "unify_proc.m"
      {
#line 1104 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeCompare_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1104 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgVars_29;
#line 1104 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_36;
#line 1104 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1104 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 1104 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_47_47;
#line 1104 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));

#line 1105 "unify_proc.m"
        {
#line 1105 "unify_proc.m"
          check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_4));
#line 1105 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1105 "unify_proc.m"
        }
#line 1105 "unify_proc.m"
        {
#line 1105 "unify_proc.m"
          check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_3));
#line 1105 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1105 "unify_proc.m"
        }
#line 1105 "unify_proc.m"
        {
#line 1105 "unify_proc.m"
          check_hlds__unify_proc__ArgVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_2));
#line 1105 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 1105 "unify_proc.m"
        }
#line 1121 "unify_proc.m"
        if ((check_hlds__unify_proc__MaybeCompare_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1122 "unify_proc.m"
          {
#line 1124 "unify_proc.m"
            {
#line 1124 "unify_proc.m"
              check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_non_canonical_type", check_hlds__unify_proc__ArgVars_29, check_hlds__unify_proc__Context_5, &check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_7, &check_hlds__unify_proc__STATE_VARIABLE_Info_47_47);
            }
#line 1122 "unify_proc.m"
          }
#line 1121 "unify_proc.m"
        else
#line 1107 "unify_proc.m"
          {
#line 1107 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ComparePredName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_22, (MR_Integer) 0)));
#line 1107 "unify_proc.m"
            MR_Word check_hlds__unify_proc__PredId_31;
#line 1107 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__ModeId_32;
#line 1107 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Call_33;
#line 1107 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_34;
#line 1107 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Goal0_35;
#line 1107 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_46_46;

#line 1113 "unify_proc.m"
            {
#line 1113 "unify_proc.m"
              check_hlds__unify_proc__PredId_31 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1114 "unify_proc.m"
            {
#line 1114 "unify_proc.m"
              check_hlds__unify_proc__ModeId_32 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 1115 "unify_proc.m"
            {
#line 1115 "unify_proc.m"
              check_hlds__unify_proc__Call_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_31));
#line 1115 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_32));
#line 1115 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_29));
#line 1115 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1115 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1115 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_30));
#line 1115 "unify_proc.m"
            }
#line 1117 "unify_proc.m"
            {
#line 1117 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_5, &check_hlds__unify_proc__GoalInfo_34);
            }
#line 1118 "unify_proc.m"
            {
#line 1118 "unify_proc.m"
              check_hlds__unify_proc__Goal0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_35, 0) = ((MR_Box) (check_hlds__unify_proc__Call_33));
#line 1118 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_34));
#line 1118 "unify_proc.m"
            }
#line 1119 "unify_proc.m"
            {
#line 1119 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Res_2));
#line 1119 "unify_proc.m"
            }
#line 1119 "unify_proc.m"
            {
#line 1119 "unify_proc.m"
              check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_5, check_hlds__unify_proc__X_3, check_hlds__unify_proc__Y_4, check_hlds__unify_proc__V_46_46, check_hlds__unify_proc__Goal0_35, &check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_7, &check_hlds__unify_proc__STATE_VARIABLE_Info_47_47);
            }
#line 1107 "unify_proc.m"
          }
#line 1127 "unify_proc.m"
        {
#line 1127 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_29, check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__Context_5, check_hlds__unify_proc__Clause_6, check_hlds__unify_proc__STATE_VARIABLE_Info_47_47, check_hlds__unify_proc__STATE_VARIABLE_Info_8);
#line 1127 "unify_proc.m"
          return;
        }
#line 1104 "unify_proc.m"
      }
#line 1100 "unify_proc.m"
  }
#line 1095 "unify_proc.m"
}

#line 1085 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1085 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1085 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_16,
#line 1085 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_17)
#line 1085 "unify_proc.m"
{
#line 1090 "unify_proc.m"
  {
#line 1090 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_14;
#line 1090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_15;
#line 1090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18;
#line 1090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19;
#line 1090 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_22_22;

#line 1091 "unify_proc.m"
    {
#line 1091 "unify_proc.m"
      check_hlds__unify_proc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1091 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1091 "unify_proc.m"
    }
#line 1091 "unify_proc.m"
    {
#line 1091 "unify_proc.m"
      check_hlds__unify_proc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_18_18, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1091 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_18_18, 1) = ((MR_Box) (check_hlds__unify_proc__V_19_19));
#line 1091 "unify_proc.m"
    }
#line 1091 "unify_proc.m"
    {
#line 1091 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1091 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__V_18_18));
#line 1091 "unify_proc.m"
    }
#line 1092 "unify_proc.m"
    {
#line 1092 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_solver_type", check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__Goal_15, check_hlds__unify_proc__STATE_VARIABLE_Info_0_16, &check_hlds__unify_proc__STATE_VARIABLE_Info_22_22);
    }
#line 1093 "unify_proc.m"
    {
#line 1093 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Goal_15, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_22_22, check_hlds__unify_proc__STATE_VARIABLE_Info_17);
#line 1093 "unify_proc.m"
      return;
    }
#line 1090 "unify_proc.m"
  }
#line 1085 "unify_proc.m"
}

#line 1076 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
#line 1076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_7,
#line 1076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_8,
#line 1076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1076 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 1076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1076 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15)
#line 1076 "unify_proc.m"
{
#line 1080 "unify_proc.m"
  {
#line 1080 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1080 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_12;
#line 1080 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_13;
#line 1080 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_16_16;
#line 1080 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_19_19;

#line 1081 "unify_proc.m"
    {
#line 1081 "unify_proc.m"
      check_hlds__unify_proc__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_16_16, 0) = ((MR_Box) (check_hlds__unify_proc__Y_8));
#line 1081 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1081 "unify_proc.m"
    }
#line 1081 "unify_proc.m"
    {
#line 1081 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 0) = ((MR_Box) (check_hlds__unify_proc__X_7));
#line 1081 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 1) = ((MR_Box) (check_hlds__unify_proc__V_16_16));
#line 1081 "unify_proc.m"
    }
#line 1082 "unify_proc.m"
    {
#line 1082 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_unify_solver_type", check_hlds__unify_proc__ArgVars_12, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, &check_hlds__unify_proc__STATE_VARIABLE_Info_19_19);
    }
#line 1083 "unify_proc.m"
    {
#line 1083 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_12, check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Clause_10, check_hlds__unify_proc__STATE_VARIABLE_Info_19_19, check_hlds__unify_proc__STATE_VARIABLE_Info_15);
#line 1083 "unify_proc.m"
      return;
    }
#line 1080 "unify_proc.m"
  }
#line 1076 "unify_proc.m"
}

#line 1029 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1029 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1029 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
#line 1029 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16)
#line 1029 "unify_proc.m"
{
#line 1033 "unify_proc.m"
  {
#line 1033 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_14;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_25;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_29;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_34;
#line 1033 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;

#line 2029 "unify_proc.m"
    {
#line 2029 "unify_proc.m"
      check_hlds__unify_proc__Builtin_34 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 2030 "unify_proc.m"
    {
#line 2030 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_34));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2030 "unify_proc.m"
    }
#line 2030 "unify_proc.m"
    {
#line 2030 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_35_35));
#line 2030 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2030 "unify_proc.m"
    }
#line 2035 "unify_proc.m"
    {
#line 2035 "unify_proc.m"
      check_hlds__unify_proc__V_32_32 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 2035 "unify_proc.m"
    {
#line 2035 "unify_proc.m"
      check_hlds__unify_proc__SymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 0) = ((MR_Box) (check_hlds__unify_proc__V_32_32));
#line 2035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 1) = ((MR_Box) ((MR_String) "="));
#line 2035 "unify_proc.m"
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_29));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__V_31_31));
#line 2034 "unify_proc.m"
    }
#line 1791 "unify_proc.m"
    {
#line 1791 "unify_proc.m"
      hlds__hlds_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_8, check_hlds__unify_proc__V_26_26, &check_hlds__unify_proc__Goal0_25);
    }
#line 1792 "unify_proc.m"
    {
#line 1792 "unify_proc.m"
      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Goal0_25, &check_hlds__unify_proc__Goal_14);
    }
#line 1036 "unify_proc.m"
    {
#line 1036 "unify_proc.m"
      check_hlds__unify_proc__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_20_20, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1036 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "unify_proc.m"
    }
#line 1036 "unify_proc.m"
    {
#line 1036 "unify_proc.m"
      check_hlds__unify_proc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1036 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 1) = ((MR_Box) (check_hlds__unify_proc__V_20_20));
#line 1036 "unify_proc.m"
    }
#line 1036 "unify_proc.m"
    {
#line 1036 "unify_proc.m"
      check_hlds__unify_proc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_17_17, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1036 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_17_17, 1) = ((MR_Box) (check_hlds__unify_proc__V_19_19));
#line 1036 "unify_proc.m"
    }
#line 1036 "unify_proc.m"
    {
#line 1036 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_17_17, check_hlds__unify_proc__Goal_14, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_0_15, check_hlds__unify_proc__STATE_VARIABLE_Info_16);
#line 1036 "unify_proc.m"
      return;
    }
#line 1033 "unify_proc.m"
  }
#line 1029 "unify_proc.m"
}

#line 1011 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1011 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1011 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_23,
#line 1011 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_24)
#line 1011 "unify_proc.m"
{
#line 1015 "unify_proc.m"
  {
#line 1015 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__IntType_14;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_15;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_16;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_17;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_18;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CompareGoal_19;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_20;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_21;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_22;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_27_27;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_30_30;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_34_34;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_39_39;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_40_40;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 1015 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_55;
#line 1015 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_56;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_64;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_65;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_66;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_67;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_78_78;
#line 1015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_79_79;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_71_71;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_76_76;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_77_77;

#line 1016 "unify_proc.m"
    {
#line 1016 "unify_proc.m"
      check_hlds__unify_proc__IntType_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1848 "unify_proc.m"
    {
#line 1848 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_55);
    }
#line 1849 "unify_proc.m"
    {
#line 1849 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_55, &check_hlds__unify_proc__Name_56);
    }
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 2093 "unify_proc.m"
    {
#line 2093 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_56, &check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__VarSet0_64, &check_hlds__unify_proc__VarSet_66);
    }
#line 2094 "unify_proc.m"
    {
#line 2094 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__IntType_14, check_hlds__unify_proc__VarTypes0_65, &check_hlds__unify_proc__VarTypes_67);
    }
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
    {
#line 2096 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_66));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_67));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2096 "unify_proc.m"
    }
#line 1018 "unify_proc.m"
    {
#line 1018 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__IntType_14, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_16, check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, &check_hlds__unify_proc__STATE_VARIABLE_Info_30_30);
    }
#line 1019 "unify_proc.m"
    {
#line 1019 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_9, check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastXGoal_17);
    }
#line 1020 "unify_proc.m"
    {
#line 1020 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_10, check_hlds__unify_proc__CastY_16, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastYGoal_18);
    }
#line 1021 "unify_proc.m"
    {
#line 1021 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_16));
#line 1021 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "unify_proc.m"
    }
#line 1021 "unify_proc.m"
    {
#line 1021 "unify_proc.m"
      check_hlds__unify_proc__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_15));
#line 1021 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 1021 "unify_proc.m"
    }
#line 1021 "unify_proc.m"
    {
#line 1021 "unify_proc.m"
      check_hlds__unify_proc__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_34_34, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1021 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_34_34, 1) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 1021 "unify_proc.m"
    }
#line 1021 "unify_proc.m"
    {
#line 1021 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_int", check_hlds__unify_proc__V_34_34, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CompareGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
    }
#line 1024 "unify_proc.m"
    {
#line 1024 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_20);
    }
#line 1025 "unify_proc.m"
    {
#line 1025 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_20, &check_hlds__unify_proc__GoalInfo_21);
    }
#line 1026 "unify_proc.m"
    {
#line 1026 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_19));
#line 1026 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "unify_proc.m"
    }
#line 1026 "unify_proc.m"
    {
#line 1026 "unify_proc.m"
      check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_18));
#line 1026 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 1026 "unify_proc.m"
    }
#line 1026 "unify_proc.m"
    {
#line 1026 "unify_proc.m"
      check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_17));
#line 1026 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1026 "unify_proc.m"
    }
#line 1026 "unify_proc.m"
    {
#line 1026 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_39_39, check_hlds__unify_proc__GoalInfo_21, &check_hlds__unify_proc__Goal_22);
    }
#line 1027 "unify_proc.m"
    {
#line 1027 "unify_proc.m"
      check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1027 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "unify_proc.m"
    }
#line 1027 "unify_proc.m"
    {
#line 1027 "unify_proc.m"
      check_hlds__unify_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1027 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1027 "unify_proc.m"
    }
#line 1027 "unify_proc.m"
    {
#line 1027 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1027 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_45_45));
#line 1027 "unify_proc.m"
    }
#line 1027 "unify_proc.m"
    {
#line 1027 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_43_43, check_hlds__unify_proc__Goal_22, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, check_hlds__unify_proc__STATE_VARIABLE_Info_24);
#line 1027 "unify_proc.m"
      return;
    }
#line 1015 "unify_proc.m"
  }
#line 1011 "unify_proc.m"
}

#line 990 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
#line 990 "unify_proc.m"
  MR_Word check_hlds__unify_proc__A_4,
#line 990 "unify_proc.m"
  MR_Word check_hlds__unify_proc__B_5,
#line 990 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Res_6)
#line 990 "unify_proc.m"
{
#line 993 "unify_proc.m"
  {
#line 993 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 993 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 993 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ArityA_7;
#line 993 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ArityB_8;
#line 993 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArityRes_9;
#line 993 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
#line 993 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_13_13;
#line 994 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
#line 994 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
#line 994 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
#line 994 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
#line 995 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20;
#line 995 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_21_21;
#line 995 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 995 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;

#line 994 "unify_proc.m"
    {
#line 994 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_32_32, check_hlds__unify_proc__V_12_12, &check_hlds__unify_proc__ArityA_7);
    }
#line 995 "unify_proc.m"
    check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
#line 995 "unify_proc.m"
    check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
#line 995 "unify_proc.m"
    check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
#line 995 "unify_proc.m"
    check_hlds__unify_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
#line 995 "unify_proc.m"
    check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
#line 995 "unify_proc.m"
    {
#line 995 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_32_32, check_hlds__unify_proc__V_13_13, &check_hlds__unify_proc__ArityB_8);
    }
#line 996 "unify_proc.m"
    {
#line 996 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__unify_proc__ArityRes_9, check_hlds__unify_proc__ArityA_7, check_hlds__unify_proc__ArityB_8);
    }
#line 1004 "unify_proc.m"
    if ((check_hlds__unify_proc__ArityRes_9 == (MR_Integer) 0))
#line 998 "unify_proc.m"
      {
#line 998 "unify_proc.m"
        MR_String check_hlds__unify_proc__NameA_10;
#line 998 "unify_proc.m"
        MR_String check_hlds__unify_proc__NameB_11;
#line 998 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
#line 998 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_15_15;
#line 1001 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
#line 1001 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
#line 1001 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
#line 1001 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
#line 1002 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_28_28;
#line 1002 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_29_29;
#line 1002 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_30_30;
#line 1002 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_31_31;

#line 1001 "unify_proc.m"
        {
#line 1001 "unify_proc.m"
          check_hlds__unify_proc__NameA_10 = mdbcomp__prim_data__unqualify_name_1_f_0(check_hlds__unify_proc__V_14_14);
        }
#line 1002 "unify_proc.m"
        check_hlds__unify_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
#line 1002 "unify_proc.m"
        check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
#line 1002 "unify_proc.m"
        check_hlds__unify_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
#line 1002 "unify_proc.m"
        check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
#line 1002 "unify_proc.m"
        check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
#line 1002 "unify_proc.m"
        {
#line 1002 "unify_proc.m"
          check_hlds__unify_proc__NameB_11 = mdbcomp__prim_data__unqualify_name_1_f_0(check_hlds__unify_proc__V_15_15);
        }
#line 1003 "unify_proc.m"
        {
#line 1003 "unify_proc.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__unify_proc__Res_6, check_hlds__unify_proc__NameA_10, check_hlds__unify_proc__NameB_11);
#line 1003 "unify_proc.m"
          return;
        }
#line 998 "unify_proc.m"
      }
#line 1004 "unify_proc.m"
    else
#line 1008 "unify_proc.m"
      *check_hlds__unify_proc__Res_6 = check_hlds__unify_proc__ArityRes_9;
#line 993 "unify_proc.m"
  }
#line 990 "unify_proc.m"
}

#line 902 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_11,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 902 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 902 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 902 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42)
#line 902 "unify_proc.m"
{
#line 907 "unify_proc.m"
  {
#line 907 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 907 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 910 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_19;
#line 910 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;

#line 910 "unify_proc.m"
    {
#line 910 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_19);
    }
#line 911 "unify_proc.m"
    {
#line 911 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_19);
    }
#line 911 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_43_43 == (MR_Integer) 0);
#line 914 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 913 "unify_proc.m"
      {
#line 913 "unify_proc.m"
        check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 913 "unify_proc.m"
        return;
      }
#line 914 "unify_proc.m"
    else
#line 920 "unify_proc.m"
      {
#line 920 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UserEqComp_20;

#line 915 "unify_proc.m"
        {
#line 915 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__TypeBody_11, &check_hlds__unify_proc__UserEqComp_20);
        }
#line 920 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 918 "unify_proc.m"
          {
#line 918 "unify_proc.m"
            check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(check_hlds__unify_proc__UserEqComp_20, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 918 "unify_proc.m"
            return;
          }
#line 920 "unify_proc.m"
        else
#line 952 "unify_proc.m"
          if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) == (MR_mktag((MR_Integer) 1))))
#line 922 "unify_proc.m"
            {
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__DuTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 3)));
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 1)));
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 2)));
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 4)));
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 5)));
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 922 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 7)));

#line 929 "unify_proc.m"
              if ((check_hlds__unify_proc__DuTypeKind_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 931 "unify_proc.m"
                {
#line 931 "unify_proc.m"
                  check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 931 "unify_proc.m"
                  return;
                }
#line 929 "unify_proc.m"
              else
#line 929 "unify_proc.m"
                if ((check_hlds__unify_proc__DuTypeKind_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 949 "unify_proc.m"
                  {
#line 949 "unify_proc.m"
                    check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 949 "unify_proc.m"
                    return;
                  }
#line 929 "unify_proc.m"
                else
#line 929 "unify_proc.m"
                  if (((MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_24)) == (MR_mktag((MR_Integer) 2))))
#line 935 "unify_proc.m"
                    {
#line 935 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__ArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 1)));
#line 935 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__IsDummyType_34;
#line 935 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 0)));
#line 935 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 2)));

#line 936 "unify_proc.m"
                      {
#line 936 "unify_proc.m"
                        check_hlds__unify_proc__IsDummyType_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__ArgType_32);
                      }
#line 942 "unify_proc.m"
                      if ((check_hlds__unify_proc__IsDummyType_34 == (MR_Integer) 0))
#line 940 "unify_proc.m"
                        {
#line 940 "unify_proc.m"
                          check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 940 "unify_proc.m"
                          return;
                        }
#line 942 "unify_proc.m"
                      else
#line 944 "unify_proc.m"
                        {
#line 944 "unify_proc.m"
                          check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 944 "unify_proc.m"
                          return;
                        }
#line 935 "unify_proc.m"
                    }
#line 929 "unify_proc.m"
                  else
#line 927 "unify_proc.m"
                    {
#line 927 "unify_proc.m"
                      check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 927 "unify_proc.m"
                      return;
                    }
#line 922 "unify_proc.m"
            }
#line 952 "unify_proc.m"
          else
#line 952 "unify_proc.m"
            if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) == (MR_mktag((MR_Integer) 2))))
#line 953 "unify_proc.m"
              {
#line 953 "unify_proc.m"
                MR_Word check_hlds__unify_proc__EqvType_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
#line 953 "unify_proc.m"
                MR_Word check_hlds__unify_proc__IsDummyType_60;

#line 954 "unify_proc.m"
                {
#line 954 "unify_proc.m"
                  check_hlds__unify_proc__IsDummyType_60 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__EqvType_35);
                }
#line 960 "unify_proc.m"
                if ((check_hlds__unify_proc__IsDummyType_60 == (MR_Integer) 0))
#line 958 "unify_proc.m"
                  {
#line 958 "unify_proc.m"
                    check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 958 "unify_proc.m"
                    return;
                  }
#line 960 "unify_proc.m"
                else
#line 962 "unify_proc.m"
                  {
#line 962 "unify_proc.m"
                    check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__EqvType_35, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 962 "unify_proc.m"
                    return;
                  }
#line 953 "unify_proc.m"
              }
#line 952 "unify_proc.m"
            else
#line 952 "unify_proc.m"
              if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) == (MR_mktag((MR_Integer) 0))))
#line 966 "unify_proc.m"
                {
#line 966 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__V_51_51;

#line 967 "unify_proc.m"
                  {
#line 967 "unify_proc.m"
                    check_hlds__unify_proc__V_51_51 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  }
#line 967 "unify_proc.m"
                  {
#line 967 "unify_proc.m"
                    check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 967 "unify_proc.m"
                    return;
                  }
#line 966 "unify_proc.m"
                }
#line 952 "unify_proc.m"
              else
#line 952 "unify_proc.m"
                if (((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 979 "unify_proc.m"
                  {
#line 975 "unify_proc.m"
                    {
#line 975 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_18);
                    }
#line 979 "unify_proc.m"
                    if (check_hlds__unify_proc__succeeded)
#line 976 "unify_proc.m"
                      {
#line 976 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__TypeCategory_40;
#line 976 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__ArgVars_74;
#line 976 "unify_proc.m"
                        MR_String check_hlds__unify_proc__Name_75;
#line 976 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__CompareGoal_79;
#line 976 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_80_80;
#line 976 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_81_81;
#line 976 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_34_90;

#line 976 "unify_proc.m"
                        {
#line 976 "unify_proc.m"
                          check_hlds__unify_proc__TypeCategory_40 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__Type_10);
                        }
#line 1043 "unify_proc.m"
                        {
#line 1043 "unify_proc.m"
                          check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1043 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "unify_proc.m"
                        }
#line 1043 "unify_proc.m"
                        {
#line 1043 "unify_proc.m"
                          check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1043 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 1043 "unify_proc.m"
                        }
#line 1043 "unify_proc.m"
                        {
#line 1043 "unify_proc.m"
                          check_hlds__unify_proc__ArgVars_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_74, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1043 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_74, 1) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 1043 "unify_proc.m"
                        }
#line 1050 "unify_proc.m"
                        if ((check_hlds__unify_proc__TypeCategory_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "unify_proc.m"
                          check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_pred";
#line 1050 "unify_proc.m"
                        else
#line 1050 "unify_proc.m"
                          if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeCategory_40)) == (MR_mktag((MR_Integer) 1))))
#line 1050 "unify_proc.m"
                            {
#line 1050 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeCategory_40, (MR_Integer) 0)));

#line 1050 "unify_proc.m"
                              if ((check_hlds__unify_proc__V_92_92 == (MR_Integer) 2))
#line 1052 "unify_proc.m"
                                check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_character";
#line 1050 "unify_proc.m"
                              else
#line 1050 "unify_proc.m"
                                if ((check_hlds__unify_proc__V_92_92 == (MR_Integer) 1))
#line 1058 "unify_proc.m"
                                  check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_float";
#line 1050 "unify_proc.m"
                                else
#line 1050 "unify_proc.m"
                                  if ((check_hlds__unify_proc__V_92_92 == (MR_Integer) 0))
#line 1049 "unify_proc.m"
                                    check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_int";
#line 1050 "unify_proc.m"
                                  else
#line 1055 "unify_proc.m"
                                    check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_string";
#line 1050 "unify_proc.m"
                            }
#line 1050 "unify_proc.m"
                          else
#line 1070 "unify_proc.m"
                            {
#line 1071 "unify_proc.m"
                              {
#line 1071 "unify_proc.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
#line 1071 "unify_proc.m"
                                return;
                              }
#line 1070 "unify_proc.m"
                            }
#line 1073 "unify_proc.m"
                        {
#line 1073 "unify_proc.m"
                          check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_75, check_hlds__unify_proc__ArgVars_74, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__CompareGoal_79, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, &check_hlds__unify_proc__STATE_VARIABLE_Info_34_90);
                        }
#line 1074 "unify_proc.m"
                        {
#line 1074 "unify_proc.m"
                          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_74, check_hlds__unify_proc__CompareGoal_79, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_34_90, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 1074 "unify_proc.m"
                          return;
                        }
#line 976 "unify_proc.m"
                      }
#line 979 "unify_proc.m"
                    else
#line 980 "unify_proc.m"
                      {
#line 980 "unify_proc.m"
                        {
#line 980 "unify_proc.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/9", (MR_String) "trying to create compare proc for abstract type");
#line 980 "unify_proc.m"
                          return;
                        }
#line 980 "unify_proc.m"
                      }
#line 979 "unify_proc.m"
                  }
#line 952 "unify_proc.m"
                else
#line 971 "unify_proc.m"
                  {
#line 971 "unify_proc.m"
                    check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 971 "unify_proc.m"
                    return;
                  }
#line 920 "unify_proc.m"
      }
#line 907 "unify_proc.m"
  }
#line 902 "unify_proc.m"
}

#line 835 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 835 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 835 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_37,
#line 835 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_38)
#line 835 "unify_proc.m"
{
#line 839 "unify_proc.m"
  {
#line 839 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 839 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 3)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 2)));
#line 841 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17;

#line 841 "unify_proc.m"
    {
#line 841 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__V_17_17);
    }
#line 848 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 846 "unify_proc.m"
      {
#line 846 "unify_proc.m"
        {
#line 846 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for non-canonical type");
#line 846 "unify_proc.m"
          return;
        }
#line 846 "unify_proc.m"
      }
#line 848 "unify_proc.m"
    else
#line 877 "unify_proc.m"
      if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 1))))
#line 850 "unify_proc.m"
        {
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Ctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__DuTypeKind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 850 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

#line 859 "unify_proc.m"
          if ((check_hlds__unify_proc__DuTypeKind_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 864 "unify_proc.m"
            {
#line 865 "unify_proc.m"
              {
#line 865 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for dummy type");
#line 865 "unify_proc.m"
                return;
              }
#line 864 "unify_proc.m"
            }
#line 859 "unify_proc.m"
          else
#line 859 "unify_proc.m"
            if ((check_hlds__unify_proc__DuTypeKind_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 872 "unify_proc.m"
              {
#line 872 "unify_proc.m"
                MR_Word check_hlds__unify_proc__TypeCtor_31;

#line 873 "unify_proc.m"
                {
#line 873 "unify_proc.m"
                  parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_31);
                }
#line 874 "unify_proc.m"
                {
#line 874 "unify_proc.m"
                  check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_31, check_hlds__unify_proc__Ctors_18, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Index_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, check_hlds__unify_proc__STATE_VARIABLE_Info_38);
#line 874 "unify_proc.m"
                  return;
                }
#line 872 "unify_proc.m"
              }
#line 859 "unify_proc.m"
            else
#line 859 "unify_proc.m"
              if ((check_hlds__unify_proc__DuTypeKind_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 856 "unify_proc.m"
                {
#line 857 "unify_proc.m"
                  {
#line 857 "unify_proc.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for enum type");
#line 857 "unify_proc.m"
                    return;
                  }
#line 856 "unify_proc.m"
                }
#line 859 "unify_proc.m"
              else
#line 859 "unify_proc.m"
                if (((MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_21)) == (MR_mktag((MR_Integer) 1))))
#line 860 "unify_proc.m"
                  {
#line 861 "unify_proc.m"
                    {
#line 861 "unify_proc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for foreign enum type");
#line 861 "unify_proc.m"
                      return;
                    }
#line 860 "unify_proc.m"
                  }
#line 859 "unify_proc.m"
                else
#line 868 "unify_proc.m"
                  {
#line 869 "unify_proc.m"
                    {
#line 869 "unify_proc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for notag type");
#line 869 "unify_proc.m"
                      return;
                    }
#line 868 "unify_proc.m"
                  }
#line 850 "unify_proc.m"
        }
#line 877 "unify_proc.m"
      else
#line 877 "unify_proc.m"
        if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 2))))
#line 878 "unify_proc.m"
          {
#line 885 "unify_proc.m"
            {
#line 885 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for eqv type");
#line 885 "unify_proc.m"
              return;
            }
#line 878 "unify_proc.m"
          }
#line 877 "unify_proc.m"
        else
#line 877 "unify_proc.m"
          if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 888 "unify_proc.m"
            {
#line 889 "unify_proc.m"
              {
#line 889 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a foreign type");
#line 889 "unify_proc.m"
                return;
              }
#line 888 "unify_proc.m"
            }
#line 877 "unify_proc.m"
          else
#line 877 "unify_proc.m"
            if (((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 896 "unify_proc.m"
              {
#line 897 "unify_proc.m"
                {
#line 897 "unify_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for abstract type");
#line 897 "unify_proc.m"
                  return;
                }
#line 896 "unify_proc.m"
              }
#line 877 "unify_proc.m"
            else
#line 892 "unify_proc.m"
              {
#line 893 "unify_proc.m"
                {
#line 893 "unify_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a solver type");
#line 893 "unify_proc.m"
                  return;
                }
#line 892 "unify_proc.m"
              }
#line 839 "unify_proc.m"
  }
#line 835 "unify_proc.m"
}

#line 804 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_8,
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 804 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 804 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 804 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
#line 804 "unify_proc.m"
{
#line 808 "unify_proc.m"
  {
#line 808 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_14;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_15;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_16;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_17;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyGoal_18;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_19;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_20;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_21;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_26_26;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_29_29;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_39_39;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 808 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_50;
#line 808 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_51;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_59;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_60;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_61;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_62;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_73_73;
#line 808 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_74_74;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_66_66;
#line 2091 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_67_67;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_71_71;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;

#line 1848 "unify_proc.m"
    {
#line 1848 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_50);
    }
#line 1849 "unify_proc.m"
    {
#line 1849 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_50, &check_hlds__unify_proc__Name_51);
    }
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 2091 "unify_proc.m"
    check_hlds__unify_proc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 2093 "unify_proc.m"
    {
#line 2093 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_51, &check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__VarSet0_59, &check_hlds__unify_proc__VarSet_61);
    }
#line 2094 "unify_proc.m"
    {
#line 2094 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__EqvType_8, check_hlds__unify_proc__VarTypes0_60, &check_hlds__unify_proc__VarTypes_62);
    }
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 2095 "unify_proc.m"
    check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
    {
#line 2096 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_61));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_62));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (check_hlds__unify_proc__V_73_73));
#line 2096 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
#line 2096 "unify_proc.m"
    }
#line 817 "unify_proc.m"
    {
#line 817 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_8, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_15, check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, &check_hlds__unify_proc__STATE_VARIABLE_Info_29_29);
    }
#line 818 "unify_proc.m"
    {
#line 818 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__X_9, check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastXGoal_16);
    }
#line 819 "unify_proc.m"
    {
#line 819 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__Y_10, check_hlds__unify_proc__CastY_15, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastYGoal_17);
    }
#line 820 "unify_proc.m"
    {
#line 820 "unify_proc.m"
      check_hlds__unify_proc__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 820 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_15));
#line 820 "unify_proc.m"
    }
#line 820 "unify_proc.m"
    {
#line 820 "unify_proc.m"
      hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__V_32_32, check_hlds__unify_proc__Context_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_18);
    }
#line 823 "unify_proc.m"
    {
#line 823 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_19);
    }
#line 824 "unify_proc.m"
    {
#line 824 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_19, &check_hlds__unify_proc__GoalInfo_20);
    }
#line 825 "unify_proc.m"
    {
#line 825 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_18));
#line 825 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "unify_proc.m"
    }
#line 825 "unify_proc.m"
    {
#line 825 "unify_proc.m"
      check_hlds__unify_proc__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_17));
#line 825 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 825 "unify_proc.m"
    }
#line 825 "unify_proc.m"
    {
#line 825 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_16));
#line 825 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 825 "unify_proc.m"
    }
#line 825 "unify_proc.m"
    {
#line 825 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_35_35, check_hlds__unify_proc__GoalInfo_20, &check_hlds__unify_proc__Goal_21);
    }
#line 826 "unify_proc.m"
    {
#line 826 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 826 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "unify_proc.m"
    }
#line 826 "unify_proc.m"
    {
#line 826 "unify_proc.m"
      check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 826 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 826 "unify_proc.m"
    }
#line 826 "unify_proc.m"
    {
#line 826 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_39_39, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_29_29, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
#line 826 "unify_proc.m"
      return;
    }
#line 808 "unify_proc.m"
  }
#line 804 "unify_proc.m"
}

#line 752 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UserEqCompare_1,
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_2,
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_3,
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_4,
#line 752 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_5,
#line 752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 752 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
#line 752 "unify_proc.m"
{
#line 756 "unify_proc.m"
  {
#line 756 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 756 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__UserEqCompare_1)) == (MR_mktag((MR_Integer) 1))))
#line 756 "unify_proc.m"
      {
#line 758 "unify_proc.m"
        {
#line 758 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "trying to create unify proc for abstract noncanonical type");
#line 758 "unify_proc.m"
          return;
        }
#line 756 "unify_proc.m"
      }
#line 756 "unify_proc.m"
    else
#line 761 "unify_proc.m"
      {
#line 761 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeUnify_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 0)));
#line 761 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeCompare_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 1)));
#line 761 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_33;
#line 761 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_38;
#line 761 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
#line 761 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_67_67;
#line 761 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_68_68;
#line 761 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_70_70;

#line 775 "unify_proc.m"
        if ((check_hlds__unify_proc__MaybeUnify_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "unify_proc.m"
          if ((check_hlds__unify_proc__MaybeCompare_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "unify_proc.m"
            {
#line 798 "unify_proc.m"
              {
#line 798 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "MaybeCompare = no");
#line 798 "unify_proc.m"
                return;
              }
#line 797 "unify_proc.m"
            }
#line 796 "unify_proc.m"
          else
#line 778 "unify_proc.m"
            {
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ComparePredName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_27, (MR_Integer) 0)));
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ResultVar_35;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__CallGoal_36;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__UnifyGoal_37;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_44_44;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_46_46;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_47_47;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_48_48;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_52_52;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_56_56;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_58_58;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_59_59;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__PredId_72;
#line 778 "unify_proc.m"
              MR_Integer check_hlds__unify_proc__ModeId_73;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Call_74;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__GoalInfo_75;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_85_85;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__SymName_89;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_91_91;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_92_92;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Builtin_94;
#line 778 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_95_95;

#line 784 "unify_proc.m"
              {
#line 784 "unify_proc.m"
                check_hlds__unify_proc__V_44_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              }
#line 784 "unify_proc.m"
              {
#line 784 "unify_proc.m"
                check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_44_44, &check_hlds__unify_proc__ResultVar_35, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
              }
#line 785 "unify_proc.m"
              {
#line 785 "unify_proc.m"
                check_hlds__unify_proc__PredId_72 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              }
#line 786 "unify_proc.m"
              {
#line 786 "unify_proc.m"
                check_hlds__unify_proc__ModeId_73 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              }
#line 787 "unify_proc.m"
              {
#line 787 "unify_proc.m"
                check_hlds__unify_proc__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "unify_proc.m"
              }
#line 787 "unify_proc.m"
              {
#line 787 "unify_proc.m"
                check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_48_48));
#line 787 "unify_proc.m"
              }
#line 787 "unify_proc.m"
              {
#line 787 "unify_proc.m"
                check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__ResultVar_35));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_47_47));
#line 787 "unify_proc.m"
              }
#line 787 "unify_proc.m"
              {
#line 787 "unify_proc.m"
                check_hlds__unify_proc__Call_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_72));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_73));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 2) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 3) = ((MR_Box) ((MR_Integer) 2));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_34));
#line 787 "unify_proc.m"
              }
#line 789 "unify_proc.m"
              {
#line 789 "unify_proc.m"
                hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_75);
              }
#line 790 "unify_proc.m"
              {
#line 790 "unify_proc.m"
                check_hlds__unify_proc__CallGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_36, 0) = ((MR_Box) (check_hlds__unify_proc__Call_74));
#line 790 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_36, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_75));
#line 790 "unify_proc.m"
              }
#line 2029 "unify_proc.m"
              {
#line 2029 "unify_proc.m"
                check_hlds__unify_proc__Builtin_94 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
              }
#line 2030 "unify_proc.m"
              {
#line 2030 "unify_proc.m"
                check_hlds__unify_proc__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_95_95, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_94));
#line 2030 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_95_95, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2030 "unify_proc.m"
              }
#line 2030 "unify_proc.m"
              {
#line 2030 "unify_proc.m"
                check_hlds__unify_proc__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2030 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_91_91, 0) = ((MR_Box) (check_hlds__unify_proc__V_95_95));
#line 2030 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_91_91, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2030 "unify_proc.m"
              }
#line 2035 "unify_proc.m"
              {
#line 2035 "unify_proc.m"
                check_hlds__unify_proc__V_92_92 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
              }
#line 2035 "unify_proc.m"
              {
#line 2035 "unify_proc.m"
                check_hlds__unify_proc__SymName_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_89, 0) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
#line 2035 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_89, 1) = ((MR_Box) ((MR_String) "="));
#line 2035 "unify_proc.m"
              }
#line 2034 "unify_proc.m"
              {
#line 2034 "unify_proc.m"
                check_hlds__unify_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2034 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_89));
#line 2034 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 3) = ((MR_Box) (check_hlds__unify_proc__V_91_91));
#line 2034 "unify_proc.m"
              }
#line 2039 "unify_proc.m"
              {
#line 2039 "unify_proc.m"
                check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__V_85_85));
#line 2039 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2039 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2039 "unify_proc.m"
              }
#line 792 "unify_proc.m"
              {
#line 792 "unify_proc.m"
                hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__ResultVar_35, check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_37);
              }
#line 794 "unify_proc.m"
              {
#line 794 "unify_proc.m"
                check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_37));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "unify_proc.m"
              }
#line 794 "unify_proc.m"
              {
#line 794 "unify_proc.m"
                check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__CallGoal_36));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 794 "unify_proc.m"
              }
#line 794 "unify_proc.m"
              {
#line 794 "unify_proc.m"
                check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) ((MR_Integer) 0));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 2) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 794 "unify_proc.m"
              }
#line 794 "unify_proc.m"
              {
#line 794 "unify_proc.m"
                check_hlds__unify_proc__Goal0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 0) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_75));
#line 794 "unify_proc.m"
              }
#line 778 "unify_proc.m"
            }
#line 775 "unify_proc.m"
        else
#line 764 "unify_proc.m"
          {
#line 764 "unify_proc.m"
            MR_Word check_hlds__unify_proc__UnifyPredName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeUnify_26, (MR_Integer) 0)));
#line 764 "unify_proc.m"
            MR_Word check_hlds__unify_proc__PredId_29;
#line 764 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__ModeId_30;
#line 764 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Call_31;
#line 764 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_32;
#line 764 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_61_61;
#line 764 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_62_62;

#line 769 "unify_proc.m"
            {
#line 769 "unify_proc.m"
              check_hlds__unify_proc__PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 770 "unify_proc.m"
            {
#line 770 "unify_proc.m"
              check_hlds__unify_proc__ModeId_30 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 771 "unify_proc.m"
            {
#line 771 "unify_proc.m"
              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "unify_proc.m"
            }
#line 771 "unify_proc.m"
            {
#line 771 "unify_proc.m"
              check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 1) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 771 "unify_proc.m"
            }
#line 771 "unify_proc.m"
            {
#line 771 "unify_proc.m"
              check_hlds__unify_proc__Call_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_29));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_30));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 2) = ((MR_Box) (check_hlds__unify_proc__V_61_61));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 3) = ((MR_Box) ((MR_Integer) 2));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 5) = ((MR_Box) (check_hlds__unify_proc__UnifyPredName_28));
#line 771 "unify_proc.m"
            }
#line 773 "unify_proc.m"
            {
#line 773 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_32);
            }
#line 774 "unify_proc.m"
            {
#line 774 "unify_proc.m"
              check_hlds__unify_proc__Goal0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 774 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 0) = ((MR_Box) (check_hlds__unify_proc__Call_31));
#line 774 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_32));
#line 774 "unify_proc.m"
            }
#line 774 "unify_proc.m"
            check_hlds__unify_proc__STATE_VARIABLE_Info_45_45 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 764 "unify_proc.m"
          }
#line 801 "unify_proc.m"
        {
#line 801 "unify_proc.m"
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_4, check_hlds__unify_proc__X_2, check_hlds__unify_proc__Y_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_33, &check_hlds__unify_proc__Goal_38, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_67_67);
        }
#line 802 "unify_proc.m"
        {
#line 802 "unify_proc.m"
          check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 802 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "unify_proc.m"
        }
#line 802 "unify_proc.m"
        {
#line 802 "unify_proc.m"
          check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 802 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
#line 802 "unify_proc.m"
        }
#line 802 "unify_proc.m"
        {
#line 802 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_68_68, check_hlds__unify_proc__Goal_38, check_hlds__unify_proc__Context_4, check_hlds__unify_proc__Clause_5, check_hlds__unify_proc__STATE_VARIABLE_Info_67_67, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
#line 802 "unify_proc.m"
          return;
        }
#line 761 "unify_proc.m"
      }
#line 756 "unify_proc.m"
  }
#line 752 "unify_proc.m"
}

#line 714 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorCat_8,
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 714 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 714 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 714 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21)
#line 714 "unify_proc.m"
{
#line 718 "unify_proc.m"
  {
#line 718 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 718 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_14;
#line 718 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_15;
#line 718 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyGoal_19;
#line 718 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 718 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;

#line 719 "unify_proc.m"
    {
#line 719 "unify_proc.m"
      check_hlds__unify_proc__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_22_22, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 719 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "unify_proc.m"
    }
#line 719 "unify_proc.m"
    {
#line 719 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 719 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__V_22_22));
#line 719 "unify_proc.m"
    }
#line 726 "unify_proc.m"
    if ((check_hlds__unify_proc__CtorCat_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "unify_proc.m"
      check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_pred";
#line 726 "unify_proc.m"
    else
#line 726 "unify_proc.m"
      if (((MR_tag((MR_Word) check_hlds__unify_proc__CtorCat_8)) == (MR_mktag((MR_Integer) 1))))
#line 726 "unify_proc.m"
        {
#line 726 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__CtorCat_8, (MR_Integer) 0)));

#line 726 "unify_proc.m"
          if ((check_hlds__unify_proc__V_33_33 == (MR_Integer) 2))
#line 728 "unify_proc.m"
            check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_character";
#line 726 "unify_proc.m"
          else
#line 726 "unify_proc.m"
            if ((check_hlds__unify_proc__V_33_33 == (MR_Integer) 1))
#line 734 "unify_proc.m"
              check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_float";
#line 726 "unify_proc.m"
            else
#line 726 "unify_proc.m"
              if ((check_hlds__unify_proc__V_33_33 == (MR_Integer) 0))
#line 725 "unify_proc.m"
                check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_int";
#line 726 "unify_proc.m"
              else
#line 731 "unify_proc.m"
                check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_string";
#line 726 "unify_proc.m"
        }
#line 726 "unify_proc.m"
      else
#line 746 "unify_proc.m"
        {
#line 747 "unify_proc.m"
          {
#line 747 "unify_proc.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
#line 747 "unify_proc.m"
            return;
          }
#line 746 "unify_proc.m"
        }
#line 749 "unify_proc.m"
    {
#line 749 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_15, check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
    }
#line 750 "unify_proc.m"
    {
#line 750 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_21);
#line 750 "unify_proc.m"
      return;
    }
#line 718 "unify_proc.m"
  }
#line 714 "unify_proc.m"
}

#line 628 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 628 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 628 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 628 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
#line 628 "unify_proc.m"
{
#line 632 "unify_proc.m"
  {
#line 632 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 632 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 632 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_17;
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 636 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_42_42;

#line 634 "unify_proc.m"
    {
#line 634 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_17);
    }
#line 636 "unify_proc.m"
    {
#line 636 "unify_proc.m"
      check_hlds__unify_proc__V_42_42 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_17);
    }
#line 636 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_42_42 == (MR_Integer) 0);
#line 640 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 638 "unify_proc.m"
      {
#line 638 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_18;
#line 638 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_43_43;
#line 638 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_45_45;

#line 638 "unify_proc.m"
        {
#line 638 "unify_proc.m"
          check_hlds__unify_proc__Goal_18 = hlds__hlds_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
        }
#line 639 "unify_proc.m"
        {
#line 639 "unify_proc.m"
          check_hlds__unify_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 639 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "unify_proc.m"
        }
#line 639 "unify_proc.m"
        {
#line 639 "unify_proc.m"
          check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 639 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_45_45));
#line 639 "unify_proc.m"
        }
#line 639 "unify_proc.m"
        {
#line 639 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_43_43, check_hlds__unify_proc__Goal_18, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 639 "unify_proc.m"
          return;
        }
#line 638 "unify_proc.m"
      }
#line 640 "unify_proc.m"
    else
#line 646 "unify_proc.m"
      {
#line 646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UserEqComp_19;

#line 641 "unify_proc.m"
        {
#line 641 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__UserEqComp_19);
        }
#line 646 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 644 "unify_proc.m"
          {
#line 644 "unify_proc.m"
            check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(check_hlds__unify_proc__UserEqComp_19, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 644 "unify_proc.m"
            return;
          }
#line 646 "unify_proc.m"
        else
#line 677 "unify_proc.m"
          if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 1))))
#line 648 "unify_proc.m"
            {
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__DuTypeKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 648 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

#line 655 "unify_proc.m"
              if ((check_hlds__unify_proc__DuTypeKind_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 656 "unify_proc.m"
                {
#line 656 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__V_66_66;
#line 656 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__V_68_68;
#line 656 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__Goal_77;

#line 657 "unify_proc.m"
                  {
#line 657 "unify_proc.m"
                    check_hlds__unify_proc__Goal_77 = hlds__hlds_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                  }
#line 658 "unify_proc.m"
                  {
#line 658 "unify_proc.m"
                    check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "unify_proc.m"
                    MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 658 "unify_proc.m"
                    MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "unify_proc.m"
                  }
#line 658 "unify_proc.m"
                  {
#line 658 "unify_proc.m"
                    check_hlds__unify_proc__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "unify_proc.m"
                    MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 658 "unify_proc.m"
                    MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
#line 658 "unify_proc.m"
                  }
#line 658 "unify_proc.m"
                  {
#line 658 "unify_proc.m"
                    check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_66_66, check_hlds__unify_proc__Goal_77, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 658 "unify_proc.m"
                    return;
                  }
#line 656 "unify_proc.m"
                }
#line 655 "unify_proc.m"
              else
#line 655 "unify_proc.m"
                if ((check_hlds__unify_proc__DuTypeKind_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 674 "unify_proc.m"
                  {
#line 674 "unify_proc.m"
                    check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 674 "unify_proc.m"
                    return;
                  }
#line 655 "unify_proc.m"
                else
#line 655 "unify_proc.m"
                  if (((MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_23)) == (MR_mktag((MR_Integer) 2))))
#line 660 "unify_proc.m"
                    {
#line 660 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__ArgType_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 1)));
#line 660 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__IsDummyType_33;
#line 660 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 0)));
#line 660 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 2)));

#line 661 "unify_proc.m"
                      {
#line 661 "unify_proc.m"
                        check_hlds__unify_proc__IsDummyType_33 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__ArgType_31);
                      }
#line 667 "unify_proc.m"
                      if ((check_hlds__unify_proc__IsDummyType_33 == (MR_Integer) 0))
#line 663 "unify_proc.m"
                        {
#line 663 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__V_62_62;
#line 663 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__V_64_64;
#line 663 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__Goal_78;

#line 665 "unify_proc.m"
                          {
#line 665 "unify_proc.m"
                            check_hlds__unify_proc__Goal_78 = hlds__hlds_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                          }
#line 666 "unify_proc.m"
                          {
#line 666 "unify_proc.m"
                            check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 666 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "unify_proc.m"
                          }
#line 666 "unify_proc.m"
                          {
#line 666 "unify_proc.m"
                            check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 666 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 666 "unify_proc.m"
                          }
#line 666 "unify_proc.m"
                          {
#line 666 "unify_proc.m"
                            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_62_62, check_hlds__unify_proc__Goal_78, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 666 "unify_proc.m"
                            return;
                          }
#line 663 "unify_proc.m"
                        }
#line 667 "unify_proc.m"
                      else
#line 669 "unify_proc.m"
                        {
#line 669 "unify_proc.m"
                          check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 669 "unify_proc.m"
                          return;
                        }
#line 660 "unify_proc.m"
                    }
#line 655 "unify_proc.m"
                  else
#line 652 "unify_proc.m"
                    {
#line 652 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_72_72;
#line 652 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_74_74;
#line 652 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__Goal_76;

#line 653 "unify_proc.m"
                      {
#line 653 "unify_proc.m"
                        hlds__hlds_goal__make_simple_test_5_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_76);
                      }
#line 654 "unify_proc.m"
                      {
#line 654 "unify_proc.m"
                        check_hlds__unify_proc__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 654 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 654 "unify_proc.m"
                      }
#line 654 "unify_proc.m"
                      {
#line 654 "unify_proc.m"
                        check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 654 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
#line 654 "unify_proc.m"
                      }
#line 654 "unify_proc.m"
                      {
#line 654 "unify_proc.m"
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Goal_76, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 654 "unify_proc.m"
                        return;
                      }
#line 652 "unify_proc.m"
                    }
#line 648 "unify_proc.m"
            }
#line 677 "unify_proc.m"
          else
#line 677 "unify_proc.m"
            if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 2))))
#line 678 "unify_proc.m"
              {
#line 678 "unify_proc.m"
                MR_Word check_hlds__unify_proc__EqvType_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 678 "unify_proc.m"
                MR_Word check_hlds__unify_proc__IsDummyType_86;

#line 679 "unify_proc.m"
                {
#line 679 "unify_proc.m"
                  check_hlds__unify_proc__IsDummyType_86 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__EqvType_34);
                }
#line 685 "unify_proc.m"
                if ((check_hlds__unify_proc__IsDummyType_86 == (MR_Integer) 0))
#line 681 "unify_proc.m"
                  {
#line 681 "unify_proc.m"
                    MR_Word check_hlds__unify_proc__V_56_56;
#line 681 "unify_proc.m"
                    MR_Word check_hlds__unify_proc__V_58_58;
#line 681 "unify_proc.m"
                    MR_Word check_hlds__unify_proc__Goal_83;

#line 683 "unify_proc.m"
                    {
#line 683 "unify_proc.m"
                      check_hlds__unify_proc__Goal_83 = hlds__hlds_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                    }
#line 684 "unify_proc.m"
                    {
#line 684 "unify_proc.m"
                      check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 684 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "unify_proc.m"
                    }
#line 684 "unify_proc.m"
                    {
#line 684 "unify_proc.m"
                      check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 684 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 684 "unify_proc.m"
                    }
#line 684 "unify_proc.m"
                    {
#line 684 "unify_proc.m"
                      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_56_56, check_hlds__unify_proc__Goal_83, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 684 "unify_proc.m"
                      return;
                    }
#line 681 "unify_proc.m"
                  }
#line 685 "unify_proc.m"
                else
#line 687 "unify_proc.m"
                  {
#line 687 "unify_proc.m"
                    check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__EqvType_34, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 687 "unify_proc.m"
                    return;
                  }
#line 678 "unify_proc.m"
              }
#line 677 "unify_proc.m"
            else
#line 677 "unify_proc.m"
              if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 695 "unify_proc.m"
                {
#line 695 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__V_52_52;

#line 699 "unify_proc.m"
                  {
#line 699 "unify_proc.m"
                    check_hlds__unify_proc__V_52_52 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                  }
#line 699 "unify_proc.m"
                  {
#line 699 "unify_proc.m"
                    check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 699 "unify_proc.m"
                    return;
                  }
#line 695 "unify_proc.m"
                }
#line 677 "unify_proc.m"
              else
#line 677 "unify_proc.m"
                if (((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 707 "unify_proc.m"
                  {
#line 703 "unify_proc.m"
                    {
#line 703 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_16);
                    }
#line 707 "unify_proc.m"
                    if (check_hlds__unify_proc__succeeded)
#line 704 "unify_proc.m"
                      {
#line 704 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__TypeCategory_39;

#line 704 "unify_proc.m"
                        {
#line 704 "unify_proc.m"
                          check_hlds__unify_proc__TypeCategory_39 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__Type_9);
                        }
#line 705 "unify_proc.m"
                        {
#line 705 "unify_proc.m"
                          check_hlds__unify_proc__generate_builtin_unify_7_p_0(check_hlds__unify_proc__TypeCategory_39, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 705 "unify_proc.m"
                          return;
                        }
#line 704 "unify_proc.m"
                      }
#line 707 "unify_proc.m"
                    else
#line 708 "unify_proc.m"
                      {
#line 708 "unify_proc.m"
                        {
#line 708 "unify_proc.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/8", (MR_String) "trying to create unify proc for abstract type");
#line 708 "unify_proc.m"
                          return;
                        }
#line 708 "unify_proc.m"
                      }
#line 707 "unify_proc.m"
                  }
#line 677 "unify_proc.m"
                else
#line 692 "unify_proc.m"
                  {
#line 692 "unify_proc.m"
                    check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 692 "unify_proc.m"
                    return;
                  }
#line 646 "unify_proc.m"
      }
#line 632 "unify_proc.m"
  }
#line 628 "unify_proc.m"
}

#line 479 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
#line 479 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 479 "unify_proc.m"
{
#line 479 "unify_proc.m"
  {
#line 479 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 479 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 479 "unify_proc.m"
    {
#line 479 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__479__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
    }
#line 479 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 479 "unify_proc.m"
  }
#line 479 "unify_proc.m"
}

#line 446 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialId_12,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Item_13,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TVarSet_14,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_15,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_16,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_17,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PredStatus_19,
#line 446 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_20,
#line 446 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26,
#line 446 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27)
#line 446 "unify_proc.m"
{
#line 452 "unify_proc.m"
  {
#line 452 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 452 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeInfo_38_38;
#line 452 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtorInfo_39_39;
#line 452 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ErrorProcs_24;
#line 452 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo_25;
#line 452 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29;
#line 452 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30;
#line 452 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 452 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36;

#line 465 "unify_proc.m"
    {
#line 465 "unify_proc.m"
      check_hlds__unify_proc__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__SpecialId_12));
#line 465 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_16));
#line 465 "unify_proc.m"
    }
#line 12364 "check_hlds.unify_proc.c"
    check_hlds__unify_proc__TypeInfo_38_38 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
#line 12366 "check_hlds.unify_proc.c"
    check_hlds__unify_proc__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 12368 "check_hlds.unify_proc.c"
    if ((check_hlds__unify_proc__Item_13 == (MR_Integer) 1))
#line 12370 "check_hlds.unify_proc.c"
      {
#line 12372 "check_hlds.unify_proc.c"
        MR_Word check_hlds__unify_proc__SpecialPredMap_22;
#line 12374 "check_hlds.unify_proc.c"
        MR_Word check_hlds__unify_proc__PredInfo0_23;
#line 465 "unify_proc.m"
        MR_Box check_hlds__unify_proc__conv0_PredId_20;

#line 456 "unify_proc.m"
        {
#line 456 "unify_proc.m"
          hlds__make_hlds__add_special_pred_for_real_9_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__TypeBody_17, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__PredStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29);
        }
#line 464 "unify_proc.m"
        {
#line 464 "unify_proc.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__SpecialPredMap_22);
        }
#line 465 "unify_proc.m"
        {
#line 465 "unify_proc.m"
          mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeInfo_38_38, check_hlds__unify_proc__TypeCtorInfo_39_39, check_hlds__unify_proc__SpecialPredMap_22, ((MR_Box) (check_hlds__unify_proc__V_30_30)), &check_hlds__unify_proc__conv0_PredId_20);
        }
#line 465 "unify_proc.m"
        *check_hlds__unify_proc__PredId_20 = ((MR_Word) check_hlds__unify_proc__conv0_PredId_20);
#line 466 "unify_proc.m"
        {
#line 466 "unify_proc.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo0_23);
        }
#line 472 "unify_proc.m"
        {
#line 472 "unify_proc.m"
          check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__ErrorProcs_24, check_hlds__unify_proc__PredInfo0_23, &check_hlds__unify_proc__PredInfo_25);
        }
#line 12406 "check_hlds.unify_proc.c"
      }
#line 12408 "check_hlds.unify_proc.c"
    else
#line 12410 "check_hlds.unify_proc.c"
      {
#line 12412 "check_hlds.unify_proc.c"
        MR_Word check_hlds__unify_proc__SpecialPredMap_41;
#line 12414 "check_hlds.unify_proc.c"
        MR_Word check_hlds__unify_proc__PredInfo0_42;
#line 465 "unify_proc.m"
        MR_Box check_hlds__unify_proc__conv1_PredId_20;

#line 460 "unify_proc.m"
        {
#line 460 "unify_proc.m"
          hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__PredStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29);
        }
#line 464 "unify_proc.m"
        {
#line 464 "unify_proc.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__SpecialPredMap_41);
        }
#line 465 "unify_proc.m"
        {
#line 465 "unify_proc.m"
          mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeInfo_38_38, check_hlds__unify_proc__TypeCtorInfo_39_39, check_hlds__unify_proc__SpecialPredMap_41, ((MR_Box) (check_hlds__unify_proc__V_30_30)), &check_hlds__unify_proc__conv1_PredId_20);
        }
#line 465 "unify_proc.m"
        *check_hlds__unify_proc__PredId_20 = ((MR_Word) check_hlds__unify_proc__conv1_PredId_20);
#line 466 "unify_proc.m"
        {
#line 466 "unify_proc.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo0_42);
        }
#line 476 "unify_proc.m"
        {
#line 476 "unify_proc.m"
          check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__ErrorProcs_24, check_hlds__unify_proc__PredInfo0_42, &check_hlds__unify_proc__PredInfo_25);
        }
#line 12446 "check_hlds.unify_proc.c"
      }
#line 479 "unify_proc.m"
    {
#line 479 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1));
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_24));
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "unify_proc.m"
    }
#line 479 "unify_proc.m"
    {
#line 479 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_31_31, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__PredInfo_25, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36);
    }
#line 489 "unify_proc.m"
    {
#line 489 "unify_proc.m"
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27);
#line 489 "unify_proc.m"
      return;
    }
#line 452 "unify_proc.m"
  }
#line 446 "unify_proc.m"
}

#line 123 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__generate_clause_info_6_p_0(
#line 123 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialPredId_7,
#line 123 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_8,
#line 123 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_9,
#line 123 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_10,
#line 123 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ModuleInfo_11,
#line 123 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__ClauseInfo_12)
#line 123 "unify_proc.m"
{
#line 516 "unify_proc.m"
  {
#line 516 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_13;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Args_17;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Clause_20;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_23;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types_24;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarNameMap_25;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVec_26;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ClausesRep_27;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_28;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_30_30;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_33_33;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_54_54;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_59_59;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_62_62;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_76;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_77;
#line 516 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_78;
#line 517 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Modes_14;
#line 517 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Det_15;
#line 2098 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_82_82;
#line 2098 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_83_83;

#line 517 "unify_proc.m"
    {
#line 517 "unify_proc.m"
      hlds__special_pred__special_pred_interface_5_p_0(check_hlds__unify_proc__SpecialPredId_7, check_hlds__unify_proc__Type_8, &check_hlds__unify_proc__ArgTypes_13, &check_hlds__unify_proc___Modes_14, &check_hlds__unify_proc___Det_15);
    }
#line 2077 "unify_proc.m"
    {
#line 2077 "unify_proc.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__VarSet_76);
    }
#line 2078 "unify_proc.m"
    {
#line 2078 "unify_proc.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&check_hlds__unify_proc__VarTypes_77);
    }
#line 2079 "unify_proc.m"
    {
#line 2079 "unify_proc.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_78);
    }
#line 2080 "unify_proc.m"
    {
#line 2080 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2080 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_76));
#line 2080 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_77));
#line 2080 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_78));
#line 2080 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (check_hlds__unify_proc__ModuleInfo_11));
#line 2080 "unify_proc.m"
    }
#line 520 "unify_proc.m"
    {
#line 520 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__ArgTypes_13, (MR_String) "HeadVar__", (MR_Integer) 1, &check_hlds__unify_proc__Args_17, check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_33_33);
    }
#line 530 "unify_proc.m"
    if ((check_hlds__unify_proc__SpecialPredId_7 == (MR_Integer) 2))
#line 543 "unify_proc.m"
      {
#line 543 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Res_22;
#line 543 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_65;
#line 543 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_66;
#line 540 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 540 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 540 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_41_41;

#line 540 "unify_proc.m"
        check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 540 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 540 "unify_proc.m"
          {
#line 540 "unify_proc.m"
            check_hlds__unify_proc__Res_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 540 "unify_proc.m"
            check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 540 "unify_proc.m"
            check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 540 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 540 "unify_proc.m"
              {
#line 540 "unify_proc.m"
                check_hlds__unify_proc__X_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, (MR_Integer) 0)));
#line 540 "unify_proc.m"
                check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, (MR_Integer) 1)));
#line 540 "unify_proc.m"
                check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 540 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 540 "unify_proc.m"
                  {
#line 540 "unify_proc.m"
                    check_hlds__unify_proc__Y_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, (MR_Integer) 0)));
#line 540 "unify_proc.m"
                    check_hlds__unify_proc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, (MR_Integer) 1)));
#line 540 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "unify_proc.m"
                  }
#line 540 "unify_proc.m"
              }
#line 540 "unify_proc.m"
          }
#line 543 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 541 "unify_proc.m"
          {
#line 541 "unify_proc.m"
            check_hlds__unify_proc__generate_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__Res_22, check_hlds__unify_proc__X_65, check_hlds__unify_proc__Y_66, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
          }
#line 543 "unify_proc.m"
        else
#line 544 "unify_proc.m"
          {
#line 544 "unify_proc.m"
            {
#line 544 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad compare args");
#line 544 "unify_proc.m"
              return;
            }
#line 544 "unify_proc.m"
          }
#line 543 "unify_proc.m"
      }
#line 530 "unify_proc.m"
    else
#line 530 "unify_proc.m"
      if ((check_hlds__unify_proc__SpecialPredId_7 == (MR_Integer) 1))
#line 535 "unify_proc.m"
        {
#line 535 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Index_21;
#line 535 "unify_proc.m"
          MR_Word check_hlds__unify_proc__X_63;
#line 532 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_46_46;
#line 532 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_47_47;

#line 532 "unify_proc.m"
          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 532 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 532 "unify_proc.m"
            {
#line 532 "unify_proc.m"
              check_hlds__unify_proc__X_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 532 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 532 "unify_proc.m"
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 532 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 532 "unify_proc.m"
                {
#line 532 "unify_proc.m"
                  check_hlds__unify_proc__Index_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, (MR_Integer) 0)));
#line 532 "unify_proc.m"
                  check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, (MR_Integer) 1)));
#line 532 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "unify_proc.m"
                }
#line 532 "unify_proc.m"
            }
#line 535 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 533 "unify_proc.m"
            {
#line 533 "unify_proc.m"
              check_hlds__unify_proc__generate_index_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_63, check_hlds__unify_proc__Index_21, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
            }
#line 535 "unify_proc.m"
          else
#line 536 "unify_proc.m"
            {
#line 536 "unify_proc.m"
              {
#line 536 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad index args");
#line 536 "unify_proc.m"
                return;
              }
#line 536 "unify_proc.m"
            }
#line 535 "unify_proc.m"
        }
#line 530 "unify_proc.m"
      else
#line 530 "unify_proc.m"
        if ((check_hlds__unify_proc__SpecialPredId_7 == (MR_Integer) 3))
#line 551 "unify_proc.m"
          {
#line 551 "unify_proc.m"
            MR_Word check_hlds__unify_proc__X_69;
#line 548 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_34_34;

#line 548 "unify_proc.m"
            check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 548 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 548 "unify_proc.m"
              {
#line 548 "unify_proc.m"
                check_hlds__unify_proc__X_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 548 "unify_proc.m"
                check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 548 "unify_proc.m"
                check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "unify_proc.m"
              }
#line 551 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 549 "unify_proc.m"
              {
#line 549 "unify_proc.m"
                check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_69, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
              }
#line 551 "unify_proc.m"
            else
#line 552 "unify_proc.m"
              {
#line 552 "unify_proc.m"
                {
#line 552 "unify_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad init args");
#line 552 "unify_proc.m"
                  return;
                }
#line 552 "unify_proc.m"
              }
#line 551 "unify_proc.m"
          }
#line 530 "unify_proc.m"
        else
#line 527 "unify_proc.m"
          {
#line 527 "unify_proc.m"
            MR_Word check_hlds__unify_proc__X_18;
#line 527 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Y_19;
#line 524 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_52_52;
#line 524 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_53_53;

#line 524 "unify_proc.m"
            check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 524 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 524 "unify_proc.m"
              {
#line 524 "unify_proc.m"
                check_hlds__unify_proc__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 524 "unify_proc.m"
                check_hlds__unify_proc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 524 "unify_proc.m"
                check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 524 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 524 "unify_proc.m"
                  {
#line 524 "unify_proc.m"
                    check_hlds__unify_proc__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, (MR_Integer) 0)));
#line 524 "unify_proc.m"
                    check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, (MR_Integer) 1)));
#line 524 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "unify_proc.m"
                  }
#line 524 "unify_proc.m"
              }
#line 527 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 525 "unify_proc.m"
              {
#line 525 "unify_proc.m"
                check_hlds__unify_proc__generate_unify_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_18, check_hlds__unify_proc__Y_19, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
              }
#line 527 "unify_proc.m"
            else
#line 528 "unify_proc.m"
              {
#line 528 "unify_proc.m"
                {
#line 528 "unify_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad unify args");
#line 528 "unify_proc.m"
                  return;
                }
#line 528 "unify_proc.m"
              }
#line 527 "unify_proc.m"
          }
#line 2098 "unify_proc.m"
    check_hlds__unify_proc__VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 0)));
#line 2098 "unify_proc.m"
    check_hlds__unify_proc__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 1)));
#line 2098 "unify_proc.m"
    check_hlds__unify_proc__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 2)));
#line 2098 "unify_proc.m"
    check_hlds__unify_proc__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 3)));
#line 557 "unify_proc.m"
    {
#line 557 "unify_proc.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &check_hlds__unify_proc__TVarNameMap_25);
    }
#line 558 "unify_proc.m"
    {
#line 558 "unify_proc.m"
      check_hlds__unify_proc__ArgVec_26 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[1], (MR_Integer) 0, check_hlds__unify_proc__Args_17);
    }
#line 559 "unify_proc.m"
    {
#line 559 "unify_proc.m"
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__Clause_20));
#line 559 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "unify_proc.m"
    }
#line 559 "unify_proc.m"
    {
#line 559 "unify_proc.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__unify_proc__V_59_59, &check_hlds__unify_proc__ClausesRep_27);
    }
#line 560 "unify_proc.m"
    {
#line 560 "unify_proc.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_28);
    }
#line 562 "unify_proc.m"
    {
#line 562 "unify_proc.m"
      check_hlds__unify_proc__V_62_62 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 562 "unify_proc.m"
    {
#line 562 "unify_proc.m"
      MR_Word base;
#line 562 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 562 "unify_proc.m"
      *check_hlds__unify_proc__ClauseInfo_12 = base;
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_23));
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Types_24));
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__TVarNameMap_25));
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Types_24));
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__unify_proc__ArgVec_26));
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__unify_proc__ClausesRep_27));
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_28));
#line 562 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
#line 562 "unify_proc.m"
    }
#line 516 "unify_proc.m"
  }
#line 123 "unify_proc.m"
}

#line 117 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__lookup_mode_num_5_p_0(
#line 117 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ModuleInfo_6,
#line 117 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_7,
#line 117 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UniMode_8,
#line 117 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Det_9,
#line 117 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__Num_10)
#line 117 "unify_proc.m"
{
#line 211 "unify_proc.m"
  {
#line 211 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 211 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Num1_11;
#line 226 "unify_proc.m"
    MR_Word check_hlds__unify_proc__XInitial_20;
#line 226 "unify_proc.m"
    MR_Word check_hlds__unify_proc__YInitial_21;
#line 226 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UniMode_8, (MR_Integer) 0)));
#line 227 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Final_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UniMode_8, (MR_Integer) 1)));

#line 227 "unify_proc.m"
    check_hlds__unify_proc__XInitial_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_25_25, (MR_Integer) 0)));
#line 227 "unify_proc.m"
    check_hlds__unify_proc__YInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_25_25, (MR_Integer) 1)));
#line 229 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Det_9 == (MR_Integer) 1);
#line 229 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 229 "unify_proc.m"
      {
#line 230 "unify_proc.m"
        {
#line 230 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__ModuleInfo_6, check_hlds__unify_proc__XInitial_20);
        }
#line 229 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 231 "unify_proc.m"
          {
#line 231 "unify_proc.m"
            check_hlds__unify_proc__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__ModuleInfo_6, check_hlds__unify_proc__YInitial_21);
          }
#line 229 "unify_proc.m"
      }
#line 234 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 233 "unify_proc.m"
      {
#line 233 "unify_proc.m"
        {
#line 233 "unify_proc.m"
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
        }
#line 233 "unify_proc.m"
        check_hlds__unify_proc__succeeded = MR_TRUE;
#line 233 "unify_proc.m"
      }
#line 234 "unify_proc.m"
    else
#line 238 "unify_proc.m"
      {
#line 235 "unify_proc.m"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__XInitial_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 238 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 237 "unify_proc.m"
          {
#line 237 "unify_proc.m"
            {
#line 237 "unify_proc.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
            }
#line 237 "unify_proc.m"
            check_hlds__unify_proc__succeeded = MR_TRUE;
#line 237 "unify_proc.m"
          }
#line 238 "unify_proc.m"
        else
#line 242 "unify_proc.m"
          {
#line 239 "unify_proc.m"
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__YInitial_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 242 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 241 "unify_proc.m"
              {
#line 241 "unify_proc.m"
                {
#line 241 "unify_proc.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
                }
#line 241 "unify_proc.m"
                check_hlds__unify_proc__succeeded = MR_TRUE;
#line 241 "unify_proc.m"
              }
#line 242 "unify_proc.m"
            else
#line 243 "unify_proc.m"
              {
#line 243 "unify_proc.m"
                MR_Word check_hlds__unify_proc__Requests_23;
#line 243 "unify_proc.m"
                MR_Word check_hlds__unify_proc__UnifyReqMap_24;
#line 243 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_26_26;
#line 201 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_30_30;
#line 245 "unify_proc.m"
                MR_Box check_hlds__unify_proc__conv0_Num1_11;

#line 243 "unify_proc.m"
                {
#line 243 "unify_proc.m"
                  hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__ModuleInfo_6, &check_hlds__unify_proc__Requests_23);
                }
#line 201 "unify_proc.m"
                check_hlds__unify_proc__UnifyReqMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_23, (MR_Integer) 0)));
#line 201 "unify_proc.m"
                check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_23, (MR_Integer) 1)));
#line 245 "unify_proc.m"
                {
#line 245 "unify_proc.m"
                  check_hlds__unify_proc__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "unify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_7));
#line 245 "unify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__UniMode_8));
#line 245 "unify_proc.m"
                }
#line 245 "unify_proc.m"
                {
#line 245 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__unify_proc__UnifyReqMap_24, ((MR_Box) (check_hlds__unify_proc__V_26_26)), &check_hlds__unify_proc__conv0_Num1_11);
                }
#line 245 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 245 "unify_proc.m"
                  {
#line 245 "unify_proc.m"
                    check_hlds__unify_proc__Num1_11 = ((MR_Integer) check_hlds__unify_proc__conv0_Num1_11);
#line 245 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = MR_TRUE;
#line 245 "unify_proc.m"
                  }
#line 243 "unify_proc.m"
              }
#line 242 "unify_proc.m"
          }
#line 238 "unify_proc.m"
      }
#line 211 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 210 "unify_proc.m"
      *check_hlds__unify_proc__Num_10 = check_hlds__unify_proc__Num1_11;
#line 211 "unify_proc.m"
    else
#line 212 "unify_proc.m"
      {
#line 212 "unify_proc.m"
        {
#line 212 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.lookup_mode_num\'/5", (MR_String) "search_num failed");
#line 212 "unify_proc.m"
          return;
        }
#line 212 "unify_proc.m"
      }
#line 211 "unify_proc.m"
  }
#line 117 "unify_proc.m"
}

#line 479 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
#line 479 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 479 "unify_proc.m"
{
#line 479 "unify_proc.m"
  {
#line 479 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 479 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 479 "unify_proc.m"
    {
#line 479 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__479__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
    }
#line 479 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 479 "unify_proc.m"
  }
#line 479 "unify_proc.m"
}

#line 508 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
#line 508 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 508 "unify_proc.m"
{
#line 508 "unify_proc.m"
  {
#line 508 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 508 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 508 "unify_proc.m"
    {
#line 508 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))));
    }
#line 508 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 508 "unify_proc.m"
  }
#line 508 "unify_proc.m"
}

#line 111 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0(
#line 111 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_5,
#line 111 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_6,
#line 111 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13,
#line 111 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_14)
#line 111 "unify_proc.m"
{
#line 436 "unify_proc.m"
  {
#line 436 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Type_8;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarSet_9;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeBody_10;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Context_11;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeTable_25;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeDefn_26;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeParams_27;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__KindMap_28;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeStatus_29;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeArgs_30;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SpecialPredMap_47;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo0_48;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ErrorProcs_49;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo_50;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_53_53;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_54_54;
#line 436 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_59;
#line 465 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv0_PredId_6;

#line 499 "unify_proc.m"
    {
#line 499 "unify_proc.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__TypeTable_25);
    }
#line 500 "unify_proc.m"
    {
#line 500 "unify_proc.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_25, check_hlds__unify_proc__TypeCtor_5, &check_hlds__unify_proc__TypeDefn_26);
    }
#line 501 "unify_proc.m"
    {
#line 501 "unify_proc.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__TVarSet_9);
    }
#line 502 "unify_proc.m"
    {
#line 502 "unify_proc.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__TypeParams_27);
    }
#line 503 "unify_proc.m"
    {
#line 503 "unify_proc.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__KindMap_28);
    }
#line 504 "unify_proc.m"
    {
#line 504 "unify_proc.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__TypeBody_10);
    }
#line 505 "unify_proc.m"
    {
#line 505 "unify_proc.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__TypeStatus_29);
    }
#line 506 "unify_proc.m"
    {
#line 506 "unify_proc.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__Context_11);
    }
#line 508 "unify_proc.m"
    {
#line 508 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 508 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
#line 508 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1));
#line 508 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 508 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13));
#line 508 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
#line 508 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_10));
#line 508 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_29));
#line 508 "unify_proc.m"
    }
#line 508 "unify_proc.m"
    {
#line 508 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_31_31, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
    }
#line 510 "unify_proc.m"
    {
#line 510 "unify_proc.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_28, check_hlds__unify_proc__TypeParams_27, &check_hlds__unify_proc__TypeArgs_30);
    }
#line 511 "unify_proc.m"
    {
#line 511 "unify_proc.m"
      parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_30, &check_hlds__unify_proc__Type_8);
    }
#line 460 "unify_proc.m"
    {
#line 460 "unify_proc.m"
      hlds__make_hlds__add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, check_hlds__unify_proc__TVarSet_9, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__Context_11, (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1]), check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52);
    }
#line 464 "unify_proc.m"
    {
#line 464 "unify_proc.m"
      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52, &check_hlds__unify_proc__SpecialPredMap_47);
    }
#line 465 "unify_proc.m"
    {
#line 465 "unify_proc.m"
      check_hlds__unify_proc__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) ((MR_Integer) 2));
#line 465 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
#line 465 "unify_proc.m"
    }
#line 465 "unify_proc.m"
    {
#line 465 "unify_proc.m"
      mercury__map__lookup_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__unify_proc__SpecialPredMap_47, ((MR_Box) (check_hlds__unify_proc__V_53_53)), &check_hlds__unify_proc__conv0_PredId_6);
    }
#line 465 "unify_proc.m"
    *check_hlds__unify_proc__PredId_6 = ((MR_Word) check_hlds__unify_proc__conv0_PredId_6);
#line 466 "unify_proc.m"
    {
#line 466 "unify_proc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52, *check_hlds__unify_proc__PredId_6, &check_hlds__unify_proc__PredInfo0_48);
    }
#line 476 "unify_proc.m"
    {
#line 476 "unify_proc.m"
      check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52, &check_hlds__unify_proc__ErrorProcs_49, check_hlds__unify_proc__PredInfo0_48, &check_hlds__unify_proc__PredInfo_50);
    }
#line 479 "unify_proc.m"
    {
#line 479 "unify_proc.m"
      check_hlds__unify_proc__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2));
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_49));
#line 479 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "unify_proc.m"
    }
#line 479 "unify_proc.m"
    {
#line 479 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_54_54, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__PredInfo_50, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_59);
    }
#line 489 "unify_proc.m"
    {
#line 489 "unify_proc.m"
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_59, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_14);
#line 489 "unify_proc.m"
      return;
    }
#line 436 "unify_proc.m"
  }
#line 111 "unify_proc.m"
}

#line 508 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
#line 508 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 508 "unify_proc.m"
{
#line 508 "unify_proc.m"
  {
#line 508 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 508 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 508 "unify_proc.m"
    {
#line 508 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))));
    }
#line 508 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 508 "unify_proc.m"
  }
#line 508 "unify_proc.m"
}

#line 395 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
#line 395 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 395 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 395 "unify_proc.m"
{
#line 395 "unify_proc.m"
  {
#line 395 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 395 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 395 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__3_38;

#line 395 "unify_proc.m"
    {
#line 395 "unify_proc.m"
      check_hlds__unify_proc__conv0_HeadVar__3_38 = check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__395__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 395 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__3_38));
#line 395 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 395 "unify_proc.m"
  }
#line 395 "unify_proc.m"
}

#line 103 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(
#line 103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_5,
#line 103 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_6,
#line 103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34,
#line 103 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35)
#line 103 "unify_proc.m"
{
#line 380 "unify_proc.m"
  {
#line 380 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 380 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarSet_12;
#line 380 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Context_18;
#line 380 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeBody_30;
#line 380 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Type_31;
#line 380 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyPredStatus_32;
#line 380 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Item_33;

#line 381 "unify_proc.m"
    {
#line 381 "unify_proc.m"
      check_hlds__unify_proc__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__unify_proc__TypeCtor_5);
    }
#line 417 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 382 "unify_proc.m"
      {
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 382 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__TupleArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 1)));
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TVarSet0_10;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TupleArgTVars_11;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TupleArgTypes_13;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MakeUnamedField_16;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CtorArgs_19;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctor_21;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ConsId_22;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ConsTagValues_23;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_36_36;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_42_42;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_43_43;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_46_46;
#line 382 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 0)));

#line 386 "unify_proc.m"
        {
#line 386 "unify_proc.m"
          mercury__varset__init_1_p_0(check_hlds__unify_proc__TypeCtorInfo_53_53, &check_hlds__unify_proc__TVarSet0_10);
        }
#line 387 "unify_proc.m"
        {
#line 387 "unify_proc.m"
          mercury__varset__new_vars_4_p_0(check_hlds__unify_proc__TypeCtorInfo_53_53, check_hlds__unify_proc__TupleArity_9, &check_hlds__unify_proc__TupleArgTVars_11, check_hlds__unify_proc__TVarSet0_10, &check_hlds__unify_proc__TVarSet_12);
        }
#line 388 "unify_proc.m"
        {
#line 388 "unify_proc.m"
          check_hlds__unify_proc__V_36_36 = mercury__map__init_0_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 388 "unify_proc.m"
        {
#line 388 "unify_proc.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__V_36_36, check_hlds__unify_proc__TupleArgTVars_11, &check_hlds__unify_proc__TupleArgTypes_13);
        }
#line 403 "unify_proc.m"
        {
#line 403 "unify_proc.m"
          check_hlds__unify_proc__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 403 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 1) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
#line 403 "unify_proc.m"
        }
#line 404 "unify_proc.m"
        {
#line 404 "unify_proc.m"
          check_hlds__unify_proc__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__ConsId_22));
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "unify_proc.m"
        }
#line 404 "unify_proc.m"
        {
#line 404 "unify_proc.m"
          check_hlds__unify_proc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 0) = ((MR_Box) (check_hlds__unify_proc__V_43_43));
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "unify_proc.m"
        }
#line 404 "unify_proc.m"
        {
#line 404 "unify_proc.m"
          mercury__map__from_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, check_hlds__unify_proc__V_42_42, &check_hlds__unify_proc__ConsTagValues_23);
        }
#line 414 "unify_proc.m"
        {
#line 414 "unify_proc.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TupleArgTypes_13, &check_hlds__unify_proc__Type_31);
        }
#line 416 "unify_proc.m"
        {
#line 416 "unify_proc.m"
          mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_18);
        }
#line 395 "unify_proc.m"
        {
#line 395 "unify_proc.m"
          check_hlds__unify_proc__MakeUnamedField_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 395 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0]));
#line 395 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1));
#line 395 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 395 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 3) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 395 "unify_proc.m"
        }
#line 397 "unify_proc.m"
        {
#line 397 "unify_proc.m"
          check_hlds__unify_proc__CtorArgs_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__MakeUnamedField_16, check_hlds__unify_proc__TupleArgTypes_13);
        }
#line 400 "unify_proc.m"
        {
#line 400 "unify_proc.m"
          check_hlds__unify_proc__Ctor_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 400 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 2) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[0]));
#line 400 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 3) = ((MR_Box) (check_hlds__unify_proc__CtorArgs_19));
#line 400 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 4) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 400 "unify_proc.m"
        }
#line 411 "unify_proc.m"
        {
#line 411 "unify_proc.m"
          check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Ctor_21));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "unify_proc.m"
        }
#line 411 "unify_proc.m"
        {
#line 411 "unify_proc.m"
          check_hlds__unify_proc__TypeBody_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 0) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 1) = ((MR_Box) (check_hlds__unify_proc__ConsTagValues_23));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 6) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "unify_proc.m"
        }
#line 382 "unify_proc.m"
      }
#line 417 "unify_proc.m"
    else
#line 498 "unify_proc.m"
      {
#line 498 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeTable_66;
#line 498 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeDefn_67;
#line 498 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeParams_68;
#line 498 "unify_proc.m"
        MR_Word check_hlds__unify_proc__KindMap_69;
#line 498 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeStatus_70;
#line 498 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeArgs_71;
#line 498 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_72_72;

#line 499 "unify_proc.m"
        {
#line 499 "unify_proc.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__unify_proc__TypeTable_66);
        }
#line 500 "unify_proc.m"
        {
#line 500 "unify_proc.m"
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_66, check_hlds__unify_proc__TypeCtor_5, &check_hlds__unify_proc__TypeDefn_67);
        }
#line 501 "unify_proc.m"
        {
#line 501 "unify_proc.m"
          hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__TVarSet_12);
        }
#line 502 "unify_proc.m"
        {
#line 502 "unify_proc.m"
          hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__TypeParams_68);
        }
#line 503 "unify_proc.m"
        {
#line 503 "unify_proc.m"
          hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__KindMap_69);
        }
#line 504 "unify_proc.m"
        {
#line 504 "unify_proc.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__TypeBody_30);
        }
#line 505 "unify_proc.m"
        {
#line 505 "unify_proc.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__TypeStatus_70);
        }
#line 506 "unify_proc.m"
        {
#line 506 "unify_proc.m"
          hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__Context_18);
        }
#line 508 "unify_proc.m"
        {
#line 508 "unify_proc.m"
          check_hlds__unify_proc__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 508 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
#line 508 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2));
#line 508 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 508 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34));
#line 508 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
#line 508 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_30));
#line 508 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_70));
#line 508 "unify_proc.m"
        }
#line 508 "unify_proc.m"
        {
#line 508 "unify_proc.m"
          mercury__require__expect_4_p_0(check_hlds__unify_proc__V_72_72, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
        }
#line 510 "unify_proc.m"
        {
#line 510 "unify_proc.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_69, check_hlds__unify_proc__TypeParams_68, &check_hlds__unify_proc__TypeArgs_71);
        }
#line 511 "unify_proc.m"
        {
#line 511 "unify_proc.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_71, &check_hlds__unify_proc__Type_31);
        }
#line 498 "unify_proc.m"
      }
#line 422 "unify_proc.m"
    {
#line 422 "unify_proc.m"
      check_hlds__unify_proc__succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30);
    }
#line 429 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 427 "unify_proc.m"
      {
#line 427 "unify_proc.m"
        check_hlds__unify_proc__UnifyPredStatus_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 428 "unify_proc.m"
        check_hlds__unify_proc__Item_33 = (MR_Integer) 1;
#line 427 "unify_proc.m"
      }
#line 429 "unify_proc.m"
    else
#line 430 "unify_proc.m"
      {
#line 430 "unify_proc.m"
        check_hlds__unify_proc__UnifyPredStatus_32 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1]);
#line 431 "unify_proc.m"
        check_hlds__unify_proc__Item_33 = (MR_Integer) 0;
#line 430 "unify_proc.m"
      }
#line 433 "unify_proc.m"
    {
#line 433 "unify_proc.m"
      check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0((MR_Integer) 0, check_hlds__unify_proc__Item_33, check_hlds__unify_proc__TVarSet_12, check_hlds__unify_proc__Type_31, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__UnifyPredStatus_32, check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35);
#line 433 "unify_proc.m"
      return;
    }
#line 380 "unify_proc.m"
  }
#line 103 "unify_proc.m"
}

#line 351 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_1(
#line 351 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 351 "unify_proc.m"
{
#line 351 "unify_proc.m"
  {
#line 351 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 351 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0, 1);
#line 351 "unify_proc.m"
  }
#line 351 "unify_proc.m"
}

#line 352 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_3(
#line 352 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 352 "unify_proc.m"
{
#line 352 "unify_proc.m"
  {
#line 352 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 352 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_26 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_26);
#line 352 "unify_proc.m"
    {
#line 352 "unify_proc.m"
      check_hlds__unify_proc__request_proc_9_p_0_2(check_hlds__unify_proc__env_ptr);
#line 352 "unify_proc.m"
      return;
    }
#line 352 "unify_proc.m"
  }
#line 352 "unify_proc.m"
}

#line 351 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_2(
#line 351 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 351 "unify_proc.m"
{
#line 351 "unify_proc.m"
  {
#line 351 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 354 "unify_proc.m"
    {
#line 354 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_31, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_26);
    }
#line 353 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 353 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 353 "unify_proc.m"
      {
#line 353 "unify_proc.m"
        check_hlds__unify_proc__request_proc_9_p_0_1(check_hlds__unify_proc__env_ptr);
#line 353 "unify_proc.m"
        return;
      }
#line 351 "unify_proc.m"
  }
#line 351 "unify_proc.m"
}

#line 351 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_4(
#line 351 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 351 "unify_proc.m"
{
#line 351 "unify_proc.m"
  {
#line 351 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 351 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0) == 0)
#line 351 "unify_proc.m"
      {
#line 352 "unify_proc.m"
        {
#line 352 "unify_proc.m"
          mercury__list__member_2_p_1((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_56_56, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_26, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, check_hlds__unify_proc__request_proc_9_p_0_3, check_hlds__unify_proc__env_ptr);
        }
#line 351 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = MR_FALSE;
#line 351 "unify_proc.m"
      }
#line 351 "unify_proc.m"
    else
#line 351 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = MR_TRUE;
#line 351 "unify_proc.m"
  }
#line 351 "unify_proc.m"
}

#line 90 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0(
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PredId_10,
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgModes_11,
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstVarSet_12,
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgLives_13,
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__MaybeDet_14,
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 90 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__ProcId_16,
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_31,
#line 90 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_32)
#line 90 "unify_proc.m"
{
#line 90 "unify_proc.m"
  {
#line 90 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s check_hlds__unify_proc__env;

#line 90 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11 = check_hlds__unify_proc__ArgModes_11;
#line 90 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_31 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_31;
#line 325 "unify_proc.m"
    {
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_54_54;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_55_55;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_57_57;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_58_58;
#line 325 "unify_proc.m"
      MR_Integer check_hlds__unify_proc__Arity_23;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ClausesInfo_25;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__Requests0_27;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ReqQueue0_28;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ReqQueue_29;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__Requests_30;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredMap_33_33;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_34_34;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_37_37;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcMap_38_38;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_39_39;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_41_41;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_43_43;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_46_46;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_47_47;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcMap_48_48;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_49_49;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredMap_50_50;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_51_51;
#line 325 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_52_52;
#line 326 "unify_proc.m"
      MR_Box check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_34_34;
#line 338 "unify_proc.m"
      MR_Box check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_39_39;
#line 356 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_45_45;
#line 202 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_61_61;
#line 204 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_64_64;
#line 204 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_65_65;

#line 325 "unify_proc.m"
      {
#line 325 "unify_proc.m"
        hlds__hlds_module__module_info_get_preds_2_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__unify_proc__STATE_VARIABLE_PredMap_33_33);
      }
#line 13966 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 13968 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 326 "unify_proc.m"
      {
#line 326 "unify_proc.m"
        mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeCtorInfo_54_54, check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__STATE_VARIABLE_PredMap_33_33, ((MR_Box) (check_hlds__unify_proc__PredId_10)), &check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_34_34);
      }
#line 326 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_PredInfo_34_34 = ((MR_Word) check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_34_34);
#line 13977 "check_hlds.unify_proc.c"
      (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 327 "unify_proc.m"
      {
#line 327 "unify_proc.m"
        mercury__list__length_2_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_56_56, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, &check_hlds__unify_proc__Arity_23);
      }
#line 329 "unify_proc.m"
      {
#line 329 "unify_proc.m"
        hlds__make_hlds__add_new_proc_12_p_0(check_hlds__unify_proc__InstVarSet_12, check_hlds__unify_proc__Arity_23, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__ArgLives_13, (MR_Integer) 1, check_hlds__unify_proc__MaybeDet_14, check_hlds__unify_proc__Context_15, (MR_Integer) 1, check_hlds__unify_proc__STATE_VARIABLE_PredInfo_34_34, &check_hlds__unify_proc__STATE_VARIABLE_PredInfo_37_37, check_hlds__unify_proc__ProcId_16);
      }
#line 336 "unify_proc.m"
      {
#line 336 "unify_proc.m"
        hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredInfo_37_37, &check_hlds__unify_proc__STATE_VARIABLE_ProcMap_38_38);
      }
#line 337 "unify_proc.m"
      {
#line 337 "unify_proc.m"
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredInfo_37_37, &check_hlds__unify_proc__ClausesInfo_25);
      }
#line 13999 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 14001 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 338 "unify_proc.m"
      {
#line 338 "unify_proc.m"
        mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeCtorInfo_57_57, check_hlds__unify_proc__TypeCtorInfo_58_58, check_hlds__unify_proc__STATE_VARIABLE_ProcMap_38_38, ((MR_Box) (*check_hlds__unify_proc__ProcId_16)), &check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_39_39);
      }
#line 338 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_39_39 = ((MR_Word) check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_39_39);
#line 339 "unify_proc.m"
      {
#line 339 "unify_proc.m"
        hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 0, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_39_39, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_41_41);
      }
#line 341 "unify_proc.m"
      {
#line 341 "unify_proc.m"
        check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(*check_hlds__unify_proc__ProcId_16, check_hlds__unify_proc__ClausesInfo_25, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_41_41, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42);
      }
#line 343 "unify_proc.m"
      {
#line 343 "unify_proc.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42, &check_hlds__unify_proc__STATE_VARIABLE_Goal_43_43);
      }
#line 344 "unify_proc.m"
      {
#line 344 "unify_proc.m"
        hlds__hlds_goal__set_goal_contexts_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__STATE_VARIABLE_Goal_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44);
      }
#line 351 "unify_proc.m"
      {
#line 351 "unify_proc.m"
        check_hlds__unify_proc__request_proc_9_p_0_4(&check_hlds__unify_proc__env);
      }
#line 351 "unify_proc.m"
      (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 355 "unify_proc.m"
      if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 355 "unify_proc.m"
        {
#line 356 "unify_proc.m"
          (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__MaybeDet_14)) == (MR_mktag((MR_Integer) 1)));
#line 356 "unify_proc.m"
          if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 356 "unify_proc.m"
            {
#line 356 "unify_proc.m"
              check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeDet_14, (MR_Integer) 0)));
#line 356 "unify_proc.m"
              (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = (check_hlds__unify_proc__V_45_45 == (MR_Integer) 7);
#line 356 "unify_proc.m"
            }
#line 356 "unify_proc.m"
          (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 355 "unify_proc.m"
        }
#line 359 "unify_proc.m"
      if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 356 "unify_proc.m"
        check_hlds__unify_proc__STATE_VARIABLE_Goal_46_46 = check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44;
#line 359 "unify_proc.m"
      else
#line 360 "unify_proc.m"
        {
#line 360 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Goal_46_46 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44);
        }
#line 362 "unify_proc.m"
      {
#line 362 "unify_proc.m"
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_Goal_46_46, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_47_47);
      }
#line 364 "unify_proc.m"
      {
#line 364 "unify_proc.m"
        mercury__map__det_update_4_p_0(check_hlds__unify_proc__TypeCtorInfo_57_57, check_hlds__unify_proc__TypeCtorInfo_58_58, ((MR_Box) (*check_hlds__unify_proc__ProcId_16)), ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_47_47)), check_hlds__unify_proc__STATE_VARIABLE_ProcMap_38_38, &check_hlds__unify_proc__STATE_VARIABLE_ProcMap_48_48);
      }
#line 365 "unify_proc.m"
      {
#line 365 "unify_proc.m"
        hlds__hlds_pred__pred_info_set_procedures_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ProcMap_48_48, check_hlds__unify_proc__STATE_VARIABLE_PredInfo_37_37, &check_hlds__unify_proc__STATE_VARIABLE_PredInfo_49_49);
      }
#line 366 "unify_proc.m"
      {
#line 366 "unify_proc.m"
        mercury__map__det_update_4_p_0(check_hlds__unify_proc__TypeCtorInfo_54_54, check_hlds__unify_proc__TypeCtorInfo_55_55, ((MR_Box) (check_hlds__unify_proc__PredId_10)), ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_PredInfo_49_49)), check_hlds__unify_proc__STATE_VARIABLE_PredMap_33_33, &check_hlds__unify_proc__STATE_VARIABLE_PredMap_50_50);
      }
#line 367 "unify_proc.m"
      {
#line 367 "unify_proc.m"
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredMap_50_50, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_31, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_51_51);
      }
#line 370 "unify_proc.m"
      {
#line 370 "unify_proc.m"
        hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_51_51, &check_hlds__unify_proc__Requests0_27);
      }
#line 202 "unify_proc.m"
      check_hlds__unify_proc__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_27, (MR_Integer) 0)));
#line 202 "unify_proc.m"
      check_hlds__unify_proc__ReqQueue0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_27, (MR_Integer) 1)));
#line 372 "unify_proc.m"
      {
#line 372 "unify_proc.m"
        check_hlds__unify_proc__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_10));
#line 372 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) (*check_hlds__unify_proc__ProcId_16));
#line 372 "unify_proc.m"
      }
#line 372 "unify_proc.m"
      {
#line 372 "unify_proc.m"
        mercury__queue__put_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__unify_proc__V_52_52)), check_hlds__unify_proc__ReqQueue0_28, &check_hlds__unify_proc__ReqQueue_29);
      }
#line 204 "unify_proc.m"
      check_hlds__unify_proc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_27, (MR_Integer) 0)));
#line 204 "unify_proc.m"
      check_hlds__unify_proc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_27, (MR_Integer) 1)));
#line 204 "unify_proc.m"
      {
#line 204 "unify_proc.m"
        check_hlds__unify_proc__Requests_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 204 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_30, 0) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 204 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_30, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_29));
#line 204 "unify_proc.m"
      }
#line 374 "unify_proc.m"
      {
#line 374 "unify_proc.m"
        hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__unify_proc__Requests_30, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_51_51, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_32);
#line 374 "unify_proc.m"
        return;
      }
#line 325 "unify_proc.m"
    }
#line 90 "unify_proc.m"
  }
#line 90 "unify_proc.m"
}

#line 83 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__request_unify_6_p_0(
#line 83 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UnifyId_7,
#line 83 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstVarSet_8,
#line 83 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Determinism_9,
#line 83 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_10,
#line 83 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_47,
#line 83 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_48)
#line 83 "unify_proc.m"
{
#line 250 "unify_proc.m"
  {
#line 250 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 250 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyId_7, (MR_Integer) 0)));
#line 250 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyMode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyId_7, (MR_Integer) 1)));
#line 250 "unify_proc.m"
    MR_Word check_hlds__unify_proc__MaybeRecompInfo0_14;
#line 250 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;

#line 254 "unify_proc.m"
    {
#line 254 "unify_proc.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__unify_proc__MaybeRecompInfo0_14);
    }
#line 261 "unify_proc.m"
    if ((check_hlds__unify_proc__MaybeRecompInfo0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 262 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_47;
#line 261 "unify_proc.m"
    else
#line 256 "unify_proc.m"
      {
#line 256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RecompInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeRecompInfo0_14, (MR_Integer) 0)));
#line 256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorItem_16;
#line 256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RecompInfo_17;
#line 256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_51_51;

#line 257 "unify_proc.m"
        {
#line 257 "unify_proc.m"
          check_hlds__unify_proc__TypeCtorItem_16 = recompilation__type_ctor_to_item_name_1_f_0(check_hlds__unify_proc__TypeCtor_12);
        }
#line 258 "unify_proc.m"
        {
#line 258 "unify_proc.m"
          recompilation__record_used_item_5_p_0((MR_Integer) 1, check_hlds__unify_proc__TypeCtorItem_16, check_hlds__unify_proc__TypeCtorItem_16, check_hlds__unify_proc__RecompInfo0_15, &check_hlds__unify_proc__RecompInfo_17);
        }
#line 260 "unify_proc.m"
        {
#line 260 "unify_proc.m"
          check_hlds__unify_proc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 0) = ((MR_Box) (check_hlds__unify_proc__RecompInfo_17));
#line 260 "unify_proc.m"
        }
#line 260 "unify_proc.m"
        {
#line 260 "unify_proc.m"
          hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52);
        }
#line 256 "unify_proc.m"
      }
#line 226 "unify_proc.m"
    {
#line 226 "unify_proc.m"
      MR_Word check_hlds__unify_proc__XInitial_76;
#line 226 "unify_proc.m"
      MR_Word check_hlds__unify_proc__YInitial_77;
#line 226 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 0)));
#line 227 "unify_proc.m"
      MR_Word check_hlds__unify_proc___Final_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 1)));

#line 227 "unify_proc.m"
      check_hlds__unify_proc__XInitial_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, (MR_Integer) 0)));
#line 227 "unify_proc.m"
      check_hlds__unify_proc__YInitial_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, (MR_Integer) 1)));
#line 229 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Determinism_9 == (MR_Integer) 1);
#line 229 "unify_proc.m"
      if (check_hlds__unify_proc__succeeded)
#line 229 "unify_proc.m"
        {
#line 230 "unify_proc.m"
          {
#line 230 "unify_proc.m"
            check_hlds__unify_proc__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__unify_proc__XInitial_76);
          }
#line 229 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 231 "unify_proc.m"
            {
#line 231 "unify_proc.m"
              check_hlds__unify_proc__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__unify_proc__YInitial_77);
            }
#line 229 "unify_proc.m"
        }
#line 234 "unify_proc.m"
      if (check_hlds__unify_proc__succeeded)
#line 233 "unify_proc.m"
        {
#line 233 "unify_proc.m"
          MR_Integer check_hlds__unify_proc__V_18_18;

#line 233 "unify_proc.m"
          {
#line 233 "unify_proc.m"
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_18_18);
          }
#line 233 "unify_proc.m"
          check_hlds__unify_proc__succeeded = MR_TRUE;
#line 233 "unify_proc.m"
        }
#line 234 "unify_proc.m"
      else
#line 238 "unify_proc.m"
        {
#line 235 "unify_proc.m"
          check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__XInitial_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 238 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 237 "unify_proc.m"
            {
#line 237 "unify_proc.m"
              MR_Integer check_hlds__unify_proc__V_93_93;

#line 237 "unify_proc.m"
              {
#line 237 "unify_proc.m"
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_93_93);
              }
#line 237 "unify_proc.m"
              check_hlds__unify_proc__succeeded = MR_TRUE;
#line 237 "unify_proc.m"
            }
#line 238 "unify_proc.m"
          else
#line 242 "unify_proc.m"
            {
#line 239 "unify_proc.m"
              check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__YInitial_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 242 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 241 "unify_proc.m"
                {
#line 241 "unify_proc.m"
                  MR_Integer check_hlds__unify_proc__V_94_94;

#line 241 "unify_proc.m"
                  {
#line 241 "unify_proc.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_94_94);
                  }
#line 241 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = MR_TRUE;
#line 241 "unify_proc.m"
                }
#line 242 "unify_proc.m"
              else
#line 243 "unify_proc.m"
                {
#line 243 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__Requests_79;
#line 243 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__UnifyReqMap_80;
#line 201 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__V_86_86;
#line 245 "unify_proc.m"
                  MR_Integer check_hlds__unify_proc__V_95_95;
#line 245 "unify_proc.m"
                  MR_Box check_hlds__unify_proc__conv0_V_95_95;

#line 243 "unify_proc.m"
                  {
#line 243 "unify_proc.m"
                    hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__Requests_79);
                  }
#line 201 "unify_proc.m"
                  check_hlds__unify_proc__UnifyReqMap_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_79, (MR_Integer) 0)));
#line 201 "unify_proc.m"
                  check_hlds__unify_proc__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_79, (MR_Integer) 1)));
#line 245 "unify_proc.m"
                  {
#line 245 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__unify_proc__UnifyReqMap_80, ((MR_Box) (check_hlds__unify_proc__UnifyId_7)), &check_hlds__unify_proc__conv0_V_95_95);
                  }
#line 245 "unify_proc.m"
                  if (check_hlds__unify_proc__succeeded)
#line 245 "unify_proc.m"
                    {
#line 245 "unify_proc.m"
                      check_hlds__unify_proc__V_95_95 = ((MR_Integer) check_hlds__unify_proc__conv0_V_95_95);
#line 245 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 245 "unify_proc.m"
                    }
#line 243 "unify_proc.m"
                }
#line 242 "unify_proc.m"
            }
#line 238 "unify_proc.m"
        }
#line 226 "unify_proc.m"
    }
#line 270 "unify_proc.m"
    if (!(check_hlds__unify_proc__succeeded))
#line 271 "unify_proc.m"
      {
#line 271 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeTable_19;
#line 271 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeDefn_20;
#line 271 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeBody_21;

#line 271 "unify_proc.m"
        {
#line 271 "unify_proc.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__TypeTable_19);
        }
#line 272 "unify_proc.m"
        {
#line 272 "unify_proc.m"
          check_hlds__unify_proc__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_19, check_hlds__unify_proc__TypeCtor_12, &check_hlds__unify_proc__TypeDefn_20);
        }
#line 271 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 271 "unify_proc.m"
          {
#line 273 "unify_proc.m"
            {
#line 273 "unify_proc.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_20, &check_hlds__unify_proc__TypeBody_21);
            }
#line 275 "unify_proc.m"
            {
#line 275 "unify_proc.m"
              MR_Word check_hlds__unify_proc__TypeName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 0)));
#line 275 "unify_proc.m"
              MR_Word check_hlds__unify_proc__TypeModuleName_24;
#line 275 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ModuleName_26;
#line 275 "unify_proc.m"
              MR_Integer check_hlds__unify_proc___TypeArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 1)));
#line 276 "unify_proc.m"
              MR_String check_hlds__unify_proc__V_25_25;
#line 279 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_27_27;

#line 276 "unify_proc.m"
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__TypeName_22)) == (MR_mktag((MR_Integer) 1)));
#line 276 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 276 "unify_proc.m"
                {
#line 276 "unify_proc.m"
                  check_hlds__unify_proc__TypeModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeName_22, (MR_Integer) 0)));
#line 276 "unify_proc.m"
                  check_hlds__unify_proc__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeName_22, (MR_Integer) 1)));
#line 277 "unify_proc.m"
                  {
#line 277 "unify_proc.m"
                    hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__ModuleName_26);
                  }
#line 278 "unify_proc.m"
                  {
#line 278 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__unify_proc__ModuleName_26, check_hlds__unify_proc__TypeModuleName_24);
                  }
#line 275 "unify_proc.m"
                  if (check_hlds__unify_proc__succeeded)
#line 275 "unify_proc.m"
                    {
#line 279 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = ((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 279 "unify_proc.m"
                      if (check_hlds__unify_proc__succeeded)
#line 279 "unify_proc.m"
                        check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_21, (MR_Integer) 1)));
#line 275 "unify_proc.m"
                    }
#line 276 "unify_proc.m"
                }
#line 275 "unify_proc.m"
            }
#line 280 "unify_proc.m"
            if (!(check_hlds__unify_proc__succeeded))
#line 281 "unify_proc.m"
              {
#line 281 "unify_proc.m"
                check_hlds__unify_proc__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(check_hlds__unify_proc__TypeCtor_12, check_hlds__unify_proc__TypeBody_21);
              }
#line 271 "unify_proc.m"
          }
#line 271 "unify_proc.m"
      }
#line 286 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 281 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_48 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;
#line 286 "unify_proc.m"
    else
#line 289 "unify_proc.m"
      {
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorInfo_67_67;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__SpecialPredMap_28;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredId_30;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_Initial_31;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_Initial_32;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_Final_33;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_Final_34;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgModes0_35;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InMode_36;
#line 289 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__TypeArity_38;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeInfoModes_39;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgModes_40;
#line 289 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__ProcId_42;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Requests0_43;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyReqMap0_44;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyReqMap_45;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Requests_46;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_55_55;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_56_56;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_57_57;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_58_58;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_59_59;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_60_60;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_62_62;
#line 289 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_63_63;
#line 292 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredId0_29;
#line 290 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 290 "unify_proc.m"
        MR_Box check_hlds__unify_proc__conv1_PredId0_29;
#line 304 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_37_37;
#line 201 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_88_88;
#line 203 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_92_92;
#line 203 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_91_91;

#line 289 "unify_proc.m"
        {
#line 289 "unify_proc.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__SpecialPredMap_28);
        }
#line 290 "unify_proc.m"
        {
#line 290 "unify_proc.m"
          check_hlds__unify_proc__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 290 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) ((MR_Integer) 0));
#line 290 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
#line 290 "unify_proc.m"
        }
#line 290 "unify_proc.m"
        {
#line 290 "unify_proc.m"
          check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__unify_proc__SpecialPredMap_28, ((MR_Box) (check_hlds__unify_proc__V_53_53)), &check_hlds__unify_proc__conv1_PredId0_29);
        }
#line 290 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 290 "unify_proc.m"
          {
#line 290 "unify_proc.m"
            check_hlds__unify_proc__PredId0_29 = ((MR_Word) check_hlds__unify_proc__conv1_PredId0_29);
#line 290 "unify_proc.m"
            check_hlds__unify_proc__succeeded = MR_TRUE;
#line 290 "unify_proc.m"
          }
#line 292 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 291 "unify_proc.m"
          {
#line 291 "unify_proc.m"
            check_hlds__unify_proc__PredId_30 = check_hlds__unify_proc__PredId0_29;
#line 291 "unify_proc.m"
            check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_55_55 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;
#line 291 "unify_proc.m"
          }
#line 292 "unify_proc.m"
        else
#line 295 "unify_proc.m"
          {
#line 295 "unify_proc.m"
            check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(check_hlds__unify_proc__TypeCtor_12, &check_hlds__unify_proc__PredId_30, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_55_55);
          }
#line 299 "unify_proc.m"
        check_hlds__unify_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 0)));
#line 299 "unify_proc.m"
        check_hlds__unify_proc__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 1)));
#line 299 "unify_proc.m"
        check_hlds__unify_proc__X_Initial_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_56_56, (MR_Integer) 0)));
#line 299 "unify_proc.m"
        check_hlds__unify_proc__Y_Initial_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_56_56, (MR_Integer) 1)));
#line 299 "unify_proc.m"
        check_hlds__unify_proc__X_Final_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_57_57, (MR_Integer) 0)));
#line 299 "unify_proc.m"
        check_hlds__unify_proc__Y_Final_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_57_57, (MR_Integer) 1)));
#line 300 "unify_proc.m"
        {
#line 300 "unify_proc.m"
          check_hlds__unify_proc__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__X_Initial_31));
#line 300 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__X_Final_33));
#line 300 "unify_proc.m"
        }
#line 300 "unify_proc.m"
        {
#line 300 "unify_proc.m"
          check_hlds__unify_proc__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_60_60, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Initial_32));
#line 300 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_60_60, 1) = ((MR_Box) (check_hlds__unify_proc__Y_Final_34));
#line 300 "unify_proc.m"
        }
#line 300 "unify_proc.m"
        {
#line 300 "unify_proc.m"
          check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__V_60_60));
#line 300 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "unify_proc.m"
        }
#line 300 "unify_proc.m"
        {
#line 300 "unify_proc.m"
          check_hlds__unify_proc__ArgModes0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgModes0_35, 0) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 300 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgModes0_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 300 "unify_proc.m"
        }
#line 303 "unify_proc.m"
        {
#line 303 "unify_proc.m"
          parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__unify_proc__InMode_36);
        }
#line 304 "unify_proc.m"
        check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 0)));
#line 304 "unify_proc.m"
        check_hlds__unify_proc__TypeArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 1)));
#line 14637 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 305 "unify_proc.m"
        {
#line 305 "unify_proc.m"
          mercury__list__duplicate_3_p_0(check_hlds__unify_proc__TypeCtorInfo_67_67, check_hlds__unify_proc__TypeArity_38, ((MR_Box) (check_hlds__unify_proc__InMode_36)), &check_hlds__unify_proc__TypeInfoModes_39);
        }
#line 306 "unify_proc.m"
        {
#line 306 "unify_proc.m"
          check_hlds__unify_proc__ArgModes_40 = mercury__list__f_43_43_2_f_0(check_hlds__unify_proc__TypeCtorInfo_67_67, check_hlds__unify_proc__TypeInfoModes_39, check_hlds__unify_proc__ArgModes0_35);
        }
#line 310 "unify_proc.m"
        {
#line 310 "unify_proc.m"
          check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 310 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__Determinism_9));
#line 310 "unify_proc.m"
        }
#line 310 "unify_proc.m"
        {
#line 310 "unify_proc.m"
          check_hlds__unify_proc__request_proc_9_p_0(check_hlds__unify_proc__PredId_30, check_hlds__unify_proc__ArgModes_40, check_hlds__unify_proc__InstVarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__V_62_62, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__ProcId_42, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_55_55, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_63_63);
        }
#line 314 "unify_proc.m"
        {
#line 314 "unify_proc.m"
          hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_63_63, &check_hlds__unify_proc__Requests0_43);
        }
#line 201 "unify_proc.m"
        check_hlds__unify_proc__UnifyReqMap0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_43, (MR_Integer) 0)));
#line 201 "unify_proc.m"
        check_hlds__unify_proc__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_43, (MR_Integer) 1)));
#line 316 "unify_proc.m"
        {
#line 316 "unify_proc.m"
          mercury__map__set_4_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, ((MR_Box) (check_hlds__unify_proc__UnifyId_7)), ((MR_Box) (check_hlds__unify_proc__ProcId_42)), check_hlds__unify_proc__UnifyReqMap0_44, &check_hlds__unify_proc__UnifyReqMap_45);
        }
#line 203 "unify_proc.m"
        check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_43, (MR_Integer) 0)));
#line 203 "unify_proc.m"
        check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_43, (MR_Integer) 1)));
#line 203 "unify_proc.m"
        {
#line 203 "unify_proc.m"
          check_hlds__unify_proc__Requests_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 203 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_46, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyReqMap_45));
#line 203 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
#line 203 "unify_proc.m"
        }
#line 318 "unify_proc.m"
        {
#line 318 "unify_proc.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__unify_proc__Requests_46, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_63_63, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_48);
#line 318 "unify_proc.m"
          return;
        }
#line 289 "unify_proc.m"
      }
#line 250 "unify_proc.m"
  }
#line 83 "unify_proc.m"
}

#line 79 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__init_requests_1_p_0(
#line 79 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Requests_2)
#line 79 "unify_proc.m"
{
#line 188 "unify_proc.m"
  {
#line 188 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 188 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyReqMap_3;
#line 188 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ReqQueue_4;

#line 189 "unify_proc.m"
    {
#line 189 "unify_proc.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, &check_hlds__unify_proc__UnifyReqMap_3);
    }
#line 190 "unify_proc.m"
    {
#line 190 "unify_proc.m"
      mercury__queue__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__unify_proc__ReqQueue_4);
    }
#line 191 "unify_proc.m"
    {
#line 191 "unify_proc.m"
      MR_Word base;
#line 191 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 191 "unify_proc.m"
      *check_hlds__unify_proc__Requests_2 = base;
#line 191 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyReqMap_3));
#line 191 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_4));
#line 191 "unify_proc.m"
    }
#line 188 "unify_proc.m"
  }
#line 79 "unify_proc.m"
}

#line 71 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__set_req_queue_3_p_0(
#line 71 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ReqQueue_4,
#line 71 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PR_5,
#line 71 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__3_3)
#line 71 "unify_proc.m"
{
#line 204 "unify_proc.m"
  {
#line 204 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 204 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_5, (MR_Integer) 0)));
#line 204 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_5, (MR_Integer) 1)));

#line 204 "unify_proc.m"
    {
#line 204 "unify_proc.m"
      MR_Word base;
#line 204 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 204 "unify_proc.m"
      *check_hlds__unify_proc__HeadVar__3_3 = base;
#line 204 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_6_6));
#line 204 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_4));
#line 204 "unify_proc.m"
    }
#line 204 "unify_proc.m"
  }
#line 71 "unify_proc.m"
}

#line 70 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__get_req_queue_2_p_0(
#line 70 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PR_3,
#line 70 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__2_2)
#line 70 "unify_proc.m"
{
#line 202 "unify_proc.m"
  {
#line 202 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 202 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_3, (MR_Integer) 0)));

#line 202 "unify_proc.m"
    *check_hlds__unify_proc__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_3, (MR_Integer) 1)));
#line 202 "unify_proc.m"
  }
#line 70 "unify_proc.m"
}

void mercury__check_hlds__unify_proc__init(void)
{
}

void mercury__check_hlds__unify_proc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_proc_requests_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_req_queue_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_pred_item_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0);
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_req_map_0);
}

void mercury__check_hlds__unify_proc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.unify_proc. */
