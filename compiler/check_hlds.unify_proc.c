/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "hlds.make_goal.mih"
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



#line 1906 "unify_proc.m"
struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s {
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2;
#line 1910 "unify_proc.m"
  MR_bool check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded;
#line 1912 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22;
#line 1927 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0;
#line 1927 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43;
#line 1927 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25;
#line 1927 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42;
#line 1927 "unify_proc.m"
  MR_Box check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25;
#line 1906 "unify_proc.m"
};

#line 1731 "unify_proc.m"
struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s {
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2;
#line 1735 "unify_proc.m"
  MR_bool check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded;
#line 1738 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30;
#line 1750 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0;
#line 1750 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77;
#line 1750 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71;
#line 1750 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76;
#line 1750 "unify_proc.m"
  MR_Box check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71;
#line 1731 "unify_proc.m"
};

#line 90 "unify_proc.m"
struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s {
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11;
#line 90 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32;
#line 327 "unify_proc.m"
  MR_bool check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded;
#line 327 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57;
#line 355 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0;
#line 355 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27;
#line 356 "unify_proc.m"
  MR_Box check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27;
#line 90 "unify_proc.m"
};


#line 210 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 213 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0;

#line 219 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1;

#line 222 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2];

#line 225 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2];

#line 228 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2];

#line 231 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0;

#line 234 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 237 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0[2];

#line 240 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0[2];

#line 243 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0;

#line 246 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[1];

#line 249 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[1];

#line 252 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0[1];

#line 255 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0[1];

#line 258 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0;

#line 261 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1;

#line 264 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2];

#line 267 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2];

#line 270 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2];

#line 273 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0[2];

#line 276 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0;

#line 279 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[1];

#line 282 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[1];

#line 285 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[1];

#line 288 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0[1];

#line 291 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 294 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 297 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 300 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4];

#line 303 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4];

#line 306 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0;

#line 309 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1];

#line 312 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1];

#line 315 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1];

#line 318 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1];

#line 321 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
#line 324 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 326 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 329 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
#line 332 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 334 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 336 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 339 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0_10001(
#line 342 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 344 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 347 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0_10001(
#line 350 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 352 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 354 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 357 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0_10001(
#line 360 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 362 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 365 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0_10001(
#line 368 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 370 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 372 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 375 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
#line 378 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 380 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 383 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
#line 386 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 388 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 390 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 393 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001(
#line 396 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 398 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 401 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001(
#line 404 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 406 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 408 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 411 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
#line 414 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 416 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 419 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
#line 422 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 424 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 426 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 429 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0_10001(
#line 432 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 434 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 437 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0_10001(
#line 440 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 442 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 444 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 570 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(
#line 570 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_9,
#line 570 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 570 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 570 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 570 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_47,
#line 570 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_48);

#line 1880 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1880__1_1_f_0(
#line 1880 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_21);

#line 483 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__483__1_2_p_0(
#line 483 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ErrorProcs_24,
#line 483 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_35);

#line 399 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__399__1_2_f_0(
#line 399 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 399 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_37);

#line 176 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0(
#line 176 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 176 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 176 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 176 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0(
#line 176 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 176 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 2073 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
#line 2073 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 2073 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 2073 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 2073 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
#line 2073 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 2073 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 495 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
#line 495 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 495 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 495 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 495 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
#line 495 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 495 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 1617 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
#line 1617 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 1617 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1617 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 1617 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
#line 1617 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 1617 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 2053 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
#line 2053 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_6,
#line 2053 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 2053 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_8,
#line 2053 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
#line 2053 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15);

#line 2051 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
#line 2051 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_5,
#line 2051 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_6,
#line 2051 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
#line 2051 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13);

#line 2036 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
#line 2036 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_3);

#line 2012 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
#line 2012 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVars_7,
#line 2012 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_8,
#line 2012 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 2012 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 2012 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 2012 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

#line 1939 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_11,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__MaybeCompareRes_12,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_13,
#line 1939 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_14,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_38,
#line 1939 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_39);

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_3(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_4(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1906 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0(
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1906 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 1906 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

#line 1880 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
#line 1880 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1880 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 1874 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
#line 1874 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorArgs_6,
#line 1874 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_7,
#line 1874 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Vars_8,
#line 1874 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1874 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

#line 1866 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
#line 1866 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1866 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__2_2,
#line 1866 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_3,
#line 1866 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_4);

#line 1856 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
#line 1856 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1856 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_2,
#line 1856 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_3,
#line 1856 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
#line 1856 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
#line 1856 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6);

#line 1848 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
#line 1848 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_7,
#line 1848 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_8,
#line 1848 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_9,
#line 1848 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_10,
#line 1848 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1848 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

#line 1819 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialPredId_11,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_12,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstmapDelta_13,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Detism_14,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1819 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_26,
#line 1819 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_27);

#line 1800 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
#line 1800 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 1800 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_8,
#line 1800 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1800 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_10,
#line 1800 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1800 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_1(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_3(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_4(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_2(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_5(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1731 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0(
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_5,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_6,
#line 1731 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1731 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9);

#line 1718 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_9_p_0(
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgTypes_10,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_11,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Xs_12,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ys_13,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_14,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1718 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_19,
#line 1718 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_20);

#line 1665 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_12,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor1_13,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor2_14,
#line 1665 "unify_proc.m"
  MR_String check_hlds__unify_proc__CompareOp_15,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_16,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_17,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_18,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_19,
#line 1665 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_20,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_48,
#line 1665 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_49);

#line 1621 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_12,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_13,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_14,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_15,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_16,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Kind_17,
#line 1621 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_18,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 1621 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42);

#line 1606 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1606 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1606 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9);

#line 1519 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_11,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1519 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 1519 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

#line 1454 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1454 "unify_proc.m"
  MR_String check_hlds__unify_proc__HeadVar__4_4,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__8_8,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9,
#line 1454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_10,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_11,
#line 1454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_12);

#line 1439 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8,
#line 1439 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_9,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_10,
#line 1439 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_11);

#line 1341 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
#line 1341 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1341 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1341 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 1341 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_3);

#line 1329 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors0_11,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1329 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_30,
#line 1329 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_31);

#line 1880 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
#line 1880 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1880 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 1308 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_12,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_13,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_14,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1308 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1308 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__STATE_VARIABLE_N_0_32,
#line 1308 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__STATE_VARIABLE_N_33,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_34,
#line 1308 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_35);

#line 1301 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
#line 1301 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1301 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1301 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1301 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1301 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4,
#line 1301 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_5,
#line 1301 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_6);

#line 1295 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1295 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_21,
#line 1295 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_22);

#line 1217 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_10,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1217 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_43,
#line 1217 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_44);

#line 1209 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
#line 1209 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1209 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1209 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1209 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1209 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4);

#line 1203 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1203 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 1203 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

#line 1133 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_9,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_10,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1133 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_24,
#line 1133 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_25);

#line 1099 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_2,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_3,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_4,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_5,
#line 1099 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_6,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_7,
#line 1099 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_8);

#line 1089 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1089 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_16,
#line 1089 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_17);

#line 1080 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
#line 1080 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_7,
#line 1080 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_8,
#line 1080 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1080 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 1080 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1080 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

#line 1033 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1033 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
#line 1033 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16);

#line 1015 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1015 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_23,
#line 1015 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_24);

#line 994 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
#line 994 "unify_proc.m"
  MR_Word check_hlds__unify_proc__A_4,
#line 994 "unify_proc.m"
  MR_Word check_hlds__unify_proc__B_5,
#line 994 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Res_6);

#line 906 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_11,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 906 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 906 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42);

#line 839 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 839 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_37,
#line 839 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_38);

#line 808 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_8,
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 808 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 808 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

#line 756 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UserEqCompare_1,
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_2,
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_3,
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_4,
#line 756 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_5,
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 756 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

#line 718 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorCat_8,
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 718 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 718 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

#line 632 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 632 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 632 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

#line 483 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
#line 483 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 450 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialId_12,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Item_13,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TVarSet_14,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_15,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_16,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_17,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PredStatus_19,
#line 450 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_20,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26,
#line 450 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27);

#line 483 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
#line 483 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 512 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
#line 512 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 512 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
#line 512 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 399 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
#line 399 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 399 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 355 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_1(
#line 355 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 356 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_3(
#line 356 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 355 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_2(
#line 355 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 355 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_4(
#line 355 "unify_proc.m"
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



#line 1685 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1693 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1701 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0 = {
  (MR_String) "linear",
  (MR_Integer) 0
};

#line 1707 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1 = {
  (MR_String) "quad",
  (MR_Integer) 1
};

#line 1713 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

#line 1719 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

#line 1725 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1731 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "linear_or_quad",
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0
};

#line 1748 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1757 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1765 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1771 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0[2] = {
  (MR_String) "unify_req_map",
  (MR_String) "req_queue"
};

#line 1777 "check_hlds.unify_proc.c"
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

#line 1792 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

#line 1797 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0
  }
};

#line 1806 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

#line 1811 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0[1] = {
  (MR_Integer) 0
};

#line 1816 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_proc_requests_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____proc_requests_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____proc_requests_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "proc_requests",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0
};

#line 1833 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_req_queue_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__unify_proc____Unify____req_queue_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____req_queue_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "req_queue",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1850 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0 = {
  (MR_String) "declaration",
  (MR_Integer) 0
};

#line 1856 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1 = {
  (MR_String) "clauses",
  (MR_Integer) 1
};

#line 1862 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1
};

#line 1868 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0
};

#line 1874 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1880 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_pred_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_pred_item",
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0
};

#line 1897 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0
};

#line 1903 "check_hlds.unify_proc.c"
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

#line 1918 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

#line 1923 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0
  }
};

#line 1932 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

#line 1937 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0[1] = {
  (MR_Integer) 0
};

#line 1942 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_id",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0
};

#line 1959 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1967 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1975 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1984 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1992 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4] = {
  (MR_String) "upi_varset",
  (MR_String) "upi_vartypes",
  (MR_String) "upi_rtti_varmaps",
  (MR_String) "upi_module_info"
};

#line 2000 "check_hlds.unify_proc.c"
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

#line 2015 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

#line 2020 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0
  }
};

#line 2029 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

#line 2034 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 2039 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_info",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0
};

#line 2056 "check_hlds.unify_proc.c"
const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_req_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_req_map_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_req_map_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_req_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2073 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
#line 2076 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2078 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2080 "check_hlds.unify_proc.c"
{
#line 2082 "check_hlds.unify_proc.c"
  {
#line 2084 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2087 "check_hlds.unify_proc.c"
    {
#line 2089 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____linear_or_quad_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2092 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2094 "check_hlds.unify_proc.c"
  }
#line 2096 "check_hlds.unify_proc.c"
}

#line 2099 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
#line 2102 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2104 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2106 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2108 "check_hlds.unify_proc.c"
{
#line 2110 "check_hlds.unify_proc.c"
  {
#line 2112 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2115 "check_hlds.unify_proc.c"
    {
#line 2117 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____linear_or_quad_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2120 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2122 "check_hlds.unify_proc.c"
  }
#line 2124 "check_hlds.unify_proc.c"
}

#line 2127 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0_10001(
#line 2130 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2132 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2134 "check_hlds.unify_proc.c"
{
#line 2136 "check_hlds.unify_proc.c"
  {
#line 2138 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2141 "check_hlds.unify_proc.c"
    {
#line 2143 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____proc_requests_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2146 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2148 "check_hlds.unify_proc.c"
  }
#line 2150 "check_hlds.unify_proc.c"
}

#line 2153 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0_10001(
#line 2156 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2158 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2160 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2162 "check_hlds.unify_proc.c"
{
#line 2164 "check_hlds.unify_proc.c"
  {
#line 2166 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2169 "check_hlds.unify_proc.c"
    {
#line 2171 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____proc_requests_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2174 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2176 "check_hlds.unify_proc.c"
  }
#line 2178 "check_hlds.unify_proc.c"
}

#line 2181 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0_10001(
#line 2184 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2186 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2188 "check_hlds.unify_proc.c"
{
#line 2190 "check_hlds.unify_proc.c"
  {
#line 2192 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2195 "check_hlds.unify_proc.c"
    {
#line 2197 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____req_queue_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2200 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2202 "check_hlds.unify_proc.c"
  }
#line 2204 "check_hlds.unify_proc.c"
}

#line 2207 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0_10001(
#line 2210 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2212 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2214 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2216 "check_hlds.unify_proc.c"
{
#line 2218 "check_hlds.unify_proc.c"
  {
#line 2220 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2223 "check_hlds.unify_proc.c"
    {
#line 2225 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____req_queue_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2228 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2230 "check_hlds.unify_proc.c"
  }
#line 2232 "check_hlds.unify_proc.c"
}

#line 2235 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
#line 2238 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2240 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2242 "check_hlds.unify_proc.c"
{
#line 2244 "check_hlds.unify_proc.c"
  {
#line 2246 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2249 "check_hlds.unify_proc.c"
    {
#line 2251 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_pred_item_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2254 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2256 "check_hlds.unify_proc.c"
  }
#line 2258 "check_hlds.unify_proc.c"
}

#line 2261 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
#line 2264 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2266 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2268 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2270 "check_hlds.unify_proc.c"
{
#line 2272 "check_hlds.unify_proc.c"
  {
#line 2274 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2277 "check_hlds.unify_proc.c"
    {
#line 2279 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_pred_item_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2282 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2284 "check_hlds.unify_proc.c"
  }
#line 2286 "check_hlds.unify_proc.c"
}

#line 2289 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001(
#line 2292 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2294 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2296 "check_hlds.unify_proc.c"
{
#line 2298 "check_hlds.unify_proc.c"
  {
#line 2300 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2303 "check_hlds.unify_proc.c"
    {
#line 2305 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_proc_id_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2308 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2310 "check_hlds.unify_proc.c"
  }
#line 2312 "check_hlds.unify_proc.c"
}

#line 2315 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001(
#line 2318 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2320 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2322 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2324 "check_hlds.unify_proc.c"
{
#line 2326 "check_hlds.unify_proc.c"
  {
#line 2328 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2331 "check_hlds.unify_proc.c"
    {
#line 2333 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_proc_id_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2336 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2338 "check_hlds.unify_proc.c"
  }
#line 2340 "check_hlds.unify_proc.c"
}

#line 2343 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
#line 2346 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2348 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2350 "check_hlds.unify_proc.c"
{
#line 2352 "check_hlds.unify_proc.c"
  {
#line 2354 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2357 "check_hlds.unify_proc.c"
    {
#line 2359 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_proc_info_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2362 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2364 "check_hlds.unify_proc.c"
  }
#line 2366 "check_hlds.unify_proc.c"
}

#line 2369 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
#line 2372 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2374 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2376 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2378 "check_hlds.unify_proc.c"
{
#line 2380 "check_hlds.unify_proc.c"
  {
#line 2382 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2385 "check_hlds.unify_proc.c"
    {
#line 2387 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_proc_info_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2390 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2392 "check_hlds.unify_proc.c"
  }
#line 2394 "check_hlds.unify_proc.c"
}

#line 2397 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0_10001(
#line 2400 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2402 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2404 "check_hlds.unify_proc.c"
{
#line 2406 "check_hlds.unify_proc.c"
  {
#line 2408 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2411 "check_hlds.unify_proc.c"
    {
#line 2413 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_req_map_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2416 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2418 "check_hlds.unify_proc.c"
  }
#line 2420 "check_hlds.unify_proc.c"
}

#line 2423 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0_10001(
#line 2426 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2428 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2430 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2432 "check_hlds.unify_proc.c"
{
#line 2434 "check_hlds.unify_proc.c"
  {
#line 2436 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2439 "check_hlds.unify_proc.c"
    {
#line 2441 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_req_map_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2444 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2446 "check_hlds.unify_proc.c"
  }
#line 2448 "check_hlds.unify_proc.c"
}

#line 570 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(
#line 570 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_9,
#line 570 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 570 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 570 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 570 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_47,
#line 570 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_48)
#line 570 "unify_proc.m"
{
#line 574 "unify_proc.m"
  {
#line 574 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 574 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 3)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 2)));

#line 601 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_9)) == (MR_mktag((MR_Integer) 2))))
#line 580 "unify_proc.m"
      {
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqvType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 0)));
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo_16;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X0_17;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtor_18;
#line 580 "unify_proc.m"
        MR_String check_hlds__unify_proc__PredName_19;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ModuleName_20;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeSymName_21;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeModuleName_23;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InitPred_24;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredId_25;
#line 580 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__ModeId_26;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InitCall_27;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InitGoal_28;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Any_29;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastGoal_30;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_31;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_68_68;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_70_70;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_78_78;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_80_80;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_81_81;
#line 580 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_83_83;
#line 587 "unify_proc.m"
        MR_Integer check_hlds__unify_proc___TypeArity_22;

#line 581 "unify_proc.m"
        {
#line 581 "unify_proc.m"
          hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__GoalInfo_16);
        }
#line 582 "unify_proc.m"
        {
#line 582 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_15, (MR_String) "PreCast_HeadVar", (MR_Integer) 1, &check_hlds__unify_proc__X0_17, check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, &check_hlds__unify_proc__STATE_VARIABLE_Info_68_68);
        }
#line 584 "unify_proc.m"
        {
#line 584 "unify_proc.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__EqvType_15, &check_hlds__unify_proc__TypeCtor_18);
        }
#line 585 "unify_proc.m"
        {
#line 585 "unify_proc.m"
          check_hlds__unify_proc__PredName_19 = hlds__special_pred__special_pred_name_2_f_0((MR_Integer) 3, check_hlds__unify_proc__TypeCtor_18);
        }
#line 586 "unify_proc.m"
        {
#line 586 "unify_proc.m"
          hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unify_proc__ModuleInfo_14, &check_hlds__unify_proc__ModuleName_20);
        }
#line 587 "unify_proc.m"
        check_hlds__unify_proc__TypeSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_18, (MR_Integer) 0)));
#line 587 "unify_proc.m"
        check_hlds__unify_proc___TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_18, (MR_Integer) 1)));
#line 588 "unify_proc.m"
        {
#line 588 "unify_proc.m"
          mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(check_hlds__unify_proc__TypeSymName_21, check_hlds__unify_proc__ModuleName_20, &check_hlds__unify_proc__TypeModuleName_23);
        }
#line 590 "unify_proc.m"
        {
#line 590 "unify_proc.m"
          check_hlds__unify_proc__InitPred_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__InitPred_24, 0) = ((MR_Box) (check_hlds__unify_proc__TypeModuleName_23));
#line 590 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__InitPred_24, 1) = ((MR_Box) (check_hlds__unify_proc__PredName_19));
#line 590 "unify_proc.m"
        }
#line 591 "unify_proc.m"
        {
#line 591 "unify_proc.m"
          check_hlds__unify_proc__PredId_25 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 592 "unify_proc.m"
        {
#line 592 "unify_proc.m"
          check_hlds__unify_proc__ModeId_26 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 593 "unify_proc.m"
        {
#line 593 "unify_proc.m"
          check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__X0_17));
#line 593 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "unify_proc.m"
        }
#line 593 "unify_proc.m"
        {
#line 593 "unify_proc.m"
          check_hlds__unify_proc__InitCall_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 593 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_25));
#line 593 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_26));
#line 593 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 2) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
#line 593 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 3) = ((MR_Box) ((MR_Integer) 2));
#line 593 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 5) = ((MR_Box) (check_hlds__unify_proc__InitPred_24));
#line 593 "unify_proc.m"
        }
#line 594 "unify_proc.m"
        {
#line 594 "unify_proc.m"
          check_hlds__unify_proc__InitGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__InitGoal_28, 0) = ((MR_Box) (check_hlds__unify_proc__InitCall_27));
#line 594 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__InitGoal_28, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_16));
#line 594 "unify_proc.m"
        }
#line 596 "unify_proc.m"
        check_hlds__unify_proc__Any_29 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_2[5]);
#line 597 "unify_proc.m"
        {
#line 597 "unify_proc.m"
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 2, check_hlds__unify_proc__X0_17, check_hlds__unify_proc__X_10, check_hlds__unify_proc__Any_29, check_hlds__unify_proc__Any_29, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastGoal_30);
        }
#line 599 "unify_proc.m"
        {
#line 599 "unify_proc.m"
          check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__CastGoal_30));
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 599 "unify_proc.m"
        }
#line 599 "unify_proc.m"
        {
#line 599 "unify_proc.m"
          check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (check_hlds__unify_proc__InitGoal_28));
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 599 "unify_proc.m"
        }
#line 599 "unify_proc.m"
        {
#line 599 "unify_proc.m"
          check_hlds__unify_proc__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 1) = ((MR_Box) ((MR_Integer) 0));
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 2) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 599 "unify_proc.m"
        }
#line 599 "unify_proc.m"
        {
#line 599 "unify_proc.m"
          check_hlds__unify_proc__Goal_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 599 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_31, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_16));
#line 599 "unify_proc.m"
        }
#line 600 "unify_proc.m"
        {
#line 600 "unify_proc.m"
          check_hlds__unify_proc__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_83_83, 0) = ((MR_Box) (check_hlds__unify_proc__X_10));
#line 600 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "unify_proc.m"
        }
#line 600 "unify_proc.m"
        {
#line 600 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_83_83, check_hlds__unify_proc__Goal_31, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_68_68, check_hlds__unify_proc__STATE_VARIABLE_Info_48);
#line 600 "unify_proc.m"
          return;
        }
#line 580 "unify_proc.m"
      }
#line 601 "unify_proc.m"
    else
#line 601 "unify_proc.m"
    if (((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 602 "unify_proc.m"
      {
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__SolverTypeDetails_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 1)));
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__HowToInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 1)));
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Call_35;
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_59_59;
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo_86;
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InitPred_87;
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredId_88;
#line 602 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__ModeId_89;
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_90;
#line 602 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 2)));
#line 609 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 0)));
#line 609 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 2)));
#line 609 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 3)));
#line 609 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 4)));

#line 612 "unify_proc.m"
        if ((check_hlds__unify_proc__HowToInit_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "unify_proc.m"
          {
#line 614 "unify_proc.m"
            {
#line 614 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_initialise_proc_body\'/7", (MR_String) "generating initialise pred. for solver type that does not have automatic initialisation");
#line 614 "unify_proc.m"
              return;
            }
#line 613 "unify_proc.m"
          }
#line 612 "unify_proc.m"
        else
#line 611 "unify_proc.m"
          check_hlds__unify_proc__InitPred_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HowToInit_34, (MR_Integer) 0)));
#line 617 "unify_proc.m"
        {
#line 617 "unify_proc.m"
          check_hlds__unify_proc__PredId_88 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 618 "unify_proc.m"
        {
#line 618 "unify_proc.m"
          check_hlds__unify_proc__ModeId_89 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        }
#line 619 "unify_proc.m"
        {
#line 619 "unify_proc.m"
          check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_10));
#line 619 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "unify_proc.m"
        }
#line 619 "unify_proc.m"
        {
#line 619 "unify_proc.m"
          check_hlds__unify_proc__Call_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 619 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_88));
#line 619 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_89));
#line 619 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 2) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 619 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 3) = ((MR_Box) ((MR_Integer) 2));
#line 619 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 5) = ((MR_Box) (check_hlds__unify_proc__InitPred_87));
#line 619 "unify_proc.m"
        }
#line 620 "unify_proc.m"
        {
#line 620 "unify_proc.m"
          hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__GoalInfo_86);
        }
#line 621 "unify_proc.m"
        {
#line 621 "unify_proc.m"
          check_hlds__unify_proc__Goal_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_90, 0) = ((MR_Box) (check_hlds__unify_proc__Call_35));
#line 621 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_90, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_86));
#line 621 "unify_proc.m"
        }
#line 622 "unify_proc.m"
        {
#line 622 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Goal_90, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, check_hlds__unify_proc__STATE_VARIABLE_Info_48);
#line 622 "unify_proc.m"
          return;
        }
#line 602 "unify_proc.m"
      }
#line 601 "unify_proc.m"
    else
#line 627 "unify_proc.m"
      {
#line 628 "unify_proc.m"
        {
#line 628 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_initialise_proc_body\'/7", (MR_String) "trying to create initialisation proc for type that has no solver_type_details");
#line 628 "unify_proc.m"
          return;
        }
#line 627 "unify_proc.m"
      }
#line 574 "unify_proc.m"
  }
#line 570 "unify_proc.m"
}

#line 1880 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1880__1_1_f_0(
#line 1880 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_21)
#line 1880 "unify_proc.m"
{
#line 1880 "unify_proc.m"
  {
#line 1880 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1880 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_21, (MR_Integer) 1)));
#line 1880 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_21, (MR_Integer) 0)));
#line 1880 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_21, (MR_Integer) 2)));
#line 1880 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_21, (MR_Integer) 3)));

#line 1880 "unify_proc.m"
    return check_hlds__unify_proc__HeadVar__2_22;
#line 1880 "unify_proc.m"
  }
#line 1880 "unify_proc.m"
}

#line 483 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__483__1_2_p_0(
#line 483 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ErrorProcs_24,
#line 483 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_35)
#line 483 "unify_proc.m"
{
#line 483 "unify_proc.m"
  {
#line 483 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[2], ((MR_Box) (check_hlds__unify_proc__ErrorProcs_24)), ((MR_Box) (check_hlds__unify_proc__HeadVar__2_35)));
    }
#line 483 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 483 "unify_proc.m"
  }
#line 483 "unify_proc.m"
}

#line 399 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__399__1_2_f_0(
#line 399 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 399 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_37)
#line 399 "unify_proc.m"
{
#line 399 "unify_proc.m"
  {
#line 399 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 399 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HeadVar__3_38;

#line 400 "unify_proc.m"
    {
#line 400 "unify_proc.m"
      check_hlds__unify_proc__HeadVar__3_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 400 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_38, 1) = ((MR_Box) (check_hlds__unify_proc__HeadVar__2_37));
#line 400 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 400 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_38, 3) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 400 "unify_proc.m"
    }
#line 399 "unify_proc.m"
    return check_hlds__unify_proc__HeadVar__3_38;
#line 399 "unify_proc.m"
  }
#line 399 "unify_proc.m"
}

#line 176 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0(
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
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_4 = check_hlds__unify_proc__HeadVar__2_2;
#line 176 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_5 = check_hlds__unify_proc__HeadVar__3_3;

#line 176 "unify_proc.m"
    {
#line 176 "unify_proc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_5)));
#line 176 "unify_proc.m"
      return;
    }
#line 176 "unify_proc.m"
  }
#line 176 "unify_proc.m"
}

#line 176 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0(
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
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_3 = check_hlds__unify_proc__HeadVar__1_1;
#line 176 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_4 = check_hlds__unify_proc__HeadVar__2_2;

#line 176 "unify_proc.m"
    {
#line 176 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_4)));
    }
#line 176 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 176 "unify_proc.m"
  }
#line 176 "unify_proc.m"
}

#line 2073 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
#line 2073 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 2073 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 2073 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 2073 "unify_proc.m"
{
#line 2073 "unify_proc.m"
  {
#line 2073 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2073 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_15 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 2073 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_16 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 2073 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_15 == check_hlds__unify_proc__CastY_16);
#line 2073 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 3000 "check_hlds.unify_proc.c"
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
#line 2073 "unify_proc.m"
    else
#line 2073 "unify_proc.m"
      {
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 2)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 3)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_12_12;

#line 2073 "unify_proc.m"
        {
#line 2073 "unify_proc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[4], &check_hlds__unify_proc__V_12_12, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_8_8)));
        }
#line 3030 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_12_12 == (MR_Integer) 0);
#line 2073 "unify_proc.m"
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2073 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 2073 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_12_12;
#line 2073 "unify_proc.m"
        else
#line 2073 "unify_proc.m"
          {
#line 2073 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_13_13;

#line 2073 "unify_proc.m"
            {
#line 2073 "unify_proc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__unify_proc__V_13_13, ((MR_Box) (check_hlds__unify_proc__V_5_5)), ((MR_Box) (check_hlds__unify_proc__V_9_9)));
            }
#line 3050 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_13_13 == (MR_Integer) 0);
#line 2073 "unify_proc.m"
            check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2073 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 2073 "unify_proc.m"
              *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_13_13;
#line 2073 "unify_proc.m"
            else
#line 2073 "unify_proc.m"
              {
#line 2073 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_14_14;

#line 2073 "unify_proc.m"
                {
#line 2073 "unify_proc.m"
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__unify_proc__V_14_14, check_hlds__unify_proc__V_6_6, check_hlds__unify_proc__V_10_10);
                }
#line 3070 "check_hlds.unify_proc.c"
                check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_14_14 == (MR_Integer) 0);
#line 2073 "unify_proc.m"
                check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2073 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 2073 "unify_proc.m"
                  *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_14_14;
#line 2073 "unify_proc.m"
                else
#line 2073 "unify_proc.m"
                  {
#line 2073 "unify_proc.m"
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__V_7_7, check_hlds__unify_proc__V_11_11);
#line 2073 "unify_proc.m"
                    return;
                  }
#line 2073 "unify_proc.m"
              }
#line 2073 "unify_proc.m"
          }
#line 2073 "unify_proc.m"
      }
#line 2073 "unify_proc.m"
  }
#line 2073 "unify_proc.m"
}

#line 2073 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
#line 2073 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 2073 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 2073 "unify_proc.m"
{
#line 2073 "unify_proc.m"
  {
#line 2073 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2073 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_11 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
#line 2073 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_12 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

#line 2073 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_11 == check_hlds__unify_proc__CastY_12);
#line 2073 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 2073 "unify_proc.m"
      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 2073 "unify_proc.m"
    else
#line 2073 "unify_proc.m"
      {
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorInfo_14_14;
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 2)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 3)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
#line 2073 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));

#line 3145 "check_hlds.unify_proc.c"
        {
#line 3147 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[4], ((MR_Box) (check_hlds__unify_proc__V_3_3)), ((MR_Box) (check_hlds__unify_proc__V_7_7)));
        }
#line 2073 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 2073 "unify_proc.m"
          {
#line 3154 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 3156 "check_hlds.unify_proc.c"
            {
#line 3158 "check_hlds.unify_proc.c"
              check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeCtorInfo_14_14, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_8_8)));
            }
#line 2073 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 2073 "unify_proc.m"
              {
#line 3165 "check_hlds.unify_proc.c"
                {
#line 3167 "check_hlds.unify_proc.c"
                  check_hlds__unify_proc__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__unify_proc__V_5_5, check_hlds__unify_proc__V_9_9);
                }
#line 2073 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 3172 "check_hlds.unify_proc.c"
                  {
#line 3174 "check_hlds.unify_proc.c"
                    return check_hlds__unify_proc__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__unify_proc__V_6_6, check_hlds__unify_proc__V_10_10);
                  }
#line 2073 "unify_proc.m"
              }
#line 2073 "unify_proc.m"
          }
#line 2073 "unify_proc.m"
      }
#line 2073 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 2073 "unify_proc.m"
  }
#line 2073 "unify_proc.m"
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
#line 3214 "check_hlds.unify_proc.c"
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
#line 3236 "check_hlds.unify_proc.c"
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

#line 3297 "check_hlds.unify_proc.c"
        {
#line 3299 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__unify_proc__V_3_3, check_hlds__unify_proc__V_5_5);
        }
#line 74 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 3304 "check_hlds.unify_proc.c"
          {
#line 3306 "check_hlds.unify_proc.c"
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

#line 495 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
#line 495 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 495 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 495 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 495 "unify_proc.m"
{
#line 495 "unify_proc.m"
  {
#line 495 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 495 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 495 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 495 "unify_proc.m"
    {
#line 495 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Cast_HeadVar1_4, check_hlds__unify_proc__Cast_HeadVar2_5);
#line 495 "unify_proc.m"
      return;
    }
#line 495 "unify_proc.m"
  }
#line 495 "unify_proc.m"
}

#line 495 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
#line 495 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 495 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 495 "unify_proc.m"
{
#line 3359 "check_hlds.unify_proc.c"
  {
#line 3361 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__HeadVar__2_1 == check_hlds__unify_proc__HeadVar__2_2);

#line 3364 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 3366 "check_hlds.unify_proc.c"
  }
#line 495 "unify_proc.m"
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

#line 178 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0(
#line 178 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 178 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 178 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 178 "unify_proc.m"
{
#line 178 "unify_proc.m"
  {
#line 178 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 178 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_9 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 178 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_10 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 178 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_9 == check_hlds__unify_proc__CastY_10);
#line 178 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 3457 "check_hlds.unify_proc.c"
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
#line 178 "unify_proc.m"
    else
#line 178 "unify_proc.m"
      {
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8;

#line 178 "unify_proc.m"
        {
#line 178 "unify_proc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], &check_hlds__unify_proc__V_8_8, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_6_6)));
        }
#line 3479 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_8_8 == (MR_Integer) 0);
#line 178 "unify_proc.m"
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 178 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 178 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_8_8;
#line 178 "unify_proc.m"
        else
#line 178 "unify_proc.m"
          {
#line 178 "unify_proc.m"
            {
#line 178 "unify_proc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[3], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__V_5_5)), ((MR_Box) (check_hlds__unify_proc__V_7_7)));
#line 178 "unify_proc.m"
              return;
            }
#line 178 "unify_proc.m"
          }
#line 178 "unify_proc.m"
      }
#line 178 "unify_proc.m"
  }
#line 178 "unify_proc.m"
}

#line 178 "unify_proc.m"
MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0(
#line 178 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 178 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 178 "unify_proc.m"
{
#line 178 "unify_proc.m"
  {
#line 178 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 178 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_7 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
#line 178 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_8 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

#line 178 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_7 == check_hlds__unify_proc__CastY_8);
#line 178 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 178 "unify_proc.m"
      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 178 "unify_proc.m"
    else
#line 178 "unify_proc.m"
      {
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeInfo_10_10;
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));

#line 3546 "check_hlds.unify_proc.c"
        {
#line 3548 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], ((MR_Box) (check_hlds__unify_proc__V_3_3)), ((MR_Box) (check_hlds__unify_proc__V_5_5)));
        }
#line 178 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 178 "unify_proc.m"
          {
#line 3555 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__TypeInfo_10_10 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[3];
#line 3557 "check_hlds.unify_proc.c"
            {
#line 3559 "check_hlds.unify_proc.c"
              return check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_10_10, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_6_6)));
            }
#line 178 "unify_proc.m"
          }
#line 178 "unify_proc.m"
      }
#line 178 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 178 "unify_proc.m"
  }
#line 178 "unify_proc.m"
}

#line 1617 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
#line 1617 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 1617 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1617 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 1617 "unify_proc.m"
{
#line 1617 "unify_proc.m"
  {
#line 1617 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1617 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 1617 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 1617 "unify_proc.m"
    {
#line 1617 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Cast_HeadVar1_4, check_hlds__unify_proc__Cast_HeadVar2_5);
#line 1617 "unify_proc.m"
      return;
    }
#line 1617 "unify_proc.m"
  }
#line 1617 "unify_proc.m"
}

#line 1617 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
#line 1617 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 1617 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 1617 "unify_proc.m"
{
#line 3614 "check_hlds.unify_proc.c"
  {
#line 3616 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__HeadVar__2_1 == check_hlds__unify_proc__HeadVar__2_2);

#line 3619 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 3621 "check_hlds.unify_proc.c"
  }
#line 1617 "unify_proc.m"
}

#line 2053 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
#line 2053 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_6,
#line 2053 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 2053 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_8,
#line 2053 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
#line 2053 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15)
#line 2053 "unify_proc.m"
{
#line 2095 "unify_proc.m"
  {
#line 2095 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_12;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_13;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 2095 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25;

#line 2098 "unify_proc.m"
    {
#line 2098 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_7, check_hlds__unify_proc__Var_8, check_hlds__unify_proc__VarSet0_10, &check_hlds__unify_proc__VarSet_12);
    }
#line 2099 "unify_proc.m"
    {
#line 2099 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__unify_proc__Var_8, check_hlds__unify_proc__Type_6, check_hlds__unify_proc__VarTypes0_11, &check_hlds__unify_proc__VarTypes_13);
    }
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
#line 2101 "unify_proc.m"
    {
#line 2101 "unify_proc.m"
      MR_Word base;
#line 2101 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2101 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_15 = base;
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_12));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_13));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_27_27));
#line 2101 "unify_proc.m"
    }
#line 2095 "unify_proc.m"
  }
#line 2053 "unify_proc.m"
}

#line 2051 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
#line 2051 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_5,
#line 2051 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_6,
#line 2051 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
#line 2051 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13)
#line 2051 "unify_proc.m"
{
#line 2087 "unify_proc.m"
  {
#line 2087 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2087 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
#line 2087 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
#line 2087 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_10;
#line 2087 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_11;
#line 2087 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2087 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25;
#line 2088 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
#line 2088 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
#line 2092 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 2092 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;

#line 2090 "unify_proc.m"
    {
#line 2090 "unify_proc.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Var_6, check_hlds__unify_proc__VarSet0_8, &check_hlds__unify_proc__VarSet_10);
    }
#line 2091 "unify_proc.m"
    {
#line 2091 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__unify_proc__Var_6, check_hlds__unify_proc__Type_5, check_hlds__unify_proc__VarTypes0_9, &check_hlds__unify_proc__VarTypes_11);
    }
#line 2092 "unify_proc.m"
    check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
#line 2092 "unify_proc.m"
    check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
#line 2092 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
#line 2092 "unify_proc.m"
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
#line 2093 "unify_proc.m"
    {
#line 2093 "unify_proc.m"
      MR_Word base;
#line 2093 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2093 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_13 = base;
#line 2093 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_10));
#line 2093 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_11));
#line 2093 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_24_24));
#line 2093 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_25_25));
#line 2093 "unify_proc.m"
    }
#line 2087 "unify_proc.m"
  }
#line 2051 "unify_proc.m"
}

#line 2036 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
#line 2036 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_3)
#line 2036 "unify_proc.m"
{
#line 2038 "unify_proc.m"
  {
#line 2038 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2038 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HeadVar__2_2;
#line 2038 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_4;
#line 2038 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_6_6;
#line 2038 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_7_7;
#line 2038 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_9;
#line 2038 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_10_10;

#line 2033 "unify_proc.m"
    {
#line 2033 "unify_proc.m"
      check_hlds__unify_proc__Builtin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_10_10, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_9));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_10_10, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2034 "unify_proc.m"
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_6_6, 0) = ((MR_Box) (check_hlds__unify_proc__V_10_10));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_6_6, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
    }
#line 2039 "unify_proc.m"
    {
#line 2039 "unify_proc.m"
      check_hlds__unify_proc__V_7_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2039 "unify_proc.m"
    {
#line 2039 "unify_proc.m"
      check_hlds__unify_proc__SymName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 0) = ((MR_Box) (check_hlds__unify_proc__V_7_7));
#line 2039 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 1) = ((MR_Box) (check_hlds__unify_proc__Name_3));
#line 2039 "unify_proc.m"
    }
#line 2038 "unify_proc.m"
    {
#line 2038 "unify_proc.m"
      check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_4));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 3) = ((MR_Box) (check_hlds__unify_proc__V_6_6));
#line 2038 "unify_proc.m"
    }
#line 2038 "unify_proc.m"
    return check_hlds__unify_proc__HeadVar__2_2;
#line 2038 "unify_proc.m"
  }
#line 2036 "unify_proc.m"
}

#line 2012 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
#line 2012 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVars_7,
#line 2012 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_8,
#line 2012 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 2012 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 2012 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 2012 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21)
#line 2012 "unify_proc.m"
{
#line 2016 "unify_proc.m"
  {
#line 2016 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Varset0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_16;
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Varset_17;
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types_18;
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_19;
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_49_49;
#line 2016 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_52_52;
#line 2105 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 2020 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Warnings_15;
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45;

#line 2020 "unify_proc.m"
    {
#line 2020 "unify_proc.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__unify_proc__HeadVars_7, &check_hlds__unify_proc___Warnings_15, check_hlds__unify_proc__Goal0_8, &check_hlds__unify_proc__Goal_16, check_hlds__unify_proc__Varset0_12, &check_hlds__unify_proc__Varset_17, check_hlds__unify_proc__Types0_13, &check_hlds__unify_proc__Types_18, check_hlds__unify_proc__RttiVarMaps0_14, &check_hlds__unify_proc__RttiVarMaps_19);
    }
#line 2110 "unify_proc.m"
    check_hlds__unify_proc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 2110 "unify_proc.m"
    check_hlds__unify_proc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 2110 "unify_proc.m"
    check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 2110 "unify_proc.m"
    check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 2111 "unify_proc.m"
    check_hlds__unify_proc__V_49_49 = check_hlds__unify_proc__Varset_17;
#line 2111 "unify_proc.m"
    check_hlds__unify_proc__V_52_52 = check_hlds__unify_proc__V_46_46;
#line 2112 "unify_proc.m"
    {
#line 2112 "unify_proc.m"
      MR_Word base;
#line 2112 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2112 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_Info_21 = base;
#line 2112 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_49_49));
#line 2112 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Types_18));
#line 2112 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_19));
#line 2112 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_52_52));
#line 2112 "unify_proc.m"
    }
#line 2026 "unify_proc.m"
    {
#line 2026 "unify_proc.m"
      MR_Word base;
#line 2026 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2026 "unify_proc.m"
      *check_hlds__unify_proc__Clause_10 = base;
#line 2026 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2026 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goal_16));
#line 2026 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2026 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Context_9));
#line 2026 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2026 "unify_proc.m"
    }
#line 2016 "unify_proc.m"
  }
#line 2012 "unify_proc.m"
}

#line 1939 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_11,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__MaybeCompareRes_12,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_13,
#line 1939 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_14,
#line 1939 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_38,
#line 1939 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_39)
#line 1939 "unify_proc.m"
{
#line 1945 "unify_proc.m"
  {
#line 1945 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1945 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ShouldPretestEq_16;
#line 1945 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 1945 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_64;
#line 1992 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 1992 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 1992 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));

#line 1993 "unify_proc.m"
    {
#line 1993 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_63, &check_hlds__unify_proc__Globals_64);
    }
#line 1994 "unify_proc.m"
    {
#line 1994 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_64, (MR_Integer) 319, &check_hlds__unify_proc__ShouldPretestEq_16);
    }
#line 1950 "unify_proc.m"
    if ((check_hlds__unify_proc__ShouldPretestEq_16 == (MR_Integer) 0))
#line 1948 "unify_proc.m"
      {
#line 1949 "unify_proc.m"
        *check_hlds__unify_proc__Goal_14 = check_hlds__unify_proc__Goal0_13;
#line 1948 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_39 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_38;
#line 1948 "unify_proc.m"
      }
#line 1950 "unify_proc.m"
    else
#line 1951 "unify_proc.m"
      {
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastType_17;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastX_18;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastY_19;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal0_20;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal0_21;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal_22;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal_23;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualityGoal0_24;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualityGoal_25;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CondGoalExpr_26;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo0_27;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ContextGoalInfo_28;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CondGoal_29;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualGoal_30;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo_31;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalExpr_36;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__FeaturedGoalInfo_37;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_41_41;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_48_48;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_54_54;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_55_55;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Globals_72;
#line 1951 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastPointers_73;
#line 1999 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 1999 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 1999 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));

#line 2000 "unify_proc.m"
        {
#line 2000 "unify_proc.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_71, &check_hlds__unify_proc__Globals_72);
        }
#line 2001 "unify_proc.m"
        {
#line 2001 "unify_proc.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_72, (MR_Integer) 273, &check_hlds__unify_proc__CastPointers_73);
        }
#line 2005 "unify_proc.m"
        if ((check_hlds__unify_proc__CastPointers_73 == (MR_Integer) 0))
#line 2007 "unify_proc.m"
          {
#line 2007 "unify_proc.m"
            check_hlds__unify_proc__CastType_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 2005 "unify_proc.m"
        else
#line 2004 "unify_proc.m"
          {
#line 2004 "unify_proc.m"
            check_hlds__unify_proc__CastType_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 1953 "unify_proc.m"
        {
#line 1953 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__CastType_17, (MR_String) "CastX", &check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, &check_hlds__unify_proc__STATE_VARIABLE_Info_41_41);
        }
#line 1954 "unify_proc.m"
        {
#line 1954 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__CastType_17, (MR_String) "CastY", &check_hlds__unify_proc__CastY_19, check_hlds__unify_proc__STATE_VARIABLE_Info_41_41, check_hlds__unify_proc__STATE_VARIABLE_Info_39);
        }
#line 1955 "unify_proc.m"
        {
#line 1955 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_10, check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__CastXGoal0_20);
        }
#line 1956 "unify_proc.m"
        {
#line 1956 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_11, check_hlds__unify_proc__CastY_19, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__CastYGoal0_21);
        }
#line 1957 "unify_proc.m"
        {
#line 1957 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastXGoal0_20, &check_hlds__unify_proc__CastXGoal_22);
        }
#line 1958 "unify_proc.m"
        {
#line 1958 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastYGoal0_21, &check_hlds__unify_proc__CastYGoal_23);
        }
#line 1959 "unify_proc.m"
        {
#line 1959 "unify_proc.m"
          check_hlds__unify_proc__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1959 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_48_48, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_19));
#line 1959 "unify_proc.m"
        }
#line 1959 "unify_proc.m"
        {
#line 1959 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__V_48_48, check_hlds__unify_proc__Context_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__EqualityGoal0_24);
        }
#line 1961 "unify_proc.m"
        {
#line 1961 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 19, check_hlds__unify_proc__EqualityGoal0_24, &check_hlds__unify_proc__EqualityGoal_25);
        }
#line 1963 "unify_proc.m"
        {
#line 1963 "unify_proc.m"
          check_hlds__unify_proc__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 0) = ((MR_Box) (check_hlds__unify_proc__EqualityGoal_25));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1963 "unify_proc.m"
        }
#line 1963 "unify_proc.m"
        {
#line 1963 "unify_proc.m"
          check_hlds__unify_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_23));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (check_hlds__unify_proc__V_55_55));
#line 1963 "unify_proc.m"
        }
#line 1963 "unify_proc.m"
        {
#line 1963 "unify_proc.m"
          check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_22));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_54_54));
#line 1963 "unify_proc.m"
        }
#line 1963 "unify_proc.m"
        {
#line 1963 "unify_proc.m"
          check_hlds__unify_proc__CondGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1963 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 2) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1963 "unify_proc.m"
        }
#line 1964 "unify_proc.m"
        {
#line 1964 "unify_proc.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_27);
        }
#line 1965 "unify_proc.m"
        {
#line 1965 "unify_proc.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_9, check_hlds__unify_proc__GoalInfo0_27, &check_hlds__unify_proc__ContextGoalInfo_28);
        }
#line 1966 "unify_proc.m"
        {
#line 1966 "unify_proc.m"
          check_hlds__unify_proc__CondGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1966 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CondGoal_29, 0) = ((MR_Box) (check_hlds__unify_proc__CondGoalExpr_26));
#line 1966 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CondGoal_29, 1) = ((MR_Box) (check_hlds__unify_proc__ContextGoalInfo_28));
#line 1966 "unify_proc.m"
        }
#line 1971 "unify_proc.m"
        if ((check_hlds__unify_proc__MaybeCompareRes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1968 "unify_proc.m"
          {
#line 1969 "unify_proc.m"
            {
#line 1969 "unify_proc.m"
              check_hlds__unify_proc__EqualGoal_30 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_9);
            }
#line 1970 "unify_proc.m"
            check_hlds__unify_proc__GoalInfo_31 = check_hlds__unify_proc__ContextGoalInfo_28;
#line 1968 "unify_proc.m"
          }
#line 1971 "unify_proc.m"
        else
#line 1972 "unify_proc.m"
          {
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Res_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompareRes_12, (MR_Integer) 0)));
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__EqualGoalInfo_34;
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__InstmapDelta_35;
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_57_57;
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__SymName_79;
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_81_81;
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_82_82;
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Builtin_84;
#line 1972 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_85_85;
#line 1974 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_33_33;

#line 2033 "unify_proc.m"
            {
#line 2033 "unify_proc.m"
              check_hlds__unify_proc__Builtin_84 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 2034 "unify_proc.m"
            {
#line 2034 "unify_proc.m"
              check_hlds__unify_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_85_85, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_84));
#line 2034 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_85_85, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2034 "unify_proc.m"
            }
#line 2034 "unify_proc.m"
            {
#line 2034 "unify_proc.m"
              check_hlds__unify_proc__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2034 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__V_85_85));
#line 2034 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
            }
#line 2039 "unify_proc.m"
            {
#line 2039 "unify_proc.m"
              check_hlds__unify_proc__V_82_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 2039 "unify_proc.m"
            {
#line 2039 "unify_proc.m"
              check_hlds__unify_proc__SymName_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
#line 2039 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 1) = ((MR_Box) ((MR_String) "="));
#line 2039 "unify_proc.m"
            }
#line 2038 "unify_proc.m"
            {
#line 2038 "unify_proc.m"
              check_hlds__unify_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "unify_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2038 "unify_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_79));
#line 2038 "unify_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2038 "unify_proc.m"
              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 3) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 2038 "unify_proc.m"
            }
#line 1973 "unify_proc.m"
            {
#line 1973 "unify_proc.m"
              hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_32, check_hlds__unify_proc__V_57_57, &check_hlds__unify_proc__EqualGoal_30);
            }
#line 1974 "unify_proc.m"
            check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 0)));
#line 1974 "unify_proc.m"
            check_hlds__unify_proc__EqualGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 1)));
#line 1975 "unify_proc.m"
            {
#line 1975 "unify_proc.m"
              check_hlds__unify_proc__InstmapDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unify_proc__EqualGoalInfo_34);
            }
#line 1976 "unify_proc.m"
            {
#line 1976 "unify_proc.m"
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__unify_proc__InstmapDelta_35, check_hlds__unify_proc__ContextGoalInfo_28, &check_hlds__unify_proc__GoalInfo_31);
            }
#line 1972 "unify_proc.m"
          }
#line 1979 "unify_proc.m"
        {
#line 1979 "unify_proc.m"
          check_hlds__unify_proc__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1979 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1979 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 2) = ((MR_Box) (check_hlds__unify_proc__CondGoal_29));
#line 1979 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 3) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_30));
#line 1979 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 4) = ((MR_Box) (check_hlds__unify_proc__Goal0_13));
#line 1979 "unify_proc.m"
        }
#line 1980 "unify_proc.m"
        {
#line 1980 "unify_proc.m"
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__unify_proc__GoalInfo_31, &check_hlds__unify_proc__FeaturedGoalInfo_37);
        }
#line 1982 "unify_proc.m"
        {
#line 1982 "unify_proc.m"
          MR_Word base;
#line 1982 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1982 "unify_proc.m"
          *check_hlds__unify_proc__Goal_14 = base;
#line 1982 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__GoalExpr_36));
#line 1982 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__FeaturedGoalInfo_37));
#line 1982 "unify_proc.m"
        }
#line 1951 "unify_proc.m"
      }
#line 1945 "unify_proc.m"
  }
#line 1939 "unify_proc.m"
}

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1927 "unify_proc.m"
{
#line 1927 "unify_proc.m"
  {
#line 1927 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1927 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0, 1);
#line 1927 "unify_proc.m"
  }
#line 1927 "unify_proc.m"
}

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_3(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1927 "unify_proc.m"
{
#line 1927 "unify_proc.m"
  {
#line 1927 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1927 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25);
#line 1927 "unify_proc.m"
    {
#line 1927 "unify_proc.m"
      check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(check_hlds__unify_proc__env_ptr);
#line 1927 "unify_proc.m"
      return;
    }
#line 1927 "unify_proc.m"
  }
#line 1927 "unify_proc.m"
}

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_4(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1927 "unify_proc.m"
{
#line 1927 "unify_proc.m"
  {
#line 1927 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 4448 "check_hlds.unify_proc.c"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[0];
#line 1928 "unify_proc.m"
    {
#line 1928 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42)));
    }
#line 1928 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1928 "unify_proc.m"
      {
#line 1928 "unify_proc.m"
        check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(check_hlds__unify_proc__env_ptr);
#line 1928 "unify_proc.m"
        return;
      }
#line 1927 "unify_proc.m"
  }
#line 1927 "unify_proc.m"
}

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1927 "unify_proc.m"
{
#line 1927 "unify_proc.m"
  {
#line 1927 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1928 "unify_proc.m"
    {
#line 1928 "unify_proc.m"
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42, check_hlds__unify_proc__unify_var_lists_2_7_p_0_4, check_hlds__unify_proc__env_ptr);
    }
#line 1927 "unify_proc.m"
  }
#line 1927 "unify_proc.m"
}

#line 1927 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(
#line 1927 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1927 "unify_proc.m"
{
#line 1927 "unify_proc.m"
  {
#line 1927 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1927 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0) == 0)
#line 1927 "unify_proc.m"
      {
#line 1927 "unify_proc.m"
        {
#line 1927 "unify_proc.m"
          {
#line 1927 "unify_proc.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__unify_var_lists_2_7_p_0_3, check_hlds__unify_proc__env_ptr);
          }
#line 1927 "unify_proc.m"
        }
#line 1927 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 1927 "unify_proc.m"
      }
#line 1927 "unify_proc.m"
    else
#line 1927 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1927 "unify_proc.m"
  }
#line 1927 "unify_proc.m"
}

#line 1906 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0(
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1906 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
#line 1906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 1906 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
#line 1906 "unify_proc.m"
{
#line 1906 "unify_proc.m"
  {
#line 1906 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s check_hlds__unify_proc__env;

#line 1906 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2 = check_hlds__unify_proc__ExistQTVars_2;
#line 1910 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1910 "unify_proc.m"
      {
#line 1910 "unify_proc.m"
        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1910 "unify_proc.m"
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1910 "unify_proc.m"
          {
#line 1910 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1910 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1910 "unify_proc.m"
              {
#line 1910 "unify_proc.m"
                *check_hlds__unify_proc__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1910 "unify_proc.m"
                *check_hlds__unify_proc__STATE_VARIABLE_Info_7 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1910 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1910 "unify_proc.m"
              }
#line 1910 "unify_proc.m"
          }
#line 1910 "unify_proc.m"
      }
#line 1910 "unify_proc.m"
    else
#line 1912 "unify_proc.m"
      {
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_15;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Xs_16;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_17;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ys_18;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_19;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goals_20;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Context_23;
#line 1912 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
#line 1913 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_38_38;
#line 1913 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1913 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 1916 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ModuleInfo_24;
#line 1916 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_28_28;
#line 2108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_45_45;
#line 2108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_46_46;
#line 2108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_47_47;

#line 1911 "unify_proc.m"
        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1911 "unify_proc.m"
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1911 "unify_proc.m"
          {
#line 1911 "unify_proc.m"
            check_hlds__unify_proc__X_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1911 "unify_proc.m"
            check_hlds__unify_proc__Xs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1911 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1911 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1911 "unify_proc.m"
              {
#line 1911 "unify_proc.m"
                check_hlds__unify_proc__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 0)));
#line 1911 "unify_proc.m"
                check_hlds__unify_proc__Ys_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 1)));
#line 1913 "unify_proc.m"
                check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 0)));
#line 1913 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 1)));
#line 1913 "unify_proc.m"
                check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 2)));
#line 1913 "unify_proc.m"
                check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 3)));
#line 1914 "unify_proc.m"
                {
#line 1914 "unify_proc.m"
                  mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_23);
                }
#line 2108 "unify_proc.m"
                check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
                check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
                check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2108 "unify_proc.m"
                check_hlds__unify_proc__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 1917 "unify_proc.m"
                {
#line 1917 "unify_proc.m"
                  check_hlds__unify_proc__V_28_28 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_24, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22);
                }
#line 1917 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__V_28_28 == (MR_Integer) 0);
#line 1920 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1919 "unify_proc.m"
                  {
#line 1919 "unify_proc.m"
                    {
#line 1919 "unify_proc.m"
                      check_hlds__unify_proc__Goal_19 = hlds__make_goal__true_goal_0_f_0();
                    }
#line 1919 "unify_proc.m"
                    check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1919 "unify_proc.m"
                  }
#line 1920 "unify_proc.m"
                else
#line 1931 "unify_proc.m"
                  {
#line 1927 "unify_proc.m"
                    {
#line 1927 "unify_proc.m"
                      check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(&check_hlds__unify_proc__env);
                    }
#line 1931 "unify_proc.m"
                    if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1930 "unify_proc.m"
                      {
#line 1930 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_30_30;
#line 1930 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_32_32;

#line 1930 "unify_proc.m"
                        {
#line 1930 "unify_proc.m"
                          check_hlds__unify_proc__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1930 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (check_hlds__unify_proc__Y_17));
#line 1930 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1930 "unify_proc.m"
                        }
#line 1930 "unify_proc.m"
                        {
#line 1930 "unify_proc.m"
                          check_hlds__unify_proc__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1930 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__X_15));
#line 1930 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_32_32));
#line 1930 "unify_proc.m"
                        }
#line 1930 "unify_proc.m"
                        {
#line 1930 "unify_proc.m"
                          check_hlds__unify_proc__build_call_6_p_0((MR_String) "typed_unify", check_hlds__unify_proc__V_30_30, check_hlds__unify_proc__Context_23, &check_hlds__unify_proc__Goal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
                        }
#line 1930 "unify_proc.m"
                      }
#line 1931 "unify_proc.m"
                    else
#line 1932 "unify_proc.m"
                      {
#line 1932 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_34_34;

#line 1932 "unify_proc.m"
                        {
#line 1932 "unify_proc.m"
                          check_hlds__unify_proc__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1932 "unify_proc.m"
                          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_34_34, 0) = ((MR_Box) (check_hlds__unify_proc__Y_17));
#line 1932 "unify_proc.m"
                        }
#line 1932 "unify_proc.m"
                        {
#line 1932 "unify_proc.m"
                          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_15, check_hlds__unify_proc__V_34_34, check_hlds__unify_proc__Context_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_19);
                        }
#line 1932 "unify_proc.m"
                        check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1932 "unify_proc.m"
                      }
#line 1931 "unify_proc.m"
                  }
#line 1935 "unify_proc.m"
                {
#line 1935 "unify_proc.m"
                  (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = check_hlds__unify_proc__unify_var_lists_2_7_p_0(check_hlds__unify_proc__ArgTypes_13, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__Xs_16, check_hlds__unify_proc__Ys_18, &check_hlds__unify_proc__Goals_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
                }
#line 1912 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1912 "unify_proc.m"
                  {
#line 1912 "unify_proc.m"
                    {
#line 1912 "unify_proc.m"
                      MR_Word base;
#line 1912 "unify_proc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1912 "unify_proc.m"
                      *check_hlds__unify_proc__HeadVar__5_5 = base;
#line 1912 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Goal_19));
#line 1912 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goals_20));
#line 1912 "unify_proc.m"
                    }
#line 1912 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1912 "unify_proc.m"
                  }
#line 1911 "unify_proc.m"
              }
#line 1911 "unify_proc.m"
          }
#line 1912 "unify_proc.m"
      }
#line 1910 "unify_proc.m"
    return (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded;
#line 1906 "unify_proc.m"
  }
#line 1906 "unify_proc.m"
}

#line 1880 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
#line 1880 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1880 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 1880 "unify_proc.m"
{
#line 1880 "unify_proc.m"
  {
#line 1880 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 1880 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1880 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__2_22;

#line 1880 "unify_proc.m"
    {
#line 1880 "unify_proc.m"
      check_hlds__unify_proc__conv0_HeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1880__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 1880 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__2_22));
#line 1880 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 1880 "unify_proc.m"
  }
#line 1880 "unify_proc.m"
}

#line 1874 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
#line 1874 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorArgs_6,
#line 1874 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_7,
#line 1874 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Vars_8,
#line 1874 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1874 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
#line 1874 "unify_proc.m"
{
#line 1879 "unify_proc.m"
  {
#line 1879 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1879 "unify_proc.m"
    if ((check_hlds__unify_proc__ExistQTVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1879 "unify_proc.m"
      {
#line 1879 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_10;

#line 1880 "unify_proc.m"
        {
#line 1880 "unify_proc.m"
          check_hlds__unify_proc__ArgTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[4], check_hlds__unify_proc__CtorArgs_6);
        }
#line 1881 "unify_proc.m"
        {
#line 1881 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, check_hlds__unify_proc__STATE_VARIABLE_Info_18);
#line 1881 "unify_proc.m"
          return;
        }
#line 1879 "unify_proc.m"
      }
#line 1879 "unify_proc.m"
    else
#line 1883 "unify_proc.m"
      {
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1883 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumVars_15;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_16;
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 2110 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 2110 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 2110 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_41_41;
#line 2110 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_38_38;

#line 1890 "unify_proc.m"
        {
#line 1890 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__CtorArgs_6, &check_hlds__unify_proc__NumVars_15);
        }
#line 1891 "unify_proc.m"
        {
#line 1891 "unify_proc.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_15, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__VarSet0_14, &check_hlds__unify_proc__VarSet_16);
        }
#line 2110 "unify_proc.m"
        check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 2110 "unify_proc.m"
        check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2110 "unify_proc.m"
        check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 2110 "unify_proc.m"
        check_hlds__unify_proc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 2110 "unify_proc.m"
        {
#line 2110 "unify_proc.m"
          MR_Word base;
#line 2110 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2110 "unify_proc.m"
          *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = base;
#line 2110 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_16));
#line 2110 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 2110 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 2110 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 2110 "unify_proc.m"
        }
#line 1883 "unify_proc.m"
      }
#line 1879 "unify_proc.m"
  }
#line 1874 "unify_proc.m"
}

#line 1866 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
#line 1866 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1866 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__2_2,
#line 1866 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_3,
#line 1866 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_4)
#line 1866 "unify_proc.m"
{
#line 1869 "unify_proc.m"
  {
#line 1869 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1869 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1869 "unify_proc.m"
      {
#line 1869 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1869 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_4 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_3;
#line 1869 "unify_proc.m"
      }
#line 1869 "unify_proc.m"
    else
#line 1870 "unify_proc.m"
      {
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Var_10;
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars_11;
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_15_15;
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_24;
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes_25;
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_36_36;
#line 1870 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_37_37;
#line 2088 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 2088 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 2092 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_34_34;
#line 2092 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_35_35;

#line 2090 "unify_proc.m"
        {
#line 2090 "unify_proc.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_22, &check_hlds__unify_proc__VarSet_24);
        }
#line 2091 "unify_proc.m"
        {
#line 2091 "unify_proc.m"
          parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__VarTypes0_23, &check_hlds__unify_proc__VarTypes_25);
        }
#line 2092 "unify_proc.m"
        check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 2092 "unify_proc.m"
        check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 2092 "unify_proc.m"
        check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 2092 "unify_proc.m"
        check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 2093 "unify_proc.m"
        {
#line 2093 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2093 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_24));
#line 2093 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_25));
#line 2093 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 2093 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 2093 "unify_proc.m"
        }
#line 1872 "unify_proc.m"
        {
#line 1872 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__Types_9, &check_hlds__unify_proc__Vars_11, check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, check_hlds__unify_proc__STATE_VARIABLE_Info_4);
        }
#line 1870 "unify_proc.m"
        {
#line 1870 "unify_proc.m"
          MR_Word base;
#line 1870 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__2_2 = base;
#line 1870 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_10));
#line 1870 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Vars_11));
#line 1870 "unify_proc.m"
        }
#line 1870 "unify_proc.m"
      }
#line 1869 "unify_proc.m"
  }
#line 1866 "unify_proc.m"
}

#line 1856 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
#line 1856 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1856 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_2,
#line 1856 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_3,
#line 1856 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
#line 1856 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
#line 1856 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6)
#line 1856 "unify_proc.m"
{
#line 1860 "unify_proc.m"
  {
#line 1860 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1860 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1860 "unify_proc.m"
      {
#line 1860 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1860 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_6 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_5;
#line 1860 "unify_proc.m"
      }
#line 1860 "unify_proc.m"
    else
#line 1862 "unify_proc.m"
      {
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Var_16;
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars_17;
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;
#line 1862 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__V_22_22;
#line 1862 "unify_proc.m"
        MR_String check_hlds__unify_proc__NumStr_32;
#line 1862 "unify_proc.m"
        MR_String check_hlds__unify_proc__Name_33;
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_41;
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes0_42;
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_43;
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes_44;
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_55_55;
#line 1862 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_56_56;
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_48_48;
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_49_49;
#line 2100 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 2100 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_54_54;

#line 1852 "unify_proc.m"
        {
#line 1852 "unify_proc.m"
          mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_3, &check_hlds__unify_proc__NumStr_32);
        }
#line 1853 "unify_proc.m"
        {
#line 1853 "unify_proc.m"
          mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__NumStr_32, &check_hlds__unify_proc__Name_33);
        }
#line 2096 "unify_proc.m"
        check_hlds__unify_proc__VarSet0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
        check_hlds__unify_proc__VarTypes0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
        check_hlds__unify_proc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
        check_hlds__unify_proc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 2098 "unify_proc.m"
        {
#line 2098 "unify_proc.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_33, &check_hlds__unify_proc__Var_16, check_hlds__unify_proc__VarSet0_41, &check_hlds__unify_proc__VarSet_43);
        }
#line 2099 "unify_proc.m"
        {
#line 2099 "unify_proc.m"
          parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__Var_16, check_hlds__unify_proc__Type_12, check_hlds__unify_proc__VarTypes0_42, &check_hlds__unify_proc__VarTypes_44);
        }
#line 2100 "unify_proc.m"
        check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 2100 "unify_proc.m"
        check_hlds__unify_proc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 2100 "unify_proc.m"
        check_hlds__unify_proc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 2100 "unify_proc.m"
        check_hlds__unify_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 2101 "unify_proc.m"
        {
#line 2101 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2101 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_43));
#line 2101 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_44));
#line 2101 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (check_hlds__unify_proc__V_55_55));
#line 2101 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 2101 "unify_proc.m"
        }
#line 1864 "unify_proc.m"
        check_hlds__unify_proc__V_22_22 = (check_hlds__unify_proc__Num_3 + (MR_Integer) 1);
#line 1864 "unify_proc.m"
        {
#line 1864 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__Types_13, check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__V_22_22, &check_hlds__unify_proc__Vars_17, check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, check_hlds__unify_proc__STATE_VARIABLE_Info_6);
        }
#line 1862 "unify_proc.m"
        {
#line 1862 "unify_proc.m"
          MR_Word base;
#line 1862 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__4_4 = base;
#line 1862 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_16));
#line 1862 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Vars_17));
#line 1862 "unify_proc.m"
        }
#line 1862 "unify_proc.m"
      }
#line 1860 "unify_proc.m"
  }
#line 1856 "unify_proc.m"
}

#line 1848 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
#line 1848 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_7,
#line 1848 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_8,
#line 1848 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_9,
#line 1848 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_10,
#line 1848 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1848 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15)
#line 1848 "unify_proc.m"
{
#line 1851 "unify_proc.m"
  {
#line 1851 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1851 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_12;
#line 1851 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_13;
#line 1851 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_23;
#line 1851 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_24;
#line 1851 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_25;
#line 1851 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_26;
#line 1851 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1851 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;

#line 1852 "unify_proc.m"
    {
#line 1852 "unify_proc.m"
      mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_9, &check_hlds__unify_proc__NumStr_12);
    }
#line 1853 "unify_proc.m"
    {
#line 1853 "unify_proc.m"
      mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_8, check_hlds__unify_proc__NumStr_12, &check_hlds__unify_proc__Name_13);
    }
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 2098 "unify_proc.m"
    {
#line 2098 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_13, check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_23, &check_hlds__unify_proc__VarSet_25);
    }
#line 2099 "unify_proc.m"
    {
#line 2099 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_7, check_hlds__unify_proc__VarTypes0_24, &check_hlds__unify_proc__VarTypes_26);
    }
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 2101 "unify_proc.m"
    {
#line 2101 "unify_proc.m"
      MR_Word base;
#line 2101 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2101 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_Info_15 = base;
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_25));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_26));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_38_38));
#line 2101 "unify_proc.m"
    }
#line 1851 "unify_proc.m"
  }
#line 1848 "unify_proc.m"
}

#line 1819 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialPredId_11,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_12,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstmapDelta_13,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Detism_14,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1819 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1819 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_26,
#line 1819 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_27)
#line 1819 "unify_proc.m"
{
#line 1825 "unify_proc.m"
  {
#line 1825 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1825 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 1838 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredName_19;
#line 1838 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredId_20;
#line 1838 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ProcId_21;

#line 1828 "unify_proc.m"
    {
#line 1828 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__polymorphism__get_special_proc_6_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__SpecialPredId_11, check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__PredName_19, &check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__ProcId_21);
    }
#line 1838 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1832 "unify_proc.m"
      {
#line 1832 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalExpr_22;
#line 1832 "unify_proc.m"
        MR_Word check_hlds__unify_proc__NonLocals_23;
#line 1832 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo0_24;
#line 1832 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo_25;

#line 1831 "unify_proc.m"
        {
#line 1831 "unify_proc.m"
          check_hlds__unify_proc__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1831 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_20));
#line 1831 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 1) = ((MR_Box) (check_hlds__unify_proc__ProcId_21));
#line 1831 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_12));
#line 1831 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1831 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1831 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 5) = ((MR_Box) (check_hlds__unify_proc__PredName_19));
#line 1831 "unify_proc.m"
        }
#line 1833 "unify_proc.m"
        {
#line 1833 "unify_proc.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__ArgVars_12, &check_hlds__unify_proc__NonLocals_23);
        }
#line 1834 "unify_proc.m"
        {
#line 1834 "unify_proc.m"
          hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__unify_proc__NonLocals_23, check_hlds__unify_proc__InstmapDelta_13, check_hlds__unify_proc__Detism_14, (MR_Integer) 0, &check_hlds__unify_proc__GoalInfo0_24);
        }
#line 1836 "unify_proc.m"
        {
#line 1836 "unify_proc.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_24, &check_hlds__unify_proc__GoalInfo_25);
        }
#line 1837 "unify_proc.m"
        {
#line 1837 "unify_proc.m"
          MR_Word base;
#line 1837 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1837 "unify_proc.m"
          *check_hlds__unify_proc__Goal_16 = base;
#line 1837 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__GoalExpr_22));
#line 1837 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_25));
#line 1837 "unify_proc.m"
        }
#line 1832 "unify_proc.m"
      }
#line 1838 "unify_proc.m"
    else
#line 1843 "unify_proc.m"
      {
#line 1843 "unify_proc.m"
        {
#line 1843 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.build_specific_call\'/9", (MR_String) "lookup failed");
#line 1843 "unify_proc.m"
          return;
        }
#line 1843 "unify_proc.m"
      }
#line 1825 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_Info_27 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_26;
#line 1825 "unify_proc.m"
  }
#line 1819 "unify_proc.m"
}

#line 1800 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
#line 1800 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 1800 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_8,
#line 1800 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1800 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_10,
#line 1800 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1800 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
#line 1800 "unify_proc.m"
{
#line 1803 "unify_proc.m"
  {
#line 1803 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1803 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1803 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Arity_13;
#line 1803 "unify_proc.m"
    MR_Word check_hlds__unify_proc__MercuryBuiltin_16;
#line 1803 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1810 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_27_27;
#line 1810 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_14_14;
#line 1810 "unify_proc.m"
    MR_String check_hlds__unify_proc__V_15_15;

#line 1805 "unify_proc.m"
    {
#line 1805 "unify_proc.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[1], check_hlds__unify_proc__ArgVars_8, &check_hlds__unify_proc__Arity_13);
    }
#line 1810 "unify_proc.m"
    {
#line 1810 "unify_proc.m"
      check_hlds__unify_proc__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&check_hlds__unify_proc__V_14_14, check_hlds__unify_proc__Name_7, &check_hlds__unify_proc__V_15_15, &check_hlds__unify_proc__V_27_27);
    }
#line 1810 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1810 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Arity_13 == check_hlds__unify_proc__V_27_27);
#line 1812 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1811 "unify_proc.m"
      {
#line 1811 "unify_proc.m"
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      }
#line 1812 "unify_proc.m"
    else
#line 1813 "unify_proc.m"
      {
#line 1813 "unify_proc.m"
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      }
#line 1817 "unify_proc.m"
    {
#line 1817 "unify_proc.m"
      check_hlds__unify_proc__V_24_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1815 "unify_proc.m"
    {
#line 1815 "unify_proc.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__unify_proc__MercuryBuiltin_16, check_hlds__unify_proc__Name_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_3[2]), (MR_Integer) 6, (MR_Integer) 0, check_hlds__unify_proc__ArgVars_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__V_24_24, check_hlds__unify_proc__ModuleInfo_12, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Goal_10);
    }
#line 1803 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_17;
#line 1803 "unify_proc.m"
  }
#line 1800 "unify_proc.m"
}

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_1(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1750 "unify_proc.m"
{
#line 1750 "unify_proc.m"
  {
#line 1750 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1750 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0, 1);
#line 1750 "unify_proc.m"
  }
#line 1750 "unify_proc.m"
}

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_3(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1750 "unify_proc.m"
{
#line 1750 "unify_proc.m"
  {
#line 1750 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1750 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71);
#line 1750 "unify_proc.m"
    {
#line 1750 "unify_proc.m"
      check_hlds__unify_proc__compare_args_2_9_p_0_2(check_hlds__unify_proc__env_ptr);
#line 1750 "unify_proc.m"
      return;
    }
#line 1750 "unify_proc.m"
  }
#line 1750 "unify_proc.m"
}

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_4(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1750 "unify_proc.m"
{
#line 1750 "unify_proc.m"
  {
#line 1750 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 5587 "check_hlds.unify_proc.c"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[0];
#line 1751 "unify_proc.m"
    {
#line 1751 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76)));
    }
#line 1751 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1751 "unify_proc.m"
      {
#line 1751 "unify_proc.m"
        check_hlds__unify_proc__compare_args_2_9_p_0_1(check_hlds__unify_proc__env_ptr);
#line 1751 "unify_proc.m"
        return;
      }
#line 1750 "unify_proc.m"
  }
#line 1750 "unify_proc.m"
}

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_2(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1750 "unify_proc.m"
{
#line 1750 "unify_proc.m"
  {
#line 1750 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1751 "unify_proc.m"
    {
#line 1751 "unify_proc.m"
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76, check_hlds__unify_proc__compare_args_2_9_p_0_4, check_hlds__unify_proc__env_ptr);
    }
#line 1750 "unify_proc.m"
  }
#line 1750 "unify_proc.m"
}

#line 1750 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_5(
#line 1750 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1750 "unify_proc.m"
{
#line 1750 "unify_proc.m"
  {
#line 1750 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1750 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0) == 0)
#line 1750 "unify_proc.m"
      {
#line 1750 "unify_proc.m"
        {
#line 1750 "unify_proc.m"
          {
#line 1750 "unify_proc.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__compare_args_2_9_p_0_3, check_hlds__unify_proc__env_ptr);
          }
#line 1750 "unify_proc.m"
        }
#line 1750 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_FALSE;
#line 1750 "unify_proc.m"
      }
#line 1750 "unify_proc.m"
    else
#line 1750 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1750 "unify_proc.m"
  }
#line 1750 "unify_proc.m"
}

#line 1731 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0(
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_5,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_6,
#line 1731 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1731 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1731 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9)
#line 1731 "unify_proc.m"
{
#line 1731 "unify_proc.m"
  {
#line 1731 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s check_hlds__unify_proc__env;

#line 1731 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2 = check_hlds__unify_proc__ExistQTVars_2;
#line 1735 "unify_proc.m"
    while (MR_TRUE)
#line 1735 "unify_proc.m"
      {
#line 1735 "unify_proc.m"
        /* tailcall optimized into a loop */
#line 1735 "unify_proc.m"
        if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1735 "unify_proc.m"
          {
#line 1735 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Goal0_81;
#line 1735 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_82_82;
#line 1735 "unify_proc.m"
            MR_String check_hlds__unify_proc__V_83_83;
#line 1735 "unify_proc.m"
            MR_Word check_hlds__unify_proc__SymName_85;
#line 1735 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__V_86_86;
#line 1735 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_87_87;
#line 1735 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_88_88;
#line 1735 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Builtin_90;
#line 1735 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_91_91;
#line 1735 "unify_proc.m"
            MR_String check_hlds__unify_proc__V_92_92;
#line 1735 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__V_93_93;

#line 1735 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1735 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1735 "unify_proc.m"
              {
#line 1735 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1735 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1735 "unify_proc.m"
                  {
#line 1795 "unify_proc.m"
                    check_hlds__unify_proc__V_83_83 = (MR_String) "=";
#line 2038 "unify_proc.m"
                    check_hlds__unify_proc__V_86_86 = (MR_Integer) 0;
#line 2033 "unify_proc.m"
                    {
#line 2033 "unify_proc.m"
                      check_hlds__unify_proc__Builtin_90 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 2034 "unify_proc.m"
                    check_hlds__unify_proc__V_92_92 = (MR_String) "comparison_result";
#line 2034 "unify_proc.m"
                    check_hlds__unify_proc__V_93_93 = (MR_Integer) 0;
#line 2034 "unify_proc.m"
                    {
#line 2034 "unify_proc.m"
                      check_hlds__unify_proc__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_91_91, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_90));
#line 2034 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_91_91, 1) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
#line 2034 "unify_proc.m"
                    }
#line 2034 "unify_proc.m"
                    {
#line 2034 "unify_proc.m"
                      check_hlds__unify_proc__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2034 "unify_proc.m"
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_87_87, 0) = ((MR_Box) (check_hlds__unify_proc__V_91_91));
#line 2034 "unify_proc.m"
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_87_87, 1) = ((MR_Box) (check_hlds__unify_proc__V_93_93));
#line 2034 "unify_proc.m"
                    }
#line 2039 "unify_proc.m"
                    {
#line 2039 "unify_proc.m"
                      check_hlds__unify_proc__V_88_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 2039 "unify_proc.m"
                    {
#line 2039 "unify_proc.m"
                      check_hlds__unify_proc__SymName_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 0) = ((MR_Box) (check_hlds__unify_proc__V_88_88));
#line 2039 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 1) = ((MR_Box) (check_hlds__unify_proc__V_83_83));
#line 2039 "unify_proc.m"
                    }
#line 2038 "unify_proc.m"
                    {
#line 2038 "unify_proc.m"
                      check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2038 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_85));
#line 2038 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 2) = ((MR_Box) (check_hlds__unify_proc__V_86_86));
#line 2038 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 3) = ((MR_Box) (check_hlds__unify_proc__V_87_87));
#line 2038 "unify_proc.m"
                    }
#line 1795 "unify_proc.m"
                    {
#line 1795 "unify_proc.m"
                      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_5, check_hlds__unify_proc__V_82_82, &check_hlds__unify_proc__Goal0_81);
                    }
#line 1796 "unify_proc.m"
                    {
#line 1796 "unify_proc.m"
                      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_6, check_hlds__unify_proc__Goal0_81, check_hlds__unify_proc__HeadVar__7_7);
                    }
#line 1735 "unify_proc.m"
                    *check_hlds__unify_proc__STATE_VARIABLE_Info_9 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_8;
#line 1735 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1735 "unify_proc.m"
                  }
#line 1735 "unify_proc.m"
              }
#line 1735 "unify_proc.m"
          }
#line 1735 "unify_proc.m"
        else
#line 1738 "unify_proc.m"
          {
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Arg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__X_20;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Xs_21;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Y_22;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Ys_23;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo0_28;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_29;
#line 1738 "unify_proc.m"
            MR_String check_hlds__unify_proc__ComparePred_32;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ModuleInfo_33;
#line 1738 "unify_proc.m"
            MR_Word check_hlds__unify_proc__IsDummy_34;
#line 1742 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_72_72;
#line 1742 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_73_73;
#line 1742 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_74_74;
#line 2108 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_95_95;
#line 2108 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_96_96;
#line 2108 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_97_97;

#line 1737 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1737 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1737 "unify_proc.m"
              {
#line 1737 "unify_proc.m"
                check_hlds__unify_proc__X_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1737 "unify_proc.m"
                check_hlds__unify_proc__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1737 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1737 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1737 "unify_proc.m"
                  {
#line 1737 "unify_proc.m"
                    check_hlds__unify_proc__Y_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 0)));
#line 1737 "unify_proc.m"
                    check_hlds__unify_proc__Ys_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 1)));
#line 1739 "unify_proc.m"
                    {
#line 1739 "unify_proc.m"
                      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_28);
                    }
#line 1740 "unify_proc.m"
                    {
#line 1740 "unify_proc.m"
                      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_6, check_hlds__unify_proc__GoalInfo0_28, &check_hlds__unify_proc__GoalInfo_29);
                    }
#line 1742 "unify_proc.m"
                    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 0)));
#line 1742 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 1)));
#line 1742 "unify_proc.m"
                    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 2)));
#line 1742 "unify_proc.m"
                    check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 3)));
#line 1750 "unify_proc.m"
                    {
#line 1750 "unify_proc.m"
                      check_hlds__unify_proc__compare_args_2_9_p_0_5(&check_hlds__unify_proc__env);
                    }
#line 1755 "unify_proc.m"
                    if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1754 "unify_proc.m"
                      check_hlds__unify_proc__ComparePred_32 = (MR_String) "typed_compare";
#line 1755 "unify_proc.m"
                    else
#line 1756 "unify_proc.m"
                      check_hlds__unify_proc__ComparePred_32 = (MR_String) "compare";
#line 2108 "unify_proc.m"
                    check_hlds__unify_proc__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
                    check_hlds__unify_proc__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
                    check_hlds__unify_proc__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 2108 "unify_proc.m"
                    check_hlds__unify_proc__ModuleInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1759 "unify_proc.m"
                    {
#line 1759 "unify_proc.m"
                      check_hlds__unify_proc__IsDummy_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_33, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30);
                    }
#line 1764 "unify_proc.m"
                    if ((check_hlds__unify_proc__IsDummy_34 == (MR_Integer) 0))
#line 1763 "unify_proc.m"
                      {
#line 1763 "unify_proc.m"
                        /* direct tailcall eliminated */
#line 1763 "unify_proc.m"
                        {
#line 1763 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__HeadVar__1__tmp_copy_1 = check_hlds__unify_proc__ArgTypes_18;
#line 1763 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__HeadVar__3__tmp_copy_3 = check_hlds__unify_proc__Xs_21;
#line 1763 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__HeadVar__4__tmp_copy_4 = check_hlds__unify_proc__Ys_23;

#line 1763 "unify_proc.m"
                          check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__HeadVar__4__tmp_copy_4;
#line 1763 "unify_proc.m"
                          check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__HeadVar__3__tmp_copy_3;
#line 1763 "unify_proc.m"
                          check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__HeadVar__1__tmp_copy_1;
#line 1763 "unify_proc.m"
                        }
#line 1763 "unify_proc.m"
                        continue;
#line 1763 "unify_proc.m"
                      }
#line 1764 "unify_proc.m"
                    else
#line 1771 "unify_proc.m"
                      {
#line 1767 "unify_proc.m"
                        (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__Xs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1767 "unify_proc.m"
                        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1768 "unify_proc.m"
                          (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__Ys_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1771 "unify_proc.m"
                        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1770 "unify_proc.m"
                          {
#line 1770 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_44_44;
#line 1770 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_46_46;

#line 1770 "unify_proc.m"
                            {
#line 1770 "unify_proc.m"
                              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_20));
#line 1770 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__HeadVar__4_4));
#line 1770 "unify_proc.m"
                            }
#line 1770 "unify_proc.m"
                            {
#line 1770 "unify_proc.m"
                              check_hlds__unify_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 0) = ((MR_Box) (check_hlds__unify_proc__R_5));
#line 1770 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1770 "unify_proc.m"
                            }
#line 1770 "unify_proc.m"
                            {
#line 1770 "unify_proc.m"
                              check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_32, check_hlds__unify_proc__V_44_44, check_hlds__unify_proc__Context_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
                            }
#line 1770 "unify_proc.m"
                            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1770 "unify_proc.m"
                          }
#line 1771 "unify_proc.m"
                        else
#line 1772 "unify_proc.m"
                          {
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__R1_35;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Do_Comparison_36;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Check_Equal_37;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Check_Not_Equal_38;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Return_R1_39;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Condition_40;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__ElseCase_41;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_49_49;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_50_50;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_51_51;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_52_52;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_53_53;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_54_54;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_56_56;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_58_58;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_59_59;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_62_62;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_64_64;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_65_65;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_68_68;
#line 1772 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_69_69;

#line 1772 "unify_proc.m"
                            {
#line 1772 "unify_proc.m"
                              check_hlds__unify_proc__V_49_49 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                            }
#line 1772 "unify_proc.m"
                            {
#line 1772 "unify_proc.m"
                              check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_49_49, &check_hlds__unify_proc__R1_35, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
                            }
#line 1773 "unify_proc.m"
                            {
#line 1773 "unify_proc.m"
                              check_hlds__unify_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (check_hlds__unify_proc__Y_22));
#line 1773 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1773 "unify_proc.m"
                            }
#line 1773 "unify_proc.m"
                            {
#line 1773 "unify_proc.m"
                              check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__X_20));
#line 1773 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_54_54));
#line 1773 "unify_proc.m"
                            }
#line 1773 "unify_proc.m"
                            {
#line 1773 "unify_proc.m"
                              check_hlds__unify_proc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 0) = ((MR_Box) (check_hlds__unify_proc__R1_35));
#line 1773 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 1) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1773 "unify_proc.m"
                            }
#line 1773 "unify_proc.m"
                            {
#line 1773 "unify_proc.m"
                              check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_32, check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__Context_6, &check_hlds__unify_proc__Do_Comparison_36, check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, &check_hlds__unify_proc__STATE_VARIABLE_Info_52_52);
                            }
#line 1775 "unify_proc.m"
                            {
#line 1775 "unify_proc.m"
                              check_hlds__unify_proc__V_56_56 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "=");
                            }
#line 1775 "unify_proc.m"
                            {
#line 1775 "unify_proc.m"
                              hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R1_35, check_hlds__unify_proc__V_56_56, &check_hlds__unify_proc__Check_Equal_37);
                            }
#line 1776 "unify_proc.m"
                            check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__unify_proc__Check_Equal_37);
#line 1776 "unify_proc.m"
                            {
#line 1776 "unify_proc.m"
                              check_hlds__unify_proc__Check_Not_Equal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1776 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Check_Not_Equal_38, 0) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 1776 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Check_Not_Equal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1776 "unify_proc.m"
                            }
#line 1778 "unify_proc.m"
                            {
#line 1778 "unify_proc.m"
                              check_hlds__unify_proc__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1778 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__R1_35));
#line 1778 "unify_proc.m"
                            }
#line 1778 "unify_proc.m"
                            {
#line 1778 "unify_proc.m"
                              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__R_5, check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R1_39);
                            }
#line 1781 "unify_proc.m"
                            {
#line 1781 "unify_proc.m"
                              check_hlds__unify_proc__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 0) = ((MR_Box) (check_hlds__unify_proc__Check_Not_Equal_38));
#line 1781 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1781 "unify_proc.m"
                            }
#line 1781 "unify_proc.m"
                            {
#line 1781 "unify_proc.m"
                              check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__Do_Comparison_36));
#line 1781 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 1781 "unify_proc.m"
                            }
#line 1781 "unify_proc.m"
                            {
#line 1781 "unify_proc.m"
                              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "unify_proc.m"
                              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1781 "unify_proc.m"
                              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1781 "unify_proc.m"
                              MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 2) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1781 "unify_proc.m"
                            }
#line 1780 "unify_proc.m"
                            {
#line 1780 "unify_proc.m"
                              check_hlds__unify_proc__Condition_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1780 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_40, 0) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 1780 "unify_proc.m"
                              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_40, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1780 "unify_proc.m"
                            }
#line 1783 "unify_proc.m"
                            {
#line 1783 "unify_proc.m"
                              (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = check_hlds__unify_proc__compare_args_2_9_p_0(check_hlds__unify_proc__ArgTypes_18, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__Xs_21, check_hlds__unify_proc__Ys_23, check_hlds__unify_proc__R_5, check_hlds__unify_proc__Context_6, &check_hlds__unify_proc__ElseCase_41, check_hlds__unify_proc__STATE_VARIABLE_Info_52_52, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
                            }
#line 1772 "unify_proc.m"
                            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1772 "unify_proc.m"
                              {
#line 1786 "unify_proc.m"
                                check_hlds__unify_proc__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1786 "unify_proc.m"
                                {
#line 1786 "unify_proc.m"
                                  check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1786 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (check_hlds__unify_proc__V_69_69));
#line 1786 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 2) = ((MR_Box) (check_hlds__unify_proc__Condition_40));
#line 1786 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R1_39));
#line 1786 "unify_proc.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 4) = ((MR_Box) (check_hlds__unify_proc__ElseCase_41));
#line 1786 "unify_proc.m"
                                }
#line 1785 "unify_proc.m"
                                {
#line 1785 "unify_proc.m"
                                  MR_Word base;
#line 1785 "unify_proc.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1785 "unify_proc.m"
                                  *check_hlds__unify_proc__HeadVar__7_7 = base;
#line 1785 "unify_proc.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
#line 1785 "unify_proc.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1785 "unify_proc.m"
                                }
#line 1785 "unify_proc.m"
                                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1772 "unify_proc.m"
                              }
#line 1772 "unify_proc.m"
                          }
#line 1771 "unify_proc.m"
                      }
#line 1737 "unify_proc.m"
                  }
#line 1737 "unify_proc.m"
              }
#line 1738 "unify_proc.m"
          }
#line 1735 "unify_proc.m"
        return (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded;
#line 1735 "unify_proc.m"
        break;
#line 1735 "unify_proc.m"
      }
#line 1731 "unify_proc.m"
  }
#line 1731 "unify_proc.m"
}

#line 1718 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_9_p_0(
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgTypes_10,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_11,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Xs_12,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ys_13,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_14,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1718 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_19,
#line 1718 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_20)
#line 1718 "unify_proc.m"
{
#line 1727 "unify_proc.m"
  {
#line 1727 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1727 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_18;
#line 1727 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;

#line 1724 "unify_proc.m"
    {
#line 1724 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__compare_args_2_9_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__ExistQTVars_11, check_hlds__unify_proc__Xs_12, check_hlds__unify_proc__Ys_13, check_hlds__unify_proc__R_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Goal0_18, check_hlds__unify_proc__STATE_VARIABLE_Info_0_19, &check_hlds__unify_proc__STATE_VARIABLE_Info_21_21);
    }
#line 1727 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1726 "unify_proc.m"
      {
#line 1726 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_20 = check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;
#line 1726 "unify_proc.m"
        *check_hlds__unify_proc__Goal_16 = check_hlds__unify_proc__Goal0_18;
#line 1726 "unify_proc.m"
      }
#line 1727 "unify_proc.m"
    else
#line 1728 "unify_proc.m"
      {
#line 1728 "unify_proc.m"
        {
#line 1728 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.compare_args\'/9", (MR_String) "length mismatch");
#line 1728 "unify_proc.m"
          return;
        }
#line 1728 "unify_proc.m"
      }
#line 1727 "unify_proc.m"
  }
#line 1718 "unify_proc.m"
}

#line 1665 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_12,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor1_13,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor2_14,
#line 1665 "unify_proc.m"
  MR_String check_hlds__unify_proc__CompareOp_15,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_16,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_17,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_18,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_19,
#line 1665 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_20,
#line 1665 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_48,
#line 1665 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_49)
#line 1665 "unify_proc.m"
{
#line 1671 "unify_proc.m"
  {
#line 1671 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 0)));
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 2)));
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 3)));
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 0)));
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 2)));
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 3)));
#line 1671 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity1_34;
#line 1671 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity2_35;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId1_36;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId2_37;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Vars1_38;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Vars2_39;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RHS1_40;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RHS2_41;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyX_Goal_42;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyY_Goal_43;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ReturnResult_44;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_45;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_46;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_47;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_50_50;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_58_58;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_59_59;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_60_60;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_64;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_66_66;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_67_67;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_69;
#line 1671 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_70_70;
#line 1672 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 1)));
#line 1672 "unify_proc.m"
    MR_Integer check_hlds__unify_proc___Arity1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 4)));
#line 1672 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 5)));
#line 1674 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 1)));
#line 1674 "unify_proc.m"
    MR_Integer check_hlds__unify_proc___Arity2_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 4)));
#line 1674 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 5)));

#line 1676 "unify_proc.m"
    {
#line 1676 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_62_62, check_hlds__unify_proc__ArgTypes1_25, &check_hlds__unify_proc__FunctorArity1_34);
    }
#line 1677 "unify_proc.m"
    {
#line 1677 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_62_62, check_hlds__unify_proc__ArgTypes2_31, &check_hlds__unify_proc__FunctorArity2_35);
    }
#line 1678 "unify_proc.m"
    {
#line 1678 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId1_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1678 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1678 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName1_24));
#line 1678 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity1_34));
#line 1678 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
#line 1678 "unify_proc.m"
    }
#line 1679 "unify_proc.m"
    {
#line 1679 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId2_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1679 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1679 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName2_30));
#line 1679 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity2_35));
#line 1679 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
#line 1679 "unify_proc.m"
    }
#line 1680 "unify_proc.m"
    {
#line 1680 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes1_25, check_hlds__unify_proc__ExistQTVars1_22, &check_hlds__unify_proc__Vars1_38, check_hlds__unify_proc__STATE_VARIABLE_Info_0_48, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
    }
#line 1681 "unify_proc.m"
    {
#line 1681 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes2_31, check_hlds__unify_proc__ExistQTVars2_28, &check_hlds__unify_proc__Vars2_39, check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, check_hlds__unify_proc__STATE_VARIABLE_Info_49);
    }
#line 1682 "unify_proc.m"
    {
#line 1682 "unify_proc.m"
      check_hlds__unify_proc__RHS1_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1682 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId1_36));
#line 1682 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1682 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_38));
#line 1682 "unify_proc.m"
    }
#line 1683 "unify_proc.m"
    {
#line 1683 "unify_proc.m"
      check_hlds__unify_proc__RHS2_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1683 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId2_37));
#line 1683 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1683 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_39));
#line 1683 "unify_proc.m"
    }
#line 1684 "unify_proc.m"
    {
#line 1684 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_17, check_hlds__unify_proc__RHS1_40, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_42);
    }
#line 1686 "unify_proc.m"
    {
#line 1686 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_18, check_hlds__unify_proc__RHS2_41, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_43);
    }
#line 2033 "unify_proc.m"
    {
#line 2033 "unify_proc.m"
      check_hlds__unify_proc__Builtin_69 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_69));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2034 "unify_proc.m"
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
    }
#line 2039 "unify_proc.m"
    {
#line 2039 "unify_proc.m"
      check_hlds__unify_proc__V_67_67 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2039 "unify_proc.m"
    {
#line 2039 "unify_proc.m"
      check_hlds__unify_proc__SymName_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_64, 0) = ((MR_Box) (check_hlds__unify_proc__V_67_67));
#line 2039 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_64, 1) = ((MR_Box) (check_hlds__unify_proc__CompareOp_15));
#line 2039 "unify_proc.m"
    }
#line 2038 "unify_proc.m"
    {
#line 2038 "unify_proc.m"
      check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_64));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 3) = ((MR_Box) (check_hlds__unify_proc__V_66_66));
#line 2038 "unify_proc.m"
    }
#line 1688 "unify_proc.m"
    {
#line 1688 "unify_proc.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_16, check_hlds__unify_proc__V_58_58, &check_hlds__unify_proc__ReturnResult_44);
    }
#line 1689 "unify_proc.m"
    {
#line 1689 "unify_proc.m"
      check_hlds__unify_proc__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_60_60, 0) = ((MR_Box) (check_hlds__unify_proc__ReturnResult_44));
#line 1689 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1689 "unify_proc.m"
    }
#line 1689 "unify_proc.m"
    {
#line 1689 "unify_proc.m"
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_43));
#line 1689 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__V_60_60));
#line 1689 "unify_proc.m"
    }
#line 1689 "unify_proc.m"
    {
#line 1689 "unify_proc.m"
      check_hlds__unify_proc__GoalList_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_45, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_42));
#line 1689 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_45, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 1689 "unify_proc.m"
    }
#line 1690 "unify_proc.m"
    {
#line 1690 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_46);
    }
#line 1691 "unify_proc.m"
    {
#line 1691 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_19, check_hlds__unify_proc__GoalInfo0_46, &check_hlds__unify_proc__GoalInfo_47);
    }
#line 1692 "unify_proc.m"
    {
#line 1692 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_45, check_hlds__unify_proc__GoalInfo_47, check_hlds__unify_proc__Case_20);
#line 1692 "unify_proc.m"
      return;
    }
#line 1671 "unify_proc.m"
  }
#line 1665 "unify_proc.m"
}

#line 1621 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_12,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_13,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_14,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_15,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_16,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Kind_17,
#line 1621 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_18,
#line 1621 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 1621 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42)
#line 1621 "unify_proc.m"
{
#line 1625 "unify_proc.m"
  {
#line 1625 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1625 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 0)));
#line 1625 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 2)));
#line 1625 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 3)));
#line 1625 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 4)));
#line 1625 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_26;
#line 1625 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_30;
#line 1625 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_39;
#line 1625 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_40;
#line 1626 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 1)));
#line 1626 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 5)));

#line 1628 "unify_proc.m"
    {
#line 1628 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1628 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1628 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_22));
#line 1628 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_24));
#line 1628 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_11));
#line 1628 "unify_proc.m"
    }
#line 1647 "unify_proc.m"
    if ((check_hlds__unify_proc__ArgTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1630 "unify_proc.m"
      {
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS_27;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_28;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualGoal_29;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_71;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_72_72;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__SymName_75;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_78_78;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Builtin_80;
#line 1630 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_81_81;

#line 1631 "unify_proc.m"
        {
#line 1631 "unify_proc.m"
          check_hlds__unify_proc__RHS_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1631 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1631 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1631 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1631 "unify_proc.m"
        }
#line 1632 "unify_proc.m"
        {
#line 1632 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_28);
        }
#line 2033 "unify_proc.m"
        {
#line 2033 "unify_proc.m"
          check_hlds__unify_proc__Builtin_80 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 2034 "unify_proc.m"
        {
#line 2034 "unify_proc.m"
          check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_80));
#line 2034 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2034 "unify_proc.m"
        }
#line 2034 "unify_proc.m"
        {
#line 2034 "unify_proc.m"
          check_hlds__unify_proc__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2034 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_77_77, 0) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 2034 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_77_77, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
        }
#line 2039 "unify_proc.m"
        {
#line 2039 "unify_proc.m"
          check_hlds__unify_proc__V_78_78 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 2039 "unify_proc.m"
        {
#line 2039 "unify_proc.m"
          check_hlds__unify_proc__SymName_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_75, 0) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 2039 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_75, 1) = ((MR_Box) ((MR_String) "="));
#line 2039 "unify_proc.m"
        }
#line 2038 "unify_proc.m"
        {
#line 2038 "unify_proc.m"
          check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2038 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_75));
#line 2038 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2038 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 3) = ((MR_Box) (check_hlds__unify_proc__V_77_77));
#line 2038 "unify_proc.m"
        }
#line 1795 "unify_proc.m"
        {
#line 1795 "unify_proc.m"
          hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_13, check_hlds__unify_proc__V_72_72, &check_hlds__unify_proc__Goal0_71);
        }
#line 1796 "unify_proc.m"
        {
#line 1796 "unify_proc.m"
          hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__Goal0_71, &check_hlds__unify_proc__EqualGoal_29);
        }
#line 1641 "unify_proc.m"
        if ((check_hlds__unify_proc__Kind_17 == (MR_Integer) 0))
#line 1636 "unify_proc.m"
          {
#line 1636 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_64_64;

#line 1640 "unify_proc.m"
            {
#line 1640 "unify_proc.m"
              check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1640 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
#line 1640 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1640 "unify_proc.m"
            }
#line 1640 "unify_proc.m"
            {
#line 1640 "unify_proc.m"
              check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1640 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
#line 1640 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1640 "unify_proc.m"
            }
#line 1636 "unify_proc.m"
          }
#line 1641 "unify_proc.m"
        else
#line 1642 "unify_proc.m"
          {
#line 1642 "unify_proc.m"
            MR_Word check_hlds__unify_proc__UnifyY_Goal_31;
#line 1642 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_61_61;
#line 1642 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_62_62;

#line 1643 "unify_proc.m"
            {
#line 1643 "unify_proc.m"
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_31);
            }
#line 1645 "unify_proc.m"
            {
#line 1645 "unify_proc.m"
              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1645 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
#line 1645 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1645 "unify_proc.m"
            }
#line 1645 "unify_proc.m"
            {
#line 1645 "unify_proc.m"
              check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1645 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_31));
#line 1645 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 1) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 1645 "unify_proc.m"
            }
#line 1645 "unify_proc.m"
            {
#line 1645 "unify_proc.m"
              check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1645 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
#line 1645 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_61_61));
#line 1645 "unify_proc.m"
            }
#line 1642 "unify_proc.m"
          }
#line 1630 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_42 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_41;
#line 1630 "unify_proc.m"
      }
#line 1647 "unify_proc.m"
    else
#line 1648 "unify_proc.m"
      {
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars1_34;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars2_35;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS1_36;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS2_37;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CompareArgs_Goal_38;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_52_52;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_66;
#line 1648 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_67;

#line 1649 "unify_proc.m"
        {
#line 1649 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, &check_hlds__unify_proc__Vars1_34, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
        }
#line 1650 "unify_proc.m"
        {
#line 1650 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, &check_hlds__unify_proc__Vars2_35, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
        }
#line 1651 "unify_proc.m"
        {
#line 1651 "unify_proc.m"
          check_hlds__unify_proc__RHS1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1651 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1651 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_34));
#line 1651 "unify_proc.m"
        }
#line 1652 "unify_proc.m"
        {
#line 1652 "unify_proc.m"
          check_hlds__unify_proc__RHS2_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1652 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1652 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_35));
#line 1652 "unify_proc.m"
        }
#line 1653 "unify_proc.m"
        {
#line 1653 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHS1_36, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_66);
        }
#line 1655 "unify_proc.m"
        {
#line 1655 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS2_37, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_67);
        }
#line 1657 "unify_proc.m"
        {
#line 1657 "unify_proc.m"
          check_hlds__unify_proc__compare_args_9_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, check_hlds__unify_proc__Vars1_34, check_hlds__unify_proc__Vars2_35, check_hlds__unify_proc__R_13, check_hlds__unify_proc__Context_16, &check_hlds__unify_proc__CompareArgs_Goal_38, check_hlds__unify_proc__STATE_VARIABLE_Info_44_44, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
        }
#line 1659 "unify_proc.m"
        {
#line 1659 "unify_proc.m"
          check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__CompareArgs_Goal_38));
#line 1659 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1659 "unify_proc.m"
        }
#line 1659 "unify_proc.m"
        {
#line 1659 "unify_proc.m"
          check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_67));
#line 1659 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1659 "unify_proc.m"
        }
#line 1659 "unify_proc.m"
        {
#line 1659 "unify_proc.m"
          check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_66));
#line 1659 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_52_52));
#line 1659 "unify_proc.m"
        }
#line 1648 "unify_proc.m"
      }
#line 1661 "unify_proc.m"
    {
#line 1661 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_39);
    }
#line 1662 "unify_proc.m"
    {
#line 1662 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__GoalInfo0_39, &check_hlds__unify_proc__GoalInfo_40);
    }
#line 1663 "unify_proc.m"
    {
#line 1663 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_30, check_hlds__unify_proc__GoalInfo_40, check_hlds__unify_proc__Case_18);
#line 1663 "unify_proc.m"
      return;
    }
#line 1625 "unify_proc.m"
  }
#line 1621 "unify_proc.m"
}

#line 1606 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1606 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1606 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1606 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9)
#line 1606 "unify_proc.m"
{
#line 1610 "unify_proc.m"
  {
#line 1610 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1610 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1610 "unify_proc.m"
      {
#line 1610 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1610 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_9 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_8;
#line 1610 "unify_proc.m"
      }
#line 1610 "unify_proc.m"
    else
#line 1612 "unify_proc.m"
      {
#line 1612 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 1612 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 1612 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Case_25;
#line 1612 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Cases_26;
#line 1612 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;

#line 1613 "unify_proc.m"
        {
#line 1613 "unify_proc.m"
          check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Ctor_19, check_hlds__unify_proc__HeadVar__3_3, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, (MR_Integer) 0, &check_hlds__unify_proc__Case_25, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
        }
#line 1615 "unify_proc.m"
        {
#line 1615 "unify_proc.m"
          check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__HeadVar__3_3, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, &check_hlds__unify_proc__Cases_26, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
        }
#line 1612 "unify_proc.m"
        {
#line 1612 "unify_proc.m"
          MR_Word base;
#line 1612 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1612 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__7_7 = base;
#line 1612 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Case_25));
#line 1612 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_26));
#line 1612 "unify_proc.m"
        }
#line 1612 "unify_proc.m"
      }
#line 1610 "unify_proc.m"
  }
#line 1606 "unify_proc.m"
}

#line 1519 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_11,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1519 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1519 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 1519 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
#line 1519 "unify_proc.m"
{
#line 1525 "unify_proc.m"
  {
#line 1525 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__IntType_18;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__X_Index_19;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Y_Index_20;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__R_21;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_22;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_23;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__X_InstmapDelta_24;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_X_Index_25;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Y_InstmapDelta_26;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Y_Index_27;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Less_Than_28;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Greater_Than_29;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_Less_Than_30;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_Greater_Than_31;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_R_32;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_33;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cases_34;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CasesGoal_35;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Abort_36;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleEqualGoal_37;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleGreaterEqualGoal_38;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleLessGreaterEqualGoal_39;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_42_42;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_49_49;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_50_50;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_53_53;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_55_55;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_56_56;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_59_59;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_60_60;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_65_65;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_70_70;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_75_75;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_76_76;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_80_80;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_82_82;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_84_84;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_86_86;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_88_88;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_89_89;
#line 1525 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_90_90;

#line 1526 "unify_proc.m"
    {
#line 1526 "unify_proc.m"
      check_hlds__unify_proc__IntType_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1527 "unify_proc.m"
    {
#line 1527 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__IntType_18, &check_hlds__unify_proc__X_Index_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, &check_hlds__unify_proc__STATE_VARIABLE_Info_42_42);
    }
#line 1528 "unify_proc.m"
    {
#line 1528 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__IntType_18, &check_hlds__unify_proc__Y_Index_20, check_hlds__unify_proc__STATE_VARIABLE_Info_42_42, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
    }
#line 1529 "unify_proc.m"
    {
#line 1529 "unify_proc.m"
      check_hlds__unify_proc__V_44_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
#line 1529 "unify_proc.m"
    {
#line 1529 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_44_44, &check_hlds__unify_proc__R_21, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
    }
#line 1531 "unify_proc.m"
    {
#line 1531 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_22);
    }
#line 1532 "unify_proc.m"
    {
#line 1532 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_22, &check_hlds__unify_proc__GoalInfo_23);
    }
#line 1534 "unify_proc.m"
    {
#line 1534 "unify_proc.m"
      check_hlds__unify_proc__X_InstmapDelta_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__X_Index_19);
    }
#line 1535 "unify_proc.m"
    {
#line 1535 "unify_proc.m"
      check_hlds__unify_proc__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_50_50, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
#line 1535 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1535 "unify_proc.m"
    }
#line 1535 "unify_proc.m"
    {
#line 1535 "unify_proc.m"
      check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1535 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_50_50));
#line 1535 "unify_proc.m"
    }
#line 1535 "unify_proc.m"
    {
#line 1535 "unify_proc.m"
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__V_47_47, check_hlds__unify_proc__X_InstmapDelta_24, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_X_Index_25, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_49_49);
    }
#line 1537 "unify_proc.m"
    {
#line 1537 "unify_proc.m"
      check_hlds__unify_proc__Y_InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__Y_Index_20);
    }
#line 1538 "unify_proc.m"
    {
#line 1538 "unify_proc.m"
      check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Index_20));
#line 1538 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1538 "unify_proc.m"
    }
#line 1538 "unify_proc.m"
    {
#line 1538 "unify_proc.m"
      check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1538 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 1538 "unify_proc.m"
    }
#line 1538 "unify_proc.m"
    {
#line 1538 "unify_proc.m"
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__V_53_53, check_hlds__unify_proc__Y_InstmapDelta_26, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Y_Index_27, check_hlds__unify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__unify_proc__STATE_VARIABLE_Info_55_55);
    }
#line 1541 "unify_proc.m"
    {
#line 1541 "unify_proc.m"
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
#line 1541 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 1541 "unify_proc.m"
    }
#line 1541 "unify_proc.m"
    {
#line 1541 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_lt", check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Less_Than_28, check_hlds__unify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__unify_proc__STATE_VARIABLE_Info_60_60);
    }
#line 1543 "unify_proc.m"
    {
#line 1543 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_gt", check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Greater_Than_29, check_hlds__unify_proc__STATE_VARIABLE_Info_60_60, &check_hlds__unify_proc__STATE_VARIABLE_Info_65_65);
    }
#line 1546 "unify_proc.m"
    {
#line 1546 "unify_proc.m"
      check_hlds__unify_proc__V_68_68 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
    }
#line 1546 "unify_proc.m"
    {
#line 1546 "unify_proc.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_68_68, &check_hlds__unify_proc__Return_Less_Than_30);
    }
#line 1547 "unify_proc.m"
    {
#line 1547 "unify_proc.m"
      check_hlds__unify_proc__V_70_70 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
    }
#line 1547 "unify_proc.m"
    {
#line 1547 "unify_proc.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_70_70, &check_hlds__unify_proc__Return_Greater_Than_31);
    }
#line 1549 "unify_proc.m"
    {
#line 1549 "unify_proc.m"
      check_hlds__unify_proc__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1549 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__R_21));
#line 1549 "unify_proc.m"
    }
#line 1549 "unify_proc.m"
    {
#line 1549 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R_32);
    }
#line 1552 "unify_proc.m"
    {
#line 1552 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_33);
    }
#line 1553 "unify_proc.m"
    {
#line 1553 "unify_proc.m"
      check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__TypeCtor_33, check_hlds__unify_proc__Ctors_11, check_hlds__unify_proc__R_21, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Cases_34, check_hlds__unify_proc__STATE_VARIABLE_Info_65_65, &check_hlds__unify_proc__STATE_VARIABLE_Info_75_75);
    }
#line 1554 "unify_proc.m"
    {
#line 1554 "unify_proc.m"
      check_hlds__unify_proc__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1554 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_76_76, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_34));
#line 1554 "unify_proc.m"
    }
#line 1554 "unify_proc.m"
    {
#line 1554 "unify_proc.m"
      check_hlds__unify_proc__CasesGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1554 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 0) = ((MR_Box) (check_hlds__unify_proc__V_76_76));
#line 1554 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1554 "unify_proc.m"
    }
#line 1556 "unify_proc.m"
    {
#line 1556 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare_error", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Abort_36, check_hlds__unify_proc__STATE_VARIABLE_Info_75_75, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
    }
#line 1560 "unify_proc.m"
    {
#line 1560 "unify_proc.m"
      check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1560 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1560 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 2) = ((MR_Box) (check_hlds__unify_proc__CasesGoal_35));
#line 1560 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R_32));
#line 1560 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 4) = ((MR_Box) (check_hlds__unify_proc__Abort_36));
#line 1560 "unify_proc.m"
    }
#line 1559 "unify_proc.m"
    {
#line 1559 "unify_proc.m"
      check_hlds__unify_proc__HandleEqualGoal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1559 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 0) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 1559 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1559 "unify_proc.m"
    }
#line 1564 "unify_proc.m"
    {
#line 1564 "unify_proc.m"
      check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1564 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1564 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1564 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Greater_Than_29));
#line 1564 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Greater_Than_31));
#line 1564 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 4) = ((MR_Box) (check_hlds__unify_proc__HandleEqualGoal_37));
#line 1564 "unify_proc.m"
    }
#line 1563 "unify_proc.m"
    {
#line 1563 "unify_proc.m"
      check_hlds__unify_proc__HandleGreaterEqualGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1563 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
#line 1563 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1563 "unify_proc.m"
    }
#line 1569 "unify_proc.m"
    {
#line 1569 "unify_proc.m"
      check_hlds__unify_proc__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1569 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1569 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1569 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Less_Than_28));
#line 1569 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Less_Than_30));
#line 1569 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 4) = ((MR_Box) (check_hlds__unify_proc__HandleGreaterEqualGoal_38));
#line 1569 "unify_proc.m"
    }
#line 1568 "unify_proc.m"
    {
#line 1568 "unify_proc.m"
      check_hlds__unify_proc__HandleLessGreaterEqualGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1568 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 0) = ((MR_Box) (check_hlds__unify_proc__V_84_84));
#line 1568 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1568 "unify_proc.m"
    }
#line 1575 "unify_proc.m"
    {
#line 1575 "unify_proc.m"
      check_hlds__unify_proc__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_90_90, 0) = ((MR_Box) (check_hlds__unify_proc__HandleLessGreaterEqualGoal_39));
#line 1575 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1575 "unify_proc.m"
    }
#line 1575 "unify_proc.m"
    {
#line 1575 "unify_proc.m"
      check_hlds__unify_proc__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_89_89, 0) = ((MR_Box) (check_hlds__unify_proc__Call_Y_Index_27));
#line 1575 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_89_89, 1) = ((MR_Box) (check_hlds__unify_proc__V_90_90));
#line 1575 "unify_proc.m"
    }
#line 1575 "unify_proc.m"
    {
#line 1575 "unify_proc.m"
      check_hlds__unify_proc__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1575 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_88_88, 0) = ((MR_Box) (check_hlds__unify_proc__Call_X_Index_25));
#line 1575 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_88_88, 1) = ((MR_Box) (check_hlds__unify_proc__V_89_89));
#line 1575 "unify_proc.m"
    }
#line 1574 "unify_proc.m"
    {
#line 1574 "unify_proc.m"
      check_hlds__unify_proc__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1574 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1574 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 2) = ((MR_Box) (check_hlds__unify_proc__V_88_88));
#line 1574 "unify_proc.m"
    }
#line 1573 "unify_proc.m"
    {
#line 1573 "unify_proc.m"
      MR_Word base;
#line 1573 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1573 "unify_proc.m"
      *check_hlds__unify_proc__Goal_16 = base;
#line 1573 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_86_86));
#line 1573 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1573 "unify_proc.m"
    }
#line 1525 "unify_proc.m"
  }
#line 1519 "unify_proc.m"
}

#line 1454 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1454 "unify_proc.m"
  MR_String check_hlds__unify_proc__HeadVar__4_4,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__8_8,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9,
#line 1454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_10,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_11,
#line 1454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_12)
#line 1454 "unify_proc.m"
{
#line 1460 "unify_proc.m"
  while (MR_TRUE)
#line 1460 "unify_proc.m"
    {
#line 1460 "unify_proc.m"
      /* tailcall optimized into a loop */
#line 1460 "unify_proc.m"
      {
#line 1460 "unify_proc.m"
        MR_bool check_hlds__unify_proc__succeeded;

#line 1460 "unify_proc.m"
        if ((check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1460 "unify_proc.m"
          {
#line 1461 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Info_12 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_11;
#line 1461 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Cases_10 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9;
#line 1460 "unify_proc.m"
          }
#line 1460 "unify_proc.m"
        else
#line 1463 "unify_proc.m"
          {
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Case_37;
#line 1463 "unify_proc.m"
            MR_String check_hlds__unify_proc__Cmp1_38;
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_46_46;

#line 1464 "unify_proc.m"
            {
#line 1464 "unify_proc.m"
              check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____constructor_0_0(check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__RightCtor_28);
            }
#line 1468 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 1466 "unify_proc.m"
              {
#line 1465 "unify_proc.m"
                {
#line 1465 "unify_proc.m"
                  check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__HeadVar__8_8, (MR_Integer) 1, &check_hlds__unify_proc__Case_37, check_hlds__unify_proc__STATE_VARIABLE_Info_0_11, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
                }
#line 1467 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_38 = (MR_String) "<";
#line 1466 "unify_proc.m"
              }
#line 1468 "unify_proc.m"
            else
#line 1470 "unify_proc.m"
              {
#line 1469 "unify_proc.m"
                {
#line 1469 "unify_proc.m"
                  check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__RightCtor_28, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__HeadVar__8_8, &check_hlds__unify_proc__Case_37, check_hlds__unify_proc__STATE_VARIABLE_Info_0_11, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
                }
#line 1471 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_38 = check_hlds__unify_proc__HeadVar__4_4;
#line 1470 "unify_proc.m"
              }
#line 1474 "unify_proc.m"
            {
#line 1474 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Case_37));
#line 1474 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9));
#line 1474 "unify_proc.m"
            }
#line 1473 "unify_proc.m"
            /* direct tailcall eliminated */
#line 1473 "unify_proc.m"
            {
#line 1473 "unify_proc.m"
              MR_Word check_hlds__unify_proc__HeadVar__3__tmp_copy_3 = check_hlds__unify_proc__RightCtors_29;
#line 1473 "unify_proc.m"
              MR_String check_hlds__unify_proc__HeadVar__4__tmp_copy_4 = check_hlds__unify_proc__Cmp1_38;
#line 1473 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_9 = check_hlds__unify_proc__V_46_46;
#line 1473 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;

#line 1473 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Info_0_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_11;
#line 1473 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_9;
#line 1473 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__HeadVar__4__tmp_copy_4;
#line 1473 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__HeadVar__3__tmp_copy_3;
#line 1473 "unify_proc.m"
            }
#line 1473 "unify_proc.m"
            continue;
#line 1463 "unify_proc.m"
          }
#line 1460 "unify_proc.m"
      }
#line 1460 "unify_proc.m"
      break;
#line 1460 "unify_proc.m"
    }
#line 1454 "unify_proc.m"
}

#line 1439 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8,
#line 1439 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_9,
#line 1439 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_10,
#line 1439 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_11)
#line 1439 "unify_proc.m"
{
#line 1445 "unify_proc.m"
  while (MR_TRUE)
#line 1445 "unify_proc.m"
    {
#line 1445 "unify_proc.m"
      /* tailcall optimized into a loop */
#line 1445 "unify_proc.m"
      {
#line 1445 "unify_proc.m"
        MR_bool check_hlds__unify_proc__succeeded;

#line 1445 "unify_proc.m"
        if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1445 "unify_proc.m"
          {
#line 1446 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Info_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_10;
#line 1446 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Cases_9 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8;
#line 1445 "unify_proc.m"
          }
#line 1445 "unify_proc.m"
        else
#line 1448 "unify_proc.m"
          {
#line 1448 "unify_proc.m"
            MR_Word check_hlds__unify_proc__LeftCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 1448 "unify_proc.m"
            MR_Word check_hlds__unify_proc__LeftCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 1448 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
#line 1448 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

#line 1449 "unify_proc.m"
            {
#line 1449 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__LeftCtor_25, check_hlds__unify_proc__HeadVar__3_3, (MR_String) ">", check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39, check_hlds__unify_proc__STATE_VARIABLE_Info_0_10, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_40);
            }
#line 1451 "unify_proc.m"
            /* direct tailcall eliminated */
#line 1451 "unify_proc.m"
            {
#line 1451 "unify_proc.m"
              MR_Word check_hlds__unify_proc__HeadVar__2__tmp_copy_2 = check_hlds__unify_proc__LeftCtors_26;
#line 1451 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
#line 1451 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

#line 1451 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Info_0_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_10;
#line 1451 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_8;
#line 1451 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__2_2 = check_hlds__unify_proc__HeadVar__2__tmp_copy_2;
#line 1451 "unify_proc.m"
            }
#line 1451 "unify_proc.m"
            continue;
#line 1448 "unify_proc.m"
          }
#line 1445 "unify_proc.m"
      }
#line 1445 "unify_proc.m"
      break;
#line 1445 "unify_proc.m"
    }
#line 1439 "unify_proc.m"
}

#line 1341 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
#line 1341 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1341 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1341 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 1341 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_3)
#line 1341 "unify_proc.m"
{
#line 1341 "unify_proc.m"
  {
#line 1341 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1341 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_Res_6;

#line 1341 "unify_proc.m"
    {
#line 1341 "unify_proc.m"
      check_hlds__unify_proc__compare_ctors_lexically_3_p_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), &check_hlds__unify_proc__conv0_Res_6);
    }
#line 1341 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__unify_proc__conv0_Res_6));
#line 1341 "unify_proc.m"
  }
#line 1341 "unify_proc.m"
}

#line 1329 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors0_11,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1329 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 1329 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_30,
#line 1329 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_31)
#line 1329 "unify_proc.m"
{
#line 1334 "unify_proc.m"
  {
#line 1334 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1334 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1334 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_19;
#line 1334 "unify_proc.m"
    MR_Word check_hlds__unify_proc__LexicalOrder_20;
#line 1334 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Ctors_21;
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));

#line 1336 "unify_proc.m"
    {
#line 1336 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__Globals_19);
    }
#line 1337 "unify_proc.m"
    {
#line 1337 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 275, &check_hlds__unify_proc__LexicalOrder_20);
    }
#line 1342 "unify_proc.m"
    if ((check_hlds__unify_proc__LexicalOrder_20 == (MR_Integer) 0))
#line 1344 "unify_proc.m"
      check_hlds__unify_proc__Ctors_21 = check_hlds__unify_proc__Ctors0_11;
#line 1342 "unify_proc.m"
    else
#line 1340 "unify_proc.m"
      {
#line 1341 "unify_proc.m"
        {
#line 1341 "unify_proc.m"
          mercury__list__sort_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[3], check_hlds__unify_proc__Ctors0_11, &check_hlds__unify_proc__Ctors_21);
        }
#line 1340 "unify_proc.m"
      }
#line 1349 "unify_proc.m"
    if ((check_hlds__unify_proc__Ctors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1347 "unify_proc.m"
      {
#line 1348 "unify_proc.m"
        {
#line 1348 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_du_compare_proc_body\'/9", (MR_String) "compare for type with no functors");
#line 1348 "unify_proc.m"
          return;
        }
#line 1347 "unify_proc.m"
      }
#line 1349 "unify_proc.m"
    else
#line 1350 "unify_proc.m"
      {
#line 1350 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__CompareSpec_24;
#line 1350 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumCtors_25;
#line 1350 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_27;
#line 1350 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_28;
#line 1350 "unify_proc.m"
        MR_Word check_hlds__unify_proc__HeadVars_29;
#line 1350 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
#line 1350 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_37_37;
#line 1350 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_38_38;
#line 1350 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1350 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;

#line 1351 "unify_proc.m"
        {
#line 1351 "unify_proc.m"
          libs__globals__lookup_int_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 318, &check_hlds__unify_proc__CompareSpec_24);
        }
#line 1353 "unify_proc.m"
        {
#line 1353 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, check_hlds__unify_proc__Ctors_21, &check_hlds__unify_proc__NumCtors_25);
        }
#line 1354 "unify_proc.m"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__NumCtors_25 <= check_hlds__unify_proc__CompareSpec_24);
#line 1358 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 1355 "unify_proc.m"
          {
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__TypeCtor_26;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Cases_65;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo0_66;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_67;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_40_99;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtor_117;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtors_118;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Case_126;
#line 1355 "unify_proc.m"
            MR_String check_hlds__unify_proc__Cmp1_127;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_133;
#line 1355 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_135_135;

#line 1355 "unify_proc.m"
            {
#line 1355 "unify_proc.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_26);
            }
#line 1447 "unify_proc.m"
            check_hlds__unify_proc__RightCtor_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Ctors_21, (MR_Integer) 0)));
#line 1447 "unify_proc.m"
            check_hlds__unify_proc__RightCtors_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Ctors_21, (MR_Integer) 1)));
#line 1464 "unify_proc.m"
            {
#line 1464 "unify_proc.m"
              check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____constructor_0_0(check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtor_117);
            }
#line 1468 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 1466 "unify_proc.m"
              {
#line 1465 "unify_proc.m"
                {
#line 1465 "unify_proc.m"
                  check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, (MR_Integer) 1, &check_hlds__unify_proc__Case_126, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_133);
                }
#line 1467 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_127 = (MR_String) "<";
#line 1466 "unify_proc.m"
              }
#line 1468 "unify_proc.m"
            else
#line 1470 "unify_proc.m"
              {
#line 1469 "unify_proc.m"
                {
#line 1469 "unify_proc.m"
                  check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtor_117, (MR_String) ">", check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Case_126, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_133);
                }
#line 1471 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_127 = (MR_String) ">";
#line 1470 "unify_proc.m"
              }
#line 1474 "unify_proc.m"
            {
#line 1474 "unify_proc.m"
              check_hlds__unify_proc__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_135_135, 0) = ((MR_Box) (check_hlds__unify_proc__Case_126));
#line 1474 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1474 "unify_proc.m"
            }
#line 1473 "unify_proc.m"
            {
#line 1473 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Cmp1_127, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__V_135_135, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, check_hlds__unify_proc__STATE_VARIABLE_Info_44_133, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_99);
            }
#line 1451 "unify_proc.m"
            {
#line 1451 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, &check_hlds__unify_proc__Cases_65, check_hlds__unify_proc__STATE_VARIABLE_Info_40_99, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
            }
#line 1435 "unify_proc.m"
            {
#line 1435 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_66);
            }
#line 1436 "unify_proc.m"
            {
#line 1436 "unify_proc.m"
              hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_66, &check_hlds__unify_proc__GoalInfo_67);
            }
#line 1437 "unify_proc.m"
            {
#line 1437 "unify_proc.m"
              hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__unify_proc__Cases_65, check_hlds__unify_proc__GoalInfo_67, &check_hlds__unify_proc__Goal0_27);
            }
#line 1355 "unify_proc.m"
          }
#line 1358 "unify_proc.m"
        else
#line 1359 "unify_proc.m"
          {
#line 1359 "unify_proc.m"
            check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Goal0_27, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
          }
#line 1362 "unify_proc.m"
        {
#line 1362 "unify_proc.m"
          check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1362 "unify_proc.m"
        }
#line 1362 "unify_proc.m"
        {
#line 1362 "unify_proc.m"
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__V_37_37, check_hlds__unify_proc__Goal0_27, &check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, &check_hlds__unify_proc__STATE_VARIABLE_Info_38_38);
        }
#line 1364 "unify_proc.m"
        {
#line 1364 "unify_proc.m"
          check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1364 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "unify_proc.m"
        }
#line 1364 "unify_proc.m"
        {
#line 1364 "unify_proc.m"
          check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1364 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1364 "unify_proc.m"
        }
#line 1364 "unify_proc.m"
        {
#line 1364 "unify_proc.m"
          check_hlds__unify_proc__HeadVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1364 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 1364 "unify_proc.m"
        }
#line 1365 "unify_proc.m"
        {
#line 1365 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__HeadVars_29, check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_38_38, check_hlds__unify_proc__STATE_VARIABLE_Info_31);
#line 1365 "unify_proc.m"
          return;
        }
#line 1350 "unify_proc.m"
      }
#line 1334 "unify_proc.m"
  }
#line 1329 "unify_proc.m"
}

#line 1880 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
#line 1880 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1880 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 1880 "unify_proc.m"
{
#line 1880 "unify_proc.m"
  {
#line 1880 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 1880 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1880 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__2_22;

#line 1880 "unify_proc.m"
    {
#line 1880 "unify_proc.m"
      check_hlds__unify_proc__conv0_HeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1880__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 1880 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__2_22));
#line 1880 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 1880 "unify_proc.m"
  }
#line 1880 "unify_proc.m"
}

#line 1308 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_12,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_13,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_14,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1308 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1308 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__STATE_VARIABLE_N_0_32,
#line 1308 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__STATE_VARIABLE_N_33,
#line 1308 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_34,
#line 1308 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_35)
#line 1308 "unify_proc.m"
{
#line 1312 "unify_proc.m"
  {
#line 1312 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
#line 1312 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_26;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyX_Goal_27;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyIndex_Goal_28;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_29;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_30;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_31;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 1313 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
#line 1313 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 5)));

#line 1315 "unify_proc.m"
    {
#line 1315 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1315 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_21));
#line 1315 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_23));
#line 1315 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_11));
#line 1315 "unify_proc.m"
    }
#line 1879 "unify_proc.m"
    if ((check_hlds__unify_proc__ExistQTVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1879 "unify_proc.m"
      {
#line 1879 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_51;

#line 1880 "unify_proc.m"
        {
#line 1880 "unify_proc.m"
          check_hlds__unify_proc__ArgTypes_51 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[2], check_hlds__unify_proc__ArgTypes_22);
        }
#line 1881 "unify_proc.m"
        {
#line 1881 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_51, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, check_hlds__unify_proc__STATE_VARIABLE_Info_35);
        }
#line 1879 "unify_proc.m"
      }
#line 1879 "unify_proc.m"
    else
#line 1883 "unify_proc.m"
      {
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 1883 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumVars_56;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_57;
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 2105 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 2110 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_78_78;
#line 2110 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_79_79;
#line 2110 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_80_80;
#line 2110 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77;

#line 1890 "unify_proc.m"
        {
#line 1890 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__ArgTypes_22, &check_hlds__unify_proc__NumVars_56);
        }
#line 1891 "unify_proc.m"
        {
#line 1891 "unify_proc.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_56, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__VarSet0_55, &check_hlds__unify_proc__VarSet_57);
        }
#line 2110 "unify_proc.m"
        check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 2110 "unify_proc.m"
        check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 2110 "unify_proc.m"
        check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 2110 "unify_proc.m"
        check_hlds__unify_proc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 2110 "unify_proc.m"
        {
#line 2110 "unify_proc.m"
          MR_Word base;
#line 2110 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2110 "unify_proc.m"
          *check_hlds__unify_proc__STATE_VARIABLE_Info_35 = base;
#line 2110 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_57));
#line 2110 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 2110 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2110 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 2110 "unify_proc.m"
        }
#line 1883 "unify_proc.m"
      }
#line 1318 "unify_proc.m"
    {
#line 1318 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1318 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1318 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_26));
#line 1318 "unify_proc.m"
    }
#line 1317 "unify_proc.m"
    {
#line 1317 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_12, check_hlds__unify_proc__V_37_37, check_hlds__unify_proc__Context_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
    }
#line 1320 "unify_proc.m"
    {
#line 1320 "unify_proc.m"
      hlds__make_goal__make_int_const_construction_3_p_0(check_hlds__unify_proc__Index_13, check_hlds__unify_proc__STATE_VARIABLE_N_0_32, &check_hlds__unify_proc__UnifyIndex_Goal_28);
    }
#line 1321 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_N_33 = (check_hlds__unify_proc__STATE_VARIABLE_N_0_32 + (MR_Integer) 1);
#line 1322 "unify_proc.m"
    {
#line 1322 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyIndex_Goal_28));
#line 1322 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "unify_proc.m"
    }
#line 1322 "unify_proc.m"
    {
#line 1322 "unify_proc.m"
      check_hlds__unify_proc__GoalList_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
#line 1322 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_43_43));
#line 1322 "unify_proc.m"
    }
#line 1323 "unify_proc.m"
    {
#line 1323 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_30);
    }
#line 1324 "unify_proc.m"
    {
#line 1324 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_14, check_hlds__unify_proc__GoalInfo0_30, &check_hlds__unify_proc__GoalInfo_31);
    }
#line 1325 "unify_proc.m"
    {
#line 1325 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_29, check_hlds__unify_proc__GoalInfo_31, check_hlds__unify_proc__Goal_16);
#line 1325 "unify_proc.m"
      return;
    }
#line 1312 "unify_proc.m"
  }
#line 1308 "unify_proc.m"
}

#line 1301 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
#line 1301 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1301 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1301 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1301 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1301 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4,
#line 1301 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_5,
#line 1301 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_6)
#line 1301 "unify_proc.m"
{
#line 1301 "unify_proc.m"
  {
#line 1301 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1301 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv2_Goal_16;
#line 1301 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33;
#line 1301 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35;

#line 1301 "unify_proc.m"
    {
#line 1301 "unify_proc.m"
      check_hlds__unify_proc__generate_du_index_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv2_Goal_16, ((MR_Integer) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33, ((MR_Word) check_hlds__unify_proc__wrapper_arg_5), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35);
    }
#line 1301 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv2_Goal_16));
#line 1301 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33));
#line 1301 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_6 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35));
#line 1301 "unify_proc.m"
  }
#line 1301 "unify_proc.m"
}

#line 1295 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1295 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1295 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_21,
#line 1295 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_22)
#line 1295 "unify_proc.m"
{
#line 1300 "unify_proc.m"
  {
#line 1300 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Disjuncts_16;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_18;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_19;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_20;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27;
#line 1300 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29;
#line 1301 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_17_17;
#line 1301 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv4_V_17_17;
#line 1301 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25;

#line 1301 "unify_proc.m"
    {
#line 1301 "unify_proc.m"
      check_hlds__unify_proc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0]));
#line 1301 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1));
#line 1301 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1301 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
#line 1301 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1301 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 5) = ((MR_Box) (check_hlds__unify_proc__Index_12));
#line 1301 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
#line 1301 "unify_proc.m"
    }
#line 1301 "unify_proc.m"
    {
#line 1301 "unify_proc.m"
      mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__V_23_23, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_16, ((MR_Box) ((MR_Integer) 0)), &check_hlds__unify_proc__conv4_V_17_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_21)), &check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
    }
#line 1301 "unify_proc.m"
    check_hlds__unify_proc__V_17_17 = ((MR_Integer) check_hlds__unify_proc__conv4_V_17_17);
#line 1301 "unify_proc.m"
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
#line 1303 "unify_proc.m"
    {
#line 1303 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
#line 1304 "unify_proc.m"
    {
#line 1304 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
#line 1305 "unify_proc.m"
    {
#line 1305 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1305 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_16));
#line 1305 "unify_proc.m"
    }
#line 1305 "unify_proc.m"
    {
#line 1305 "unify_proc.m"
      check_hlds__unify_proc__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 0) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 1305 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
#line 1305 "unify_proc.m"
    }
#line 1306 "unify_proc.m"
    {
#line 1306 "unify_proc.m"
      check_hlds__unify_proc__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 0) = ((MR_Box) (check_hlds__unify_proc__Index_12));
#line 1306 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "unify_proc.m"
    }
#line 1306 "unify_proc.m"
    {
#line 1306 "unify_proc.m"
      check_hlds__unify_proc__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1306 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__V_29_29));
#line 1306 "unify_proc.m"
    }
#line 1306 "unify_proc.m"
    {
#line 1306 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_27_27, check_hlds__unify_proc__Goal_20, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, check_hlds__unify_proc__STATE_VARIABLE_Info_22);
#line 1306 "unify_proc.m"
      return;
    }
#line 1300 "unify_proc.m"
  }
#line 1295 "unify_proc.m"
}

#line 1217 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_10,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1217 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1217 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_43,
#line 1217 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_44)
#line 1217 "unify_proc.m"
{
#line 1222 "unify_proc.m"
  {
#line 1222 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
#line 1222 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_35;
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_41;
#line 1222 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_42;
#line 1223 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
#line 1223 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 5)));
#line 1225 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 0)));
#line 1225 "unify_proc.m"
    MR_String check_hlds__unify_proc__V_46_46;
#line 1225 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 1)));

#line 1225 "unify_proc.m"
    check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 1225 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1225 "unify_proc.m"
      {
#line 1225 "unify_proc.m"
        check_hlds__unify_proc__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_45_45, (MR_Integer) 0)));
#line 1225 "unify_proc.m"
        check_hlds__unify_proc__succeeded = (strcmp(check_hlds__unify_proc__V_46_46, (MR_String) "{}") == 0);
#line 1225 "unify_proc.m"
      }
#line 1227 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1226 "unify_proc.m"
      {
#line 1226 "unify_proc.m"
        check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1226 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_22));
#line 1226 "unify_proc.m"
      }
#line 1227 "unify_proc.m"
    else
#line 1228 "unify_proc.m"
      {
#line 1228 "unify_proc.m"
        check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1228 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_20));
#line 1228 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_22));
#line 1228 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_10));
#line 1228 "unify_proc.m"
      }
#line 1231 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__ArgTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1232 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CanCompareAsInt_14 == (MR_Integer) 1);
#line 1246 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1234 "unify_proc.m"
      {
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS_26;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_27;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastX_28;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastY_29;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal0_30;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal0_31;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal_32;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal_33;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_34;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_51_51;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_53_53;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_54_54;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_61_61;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_64_64;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_65_65;
#line 1234 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_66_66;

#line 1234 "unify_proc.m"
        {
#line 1234 "unify_proc.m"
          check_hlds__unify_proc__RHS_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1234 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1234 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "unify_proc.m"
        }
#line 1235 "unify_proc.m"
        {
#line 1235 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHS_26, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
        }
#line 1237 "unify_proc.m"
        {
#line 1237 "unify_proc.m"
          check_hlds__unify_proc__V_51_51 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 1237 "unify_proc.m"
        {
#line 1237 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__V_51_51, (MR_String) "CastX", &check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__STATE_VARIABLE_Info_0_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_53_53);
        }
#line 1238 "unify_proc.m"
        {
#line 1238 "unify_proc.m"
          check_hlds__unify_proc__V_54_54 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 1238 "unify_proc.m"
        {
#line 1238 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__V_54_54, (MR_String) "CastY", &check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__STATE_VARIABLE_Info_53_53, check_hlds__unify_proc__STATE_VARIABLE_Info_44);
        }
#line 1239 "unify_proc.m"
        {
#line 1239 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal0_30);
        }
#line 1240 "unify_proc.m"
        {
#line 1240 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal0_31);
        }
#line 1241 "unify_proc.m"
        {
#line 1241 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastXGoal0_30, &check_hlds__unify_proc__CastXGoal_32);
        }
#line 1242 "unify_proc.m"
        {
#line 1242 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastYGoal0_31, &check_hlds__unify_proc__CastYGoal_33);
        }
#line 1243 "unify_proc.m"
        {
#line 1243 "unify_proc.m"
          check_hlds__unify_proc__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_28));
#line 1243 "unify_proc.m"
        }
#line 1243 "unify_proc.m"
        {
#line 1243 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__V_61_61, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_34);
        }
#line 1245 "unify_proc.m"
        {
#line 1245 "unify_proc.m"
          check_hlds__unify_proc__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_34));
#line 1245 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1245 "unify_proc.m"
        }
#line 1245 "unify_proc.m"
        {
#line 1245 "unify_proc.m"
          check_hlds__unify_proc__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_33));
#line 1245 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 1) = ((MR_Box) (check_hlds__unify_proc__V_66_66));
#line 1245 "unify_proc.m"
        }
#line 1245 "unify_proc.m"
        {
#line 1245 "unify_proc.m"
          check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_32));
#line 1245 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 1245 "unify_proc.m"
        }
#line 1245 "unify_proc.m"
        {
#line 1245 "unify_proc.m"
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
#line 1245 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1245 "unify_proc.m"
        }
#line 1234 "unify_proc.m"
      }
#line 1246 "unify_proc.m"
    else
#line 1247 "unify_proc.m"
      {
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars1_36;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars2_37;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS1_38;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS2_39;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyArgs_Goals_40;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_68_68;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_69_69;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_78;
#line 1247 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_79;
#line 1902 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_88;
#line 1902 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_17_89;

#line 1247 "unify_proc.m"
        {
#line 1247 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, &check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_68_68);
        }
#line 1248 "unify_proc.m"
        {
#line 1248 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, &check_hlds__unify_proc__Vars2_37, check_hlds__unify_proc__STATE_VARIABLE_Info_68_68, &check_hlds__unify_proc__STATE_VARIABLE_Info_69_69);
        }
#line 1249 "unify_proc.m"
        {
#line 1249 "unify_proc.m"
          check_hlds__unify_proc__RHS1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1249 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1249 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_36));
#line 1249 "unify_proc.m"
        }
#line 1250 "unify_proc.m"
        {
#line 1250 "unify_proc.m"
          check_hlds__unify_proc__RHS2_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1250 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1250 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_37));
#line 1250 "unify_proc.m"
        }
#line 1251 "unify_proc.m"
        {
#line 1251 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHS1_38, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_78);
        }
#line 1253 "unify_proc.m"
        {
#line 1253 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_12, check_hlds__unify_proc__RHS2_39, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_79);
        }
#line 1900 "unify_proc.m"
        {
#line 1900 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__unify_proc__unify_var_lists_2_7_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__Vars2_37, &check_hlds__unify_proc__Goal0_88, check_hlds__unify_proc__STATE_VARIABLE_Info_69_69, &check_hlds__unify_proc__STATE_VARIABLE_Info_17_89);
        }
#line 1902 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 1901 "unify_proc.m"
          {
#line 1901 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Info_44 = check_hlds__unify_proc__STATE_VARIABLE_Info_17_89;
#line 1901 "unify_proc.m"
            check_hlds__unify_proc__UnifyArgs_Goals_40 = check_hlds__unify_proc__Goal0_88;
#line 1901 "unify_proc.m"
          }
#line 1902 "unify_proc.m"
        else
#line 1903 "unify_proc.m"
          {
#line 1903 "unify_proc.m"
            {
#line 1903 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.unify_var_lists\'/7", (MR_String) "length mismatch");
#line 1903 "unify_proc.m"
              return;
            }
#line 1903 "unify_proc.m"
          }
#line 1257 "unify_proc.m"
        {
#line 1257 "unify_proc.m"
          check_hlds__unify_proc__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_77_77, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_79));
#line 1257 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_77_77, 1) = ((MR_Box) (check_hlds__unify_proc__UnifyArgs_Goals_40));
#line 1257 "unify_proc.m"
        }
#line 1257 "unify_proc.m"
        {
#line 1257 "unify_proc.m"
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_78));
#line 1257 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_77_77));
#line 1257 "unify_proc.m"
        }
#line 1247 "unify_proc.m"
      }
#line 1259 "unify_proc.m"
    {
#line 1259 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_41);
    }
#line 1260 "unify_proc.m"
    {
#line 1260 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_41, &check_hlds__unify_proc__GoalInfo_42);
    }
#line 1261 "unify_proc.m"
    {
#line 1261 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_35, check_hlds__unify_proc__GoalInfo_42, check_hlds__unify_proc__Goal_16);
#line 1261 "unify_proc.m"
      return;
    }
#line 1222 "unify_proc.m"
  }
#line 1217 "unify_proc.m"
}

#line 1209 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
#line 1209 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1209 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1209 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1209 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1209 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4)
#line 1209 "unify_proc.m"
{
#line 1209 "unify_proc.m"
  {
#line 1209 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1209 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv1_Goal_16;
#line 1209 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44;

#line 1209 "unify_proc.m"
    {
#line 1209 "unify_proc.m"
      check_hlds__unify_proc__generate_du_unify_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv1_Goal_16, ((MR_Word) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44);
    }
#line 1209 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv1_Goal_16));
#line 1209 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44));
#line 1209 "unify_proc.m"
  }
#line 1209 "unify_proc.m"
}

#line 1203 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1203 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1203 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 1203 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
#line 1203 "unify_proc.m"
{
#line 1207 "unify_proc.m"
  {
#line 1207 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CanCompareAsInt_16;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Disjuncts_17;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_18;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_19;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_20;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_21;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 1207 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_43;
#line 1270 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 1270 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 1270 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 1209 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25;

#line 1271 "unify_proc.m"
    {
#line 1271 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_42, &check_hlds__unify_proc__Globals_43);
    }
#line 1272 "unify_proc.m"
    {
#line 1272 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_43, (MR_Integer) 272, &check_hlds__unify_proc__CanCompareAsInt_16);
    }
#line 1209 "unify_proc.m"
    {
#line 1209 "unify_proc.m"
      check_hlds__unify_proc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[0]));
#line 1209 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1));
#line 1209 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1209 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
#line 1209 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1209 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 5) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1209 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
#line 1209 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 7) = ((MR_Box) (check_hlds__unify_proc__CanCompareAsInt_16));
#line 1209 "unify_proc.m"
    }
#line 1209 "unify_proc.m"
    {
#line 1209 "unify_proc.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__V_24_24, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_22)), &check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
    }
#line 1209 "unify_proc.m"
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
#line 1211 "unify_proc.m"
    {
#line 1211 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
#line 1212 "unify_proc.m"
    {
#line 1212 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
#line 1213 "unify_proc.m"
    {
#line 1213 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1213 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_17));
#line 1213 "unify_proc.m"
    }
#line 1213 "unify_proc.m"
    {
#line 1213 "unify_proc.m"
      check_hlds__unify_proc__Goal0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 0) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 1213 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
#line 1213 "unify_proc.m"
    }
#line 1214 "unify_proc.m"
    {
#line 1214 "unify_proc.m"
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_20, &check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, &check_hlds__unify_proc__STATE_VARIABLE_Info_28_28);
    }
#line 1215 "unify_proc.m"
    {
#line 1215 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1215 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "unify_proc.m"
    }
#line 1215 "unify_proc.m"
    {
#line 1215 "unify_proc.m"
      check_hlds__unify_proc__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1215 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_31_31));
#line 1215 "unify_proc.m"
    }
#line 1215 "unify_proc.m"
    {
#line 1215 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_29_29, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
#line 1215 "unify_proc.m"
      return;
    }
#line 1207 "unify_proc.m"
  }
#line 1203 "unify_proc.m"
}

#line 1133 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_9,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_10,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1133 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1133 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_24,
#line 1133 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_25)
#line 1133 "unify_proc.m"
{
#line 1137 "unify_proc.m"
  {
#line 1137 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_16;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_17;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_18;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_19;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CompareGoal_20;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_21;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_22;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_23;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_36_36;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_40_40;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_42_42;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47;
#line 1137 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_56;
#line 1137 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_57;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_65;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_66;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_67;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_68;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_79_79;
#line 1137 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_80_80;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_73_73;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_77_77;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_78_78;

#line 1852 "unify_proc.m"
    {
#line 1852 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_56);
    }
#line 1853 "unify_proc.m"
    {
#line 1853 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_56, &check_hlds__unify_proc__Name_57);
    }
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2098 "unify_proc.m"
    {
#line 2098 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_57, &check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__VarSet0_65, &check_hlds__unify_proc__VarSet_67);
    }
#line 2099 "unify_proc.m"
    {
#line 2099 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__EqvType_9, check_hlds__unify_proc__VarTypes0_66, &check_hlds__unify_proc__VarTypes_68);
    }
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2101 "unify_proc.m"
    {
#line 2101 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_67));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_68));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 2101 "unify_proc.m"
    }
#line 1144 "unify_proc.m"
    {
#line 1144 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_9, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_17, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
    }
#line 1145 "unify_proc.m"
    {
#line 1145 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal_18);
    }
#line 1146 "unify_proc.m"
    {
#line 1146 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_17, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal_19);
    }
#line 1147 "unify_proc.m"
    {
#line 1147 "unify_proc.m"
      check_hlds__unify_proc__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_38_38, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_17));
#line 1147 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "unify_proc.m"
    }
#line 1147 "unify_proc.m"
    {
#line 1147 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_16));
#line 1147 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (check_hlds__unify_proc__V_38_38));
#line 1147 "unify_proc.m"
    }
#line 1147 "unify_proc.m"
    {
#line 1147 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
#line 1147 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 1147 "unify_proc.m"
    }
#line 1147 "unify_proc.m"
    {
#line 1147 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare", check_hlds__unify_proc__V_35_35, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CompareGoal_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, &check_hlds__unify_proc__STATE_VARIABLE_Info_36_36);
    }
#line 1149 "unify_proc.m"
    {
#line 1149 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_21);
    }
#line 1150 "unify_proc.m"
    {
#line 1150 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_21, &check_hlds__unify_proc__GoalInfo_22);
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_20));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_19));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (check_hlds__unify_proc__V_42_42));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_18));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_40_40, check_hlds__unify_proc__GoalInfo_22, &check_hlds__unify_proc__Goal_23);
    }
#line 1152 "unify_proc.m"
    {
#line 1152 "unify_proc.m"
      check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1152 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1152 "unify_proc.m"
    }
#line 1152 "unify_proc.m"
    {
#line 1152 "unify_proc.m"
      check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1152 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_47_47));
#line 1152 "unify_proc.m"
    }
#line 1152 "unify_proc.m"
    {
#line 1152 "unify_proc.m"
      check_hlds__unify_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
#line 1152 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1152 "unify_proc.m"
    }
#line 1152 "unify_proc.m"
    {
#line 1152 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_44_44, check_hlds__unify_proc__Goal_23, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_36_36, check_hlds__unify_proc__STATE_VARIABLE_Info_25);
#line 1152 "unify_proc.m"
      return;
    }
#line 1137 "unify_proc.m"
  }
#line 1133 "unify_proc.m"
}

#line 1099 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_2,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_3,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_4,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_5,
#line 1099 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_6,
#line 1099 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_7,
#line 1099 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_8)
#line 1099 "unify_proc.m"
{
#line 1104 "unify_proc.m"
  {
#line 1104 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1104 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1104 "unify_proc.m"
      {
#line 1105 "unify_proc.m"
        {
#line 1105 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_compare_proc_body\'/8", (MR_String) "trying to create compare proc for abstract noncanonical type");
#line 1105 "unify_proc.m"
          return;
        }
#line 1104 "unify_proc.m"
      }
#line 1104 "unify_proc.m"
    else
#line 1108 "unify_proc.m"
      {
#line 1108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeCompare_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgVars_29;
#line 1108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_36;
#line 1108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 1108 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_47_47;
#line 1107 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));

#line 1109 "unify_proc.m"
        {
#line 1109 "unify_proc.m"
          check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_4));
#line 1109 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "unify_proc.m"
        }
#line 1109 "unify_proc.m"
        {
#line 1109 "unify_proc.m"
          check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_3));
#line 1109 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1109 "unify_proc.m"
        }
#line 1109 "unify_proc.m"
        {
#line 1109 "unify_proc.m"
          check_hlds__unify_proc__ArgVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_2));
#line 1109 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 1109 "unify_proc.m"
        }
#line 1125 "unify_proc.m"
        if ((check_hlds__unify_proc__MaybeCompare_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1126 "unify_proc.m"
          {
#line 1128 "unify_proc.m"
            {
#line 1128 "unify_proc.m"
              check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_non_canonical_type", check_hlds__unify_proc__ArgVars_29, check_hlds__unify_proc__Context_5, &check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_7, &check_hlds__unify_proc__STATE_VARIABLE_Info_47_47);
            }
#line 1126 "unify_proc.m"
          }
#line 1125 "unify_proc.m"
        else
#line 1111 "unify_proc.m"
          {
#line 1111 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ComparePredName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_22, (MR_Integer) 0)));
#line 1111 "unify_proc.m"
            MR_Word check_hlds__unify_proc__PredId_31;
#line 1111 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__ModeId_32;
#line 1111 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Call_33;
#line 1111 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_34;
#line 1111 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Goal0_35;
#line 1111 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_46_46;

#line 1117 "unify_proc.m"
            {
#line 1117 "unify_proc.m"
              check_hlds__unify_proc__PredId_31 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1118 "unify_proc.m"
            {
#line 1118 "unify_proc.m"
              check_hlds__unify_proc__ModeId_32 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 1119 "unify_proc.m"
            {
#line 1119 "unify_proc.m"
              check_hlds__unify_proc__Call_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_31));
#line 1119 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_32));
#line 1119 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_29));
#line 1119 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1119 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1119 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_30));
#line 1119 "unify_proc.m"
            }
#line 1121 "unify_proc.m"
            {
#line 1121 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_5, &check_hlds__unify_proc__GoalInfo_34);
            }
#line 1122 "unify_proc.m"
            {
#line 1122 "unify_proc.m"
              check_hlds__unify_proc__Goal0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_35, 0) = ((MR_Box) (check_hlds__unify_proc__Call_33));
#line 1122 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_34));
#line 1122 "unify_proc.m"
            }
#line 1123 "unify_proc.m"
            {
#line 1123 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Res_2));
#line 1123 "unify_proc.m"
            }
#line 1123 "unify_proc.m"
            {
#line 1123 "unify_proc.m"
              check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_5, check_hlds__unify_proc__X_3, check_hlds__unify_proc__Y_4, check_hlds__unify_proc__V_46_46, check_hlds__unify_proc__Goal0_35, &check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_7, &check_hlds__unify_proc__STATE_VARIABLE_Info_47_47);
            }
#line 1111 "unify_proc.m"
          }
#line 1131 "unify_proc.m"
        {
#line 1131 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_29, check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__Context_5, check_hlds__unify_proc__Clause_6, check_hlds__unify_proc__STATE_VARIABLE_Info_47_47, check_hlds__unify_proc__STATE_VARIABLE_Info_8);
#line 1131 "unify_proc.m"
          return;
        }
#line 1108 "unify_proc.m"
      }
#line 1104 "unify_proc.m"
  }
#line 1099 "unify_proc.m"
}

#line 1089 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1089 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1089 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_16,
#line 1089 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_17)
#line 1089 "unify_proc.m"
{
#line 1094 "unify_proc.m"
  {
#line 1094 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1094 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_14;
#line 1094 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_15;
#line 1094 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18;
#line 1094 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19;
#line 1094 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_22_22;

#line 1095 "unify_proc.m"
    {
#line 1095 "unify_proc.m"
      check_hlds__unify_proc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1095 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1095 "unify_proc.m"
    }
#line 1095 "unify_proc.m"
    {
#line 1095 "unify_proc.m"
      check_hlds__unify_proc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_18_18, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1095 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_18_18, 1) = ((MR_Box) (check_hlds__unify_proc__V_19_19));
#line 1095 "unify_proc.m"
    }
#line 1095 "unify_proc.m"
    {
#line 1095 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1095 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__V_18_18));
#line 1095 "unify_proc.m"
    }
#line 1096 "unify_proc.m"
    {
#line 1096 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_solver_type", check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__Goal_15, check_hlds__unify_proc__STATE_VARIABLE_Info_0_16, &check_hlds__unify_proc__STATE_VARIABLE_Info_22_22);
    }
#line 1097 "unify_proc.m"
    {
#line 1097 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Goal_15, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_22_22, check_hlds__unify_proc__STATE_VARIABLE_Info_17);
#line 1097 "unify_proc.m"
      return;
    }
#line 1094 "unify_proc.m"
  }
#line 1089 "unify_proc.m"
}

#line 1080 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
#line 1080 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_7,
#line 1080 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_8,
#line 1080 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1080 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 1080 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1080 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15)
#line 1080 "unify_proc.m"
{
#line 1084 "unify_proc.m"
  {
#line 1084 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1084 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_12;
#line 1084 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_13;
#line 1084 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_16_16;
#line 1084 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_19_19;

#line 1085 "unify_proc.m"
    {
#line 1085 "unify_proc.m"
      check_hlds__unify_proc__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_16_16, 0) = ((MR_Box) (check_hlds__unify_proc__Y_8));
#line 1085 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1085 "unify_proc.m"
    }
#line 1085 "unify_proc.m"
    {
#line 1085 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 0) = ((MR_Box) (check_hlds__unify_proc__X_7));
#line 1085 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 1) = ((MR_Box) (check_hlds__unify_proc__V_16_16));
#line 1085 "unify_proc.m"
    }
#line 1086 "unify_proc.m"
    {
#line 1086 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_unify_solver_type", check_hlds__unify_proc__ArgVars_12, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, &check_hlds__unify_proc__STATE_VARIABLE_Info_19_19);
    }
#line 1087 "unify_proc.m"
    {
#line 1087 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_12, check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Clause_10, check_hlds__unify_proc__STATE_VARIABLE_Info_19_19, check_hlds__unify_proc__STATE_VARIABLE_Info_15);
#line 1087 "unify_proc.m"
      return;
    }
#line 1084 "unify_proc.m"
  }
#line 1080 "unify_proc.m"
}

#line 1033 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1033 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1033 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
#line 1033 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16)
#line 1033 "unify_proc.m"
{
#line 1037 "unify_proc.m"
  {
#line 1037 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_14;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_25;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_29;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_34;
#line 1037 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;

#line 2033 "unify_proc.m"
    {
#line 2033 "unify_proc.m"
      check_hlds__unify_proc__Builtin_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_34));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2034 "unify_proc.m"
    }
#line 2034 "unify_proc.m"
    {
#line 2034 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_35_35));
#line 2034 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
    }
#line 2039 "unify_proc.m"
    {
#line 2039 "unify_proc.m"
      check_hlds__unify_proc__V_32_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2039 "unify_proc.m"
    {
#line 2039 "unify_proc.m"
      check_hlds__unify_proc__SymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 0) = ((MR_Box) (check_hlds__unify_proc__V_32_32));
#line 2039 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 1) = ((MR_Box) ((MR_String) "="));
#line 2039 "unify_proc.m"
    }
#line 2038 "unify_proc.m"
    {
#line 2038 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_29));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2038 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__V_31_31));
#line 2038 "unify_proc.m"
    }
#line 1795 "unify_proc.m"
    {
#line 1795 "unify_proc.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_8, check_hlds__unify_proc__V_26_26, &check_hlds__unify_proc__Goal0_25);
    }
#line 1796 "unify_proc.m"
    {
#line 1796 "unify_proc.m"
      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Goal0_25, &check_hlds__unify_proc__Goal_14);
    }
#line 1040 "unify_proc.m"
    {
#line 1040 "unify_proc.m"
      check_hlds__unify_proc__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_20_20, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1040 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "unify_proc.m"
    }
#line 1040 "unify_proc.m"
    {
#line 1040 "unify_proc.m"
      check_hlds__unify_proc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1040 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 1) = ((MR_Box) (check_hlds__unify_proc__V_20_20));
#line 1040 "unify_proc.m"
    }
#line 1040 "unify_proc.m"
    {
#line 1040 "unify_proc.m"
      check_hlds__unify_proc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_17_17, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1040 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_17_17, 1) = ((MR_Box) (check_hlds__unify_proc__V_19_19));
#line 1040 "unify_proc.m"
    }
#line 1040 "unify_proc.m"
    {
#line 1040 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_17_17, check_hlds__unify_proc__Goal_14, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_0_15, check_hlds__unify_proc__STATE_VARIABLE_Info_16);
#line 1040 "unify_proc.m"
      return;
    }
#line 1037 "unify_proc.m"
  }
#line 1033 "unify_proc.m"
}

#line 1015 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1015 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1015 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_23,
#line 1015 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_24)
#line 1015 "unify_proc.m"
{
#line 1019 "unify_proc.m"
  {
#line 1019 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__IntType_14;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_15;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_16;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_17;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_18;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CompareGoal_19;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_20;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_21;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_22;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_27_27;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_30_30;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_34_34;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_39_39;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_40_40;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 1019 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_55;
#line 1019 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_56;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_64;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_65;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_66;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_67;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_78_78;
#line 1019 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_79_79;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_71_71;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_76_76;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_77_77;

#line 1020 "unify_proc.m"
    {
#line 1020 "unify_proc.m"
      check_hlds__unify_proc__IntType_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1852 "unify_proc.m"
    {
#line 1852 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_55);
    }
#line 1853 "unify_proc.m"
    {
#line 1853 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_55, &check_hlds__unify_proc__Name_56);
    }
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 2098 "unify_proc.m"
    {
#line 2098 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_56, &check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__VarSet0_64, &check_hlds__unify_proc__VarSet_66);
    }
#line 2099 "unify_proc.m"
    {
#line 2099 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__IntType_14, check_hlds__unify_proc__VarTypes0_65, &check_hlds__unify_proc__VarTypes_67);
    }
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 2101 "unify_proc.m"
    {
#line 2101 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_66));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_67));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2101 "unify_proc.m"
    }
#line 1022 "unify_proc.m"
    {
#line 1022 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__IntType_14, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_16, check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, &check_hlds__unify_proc__STATE_VARIABLE_Info_30_30);
    }
#line 1023 "unify_proc.m"
    {
#line 1023 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_9, check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastXGoal_17);
    }
#line 1024 "unify_proc.m"
    {
#line 1024 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_10, check_hlds__unify_proc__CastY_16, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastYGoal_18);
    }
#line 1025 "unify_proc.m"
    {
#line 1025 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_16));
#line 1025 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1025 "unify_proc.m"
    }
#line 1025 "unify_proc.m"
    {
#line 1025 "unify_proc.m"
      check_hlds__unify_proc__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_15));
#line 1025 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 1025 "unify_proc.m"
    }
#line 1025 "unify_proc.m"
    {
#line 1025 "unify_proc.m"
      check_hlds__unify_proc__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_34_34, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1025 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_34_34, 1) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 1025 "unify_proc.m"
    }
#line 1025 "unify_proc.m"
    {
#line 1025 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_int", check_hlds__unify_proc__V_34_34, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CompareGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
    }
#line 1028 "unify_proc.m"
    {
#line 1028 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_20);
    }
#line 1029 "unify_proc.m"
    {
#line 1029 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_20, &check_hlds__unify_proc__GoalInfo_21);
    }
#line 1030 "unify_proc.m"
    {
#line 1030 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_19));
#line 1030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "unify_proc.m"
    }
#line 1030 "unify_proc.m"
    {
#line 1030 "unify_proc.m"
      check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_18));
#line 1030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 1030 "unify_proc.m"
    }
#line 1030 "unify_proc.m"
    {
#line 1030 "unify_proc.m"
      check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_17));
#line 1030 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1030 "unify_proc.m"
    }
#line 1030 "unify_proc.m"
    {
#line 1030 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_39_39, check_hlds__unify_proc__GoalInfo_21, &check_hlds__unify_proc__Goal_22);
    }
#line 1031 "unify_proc.m"
    {
#line 1031 "unify_proc.m"
      check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1031 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1031 "unify_proc.m"
    }
#line 1031 "unify_proc.m"
    {
#line 1031 "unify_proc.m"
      check_hlds__unify_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1031 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1031 "unify_proc.m"
    }
#line 1031 "unify_proc.m"
    {
#line 1031 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1031 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_45_45));
#line 1031 "unify_proc.m"
    }
#line 1031 "unify_proc.m"
    {
#line 1031 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_43_43, check_hlds__unify_proc__Goal_22, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, check_hlds__unify_proc__STATE_VARIABLE_Info_24);
#line 1031 "unify_proc.m"
      return;
    }
#line 1019 "unify_proc.m"
  }
#line 1015 "unify_proc.m"
}

#line 994 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
#line 994 "unify_proc.m"
  MR_Word check_hlds__unify_proc__A_4,
#line 994 "unify_proc.m"
  MR_Word check_hlds__unify_proc__B_5,
#line 994 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Res_6)
#line 994 "unify_proc.m"
{
#line 997 "unify_proc.m"
  {
#line 997 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 997 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 997 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ArityA_7;
#line 997 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ArityB_8;
#line 997 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArityRes_9;
#line 997 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
#line 997 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_13_13;
#line 998 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
#line 998 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
#line 998 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
#line 998 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
#line 998 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 5)));
#line 999 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_21_21;
#line 999 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 999 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;
#line 999 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_24_24;
#line 999 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25;

#line 998 "unify_proc.m"
    {
#line 998 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_36_36, check_hlds__unify_proc__V_12_12, &check_hlds__unify_proc__ArityA_7);
    }
#line 999 "unify_proc.m"
    check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
#line 999 "unify_proc.m"
    check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
#line 999 "unify_proc.m"
    check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
#line 999 "unify_proc.m"
    check_hlds__unify_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
#line 999 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
#line 999 "unify_proc.m"
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 5)));
#line 999 "unify_proc.m"
    {
#line 999 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_36_36, check_hlds__unify_proc__V_13_13, &check_hlds__unify_proc__ArityB_8);
    }
#line 1000 "unify_proc.m"
    {
#line 1000 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__unify_proc__ArityRes_9, check_hlds__unify_proc__ArityA_7, check_hlds__unify_proc__ArityB_8);
    }
#line 1008 "unify_proc.m"
    if ((check_hlds__unify_proc__ArityRes_9 == (MR_Integer) 0))
#line 1002 "unify_proc.m"
      {
#line 1002 "unify_proc.m"
        MR_String check_hlds__unify_proc__NameA_10;
#line 1002 "unify_proc.m"
        MR_String check_hlds__unify_proc__NameB_11;
#line 1002 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
#line 1002 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_15_15;
#line 1005 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
#line 1005 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
#line 1005 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
#line 1005 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
#line 1005 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 5)));
#line 1006 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_31_31;
#line 1006 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_32_32;
#line 1006 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_33_33;
#line 1006 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__V_34_34;
#line 1006 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_35_35;

#line 1005 "unify_proc.m"
        {
#line 1005 "unify_proc.m"
          check_hlds__unify_proc__NameA_10 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unify_proc__V_14_14);
        }
#line 1006 "unify_proc.m"
        check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
#line 1006 "unify_proc.m"
        check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
#line 1006 "unify_proc.m"
        check_hlds__unify_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
#line 1006 "unify_proc.m"
        check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
#line 1006 "unify_proc.m"
        check_hlds__unify_proc__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
#line 1006 "unify_proc.m"
        check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 5)));
#line 1006 "unify_proc.m"
        {
#line 1006 "unify_proc.m"
          check_hlds__unify_proc__NameB_11 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unify_proc__V_15_15);
        }
#line 1007 "unify_proc.m"
        {
#line 1007 "unify_proc.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__unify_proc__Res_6, check_hlds__unify_proc__NameA_10, check_hlds__unify_proc__NameB_11);
#line 1007 "unify_proc.m"
          return;
        }
#line 1002 "unify_proc.m"
      }
#line 1008 "unify_proc.m"
    else
#line 1012 "unify_proc.m"
      *check_hlds__unify_proc__Res_6 = check_hlds__unify_proc__ArityRes_9;
#line 997 "unify_proc.m"
  }
#line 994 "unify_proc.m"
}

#line 906 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_11,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 906 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 906 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 906 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42)
#line 906 "unify_proc.m"
{
#line 911 "unify_proc.m"
  {
#line 911 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 911 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 914 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_19;
#line 914 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;

#line 914 "unify_proc.m"
    {
#line 914 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_19);
    }
#line 915 "unify_proc.m"
    {
#line 915 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_19);
    }
#line 915 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_43_43 == (MR_Integer) 0);
#line 918 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 917 "unify_proc.m"
      {
#line 917 "unify_proc.m"
        check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 917 "unify_proc.m"
        return;
      }
#line 918 "unify_proc.m"
    else
#line 924 "unify_proc.m"
      {
#line 924 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UserEqComp_20;

#line 919 "unify_proc.m"
        {
#line 919 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__TypeBody_11, &check_hlds__unify_proc__UserEqComp_20);
        }
#line 924 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 922 "unify_proc.m"
          {
#line 922 "unify_proc.m"
            check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(check_hlds__unify_proc__UserEqComp_20, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 922 "unify_proc.m"
            return;
          }
#line 924 "unify_proc.m"
        else
#line 956 "unify_proc.m"
        if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) == (MR_mktag((MR_Integer) 1))))
#line 926 "unify_proc.m"
          {
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__DuTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 3)));
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 1)));
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 2)));
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 4)));
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 5)));
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 926 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 7)));

#line 933 "unify_proc.m"
            if ((check_hlds__unify_proc__DuTypeKind_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 935 "unify_proc.m"
              {
#line 935 "unify_proc.m"
                check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 935 "unify_proc.m"
                return;
              }
#line 933 "unify_proc.m"
            else
#line 933 "unify_proc.m"
            if ((check_hlds__unify_proc__DuTypeKind_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 953 "unify_proc.m"
              {
#line 953 "unify_proc.m"
                check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 953 "unify_proc.m"
                return;
              }
#line 933 "unify_proc.m"
            else
#line 933 "unify_proc.m"
            if (((MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_24)) == (MR_mktag((MR_Integer) 2))))
#line 939 "unify_proc.m"
              {
#line 939 "unify_proc.m"
                MR_Word check_hlds__unify_proc__ArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 1)));
#line 939 "unify_proc.m"
                MR_Word check_hlds__unify_proc__IsDummyType_34;
#line 939 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 0)));
#line 939 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 2)));

#line 940 "unify_proc.m"
                {
#line 940 "unify_proc.m"
                  check_hlds__unify_proc__IsDummyType_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__ArgType_32);
                }
#line 946 "unify_proc.m"
                if ((check_hlds__unify_proc__IsDummyType_34 == (MR_Integer) 0))
#line 944 "unify_proc.m"
                  {
#line 944 "unify_proc.m"
                    check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 944 "unify_proc.m"
                    return;
                  }
#line 946 "unify_proc.m"
                else
#line 948 "unify_proc.m"
                  {
#line 948 "unify_proc.m"
                    check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 948 "unify_proc.m"
                    return;
                  }
#line 939 "unify_proc.m"
              }
#line 933 "unify_proc.m"
            else
#line 931 "unify_proc.m"
              {
#line 931 "unify_proc.m"
                check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 931 "unify_proc.m"
                return;
              }
#line 926 "unify_proc.m"
          }
#line 956 "unify_proc.m"
        else
#line 956 "unify_proc.m"
        if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) == (MR_mktag((MR_Integer) 2))))
#line 957 "unify_proc.m"
          {
#line 957 "unify_proc.m"
            MR_Word check_hlds__unify_proc__EqvType_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
#line 957 "unify_proc.m"
            MR_Word check_hlds__unify_proc__IsDummyType_60;

#line 958 "unify_proc.m"
            {
#line 958 "unify_proc.m"
              check_hlds__unify_proc__IsDummyType_60 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__EqvType_35);
            }
#line 964 "unify_proc.m"
            if ((check_hlds__unify_proc__IsDummyType_60 == (MR_Integer) 0))
#line 962 "unify_proc.m"
              {
#line 962 "unify_proc.m"
                check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 962 "unify_proc.m"
                return;
              }
#line 964 "unify_proc.m"
            else
#line 966 "unify_proc.m"
              {
#line 966 "unify_proc.m"
                check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__EqvType_35, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 966 "unify_proc.m"
                return;
              }
#line 957 "unify_proc.m"
          }
#line 956 "unify_proc.m"
        else
#line 956 "unify_proc.m"
        if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) == (MR_mktag((MR_Integer) 0))))
#line 970 "unify_proc.m"
          {
#line 970 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_51_51;

#line 971 "unify_proc.m"
            {
#line 971 "unify_proc.m"
              check_hlds__unify_proc__V_51_51 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
            }
#line 971 "unify_proc.m"
            {
#line 971 "unify_proc.m"
              check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 971 "unify_proc.m"
              return;
            }
#line 970 "unify_proc.m"
          }
#line 956 "unify_proc.m"
        else
#line 956 "unify_proc.m"
        if (((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 983 "unify_proc.m"
          {
#line 979 "unify_proc.m"
            {
#line 979 "unify_proc.m"
              check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_18);
            }
#line 983 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 980 "unify_proc.m"
              {
#line 980 "unify_proc.m"
                MR_Word check_hlds__unify_proc__TypeCategory_40;
#line 980 "unify_proc.m"
                MR_Word check_hlds__unify_proc__ArgVars_74;
#line 980 "unify_proc.m"
                MR_String check_hlds__unify_proc__Name_75;
#line 980 "unify_proc.m"
                MR_Word check_hlds__unify_proc__CompareGoal_79;
#line 980 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_80_80;
#line 980 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_81_81;
#line 980 "unify_proc.m"
                MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_34_90;

#line 980 "unify_proc.m"
                {
#line 980 "unify_proc.m"
                  check_hlds__unify_proc__TypeCategory_40 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__Type_10);
                }
#line 1047 "unify_proc.m"
                {
#line 1047 "unify_proc.m"
                  check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1047 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1047 "unify_proc.m"
                }
#line 1047 "unify_proc.m"
                {
#line 1047 "unify_proc.m"
                  check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1047 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 1047 "unify_proc.m"
                }
#line 1047 "unify_proc.m"
                {
#line 1047 "unify_proc.m"
                  check_hlds__unify_proc__ArgVars_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_74, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1047 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_74, 1) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 1047 "unify_proc.m"
                }
#line 1054 "unify_proc.m"
                if ((check_hlds__unify_proc__TypeCategory_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "unify_proc.m"
                  check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_pred";
#line 1054 "unify_proc.m"
                else
#line 1054 "unify_proc.m"
                if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeCategory_40)) == (MR_mktag((MR_Integer) 1))))
#line 1054 "unify_proc.m"
                  {
#line 1054 "unify_proc.m"
                    MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeCategory_40, (MR_Integer) 0)));

#line 1054 "unify_proc.m"
                    if ((check_hlds__unify_proc__V_92_92 == (MR_Integer) 2))
#line 1056 "unify_proc.m"
                      check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_character";
#line 1054 "unify_proc.m"
                    else
#line 1054 "unify_proc.m"
                    if ((check_hlds__unify_proc__V_92_92 == (MR_Integer) 1))
#line 1062 "unify_proc.m"
                      check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_float";
#line 1054 "unify_proc.m"
                    else
#line 1054 "unify_proc.m"
                    if ((check_hlds__unify_proc__V_92_92 == (MR_Integer) 0))
#line 1053 "unify_proc.m"
                      check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_int";
#line 1054 "unify_proc.m"
                    else
#line 1059 "unify_proc.m"
                      check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_string";
#line 1054 "unify_proc.m"
                  }
#line 1054 "unify_proc.m"
                else
#line 1074 "unify_proc.m"
                  {
#line 1075 "unify_proc.m"
                    {
#line 1075 "unify_proc.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
#line 1075 "unify_proc.m"
                      return;
                    }
#line 1074 "unify_proc.m"
                  }
#line 1077 "unify_proc.m"
                {
#line 1077 "unify_proc.m"
                  check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_75, check_hlds__unify_proc__ArgVars_74, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__CompareGoal_79, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, &check_hlds__unify_proc__STATE_VARIABLE_Info_34_90);
                }
#line 1078 "unify_proc.m"
                {
#line 1078 "unify_proc.m"
                  check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_74, check_hlds__unify_proc__CompareGoal_79, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_34_90, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 1078 "unify_proc.m"
                  return;
                }
#line 980 "unify_proc.m"
              }
#line 983 "unify_proc.m"
            else
#line 984 "unify_proc.m"
              {
#line 984 "unify_proc.m"
                {
#line 984 "unify_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/9", (MR_String) "trying to create compare proc for abstract type");
#line 984 "unify_proc.m"
                  return;
                }
#line 984 "unify_proc.m"
              }
#line 983 "unify_proc.m"
          }
#line 956 "unify_proc.m"
        else
#line 975 "unify_proc.m"
          {
#line 975 "unify_proc.m"
            check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
#line 975 "unify_proc.m"
            return;
          }
#line 924 "unify_proc.m"
      }
#line 911 "unify_proc.m"
  }
#line 906 "unify_proc.m"
}

#line 839 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 839 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 839 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_37,
#line 839 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_38)
#line 839 "unify_proc.m"
{
#line 843 "unify_proc.m"
  {
#line 843 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 843 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 3)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 2)));
#line 845 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17;

#line 845 "unify_proc.m"
    {
#line 845 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__V_17_17);
    }
#line 852 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 850 "unify_proc.m"
      {
#line 850 "unify_proc.m"
        {
#line 850 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for non-canonical type");
#line 850 "unify_proc.m"
          return;
        }
#line 850 "unify_proc.m"
      }
#line 852 "unify_proc.m"
    else
#line 881 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 1))))
#line 854 "unify_proc.m"
      {
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__DuTypeKind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 854 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

#line 863 "unify_proc.m"
        if ((check_hlds__unify_proc__DuTypeKind_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 868 "unify_proc.m"
          {
#line 869 "unify_proc.m"
            {
#line 869 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for dummy type");
#line 869 "unify_proc.m"
              return;
            }
#line 868 "unify_proc.m"
          }
#line 863 "unify_proc.m"
        else
#line 863 "unify_proc.m"
        if ((check_hlds__unify_proc__DuTypeKind_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 876 "unify_proc.m"
          {
#line 876 "unify_proc.m"
            MR_Word check_hlds__unify_proc__TypeCtor_31;

#line 877 "unify_proc.m"
            {
#line 877 "unify_proc.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_31);
            }
#line 878 "unify_proc.m"
            {
#line 878 "unify_proc.m"
              check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_31, check_hlds__unify_proc__Ctors_18, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Index_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, check_hlds__unify_proc__STATE_VARIABLE_Info_38);
#line 878 "unify_proc.m"
              return;
            }
#line 876 "unify_proc.m"
          }
#line 863 "unify_proc.m"
        else
#line 863 "unify_proc.m"
        if ((check_hlds__unify_proc__DuTypeKind_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "unify_proc.m"
          {
#line 861 "unify_proc.m"
            {
#line 861 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for enum type");
#line 861 "unify_proc.m"
              return;
            }
#line 860 "unify_proc.m"
          }
#line 863 "unify_proc.m"
        else
#line 863 "unify_proc.m"
        if (((MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_21)) == (MR_mktag((MR_Integer) 1))))
#line 864 "unify_proc.m"
          {
#line 865 "unify_proc.m"
            {
#line 865 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for foreign enum type");
#line 865 "unify_proc.m"
              return;
            }
#line 864 "unify_proc.m"
          }
#line 863 "unify_proc.m"
        else
#line 872 "unify_proc.m"
          {
#line 873 "unify_proc.m"
            {
#line 873 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for notag type");
#line 873 "unify_proc.m"
              return;
            }
#line 872 "unify_proc.m"
          }
#line 854 "unify_proc.m"
      }
#line 881 "unify_proc.m"
    else
#line 881 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 2))))
#line 882 "unify_proc.m"
      {
#line 889 "unify_proc.m"
        {
#line 889 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for eqv type");
#line 889 "unify_proc.m"
          return;
        }
#line 882 "unify_proc.m"
      }
#line 881 "unify_proc.m"
    else
#line 881 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 892 "unify_proc.m"
      {
#line 893 "unify_proc.m"
        {
#line 893 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a foreign type");
#line 893 "unify_proc.m"
          return;
        }
#line 892 "unify_proc.m"
      }
#line 881 "unify_proc.m"
    else
#line 881 "unify_proc.m"
    if (((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 900 "unify_proc.m"
      {
#line 901 "unify_proc.m"
        {
#line 901 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for abstract type");
#line 901 "unify_proc.m"
          return;
        }
#line 900 "unify_proc.m"
      }
#line 881 "unify_proc.m"
    else
#line 896 "unify_proc.m"
      {
#line 897 "unify_proc.m"
        {
#line 897 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a solver type");
#line 897 "unify_proc.m"
          return;
        }
#line 896 "unify_proc.m"
      }
#line 843 "unify_proc.m"
  }
#line 839 "unify_proc.m"
}

#line 808 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_8,
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 808 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 808 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 808 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
#line 808 "unify_proc.m"
{
#line 812 "unify_proc.m"
  {
#line 812 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_14;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_15;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_16;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_17;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyGoal_18;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_19;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_20;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_21;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_26_26;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_29_29;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_39_39;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 812 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_50;
#line 812 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_51;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_59;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_60;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_61;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_62;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_73_73;
#line 812 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_74_74;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_66_66;
#line 2096 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_67_67;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_71_71;
#line 2100 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;

#line 1852 "unify_proc.m"
    {
#line 1852 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_50);
    }
#line 1853 "unify_proc.m"
    {
#line 1853 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_50, &check_hlds__unify_proc__Name_51);
    }
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
    check_hlds__unify_proc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 2098 "unify_proc.m"
    {
#line 2098 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_51, &check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__VarSet0_59, &check_hlds__unify_proc__VarSet_61);
    }
#line 2099 "unify_proc.m"
    {
#line 2099 "unify_proc.m"
      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__EqvType_8, check_hlds__unify_proc__VarTypes0_60, &check_hlds__unify_proc__VarTypes_62);
    }
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 2100 "unify_proc.m"
    check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 2101 "unify_proc.m"
    {
#line 2101 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_61));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_62));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (check_hlds__unify_proc__V_73_73));
#line 2101 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
#line 2101 "unify_proc.m"
    }
#line 821 "unify_proc.m"
    {
#line 821 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_8, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_15, check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, &check_hlds__unify_proc__STATE_VARIABLE_Info_29_29);
    }
#line 822 "unify_proc.m"
    {
#line 822 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__X_9, check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastXGoal_16);
    }
#line 823 "unify_proc.m"
    {
#line 823 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__Y_10, check_hlds__unify_proc__CastY_15, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastYGoal_17);
    }
#line 824 "unify_proc.m"
    {
#line 824 "unify_proc.m"
      check_hlds__unify_proc__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 824 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_15));
#line 824 "unify_proc.m"
    }
#line 824 "unify_proc.m"
    {
#line 824 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__V_32_32, check_hlds__unify_proc__Context_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_18);
    }
#line 827 "unify_proc.m"
    {
#line 827 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_19);
    }
#line 828 "unify_proc.m"
    {
#line 828 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_19, &check_hlds__unify_proc__GoalInfo_20);
    }
#line 829 "unify_proc.m"
    {
#line 829 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_18));
#line 829 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 829 "unify_proc.m"
    }
#line 829 "unify_proc.m"
    {
#line 829 "unify_proc.m"
      check_hlds__unify_proc__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_17));
#line 829 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 829 "unify_proc.m"
    }
#line 829 "unify_proc.m"
    {
#line 829 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_16));
#line 829 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 829 "unify_proc.m"
    }
#line 829 "unify_proc.m"
    {
#line 829 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_35_35, check_hlds__unify_proc__GoalInfo_20, &check_hlds__unify_proc__Goal_21);
    }
#line 830 "unify_proc.m"
    {
#line 830 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 830 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 830 "unify_proc.m"
    }
#line 830 "unify_proc.m"
    {
#line 830 "unify_proc.m"
      check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 830 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 830 "unify_proc.m"
    }
#line 830 "unify_proc.m"
    {
#line 830 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_39_39, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_29_29, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
#line 830 "unify_proc.m"
      return;
    }
#line 812 "unify_proc.m"
  }
#line 808 "unify_proc.m"
}

#line 756 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UserEqCompare_1,
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_2,
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_3,
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_4,
#line 756 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_5,
#line 756 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 756 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
#line 756 "unify_proc.m"
{
#line 760 "unify_proc.m"
  {
#line 760 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 760 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__UserEqCompare_1)) == (MR_mktag((MR_Integer) 1))))
#line 760 "unify_proc.m"
      {
#line 762 "unify_proc.m"
        {
#line 762 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "trying to create unify proc for abstract noncanonical type");
#line 762 "unify_proc.m"
          return;
        }
#line 760 "unify_proc.m"
      }
#line 760 "unify_proc.m"
    else
#line 765 "unify_proc.m"
      {
#line 765 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeUnify_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 0)));
#line 765 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeCompare_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 1)));
#line 765 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_33;
#line 765 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_38;
#line 765 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
#line 765 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_67_67;
#line 765 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_68_68;
#line 765 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_70_70;

#line 779 "unify_proc.m"
        if ((check_hlds__unify_proc__MaybeUnify_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "unify_proc.m"
          if ((check_hlds__unify_proc__MaybeCompare_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "unify_proc.m"
            {
#line 802 "unify_proc.m"
              {
#line 802 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "MaybeCompare = no");
#line 802 "unify_proc.m"
                return;
              }
#line 801 "unify_proc.m"
            }
#line 800 "unify_proc.m"
          else
#line 782 "unify_proc.m"
            {
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ComparePredName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_27, (MR_Integer) 0)));
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ResultVar_35;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__CallGoal_36;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__UnifyGoal_37;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_44_44;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_46_46;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_47_47;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_48_48;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_52_52;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_56_56;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_58_58;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_59_59;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__PredId_72;
#line 782 "unify_proc.m"
              MR_Integer check_hlds__unify_proc__ModeId_73;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Call_74;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__GoalInfo_75;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_85_85;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__SymName_89;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_91_91;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_92_92;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Builtin_94;
#line 782 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_95_95;

#line 788 "unify_proc.m"
              {
#line 788 "unify_proc.m"
                check_hlds__unify_proc__V_44_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              }
#line 788 "unify_proc.m"
              {
#line 788 "unify_proc.m"
                check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_44_44, &check_hlds__unify_proc__ResultVar_35, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
              }
#line 789 "unify_proc.m"
              {
#line 789 "unify_proc.m"
                check_hlds__unify_proc__PredId_72 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              }
#line 790 "unify_proc.m"
              {
#line 790 "unify_proc.m"
                check_hlds__unify_proc__ModeId_73 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              }
#line 791 "unify_proc.m"
              {
#line 791 "unify_proc.m"
                check_hlds__unify_proc__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "unify_proc.m"
              }
#line 791 "unify_proc.m"
              {
#line 791 "unify_proc.m"
                check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_48_48));
#line 791 "unify_proc.m"
              }
#line 791 "unify_proc.m"
              {
#line 791 "unify_proc.m"
                check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__ResultVar_35));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_47_47));
#line 791 "unify_proc.m"
              }
#line 791 "unify_proc.m"
              {
#line 791 "unify_proc.m"
                check_hlds__unify_proc__Call_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_72));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_73));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 2) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 3) = ((MR_Box) ((MR_Integer) 2));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_34));
#line 791 "unify_proc.m"
              }
#line 793 "unify_proc.m"
              {
#line 793 "unify_proc.m"
                hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_75);
              }
#line 794 "unify_proc.m"
              {
#line 794 "unify_proc.m"
                check_hlds__unify_proc__CallGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_36, 0) = ((MR_Box) (check_hlds__unify_proc__Call_74));
#line 794 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_36, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_75));
#line 794 "unify_proc.m"
              }
#line 2033 "unify_proc.m"
              {
#line 2033 "unify_proc.m"
                check_hlds__unify_proc__Builtin_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 2034 "unify_proc.m"
              {
#line 2034 "unify_proc.m"
                check_hlds__unify_proc__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_95_95, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_94));
#line 2034 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_95_95, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2034 "unify_proc.m"
              }
#line 2034 "unify_proc.m"
              {
#line 2034 "unify_proc.m"
                check_hlds__unify_proc__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2034 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_91_91, 0) = ((MR_Box) (check_hlds__unify_proc__V_95_95));
#line 2034 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_91_91, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2034 "unify_proc.m"
              }
#line 2039 "unify_proc.m"
              {
#line 2039 "unify_proc.m"
                check_hlds__unify_proc__V_92_92 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 2039 "unify_proc.m"
              {
#line 2039 "unify_proc.m"
                check_hlds__unify_proc__SymName_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_89, 0) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
#line 2039 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_89, 1) = ((MR_Box) ((MR_String) "="));
#line 2039 "unify_proc.m"
              }
#line 2038 "unify_proc.m"
              {
#line 2038 "unify_proc.m"
                check_hlds__unify_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2038 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_89));
#line 2038 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2038 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 3) = ((MR_Box) (check_hlds__unify_proc__V_91_91));
#line 2038 "unify_proc.m"
              }
#line 2044 "unify_proc.m"
              {
#line 2044 "unify_proc.m"
                check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2044 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__V_85_85));
#line 2044 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2044 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2044 "unify_proc.m"
              }
#line 796 "unify_proc.m"
              {
#line 796 "unify_proc.m"
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__ResultVar_35, check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_37);
              }
#line 798 "unify_proc.m"
              {
#line 798 "unify_proc.m"
                check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_37));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 798 "unify_proc.m"
              }
#line 798 "unify_proc.m"
              {
#line 798 "unify_proc.m"
                check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__CallGoal_36));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 798 "unify_proc.m"
              }
#line 798 "unify_proc.m"
              {
#line 798 "unify_proc.m"
                check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) ((MR_Integer) 0));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 2) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 798 "unify_proc.m"
              }
#line 798 "unify_proc.m"
              {
#line 798 "unify_proc.m"
                check_hlds__unify_proc__Goal0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 0) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_75));
#line 798 "unify_proc.m"
              }
#line 782 "unify_proc.m"
            }
#line 779 "unify_proc.m"
        else
#line 768 "unify_proc.m"
          {
#line 768 "unify_proc.m"
            MR_Word check_hlds__unify_proc__UnifyPredName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeUnify_26, (MR_Integer) 0)));
#line 768 "unify_proc.m"
            MR_Word check_hlds__unify_proc__PredId_29;
#line 768 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__ModeId_30;
#line 768 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Call_31;
#line 768 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_32;
#line 768 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_61_61;
#line 768 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_62_62;

#line 773 "unify_proc.m"
            {
#line 773 "unify_proc.m"
              check_hlds__unify_proc__PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 774 "unify_proc.m"
            {
#line 774 "unify_proc.m"
              check_hlds__unify_proc__ModeId_30 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 775 "unify_proc.m"
            {
#line 775 "unify_proc.m"
              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "unify_proc.m"
            }
#line 775 "unify_proc.m"
            {
#line 775 "unify_proc.m"
              check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 1) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 775 "unify_proc.m"
            }
#line 775 "unify_proc.m"
            {
#line 775 "unify_proc.m"
              check_hlds__unify_proc__Call_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_29));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_30));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 2) = ((MR_Box) (check_hlds__unify_proc__V_61_61));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 3) = ((MR_Box) ((MR_Integer) 2));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 5) = ((MR_Box) (check_hlds__unify_proc__UnifyPredName_28));
#line 775 "unify_proc.m"
            }
#line 777 "unify_proc.m"
            {
#line 777 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_32);
            }
#line 778 "unify_proc.m"
            {
#line 778 "unify_proc.m"
              check_hlds__unify_proc__Goal0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 0) = ((MR_Box) (check_hlds__unify_proc__Call_31));
#line 778 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_32));
#line 778 "unify_proc.m"
            }
#line 768 "unify_proc.m"
            check_hlds__unify_proc__STATE_VARIABLE_Info_45_45 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 768 "unify_proc.m"
          }
#line 805 "unify_proc.m"
        {
#line 805 "unify_proc.m"
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_4, check_hlds__unify_proc__X_2, check_hlds__unify_proc__Y_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_33, &check_hlds__unify_proc__Goal_38, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_67_67);
        }
#line 806 "unify_proc.m"
        {
#line 806 "unify_proc.m"
          check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 806 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "unify_proc.m"
        }
#line 806 "unify_proc.m"
        {
#line 806 "unify_proc.m"
          check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 806 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
#line 806 "unify_proc.m"
        }
#line 806 "unify_proc.m"
        {
#line 806 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_68_68, check_hlds__unify_proc__Goal_38, check_hlds__unify_proc__Context_4, check_hlds__unify_proc__Clause_5, check_hlds__unify_proc__STATE_VARIABLE_Info_67_67, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
#line 806 "unify_proc.m"
          return;
        }
#line 765 "unify_proc.m"
      }
#line 760 "unify_proc.m"
  }
#line 756 "unify_proc.m"
}

#line 718 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorCat_8,
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 718 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 718 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 718 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21)
#line 718 "unify_proc.m"
{
#line 722 "unify_proc.m"
  {
#line 722 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 722 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_14;
#line 722 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_15;
#line 722 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyGoal_19;
#line 722 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 722 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;

#line 723 "unify_proc.m"
    {
#line 723 "unify_proc.m"
      check_hlds__unify_proc__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_22_22, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 723 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 723 "unify_proc.m"
    }
#line 723 "unify_proc.m"
    {
#line 723 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 723 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__V_22_22));
#line 723 "unify_proc.m"
    }
#line 730 "unify_proc.m"
    if ((check_hlds__unify_proc__CtorCat_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "unify_proc.m"
      check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_pred";
#line 730 "unify_proc.m"
    else
#line 730 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__CtorCat_8)) == (MR_mktag((MR_Integer) 1))))
#line 730 "unify_proc.m"
      {
#line 730 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__CtorCat_8, (MR_Integer) 0)));

#line 730 "unify_proc.m"
        if ((check_hlds__unify_proc__V_33_33 == (MR_Integer) 2))
#line 732 "unify_proc.m"
          check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_character";
#line 730 "unify_proc.m"
        else
#line 730 "unify_proc.m"
        if ((check_hlds__unify_proc__V_33_33 == (MR_Integer) 1))
#line 738 "unify_proc.m"
          check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_float";
#line 730 "unify_proc.m"
        else
#line 730 "unify_proc.m"
        if ((check_hlds__unify_proc__V_33_33 == (MR_Integer) 0))
#line 729 "unify_proc.m"
          check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_int";
#line 730 "unify_proc.m"
        else
#line 735 "unify_proc.m"
          check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_string";
#line 730 "unify_proc.m"
      }
#line 730 "unify_proc.m"
    else
#line 750 "unify_proc.m"
      {
#line 751 "unify_proc.m"
        {
#line 751 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
#line 751 "unify_proc.m"
          return;
        }
#line 750 "unify_proc.m"
      }
#line 753 "unify_proc.m"
    {
#line 753 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_15, check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
    }
#line 754 "unify_proc.m"
    {
#line 754 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_21);
#line 754 "unify_proc.m"
      return;
    }
#line 722 "unify_proc.m"
  }
#line 718 "unify_proc.m"
}

#line 632 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 632 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 632 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 632 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
#line 632 "unify_proc.m"
{
#line 636 "unify_proc.m"
  {
#line 636 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 636 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 636 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_17;
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 2108 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 640 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_42_42;

#line 638 "unify_proc.m"
    {
#line 638 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_17);
    }
#line 640 "unify_proc.m"
    {
#line 640 "unify_proc.m"
      check_hlds__unify_proc__V_42_42 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_17);
    }
#line 640 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_42_42 == (MR_Integer) 0);
#line 644 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 642 "unify_proc.m"
      {
#line 642 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_18;
#line 642 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_43_43;
#line 642 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_45_45;

#line 642 "unify_proc.m"
        {
#line 642 "unify_proc.m"
          check_hlds__unify_proc__Goal_18 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
        }
#line 643 "unify_proc.m"
        {
#line 643 "unify_proc.m"
          check_hlds__unify_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 643 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "unify_proc.m"
        }
#line 643 "unify_proc.m"
        {
#line 643 "unify_proc.m"
          check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 643 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_45_45));
#line 643 "unify_proc.m"
        }
#line 643 "unify_proc.m"
        {
#line 643 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_43_43, check_hlds__unify_proc__Goal_18, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 643 "unify_proc.m"
          return;
        }
#line 642 "unify_proc.m"
      }
#line 644 "unify_proc.m"
    else
#line 650 "unify_proc.m"
      {
#line 650 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UserEqComp_19;

#line 645 "unify_proc.m"
        {
#line 645 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__UserEqComp_19);
        }
#line 650 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 648 "unify_proc.m"
          {
#line 648 "unify_proc.m"
            check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(check_hlds__unify_proc__UserEqComp_19, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 648 "unify_proc.m"
            return;
          }
#line 650 "unify_proc.m"
        else
#line 681 "unify_proc.m"
        if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 1))))
#line 652 "unify_proc.m"
          {
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__DuTypeKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 652 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

#line 659 "unify_proc.m"
            if ((check_hlds__unify_proc__DuTypeKind_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 660 "unify_proc.m"
              {
#line 660 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_66_66;
#line 660 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_68_68;
#line 660 "unify_proc.m"
                MR_Word check_hlds__unify_proc__Goal_77;

#line 661 "unify_proc.m"
                {
#line 661 "unify_proc.m"
                  check_hlds__unify_proc__Goal_77 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                }
#line 662 "unify_proc.m"
                {
#line 662 "unify_proc.m"
                  check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 662 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "unify_proc.m"
                }
#line 662 "unify_proc.m"
                {
#line 662 "unify_proc.m"
                  check_hlds__unify_proc__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 662 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
#line 662 "unify_proc.m"
                }
#line 662 "unify_proc.m"
                {
#line 662 "unify_proc.m"
                  check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_66_66, check_hlds__unify_proc__Goal_77, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 662 "unify_proc.m"
                  return;
                }
#line 660 "unify_proc.m"
              }
#line 659 "unify_proc.m"
            else
#line 659 "unify_proc.m"
            if ((check_hlds__unify_proc__DuTypeKind_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 678 "unify_proc.m"
              {
#line 678 "unify_proc.m"
                check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 678 "unify_proc.m"
                return;
              }
#line 659 "unify_proc.m"
            else
#line 659 "unify_proc.m"
            if (((MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_23)) == (MR_mktag((MR_Integer) 2))))
#line 664 "unify_proc.m"
              {
#line 664 "unify_proc.m"
                MR_Word check_hlds__unify_proc__ArgType_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 1)));
#line 664 "unify_proc.m"
                MR_Word check_hlds__unify_proc__IsDummyType_33;
#line 664 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 0)));
#line 664 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 2)));

#line 665 "unify_proc.m"
                {
#line 665 "unify_proc.m"
                  check_hlds__unify_proc__IsDummyType_33 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__ArgType_31);
                }
#line 671 "unify_proc.m"
                if ((check_hlds__unify_proc__IsDummyType_33 == (MR_Integer) 0))
#line 667 "unify_proc.m"
                  {
#line 667 "unify_proc.m"
                    MR_Word check_hlds__unify_proc__V_62_62;
#line 667 "unify_proc.m"
                    MR_Word check_hlds__unify_proc__V_64_64;
#line 667 "unify_proc.m"
                    MR_Word check_hlds__unify_proc__Goal_78;

#line 669 "unify_proc.m"
                    {
#line 669 "unify_proc.m"
                      check_hlds__unify_proc__Goal_78 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                    }
#line 670 "unify_proc.m"
                    {
#line 670 "unify_proc.m"
                      check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 670 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "unify_proc.m"
                    }
#line 670 "unify_proc.m"
                    {
#line 670 "unify_proc.m"
                      check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 670 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 670 "unify_proc.m"
                    }
#line 670 "unify_proc.m"
                    {
#line 670 "unify_proc.m"
                      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_62_62, check_hlds__unify_proc__Goal_78, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 670 "unify_proc.m"
                      return;
                    }
#line 667 "unify_proc.m"
                  }
#line 671 "unify_proc.m"
                else
#line 673 "unify_proc.m"
                  {
#line 673 "unify_proc.m"
                    check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 673 "unify_proc.m"
                    return;
                  }
#line 664 "unify_proc.m"
              }
#line 659 "unify_proc.m"
            else
#line 656 "unify_proc.m"
              {
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_72_72;
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_74_74;
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__Goal_76;

#line 657 "unify_proc.m"
                {
#line 657 "unify_proc.m"
                  hlds__make_goal__make_simple_test_5_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_76);
                }
#line 658 "unify_proc.m"
                {
#line 658 "unify_proc.m"
                  check_hlds__unify_proc__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 658 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "unify_proc.m"
                }
#line 658 "unify_proc.m"
                {
#line 658 "unify_proc.m"
                  check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 658 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
#line 658 "unify_proc.m"
                }
#line 658 "unify_proc.m"
                {
#line 658 "unify_proc.m"
                  check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Goal_76, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 658 "unify_proc.m"
                  return;
                }
#line 656 "unify_proc.m"
              }
#line 652 "unify_proc.m"
          }
#line 681 "unify_proc.m"
        else
#line 681 "unify_proc.m"
        if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 2))))
#line 682 "unify_proc.m"
          {
#line 682 "unify_proc.m"
            MR_Word check_hlds__unify_proc__EqvType_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 682 "unify_proc.m"
            MR_Word check_hlds__unify_proc__IsDummyType_86;

#line 683 "unify_proc.m"
            {
#line 683 "unify_proc.m"
              check_hlds__unify_proc__IsDummyType_86 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__EqvType_34);
            }
#line 689 "unify_proc.m"
            if ((check_hlds__unify_proc__IsDummyType_86 == (MR_Integer) 0))
#line 685 "unify_proc.m"
              {
#line 685 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_56_56;
#line 685 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_58_58;
#line 685 "unify_proc.m"
                MR_Word check_hlds__unify_proc__Goal_83;

#line 687 "unify_proc.m"
                {
#line 687 "unify_proc.m"
                  check_hlds__unify_proc__Goal_83 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                }
#line 688 "unify_proc.m"
                {
#line 688 "unify_proc.m"
                  check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 688 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "unify_proc.m"
                }
#line 688 "unify_proc.m"
                {
#line 688 "unify_proc.m"
                  check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 688 "unify_proc.m"
                  MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 688 "unify_proc.m"
                }
#line 688 "unify_proc.m"
                {
#line 688 "unify_proc.m"
                  check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_56_56, check_hlds__unify_proc__Goal_83, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 688 "unify_proc.m"
                  return;
                }
#line 685 "unify_proc.m"
              }
#line 689 "unify_proc.m"
            else
#line 691 "unify_proc.m"
              {
#line 691 "unify_proc.m"
                check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__EqvType_34, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 691 "unify_proc.m"
                return;
              }
#line 682 "unify_proc.m"
          }
#line 681 "unify_proc.m"
        else
#line 681 "unify_proc.m"
        if (((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 0))))
#line 699 "unify_proc.m"
          {
#line 699 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_52_52;

#line 703 "unify_proc.m"
            {
#line 703 "unify_proc.m"
              check_hlds__unify_proc__V_52_52 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
            }
#line 703 "unify_proc.m"
            {
#line 703 "unify_proc.m"
              check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 703 "unify_proc.m"
              return;
            }
#line 699 "unify_proc.m"
          }
#line 681 "unify_proc.m"
        else
#line 681 "unify_proc.m"
        if (((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 711 "unify_proc.m"
          {
#line 707 "unify_proc.m"
            {
#line 707 "unify_proc.m"
              check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_16);
            }
#line 711 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 708 "unify_proc.m"
              {
#line 708 "unify_proc.m"
                MR_Word check_hlds__unify_proc__TypeCategory_39;

#line 708 "unify_proc.m"
                {
#line 708 "unify_proc.m"
                  check_hlds__unify_proc__TypeCategory_39 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__Type_9);
                }
#line 709 "unify_proc.m"
                {
#line 709 "unify_proc.m"
                  check_hlds__unify_proc__generate_builtin_unify_7_p_0(check_hlds__unify_proc__TypeCategory_39, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 709 "unify_proc.m"
                  return;
                }
#line 708 "unify_proc.m"
              }
#line 711 "unify_proc.m"
            else
#line 712 "unify_proc.m"
              {
#line 712 "unify_proc.m"
                {
#line 712 "unify_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/8", (MR_String) "trying to create unify proc for abstract type");
#line 712 "unify_proc.m"
                  return;
                }
#line 712 "unify_proc.m"
              }
#line 711 "unify_proc.m"
          }
#line 681 "unify_proc.m"
        else
#line 696 "unify_proc.m"
          {
#line 696 "unify_proc.m"
            check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
#line 696 "unify_proc.m"
            return;
          }
#line 650 "unify_proc.m"
      }
#line 636 "unify_proc.m"
  }
#line 632 "unify_proc.m"
}

#line 483 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
#line 483 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 483 "unify_proc.m"
{
#line 483 "unify_proc.m"
  {
#line 483 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 483 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__483__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
    }
#line 483 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 483 "unify_proc.m"
  }
#line 483 "unify_proc.m"
}

#line 450 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialId_12,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Item_13,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TVarSet_14,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_15,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_16,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_17,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PredStatus_19,
#line 450 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_20,
#line 450 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26,
#line 450 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27)
#line 450 "unify_proc.m"
{
#line 456 "unify_proc.m"
  {
#line 456 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 456 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeInfo_38_38;
#line 456 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtorInfo_39_39;
#line 456 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ErrorProcs_24;
#line 456 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo_25;
#line 456 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29;
#line 456 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30;
#line 456 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 456 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36;

#line 469 "unify_proc.m"
    {
#line 469 "unify_proc.m"
      check_hlds__unify_proc__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__SpecialId_12));
#line 469 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_16));
#line 469 "unify_proc.m"
    }
#line 12287 "check_hlds.unify_proc.c"
    check_hlds__unify_proc__TypeInfo_38_38 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
#line 12289 "check_hlds.unify_proc.c"
    check_hlds__unify_proc__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 12291 "check_hlds.unify_proc.c"
    if ((check_hlds__unify_proc__Item_13 == (MR_Integer) 1))
#line 12293 "check_hlds.unify_proc.c"
      {
#line 12295 "check_hlds.unify_proc.c"
        MR_Word check_hlds__unify_proc__SpecialPredMap_22;
#line 12297 "check_hlds.unify_proc.c"
        MR_Word check_hlds__unify_proc__PredInfo0_23;
#line 469 "unify_proc.m"
        MR_Box check_hlds__unify_proc__conv0_PredId_20;

#line 460 "unify_proc.m"
        {
#line 460 "unify_proc.m"
          hlds__make_hlds__add_special_pred_for_real_9_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__TypeBody_17, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__PredStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29);
        }
#line 468 "unify_proc.m"
        {
#line 468 "unify_proc.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__SpecialPredMap_22);
        }
#line 469 "unify_proc.m"
        {
#line 469 "unify_proc.m"
          mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeInfo_38_38, check_hlds__unify_proc__TypeCtorInfo_39_39, check_hlds__unify_proc__SpecialPredMap_22, ((MR_Box) (check_hlds__unify_proc__V_30_30)), &check_hlds__unify_proc__conv0_PredId_20);
        }
#line 469 "unify_proc.m"
        *check_hlds__unify_proc__PredId_20 = ((MR_Word) check_hlds__unify_proc__conv0_PredId_20);
#line 470 "unify_proc.m"
        {
#line 470 "unify_proc.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo0_23);
        }
#line 476 "unify_proc.m"
        {
#line 476 "unify_proc.m"
          check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__ErrorProcs_24, check_hlds__unify_proc__PredInfo0_23, &check_hlds__unify_proc__PredInfo_25);
        }
#line 12329 "check_hlds.unify_proc.c"
      }
#line 12331 "check_hlds.unify_proc.c"
    else
#line 12333 "check_hlds.unify_proc.c"
      {
#line 12335 "check_hlds.unify_proc.c"
        MR_Word check_hlds__unify_proc__SpecialPredMap_41;
#line 12337 "check_hlds.unify_proc.c"
        MR_Word check_hlds__unify_proc__PredInfo0_42;
#line 469 "unify_proc.m"
        MR_Box check_hlds__unify_proc__conv1_PredId_20;

#line 464 "unify_proc.m"
        {
#line 464 "unify_proc.m"
          hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__PredStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29);
        }
#line 468 "unify_proc.m"
        {
#line 468 "unify_proc.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__SpecialPredMap_41);
        }
#line 469 "unify_proc.m"
        {
#line 469 "unify_proc.m"
          mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeInfo_38_38, check_hlds__unify_proc__TypeCtorInfo_39_39, check_hlds__unify_proc__SpecialPredMap_41, ((MR_Box) (check_hlds__unify_proc__V_30_30)), &check_hlds__unify_proc__conv1_PredId_20);
        }
#line 469 "unify_proc.m"
        *check_hlds__unify_proc__PredId_20 = ((MR_Word) check_hlds__unify_proc__conv1_PredId_20);
#line 470 "unify_proc.m"
        {
#line 470 "unify_proc.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo0_42);
        }
#line 480 "unify_proc.m"
        {
#line 480 "unify_proc.m"
          check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__ErrorProcs_24, check_hlds__unify_proc__PredInfo0_42, &check_hlds__unify_proc__PredInfo_25);
        }
#line 12369 "check_hlds.unify_proc.c"
      }
#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1));
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_24));
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "unify_proc.m"
    }
#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_31_31, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__PredInfo_25, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36);
    }
#line 493 "unify_proc.m"
    {
#line 493 "unify_proc.m"
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_36, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27);
#line 493 "unify_proc.m"
      return;
    }
#line 456 "unify_proc.m"
  }
#line 450 "unify_proc.m"
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
#line 520 "unify_proc.m"
  {
#line 520 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_13;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Args_17;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Clause_20;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_23;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types_24;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarNameMap_25;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVec_26;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ClausesRep_27;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_28;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_30_30;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_33_33;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_54_54;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_59_59;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_62_62;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_76;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_77;
#line 520 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_78;
#line 521 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Modes_14;
#line 521 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Det_15;
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_82_82;
#line 2103 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_83_83;

#line 521 "unify_proc.m"
    {
#line 521 "unify_proc.m"
      hlds__special_pred__special_pred_interface_5_p_0(check_hlds__unify_proc__SpecialPredId_7, check_hlds__unify_proc__Type_8, &check_hlds__unify_proc__ArgTypes_13, &check_hlds__unify_proc___Modes_14, &check_hlds__unify_proc___Det_15);
    }
#line 2082 "unify_proc.m"
    {
#line 2082 "unify_proc.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__VarSet_76);
    }
#line 2083 "unify_proc.m"
    {
#line 2083 "unify_proc.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&check_hlds__unify_proc__VarTypes_77);
    }
#line 2084 "unify_proc.m"
    {
#line 2084 "unify_proc.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_78);
    }
#line 2085 "unify_proc.m"
    {
#line 2085 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2085 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_76));
#line 2085 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_77));
#line 2085 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_78));
#line 2085 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (check_hlds__unify_proc__ModuleInfo_11));
#line 2085 "unify_proc.m"
    }
#line 524 "unify_proc.m"
    {
#line 524 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__ArgTypes_13, (MR_String) "HeadVar__", (MR_Integer) 1, &check_hlds__unify_proc__Args_17, check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_33_33);
    }
#line 534 "unify_proc.m"
    if ((check_hlds__unify_proc__SpecialPredId_7 == (MR_Integer) 2))
#line 547 "unify_proc.m"
      {
#line 547 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Res_22;
#line 547 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_65;
#line 547 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_66;
#line 544 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 544 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 544 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_41_41;

#line 544 "unify_proc.m"
        check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 544 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 544 "unify_proc.m"
          {
#line 544 "unify_proc.m"
            check_hlds__unify_proc__Res_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 544 "unify_proc.m"
            check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 544 "unify_proc.m"
            check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 544 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 544 "unify_proc.m"
              {
#line 544 "unify_proc.m"
                check_hlds__unify_proc__X_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, (MR_Integer) 0)));
#line 544 "unify_proc.m"
                check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, (MR_Integer) 1)));
#line 544 "unify_proc.m"
                check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 544 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 544 "unify_proc.m"
                  {
#line 544 "unify_proc.m"
                    check_hlds__unify_proc__Y_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, (MR_Integer) 0)));
#line 544 "unify_proc.m"
                    check_hlds__unify_proc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, (MR_Integer) 1)));
#line 544 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "unify_proc.m"
                  }
#line 544 "unify_proc.m"
              }
#line 544 "unify_proc.m"
          }
#line 547 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 545 "unify_proc.m"
          {
#line 545 "unify_proc.m"
            check_hlds__unify_proc__generate_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__Res_22, check_hlds__unify_proc__X_65, check_hlds__unify_proc__Y_66, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
          }
#line 547 "unify_proc.m"
        else
#line 548 "unify_proc.m"
          {
#line 548 "unify_proc.m"
            {
#line 548 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad compare args");
#line 548 "unify_proc.m"
              return;
            }
#line 548 "unify_proc.m"
          }
#line 547 "unify_proc.m"
      }
#line 534 "unify_proc.m"
    else
#line 534 "unify_proc.m"
    if ((check_hlds__unify_proc__SpecialPredId_7 == (MR_Integer) 1))
#line 539 "unify_proc.m"
      {
#line 539 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Index_21;
#line 539 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_63;
#line 536 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_46_46;
#line 536 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_47_47;

#line 536 "unify_proc.m"
        check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 536 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 536 "unify_proc.m"
          {
#line 536 "unify_proc.m"
            check_hlds__unify_proc__X_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 536 "unify_proc.m"
            check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 536 "unify_proc.m"
            check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 536 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 536 "unify_proc.m"
              {
#line 536 "unify_proc.m"
                check_hlds__unify_proc__Index_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, (MR_Integer) 0)));
#line 536 "unify_proc.m"
                check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, (MR_Integer) 1)));
#line 536 "unify_proc.m"
                check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "unify_proc.m"
              }
#line 536 "unify_proc.m"
          }
#line 539 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 537 "unify_proc.m"
          {
#line 537 "unify_proc.m"
            check_hlds__unify_proc__generate_index_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_63, check_hlds__unify_proc__Index_21, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
          }
#line 539 "unify_proc.m"
        else
#line 540 "unify_proc.m"
          {
#line 540 "unify_proc.m"
            {
#line 540 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad index args");
#line 540 "unify_proc.m"
              return;
            }
#line 540 "unify_proc.m"
          }
#line 539 "unify_proc.m"
      }
#line 534 "unify_proc.m"
    else
#line 534 "unify_proc.m"
    if ((check_hlds__unify_proc__SpecialPredId_7 == (MR_Integer) 3))
#line 555 "unify_proc.m"
      {
#line 555 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_69;
#line 552 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_34_34;

#line 552 "unify_proc.m"
        check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 552 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 552 "unify_proc.m"
          {
#line 552 "unify_proc.m"
            check_hlds__unify_proc__X_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 552 "unify_proc.m"
            check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 552 "unify_proc.m"
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "unify_proc.m"
          }
#line 555 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 553 "unify_proc.m"
          {
#line 553 "unify_proc.m"
            check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_69, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
          }
#line 555 "unify_proc.m"
        else
#line 556 "unify_proc.m"
          {
#line 556 "unify_proc.m"
            {
#line 556 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad init args");
#line 556 "unify_proc.m"
              return;
            }
#line 556 "unify_proc.m"
          }
#line 555 "unify_proc.m"
      }
#line 534 "unify_proc.m"
    else
#line 531 "unify_proc.m"
      {
#line 531 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_18;
#line 531 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_19;
#line 528 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_52_52;
#line 528 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;

#line 528 "unify_proc.m"
        check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 528 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 528 "unify_proc.m"
          {
#line 528 "unify_proc.m"
            check_hlds__unify_proc__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 528 "unify_proc.m"
            check_hlds__unify_proc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 528 "unify_proc.m"
            check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 528 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 528 "unify_proc.m"
              {
#line 528 "unify_proc.m"
                check_hlds__unify_proc__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, (MR_Integer) 0)));
#line 528 "unify_proc.m"
                check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, (MR_Integer) 1)));
#line 528 "unify_proc.m"
                check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "unify_proc.m"
              }
#line 528 "unify_proc.m"
          }
#line 531 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 529 "unify_proc.m"
          {
#line 529 "unify_proc.m"
            check_hlds__unify_proc__generate_unify_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_18, check_hlds__unify_proc__Y_19, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
          }
#line 531 "unify_proc.m"
        else
#line 532 "unify_proc.m"
          {
#line 532 "unify_proc.m"
            {
#line 532 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad unify args");
#line 532 "unify_proc.m"
              return;
            }
#line 532 "unify_proc.m"
          }
#line 531 "unify_proc.m"
      }
#line 2103 "unify_proc.m"
    check_hlds__unify_proc__VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 0)));
#line 2103 "unify_proc.m"
    check_hlds__unify_proc__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 1)));
#line 2103 "unify_proc.m"
    check_hlds__unify_proc__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 2)));
#line 2103 "unify_proc.m"
    check_hlds__unify_proc__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 3)));
#line 561 "unify_proc.m"
    {
#line 561 "unify_proc.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &check_hlds__unify_proc__TVarNameMap_25);
    }
#line 562 "unify_proc.m"
    {
#line 562 "unify_proc.m"
      check_hlds__unify_proc__ArgVec_26 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[1], (MR_Integer) 0, check_hlds__unify_proc__Args_17);
    }
#line 563 "unify_proc.m"
    {
#line 563 "unify_proc.m"
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__Clause_20));
#line 563 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "unify_proc.m"
    }
#line 563 "unify_proc.m"
    {
#line 563 "unify_proc.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__unify_proc__V_59_59, &check_hlds__unify_proc__ClausesRep_27);
    }
#line 564 "unify_proc.m"
    {
#line 564 "unify_proc.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_28);
    }
#line 567 "unify_proc.m"
    {
#line 567 "unify_proc.m"
      check_hlds__unify_proc__V_62_62 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 566 "unify_proc.m"
    {
#line 566 "unify_proc.m"
      MR_Word base;
#line 566 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 566 "unify_proc.m"
      *check_hlds__unify_proc__ClauseInfo_12 = base;
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_23));
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Types_24));
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__TVarNameMap_25));
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Types_24));
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__unify_proc__ArgVec_26));
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__unify_proc__ClausesRep_27));
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_28));
#line 566 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
#line 566 "unify_proc.m"
    }
#line 520 "unify_proc.m"
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
#line 213 "unify_proc.m"
  {
#line 213 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 213 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Num1_11;
#line 228 "unify_proc.m"
    MR_Word check_hlds__unify_proc__XInitial_20;
#line 228 "unify_proc.m"
    MR_Word check_hlds__unify_proc__YInitial_21;
#line 228 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UniMode_8, (MR_Integer) 0)));
#line 229 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Final_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UniMode_8, (MR_Integer) 1)));

#line 229 "unify_proc.m"
    check_hlds__unify_proc__XInitial_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_25_25, (MR_Integer) 0)));
#line 229 "unify_proc.m"
    check_hlds__unify_proc__YInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_25_25, (MR_Integer) 1)));
#line 231 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Det_9 == (MR_Integer) 1);
#line 231 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 231 "unify_proc.m"
      {
#line 232 "unify_proc.m"
        {
#line 232 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__ModuleInfo_6, check_hlds__unify_proc__XInitial_20);
        }
#line 231 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 233 "unify_proc.m"
          {
#line 233 "unify_proc.m"
            check_hlds__unify_proc__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__ModuleInfo_6, check_hlds__unify_proc__YInitial_21);
          }
#line 231 "unify_proc.m"
      }
#line 236 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 235 "unify_proc.m"
      {
#line 235 "unify_proc.m"
        {
#line 235 "unify_proc.m"
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
        }
#line 235 "unify_proc.m"
        check_hlds__unify_proc__succeeded = MR_TRUE;
#line 235 "unify_proc.m"
      }
#line 236 "unify_proc.m"
    else
#line 240 "unify_proc.m"
      {
#line 237 "unify_proc.m"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__XInitial_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 240 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 239 "unify_proc.m"
          {
#line 239 "unify_proc.m"
            {
#line 239 "unify_proc.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
            }
#line 239 "unify_proc.m"
            check_hlds__unify_proc__succeeded = MR_TRUE;
#line 239 "unify_proc.m"
          }
#line 240 "unify_proc.m"
        else
#line 244 "unify_proc.m"
          {
#line 241 "unify_proc.m"
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__YInitial_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 244 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 243 "unify_proc.m"
              {
#line 243 "unify_proc.m"
                {
#line 243 "unify_proc.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
                }
#line 243 "unify_proc.m"
                check_hlds__unify_proc__succeeded = MR_TRUE;
#line 243 "unify_proc.m"
              }
#line 244 "unify_proc.m"
            else
#line 245 "unify_proc.m"
              {
#line 245 "unify_proc.m"
                MR_Word check_hlds__unify_proc__Requests_23;
#line 245 "unify_proc.m"
                MR_Word check_hlds__unify_proc__UnifyReqMap_24;
#line 245 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_26_26;
#line 203 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_30_30;
#line 247 "unify_proc.m"
                MR_Box check_hlds__unify_proc__conv0_Num1_11;

#line 245 "unify_proc.m"
                {
#line 245 "unify_proc.m"
                  hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__ModuleInfo_6, &check_hlds__unify_proc__Requests_23);
                }
#line 203 "unify_proc.m"
                check_hlds__unify_proc__UnifyReqMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_23, (MR_Integer) 0)));
#line 203 "unify_proc.m"
                check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_23, (MR_Integer) 1)));
#line 247 "unify_proc.m"
                {
#line 247 "unify_proc.m"
                  check_hlds__unify_proc__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "unify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_7));
#line 247 "unify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__UniMode_8));
#line 247 "unify_proc.m"
                }
#line 247 "unify_proc.m"
                {
#line 247 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__unify_proc__UnifyReqMap_24, ((MR_Box) (check_hlds__unify_proc__V_26_26)), &check_hlds__unify_proc__conv0_Num1_11);
                }
#line 247 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 247 "unify_proc.m"
                  {
#line 247 "unify_proc.m"
                    check_hlds__unify_proc__Num1_11 = ((MR_Integer) check_hlds__unify_proc__conv0_Num1_11);
#line 247 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = MR_TRUE;
#line 247 "unify_proc.m"
                  }
#line 245 "unify_proc.m"
              }
#line 244 "unify_proc.m"
          }
#line 240 "unify_proc.m"
      }
#line 213 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 212 "unify_proc.m"
      *check_hlds__unify_proc__Num_10 = check_hlds__unify_proc__Num1_11;
#line 213 "unify_proc.m"
    else
#line 214 "unify_proc.m"
      {
#line 214 "unify_proc.m"
        {
#line 214 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.lookup_mode_num\'/5", (MR_String) "search_num failed");
#line 214 "unify_proc.m"
          return;
        }
#line 214 "unify_proc.m"
      }
#line 213 "unify_proc.m"
  }
#line 117 "unify_proc.m"
}

#line 483 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
#line 483 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 483 "unify_proc.m"
{
#line 483 "unify_proc.m"
  {
#line 483 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 483 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__483__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
    }
#line 483 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 483 "unify_proc.m"
  }
#line 483 "unify_proc.m"
}

#line 512 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
#line 512 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 512 "unify_proc.m"
{
#line 512 "unify_proc.m"
  {
#line 512 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 512 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 512 "unify_proc.m"
    {
#line 512 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))));
    }
#line 512 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 512 "unify_proc.m"
  }
#line 512 "unify_proc.m"
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
#line 440 "unify_proc.m"
  {
#line 440 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Type_8;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarSet_9;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeBody_10;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Context_11;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeTable_25;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeDefn_26;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeParams_27;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__KindMap_28;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeStatus_29;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeArgs_30;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SpecialPredMap_47;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo0_48;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ErrorProcs_49;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo_50;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_53_53;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_54_54;
#line 440 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_59;
#line 469 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv0_PredId_6;

#line 503 "unify_proc.m"
    {
#line 503 "unify_proc.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__TypeTable_25);
    }
#line 504 "unify_proc.m"
    {
#line 504 "unify_proc.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_25, check_hlds__unify_proc__TypeCtor_5, &check_hlds__unify_proc__TypeDefn_26);
    }
#line 505 "unify_proc.m"
    {
#line 505 "unify_proc.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__TVarSet_9);
    }
#line 506 "unify_proc.m"
    {
#line 506 "unify_proc.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__TypeParams_27);
    }
#line 507 "unify_proc.m"
    {
#line 507 "unify_proc.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__KindMap_28);
    }
#line 508 "unify_proc.m"
    {
#line 508 "unify_proc.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__TypeBody_10);
    }
#line 509 "unify_proc.m"
    {
#line 509 "unify_proc.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__TypeStatus_29);
    }
#line 510 "unify_proc.m"
    {
#line 510 "unify_proc.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__unify_proc__TypeDefn_26, &check_hlds__unify_proc__Context_11);
    }
#line 512 "unify_proc.m"
    {
#line 512 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 512 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
#line 512 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1));
#line 512 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 512 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13));
#line 512 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
#line 512 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_10));
#line 512 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_29));
#line 512 "unify_proc.m"
    }
#line 512 "unify_proc.m"
    {
#line 512 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_31_31, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
    }
#line 514 "unify_proc.m"
    {
#line 514 "unify_proc.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_28, check_hlds__unify_proc__TypeParams_27, &check_hlds__unify_proc__TypeArgs_30);
    }
#line 515 "unify_proc.m"
    {
#line 515 "unify_proc.m"
      parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_30, &check_hlds__unify_proc__Type_8);
    }
#line 464 "unify_proc.m"
    {
#line 464 "unify_proc.m"
      hlds__make_hlds__add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, check_hlds__unify_proc__TVarSet_9, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__Context_11, (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1]), check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52);
    }
#line 468 "unify_proc.m"
    {
#line 468 "unify_proc.m"
      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52, &check_hlds__unify_proc__SpecialPredMap_47);
    }
#line 469 "unify_proc.m"
    {
#line 469 "unify_proc.m"
      check_hlds__unify_proc__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 469 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) ((MR_Integer) 2));
#line 469 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
#line 469 "unify_proc.m"
    }
#line 469 "unify_proc.m"
    {
#line 469 "unify_proc.m"
      mercury__map__lookup_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__unify_proc__SpecialPredMap_47, ((MR_Box) (check_hlds__unify_proc__V_53_53)), &check_hlds__unify_proc__conv0_PredId_6);
    }
#line 469 "unify_proc.m"
    *check_hlds__unify_proc__PredId_6 = ((MR_Word) check_hlds__unify_proc__conv0_PredId_6);
#line 470 "unify_proc.m"
    {
#line 470 "unify_proc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52, *check_hlds__unify_proc__PredId_6, &check_hlds__unify_proc__PredInfo0_48);
    }
#line 480 "unify_proc.m"
    {
#line 480 "unify_proc.m"
      check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52, &check_hlds__unify_proc__ErrorProcs_49, check_hlds__unify_proc__PredInfo0_48, &check_hlds__unify_proc__PredInfo_50);
    }
#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      check_hlds__unify_proc__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2));
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_49));
#line 483 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "unify_proc.m"
    }
#line 483 "unify_proc.m"
    {
#line 483 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_54_54, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__PredInfo_50, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_52, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_59);
    }
#line 493 "unify_proc.m"
    {
#line 493 "unify_proc.m"
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_36_59, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_14);
#line 493 "unify_proc.m"
      return;
    }
#line 440 "unify_proc.m"
  }
#line 111 "unify_proc.m"
}

#line 512 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
#line 512 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 512 "unify_proc.m"
{
#line 512 "unify_proc.m"
  {
#line 512 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 512 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 512 "unify_proc.m"
    {
#line 512 "unify_proc.m"
      return check_hlds__unify_proc__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))));
    }
#line 512 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 512 "unify_proc.m"
  }
#line 512 "unify_proc.m"
}

#line 399 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
#line 399 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 399 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 399 "unify_proc.m"
{
#line 399 "unify_proc.m"
  {
#line 399 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 399 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 399 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__3_38;

#line 399 "unify_proc.m"
    {
#line 399 "unify_proc.m"
      check_hlds__unify_proc__conv0_HeadVar__3_38 = check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__399__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 399 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__3_38));
#line 399 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 399 "unify_proc.m"
  }
#line 399 "unify_proc.m"
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
#line 384 "unify_proc.m"
  {
#line 384 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 384 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarSet_12;
#line 384 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Context_18;
#line 384 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeBody_30;
#line 384 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Type_31;
#line 384 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyPredStatus_32;
#line 384 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Item_33;

#line 385 "unify_proc.m"
    {
#line 385 "unify_proc.m"
      check_hlds__unify_proc__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__unify_proc__TypeCtor_5);
    }
#line 421 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 386 "unify_proc.m"
      {
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 386 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__TupleArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 1)));
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TVarSet0_10;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TupleArgTVars_11;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TupleArgTypes_13;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MakeUnamedField_16;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CtorArgs_19;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctor_21;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ConsId_22;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ConsTagValues_23;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_36_36;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_42_42;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_43_43;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_46_46;
#line 386 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 0)));

#line 390 "unify_proc.m"
        {
#line 390 "unify_proc.m"
          mercury__varset__init_1_p_0(check_hlds__unify_proc__TypeCtorInfo_53_53, &check_hlds__unify_proc__TVarSet0_10);
        }
#line 391 "unify_proc.m"
        {
#line 391 "unify_proc.m"
          mercury__varset__new_vars_4_p_0(check_hlds__unify_proc__TypeCtorInfo_53_53, check_hlds__unify_proc__TupleArity_9, &check_hlds__unify_proc__TupleArgTVars_11, check_hlds__unify_proc__TVarSet0_10, &check_hlds__unify_proc__TVarSet_12);
        }
#line 392 "unify_proc.m"
        {
#line 392 "unify_proc.m"
          check_hlds__unify_proc__V_36_36 = mercury__map__init_0_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 392 "unify_proc.m"
        {
#line 392 "unify_proc.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__V_36_36, check_hlds__unify_proc__TupleArgTVars_11, &check_hlds__unify_proc__TupleArgTypes_13);
        }
#line 407 "unify_proc.m"
        {
#line 407 "unify_proc.m"
          check_hlds__unify_proc__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 407 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 1) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
#line 407 "unify_proc.m"
        }
#line 408 "unify_proc.m"
        {
#line 408 "unify_proc.m"
          check_hlds__unify_proc__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__ConsId_22));
#line 408 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "unify_proc.m"
        }
#line 408 "unify_proc.m"
        {
#line 408 "unify_proc.m"
          check_hlds__unify_proc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 0) = ((MR_Box) (check_hlds__unify_proc__V_43_43));
#line 408 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "unify_proc.m"
        }
#line 408 "unify_proc.m"
        {
#line 408 "unify_proc.m"
          mercury__map__from_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, check_hlds__unify_proc__V_42_42, &check_hlds__unify_proc__ConsTagValues_23);
        }
#line 418 "unify_proc.m"
        {
#line 418 "unify_proc.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TupleArgTypes_13, &check_hlds__unify_proc__Type_31);
        }
#line 420 "unify_proc.m"
        {
#line 420 "unify_proc.m"
          mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_18);
        }
#line 399 "unify_proc.m"
        {
#line 399 "unify_proc.m"
          check_hlds__unify_proc__MakeUnamedField_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 399 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0]));
#line 399 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1));
#line 399 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 399 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 3) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 399 "unify_proc.m"
        }
#line 401 "unify_proc.m"
        {
#line 401 "unify_proc.m"
          check_hlds__unify_proc__CtorArgs_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__MakeUnamedField_16, check_hlds__unify_proc__TupleArgTypes_13);
        }
#line 404 "unify_proc.m"
        {
#line 404 "unify_proc.m"
          check_hlds__unify_proc__Ctor_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 2) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[0]));
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 3) = ((MR_Box) (check_hlds__unify_proc__CtorArgs_19));
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 4) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
#line 404 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 5) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 404 "unify_proc.m"
        }
#line 415 "unify_proc.m"
        {
#line 415 "unify_proc.m"
          check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Ctor_21));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "unify_proc.m"
        }
#line 415 "unify_proc.m"
        {
#line 415 "unify_proc.m"
          check_hlds__unify_proc__TypeBody_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 0) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 1) = ((MR_Box) (check_hlds__unify_proc__ConsTagValues_23));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 6) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 415 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "unify_proc.m"
        }
#line 386 "unify_proc.m"
      }
#line 421 "unify_proc.m"
    else
#line 502 "unify_proc.m"
      {
#line 502 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeTable_66;
#line 502 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeDefn_67;
#line 502 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeParams_68;
#line 502 "unify_proc.m"
        MR_Word check_hlds__unify_proc__KindMap_69;
#line 502 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeStatus_70;
#line 502 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeArgs_71;
#line 502 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_72_72;

#line 503 "unify_proc.m"
        {
#line 503 "unify_proc.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__unify_proc__TypeTable_66);
        }
#line 504 "unify_proc.m"
        {
#line 504 "unify_proc.m"
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_66, check_hlds__unify_proc__TypeCtor_5, &check_hlds__unify_proc__TypeDefn_67);
        }
#line 505 "unify_proc.m"
        {
#line 505 "unify_proc.m"
          hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__TVarSet_12);
        }
#line 506 "unify_proc.m"
        {
#line 506 "unify_proc.m"
          hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__TypeParams_68);
        }
#line 507 "unify_proc.m"
        {
#line 507 "unify_proc.m"
          hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__KindMap_69);
        }
#line 508 "unify_proc.m"
        {
#line 508 "unify_proc.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__TypeBody_30);
        }
#line 509 "unify_proc.m"
        {
#line 509 "unify_proc.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__TypeStatus_70);
        }
#line 510 "unify_proc.m"
        {
#line 510 "unify_proc.m"
          hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__unify_proc__TypeDefn_67, &check_hlds__unify_proc__Context_18);
        }
#line 512 "unify_proc.m"
        {
#line 512 "unify_proc.m"
          check_hlds__unify_proc__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 512 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
#line 512 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2));
#line 512 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 512 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34));
#line 512 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
#line 512 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_30));
#line 512 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_70));
#line 512 "unify_proc.m"
        }
#line 512 "unify_proc.m"
        {
#line 512 "unify_proc.m"
          mercury__require__expect_4_p_0(check_hlds__unify_proc__V_72_72, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
        }
#line 514 "unify_proc.m"
        {
#line 514 "unify_proc.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_69, check_hlds__unify_proc__TypeParams_68, &check_hlds__unify_proc__TypeArgs_71);
        }
#line 515 "unify_proc.m"
        {
#line 515 "unify_proc.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_71, &check_hlds__unify_proc__Type_31);
        }
#line 502 "unify_proc.m"
      }
#line 426 "unify_proc.m"
    {
#line 426 "unify_proc.m"
      check_hlds__unify_proc__succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30);
    }
#line 433 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 431 "unify_proc.m"
      {
#line 431 "unify_proc.m"
        check_hlds__unify_proc__UnifyPredStatus_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 432 "unify_proc.m"
        check_hlds__unify_proc__Item_33 = (MR_Integer) 1;
#line 431 "unify_proc.m"
      }
#line 433 "unify_proc.m"
    else
#line 434 "unify_proc.m"
      {
#line 434 "unify_proc.m"
        check_hlds__unify_proc__UnifyPredStatus_32 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1]);
#line 435 "unify_proc.m"
        check_hlds__unify_proc__Item_33 = (MR_Integer) 0;
#line 434 "unify_proc.m"
      }
#line 437 "unify_proc.m"
    {
#line 437 "unify_proc.m"
      check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0((MR_Integer) 0, check_hlds__unify_proc__Item_33, check_hlds__unify_proc__TVarSet_12, check_hlds__unify_proc__Type_31, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__UnifyPredStatus_32, check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35);
#line 437 "unify_proc.m"
      return;
    }
#line 384 "unify_proc.m"
  }
#line 103 "unify_proc.m"
}

#line 355 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_1(
#line 355 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 355 "unify_proc.m"
{
#line 355 "unify_proc.m"
  {
#line 355 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 355 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0, 1);
#line 355 "unify_proc.m"
  }
#line 355 "unify_proc.m"
}

#line 356 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_3(
#line 356 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 356 "unify_proc.m"
{
#line 356 "unify_proc.m"
  {
#line 356 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 356 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27);
#line 356 "unify_proc.m"
    {
#line 356 "unify_proc.m"
      check_hlds__unify_proc__request_proc_9_p_0_2(check_hlds__unify_proc__env_ptr);
#line 356 "unify_proc.m"
      return;
    }
#line 356 "unify_proc.m"
  }
#line 356 "unify_proc.m"
}

#line 355 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_2(
#line 355 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 355 "unify_proc.m"
{
#line 355 "unify_proc.m"
  {
#line 355 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 358 "unify_proc.m"
    {
#line 358 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27);
    }
#line 357 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 357 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 357 "unify_proc.m"
      {
#line 357 "unify_proc.m"
        check_hlds__unify_proc__request_proc_9_p_0_1(check_hlds__unify_proc__env_ptr);
#line 357 "unify_proc.m"
        return;
      }
#line 355 "unify_proc.m"
  }
#line 355 "unify_proc.m"
}

#line 355 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_4(
#line 355 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 355 "unify_proc.m"
{
#line 355 "unify_proc.m"
  {
#line 355 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 355 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0) == 0)
#line 355 "unify_proc.m"
      {
#line 356 "unify_proc.m"
        {
#line 356 "unify_proc.m"
          mercury__list__member_2_p_1((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, check_hlds__unify_proc__request_proc_9_p_0_3, check_hlds__unify_proc__env_ptr);
        }
#line 355 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = MR_FALSE;
#line 355 "unify_proc.m"
      }
#line 355 "unify_proc.m"
    else
#line 355 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = MR_TRUE;
#line 355 "unify_proc.m"
  }
#line 355 "unify_proc.m"
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
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_32,
#line 90 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_33)
#line 90 "unify_proc.m"
{
#line 90 "unify_proc.m"
  {
#line 90 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s check_hlds__unify_proc__env;

#line 90 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11 = check_hlds__unify_proc__ArgModes_11;
#line 90 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_32;
#line 327 "unify_proc.m"
    {
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_55_55;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_56_56;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_58_58;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_59_59;
#line 327 "unify_proc.m"
      MR_Integer check_hlds__unify_proc__Arity_23;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ClausesInfo_26;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__Requests0_28;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ReqQueue0_29;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ReqQueue_30;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__Requests_31;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;
#line 327 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_53_53;
#line 328 "unify_proc.m"
      MR_Box check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35;
#line 342 "unify_proc.m"
      MR_Box check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40;
#line 360 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_46_46;
#line 204 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_62_62;
#line 206 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_65_65;
#line 206 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_66_66;

#line 327 "unify_proc.m"
      {
#line 327 "unify_proc.m"
        hlds__hlds_module__module_info_get_preds_2_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34);
      }
#line 13891 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 13893 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 328 "unify_proc.m"
      {
#line 328 "unify_proc.m"
        mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TypeCtorInfo_56_56, check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34, ((MR_Box) (check_hlds__unify_proc__PredId_10)), &check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35);
      }
#line 328 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35 = ((MR_Word) check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35);
#line 13902 "check_hlds.unify_proc.c"
      (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 329 "unify_proc.m"
      {
#line 329 "unify_proc.m"
        mercury__list__length_2_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, &check_hlds__unify_proc__Arity_23);
      }
#line 333 "unify_proc.m"
      {
#line 333 "unify_proc.m"
        hlds__make_hlds__add_new_proc_13_p_0(check_hlds__unify_proc__InstVarSet_12, check_hlds__unify_proc__Arity_23, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__ArgLives_13, (MR_Integer) 1, check_hlds__unify_proc__MaybeDet_14, check_hlds__unify_proc__Context_15, (MR_Integer) 1, (MR_Integer) 1, check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35, &check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, check_hlds__unify_proc__ProcId_16);
      }
#line 340 "unify_proc.m"
      {
#line 340 "unify_proc.m"
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39);
      }
#line 341 "unify_proc.m"
      {
#line 341 "unify_proc.m"
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__ClausesInfo_26);
      }
#line 13924 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 13926 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 342 "unify_proc.m"
      {
#line 342 "unify_proc.m"
        mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeCtorInfo_58_58, check_hlds__unify_proc__TypeCtorInfo_59_59, check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39, ((MR_Box) (*check_hlds__unify_proc__ProcId_16)), &check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40);
      }
#line 342 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40 = ((MR_Word) check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40);
#line 343 "unify_proc.m"
      {
#line 343 "unify_proc.m"
        hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 0, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42);
      }
#line 345 "unify_proc.m"
      {
#line 345 "unify_proc.m"
        check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(*check_hlds__unify_proc__ProcId_16, check_hlds__unify_proc__ClausesInfo_26, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43);
      }
#line 347 "unify_proc.m"
      {
#line 347 "unify_proc.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44);
      }
#line 348 "unify_proc.m"
      {
#line 348 "unify_proc.m"
        hlds__hlds_goal__set_goal_contexts_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44, &check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45);
      }
#line 355 "unify_proc.m"
      {
#line 355 "unify_proc.m"
        check_hlds__unify_proc__request_proc_9_p_0_4(&check_hlds__unify_proc__env);
      }
#line 355 "unify_proc.m"
      (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 359 "unify_proc.m"
      if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 359 "unify_proc.m"
        {
#line 360 "unify_proc.m"
          (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__MaybeDet_14)) == (MR_mktag((MR_Integer) 1)));
#line 360 "unify_proc.m"
          if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 360 "unify_proc.m"
            {
#line 360 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeDet_14, (MR_Integer) 0)));
#line 360 "unify_proc.m"
              (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = (check_hlds__unify_proc__V_46_46 == (MR_Integer) 7);
#line 360 "unify_proc.m"
            }
#line 360 "unify_proc.m"
          (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 359 "unify_proc.m"
        }
#line 363 "unify_proc.m"
      if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 363 "unify_proc.m"
        check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47 = check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45;
#line 363 "unify_proc.m"
      else
#line 364 "unify_proc.m"
        {
#line 364 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45);
        }
#line 366 "unify_proc.m"
      {
#line 366 "unify_proc.m"
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48);
      }
#line 368 "unify_proc.m"
      {
#line 368 "unify_proc.m"
        mercury__map__det_update_4_p_0(check_hlds__unify_proc__TypeCtorInfo_58_58, check_hlds__unify_proc__TypeCtorInfo_59_59, ((MR_Box) (*check_hlds__unify_proc__ProcId_16)), ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48)), check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39, &check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49);
      }
#line 369 "unify_proc.m"
      {
#line 369 "unify_proc.m"
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49, check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50);
      }
#line 370 "unify_proc.m"
      {
#line 370 "unify_proc.m"
        mercury__map__det_update_4_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TypeCtorInfo_56_56, ((MR_Box) (check_hlds__unify_proc__PredId_10)), ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50)), check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34, &check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51);
      }
#line 371 "unify_proc.m"
      {
#line 371 "unify_proc.m"
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52);
      }
#line 374 "unify_proc.m"
      {
#line 374 "unify_proc.m"
        hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__Requests0_28);
      }
#line 204 "unify_proc.m"
      check_hlds__unify_proc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 0)));
#line 204 "unify_proc.m"
      check_hlds__unify_proc__ReqQueue0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 1)));
#line 376 "unify_proc.m"
      {
#line 376 "unify_proc.m"
        check_hlds__unify_proc__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_10));
#line 376 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (*check_hlds__unify_proc__ProcId_16));
#line 376 "unify_proc.m"
      }
#line 376 "unify_proc.m"
      {
#line 376 "unify_proc.m"
        mercury__queue__put_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__unify_proc__V_53_53)), check_hlds__unify_proc__ReqQueue0_29, &check_hlds__unify_proc__ReqQueue_30);
      }
#line 206 "unify_proc.m"
      check_hlds__unify_proc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 0)));
#line 206 "unify_proc.m"
      check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 1)));
#line 206 "unify_proc.m"
      {
#line 206 "unify_proc.m"
        check_hlds__unify_proc__Requests_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 206 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_31, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_30));
#line 206 "unify_proc.m"
      }
#line 378 "unify_proc.m"
      {
#line 378 "unify_proc.m"
        hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__unify_proc__Requests_31, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_33);
#line 378 "unify_proc.m"
        return;
      }
#line 327 "unify_proc.m"
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
#line 252 "unify_proc.m"
  {
#line 252 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 252 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyId_7, (MR_Integer) 0)));
#line 252 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyMode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyId_7, (MR_Integer) 1)));
#line 252 "unify_proc.m"
    MR_Word check_hlds__unify_proc__MaybeRecompInfo0_14;
#line 252 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;

#line 256 "unify_proc.m"
    {
#line 256 "unify_proc.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__unify_proc__MaybeRecompInfo0_14);
    }
#line 263 "unify_proc.m"
    if ((check_hlds__unify_proc__MaybeRecompInfo0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_47;
#line 263 "unify_proc.m"
    else
#line 258 "unify_proc.m"
      {
#line 258 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RecompInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeRecompInfo0_14, (MR_Integer) 0)));
#line 258 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorItem_16;
#line 258 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RecompInfo_17;
#line 258 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_51_51;

#line 259 "unify_proc.m"
        {
#line 259 "unify_proc.m"
          check_hlds__unify_proc__TypeCtorItem_16 = recompilation__type_ctor_to_item_name_1_f_0(check_hlds__unify_proc__TypeCtor_12);
        }
#line 260 "unify_proc.m"
        {
#line 260 "unify_proc.m"
          recompilation__record_used_item_5_p_0((MR_Integer) 1, check_hlds__unify_proc__TypeCtorItem_16, check_hlds__unify_proc__TypeCtorItem_16, check_hlds__unify_proc__RecompInfo0_15, &check_hlds__unify_proc__RecompInfo_17);
        }
#line 262 "unify_proc.m"
        {
#line 262 "unify_proc.m"
          check_hlds__unify_proc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 262 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 0) = ((MR_Box) (check_hlds__unify_proc__RecompInfo_17));
#line 262 "unify_proc.m"
        }
#line 262 "unify_proc.m"
        {
#line 262 "unify_proc.m"
          hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_47, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52);
        }
#line 258 "unify_proc.m"
      }
#line 228 "unify_proc.m"
    {
#line 228 "unify_proc.m"
      MR_Word check_hlds__unify_proc__XInitial_76;
#line 228 "unify_proc.m"
      MR_Word check_hlds__unify_proc__YInitial_77;
#line 228 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 0)));
#line 229 "unify_proc.m"
      MR_Word check_hlds__unify_proc___Final_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 1)));

#line 229 "unify_proc.m"
      check_hlds__unify_proc__XInitial_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, (MR_Integer) 0)));
#line 229 "unify_proc.m"
      check_hlds__unify_proc__YInitial_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, (MR_Integer) 1)));
#line 231 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Determinism_9 == (MR_Integer) 1);
#line 231 "unify_proc.m"
      if (check_hlds__unify_proc__succeeded)
#line 231 "unify_proc.m"
        {
#line 232 "unify_proc.m"
          {
#line 232 "unify_proc.m"
            check_hlds__unify_proc__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__unify_proc__XInitial_76);
          }
#line 231 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 233 "unify_proc.m"
            {
#line 233 "unify_proc.m"
              check_hlds__unify_proc__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__unify_proc__YInitial_77);
            }
#line 231 "unify_proc.m"
        }
#line 236 "unify_proc.m"
      if (check_hlds__unify_proc__succeeded)
#line 235 "unify_proc.m"
        {
#line 235 "unify_proc.m"
          MR_Integer check_hlds__unify_proc__V_18_18;

#line 235 "unify_proc.m"
          {
#line 235 "unify_proc.m"
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_18_18);
          }
#line 235 "unify_proc.m"
          check_hlds__unify_proc__succeeded = MR_TRUE;
#line 235 "unify_proc.m"
        }
#line 236 "unify_proc.m"
      else
#line 240 "unify_proc.m"
        {
#line 237 "unify_proc.m"
          check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__XInitial_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 240 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 239 "unify_proc.m"
            {
#line 239 "unify_proc.m"
              MR_Integer check_hlds__unify_proc__V_93_93;

#line 239 "unify_proc.m"
              {
#line 239 "unify_proc.m"
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_93_93);
              }
#line 239 "unify_proc.m"
              check_hlds__unify_proc__succeeded = MR_TRUE;
#line 239 "unify_proc.m"
            }
#line 240 "unify_proc.m"
          else
#line 244 "unify_proc.m"
            {
#line 241 "unify_proc.m"
              check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__YInitial_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 244 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 243 "unify_proc.m"
                {
#line 243 "unify_proc.m"
                  MR_Integer check_hlds__unify_proc__V_94_94;

#line 243 "unify_proc.m"
                  {
#line 243 "unify_proc.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_94_94);
                  }
#line 243 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = MR_TRUE;
#line 243 "unify_proc.m"
                }
#line 244 "unify_proc.m"
              else
#line 245 "unify_proc.m"
                {
#line 245 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__Requests_79;
#line 245 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__UnifyReqMap_80;
#line 203 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__V_86_86;
#line 247 "unify_proc.m"
                  MR_Integer check_hlds__unify_proc__V_95_95;
#line 247 "unify_proc.m"
                  MR_Box check_hlds__unify_proc__conv0_V_95_95;

#line 245 "unify_proc.m"
                  {
#line 245 "unify_proc.m"
                    hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__Requests_79);
                  }
#line 203 "unify_proc.m"
                  check_hlds__unify_proc__UnifyReqMap_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_79, (MR_Integer) 0)));
#line 203 "unify_proc.m"
                  check_hlds__unify_proc__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_79, (MR_Integer) 1)));
#line 247 "unify_proc.m"
                  {
#line 247 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, check_hlds__unify_proc__UnifyReqMap_80, ((MR_Box) (check_hlds__unify_proc__UnifyId_7)), &check_hlds__unify_proc__conv0_V_95_95);
                  }
#line 247 "unify_proc.m"
                  if (check_hlds__unify_proc__succeeded)
#line 247 "unify_proc.m"
                    {
#line 247 "unify_proc.m"
                      check_hlds__unify_proc__V_95_95 = ((MR_Integer) check_hlds__unify_proc__conv0_V_95_95);
#line 247 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 247 "unify_proc.m"
                    }
#line 245 "unify_proc.m"
                }
#line 244 "unify_proc.m"
            }
#line 240 "unify_proc.m"
        }
#line 228 "unify_proc.m"
    }
#line 272 "unify_proc.m"
    if (!(check_hlds__unify_proc__succeeded))
#line 273 "unify_proc.m"
      {
#line 273 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeTable_19;
#line 273 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeDefn_20;
#line 273 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeBody_21;

#line 273 "unify_proc.m"
        {
#line 273 "unify_proc.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__TypeTable_19);
        }
#line 274 "unify_proc.m"
        {
#line 274 "unify_proc.m"
          check_hlds__unify_proc__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_19, check_hlds__unify_proc__TypeCtor_12, &check_hlds__unify_proc__TypeDefn_20);
        }
#line 273 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 273 "unify_proc.m"
          {
#line 275 "unify_proc.m"
            {
#line 275 "unify_proc.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_20, &check_hlds__unify_proc__TypeBody_21);
            }
#line 277 "unify_proc.m"
            {
#line 277 "unify_proc.m"
              MR_Word check_hlds__unify_proc__TypeName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 0)));
#line 277 "unify_proc.m"
              MR_Word check_hlds__unify_proc__TypeModuleName_24;
#line 277 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ModuleName_26;
#line 277 "unify_proc.m"
              MR_Integer check_hlds__unify_proc___TypeArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 1)));
#line 278 "unify_proc.m"
              MR_String check_hlds__unify_proc__V_25_25;
#line 281 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_27_27;

#line 278 "unify_proc.m"
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__TypeName_22)) == (MR_mktag((MR_Integer) 1)));
#line 278 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 278 "unify_proc.m"
                {
#line 278 "unify_proc.m"
                  check_hlds__unify_proc__TypeModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeName_22, (MR_Integer) 0)));
#line 278 "unify_proc.m"
                  check_hlds__unify_proc__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeName_22, (MR_Integer) 1)));
#line 279 "unify_proc.m"
                  {
#line 279 "unify_proc.m"
                    hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__ModuleName_26);
                  }
#line 280 "unify_proc.m"
                  {
#line 280 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__unify_proc__ModuleName_26, check_hlds__unify_proc__TypeModuleName_24);
                  }
#line 277 "unify_proc.m"
                  if (check_hlds__unify_proc__succeeded)
#line 277 "unify_proc.m"
                    {
#line 281 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = ((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 281 "unify_proc.m"
                      if (check_hlds__unify_proc__succeeded)
#line 281 "unify_proc.m"
                        check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_21, (MR_Integer) 1)));
#line 277 "unify_proc.m"
                    }
#line 278 "unify_proc.m"
                }
#line 277 "unify_proc.m"
            }
#line 282 "unify_proc.m"
            if (!(check_hlds__unify_proc__succeeded))
#line 283 "unify_proc.m"
              {
#line 283 "unify_proc.m"
                check_hlds__unify_proc__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(check_hlds__unify_proc__TypeCtor_12, check_hlds__unify_proc__TypeBody_21);
              }
#line 273 "unify_proc.m"
          }
#line 273 "unify_proc.m"
      }
#line 288 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 288 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_48 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;
#line 288 "unify_proc.m"
    else
#line 291 "unify_proc.m"
      {
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorInfo_67_67;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__SpecialPredMap_28;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredId_30;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_Initial_31;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_Initial_32;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_Final_33;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_Final_34;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgModes0_35;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InMode_36;
#line 291 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__TypeArity_38;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeInfoModes_39;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgModes_40;
#line 291 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__ProcId_42;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Requests0_43;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyReqMap0_44;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyReqMap_45;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Requests_46;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_55_55;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_56_56;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_57_57;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_58_58;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_59_59;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_60_60;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_62_62;
#line 291 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_63_63;
#line 294 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredId0_29;
#line 292 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 292 "unify_proc.m"
        MR_Box check_hlds__unify_proc__conv1_PredId0_29;
#line 306 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_37_37;
#line 203 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_88_88;
#line 205 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_92_92;
#line 205 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_91_91;

#line 291 "unify_proc.m"
        {
#line 291 "unify_proc.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__SpecialPredMap_28);
        }
#line 292 "unify_proc.m"
        {
#line 292 "unify_proc.m"
          check_hlds__unify_proc__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) ((MR_Integer) 0));
#line 292 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
#line 292 "unify_proc.m"
        }
#line 292 "unify_proc.m"
        {
#line 292 "unify_proc.m"
          check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__unify_proc__SpecialPredMap_28, ((MR_Box) (check_hlds__unify_proc__V_53_53)), &check_hlds__unify_proc__conv1_PredId0_29);
        }
#line 292 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 292 "unify_proc.m"
          {
#line 292 "unify_proc.m"
            check_hlds__unify_proc__PredId0_29 = ((MR_Word) check_hlds__unify_proc__conv1_PredId0_29);
#line 292 "unify_proc.m"
            check_hlds__unify_proc__succeeded = MR_TRUE;
#line 292 "unify_proc.m"
          }
#line 294 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 293 "unify_proc.m"
          {
#line 293 "unify_proc.m"
            check_hlds__unify_proc__PredId_30 = check_hlds__unify_proc__PredId0_29;
#line 293 "unify_proc.m"
            check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_55_55 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;
#line 293 "unify_proc.m"
          }
#line 294 "unify_proc.m"
        else
#line 297 "unify_proc.m"
          {
#line 297 "unify_proc.m"
            check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(check_hlds__unify_proc__TypeCtor_12, &check_hlds__unify_proc__PredId_30, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_55_55);
          }
#line 301 "unify_proc.m"
        check_hlds__unify_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 0)));
#line 301 "unify_proc.m"
        check_hlds__unify_proc__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 1)));
#line 301 "unify_proc.m"
        check_hlds__unify_proc__X_Initial_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_56_56, (MR_Integer) 0)));
#line 301 "unify_proc.m"
        check_hlds__unify_proc__Y_Initial_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_56_56, (MR_Integer) 1)));
#line 301 "unify_proc.m"
        check_hlds__unify_proc__X_Final_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_57_57, (MR_Integer) 0)));
#line 301 "unify_proc.m"
        check_hlds__unify_proc__Y_Final_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_57_57, (MR_Integer) 1)));
#line 302 "unify_proc.m"
        {
#line 302 "unify_proc.m"
          check_hlds__unify_proc__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__X_Initial_31));
#line 302 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__X_Final_33));
#line 302 "unify_proc.m"
        }
#line 302 "unify_proc.m"
        {
#line 302 "unify_proc.m"
          check_hlds__unify_proc__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_60_60, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Initial_32));
#line 302 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_60_60, 1) = ((MR_Box) (check_hlds__unify_proc__Y_Final_34));
#line 302 "unify_proc.m"
        }
#line 302 "unify_proc.m"
        {
#line 302 "unify_proc.m"
          check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__V_60_60));
#line 302 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "unify_proc.m"
        }
#line 302 "unify_proc.m"
        {
#line 302 "unify_proc.m"
          check_hlds__unify_proc__ArgModes0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgModes0_35, 0) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 302 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgModes0_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 302 "unify_proc.m"
        }
#line 305 "unify_proc.m"
        {
#line 305 "unify_proc.m"
          parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__unify_proc__InMode_36);
        }
#line 306 "unify_proc.m"
        check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 0)));
#line 306 "unify_proc.m"
        check_hlds__unify_proc__TypeArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 1)));
#line 14562 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 307 "unify_proc.m"
        {
#line 307 "unify_proc.m"
          mercury__list__duplicate_3_p_0(check_hlds__unify_proc__TypeCtorInfo_67_67, check_hlds__unify_proc__TypeArity_38, ((MR_Box) (check_hlds__unify_proc__InMode_36)), &check_hlds__unify_proc__TypeInfoModes_39);
        }
#line 308 "unify_proc.m"
        {
#line 308 "unify_proc.m"
          check_hlds__unify_proc__ArgModes_40 = mercury__list__f_43_43_2_f_0(check_hlds__unify_proc__TypeCtorInfo_67_67, check_hlds__unify_proc__TypeInfoModes_39, check_hlds__unify_proc__ArgModes0_35);
        }
#line 312 "unify_proc.m"
        {
#line 312 "unify_proc.m"
          check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 312 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__Determinism_9));
#line 312 "unify_proc.m"
        }
#line 312 "unify_proc.m"
        {
#line 312 "unify_proc.m"
          check_hlds__unify_proc__request_proc_9_p_0(check_hlds__unify_proc__PredId_30, check_hlds__unify_proc__ArgModes_40, check_hlds__unify_proc__InstVarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__V_62_62, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__ProcId_42, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_55_55, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_63_63);
        }
#line 316 "unify_proc.m"
        {
#line 316 "unify_proc.m"
          hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_63_63, &check_hlds__unify_proc__Requests0_43);
        }
#line 203 "unify_proc.m"
        check_hlds__unify_proc__UnifyReqMap0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_43, (MR_Integer) 0)));
#line 203 "unify_proc.m"
        check_hlds__unify_proc__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_43, (MR_Integer) 1)));
#line 318 "unify_proc.m"
        {
#line 318 "unify_proc.m"
          mercury__map__set_4_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, ((MR_Box) (check_hlds__unify_proc__UnifyId_7)), ((MR_Box) (check_hlds__unify_proc__ProcId_42)), check_hlds__unify_proc__UnifyReqMap0_44, &check_hlds__unify_proc__UnifyReqMap_45);
        }
#line 205 "unify_proc.m"
        check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_43, (MR_Integer) 0)));
#line 205 "unify_proc.m"
        check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_43, (MR_Integer) 1)));
#line 205 "unify_proc.m"
        {
#line 205 "unify_proc.m"
          check_hlds__unify_proc__Requests_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_46, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyReqMap_45));
#line 205 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
#line 205 "unify_proc.m"
        }
#line 320 "unify_proc.m"
        {
#line 320 "unify_proc.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__unify_proc__Requests_46, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_63_63, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_48);
#line 320 "unify_proc.m"
          return;
        }
#line 291 "unify_proc.m"
      }
#line 252 "unify_proc.m"
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
#line 190 "unify_proc.m"
  {
#line 190 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 190 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyReqMap_3;
#line 190 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ReqQueue_4;

#line 191 "unify_proc.m"
    {
#line 191 "unify_proc.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, &check_hlds__unify_proc__UnifyReqMap_3);
    }
#line 192 "unify_proc.m"
    {
#line 192 "unify_proc.m"
      mercury__queue__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__unify_proc__ReqQueue_4);
    }
#line 193 "unify_proc.m"
    {
#line 193 "unify_proc.m"
      MR_Word base;
#line 193 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "unify_proc.m"
      *check_hlds__unify_proc__Requests_2 = base;
#line 193 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyReqMap_3));
#line 193 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_4));
#line 193 "unify_proc.m"
    }
#line 190 "unify_proc.m"
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
#line 206 "unify_proc.m"
  {
#line 206 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_5, (MR_Integer) 0)));
#line 206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_5, (MR_Integer) 1)));

#line 206 "unify_proc.m"
    {
#line 206 "unify_proc.m"
      MR_Word base;
#line 206 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "unify_proc.m"
      *check_hlds__unify_proc__HeadVar__3_3 = base;
#line 206 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_6_6));
#line 206 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_4));
#line 206 "unify_proc.m"
    }
#line 206 "unify_proc.m"
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
#line 204 "unify_proc.m"
  {
#line 204 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 204 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_3, (MR_Integer) 0)));

#line 204 "unify_proc.m"
    *check_hlds__unify_proc__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_3, (MR_Integer) 1)));
#line 204 "unify_proc.m"
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
