/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version DEV
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1929 "unify_proc.m"
struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s {
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2;
#line 1933 "unify_proc.m"
  MR_bool check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded;
#line 1935 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22;
#line 1950 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0;
#line 1950 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43;
#line 1950 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25;
#line 1950 "unify_proc.m"
  MR_Word check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42;
#line 1950 "unify_proc.m"
  MR_Box check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25;
#line 1929 "unify_proc.m"
};

#line 1752 "unify_proc.m"
struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s {
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2;
#line 1756 "unify_proc.m"
  MR_bool check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded;
#line 1759 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30;
#line 1771 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0;
#line 1771 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77;
#line 1771 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71;
#line 1771 "unify_proc.m"
  MR_Word check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76;
#line 1771 "unify_proc.m"
  MR_Box check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71;
#line 1752 "unify_proc.m"
};

#line 91 "unify_proc.m"
struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s {
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11;
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32;
#line 330 "unify_proc.m"
  MR_bool check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded;
#line 330 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57;
#line 358 "unify_proc.m"
  jmp_buf check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0;
#line 358 "unify_proc.m"
  MR_Word check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27;
#line 359 "unify_proc.m"
  MR_Box check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27;
#line 91 "unify_proc.m"
};


#line 216 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 219 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0;

#line 225 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1;

#line 228 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2];

#line 231 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2];

#line 234 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2];

#line 237 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0;

#line 240 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 243 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0[2];

#line 246 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0[2];

#line 249 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0;

#line 252 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[1];

#line 255 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[1];

#line 258 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0[1];

#line 261 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0[1];

#line 264 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0;

#line 267 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1;

#line 270 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2];

#line 273 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2];

#line 276 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2];

#line 279 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0[2];

#line 282 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0;

#line 285 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[1];

#line 288 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[1];

#line 291 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[1];

#line 294 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0[1];

#line 297 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 300 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 303 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 306 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4];

#line 309 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4];

#line 312 "check_hlds.unify_proc.c"
static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0;

#line 315 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1];

#line 318 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1];

#line 321 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1];

#line 324 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1];

#line 327 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
#line 330 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 332 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 335 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
#line 338 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 340 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 342 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 345 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0_10001(
#line 348 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 350 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 353 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0_10001(
#line 356 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 358 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 360 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 363 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0_10001(
#line 366 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 368 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 371 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0_10001(
#line 374 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 376 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 378 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 381 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
#line 384 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 386 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 389 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
#line 392 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 394 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 396 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 399 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001(
#line 402 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 404 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 407 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001(
#line 410 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 412 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 414 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 417 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
#line 420 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 422 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 425 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
#line 428 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 430 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 432 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 435 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0_10001(
#line 438 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 440 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2);

#line 443 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0_10001(
#line 446 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 448 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 450 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3);

#line 574 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(
#line 574 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_9,
#line 574 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 574 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 574 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 574 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_47,
#line 574 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_48);

#line 1901 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1901__1_1_f_0(
#line 1901 "unify_proc.m"
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_21);

#line 487 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__487__1_2_p_0(
#line 487 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ErrorProcs_24,
#line 487 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_34);

#line 402 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__402__1_2_f_0(
#line 402 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 402 "unify_proc.m"
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_37);

#line 179 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0(
#line 179 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 179 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 179 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 179 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0(
#line 179 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 179 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 2096 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
#line 2096 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 2096 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 2096 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 2096 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
#line 2096 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 2096 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 499 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
#line 499 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 499 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 499 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 499 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
#line 499 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 499 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 1638 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
#line 1638 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 1638 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1638 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3);

#line 1638 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
#line 1638 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 1638 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2);

#line 2076 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
#line 2076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_6,
#line 2076 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 2076 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_8,
#line 2076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
#line 2076 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15);

#line 2074 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
#line 2074 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_5,
#line 2074 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_6,
#line 2074 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
#line 2074 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13);

#line 2059 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
#line 2059 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_3);

#line 2035 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
#line 2035 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVars_7,
#line 2035 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_8,
#line 2035 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 2035 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 2035 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 2035 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

#line 1962 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_11,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__MaybeCompareRes_12,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_13,
#line 1962 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_14,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_38,
#line 1962 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_39);

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_3(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_4(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1929 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0(
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1929 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 1929 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

#line 1901 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
#line 1901 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1901 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 1895 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
#line 1895 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorArgs_6,
#line 1895 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_7,
#line 1895 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Vars_8,
#line 1895 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1895 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

#line 1887 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
#line 1887 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1887 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__2_2,
#line 1887 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_3,
#line 1887 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_4);

#line 1877 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
#line 1877 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1877 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_2,
#line 1877 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_3,
#line 1877 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
#line 1877 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
#line 1877 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6);

#line 1869 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
#line 1869 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_7,
#line 1869 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_8,
#line 1869 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_9,
#line 1869 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_10,
#line 1869 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1869 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

#line 1840 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialPredId_11,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_12,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstmapDelta_13,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Detism_14,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1840 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_26,
#line 1840 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_27);

#line 1821 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
#line 1821 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 1821 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_8,
#line 1821 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1821 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_10,
#line 1821 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1821 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18);

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_1(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_3(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_4(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_2(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_5(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 1752 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0(
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_5,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_6,
#line 1752 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1752 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9);

#line 1739 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_9_p_0(
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgTypes_10,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_11,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Xs_12,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ys_13,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_14,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1739 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_19,
#line 1739 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_20);

#line 1686 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_12,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor1_13,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor2_14,
#line 1686 "unify_proc.m"
  MR_String check_hlds__unify_proc__CompareOp_15,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_16,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_17,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_18,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_19,
#line 1686 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_20,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_48,
#line 1686 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_49);

#line 1642 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_12,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_13,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_14,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_15,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_16,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Kind_17,
#line 1642 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_18,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 1642 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42);

#line 1627 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1627 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1627 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9);

#line 1537 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_11,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1537 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 1537 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

#line 1469 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1469 "unify_proc.m"
  MR_String check_hlds__unify_proc__HeadVar__4_4,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__8_8,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9,
#line 1469 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_10,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_11,
#line 1469 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_12);

#line 1454 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8,
#line 1454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_9,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_10,
#line 1454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_11);

#line 1353 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
#line 1353 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1353 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1353 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 1353 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_3);

#line 1341 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors0_11,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1341 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_30,
#line 1341 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_31);

#line 1901 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
#line 1901 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1901 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 1320 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_12,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_13,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_14,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1320 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1320 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__STATE_VARIABLE_N_0_32,
#line 1320 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__STATE_VARIABLE_N_33,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_34,
#line 1320 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_35);

#line 1313 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
#line 1313 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1313 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1313 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1313 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1313 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4,
#line 1313 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_5,
#line 1313 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_6);

#line 1307 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1307 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_21,
#line 1307 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_22);

#line 1226 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_10,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1226 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_43,
#line 1226 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_44);

#line 1218 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
#line 1218 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1218 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1218 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1218 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1218 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4);

#line 1212 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1212 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 1212 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

#line 1137 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_9,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_10,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1137 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_24,
#line 1137 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_25);

#line 1103 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_2,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_3,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_4,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_5,
#line 1103 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_6,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_7,
#line 1103 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_8);

#line 1093 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1093 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_16,
#line 1093 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_17);

#line 1084 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
#line 1084 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_7,
#line 1084 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_8,
#line 1084 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1084 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 1084 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1084 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15);

#line 1037 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1037 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
#line 1037 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16);

#line 1019 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1019 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_23,
#line 1019 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_24);

#line 998 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
#line 998 "unify_proc.m"
  MR_Word check_hlds__unify_proc__A_4,
#line 998 "unify_proc.m"
  MR_Word check_hlds__unify_proc__B_5,
#line 998 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Res_6);

#line 910 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_11,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 910 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 910 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42);

#line 843 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 843 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_37,
#line 843 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_38);

#line 812 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_8,
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 812 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 812 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23);

#line 760 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UserEqCompare_1,
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_2,
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_3,
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_4,
#line 760 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_5,
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 760 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7);

#line 722 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorCat_8,
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 722 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 722 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21);

#line 636 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 636 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 636 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41);

#line 487 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
#line 487 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 454 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialId_12,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Item_13,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TVarSet_14,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_15,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_16,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_17,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeStatus_19,
#line 454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_20,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26,
#line 454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27);

#line 487 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
#line 487 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 516 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
#line 516 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 516 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
#line 516 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg);

#line 402 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
#line 402 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 402 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1);

#line 358 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_1(
#line 358 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 359 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_3(
#line 359 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 358 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_2(
#line 358 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);

#line 358 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_4(
#line 358 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg);


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_3[3][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[2][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][12];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][13];


#line 734 "unify_proc.m"
/* sealed */ struct check_hlds__unify_proc__vector_common_type_7_0_s {
#line 734 "unify_proc.m"
  const MR_String check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
#line 734 "unify_proc.m"
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_7_0_s check_hlds__unify_proc_vector_common_7[8];



static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[6][2] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0))
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

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][12] = {
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

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][13] = {
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


static /* final */ const struct check_hlds__unify_proc__vector_common_type_7_0_s check_hlds__unify_proc_vector_common_7[8] = {
  /* row 0 */   {     (MR_String) "builtin_unify_int" },
  /* row 1 */   {     (MR_String) "builtin_unify_float" },
  /* row 2 */   {     (MR_String) "builtin_unify_character" },
  /* row 3 */   {     (MR_String) "builtin_unify_string" },
  /* row 4 */   {     (MR_String) "builtin_compare_int" },
  /* row 5 */   {     (MR_String) "builtin_compare_float" },
  /* row 6 */   {     (MR_String) "builtin_compare_character" },
  /* row 7 */   {     (MR_String) "builtin_compare_string" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1703 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1711 "check_hlds.unify_proc.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1719 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0 = {
  (MR_String) "linear",
  (MR_Integer) 0
};

#line 1725 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1 = {
  (MR_String) "quad",
  (MR_Integer) 1
};

#line 1731 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

#line 1737 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

#line 1743 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1749 "check_hlds.unify_proc.c"
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

#line 1766 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1775 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__queue__queue__type_ctor_info_queue_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 1783 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_proc_requests_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2check_hlds__unify_proc__type_ctor_info_unify_proc_id_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__queue__ti_queue_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

#line 1789 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_proc_requests_0_0[2] = {
  (MR_String) "unify_req_map",
  (MR_String) "req_queue"
};

#line 1795 "check_hlds.unify_proc.c"
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

#line 1810 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

#line 1815 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_proc_requests_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_proc_requests_0_0
  }
};

#line 1824 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_proc_requests_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_proc_requests_0_0
};

#line 1829 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_proc_requests_0[1] = {
  (MR_Integer) 0
};

#line 1834 "check_hlds.unify_proc.c"
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

#line 1851 "check_hlds.unify_proc.c"
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

#line 1868 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0 = {
  (MR_String) "declaration",
  (MR_Integer) 0
};

#line 1874 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1 = {
  (MR_String) "clauses",
  (MR_Integer) 1
};

#line 1880 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_value_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1
};

#line 1886 "check_hlds.unify_proc.c"
static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_unify_pred_item_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_unify_pred_item_0_0
};

#line 1892 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_pred_item_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1898 "check_hlds.unify_proc.c"
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

#line 1915 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_id_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0
};

#line 1921 "check_hlds.unify_proc.c"
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

#line 1936 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

#line 1941 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_id_0_0
  }
};

#line 1950 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_id_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_id_0_0
};

#line 1955 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_id_0[1] = {
  (MR_Integer) 0
};

#line 1960 "check_hlds.unify_proc.c"
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

#line 1977 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1985 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1993 "check_hlds.unify_proc.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2002 "check_hlds.unify_proc.c"
static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 2010 "check_hlds.unify_proc.c"
static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4] = {
  (MR_String) "upi_varset",
  (MR_String) "upi_vartypes",
  (MR_String) "upi_rtti_varmaps",
  (MR_String) "upi_module_info"
};

#line 2018 "check_hlds.unify_proc.c"
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

#line 2033 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

#line 2038 "check_hlds.unify_proc.c"
static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0
  }
};

#line 2047 "check_hlds.unify_proc.c"
static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

#line 2052 "check_hlds.unify_proc.c"
static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 2057 "check_hlds.unify_proc.c"
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

#line 2074 "check_hlds.unify_proc.c"
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

#line 2091 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
#line 2094 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2096 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2098 "check_hlds.unify_proc.c"
{
#line 2100 "check_hlds.unify_proc.c"
  {
#line 2102 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2105 "check_hlds.unify_proc.c"
    {
#line 2107 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____linear_or_quad_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2110 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2112 "check_hlds.unify_proc.c"
  }
#line 2114 "check_hlds.unify_proc.c"
}

#line 2117 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
#line 2120 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2122 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2124 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2126 "check_hlds.unify_proc.c"
{
#line 2128 "check_hlds.unify_proc.c"
  {
#line 2130 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2133 "check_hlds.unify_proc.c"
    {
#line 2135 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____linear_or_quad_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2138 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2140 "check_hlds.unify_proc.c"
  }
#line 2142 "check_hlds.unify_proc.c"
}

#line 2145 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0_10001(
#line 2148 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2150 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2152 "check_hlds.unify_proc.c"
{
#line 2154 "check_hlds.unify_proc.c"
  {
#line 2156 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2159 "check_hlds.unify_proc.c"
    {
#line 2161 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____proc_requests_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2164 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2166 "check_hlds.unify_proc.c"
  }
#line 2168 "check_hlds.unify_proc.c"
}

#line 2171 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0_10001(
#line 2174 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2176 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2178 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2180 "check_hlds.unify_proc.c"
{
#line 2182 "check_hlds.unify_proc.c"
  {
#line 2184 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2187 "check_hlds.unify_proc.c"
    {
#line 2189 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____proc_requests_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2192 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2194 "check_hlds.unify_proc.c"
  }
#line 2196 "check_hlds.unify_proc.c"
}

#line 2199 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0_10001(
#line 2202 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2204 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2206 "check_hlds.unify_proc.c"
{
#line 2208 "check_hlds.unify_proc.c"
  {
#line 2210 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2213 "check_hlds.unify_proc.c"
    {
#line 2215 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____req_queue_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2218 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2220 "check_hlds.unify_proc.c"
  }
#line 2222 "check_hlds.unify_proc.c"
}

#line 2225 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0_10001(
#line 2228 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2230 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2232 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2234 "check_hlds.unify_proc.c"
{
#line 2236 "check_hlds.unify_proc.c"
  {
#line 2238 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2241 "check_hlds.unify_proc.c"
    {
#line 2243 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____req_queue_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2246 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2248 "check_hlds.unify_proc.c"
  }
#line 2250 "check_hlds.unify_proc.c"
}

#line 2253 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0_10001(
#line 2256 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2258 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2260 "check_hlds.unify_proc.c"
{
#line 2262 "check_hlds.unify_proc.c"
  {
#line 2264 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2267 "check_hlds.unify_proc.c"
    {
#line 2269 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_pred_item_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2272 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2274 "check_hlds.unify_proc.c"
  }
#line 2276 "check_hlds.unify_proc.c"
}

#line 2279 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0_10001(
#line 2282 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2284 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2286 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2288 "check_hlds.unify_proc.c"
{
#line 2290 "check_hlds.unify_proc.c"
  {
#line 2292 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2295 "check_hlds.unify_proc.c"
    {
#line 2297 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_pred_item_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2300 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2302 "check_hlds.unify_proc.c"
  }
#line 2304 "check_hlds.unify_proc.c"
}

#line 2307 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0_10001(
#line 2310 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2312 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2314 "check_hlds.unify_proc.c"
{
#line 2316 "check_hlds.unify_proc.c"
  {
#line 2318 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2321 "check_hlds.unify_proc.c"
    {
#line 2323 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_proc_id_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2326 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2328 "check_hlds.unify_proc.c"
  }
#line 2330 "check_hlds.unify_proc.c"
}

#line 2333 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0_10001(
#line 2336 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2338 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2340 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2342 "check_hlds.unify_proc.c"
{
#line 2344 "check_hlds.unify_proc.c"
  {
#line 2346 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2349 "check_hlds.unify_proc.c"
    {
#line 2351 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_proc_id_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2354 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2356 "check_hlds.unify_proc.c"
  }
#line 2358 "check_hlds.unify_proc.c"
}

#line 2361 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
#line 2364 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2366 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2368 "check_hlds.unify_proc.c"
{
#line 2370 "check_hlds.unify_proc.c"
  {
#line 2372 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2375 "check_hlds.unify_proc.c"
    {
#line 2377 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_proc_info_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2380 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2382 "check_hlds.unify_proc.c"
  }
#line 2384 "check_hlds.unify_proc.c"
}

#line 2387 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
#line 2390 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2392 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2394 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2396 "check_hlds.unify_proc.c"
{
#line 2398 "check_hlds.unify_proc.c"
  {
#line 2400 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2403 "check_hlds.unify_proc.c"
    {
#line 2405 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_proc_info_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2408 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2410 "check_hlds.unify_proc.c"
  }
#line 2412 "check_hlds.unify_proc.c"
}

#line 2415 "check_hlds.unify_proc.c"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0_10001(
#line 2418 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 2420 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2)
#line 2422 "check_hlds.unify_proc.c"
{
#line 2424 "check_hlds.unify_proc.c"
  {
#line 2426 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded;

#line 2429 "check_hlds.unify_proc.c"
    {
#line 2431 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc____Unify____unify_req_map_0_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2));
    }
#line 2434 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 2436 "check_hlds.unify_proc.c"
  }
#line 2438 "check_hlds.unify_proc.c"
}

#line 2441 "check_hlds.unify_proc.c"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0_10001(
#line 2444 "check_hlds.unify_proc.c"
  MR_Box * check_hlds__unify_proc__wrapper_arg_1,
#line 2446 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 2448 "check_hlds.unify_proc.c"
  MR_Box check_hlds__unify_proc__wrapper_arg_3)
#line 2450 "check_hlds.unify_proc.c"
{
#line 2452 "check_hlds.unify_proc.c"
  {
#line 2454 "check_hlds.unify_proc.c"
    MR_Word check_hlds__unify_proc__conv0_HeadVar__1_1;

#line 2457 "check_hlds.unify_proc.c"
    {
#line 2459 "check_hlds.unify_proc.c"
      check_hlds__unify_proc____Compare____unify_req_map_0_0(&check_hlds__unify_proc__conv0_HeadVar__1_1, ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), ((MR_Word) check_hlds__unify_proc__wrapper_arg_3));
    }
#line 2462 "check_hlds.unify_proc.c"
    *check_hlds__unify_proc__wrapper_arg_1 = ((MR_Box) (check_hlds__unify_proc__conv0_HeadVar__1_1));
#line 2464 "check_hlds.unify_proc.c"
  }
#line 2466 "check_hlds.unify_proc.c"
}

#line 574 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(
#line 574 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_9,
#line 574 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 574 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 574 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 574 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_47,
#line 574 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_48)
#line 574 "unify_proc.m"
{
#line 578 "unify_proc.m"
  {
#line 578 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 578 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 3)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, (MR_Integer) 2)));

#line 605 "unify_proc.m"
#line 605 "unify_proc.m"
    switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_9)) {
#line 605 "unify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 605 "unify_proc.m"
      case (MR_Integer) 0:
#line 631 "unify_proc.m"
        {
#line 632 "unify_proc.m"
          {
#line 632 "unify_proc.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_initialise_proc_body\'/7", (MR_String) "trying to create initialisation proc for type that has no solver_type_details");
#line 632 "unify_proc.m"
            return;
          }
#line 631 "unify_proc.m"
        }
#line 605 "unify_proc.m"
        break;
#line 605 "unify_proc.m"
      case (MR_Integer) 1:
#line 631 "unify_proc.m"
        {
#line 632 "unify_proc.m"
          {
#line 632 "unify_proc.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_initialise_proc_body\'/7", (MR_String) "trying to create initialisation proc for type that has no solver_type_details");
#line 632 "unify_proc.m"
            return;
          }
#line 631 "unify_proc.m"
        }
#line 605 "unify_proc.m"
        break;
#line 605 "unify_proc.m"
      case (MR_Integer) 2:
#line 584 "unify_proc.m"
        {
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__EqvType_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 0)));
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__GoalInfo_16;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__X0_17;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__TypeCtor_18;
#line 584 "unify_proc.m"
          MR_String check_hlds__unify_proc__PredName_19;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__ModuleName_20;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__TypeSymName_21;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__TypeModuleName_23;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__InitPred_24;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__PredId_25;
#line 584 "unify_proc.m"
          MR_Integer check_hlds__unify_proc__ModeId_26;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__InitCall_27;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__InitGoal_28;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Any_29;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastGoal_30;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Goal_31;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_68_68;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_70_70;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_78_78;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_80_80;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_81_81;
#line 584 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_83_83;
#line 591 "unify_proc.m"
          MR_Integer check_hlds__unify_proc___TypeArity_22;

#line 585 "unify_proc.m"
          {
#line 585 "unify_proc.m"
            hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__GoalInfo_16);
          }
#line 586 "unify_proc.m"
          {
#line 586 "unify_proc.m"
            check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_15, (MR_String) "PreCast_HeadVar", (MR_Integer) 1, &check_hlds__unify_proc__X0_17, check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, &check_hlds__unify_proc__STATE_VARIABLE_Info_68_68);
          }
#line 588 "unify_proc.m"
          {
#line 588 "unify_proc.m"
            parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__EqvType_15, &check_hlds__unify_proc__TypeCtor_18);
          }
#line 589 "unify_proc.m"
          {
#line 589 "unify_proc.m"
            check_hlds__unify_proc__PredName_19 = hlds__special_pred__special_pred_name_2_f_0((MR_Integer) 3, check_hlds__unify_proc__TypeCtor_18);
          }
#line 590 "unify_proc.m"
          {
#line 590 "unify_proc.m"
            hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unify_proc__ModuleInfo_14, &check_hlds__unify_proc__ModuleName_20);
          }
#line 591 "unify_proc.m"
          check_hlds__unify_proc__TypeSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_18, (MR_Integer) 0)));
#line 591 "unify_proc.m"
          check_hlds__unify_proc___TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_18, (MR_Integer) 1)));
#line 592 "unify_proc.m"
          {
#line 592 "unify_proc.m"
            mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(check_hlds__unify_proc__TypeSymName_21, check_hlds__unify_proc__ModuleName_20, &check_hlds__unify_proc__TypeModuleName_23);
          }
#line 594 "unify_proc.m"
          {
#line 594 "unify_proc.m"
            check_hlds__unify_proc__InitPred_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__InitPred_24, 0) = ((MR_Box) (check_hlds__unify_proc__TypeModuleName_23));
#line 594 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__InitPred_24, 1) = ((MR_Box) (check_hlds__unify_proc__PredName_19));
#line 594 "unify_proc.m"
          }
#line 595 "unify_proc.m"
          {
#line 595 "unify_proc.m"
            check_hlds__unify_proc__PredId_25 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          }
#line 596 "unify_proc.m"
          {
#line 596 "unify_proc.m"
            check_hlds__unify_proc__ModeId_26 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          }
#line 597 "unify_proc.m"
          {
#line 597 "unify_proc.m"
            check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__X0_17));
#line 597 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "unify_proc.m"
          }
#line 597 "unify_proc.m"
          {
#line 597 "unify_proc.m"
            check_hlds__unify_proc__InitCall_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 597 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_25));
#line 597 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_26));
#line 597 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 2) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
#line 597 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 3) = ((MR_Box) ((MR_Integer) 2));
#line 597 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "unify_proc.m"
            MR_hl_field(MR_mktag(2), check_hlds__unify_proc__InitCall_27, 5) = ((MR_Box) (check_hlds__unify_proc__InitPred_24));
#line 597 "unify_proc.m"
          }
#line 598 "unify_proc.m"
          {
#line 598 "unify_proc.m"
            check_hlds__unify_proc__InitGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 598 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__InitGoal_28, 0) = ((MR_Box) (check_hlds__unify_proc__InitCall_27));
#line 598 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__InitGoal_28, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_16));
#line 598 "unify_proc.m"
          }
#line 600 "unify_proc.m"
          check_hlds__unify_proc__Any_29 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_1[5]);
#line 601 "unify_proc.m"
          {
#line 601 "unify_proc.m"
            hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 2, check_hlds__unify_proc__X0_17, check_hlds__unify_proc__X_10, check_hlds__unify_proc__Any_29, check_hlds__unify_proc__Any_29, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastGoal_30);
          }
#line 603 "unify_proc.m"
          {
#line 603 "unify_proc.m"
            check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__CastGoal_30));
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "unify_proc.m"
          }
#line 603 "unify_proc.m"
          {
#line 603 "unify_proc.m"
            check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (check_hlds__unify_proc__InitGoal_28));
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 603 "unify_proc.m"
          }
#line 603 "unify_proc.m"
          {
#line 603 "unify_proc.m"
            check_hlds__unify_proc__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 1) = ((MR_Box) ((MR_Integer) 0));
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_78_78, 2) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 603 "unify_proc.m"
          }
#line 603 "unify_proc.m"
          {
#line 603 "unify_proc.m"
            check_hlds__unify_proc__Goal_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 603 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_31, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_16));
#line 603 "unify_proc.m"
          }
#line 604 "unify_proc.m"
          {
#line 604 "unify_proc.m"
            check_hlds__unify_proc__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_83_83, 0) = ((MR_Box) (check_hlds__unify_proc__X_10));
#line 604 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "unify_proc.m"
          }
#line 604 "unify_proc.m"
          {
#line 604 "unify_proc.m"
            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_83_83, check_hlds__unify_proc__Goal_31, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_68_68, check_hlds__unify_proc__STATE_VARIABLE_Info_48);
          }
#line 584 "unify_proc.m"
        }
#line 605 "unify_proc.m"
        break;
#line 605 "unify_proc.m"
      case (MR_Integer) 3:
#line 605 "unify_proc.m"
#line 605 "unify_proc.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 0)))) {
#line 605 "unify_proc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 605 "unify_proc.m"
          case (MR_Integer) 0:
#line 606 "unify_proc.m"
            {
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__SolverTypeDetails_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 1)));
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__HowToInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 1)));
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Call_35;
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_59_59;
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__GoalInfo_86;
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__InitPred_87;
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__PredId_88;
#line 606 "unify_proc.m"
              MR_Integer check_hlds__unify_proc__ModeId_89;
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Goal_90;
#line 606 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_9, (MR_Integer) 2)));
#line 613 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 0)));
#line 613 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 2)));
#line 613 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 3)));
#line 613 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SolverTypeDetails_32, (MR_Integer) 4)));

#line 616 "unify_proc.m"
              if ((check_hlds__unify_proc__HowToInit_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "unify_proc.m"
                {
#line 618 "unify_proc.m"
                  {
#line 618 "unify_proc.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_initialise_proc_body\'/7", (MR_String) "generating initialise pred. for solver type that does not have automatic initialisation");
#line 618 "unify_proc.m"
                    return;
                  }
#line 617 "unify_proc.m"
                }
#line 616 "unify_proc.m"
              else
#line 615 "unify_proc.m"
                check_hlds__unify_proc__InitPred_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HowToInit_34, (MR_Integer) 0)));
#line 621 "unify_proc.m"
              {
#line 621 "unify_proc.m"
                check_hlds__unify_proc__PredId_88 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              }
#line 622 "unify_proc.m"
              {
#line 622 "unify_proc.m"
                check_hlds__unify_proc__ModeId_89 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              }
#line 623 "unify_proc.m"
              {
#line 623 "unify_proc.m"
                check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_10));
#line 623 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "unify_proc.m"
              }
#line 623 "unify_proc.m"
              {
#line 623 "unify_proc.m"
                check_hlds__unify_proc__Call_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 623 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_88));
#line 623 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_89));
#line 623 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 2) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 623 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 3) = ((MR_Box) ((MR_Integer) 2));
#line 623 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_35, 5) = ((MR_Box) (check_hlds__unify_proc__InitPred_87));
#line 623 "unify_proc.m"
              }
#line 624 "unify_proc.m"
              {
#line 624 "unify_proc.m"
                hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__GoalInfo_86);
              }
#line 625 "unify_proc.m"
              {
#line 625 "unify_proc.m"
                check_hlds__unify_proc__Goal_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 625 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_90, 0) = ((MR_Box) (check_hlds__unify_proc__Call_35));
#line 625 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_90, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_86));
#line 625 "unify_proc.m"
              }
#line 626 "unify_proc.m"
              {
#line 626 "unify_proc.m"
                check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Goal_90, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_0_47, check_hlds__unify_proc__STATE_VARIABLE_Info_48);
              }
#line 606 "unify_proc.m"
            }
#line 605 "unify_proc.m"
            break;
#line 605 "unify_proc.m"
          case (MR_Integer) 1:
#line 631 "unify_proc.m"
            {
#line 632 "unify_proc.m"
              {
#line 632 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_initialise_proc_body\'/7", (MR_String) "trying to create initialisation proc for type that has no solver_type_details");
#line 632 "unify_proc.m"
                return;
              }
#line 631 "unify_proc.m"
            }
#line 605 "unify_proc.m"
            break;
#line 605 "unify_proc.m"
        }
#line 605 "unify_proc.m"
        break;
#line 605 "unify_proc.m"
    }
#line 578 "unify_proc.m"
  }
#line 574 "unify_proc.m"
}

#line 1901 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1901__1_1_f_0(
#line 1901 "unify_proc.m"
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_21)
#line 1901 "unify_proc.m"
{
#line 1901 "unify_proc.m"
  {
#line 1901 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1901 "unify_proc.m"
    MR_Word check_hlds__unify_proc__LambdaHeadVar__2_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 1)));
#line 1901 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 0)));
#line 1901 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 2)));
#line 1901 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__1_21, (MR_Integer) 3)));

#line 1901 "unify_proc.m"
    return check_hlds__unify_proc__LambdaHeadVar__2_22;
#line 1901 "unify_proc.m"
  }
#line 1901 "unify_proc.m"
}

#line 487 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__487__1_2_p_0(
#line 487 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ErrorProcs_24,
#line 487 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_34)
#line 487 "unify_proc.m"
{
#line 487 "unify_proc.m"
  {
#line 487 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[2], ((MR_Box) (check_hlds__unify_proc__ErrorProcs_24)), ((MR_Box) (check_hlds__unify_proc__HeadVar__2_34)));
    }
#line 487 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 487 "unify_proc.m"
  }
#line 487 "unify_proc.m"
}

#line 402 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__402__1_2_f_0(
#line 402 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 402 "unify_proc.m"
  MR_Word check_hlds__unify_proc__LambdaHeadVar__1_37)
#line 402 "unify_proc.m"
{
#line 402 "unify_proc.m"
  {
#line 402 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 402 "unify_proc.m"
    MR_Word check_hlds__unify_proc__LambdaHeadVar__2_38;

#line 403 "unify_proc.m"
    {
#line 403 "unify_proc.m"
      check_hlds__unify_proc__LambdaHeadVar__2_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 403 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__2_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__2_38, 1) = ((MR_Box) (check_hlds__unify_proc__LambdaHeadVar__1_37));
#line 403 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__2_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__LambdaHeadVar__2_38, 3) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 403 "unify_proc.m"
    }
#line 402 "unify_proc.m"
    return check_hlds__unify_proc__LambdaHeadVar__2_38;
#line 402 "unify_proc.m"
  }
#line 402 "unify_proc.m"
}

#line 179 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_req_map_0_0(
#line 179 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 179 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 179 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 179 "unify_proc.m"
{
#line 179 "unify_proc.m"
  {
#line 179 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 179 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_4 = check_hlds__unify_proc__HeadVar__2_2;
#line 179 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_5 = check_hlds__unify_proc__HeadVar__3_3;

#line 179 "unify_proc.m"
    {
#line 179 "unify_proc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_5)));
    }
#line 179 "unify_proc.m"
  }
#line 179 "unify_proc.m"
}

#line 179 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_req_map_0_0(
#line 179 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 179 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 179 "unify_proc.m"
{
#line 179 "unify_proc.m"
  {
#line 179 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 179 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_3 = check_hlds__unify_proc__HeadVar__1_1;
#line 179 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_4 = check_hlds__unify_proc__HeadVar__2_2;

#line 179 "unify_proc.m"
    {
#line 179 "unify_proc.m"
      check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_4)));
    }
#line 179 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 179 "unify_proc.m"
  }
#line 179 "unify_proc.m"
}

#line 2096 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
#line 2096 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 2096 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 2096 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 2096 "unify_proc.m"
{
#line 2096 "unify_proc.m"
  {
#line 2096 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2096 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_15 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 2096 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_16 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 2096 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_15 == check_hlds__unify_proc__CastY_16);
#line 2096 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 3064 "check_hlds.unify_proc.c"
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
#line 2096 "unify_proc.m"
    else
#line 2096 "unify_proc.m"
      {
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_12_12;

#line 2096 "unify_proc.m"
        {
#line 2096 "unify_proc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[4], &check_hlds__unify_proc__V_12_12, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_8_8)));
        }
#line 3094 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_12_12 == (MR_Integer) 0);
#line 2096 "unify_proc.m"
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2096 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 2096 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_12_12;
#line 2096 "unify_proc.m"
        else
#line 2096 "unify_proc.m"
          {
#line 2096 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_13_13;

#line 2096 "unify_proc.m"
            {
#line 2096 "unify_proc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[1], &check_hlds__unify_proc__V_13_13, ((MR_Box) (check_hlds__unify_proc__V_5_5)), ((MR_Box) (check_hlds__unify_proc__V_9_9)));
            }
#line 3114 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_13_13 == (MR_Integer) 0);
#line 2096 "unify_proc.m"
            check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2096 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 2096 "unify_proc.m"
              *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_13_13;
#line 2096 "unify_proc.m"
            else
#line 2096 "unify_proc.m"
              {
#line 2096 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_14_14;

#line 2096 "unify_proc.m"
                {
#line 2096 "unify_proc.m"
                  hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__unify_proc__V_14_14, check_hlds__unify_proc__V_6_6, check_hlds__unify_proc__V_10_10);
                }
#line 3134 "check_hlds.unify_proc.c"
                check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_14_14 == (MR_Integer) 0);
#line 2096 "unify_proc.m"
                check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 2096 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 2096 "unify_proc.m"
                  *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_14_14;
#line 2096 "unify_proc.m"
                else
#line 2096 "unify_proc.m"
                  {
#line 2096 "unify_proc.m"
                    hlds__hlds_module____Compare____module_info_0_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__V_7_7, check_hlds__unify_proc__V_11_11);
                  }
#line 2096 "unify_proc.m"
              }
#line 2096 "unify_proc.m"
          }
#line 2096 "unify_proc.m"
      }
#line 2096 "unify_proc.m"
  }
#line 2096 "unify_proc.m"
}

#line 2096 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
#line 2096 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 2096 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 2096 "unify_proc.m"
{
#line 2096 "unify_proc.m"
  {
#line 2096 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2096 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_11 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
#line 2096 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_12 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

#line 2096 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_11 == check_hlds__unify_proc__CastY_12);
#line 2096 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 2096 "unify_proc.m"
      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 2096 "unify_proc.m"
    else
#line 2096 "unify_proc.m"
      {
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeInfo_14_14;
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 3)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 2)));
#line 2096 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 3)));

#line 3207 "check_hlds.unify_proc.c"
        {
#line 3209 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[4], ((MR_Box) (check_hlds__unify_proc__V_3_3)), ((MR_Box) (check_hlds__unify_proc__V_7_7)));
        }
#line 2096 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 2096 "unify_proc.m"
          {
#line 3216 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__TypeInfo_14_14 = (MR_Word) &check_hlds__unify_proc_scalar_common_2[1];
#line 3218 "check_hlds.unify_proc.c"
            {
#line 3220 "check_hlds.unify_proc.c"
              check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_14_14, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_8_8)));
            }
#line 2096 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 2096 "unify_proc.m"
              {
#line 3227 "check_hlds.unify_proc.c"
                {
#line 3229 "check_hlds.unify_proc.c"
                  check_hlds__unify_proc__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__unify_proc__V_5_5, check_hlds__unify_proc__V_9_9);
                }
#line 2096 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 3234 "check_hlds.unify_proc.c"
                  {
#line 3236 "check_hlds.unify_proc.c"
                    check_hlds__unify_proc__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__unify_proc__V_6_6, check_hlds__unify_proc__V_10_10);
                  }
#line 2096 "unify_proc.m"
              }
#line 2096 "unify_proc.m"
          }
#line 2096 "unify_proc.m"
      }
#line 2096 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 2096 "unify_proc.m"
  }
#line 2096 "unify_proc.m"
}

#line 75 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_id_0_0(
#line 75 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 75 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 75 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 75 "unify_proc.m"
{
#line 75 "unify_proc.m"
  {
#line 75 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 75 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_9 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 75 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_10 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 75 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_9 == check_hlds__unify_proc__CastY_10);
#line 75 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 3276 "check_hlds.unify_proc.c"
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "unify_proc.m"
    else
#line 75 "unify_proc.m"
      {
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8;

#line 75 "unify_proc.m"
        {
#line 75 "unify_proc.m"
          parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__unify_proc__V_8_8, check_hlds__unify_proc__V_4_4, check_hlds__unify_proc__V_6_6);
        }
#line 3298 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_8_8 == (MR_Integer) 0);
#line 75 "unify_proc.m"
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 75 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 75 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_8_8;
#line 75 "unify_proc.m"
        else
#line 75 "unify_proc.m"
          {
#line 75 "unify_proc.m"
            hlds__hlds_goal____Compare____uni_mode_0_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__V_5_5, check_hlds__unify_proc__V_7_7);
          }
#line 75 "unify_proc.m"
      }
#line 75 "unify_proc.m"
  }
#line 75 "unify_proc.m"
}

#line 75 "unify_proc.m"
MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_id_0_0(
#line 75 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 75 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 75 "unify_proc.m"
{
#line 75 "unify_proc.m"
  {
#line 75 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 75 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_7 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
#line 75 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_8 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

#line 75 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_7 == check_hlds__unify_proc__CastY_8);
#line 75 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 75 "unify_proc.m"
      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 75 "unify_proc.m"
    else
#line 75 "unify_proc.m"
      {
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));

#line 3357 "check_hlds.unify_proc.c"
        {
#line 3359 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__unify_proc__V_3_3, check_hlds__unify_proc__V_5_5);
        }
#line 75 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 3364 "check_hlds.unify_proc.c"
          {
#line 3366 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__succeeded = hlds__hlds_goal____Unify____uni_mode_0_0(check_hlds__unify_proc__V_4_4, check_hlds__unify_proc__V_6_6);
          }
#line 75 "unify_proc.m"
      }
#line 75 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 75 "unify_proc.m"
  }
#line 75 "unify_proc.m"
}

#line 499 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____unify_pred_item_0_0(
#line 499 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 499 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 499 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 499 "unify_proc.m"
{
#line 499 "unify_proc.m"
  {
#line 499 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 499 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 499 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 499 "unify_proc.m"
    {
#line 499 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Cast_HeadVar1_4, check_hlds__unify_proc__Cast_HeadVar2_5);
    }
#line 499 "unify_proc.m"
  }
#line 499 "unify_proc.m"
}

#line 499 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_pred_item_0_0(
#line 499 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 499 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 499 "unify_proc.m"
{
#line 3417 "check_hlds.unify_proc.c"
  {
#line 3419 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__HeadVar__2_1 == check_hlds__unify_proc__HeadVar__2_2);

#line 3422 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 3424 "check_hlds.unify_proc.c"
  }
#line 499 "unify_proc.m"
}

#line 69 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc____Compare____req_queue_0_0(
#line 69 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 69 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 69 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 69 "unify_proc.m"
{
#line 69 "unify_proc.m"
  {
#line 69 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 69 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_4 = check_hlds__unify_proc__HeadVar__2_2;
#line 69 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_5 = check_hlds__unify_proc__HeadVar__3_3;

#line 69 "unify_proc.m"
    {
#line 69 "unify_proc.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[3], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_5)));
    }
#line 69 "unify_proc.m"
  }
#line 69 "unify_proc.m"
}

#line 69 "unify_proc.m"
MR_bool MR_CALL 
check_hlds__unify_proc____Unify____req_queue_0_0(
#line 69 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 69 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 69 "unify_proc.m"
{
#line 69 "unify_proc.m"
  {
#line 69 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 69 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar1_3 = check_hlds__unify_proc__HeadVar__1_1;
#line 69 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cast_HeadVar2_4 = check_hlds__unify_proc__HeadVar__2_2;

#line 69 "unify_proc.m"
    {
#line 69 "unify_proc.m"
      check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[3], ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__unify_proc__Cast_HeadVar2_4)));
    }
#line 69 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 69 "unify_proc.m"
  }
#line 69 "unify_proc.m"
}

#line 181 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc____Compare____proc_requests_0_0(
#line 181 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 181 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 181 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 181 "unify_proc.m"
{
#line 181 "unify_proc.m"
  {
#line 181 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 181 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_9 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 181 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_10 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 181 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_9 == check_hlds__unify_proc__CastY_10);
#line 181 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 3513 "check_hlds.unify_proc.c"
      *check_hlds__unify_proc__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "unify_proc.m"
    else
#line 181 "unify_proc.m"
      {
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8;

#line 181 "unify_proc.m"
        {
#line 181 "unify_proc.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], &check_hlds__unify_proc__V_8_8, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_6_6)));
        }
#line 3535 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_8_8 == (MR_Integer) 0);
#line 181 "unify_proc.m"
        check_hlds__unify_proc__succeeded = !(check_hlds__unify_proc__succeeded);
#line 181 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 181 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__V_8_8;
#line 181 "unify_proc.m"
        else
#line 181 "unify_proc.m"
          {
#line 181 "unify_proc.m"
            {
#line 181 "unify_proc.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[3], check_hlds__unify_proc__HeadVar__1_1, ((MR_Box) (check_hlds__unify_proc__V_5_5)), ((MR_Box) (check_hlds__unify_proc__V_7_7)));
            }
#line 181 "unify_proc.m"
          }
#line 181 "unify_proc.m"
      }
#line 181 "unify_proc.m"
  }
#line 181 "unify_proc.m"
}

#line 181 "unify_proc.m"
MR_bool MR_CALL 
check_hlds__unify_proc____Unify____proc_requests_0_0(
#line 181 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 181 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 181 "unify_proc.m"
{
#line 181 "unify_proc.m"
  {
#line 181 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 181 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastX_7 = (MR_Integer) check_hlds__unify_proc__HeadVar__1_1;
#line 181 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__CastY_8 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;

#line 181 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CastX_7 == check_hlds__unify_proc__CastY_8);
#line 181 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 181 "unify_proc.m"
      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 181 "unify_proc.m"
    else
#line 181 "unify_proc.m"
      {
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeInfo_10_10;
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));

#line 3600 "check_hlds.unify_proc.c"
        {
#line 3602 "check_hlds.unify_proc.c"
          check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_2[0], ((MR_Box) (check_hlds__unify_proc__V_3_3)), ((MR_Box) (check_hlds__unify_proc__V_5_5)));
        }
#line 181 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 181 "unify_proc.m"
          {
#line 3609 "check_hlds.unify_proc.c"
            check_hlds__unify_proc__TypeInfo_10_10 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[3];
#line 3611 "check_hlds.unify_proc.c"
            {
#line 3613 "check_hlds.unify_proc.c"
              check_hlds__unify_proc__succeeded = mercury__builtin__unify_2_p_0(check_hlds__unify_proc__TypeInfo_10_10, ((MR_Box) (check_hlds__unify_proc__V_4_4)), ((MR_Box) (check_hlds__unify_proc__V_6_6)));
            }
#line 181 "unify_proc.m"
          }
#line 181 "unify_proc.m"
      }
#line 181 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 181 "unify_proc.m"
  }
#line 181 "unify_proc.m"
}

#line 1638 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
#line 1638 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__1_1,
#line 1638 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1638 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3)
#line 1638 "unify_proc.m"
{
#line 1638 "unify_proc.m"
  {
#line 1638 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1638 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar1_4 = (MR_Integer) check_hlds__unify_proc__HeadVar__2_2;
#line 1638 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Cast_HeadVar2_5 = (MR_Integer) check_hlds__unify_proc__HeadVar__3_3;

#line 1638 "unify_proc.m"
    {
#line 1638 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Cast_HeadVar1_4, check_hlds__unify_proc__Cast_HeadVar2_5);
    }
#line 1638 "unify_proc.m"
  }
#line 1638 "unify_proc.m"
}

#line 1638 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
#line 1638 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_1,
#line 1638 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2)
#line 1638 "unify_proc.m"
{
#line 3666 "check_hlds.unify_proc.c"
  {
#line 3668 "check_hlds.unify_proc.c"
    MR_bool check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__HeadVar__2_1 == check_hlds__unify_proc__HeadVar__2_2);

#line 3671 "check_hlds.unify_proc.c"
    return check_hlds__unify_proc__succeeded;
#line 3673 "check_hlds.unify_proc.c"
  }
#line 1638 "unify_proc.m"
}

#line 2076 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
#line 2076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_6,
#line 2076 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 2076 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_8,
#line 2076 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14,
#line 2076 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_15)
#line 2076 "unify_proc.m"
{
#line 2118 "unify_proc.m"
  {
#line 2118 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2118 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
#line 2118 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
#line 2118 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_12;
#line 2118 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_13;
#line 2118 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 2118 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25;

#line 2121 "unify_proc.m"
    {
#line 2121 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_7, check_hlds__unify_proc__Var_8, check_hlds__unify_proc__VarSet0_10, &check_hlds__unify_proc__VarSet_12);
    }
#line 2122 "unify_proc.m"
    {
#line 2122 "unify_proc.m"
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_8, check_hlds__unify_proc__Type_6, check_hlds__unify_proc__VarTypes0_11, &check_hlds__unify_proc__VarTypes_13);
    }
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 0)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 1)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 2)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_14, (MR_Integer) 3)));
#line 2124 "unify_proc.m"
    {
#line 2124 "unify_proc.m"
      MR_Word base;
#line 2124 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_15 = base;
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_12));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_13));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_27_27));
#line 2124 "unify_proc.m"
    }
#line 2118 "unify_proc.m"
  }
#line 2076 "unify_proc.m"
}

#line 2074 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
#line 2074 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_5,
#line 2074 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_6,
#line 2074 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12,
#line 2074 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_UPI_13)
#line 2074 "unify_proc.m"
{
#line 2110 "unify_proc.m"
  {
#line 2110 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_10;
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_11;
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2110 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25;
#line 2111 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
#line 2111 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
#line 2115 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 2115 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;

#line 2113 "unify_proc.m"
    {
#line 2113 "unify_proc.m"
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Var_6, check_hlds__unify_proc__VarSet0_8, &check_hlds__unify_proc__VarSet_10);
    }
#line 2114 "unify_proc.m"
    {
#line 2114 "unify_proc.m"
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_6, check_hlds__unify_proc__Type_5, check_hlds__unify_proc__VarTypes0_9, &check_hlds__unify_proc__VarTypes_11);
    }
#line 2115 "unify_proc.m"
    check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 0)));
#line 2115 "unify_proc.m"
    check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 1)));
#line 2115 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 2)));
#line 2115 "unify_proc.m"
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_UPI_0_12, (MR_Integer) 3)));
#line 2116 "unify_proc.m"
    {
#line 2116 "unify_proc.m"
      MR_Word base;
#line 2116 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2116 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_UPI_13 = base;
#line 2116 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_10));
#line 2116 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_11));
#line 2116 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_24_24));
#line 2116 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_25_25));
#line 2116 "unify_proc.m"
    }
#line 2110 "unify_proc.m"
  }
#line 2074 "unify_proc.m"
}

#line 2059 "unify_proc.m"
static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
#line 2059 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_3)
#line 2059 "unify_proc.m"
{
#line 2061 "unify_proc.m"
  {
#line 2061 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2061 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HeadVar__2_2;
#line 2061 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_4;
#line 2061 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_6_6;
#line 2061 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_7_7;
#line 2061 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_9;
#line 2061 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_10_10;

#line 2056 "unify_proc.m"
    {
#line 2056 "unify_proc.m"
      check_hlds__unify_proc__Builtin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2057 "unify_proc.m"
    {
#line 2057 "unify_proc.m"
      check_hlds__unify_proc__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_10_10, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_9));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_10_10, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2057 "unify_proc.m"
    }
#line 2057 "unify_proc.m"
    {
#line 2057 "unify_proc.m"
      check_hlds__unify_proc__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_6_6, 0) = ((MR_Box) (check_hlds__unify_proc__V_10_10));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_6_6, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2057 "unify_proc.m"
    }
#line 2062 "unify_proc.m"
    {
#line 2062 "unify_proc.m"
      check_hlds__unify_proc__V_7_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2062 "unify_proc.m"
    {
#line 2062 "unify_proc.m"
      check_hlds__unify_proc__SymName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 0) = ((MR_Box) (check_hlds__unify_proc__V_7_7));
#line 2062 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_4, 1) = ((MR_Box) (check_hlds__unify_proc__Name_3));
#line 2062 "unify_proc.m"
    }
#line 2061 "unify_proc.m"
    {
#line 2061 "unify_proc.m"
      check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_4));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__HeadVar__2_2, 3) = ((MR_Box) (check_hlds__unify_proc__V_6_6));
#line 2061 "unify_proc.m"
    }
#line 2061 "unify_proc.m"
    return check_hlds__unify_proc__HeadVar__2_2;
#line 2061 "unify_proc.m"
  }
#line 2059 "unify_proc.m"
}

#line 2035 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_6_p_0(
#line 2035 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVars_7,
#line 2035 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_8,
#line 2035 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 2035 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 2035 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 2035 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21)
#line 2035 "unify_proc.m"
{
#line 2039 "unify_proc.m"
  {
#line 2039 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Varset0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_16;
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Varset_17;
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types_18;
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_19;
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_49_49;
#line 2039 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_52_52;
#line 2128 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 2043 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Warnings_15;
#line 2133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 2133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 2133 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45;

#line 2043 "unify_proc.m"
    {
#line 2043 "unify_proc.m"
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__unify_proc__HeadVars_7, &check_hlds__unify_proc___Warnings_15, check_hlds__unify_proc__Goal0_8, &check_hlds__unify_proc__Goal_16, check_hlds__unify_proc__Varset0_12, &check_hlds__unify_proc__Varset_17, check_hlds__unify_proc__Types0_13, &check_hlds__unify_proc__Types_18, check_hlds__unify_proc__RttiVarMaps0_14, &check_hlds__unify_proc__RttiVarMaps_19);
    }
#line 2133 "unify_proc.m"
    check_hlds__unify_proc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 2133 "unify_proc.m"
    check_hlds__unify_proc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 2133 "unify_proc.m"
    check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 2133 "unify_proc.m"
    check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 2134 "unify_proc.m"
    check_hlds__unify_proc__V_49_49 = check_hlds__unify_proc__Varset_17;
#line 2134 "unify_proc.m"
    check_hlds__unify_proc__V_52_52 = check_hlds__unify_proc__V_46_46;
#line 2135 "unify_proc.m"
    {
#line 2135 "unify_proc.m"
      MR_Word base;
#line 2135 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2135 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_Info_21 = base;
#line 2135 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_49_49));
#line 2135 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Types_18));
#line 2135 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_19));
#line 2135 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_52_52));
#line 2135 "unify_proc.m"
    }
#line 2049 "unify_proc.m"
    {
#line 2049 "unify_proc.m"
      MR_Word base;
#line 2049 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2049 "unify_proc.m"
      *check_hlds__unify_proc__Clause_10 = base;
#line 2049 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2049 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goal_16));
#line 2049 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2049 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Context_9));
#line 2049 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2049 "unify_proc.m"
    }
#line 2039 "unify_proc.m"
  }
#line 2035 "unify_proc.m"
}

#line 1962 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_10,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_11,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__MaybeCompareRes_12,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Goal0_13,
#line 1962 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_14,
#line 1962 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_38,
#line 1962 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_39)
#line 1962 "unify_proc.m"
{
#line 1968 "unify_proc.m"
  {
#line 1968 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1968 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ShouldPretestEq_16;
#line 1968 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 1968 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_64;
#line 2015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 2015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 2015 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));

#line 2016 "unify_proc.m"
    {
#line 2016 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_63, &check_hlds__unify_proc__Globals_64);
    }
#line 2017 "unify_proc.m"
    {
#line 2017 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_64, (MR_Integer) 311, &check_hlds__unify_proc__ShouldPretestEq_16);
    }
#line 1973 "unify_proc.m"
#line 1973 "unify_proc.m"
    switch (check_hlds__unify_proc__ShouldPretestEq_16) {
#line 1973 "unify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1973 "unify_proc.m"
      case (MR_Integer) 0:
#line 1971 "unify_proc.m"
        {
#line 1972 "unify_proc.m"
          *check_hlds__unify_proc__Goal_14 = check_hlds__unify_proc__Goal0_13;
#line 1971 "unify_proc.m"
          *check_hlds__unify_proc__STATE_VARIABLE_Info_39 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_38;
#line 1971 "unify_proc.m"
        }
#line 1973 "unify_proc.m"
        break;
#line 1973 "unify_proc.m"
      case (MR_Integer) 1:
#line 1974 "unify_proc.m"
        {
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastType_17;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastX_18;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastY_19;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastXGoal0_20;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastYGoal0_21;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastXGoal_22;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastYGoal_23;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__EqualityGoal0_24;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__EqualityGoal_25;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CondGoalExpr_26;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__GoalInfo0_27;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__ContextGoalInfo_28;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CondGoal_29;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__EqualGoal_30;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__GoalInfo_31;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__GoalExpr_36;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__FeaturedGoalInfo_37;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_41_41;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_48_48;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_53_53;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_54_54;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_55_55;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__ModuleInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Globals_72;
#line 1974 "unify_proc.m"
          MR_Word check_hlds__unify_proc__CastPointers_73;
#line 2022 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
#line 2022 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
#line 2022 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));

#line 2023 "unify_proc.m"
          {
#line 2023 "unify_proc.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_71, &check_hlds__unify_proc__Globals_72);
          }
#line 2024 "unify_proc.m"
          {
#line 2024 "unify_proc.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_72, (MR_Integer) 266, &check_hlds__unify_proc__CastPointers_73);
          }
#line 2028 "unify_proc.m"
#line 2028 "unify_proc.m"
          switch (check_hlds__unify_proc__CastPointers_73) {
#line 2028 "unify_proc.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2028 "unify_proc.m"
            case (MR_Integer) 0:
#line 2030 "unify_proc.m"
              {
#line 2030 "unify_proc.m"
                check_hlds__unify_proc__CastType_17 = parse_tree__builtin_lib_types__int_type_0_f_0();
              }
#line 2028 "unify_proc.m"
              break;
#line 2028 "unify_proc.m"
            case (MR_Integer) 1:
#line 2027 "unify_proc.m"
              {
#line 2027 "unify_proc.m"
                check_hlds__unify_proc__CastType_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              }
#line 2028 "unify_proc.m"
              break;
#line 2028 "unify_proc.m"
          }
#line 1976 "unify_proc.m"
          {
#line 1976 "unify_proc.m"
            check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__CastType_17, (MR_String) "CastX", &check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__STATE_VARIABLE_Info_0_38, &check_hlds__unify_proc__STATE_VARIABLE_Info_41_41);
          }
#line 1977 "unify_proc.m"
          {
#line 1977 "unify_proc.m"
            check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__CastType_17, (MR_String) "CastY", &check_hlds__unify_proc__CastY_19, check_hlds__unify_proc__STATE_VARIABLE_Info_41_41, check_hlds__unify_proc__STATE_VARIABLE_Info_39);
          }
#line 1978 "unify_proc.m"
          {
#line 1978 "unify_proc.m"
            hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_10, check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__CastXGoal0_20);
          }
#line 1979 "unify_proc.m"
          {
#line 1979 "unify_proc.m"
            hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_11, check_hlds__unify_proc__CastY_19, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__CastYGoal0_21);
          }
#line 1980 "unify_proc.m"
          {
#line 1980 "unify_proc.m"
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastXGoal0_20, &check_hlds__unify_proc__CastXGoal_22);
          }
#line 1981 "unify_proc.m"
          {
#line 1981 "unify_proc.m"
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastYGoal0_21, &check_hlds__unify_proc__CastYGoal_23);
          }
#line 1982 "unify_proc.m"
          {
#line 1982 "unify_proc.m"
            check_hlds__unify_proc__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1982 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_48_48, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_19));
#line 1982 "unify_proc.m"
          }
#line 1982 "unify_proc.m"
          {
#line 1982 "unify_proc.m"
            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_18, check_hlds__unify_proc__V_48_48, check_hlds__unify_proc__Context_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__EqualityGoal0_24);
          }
#line 1984 "unify_proc.m"
          {
#line 1984 "unify_proc.m"
            hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 19, check_hlds__unify_proc__EqualityGoal0_24, &check_hlds__unify_proc__EqualityGoal_25);
          }
#line 1986 "unify_proc.m"
          {
#line 1986 "unify_proc.m"
            check_hlds__unify_proc__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 0) = ((MR_Box) (check_hlds__unify_proc__EqualityGoal_25));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1986 "unify_proc.m"
          }
#line 1986 "unify_proc.m"
          {
#line 1986 "unify_proc.m"
            check_hlds__unify_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_23));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (check_hlds__unify_proc__V_55_55));
#line 1986 "unify_proc.m"
          }
#line 1986 "unify_proc.m"
          {
#line 1986 "unify_proc.m"
            check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_22));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_54_54));
#line 1986 "unify_proc.m"
          }
#line 1986 "unify_proc.m"
          {
#line 1986 "unify_proc.m"
            check_hlds__unify_proc__CondGoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1986 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__CondGoalExpr_26, 2) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1986 "unify_proc.m"
          }
#line 1987 "unify_proc.m"
          {
#line 1987 "unify_proc.m"
            hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_27);
          }
#line 1988 "unify_proc.m"
          {
#line 1988 "unify_proc.m"
            hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_9, check_hlds__unify_proc__GoalInfo0_27, &check_hlds__unify_proc__ContextGoalInfo_28);
          }
#line 1989 "unify_proc.m"
          {
#line 1989 "unify_proc.m"
            check_hlds__unify_proc__CondGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1989 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CondGoal_29, 0) = ((MR_Box) (check_hlds__unify_proc__CondGoalExpr_26));
#line 1989 "unify_proc.m"
            MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CondGoal_29, 1) = ((MR_Box) (check_hlds__unify_proc__ContextGoalInfo_28));
#line 1989 "unify_proc.m"
          }
#line 1994 "unify_proc.m"
          if ((check_hlds__unify_proc__MaybeCompareRes_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1991 "unify_proc.m"
            {
#line 1992 "unify_proc.m"
              {
#line 1992 "unify_proc.m"
                check_hlds__unify_proc__EqualGoal_30 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_9);
              }
#line 1993 "unify_proc.m"
              check_hlds__unify_proc__GoalInfo_31 = check_hlds__unify_proc__ContextGoalInfo_28;
#line 1991 "unify_proc.m"
            }
#line 1994 "unify_proc.m"
          else
#line 1995 "unify_proc.m"
            {
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Res_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompareRes_12, (MR_Integer) 0)));
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__EqualGoalInfo_34;
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__InstmapDelta_35;
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_57_57;
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__SymName_79;
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_81_81;
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_82_82;
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Builtin_84;
#line 1995 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_85_85;
#line 1997 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_33_33;

#line 2056 "unify_proc.m"
              {
#line 2056 "unify_proc.m"
                check_hlds__unify_proc__Builtin_84 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 2057 "unify_proc.m"
              {
#line 2057 "unify_proc.m"
                check_hlds__unify_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_85_85, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_84));
#line 2057 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_85_85, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2057 "unify_proc.m"
              }
#line 2057 "unify_proc.m"
              {
#line 2057 "unify_proc.m"
                check_hlds__unify_proc__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2057 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__V_85_85));
#line 2057 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2057 "unify_proc.m"
              }
#line 2062 "unify_proc.m"
              {
#line 2062 "unify_proc.m"
                check_hlds__unify_proc__V_82_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 2062 "unify_proc.m"
              {
#line 2062 "unify_proc.m"
                check_hlds__unify_proc__SymName_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
#line 2062 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_79, 1) = ((MR_Box) ((MR_String) "="));
#line 2062 "unify_proc.m"
              }
#line 2061 "unify_proc.m"
              {
#line 2061 "unify_proc.m"
                check_hlds__unify_proc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2061 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_79));
#line 2061 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2061 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_57_57, 3) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 2061 "unify_proc.m"
              }
#line 1996 "unify_proc.m"
              {
#line 1996 "unify_proc.m"
                hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_32, check_hlds__unify_proc__V_57_57, &check_hlds__unify_proc__EqualGoal_30);
              }
#line 1997 "unify_proc.m"
              check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 0)));
#line 1997 "unify_proc.m"
              check_hlds__unify_proc__EqualGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__EqualGoal_30, (MR_Integer) 1)));
#line 1998 "unify_proc.m"
              {
#line 1998 "unify_proc.m"
                check_hlds__unify_proc__InstmapDelta_35 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unify_proc__EqualGoalInfo_34);
              }
#line 1999 "unify_proc.m"
              {
#line 1999 "unify_proc.m"
                hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__unify_proc__InstmapDelta_35, check_hlds__unify_proc__ContextGoalInfo_28, &check_hlds__unify_proc__GoalInfo_31);
              }
#line 1995 "unify_proc.m"
            }
#line 2002 "unify_proc.m"
          {
#line 2002 "unify_proc.m"
            check_hlds__unify_proc__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2002 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2002 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 2) = ((MR_Box) (check_hlds__unify_proc__CondGoal_29));
#line 2002 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 3) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_30));
#line 2002 "unify_proc.m"
            MR_hl_field(MR_mktag(3), check_hlds__unify_proc__GoalExpr_36, 4) = ((MR_Box) (check_hlds__unify_proc__Goal0_13));
#line 2002 "unify_proc.m"
          }
#line 2003 "unify_proc.m"
          {
#line 2003 "unify_proc.m"
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__unify_proc__GoalInfo_31, &check_hlds__unify_proc__FeaturedGoalInfo_37);
          }
#line 2005 "unify_proc.m"
          {
#line 2005 "unify_proc.m"
            MR_Word base;
#line 2005 "unify_proc.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2005 "unify_proc.m"
            *check_hlds__unify_proc__Goal_14 = base;
#line 2005 "unify_proc.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__GoalExpr_36));
#line 2005 "unify_proc.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__FeaturedGoalInfo_37));
#line 2005 "unify_proc.m"
          }
#line 1974 "unify_proc.m"
        }
#line 1973 "unify_proc.m"
        break;
#line 1973 "unify_proc.m"
    }
#line 1968 "unify_proc.m"
  }
#line 1962 "unify_proc.m"
}

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1950 "unify_proc.m"
{
#line 1950 "unify_proc.m"
  {
#line 1950 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1950 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0, 1);
#line 1950 "unify_proc.m"
  }
#line 1950 "unify_proc.m"
}

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_3(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1950 "unify_proc.m"
{
#line 1950 "unify_proc.m"
  {
#line 1950 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1950 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25);
#line 1950 "unify_proc.m"
    {
#line 1950 "unify_proc.m"
      check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(check_hlds__unify_proc__env_ptr);
    }
#line 1950 "unify_proc.m"
  }
#line 1950 "unify_proc.m"
}

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_4(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1950 "unify_proc.m"
{
#line 1950 "unify_proc.m"
  {
#line 1950 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 4520 "check_hlds.unify_proc.c"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
#line 1951 "unify_proc.m"
    {
#line 1951 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__TypeInfo_43_43, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVar_25)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42)));
    }
#line 1951 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1951 "unify_proc.m"
      {
#line 1951 "unify_proc.m"
        check_hlds__unify_proc__unify_var_lists_2_7_p_0_1(check_hlds__unify_proc__env_ptr);
      }
#line 1950 "unify_proc.m"
  }
#line 1950 "unify_proc.m"
}

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_2(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1950 "unify_proc.m"
{
#line 1950 "unify_proc.m"
  {
#line 1950 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1951 "unify_proc.m"
    {
#line 1951 "unify_proc.m"
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__V_42_42, check_hlds__unify_proc__unify_var_lists_2_7_p_0_4, check_hlds__unify_proc__env_ptr);
    }
#line 1950 "unify_proc.m"
  }
#line 1950 "unify_proc.m"
}

#line 1950 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(
#line 1950 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1950 "unify_proc.m"
{
#line 1950 "unify_proc.m"
  {
#line 1950 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1950 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__commit_0) == 0)
#line 1950 "unify_proc.m"
      {
#line 1950 "unify_proc.m"
        {
#line 1950 "unify_proc.m"
          {
#line 1950 "unify_proc.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__conv0_ExistQTVar_25, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__unify_var_lists_2_7_p_0_3, check_hlds__unify_proc__env_ptr);
          }
#line 1950 "unify_proc.m"
        }
#line 1950 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_FALSE;
#line 1950 "unify_proc.m"
      }
#line 1950 "unify_proc.m"
    else
#line 1950 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1950 "unify_proc.m"
  }
#line 1950 "unify_proc.m"
}

#line 1929 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__unify_var_lists_2_7_p_0(
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1929 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__5_5,
#line 1929 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 1929 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
#line 1929 "unify_proc.m"
{
#line 1929 "unify_proc.m"
  {
#line 1929 "unify_proc.m"
    struct check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0_s check_hlds__unify_proc__env;

#line 1929 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2 = check_hlds__unify_proc__ExistQTVars_2;
#line 1933 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1933 "unify_proc.m"
      {
#line 1933 "unify_proc.m"
        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1933 "unify_proc.m"
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1933 "unify_proc.m"
          {
#line 1933 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1933 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1933 "unify_proc.m"
              {
#line 1933 "unify_proc.m"
                *check_hlds__unify_proc__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1933 "unify_proc.m"
                *check_hlds__unify_proc__STATE_VARIABLE_Info_7 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1933 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1933 "unify_proc.m"
              }
#line 1933 "unify_proc.m"
          }
#line 1933 "unify_proc.m"
      }
#line 1933 "unify_proc.m"
    else
#line 1935 "unify_proc.m"
      {
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_15;
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Xs_16;
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_17;
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ys_18;
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_19;
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goals_20;
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Context_23;
#line 1935 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
#line 1936 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_38_38;
#line 1936 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1936 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 1939 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ModuleInfo_24;
#line 1939 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_28_28;
#line 2131 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_45_45;
#line 2131 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_46_46;
#line 2131 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_47_47;

#line 1934 "unify_proc.m"
        (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1934 "unify_proc.m"
        if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1934 "unify_proc.m"
          {
#line 1934 "unify_proc.m"
            check_hlds__unify_proc__X_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1934 "unify_proc.m"
            check_hlds__unify_proc__Xs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1934 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1934 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1934 "unify_proc.m"
              {
#line 1934 "unify_proc.m"
                check_hlds__unify_proc__Y_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 0)));
#line 1934 "unify_proc.m"
                check_hlds__unify_proc__Ys_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 1)));
#line 1936 "unify_proc.m"
                check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 0)));
#line 1936 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 1)));
#line 1936 "unify_proc.m"
                check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 2)));
#line 1936 "unify_proc.m"
                check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_12, (MR_Integer) 3)));
#line 1937 "unify_proc.m"
                {
#line 1937 "unify_proc.m"
                  mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_23);
                }
#line 2131 "unify_proc.m"
                check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
                check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
                check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2131 "unify_proc.m"
                check_hlds__unify_proc__ModuleInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 1940 "unify_proc.m"
                {
#line 1940 "unify_proc.m"
                  check_hlds__unify_proc__V_28_28 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_24, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__Type_22);
                }
#line 1940 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = (check_hlds__unify_proc__V_28_28 == (MR_Integer) 0);
#line 1943 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1942 "unify_proc.m"
                  {
#line 1942 "unify_proc.m"
                    {
#line 1942 "unify_proc.m"
                      check_hlds__unify_proc__Goal_19 = hlds__make_goal__true_goal_0_f_0();
                    }
#line 1942 "unify_proc.m"
                    check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1942 "unify_proc.m"
                  }
#line 1943 "unify_proc.m"
                else
#line 1954 "unify_proc.m"
                  {
#line 1950 "unify_proc.m"
                    {
#line 1950 "unify_proc.m"
                      check_hlds__unify_proc__unify_var_lists_2_7_p_0_5(&check_hlds__unify_proc__env);
                    }
#line 1954 "unify_proc.m"
                    if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1953 "unify_proc.m"
                      {
#line 1953 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_30_30;
#line 1953 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_32_32;

#line 1953 "unify_proc.m"
                        {
#line 1953 "unify_proc.m"
                          check_hlds__unify_proc__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (check_hlds__unify_proc__Y_17));
#line 1953 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1953 "unify_proc.m"
                        }
#line 1953 "unify_proc.m"
                        {
#line 1953 "unify_proc.m"
                          check_hlds__unify_proc__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__X_15));
#line 1953 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_32_32));
#line 1953 "unify_proc.m"
                        }
#line 1953 "unify_proc.m"
                        {
#line 1953 "unify_proc.m"
                          check_hlds__unify_proc__build_call_6_p_0((MR_String) "typed_unify", check_hlds__unify_proc__V_30_30, check_hlds__unify_proc__Context_23, &check_hlds__unify_proc__Goal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
                        }
#line 1953 "unify_proc.m"
                      }
#line 1954 "unify_proc.m"
                    else
#line 1955 "unify_proc.m"
                      {
#line 1955 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_34_34;

#line 1955 "unify_proc.m"
                        {
#line 1955 "unify_proc.m"
                          check_hlds__unify_proc__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1955 "unify_proc.m"
                          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_34_34, 0) = ((MR_Box) (check_hlds__unify_proc__Y_17));
#line 1955 "unify_proc.m"
                        }
#line 1955 "unify_proc.m"
                        {
#line 1955 "unify_proc.m"
                          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_15, check_hlds__unify_proc__V_34_34, check_hlds__unify_proc__Context_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_19);
                        }
#line 1955 "unify_proc.m"
                        check_hlds__unify_proc__STATE_VARIABLE_Info_31_31 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 1955 "unify_proc.m"
                      }
#line 1954 "unify_proc.m"
                  }
#line 1958 "unify_proc.m"
                {
#line 1958 "unify_proc.m"
                  (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = check_hlds__unify_proc__unify_var_lists_2_7_p_0(check_hlds__unify_proc__ArgTypes_13, (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__Xs_16, check_hlds__unify_proc__Ys_18, &check_hlds__unify_proc__Goals_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
                }
#line 1935 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded)
#line 1935 "unify_proc.m"
                  {
#line 1935 "unify_proc.m"
                    {
#line 1935 "unify_proc.m"
                      MR_Word base;
#line 1935 "unify_proc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1935 "unify_proc.m"
                      *check_hlds__unify_proc__HeadVar__5_5 = base;
#line 1935 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Goal_19));
#line 1935 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Goals_20));
#line 1935 "unify_proc.m"
                    }
#line 1935 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded = MR_TRUE;
#line 1935 "unify_proc.m"
                  }
#line 1934 "unify_proc.m"
              }
#line 1934 "unify_proc.m"
          }
#line 1935 "unify_proc.m"
      }
#line 1933 "unify_proc.m"
    return (check_hlds__unify_proc__env).check_hlds__unify_proc__unify_var_lists_2_7_p_0_env_0__succeeded;
#line 1929 "unify_proc.m"
  }
#line 1929 "unify_proc.m"
}

#line 1901 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0_1(
#line 1901 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1901 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 1901 "unify_proc.m"
{
#line 1901 "unify_proc.m"
  {
#line 1901 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 1901 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1901 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_LambdaHeadVar__2_22;

#line 1901 "unify_proc.m"
    {
#line 1901 "unify_proc.m"
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1901__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 1901 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_LambdaHeadVar__2_22));
#line 1901 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 1901 "unify_proc.m"
  }
#line 1901 "unify_proc.m"
}

#line 1895 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_5_p_0(
#line 1895 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorArgs_6,
#line 1895 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_7,
#line 1895 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Vars_8,
#line 1895 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1895 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
#line 1895 "unify_proc.m"
{
#line 1900 "unify_proc.m"
  {
#line 1900 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1900 "unify_proc.m"
    if ((check_hlds__unify_proc__ExistQTVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1900 "unify_proc.m"
      {
#line 1900 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_10;

#line 1901 "unify_proc.m"
        {
#line 1901 "unify_proc.m"
          check_hlds__unify_proc__ArgTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[4], check_hlds__unify_proc__CtorArgs_6);
        }
#line 1902 "unify_proc.m"
        {
#line 1902 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, check_hlds__unify_proc__STATE_VARIABLE_Info_18);
        }
#line 1900 "unify_proc.m"
      }
#line 1900 "unify_proc.m"
    else
#line 1904 "unify_proc.m"
      {
#line 1904 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1904 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumVars_15;
#line 1904 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_16;
#line 2128 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2128 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 2128 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 2133 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 2133 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 2133 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_41_41;
#line 2133 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_38_38;

#line 1911 "unify_proc.m"
        {
#line 1911 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__CtorArgs_6, &check_hlds__unify_proc__NumVars_15);
        }
#line 1912 "unify_proc.m"
        {
#line 1912 "unify_proc.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_15, check_hlds__unify_proc__Vars_8, check_hlds__unify_proc__VarSet0_14, &check_hlds__unify_proc__VarSet_16);
        }
#line 2133 "unify_proc.m"
        check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 2133 "unify_proc.m"
        check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2133 "unify_proc.m"
        check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 2133 "unify_proc.m"
        check_hlds__unify_proc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 2133 "unify_proc.m"
        {
#line 2133 "unify_proc.m"
          MR_Word base;
#line 2133 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2133 "unify_proc.m"
          *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = base;
#line 2133 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_16));
#line 2133 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 2133 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 2133 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 2133 "unify_proc.m"
        }
#line 1904 "unify_proc.m"
      }
#line 1900 "unify_proc.m"
  }
#line 1895 "unify_proc.m"
}

#line 1887 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
#line 1887 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1887 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__2_2,
#line 1887 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_3,
#line 1887 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_4)
#line 1887 "unify_proc.m"
{
#line 1890 "unify_proc.m"
  {
#line 1890 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1890 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1890 "unify_proc.m"
      {
#line 1890 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1890 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_4 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_3;
#line 1890 "unify_proc.m"
      }
#line 1890 "unify_proc.m"
    else
#line 1891 "unify_proc.m"
      {
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Var_10;
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars_11;
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_15_15;
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_24;
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes_25;
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_36_36;
#line 1891 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_37_37;
#line 2111 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 2111 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 2115 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_34_34;
#line 2115 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_35_35;

#line 2113 "unify_proc.m"
        {
#line 2113 "unify_proc.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_22, &check_hlds__unify_proc__VarSet_24);
        }
#line 2114 "unify_proc.m"
        {
#line 2114 "unify_proc.m"
          hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__VarTypes0_23, &check_hlds__unify_proc__VarTypes_25);
        }
#line 2115 "unify_proc.m"
        check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
#line 2115 "unify_proc.m"
        check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
#line 2115 "unify_proc.m"
        check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
#line 2115 "unify_proc.m"
        check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
#line 2116 "unify_proc.m"
        {
#line 2116 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2116 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_24));
#line 2116 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_25));
#line 2116 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 2116 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 2116 "unify_proc.m"
        }
#line 1893 "unify_proc.m"
        {
#line 1893 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__Types_9, &check_hlds__unify_proc__Vars_11, check_hlds__unify_proc__STATE_VARIABLE_Info_15_15, check_hlds__unify_proc__STATE_VARIABLE_Info_4);
        }
#line 1891 "unify_proc.m"
        {
#line 1891 "unify_proc.m"
          MR_Word base;
#line 1891 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__2_2 = base;
#line 1891 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_10));
#line 1891 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Vars_11));
#line 1891 "unify_proc.m"
        }
#line 1891 "unify_proc.m"
      }
#line 1890 "unify_proc.m"
  }
#line 1887 "unify_proc.m"
}

#line 1877 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
#line 1877 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1877 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_2,
#line 1877 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_3,
#line 1877 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__4_4,
#line 1877 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_5,
#line 1877 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_6)
#line 1877 "unify_proc.m"
{
#line 1881 "unify_proc.m"
  {
#line 1881 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1881 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1881 "unify_proc.m"
      {
#line 1881 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1881 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_6 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_5;
#line 1881 "unify_proc.m"
      }
#line 1881 "unify_proc.m"
    else
#line 1883 "unify_proc.m"
      {
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Var_16;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars_17;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;
#line 1883 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__V_22_22;
#line 1883 "unify_proc.m"
        MR_String check_hlds__unify_proc__NumStr_32;
#line 1883 "unify_proc.m"
        MR_String check_hlds__unify_proc__Name_33;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_41;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes0_42;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_43;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarTypes_44;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_55_55;
#line 1883 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_56_56;
#line 2119 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_48_48;
#line 2119 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_49_49;
#line 2123 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 2123 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_54_54;

#line 1873 "unify_proc.m"
        {
#line 1873 "unify_proc.m"
          mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_3, &check_hlds__unify_proc__NumStr_32);
        }
#line 1874 "unify_proc.m"
        {
#line 1874 "unify_proc.m"
          mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__NumStr_32, &check_hlds__unify_proc__Name_33);
        }
#line 2119 "unify_proc.m"
        check_hlds__unify_proc__VarSet0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 2119 "unify_proc.m"
        check_hlds__unify_proc__VarTypes0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 2119 "unify_proc.m"
        check_hlds__unify_proc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 2119 "unify_proc.m"
        check_hlds__unify_proc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 2121 "unify_proc.m"
        {
#line 2121 "unify_proc.m"
          mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_33, &check_hlds__unify_proc__Var_16, check_hlds__unify_proc__VarSet0_41, &check_hlds__unify_proc__VarSet_43);
        }
#line 2122 "unify_proc.m"
        {
#line 2122 "unify_proc.m"
          hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__Var_16, check_hlds__unify_proc__Type_12, check_hlds__unify_proc__VarTypes0_42, &check_hlds__unify_proc__VarTypes_44);
        }
#line 2123 "unify_proc.m"
        check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
#line 2123 "unify_proc.m"
        check_hlds__unify_proc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
#line 2123 "unify_proc.m"
        check_hlds__unify_proc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
#line 2123 "unify_proc.m"
        check_hlds__unify_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
#line 2124 "unify_proc.m"
        {
#line 2124 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_43));
#line 2124 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_44));
#line 2124 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (check_hlds__unify_proc__V_55_55));
#line 2124 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 2124 "unify_proc.m"
        }
#line 1885 "unify_proc.m"
        check_hlds__unify_proc__V_22_22 = (check_hlds__unify_proc__Num_3 + (MR_Integer) 1);
#line 1885 "unify_proc.m"
        {
#line 1885 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__Types_13, check_hlds__unify_proc__BaseName_2, check_hlds__unify_proc__V_22_22, &check_hlds__unify_proc__Vars_17, check_hlds__unify_proc__STATE_VARIABLE_Info_21_21, check_hlds__unify_proc__STATE_VARIABLE_Info_6);
        }
#line 1883 "unify_proc.m"
        {
#line 1883 "unify_proc.m"
          MR_Word base;
#line 1883 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1883 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__4_4 = base;
#line 1883 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Var_16));
#line 1883 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Vars_17));
#line 1883 "unify_proc.m"
        }
#line 1883 "unify_proc.m"
      }
#line 1881 "unify_proc.m"
  }
#line 1877 "unify_proc.m"
}

#line 1869 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
#line 1869 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_7,
#line 1869 "unify_proc.m"
  MR_String check_hlds__unify_proc__BaseName_8,
#line 1869 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__Num_9,
#line 1869 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Var_10,
#line 1869 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1869 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15)
#line 1869 "unify_proc.m"
{
#line 1872 "unify_proc.m"
  {
#line 1872 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1872 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_12;
#line 1872 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_13;
#line 1872 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_23;
#line 1872 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_24;
#line 1872 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_25;
#line 1872 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_26;
#line 1872 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1872 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;

#line 1873 "unify_proc.m"
    {
#line 1873 "unify_proc.m"
      mercury__string__int_to_string_2_p_0(check_hlds__unify_proc__Num_9, &check_hlds__unify_proc__NumStr_12);
    }
#line 1874 "unify_proc.m"
    {
#line 1874 "unify_proc.m"
      mercury__string__append_3_p_2(check_hlds__unify_proc__BaseName_8, check_hlds__unify_proc__NumStr_12, &check_hlds__unify_proc__Name_13);
    }
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 2121 "unify_proc.m"
    {
#line 2121 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_13, check_hlds__unify_proc__Var_10, check_hlds__unify_proc__VarSet0_23, &check_hlds__unify_proc__VarSet_25);
    }
#line 2122 "unify_proc.m"
    {
#line 2122 "unify_proc.m"
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__unify_proc__Var_10, check_hlds__unify_proc__Type_7, check_hlds__unify_proc__VarTypes0_24, &check_hlds__unify_proc__VarTypes_26);
    }
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 2124 "unify_proc.m"
    {
#line 2124 "unify_proc.m"
      MR_Word base;
#line 2124 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_Info_15 = base;
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_25));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_26));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_38_38));
#line 2124 "unify_proc.m"
    }
#line 1872 "unify_proc.m"
  }
#line 1869 "unify_proc.m"
}

#line 1840 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_specific_call_9_p_0(
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialPredId_11,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_12,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstmapDelta_13,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Detism_14,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1840 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1840 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_26,
#line 1840 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_27)
#line 1840 "unify_proc.m"
{
#line 1846 "unify_proc.m"
  {
#line 1846 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1846 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 1859 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredName_19;
#line 1859 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredId_20;
#line 1859 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ProcId_21;

#line 1849 "unify_proc.m"
    {
#line 1849 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__polymorphism__get_special_proc_6_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__SpecialPredId_11, check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__PredName_19, &check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__ProcId_21);
    }
#line 1859 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1853 "unify_proc.m"
      {
#line 1853 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalExpr_22;
#line 1853 "unify_proc.m"
        MR_Word check_hlds__unify_proc__NonLocals_23;
#line 1853 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo0_24;
#line 1853 "unify_proc.m"
        MR_Word check_hlds__unify_proc__GoalInfo_25;

#line 1852 "unify_proc.m"
        {
#line 1852 "unify_proc.m"
          check_hlds__unify_proc__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_20));
#line 1852 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 1) = ((MR_Box) (check_hlds__unify_proc__ProcId_21));
#line 1852 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_12));
#line 1852 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1852 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1852 "unify_proc.m"
          MR_hl_field(MR_mktag(2), check_hlds__unify_proc__GoalExpr_22, 5) = ((MR_Box) (check_hlds__unify_proc__PredName_19));
#line 1852 "unify_proc.m"
        }
#line 1854 "unify_proc.m"
        {
#line 1854 "unify_proc.m"
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__ArgVars_12, &check_hlds__unify_proc__NonLocals_23);
        }
#line 1855 "unify_proc.m"
        {
#line 1855 "unify_proc.m"
          hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__unify_proc__NonLocals_23, check_hlds__unify_proc__InstmapDelta_13, check_hlds__unify_proc__Detism_14, (MR_Integer) 0, &check_hlds__unify_proc__GoalInfo0_24);
        }
#line 1857 "unify_proc.m"
        {
#line 1857 "unify_proc.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_24, &check_hlds__unify_proc__GoalInfo_25);
        }
#line 1858 "unify_proc.m"
        {
#line 1858 "unify_proc.m"
          MR_Word base;
#line 1858 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1858 "unify_proc.m"
          *check_hlds__unify_proc__Goal_16 = base;
#line 1858 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__GoalExpr_22));
#line 1858 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_25));
#line 1858 "unify_proc.m"
        }
#line 1853 "unify_proc.m"
      }
#line 1859 "unify_proc.m"
    else
#line 1864 "unify_proc.m"
      {
#line 1864 "unify_proc.m"
        {
#line 1864 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.build_specific_call\'/9", (MR_String) "lookup failed");
#line 1864 "unify_proc.m"
          return;
        }
#line 1864 "unify_proc.m"
      }
#line 1846 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_Info_27 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_26;
#line 1846 "unify_proc.m"
  }
#line 1840 "unify_proc.m"
}

#line 1821 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__build_call_6_p_0(
#line 1821 "unify_proc.m"
  MR_String check_hlds__unify_proc__Name_7,
#line 1821 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgVars_8,
#line 1821 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1821 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_10,
#line 1821 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_17,
#line 1821 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_18)
#line 1821 "unify_proc.m"
{
#line 1824 "unify_proc.m"
  {
#line 1824 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1824 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1824 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Arity_13;
#line 1824 "unify_proc.m"
    MR_Word check_hlds__unify_proc__MercuryBuiltin_16;
#line 1824 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1831 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_27_27;
#line 1831 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_14_14;
#line 1831 "unify_proc.m"
    MR_String check_hlds__unify_proc__V_15_15;

#line 1826 "unify_proc.m"
    {
#line 1826 "unify_proc.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], check_hlds__unify_proc__ArgVars_8, &check_hlds__unify_proc__Arity_13);
    }
#line 1831 "unify_proc.m"
    {
#line 1831 "unify_proc.m"
      check_hlds__unify_proc__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&check_hlds__unify_proc__V_14_14, check_hlds__unify_proc__Name_7, &check_hlds__unify_proc__V_15_15, &check_hlds__unify_proc__V_27_27);
    }
#line 1831 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1831 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Arity_13 == check_hlds__unify_proc__V_27_27);
#line 1833 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1832 "unify_proc.m"
      {
#line 1832 "unify_proc.m"
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      }
#line 1833 "unify_proc.m"
    else
#line 1834 "unify_proc.m"
      {
#line 1834 "unify_proc.m"
        check_hlds__unify_proc__MercuryBuiltin_16 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      }
#line 1838 "unify_proc.m"
    {
#line 1838 "unify_proc.m"
      check_hlds__unify_proc__V_24_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 1836 "unify_proc.m"
    {
#line 1836 "unify_proc.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__unify_proc__MercuryBuiltin_16, check_hlds__unify_proc__Name_7, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_3[2]), (MR_Integer) 6, (MR_Integer) 0, check_hlds__unify_proc__ArgVars_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__V_24_24, check_hlds__unify_proc__ModuleInfo_12, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Goal_10);
    }
#line 1824 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_Info_18 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_17;
#line 1824 "unify_proc.m"
  }
#line 1821 "unify_proc.m"
}

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_1(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1771 "unify_proc.m"
{
#line 1771 "unify_proc.m"
  {
#line 1771 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1771 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0, 1);
#line 1771 "unify_proc.m"
  }
#line 1771 "unify_proc.m"
}

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_3(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1771 "unify_proc.m"
{
#line 1771 "unify_proc.m"
  {
#line 1771 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1771 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71);
#line 1771 "unify_proc.m"
    {
#line 1771 "unify_proc.m"
      check_hlds__unify_proc__compare_args_2_9_p_0_2(check_hlds__unify_proc__env_ptr);
    }
#line 1771 "unify_proc.m"
  }
#line 1771 "unify_proc.m"
}

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_4(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1771 "unify_proc.m"
{
#line 1771 "unify_proc.m"
  {
#line 1771 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 5653 "check_hlds.unify_proc.c"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77 = (MR_Word) &check_hlds__unify_proc_scalar_common_1[0];
#line 1772 "unify_proc.m"
    {
#line 1772 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__TypeInfo_77_77, ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVar_71)), ((MR_Box) ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76)));
    }
#line 1772 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1772 "unify_proc.m"
      {
#line 1772 "unify_proc.m"
        check_hlds__unify_proc__compare_args_2_9_p_0_1(check_hlds__unify_proc__env_ptr);
      }
#line 1771 "unify_proc.m"
  }
#line 1771 "unify_proc.m"
}

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_2(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1771 "unify_proc.m"
{
#line 1771 "unify_proc.m"
  {
#line 1771 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1772 "unify_proc.m"
    {
#line 1772 "unify_proc.m"
      parse_tree__prog_type__type_contains_var_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__V_76_76, check_hlds__unify_proc__compare_args_2_9_p_0_4, check_hlds__unify_proc__env_ptr);
    }
#line 1771 "unify_proc.m"
  }
#line 1771 "unify_proc.m"
}

#line 1771 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0_5(
#line 1771 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 1771 "unify_proc.m"
{
#line 1771 "unify_proc.m"
  {
#line 1771 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 1771 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__commit_0) == 0)
#line 1771 "unify_proc.m"
      {
#line 1771 "unify_proc.m"
        {
#line 1771 "unify_proc.m"
          {
#line 1771 "unify_proc.m"
            mercury__list__member_2_p_1((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__conv0_ExistQTVar_71, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__compare_args_2_9_p_0_3, check_hlds__unify_proc__env_ptr);
          }
#line 1771 "unify_proc.m"
        }
#line 1771 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_FALSE;
#line 1771 "unify_proc.m"
      }
#line 1771 "unify_proc.m"
    else
#line 1771 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1771 "unify_proc.m"
  }
#line 1771 "unify_proc.m"
}

#line 1752 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__compare_args_2_9_p_0(
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_2,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_5,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_6,
#line 1752 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1752 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1752 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9)
#line 1752 "unify_proc.m"
{
#line 1752 "unify_proc.m"
  {
#line 1752 "unify_proc.m"
    struct check_hlds__unify_proc__compare_args_2_9_p_0_env_0_s check_hlds__unify_proc__env;

#line 1752 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2 = check_hlds__unify_proc__ExistQTVars_2;
#line 1756 "unify_proc.m"
    while (MR_TRUE)
#line 1756 "unify_proc.m"
      {
#line 1756 "unify_proc.m"
        /* tailcall optimized into a loop */
#line 1756 "unify_proc.m"
        if ((check_hlds__unify_proc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1756 "unify_proc.m"
          {
#line 1756 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Goal0_81;
#line 1756 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_82_82;
#line 1756 "unify_proc.m"
            MR_String check_hlds__unify_proc__V_83_83;
#line 1756 "unify_proc.m"
            MR_Word check_hlds__unify_proc__SymName_85;
#line 1756 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__V_86_86;
#line 1756 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_87_87;
#line 1756 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_88_88;
#line 1756 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Builtin_90;
#line 1756 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_91_91;
#line 1756 "unify_proc.m"
            MR_String check_hlds__unify_proc__V_92_92;
#line 1756 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__V_93_93;

#line 1756 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1756 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1756 "unify_proc.m"
              {
#line 1756 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1756 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1756 "unify_proc.m"
                  {
#line 1816 "unify_proc.m"
                    check_hlds__unify_proc__V_83_83 = (MR_String) "=";
#line 2061 "unify_proc.m"
                    check_hlds__unify_proc__V_86_86 = (MR_Integer) 0;
#line 2056 "unify_proc.m"
                    {
#line 2056 "unify_proc.m"
                      check_hlds__unify_proc__Builtin_90 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 2057 "unify_proc.m"
                    check_hlds__unify_proc__V_92_92 = (MR_String) "comparison_result";
#line 2057 "unify_proc.m"
                    check_hlds__unify_proc__V_93_93 = (MR_Integer) 0;
#line 2057 "unify_proc.m"
                    {
#line 2057 "unify_proc.m"
                      check_hlds__unify_proc__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_91_91, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_90));
#line 2057 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_91_91, 1) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
#line 2057 "unify_proc.m"
                    }
#line 2057 "unify_proc.m"
                    {
#line 2057 "unify_proc.m"
                      check_hlds__unify_proc__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2057 "unify_proc.m"
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_87_87, 0) = ((MR_Box) (check_hlds__unify_proc__V_91_91));
#line 2057 "unify_proc.m"
                      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_87_87, 1) = ((MR_Box) (check_hlds__unify_proc__V_93_93));
#line 2057 "unify_proc.m"
                    }
#line 2062 "unify_proc.m"
                    {
#line 2062 "unify_proc.m"
                      check_hlds__unify_proc__V_88_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 2062 "unify_proc.m"
                    {
#line 2062 "unify_proc.m"
                      check_hlds__unify_proc__SymName_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 0) = ((MR_Box) (check_hlds__unify_proc__V_88_88));
#line 2062 "unify_proc.m"
                      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_85, 1) = ((MR_Box) (check_hlds__unify_proc__V_83_83));
#line 2062 "unify_proc.m"
                    }
#line 2061 "unify_proc.m"
                    {
#line 2061 "unify_proc.m"
                      check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2061 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_85));
#line 2061 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 2) = ((MR_Box) (check_hlds__unify_proc__V_86_86));
#line 2061 "unify_proc.m"
                      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 3) = ((MR_Box) (check_hlds__unify_proc__V_87_87));
#line 2061 "unify_proc.m"
                    }
#line 1816 "unify_proc.m"
                    {
#line 1816 "unify_proc.m"
                      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_5, check_hlds__unify_proc__V_82_82, &check_hlds__unify_proc__Goal0_81);
                    }
#line 1817 "unify_proc.m"
                    {
#line 1817 "unify_proc.m"
                      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_6, check_hlds__unify_proc__Goal0_81, check_hlds__unify_proc__HeadVar__7_7);
                    }
#line 1756 "unify_proc.m"
                    *check_hlds__unify_proc__STATE_VARIABLE_Info_9 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_8;
#line 1756 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1756 "unify_proc.m"
                  }
#line 1756 "unify_proc.m"
              }
#line 1756 "unify_proc.m"
          }
#line 1756 "unify_proc.m"
        else
#line 1759 "unify_proc.m"
          {
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Arg_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__X_20;
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Xs_21;
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Y_22;
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Ys_23;
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo0_28;
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_29;
#line 1759 "unify_proc.m"
            MR_String check_hlds__unify_proc__ComparePred_32;
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ModuleInfo_33;
#line 1759 "unify_proc.m"
            MR_Word check_hlds__unify_proc__IsDummy_34;
#line 1763 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_72_72;
#line 1763 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_73_73;
#line 1763 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_74_74;
#line 2131 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_95_95;
#line 2131 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_96_96;
#line 2131 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_97_97;

#line 1758 "unify_proc.m"
            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1758 "unify_proc.m"
            if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1758 "unify_proc.m"
              {
#line 1758 "unify_proc.m"
                check_hlds__unify_proc__X_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1758 "unify_proc.m"
                check_hlds__unify_proc__Xs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1758 "unify_proc.m"
                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1758 "unify_proc.m"
                if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1758 "unify_proc.m"
                  {
#line 1758 "unify_proc.m"
                    check_hlds__unify_proc__Y_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 0)));
#line 1758 "unify_proc.m"
                    check_hlds__unify_proc__Ys_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__4_4, (MR_Integer) 1)));
#line 1760 "unify_proc.m"
                    {
#line 1760 "unify_proc.m"
                      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_28);
                    }
#line 1761 "unify_proc.m"
                    {
#line 1761 "unify_proc.m"
                      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_6, check_hlds__unify_proc__GoalInfo0_28, &check_hlds__unify_proc__GoalInfo_29);
                    }
#line 1763 "unify_proc.m"
                    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 0)));
#line 1763 "unify_proc.m"
                    (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 1)));
#line 1763 "unify_proc.m"
                    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 2)));
#line 1763 "unify_proc.m"
                    check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Arg_17, (MR_Integer) 3)));
#line 1771 "unify_proc.m"
                    {
#line 1771 "unify_proc.m"
                      check_hlds__unify_proc__compare_args_2_9_p_0_5(&check_hlds__unify_proc__env);
                    }
#line 1776 "unify_proc.m"
                    if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1775 "unify_proc.m"
                      check_hlds__unify_proc__ComparePred_32 = (MR_String) "typed_compare";
#line 1776 "unify_proc.m"
                    else
#line 1777 "unify_proc.m"
                      check_hlds__unify_proc__ComparePred_32 = (MR_String) "compare";
#line 2131 "unify_proc.m"
                    check_hlds__unify_proc__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
                    check_hlds__unify_proc__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
                    check_hlds__unify_proc__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 2131 "unify_proc.m"
                    check_hlds__unify_proc__ModuleInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 1780 "unify_proc.m"
                    {
#line 1780 "unify_proc.m"
                      check_hlds__unify_proc__IsDummy_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_33, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__Type_30);
                    }
#line 1785 "unify_proc.m"
#line 1785 "unify_proc.m"
                    switch (check_hlds__unify_proc__IsDummy_34) {
#line 1785 "unify_proc.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1785 "unify_proc.m"
                      case (MR_Integer) 0:
#line 1784 "unify_proc.m"
                        {
#line 1784 "unify_proc.m"
                          /* direct tailcall eliminated */
#line 1784 "unify_proc.m"
                          {
#line 1784 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__HeadVar__1__tmp_copy_1 = check_hlds__unify_proc__ArgTypes_18;
#line 1784 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__HeadVar__3__tmp_copy_3 = check_hlds__unify_proc__Xs_21;
#line 1784 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__HeadVar__4__tmp_copy_4 = check_hlds__unify_proc__Ys_23;

#line 1784 "unify_proc.m"
                            check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__HeadVar__4__tmp_copy_4;
#line 1784 "unify_proc.m"
                            check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__HeadVar__3__tmp_copy_3;
#line 1784 "unify_proc.m"
                            check_hlds__unify_proc__HeadVar__1_1 = check_hlds__unify_proc__HeadVar__1__tmp_copy_1;
#line 1784 "unify_proc.m"
                          }
#line 1784 "unify_proc.m"
                          continue;
#line 1784 "unify_proc.m"
                        }
#line 1785 "unify_proc.m"
                        break;
#line 1785 "unify_proc.m"
                      case (MR_Integer) 1:
#line 1792 "unify_proc.m"
                        {
#line 1788 "unify_proc.m"
                          (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__Xs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1788 "unify_proc.m"
                          if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1789 "unify_proc.m"
                            (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = (check_hlds__unify_proc__Ys_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1792 "unify_proc.m"
                          if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1791 "unify_proc.m"
                            {
#line 1791 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_44_44;
#line 1791 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_46_46;

#line 1791 "unify_proc.m"
                              {
#line 1791 "unify_proc.m"
                                check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1791 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_20));
#line 1791 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__HeadVar__4_4));
#line 1791 "unify_proc.m"
                              }
#line 1791 "unify_proc.m"
                              {
#line 1791 "unify_proc.m"
                                check_hlds__unify_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1791 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 0) = ((MR_Box) (check_hlds__unify_proc__R_5));
#line 1791 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1791 "unify_proc.m"
                              }
#line 1791 "unify_proc.m"
                              {
#line 1791 "unify_proc.m"
                                check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_32, check_hlds__unify_proc__V_44_44, check_hlds__unify_proc__Context_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
                              }
#line 1791 "unify_proc.m"
                              (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1791 "unify_proc.m"
                            }
#line 1792 "unify_proc.m"
                          else
#line 1793 "unify_proc.m"
                            {
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__R1_35;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__Do_Comparison_36;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__Check_Equal_37;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__Check_Not_Equal_38;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__Return_R1_39;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__Condition_40;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__ElseCase_41;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_49_49;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_50_50;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_51_51;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_52_52;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_53_53;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_54_54;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_56_56;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_58_58;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_59_59;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_62_62;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_64_64;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_65_65;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_68_68;
#line 1793 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_69_69;

#line 1793 "unify_proc.m"
                              {
#line 1793 "unify_proc.m"
                                check_hlds__unify_proc__V_49_49 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
                              }
#line 1793 "unify_proc.m"
                              {
#line 1793 "unify_proc.m"
                                check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_49_49, &check_hlds__unify_proc__R1_35, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
                              }
#line 1794 "unify_proc.m"
                              {
#line 1794 "unify_proc.m"
                                check_hlds__unify_proc__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (check_hlds__unify_proc__Y_22));
#line 1794 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1794 "unify_proc.m"
                              }
#line 1794 "unify_proc.m"
                              {
#line 1794 "unify_proc.m"
                                check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__X_20));
#line 1794 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_54_54));
#line 1794 "unify_proc.m"
                              }
#line 1794 "unify_proc.m"
                              {
#line 1794 "unify_proc.m"
                                check_hlds__unify_proc__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 0) = ((MR_Box) (check_hlds__unify_proc__R1_35));
#line 1794 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_51_51, 1) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1794 "unify_proc.m"
                              }
#line 1794 "unify_proc.m"
                              {
#line 1794 "unify_proc.m"
                                check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__ComparePred_32, check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__Context_6, &check_hlds__unify_proc__Do_Comparison_36, check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, &check_hlds__unify_proc__STATE_VARIABLE_Info_52_52);
                              }
#line 1796 "unify_proc.m"
                              {
#line 1796 "unify_proc.m"
                                check_hlds__unify_proc__V_56_56 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "=");
                              }
#line 1796 "unify_proc.m"
                              {
#line 1796 "unify_proc.m"
                                hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R1_35, check_hlds__unify_proc__V_56_56, &check_hlds__unify_proc__Check_Equal_37);
                              }
#line 1797 "unify_proc.m"
                              check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__unify_proc__Check_Equal_37);
#line 1797 "unify_proc.m"
                              {
#line 1797 "unify_proc.m"
                                check_hlds__unify_proc__Check_Not_Equal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1797 "unify_proc.m"
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Check_Not_Equal_38, 0) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 1797 "unify_proc.m"
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Check_Not_Equal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1797 "unify_proc.m"
                              }
#line 1799 "unify_proc.m"
                              {
#line 1799 "unify_proc.m"
                                check_hlds__unify_proc__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1799 "unify_proc.m"
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__R1_35));
#line 1799 "unify_proc.m"
                              }
#line 1799 "unify_proc.m"
                              {
#line 1799 "unify_proc.m"
                                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__R_5, check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R1_39);
                              }
#line 1802 "unify_proc.m"
                              {
#line 1802 "unify_proc.m"
                                check_hlds__unify_proc__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 0) = ((MR_Box) (check_hlds__unify_proc__Check_Not_Equal_38));
#line 1802 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1802 "unify_proc.m"
                              }
#line 1802 "unify_proc.m"
                              {
#line 1802 "unify_proc.m"
                                check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__Do_Comparison_36));
#line 1802 "unify_proc.m"
                                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 1802 "unify_proc.m"
                              }
#line 1802 "unify_proc.m"
                              {
#line 1802 "unify_proc.m"
                                check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "unify_proc.m"
                                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1802 "unify_proc.m"
                                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1802 "unify_proc.m"
                                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_62_62, 2) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1802 "unify_proc.m"
                              }
#line 1801 "unify_proc.m"
                              {
#line 1801 "unify_proc.m"
                                check_hlds__unify_proc__Condition_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1801 "unify_proc.m"
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_40, 0) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 1801 "unify_proc.m"
                                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Condition_40, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1801 "unify_proc.m"
                              }
#line 1804 "unify_proc.m"
                              {
#line 1804 "unify_proc.m"
                                (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = check_hlds__unify_proc__compare_args_2_9_p_0(check_hlds__unify_proc__ArgTypes_18, (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__ExistQTVars_2, check_hlds__unify_proc__Xs_21, check_hlds__unify_proc__Ys_23, check_hlds__unify_proc__R_5, check_hlds__unify_proc__Context_6, &check_hlds__unify_proc__ElseCase_41, check_hlds__unify_proc__STATE_VARIABLE_Info_52_52, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
                              }
#line 1793 "unify_proc.m"
                              if ((check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded)
#line 1793 "unify_proc.m"
                                {
#line 1807 "unify_proc.m"
                                  check_hlds__unify_proc__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1807 "unify_proc.m"
                                  {
#line 1807 "unify_proc.m"
                                    check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1807 "unify_proc.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1807 "unify_proc.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (check_hlds__unify_proc__V_69_69));
#line 1807 "unify_proc.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 2) = ((MR_Box) (check_hlds__unify_proc__Condition_40));
#line 1807 "unify_proc.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R1_39));
#line 1807 "unify_proc.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_68_68, 4) = ((MR_Box) (check_hlds__unify_proc__ElseCase_41));
#line 1807 "unify_proc.m"
                                  }
#line 1806 "unify_proc.m"
                                  {
#line 1806 "unify_proc.m"
                                    MR_Word base;
#line 1806 "unify_proc.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1806 "unify_proc.m"
                                    *check_hlds__unify_proc__HeadVar__7_7 = base;
#line 1806 "unify_proc.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
#line 1806 "unify_proc.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_29));
#line 1806 "unify_proc.m"
                                  }
#line 1806 "unify_proc.m"
                                  (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded = MR_TRUE;
#line 1793 "unify_proc.m"
                                }
#line 1793 "unify_proc.m"
                            }
#line 1792 "unify_proc.m"
                        }
#line 1785 "unify_proc.m"
                        break;
#line 1785 "unify_proc.m"
                    }
#line 1758 "unify_proc.m"
                  }
#line 1758 "unify_proc.m"
              }
#line 1759 "unify_proc.m"
          }
#line 1756 "unify_proc.m"
        return (check_hlds__unify_proc__env).check_hlds__unify_proc__compare_args_2_9_p_0_env_0__succeeded;
#line 1756 "unify_proc.m"
        break;
#line 1756 "unify_proc.m"
      }
#line 1752 "unify_proc.m"
  }
#line 1752 "unify_proc.m"
}

#line 1739 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_args_9_p_0(
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgTypes_10,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ExistQTVars_11,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Xs_12,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ys_13,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_14,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1739 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1739 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_19,
#line 1739 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_20)
#line 1739 "unify_proc.m"
{
#line 1748 "unify_proc.m"
  {
#line 1748 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1748 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_18;
#line 1748 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;

#line 1745 "unify_proc.m"
    {
#line 1745 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__compare_args_2_9_p_0(check_hlds__unify_proc__ArgTypes_10, check_hlds__unify_proc__ExistQTVars_11, check_hlds__unify_proc__Xs_12, check_hlds__unify_proc__Ys_13, check_hlds__unify_proc__R_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Goal0_18, check_hlds__unify_proc__STATE_VARIABLE_Info_0_19, &check_hlds__unify_proc__STATE_VARIABLE_Info_21_21);
    }
#line 1748 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1747 "unify_proc.m"
      {
#line 1747 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_20 = check_hlds__unify_proc__STATE_VARIABLE_Info_21_21;
#line 1747 "unify_proc.m"
        *check_hlds__unify_proc__Goal_16 = check_hlds__unify_proc__Goal0_18;
#line 1747 "unify_proc.m"
      }
#line 1748 "unify_proc.m"
    else
#line 1749 "unify_proc.m"
      {
#line 1749 "unify_proc.m"
        {
#line 1749 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.compare_args\'/9", (MR_String) "length mismatch");
#line 1749 "unify_proc.m"
          return;
        }
#line 1749 "unify_proc.m"
      }
#line 1748 "unify_proc.m"
  }
#line 1739 "unify_proc.m"
}

#line 1686 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_12,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor1_13,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor2_14,
#line 1686 "unify_proc.m"
  MR_String check_hlds__unify_proc__CompareOp_15,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_16,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_17,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_18,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_19,
#line 1686 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_20,
#line 1686 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_48,
#line 1686 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_49)
#line 1686 "unify_proc.m"
{
#line 1692 "unify_proc.m"
  {
#line 1692 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars1_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 0)));
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 2)));
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 3)));
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 0)));
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName2_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 2)));
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 3)));
#line 1692 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity1_34;
#line 1692 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity2_35;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId1_36;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId2_37;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Vars1_38;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Vars2_39;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RHS1_40;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RHS2_41;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyX_Goal_42;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyY_Goal_43;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ReturnResult_44;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_45;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_46;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_47;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_50_50;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_58_58;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_59_59;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_60_60;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_64;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_66_66;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_67_67;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_69;
#line 1692 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_70_70;
#line 1693 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 1)));
#line 1693 "unify_proc.m"
    MR_Integer check_hlds__unify_proc___Arity1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 4)));
#line 1693 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor1_13, (MR_Integer) 5)));
#line 1695 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints2_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 1)));
#line 1695 "unify_proc.m"
    MR_Integer check_hlds__unify_proc___Arity2_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 4)));
#line 1695 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor2_14, (MR_Integer) 5)));

#line 1697 "unify_proc.m"
    {
#line 1697 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_62_62, check_hlds__unify_proc__ArgTypes1_25, &check_hlds__unify_proc__FunctorArity1_34);
    }
#line 1698 "unify_proc.m"
    {
#line 1698 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_62_62, check_hlds__unify_proc__ArgTypes2_31, &check_hlds__unify_proc__FunctorArity2_35);
    }
#line 1699 "unify_proc.m"
    {
#line 1699 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId1_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1699 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1699 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName1_24));
#line 1699 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity1_34));
#line 1699 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId1_36, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
#line 1699 "unify_proc.m"
    }
#line 1700 "unify_proc.m"
    {
#line 1700 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId2_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1700 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1700 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName2_30));
#line 1700 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity2_35));
#line 1700 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId2_37, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_12));
#line 1700 "unify_proc.m"
    }
#line 1701 "unify_proc.m"
    {
#line 1701 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes1_25, check_hlds__unify_proc__ExistQTVars1_22, &check_hlds__unify_proc__Vars1_38, check_hlds__unify_proc__STATE_VARIABLE_Info_0_48, &check_hlds__unify_proc__STATE_VARIABLE_Info_50_50);
    }
#line 1702 "unify_proc.m"
    {
#line 1702 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes2_31, check_hlds__unify_proc__ExistQTVars2_28, &check_hlds__unify_proc__Vars2_39, check_hlds__unify_proc__STATE_VARIABLE_Info_50_50, check_hlds__unify_proc__STATE_VARIABLE_Info_49);
    }
#line 1703 "unify_proc.m"
    {
#line 1703 "unify_proc.m"
      check_hlds__unify_proc__RHS1_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId1_36));
#line 1703 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1703 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_40, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_38));
#line 1703 "unify_proc.m"
    }
#line 1704 "unify_proc.m"
    {
#line 1704 "unify_proc.m"
      check_hlds__unify_proc__RHS2_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1704 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId2_37));
#line 1704 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1704 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_41, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_39));
#line 1704 "unify_proc.m"
    }
#line 1705 "unify_proc.m"
    {
#line 1705 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_17, check_hlds__unify_proc__RHS1_40, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_42);
    }
#line 1707 "unify_proc.m"
    {
#line 1707 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_18, check_hlds__unify_proc__RHS2_41, check_hlds__unify_proc__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_43);
    }
#line 2056 "unify_proc.m"
    {
#line 2056 "unify_proc.m"
      check_hlds__unify_proc__Builtin_69 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2057 "unify_proc.m"
    {
#line 2057 "unify_proc.m"
      check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_69));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2057 "unify_proc.m"
    }
#line 2057 "unify_proc.m"
    {
#line 2057 "unify_proc.m"
      check_hlds__unify_proc__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2057 "unify_proc.m"
    }
#line 2062 "unify_proc.m"
    {
#line 2062 "unify_proc.m"
      check_hlds__unify_proc__V_67_67 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2062 "unify_proc.m"
    {
#line 2062 "unify_proc.m"
      check_hlds__unify_proc__SymName_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_64, 0) = ((MR_Box) (check_hlds__unify_proc__V_67_67));
#line 2062 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_64, 1) = ((MR_Box) (check_hlds__unify_proc__CompareOp_15));
#line 2062 "unify_proc.m"
    }
#line 2061 "unify_proc.m"
    {
#line 2061 "unify_proc.m"
      check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_64));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_58_58, 3) = ((MR_Box) (check_hlds__unify_proc__V_66_66));
#line 2061 "unify_proc.m"
    }
#line 1709 "unify_proc.m"
    {
#line 1709 "unify_proc.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_16, check_hlds__unify_proc__V_58_58, &check_hlds__unify_proc__ReturnResult_44);
    }
#line 1710 "unify_proc.m"
    {
#line 1710 "unify_proc.m"
      check_hlds__unify_proc__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1710 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_60_60, 0) = ((MR_Box) (check_hlds__unify_proc__ReturnResult_44));
#line 1710 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1710 "unify_proc.m"
    }
#line 1710 "unify_proc.m"
    {
#line 1710 "unify_proc.m"
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1710 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_43));
#line 1710 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__V_60_60));
#line 1710 "unify_proc.m"
    }
#line 1710 "unify_proc.m"
    {
#line 1710 "unify_proc.m"
      check_hlds__unify_proc__GoalList_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1710 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_45, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_42));
#line 1710 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_45, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 1710 "unify_proc.m"
    }
#line 1711 "unify_proc.m"
    {
#line 1711 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_46);
    }
#line 1712 "unify_proc.m"
    {
#line 1712 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_19, check_hlds__unify_proc__GoalInfo0_46, &check_hlds__unify_proc__GoalInfo_47);
    }
#line 1713 "unify_proc.m"
    {
#line 1713 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_45, check_hlds__unify_proc__GoalInfo_47, check_hlds__unify_proc__Case_20);
    }
#line 1692 "unify_proc.m"
  }
#line 1686 "unify_proc.m"
}

#line 1642 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_12,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__R_13,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_14,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_15,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_16,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Kind_17,
#line 1642 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Case_18,
#line 1642 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 1642 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42)
#line 1642 "unify_proc.m"
{
#line 1646 "unify_proc.m"
  {
#line 1646 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1646 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 0)));
#line 1646 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 2)));
#line 1646 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 3)));
#line 1646 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 4)));
#line 1646 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_26;
#line 1646 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_30;
#line 1646 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_39;
#line 1646 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_40;
#line 1647 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 1)));
#line 1647 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_12, (MR_Integer) 5)));

#line 1649 "unify_proc.m"
    {
#line 1649 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1649 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1649 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_22));
#line 1649 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_24));
#line 1649 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_26, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_11));
#line 1649 "unify_proc.m"
    }
#line 1668 "unify_proc.m"
    if ((check_hlds__unify_proc__ArgTypes_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1651 "unify_proc.m"
      {
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS_27;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_28;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__EqualGoal_29;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_71;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_72_72;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__SymName_75;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_78_78;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Builtin_80;
#line 1651 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_81_81;

#line 1652 "unify_proc.m"
        {
#line 1652 "unify_proc.m"
          check_hlds__unify_proc__RHS_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1652 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1652 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1652 "unify_proc.m"
        }
#line 1653 "unify_proc.m"
        {
#line 1653 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_28);
        }
#line 2056 "unify_proc.m"
        {
#line 2056 "unify_proc.m"
          check_hlds__unify_proc__Builtin_80 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 2057 "unify_proc.m"
        {
#line 2057 "unify_proc.m"
          check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_80));
#line 2057 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2057 "unify_proc.m"
        }
#line 2057 "unify_proc.m"
        {
#line 2057 "unify_proc.m"
          check_hlds__unify_proc__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2057 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_77_77, 0) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 2057 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_77_77, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2057 "unify_proc.m"
        }
#line 2062 "unify_proc.m"
        {
#line 2062 "unify_proc.m"
          check_hlds__unify_proc__V_78_78 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 2062 "unify_proc.m"
        {
#line 2062 "unify_proc.m"
          check_hlds__unify_proc__SymName_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_75, 0) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 2062 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_75, 1) = ((MR_Box) ((MR_String) "="));
#line 2062 "unify_proc.m"
        }
#line 2061 "unify_proc.m"
        {
#line 2061 "unify_proc.m"
          check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2061 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_75));
#line 2061 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2061 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_72_72, 3) = ((MR_Box) (check_hlds__unify_proc__V_77_77));
#line 2061 "unify_proc.m"
        }
#line 1816 "unify_proc.m"
        {
#line 1816 "unify_proc.m"
          hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__R_13, check_hlds__unify_proc__V_72_72, &check_hlds__unify_proc__Goal0_71);
        }
#line 1817 "unify_proc.m"
        {
#line 1817 "unify_proc.m"
          hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__Goal0_71, &check_hlds__unify_proc__EqualGoal_29);
        }
#line 1662 "unify_proc.m"
#line 1662 "unify_proc.m"
        switch (check_hlds__unify_proc__Kind_17) {
#line 1662 "unify_proc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1662 "unify_proc.m"
          case (MR_Integer) 0:
#line 1657 "unify_proc.m"
            {
#line 1657 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_64_64;

#line 1661 "unify_proc.m"
              {
#line 1661 "unify_proc.m"
                check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1661 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
#line 1661 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1661 "unify_proc.m"
              }
#line 1661 "unify_proc.m"
              {
#line 1661 "unify_proc.m"
                check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1661 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
#line 1661 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1661 "unify_proc.m"
              }
#line 1657 "unify_proc.m"
            }
#line 1662 "unify_proc.m"
            break;
#line 1662 "unify_proc.m"
          case (MR_Integer) 1:
#line 1663 "unify_proc.m"
            {
#line 1663 "unify_proc.m"
              MR_Word check_hlds__unify_proc__UnifyY_Goal_31;
#line 1663 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_61_61;
#line 1663 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_62_62;

#line 1664 "unify_proc.m"
              {
#line 1664 "unify_proc.m"
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS_27, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_31);
              }
#line 1666 "unify_proc.m"
              {
#line 1666 "unify_proc.m"
                check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1666 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__EqualGoal_29));
#line 1666 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1666 "unify_proc.m"
              }
#line 1666 "unify_proc.m"
              {
#line 1666 "unify_proc.m"
                check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1666 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_31));
#line 1666 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 1) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 1666 "unify_proc.m"
              }
#line 1666 "unify_proc.m"
              {
#line 1666 "unify_proc.m"
                check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1666 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_28));
#line 1666 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_61_61));
#line 1666 "unify_proc.m"
              }
#line 1663 "unify_proc.m"
            }
#line 1662 "unify_proc.m"
            break;
#line 1662 "unify_proc.m"
        }
#line 1651 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_42 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_41;
#line 1651 "unify_proc.m"
      }
#line 1668 "unify_proc.m"
    else
#line 1669 "unify_proc.m"
      {
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars1_34;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars2_35;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS1_36;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS2_37;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CompareArgs_Goal_38;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_52_52;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_53_53;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_66;
#line 1669 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_67;

#line 1670 "unify_proc.m"
        {
#line 1670 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, &check_hlds__unify_proc__Vars1_34, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
        }
#line 1671 "unify_proc.m"
        {
#line 1671 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, &check_hlds__unify_proc__Vars2_35, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
        }
#line 1672 "unify_proc.m"
        {
#line 1672 "unify_proc.m"
          check_hlds__unify_proc__RHS1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1672 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1672 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1672 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_36, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_34));
#line 1672 "unify_proc.m"
        }
#line 1673 "unify_proc.m"
        {
#line 1673 "unify_proc.m"
          check_hlds__unify_proc__RHS2_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1673 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_26));
#line 1673 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1673 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_37, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_35));
#line 1673 "unify_proc.m"
        }
#line 1674 "unify_proc.m"
        {
#line 1674 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_14, check_hlds__unify_proc__RHS1_36, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_66);
        }
#line 1676 "unify_proc.m"
        {
#line 1676 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_15, check_hlds__unify_proc__RHS2_37, check_hlds__unify_proc__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_67);
        }
#line 1678 "unify_proc.m"
        {
#line 1678 "unify_proc.m"
          check_hlds__unify_proc__compare_args_9_p_0(check_hlds__unify_proc__ArgTypes_23, check_hlds__unify_proc__ExistQTVars_20, check_hlds__unify_proc__Vars1_34, check_hlds__unify_proc__Vars2_35, check_hlds__unify_proc__R_13, check_hlds__unify_proc__Context_16, &check_hlds__unify_proc__CompareArgs_Goal_38, check_hlds__unify_proc__STATE_VARIABLE_Info_44_44, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
        }
#line 1680 "unify_proc.m"
        {
#line 1680 "unify_proc.m"
          check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__CompareArgs_Goal_38));
#line 1680 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1680 "unify_proc.m"
        }
#line 1680 "unify_proc.m"
        {
#line 1680 "unify_proc.m"
          check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_67));
#line 1680 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) (check_hlds__unify_proc__V_53_53));
#line 1680 "unify_proc.m"
        }
#line 1680 "unify_proc.m"
        {
#line 1680 "unify_proc.m"
          check_hlds__unify_proc__GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_66));
#line 1680 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_30, 1) = ((MR_Box) (check_hlds__unify_proc__V_52_52));
#line 1680 "unify_proc.m"
        }
#line 1669 "unify_proc.m"
      }
#line 1682 "unify_proc.m"
    {
#line 1682 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_39);
    }
#line 1683 "unify_proc.m"
    {
#line 1683 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_16, check_hlds__unify_proc__GoalInfo0_39, &check_hlds__unify_proc__GoalInfo_40);
    }
#line 1684 "unify_proc.m"
    {
#line 1684 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_30, check_hlds__unify_proc__GoalInfo_40, check_hlds__unify_proc__Case_18);
    }
#line 1646 "unify_proc.m"
  }
#line 1642 "unify_proc.m"
}

#line 1627 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_cases_9_p_0(
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1627 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__7_7,
#line 1627 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_8,
#line 1627 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_9)
#line 1627 "unify_proc.m"
{
#line 1631 "unify_proc.m"
  {
#line 1631 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1631 "unify_proc.m"
    if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1631 "unify_proc.m"
      {
#line 1631 "unify_proc.m"
        *check_hlds__unify_proc__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1631 "unify_proc.m"
        *check_hlds__unify_proc__STATE_VARIABLE_Info_9 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_8;
#line 1631 "unify_proc.m"
      }
#line 1631 "unify_proc.m"
    else
#line 1633 "unify_proc.m"
      {
#line 1633 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 1633 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 1633 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Case_25;
#line 1633 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Cases_26;
#line 1633 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;

#line 1634 "unify_proc.m"
        {
#line 1634 "unify_proc.m"
          check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Ctor_19, check_hlds__unify_proc__HeadVar__3_3, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, (MR_Integer) 0, &check_hlds__unify_proc__Case_25, check_hlds__unify_proc__STATE_VARIABLE_Info_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
        }
#line 1636 "unify_proc.m"
        {
#line 1636 "unify_proc.m"
          check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__HeadVar__3_3, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, &check_hlds__unify_proc__Cases_26, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_9);
        }
#line 1633 "unify_proc.m"
        {
#line 1633 "unify_proc.m"
          MR_Word base;
#line 1633 "unify_proc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1633 "unify_proc.m"
          *check_hlds__unify_proc__HeadVar__7_7 = base;
#line 1633 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unify_proc__Case_25));
#line 1633 "unify_proc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_26));
#line 1633 "unify_proc.m"
        }
#line 1633 "unify_proc.m"
      }
#line 1631 "unify_proc.m"
  }
#line 1627 "unify_proc.m"
}

#line 1537 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_11,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1537 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1537 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 1537 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
#line 1537 "unify_proc.m"
{
#line 1543 "unify_proc.m"
  {
#line 1543 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__IntType_18;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__X_Index_19;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Y_Index_20;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__R_21;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_22;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_23;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__X_InstmapDelta_24;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_X_Index_25;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Y_InstmapDelta_26;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Y_Index_27;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Less_Than_28;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Call_Greater_Than_29;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_Less_Than_30;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_Greater_Than_31;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Return_R_32;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_33;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Cases_34;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CasesGoal_35;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Abort_36;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleEqualGoal_37;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleGreaterEqualGoal_38;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__HandleLessGreaterEqualGoal_39;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_42_42;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_43_43;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_49_49;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_50_50;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_53_53;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_55_55;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_56_56;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_59_59;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_60_60;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_65_65;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_70_70;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_75_75;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_76_76;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_80_80;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_82_82;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_84_84;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_86_86;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_88_88;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_89_89;
#line 1543 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_90_90;

#line 1544 "unify_proc.m"
    {
#line 1544 "unify_proc.m"
      check_hlds__unify_proc__IntType_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1545 "unify_proc.m"
    {
#line 1545 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__IntType_18, &check_hlds__unify_proc__X_Index_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, &check_hlds__unify_proc__STATE_VARIABLE_Info_42_42);
    }
#line 1546 "unify_proc.m"
    {
#line 1546 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__IntType_18, &check_hlds__unify_proc__Y_Index_20, check_hlds__unify_proc__STATE_VARIABLE_Info_42_42, &check_hlds__unify_proc__STATE_VARIABLE_Info_43_43);
    }
#line 1547 "unify_proc.m"
    {
#line 1547 "unify_proc.m"
      check_hlds__unify_proc__V_44_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    }
#line 1547 "unify_proc.m"
    {
#line 1547 "unify_proc.m"
      check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_44_44, &check_hlds__unify_proc__R_21, check_hlds__unify_proc__STATE_VARIABLE_Info_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
    }
#line 1549 "unify_proc.m"
    {
#line 1549 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_22);
    }
#line 1550 "unify_proc.m"
    {
#line 1550 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_22, &check_hlds__unify_proc__GoalInfo_23);
    }
#line 1552 "unify_proc.m"
    {
#line 1552 "unify_proc.m"
      check_hlds__unify_proc__X_InstmapDelta_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__X_Index_19);
    }
#line 1553 "unify_proc.m"
    {
#line 1553 "unify_proc.m"
      check_hlds__unify_proc__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_50_50, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
#line 1553 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1553 "unify_proc.m"
    }
#line 1553 "unify_proc.m"
    {
#line 1553 "unify_proc.m"
      check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1553 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_50_50));
#line 1553 "unify_proc.m"
    }
#line 1553 "unify_proc.m"
    {
#line 1553 "unify_proc.m"
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__V_47_47, check_hlds__unify_proc__X_InstmapDelta_24, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_X_Index_25, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_49_49);
    }
#line 1555 "unify_proc.m"
    {
#line 1555 "unify_proc.m"
      check_hlds__unify_proc__Y_InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__unify_proc__Y_Index_20);
    }
#line 1556 "unify_proc.m"
    {
#line 1556 "unify_proc.m"
      check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1556 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Index_20));
#line 1556 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1556 "unify_proc.m"
    }
#line 1556 "unify_proc.m"
    {
#line 1556 "unify_proc.m"
      check_hlds__unify_proc__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1556 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1556 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 1556 "unify_proc.m"
    }
#line 1556 "unify_proc.m"
    {
#line 1556 "unify_proc.m"
      check_hlds__unify_proc__build_specific_call_9_p_0(check_hlds__unify_proc__Type_10, (MR_Integer) 1, check_hlds__unify_proc__V_53_53, check_hlds__unify_proc__Y_InstmapDelta_26, (MR_Integer) 0, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Y_Index_27, check_hlds__unify_proc__STATE_VARIABLE_Info_49_49, &check_hlds__unify_proc__STATE_VARIABLE_Info_55_55);
    }
#line 1559 "unify_proc.m"
    {
#line 1559 "unify_proc.m"
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__X_Index_19));
#line 1559 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 1559 "unify_proc.m"
    }
#line 1559 "unify_proc.m"
    {
#line 1559 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_lt", check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Less_Than_28, check_hlds__unify_proc__STATE_VARIABLE_Info_55_55, &check_hlds__unify_proc__STATE_VARIABLE_Info_60_60);
    }
#line 1561 "unify_proc.m"
    {
#line 1561 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_int_gt", check_hlds__unify_proc__V_59_59, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Call_Greater_Than_29, check_hlds__unify_proc__STATE_VARIABLE_Info_60_60, &check_hlds__unify_proc__STATE_VARIABLE_Info_65_65);
    }
#line 1564 "unify_proc.m"
    {
#line 1564 "unify_proc.m"
      check_hlds__unify_proc__V_68_68 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
    }
#line 1564 "unify_proc.m"
    {
#line 1564 "unify_proc.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_68_68, &check_hlds__unify_proc__Return_Less_Than_30);
    }
#line 1565 "unify_proc.m"
    {
#line 1565 "unify_proc.m"
      check_hlds__unify_proc__V_70_70 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
    }
#line 1565 "unify_proc.m"
    {
#line 1565 "unify_proc.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_70_70, &check_hlds__unify_proc__Return_Greater_Than_31);
    }
#line 1567 "unify_proc.m"
    {
#line 1567 "unify_proc.m"
      check_hlds__unify_proc__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1567 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__R_21));
#line 1567 "unify_proc.m"
    }
#line 1567 "unify_proc.m"
    {
#line 1567 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Return_R_32);
    }
#line 1570 "unify_proc.m"
    {
#line 1570 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_33);
    }
#line 1571 "unify_proc.m"
    {
#line 1571 "unify_proc.m"
      check_hlds__unify_proc__generate_compare_cases_9_p_0(check_hlds__unify_proc__TypeCtor_33, check_hlds__unify_proc__Ctors_11, check_hlds__unify_proc__R_21, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Cases_34, check_hlds__unify_proc__STATE_VARIABLE_Info_65_65, &check_hlds__unify_proc__STATE_VARIABLE_Info_75_75);
    }
#line 1572 "unify_proc.m"
    {
#line 1572 "unify_proc.m"
      check_hlds__unify_proc__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1572 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1572 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_76_76, 1) = ((MR_Box) (check_hlds__unify_proc__Cases_34));
#line 1572 "unify_proc.m"
    }
#line 1572 "unify_proc.m"
    {
#line 1572 "unify_proc.m"
      check_hlds__unify_proc__CasesGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1572 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 0) = ((MR_Box) (check_hlds__unify_proc__V_76_76));
#line 1572 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CasesGoal_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1572 "unify_proc.m"
    }
#line 1574 "unify_proc.m"
    {
#line 1574 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare_error", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Abort_36, check_hlds__unify_proc__STATE_VARIABLE_Info_75_75, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
    }
#line 1578 "unify_proc.m"
    {
#line 1578 "unify_proc.m"
      check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1578 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1578 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 2) = ((MR_Box) (check_hlds__unify_proc__CasesGoal_35));
#line 1578 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 3) = ((MR_Box) (check_hlds__unify_proc__Return_R_32));
#line 1578 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_80_80, 4) = ((MR_Box) (check_hlds__unify_proc__Abort_36));
#line 1578 "unify_proc.m"
    }
#line 1577 "unify_proc.m"
    {
#line 1577 "unify_proc.m"
      check_hlds__unify_proc__HandleEqualGoal_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1577 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 0) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 1577 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleEqualGoal_37, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1577 "unify_proc.m"
    }
#line 1582 "unify_proc.m"
    {
#line 1582 "unify_proc.m"
      check_hlds__unify_proc__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1582 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1582 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Greater_Than_29));
#line 1582 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Greater_Than_31));
#line 1582 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_82_82, 4) = ((MR_Box) (check_hlds__unify_proc__HandleEqualGoal_37));
#line 1582 "unify_proc.m"
    }
#line 1581 "unify_proc.m"
    {
#line 1581 "unify_proc.m"
      check_hlds__unify_proc__HandleGreaterEqualGoal_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 0) = ((MR_Box) (check_hlds__unify_proc__V_82_82));
#line 1581 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleGreaterEqualGoal_38, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1581 "unify_proc.m"
    }
#line 1587 "unify_proc.m"
    {
#line 1587 "unify_proc.m"
      check_hlds__unify_proc__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1587 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1587 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1587 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 2) = ((MR_Box) (check_hlds__unify_proc__Call_Less_Than_28));
#line 1587 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 3) = ((MR_Box) (check_hlds__unify_proc__Return_Less_Than_30));
#line 1587 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_84_84, 4) = ((MR_Box) (check_hlds__unify_proc__HandleGreaterEqualGoal_38));
#line 1587 "unify_proc.m"
    }
#line 1586 "unify_proc.m"
    {
#line 1586 "unify_proc.m"
      check_hlds__unify_proc__HandleLessGreaterEqualGoal_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1586 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 0) = ((MR_Box) (check_hlds__unify_proc__V_84_84));
#line 1586 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HandleLessGreaterEqualGoal_39, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1586 "unify_proc.m"
    }
#line 1593 "unify_proc.m"
    {
#line 1593 "unify_proc.m"
      check_hlds__unify_proc__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1593 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_90_90, 0) = ((MR_Box) (check_hlds__unify_proc__HandleLessGreaterEqualGoal_39));
#line 1593 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1593 "unify_proc.m"
    }
#line 1593 "unify_proc.m"
    {
#line 1593 "unify_proc.m"
      check_hlds__unify_proc__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1593 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_89_89, 0) = ((MR_Box) (check_hlds__unify_proc__Call_Y_Index_27));
#line 1593 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_89_89, 1) = ((MR_Box) (check_hlds__unify_proc__V_90_90));
#line 1593 "unify_proc.m"
    }
#line 1593 "unify_proc.m"
    {
#line 1593 "unify_proc.m"
      check_hlds__unify_proc__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1593 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_88_88, 0) = ((MR_Box) (check_hlds__unify_proc__Call_X_Index_25));
#line 1593 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_88_88, 1) = ((MR_Box) (check_hlds__unify_proc__V_89_89));
#line 1593 "unify_proc.m"
    }
#line 1592 "unify_proc.m"
    {
#line 1592 "unify_proc.m"
      check_hlds__unify_proc__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1592 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1592 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1592 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_86_86, 2) = ((MR_Box) (check_hlds__unify_proc__V_88_88));
#line 1592 "unify_proc.m"
    }
#line 1591 "unify_proc.m"
    {
#line 1591 "unify_proc.m"
      MR_Word base;
#line 1591 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1591 "unify_proc.m"
      *check_hlds__unify_proc__Goal_16 = base;
#line 1591 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_86_86));
#line 1591 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_23));
#line 1591 "unify_proc.m"
    }
#line 1543 "unify_proc.m"
  }
#line 1537 "unify_proc.m"
}

#line 1469 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1469 "unify_proc.m"
  MR_String check_hlds__unify_proc__HeadVar__4_4,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__8_8,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9,
#line 1469 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_10,
#line 1469 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_11,
#line 1469 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_12)
#line 1469 "unify_proc.m"
{
#line 1475 "unify_proc.m"
  while (MR_TRUE)
#line 1475 "unify_proc.m"
    {
#line 1475 "unify_proc.m"
      /* tailcall optimized into a loop */
#line 1475 "unify_proc.m"
      {
#line 1475 "unify_proc.m"
        MR_bool check_hlds__unify_proc__succeeded;

#line 1475 "unify_proc.m"
        if ((check_hlds__unify_proc__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1475 "unify_proc.m"
          {
#line 1476 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Info_12 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_11;
#line 1476 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Cases_10 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9;
#line 1475 "unify_proc.m"
          }
#line 1475 "unify_proc.m"
        else
#line 1478 "unify_proc.m"
          {
#line 1478 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 0)));
#line 1478 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__3_3, (MR_Integer) 1)));
#line 1478 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Case_37;
#line 1478 "unify_proc.m"
            MR_String check_hlds__unify_proc__Cmp1_38;
#line 1478 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;
#line 1478 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_46_46;

#line 1479 "unify_proc.m"
            {
#line 1479 "unify_proc.m"
              check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____constructor_0_0(check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__RightCtor_28);
            }
#line 1483 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 1481 "unify_proc.m"
              {
#line 1480 "unify_proc.m"
                {
#line 1480 "unify_proc.m"
                  check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__HeadVar__8_8, (MR_Integer) 1, &check_hlds__unify_proc__Case_37, check_hlds__unify_proc__STATE_VARIABLE_Info_0_11, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
                }
#line 1482 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_38 = (MR_String) "<";
#line 1481 "unify_proc.m"
              }
#line 1483 "unify_proc.m"
            else
#line 1485 "unify_proc.m"
              {
#line 1484 "unify_proc.m"
                {
#line 1484 "unify_proc.m"
                  check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__HeadVar__2_2, check_hlds__unify_proc__RightCtor_28, check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__HeadVar__8_8, &check_hlds__unify_proc__Case_37, check_hlds__unify_proc__STATE_VARIABLE_Info_0_11, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_44);
                }
#line 1486 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_38 = check_hlds__unify_proc__HeadVar__4_4;
#line 1485 "unify_proc.m"
              }
#line 1489 "unify_proc.m"
            {
#line 1489 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Case_37));
#line 1489 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9));
#line 1489 "unify_proc.m"
            }
#line 1488 "unify_proc.m"
            /* direct tailcall eliminated */
#line 1488 "unify_proc.m"
            {
#line 1488 "unify_proc.m"
              MR_Word check_hlds__unify_proc__HeadVar__3__tmp_copy_3 = check_hlds__unify_proc__RightCtors_29;
#line 1488 "unify_proc.m"
              MR_String check_hlds__unify_proc__HeadVar__4__tmp_copy_4 = check_hlds__unify_proc__Cmp1_38;
#line 1488 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_9 = check_hlds__unify_proc__V_46_46;
#line 1488 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_44_44;

#line 1488 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Info_0_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_11;
#line 1488 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_9 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_9;
#line 1488 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__4_4 = check_hlds__unify_proc__HeadVar__4__tmp_copy_4;
#line 1488 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__3_3 = check_hlds__unify_proc__HeadVar__3__tmp_copy_3;
#line 1488 "unify_proc.m"
            }
#line 1488 "unify_proc.m"
            continue;
#line 1478 "unify_proc.m"
          }
#line 1475 "unify_proc.m"
      }
#line 1475 "unify_proc.m"
      break;
#line 1475 "unify_proc.m"
    }
#line 1469 "unify_proc.m"
}

#line 1454 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__2_2,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__3_3,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__4_4,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__5_5,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__6_6,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__7_7,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8,
#line 1454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Cases_9,
#line 1454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_10,
#line 1454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_11)
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
        if ((check_hlds__unify_proc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1460 "unify_proc.m"
          {
#line 1461 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Info_11 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_10;
#line 1461 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Cases_9 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8;
#line 1460 "unify_proc.m"
          }
#line 1460 "unify_proc.m"
        else
#line 1463 "unify_proc.m"
          {
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__LeftCtor_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 0)));
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__LeftCtors_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVar__2_2, (MR_Integer) 1)));
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
#line 1463 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

#line 1464 "unify_proc.m"
            {
#line 1464 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__HeadVar__1_1, check_hlds__unify_proc__LeftCtor_25, check_hlds__unify_proc__HeadVar__3_3, (MR_String) ">", check_hlds__unify_proc__HeadVar__4_4, check_hlds__unify_proc__HeadVar__5_5, check_hlds__unify_proc__HeadVar__6_6, check_hlds__unify_proc__HeadVar__7_7, check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39, check_hlds__unify_proc__STATE_VARIABLE_Info_0_10, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_40);
            }
#line 1466 "unify_proc.m"
            /* direct tailcall eliminated */
#line 1466 "unify_proc.m"
            {
#line 1466 "unify_proc.m"
              MR_Word check_hlds__unify_proc__HeadVar__2__tmp_copy_2 = check_hlds__unify_proc__LeftCtors_26;
#line 1466 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_39_39;
#line 1466 "unify_proc.m"
              MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_40_40;

#line 1466 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Info_0_10 = check_hlds__unify_proc__STATE_VARIABLE_Info_0__tmp_copy_10;
#line 1466 "unify_proc.m"
              check_hlds__unify_proc__STATE_VARIABLE_Cases_0_8 = check_hlds__unify_proc__STATE_VARIABLE_Cases_0__tmp_copy_8;
#line 1466 "unify_proc.m"
              check_hlds__unify_proc__HeadVar__2_2 = check_hlds__unify_proc__HeadVar__2__tmp_copy_2;
#line 1466 "unify_proc.m"
            }
#line 1466 "unify_proc.m"
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

#line 1353 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0_1(
#line 1353 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1353 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1353 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_2,
#line 1353 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_3)
#line 1353 "unify_proc.m"
{
#line 1353 "unify_proc.m"
  {
#line 1353 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1353 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_Res_6;

#line 1353 "unify_proc.m"
    {
#line 1353 "unify_proc.m"
      check_hlds__unify_proc__compare_ctors_lexically_3_p_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1), ((MR_Word) check_hlds__unify_proc__wrapper_arg_2), &check_hlds__unify_proc__conv0_Res_6);
    }
#line 1353 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_3 = ((MR_Box) (check_hlds__unify_proc__conv0_Res_6));
#line 1353 "unify_proc.m"
  }
#line 1353 "unify_proc.m"
}

#line 1341 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors0_11,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 1341 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 1341 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_30,
#line 1341 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_31)
#line 1341 "unify_proc.m"
{
#line 1346 "unify_proc.m"
  {
#line 1346 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1346 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
#line 1346 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_19;
#line 1346 "unify_proc.m"
    MR_Word check_hlds__unify_proc__LexicalOrder_20;
#line 1346 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Ctors_21;
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));

#line 1348 "unify_proc.m"
    {
#line 1348 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_18, &check_hlds__unify_proc__Globals_19);
    }
#line 1349 "unify_proc.m"
    {
#line 1349 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 268, &check_hlds__unify_proc__LexicalOrder_20);
    }
#line 1354 "unify_proc.m"
#line 1354 "unify_proc.m"
    switch (check_hlds__unify_proc__LexicalOrder_20) {
#line 1354 "unify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1354 "unify_proc.m"
      case (MR_Integer) 0:
#line 1356 "unify_proc.m"
        check_hlds__unify_proc__Ctors_21 = check_hlds__unify_proc__Ctors0_11;
#line 1354 "unify_proc.m"
        break;
#line 1354 "unify_proc.m"
      case (MR_Integer) 1:
#line 1352 "unify_proc.m"
        {
#line 1353 "unify_proc.m"
          {
#line 1353 "unify_proc.m"
            mercury__list__sort_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[3], check_hlds__unify_proc__Ctors0_11, &check_hlds__unify_proc__Ctors_21);
          }
#line 1352 "unify_proc.m"
        }
#line 1354 "unify_proc.m"
        break;
#line 1354 "unify_proc.m"
    }
#line 1361 "unify_proc.m"
    if ((check_hlds__unify_proc__Ctors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1359 "unify_proc.m"
      {
#line 1360 "unify_proc.m"
        {
#line 1360 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_du_compare_proc_body\'/9", (MR_String) "compare for type with no functors");
#line 1360 "unify_proc.m"
          return;
        }
#line 1359 "unify_proc.m"
      }
#line 1361 "unify_proc.m"
    else
#line 1362 "unify_proc.m"
      {
#line 1362 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__CompareSpec_24;
#line 1362 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumCtors_25;
#line 1362 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_27;
#line 1362 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_28;
#line 1362 "unify_proc.m"
        MR_Word check_hlds__unify_proc__HeadVars_29;
#line 1362 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
#line 1362 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_37_37;
#line 1362 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_38_38;
#line 1362 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1362 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;

#line 1363 "unify_proc.m"
        {
#line 1363 "unify_proc.m"
          libs__globals__lookup_int_option_3_p_0(check_hlds__unify_proc__Globals_19, (MR_Integer) 310, &check_hlds__unify_proc__CompareSpec_24);
        }
#line 1365 "unify_proc.m"
        {
#line 1365 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, check_hlds__unify_proc__Ctors_21, &check_hlds__unify_proc__NumCtors_25);
        }
#line 1366 "unify_proc.m"
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__NumCtors_25 <= check_hlds__unify_proc__CompareSpec_24);
#line 1370 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 1367 "unify_proc.m"
          {
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__TypeCtor_26;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Cases_65;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo0_66;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_67;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_40_99;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtor_117;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__RightCtors_118;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Case_126;
#line 1367 "unify_proc.m"
            MR_String check_hlds__unify_proc__Cmp1_127;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_44_133;
#line 1367 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_135_135;

#line 1367 "unify_proc.m"
            {
#line 1367 "unify_proc.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_26);
            }
#line 1462 "unify_proc.m"
            check_hlds__unify_proc__RightCtor_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Ctors_21, (MR_Integer) 0)));
#line 1462 "unify_proc.m"
            check_hlds__unify_proc__RightCtors_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Ctors_21, (MR_Integer) 1)));
#line 1479 "unify_proc.m"
            {
#line 1479 "unify_proc.m"
              check_hlds__unify_proc__succeeded = parse_tree__prog_data____Unify____constructor_0_0(check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtor_117);
            }
#line 1483 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 1481 "unify_proc.m"
              {
#line 1480 "unify_proc.m"
                {
#line 1480 "unify_proc.m"
                  check_hlds__unify_proc__generate_compare_case_10_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, (MR_Integer) 1, &check_hlds__unify_proc__Case_126, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_133);
                }
#line 1482 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_127 = (MR_String) "<";
#line 1481 "unify_proc.m"
              }
#line 1483 "unify_proc.m"
            else
#line 1485 "unify_proc.m"
              {
#line 1484 "unify_proc.m"
                {
#line 1484 "unify_proc.m"
                  check_hlds__unify_proc__generate_asymmetric_compare_case_11_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtor_117, (MR_String) ">", check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Case_126, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_44_133);
                }
#line 1486 "unify_proc.m"
                check_hlds__unify_proc__Cmp1_127 = (MR_String) ">";
#line 1485 "unify_proc.m"
              }
#line 1489 "unify_proc.m"
            {
#line 1489 "unify_proc.m"
              check_hlds__unify_proc__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_135_135, 0) = ((MR_Box) (check_hlds__unify_proc__Case_126));
#line 1489 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1489 "unify_proc.m"
            }
#line 1488 "unify_proc.m"
            {
#line 1488 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_y_12_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtor_117, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Cmp1_127, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__V_135_135, &check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, check_hlds__unify_proc__STATE_VARIABLE_Info_44_133, &check_hlds__unify_proc__STATE_VARIABLE_Info_40_99);
            }
#line 1466 "unify_proc.m"
            {
#line 1466 "unify_proc.m"
              check_hlds__unify_proc__generate_du_quad_compare_switch_on_x_11_p_0(check_hlds__unify_proc__TypeCtor_26, check_hlds__unify_proc__RightCtors_118, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__STATE_VARIABLE_Cases_39_98, &check_hlds__unify_proc__Cases_65, check_hlds__unify_proc__STATE_VARIABLE_Info_40_99, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
            }
#line 1450 "unify_proc.m"
            {
#line 1450 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_66);
            }
#line 1451 "unify_proc.m"
            {
#line 1451 "unify_proc.m"
              hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__GoalInfo0_66, &check_hlds__unify_proc__GoalInfo_67);
            }
#line 1452 "unify_proc.m"
            {
#line 1452 "unify_proc.m"
              hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__unify_proc__Cases_65, check_hlds__unify_proc__GoalInfo_67, &check_hlds__unify_proc__Goal0_27);
            }
#line 1367 "unify_proc.m"
          }
#line 1370 "unify_proc.m"
        else
#line 1371 "unify_proc.m"
          {
#line 1371 "unify_proc.m"
            check_hlds__unify_proc__generate_du_linear_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__Goal0_27, check_hlds__unify_proc__STATE_VARIABLE_Info_0_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
          }
#line 1374 "unify_proc.m"
        {
#line 1374 "unify_proc.m"
          check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1374 "unify_proc.m"
        }
#line 1374 "unify_proc.m"
        {
#line 1374 "unify_proc.m"
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__V_37_37, check_hlds__unify_proc__Goal0_27, &check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, &check_hlds__unify_proc__STATE_VARIABLE_Info_38_38);
        }
#line 1376 "unify_proc.m"
        {
#line 1376 "unify_proc.m"
          check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1376 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1376 "unify_proc.m"
        }
#line 1376 "unify_proc.m"
        {
#line 1376 "unify_proc.m"
          check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1376 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1376 "unify_proc.m"
        }
#line 1376 "unify_proc.m"
        {
#line 1376 "unify_proc.m"
          check_hlds__unify_proc__HeadVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1376 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__HeadVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 1376 "unify_proc.m"
        }
#line 1377 "unify_proc.m"
        {
#line 1377 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__HeadVars_29, check_hlds__unify_proc__Goal_28, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_38_38, check_hlds__unify_proc__STATE_VARIABLE_Info_31);
        }
#line 1362 "unify_proc.m"
      }
#line 1346 "unify_proc.m"
  }
#line 1341 "unify_proc.m"
}

#line 1901 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0_1(
#line 1901 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1901 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 1901 "unify_proc.m"
{
#line 1901 "unify_proc.m"
  {
#line 1901 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 1901 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1901 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_LambdaHeadVar__2_22;

#line 1901 "unify_proc.m"
    {
#line 1901 "unify_proc.m"
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_22 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars__1901__1_1_f_0(((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 1901 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_LambdaHeadVar__2_22));
#line 1901 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 1901 "unify_proc.m"
  }
#line 1901 "unify_proc.m"
}

#line 1320 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_case_10_p_0(
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_11,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_12,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_13,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_14,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1320 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1320 "unify_proc.m"
  MR_Integer check_hlds__unify_proc__STATE_VARIABLE_N_0_32,
#line 1320 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__STATE_VARIABLE_N_33,
#line 1320 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_34,
#line 1320 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_35)
#line 1320 "unify_proc.m"
{
#line 1324 "unify_proc.m"
  {
#line 1324 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
#line 1324 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_26;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyX_Goal_27;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyIndex_Goal_28;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_29;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_30;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_31;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1324 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 1325 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
#line 1325 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 5)));

#line 1327 "unify_proc.m"
    {
#line 1327 "unify_proc.m"
      check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1327 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_21));
#line 1327 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_23));
#line 1327 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_11));
#line 1327 "unify_proc.m"
    }
#line 1900 "unify_proc.m"
    if ((check_hlds__unify_proc__ExistQTVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1900 "unify_proc.m"
      {
#line 1900 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgTypes_51;

#line 1901 "unify_proc.m"
        {
#line 1901 "unify_proc.m"
          check_hlds__unify_proc__ArgTypes_51 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__unify_proc_scalar_common_2[2], check_hlds__unify_proc__ArgTypes_22);
        }
#line 1902 "unify_proc.m"
        {
#line 1902 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(check_hlds__unify_proc__ArgTypes_51, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, check_hlds__unify_proc__STATE_VARIABLE_Info_35);
        }
#line 1900 "unify_proc.m"
      }
#line 1900 "unify_proc.m"
    else
#line 1904 "unify_proc.m"
      {
#line 1904 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 1904 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__NumVars_56;
#line 1904 "unify_proc.m"
        MR_Word check_hlds__unify_proc__VarSet_57;
#line 2128 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 2128 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 2128 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 2133 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_78_78;
#line 2133 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_79_79;
#line 2133 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_80_80;
#line 2133 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77;

#line 1911 "unify_proc.m"
        {
#line 1911 "unify_proc.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__ArgTypes_22, &check_hlds__unify_proc__NumVars_56);
        }
#line 1912 "unify_proc.m"
        {
#line 1912 "unify_proc.m"
          mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__NumVars_56, &check_hlds__unify_proc__ArgVars_26, check_hlds__unify_proc__VarSet0_55, &check_hlds__unify_proc__VarSet_57);
        }
#line 2133 "unify_proc.m"
        check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 0)));
#line 2133 "unify_proc.m"
        check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 1)));
#line 2133 "unify_proc.m"
        check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 2)));
#line 2133 "unify_proc.m"
        check_hlds__unify_proc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_34, (MR_Integer) 3)));
#line 2133 "unify_proc.m"
        {
#line 2133 "unify_proc.m"
          MR_Word base;
#line 2133 "unify_proc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2133 "unify_proc.m"
          *check_hlds__unify_proc__STATE_VARIABLE_Info_35 = base;
#line 2133 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_57));
#line 2133 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 2133 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2133 "unify_proc.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 2133 "unify_proc.m"
        }
#line 1904 "unify_proc.m"
      }
#line 1330 "unify_proc.m"
    {
#line 1330 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1330 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1330 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_26));
#line 1330 "unify_proc.m"
    }
#line 1329 "unify_proc.m"
    {
#line 1329 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_12, check_hlds__unify_proc__V_37_37, check_hlds__unify_proc__Context_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
    }
#line 1332 "unify_proc.m"
    {
#line 1332 "unify_proc.m"
      hlds__make_goal__make_int_const_construction_3_p_0(check_hlds__unify_proc__Index_13, check_hlds__unify_proc__STATE_VARIABLE_N_0_32, &check_hlds__unify_proc__UnifyIndex_Goal_28);
    }
#line 1333 "unify_proc.m"
    *check_hlds__unify_proc__STATE_VARIABLE_N_33 = (check_hlds__unify_proc__STATE_VARIABLE_N_0_32 + (MR_Integer) 1);
#line 1334 "unify_proc.m"
    {
#line 1334 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyIndex_Goal_28));
#line 1334 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1334 "unify_proc.m"
    }
#line 1334 "unify_proc.m"
    {
#line 1334 "unify_proc.m"
      check_hlds__unify_proc__GoalList_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
#line 1334 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_43_43));
#line 1334 "unify_proc.m"
    }
#line 1335 "unify_proc.m"
    {
#line 1335 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_30);
    }
#line 1336 "unify_proc.m"
    {
#line 1336 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_14, check_hlds__unify_proc__GoalInfo0_30, &check_hlds__unify_proc__GoalInfo_31);
    }
#line 1337 "unify_proc.m"
    {
#line 1337 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_29, check_hlds__unify_proc__GoalInfo_31, check_hlds__unify_proc__Goal_16);
    }
#line 1324 "unify_proc.m"
  }
#line 1320 "unify_proc.m"
}

#line 1313 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1(
#line 1313 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1313 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1313 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1313 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1313 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4,
#line 1313 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_5,
#line 1313 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_6)
#line 1313 "unify_proc.m"
{
#line 1313 "unify_proc.m"
  {
#line 1313 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1313 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv2_Goal_16;
#line 1313 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33;
#line 1313 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35;

#line 1313 "unify_proc.m"
    {
#line 1313 "unify_proc.m"
      check_hlds__unify_proc__generate_du_index_case_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv2_Goal_16, ((MR_Integer) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33, ((MR_Word) check_hlds__unify_proc__wrapper_arg_5), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35);
    }
#line 1313 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv2_Goal_16));
#line 1313 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv1_STATE_VARIABLE_N_33));
#line 1313 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_6 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_35));
#line 1313 "unify_proc.m"
  }
#line 1313 "unify_proc.m"
}

#line 1307 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1307 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1307 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_21,
#line 1307 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_22)
#line 1307 "unify_proc.m"
{
#line 1312 "unify_proc.m"
  {
#line 1312 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Disjuncts_16;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_18;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_19;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_20;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_27_27;
#line 1312 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29;
#line 1313 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_17_17;
#line 1313 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv4_V_17_17;
#line 1313 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25;

#line 1313 "unify_proc.m"
    {
#line 1313 "unify_proc.m"
      check_hlds__unify_proc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_9[0]));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_index_proc_body_8_p_0_1));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 5) = ((MR_Box) (check_hlds__unify_proc__Index_12));
#line 1313 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_23_23, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
#line 1313 "unify_proc.m"
    }
#line 1313 "unify_proc.m"
    {
#line 1313 "unify_proc.m"
      mercury__list__map_foldl2_7_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__V_23_23, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_16, ((MR_Box) ((MR_Integer) 0)), &check_hlds__unify_proc__conv4_V_17_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_21)), &check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
    }
#line 1313 "unify_proc.m"
    check_hlds__unify_proc__V_17_17 = ((MR_Integer) check_hlds__unify_proc__conv4_V_17_17);
#line 1313 "unify_proc.m"
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv3_STATE_VARIABLE_Info_25_25);
#line 1315 "unify_proc.m"
    {
#line 1315 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
#line 1316 "unify_proc.m"
    {
#line 1316 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
#line 1317 "unify_proc.m"
    {
#line 1317 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1317 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_16));
#line 1317 "unify_proc.m"
    }
#line 1317 "unify_proc.m"
    {
#line 1317 "unify_proc.m"
      check_hlds__unify_proc__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 0) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 1317 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
#line 1317 "unify_proc.m"
    }
#line 1318 "unify_proc.m"
    {
#line 1318 "unify_proc.m"
      check_hlds__unify_proc__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 0) = ((MR_Box) (check_hlds__unify_proc__Index_12));
#line 1318 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1318 "unify_proc.m"
    }
#line 1318 "unify_proc.m"
    {
#line 1318 "unify_proc.m"
      check_hlds__unify_proc__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1318 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__V_29_29));
#line 1318 "unify_proc.m"
    }
#line 1318 "unify_proc.m"
    {
#line 1318 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_27_27, check_hlds__unify_proc__Goal_20, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, check_hlds__unify_proc__STATE_VARIABLE_Info_22);
    }
#line 1312 "unify_proc.m"
  }
#line 1307 "unify_proc.m"
}

#line 1226 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_9_p_0(
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_10,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CanCompareAsInt_14,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctor_15,
#line 1226 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Goal_16,
#line 1226 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_43,
#line 1226 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_44)
#line 1226 "unify_proc.m"
{
#line 1231 "unify_proc.m"
  {
#line 1231 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1231 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ExistQTVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 0)));
#line 1231 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 2)));
#line 1231 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 3)));
#line 1231 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__FunctorArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 4)));
#line 1231 "unify_proc.m"
    MR_Word check_hlds__unify_proc__FunctorConsId_25;
#line 1231 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalList_35;
#line 1231 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_41;
#line 1231 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_42;
#line 1232 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Constraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 1)));
#line 1232 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_15, (MR_Integer) 5)));
#line 1234 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 0)));
#line 1234 "unify_proc.m"
    MR_String check_hlds__unify_proc__V_46_46;
#line 1234 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_10, (MR_Integer) 1)));

#line 1234 "unify_proc.m"
    check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_45_45)) == (MR_mktag((MR_Integer) 0)));
#line 1234 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1234 "unify_proc.m"
      {
#line 1234 "unify_proc.m"
        check_hlds__unify_proc__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_45_45, (MR_Integer) 0)));
#line 1234 "unify_proc.m"
        check_hlds__unify_proc__succeeded = (strcmp(check_hlds__unify_proc__V_46_46, (MR_String) "{}") == 0);
#line 1234 "unify_proc.m"
      }
#line 1236 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1235 "unify_proc.m"
      {
#line 1235 "unify_proc.m"
        check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1235 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_22));
#line 1235 "unify_proc.m"
      }
#line 1236 "unify_proc.m"
    else
#line 1237 "unify_proc.m"
      {
#line 1237 "unify_proc.m"
        check_hlds__unify_proc__FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1237 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 1) = ((MR_Box) (check_hlds__unify_proc__FunctorName_20));
#line 1237 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 2) = ((MR_Box) (check_hlds__unify_proc__FunctorArity_22));
#line 1237 "unify_proc.m"
        MR_hl_field(MR_mktag(3), check_hlds__unify_proc__FunctorConsId_25, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_10));
#line 1237 "unify_proc.m"
      }
#line 1240 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__ArgTypes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1240 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1241 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__CanCompareAsInt_14 == (MR_Integer) 1);
#line 1255 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 1243 "unify_proc.m"
      {
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS_26;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_27;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastX_28;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastY_29;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal0_30;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal0_31;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastXGoal_32;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CastYGoal_33;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_34;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_51_51;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_53_53;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_54_54;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_61_61;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_64_64;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_65_65;
#line 1243 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_66_66;

#line 1243 "unify_proc.m"
        {
#line 1243 "unify_proc.m"
          check_hlds__unify_proc__RHS_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1243 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1243 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS_26, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "unify_proc.m"
        }
#line 1244 "unify_proc.m"
        {
#line 1244 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHS_26, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_27);
        }
#line 1246 "unify_proc.m"
        {
#line 1246 "unify_proc.m"
          check_hlds__unify_proc__V_51_51 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 1246 "unify_proc.m"
        {
#line 1246 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__V_51_51, (MR_String) "CastX", &check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__STATE_VARIABLE_Info_0_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_53_53);
        }
#line 1247 "unify_proc.m"
        {
#line 1247 "unify_proc.m"
          check_hlds__unify_proc__V_54_54 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
#line 1247 "unify_proc.m"
        {
#line 1247 "unify_proc.m"
          check_hlds__unify_proc__info_new_named_var_5_p_0(check_hlds__unify_proc__V_54_54, (MR_String) "CastY", &check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__STATE_VARIABLE_Info_53_53, check_hlds__unify_proc__STATE_VARIABLE_Info_44);
        }
#line 1248 "unify_proc.m"
        {
#line 1248 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_28, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal0_30);
        }
#line 1249 "unify_proc.m"
        {
#line 1249 "unify_proc.m"
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal0_31);
        }
#line 1250 "unify_proc.m"
        {
#line 1250 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastXGoal0_30, &check_hlds__unify_proc__CastXGoal_32);
        }
#line 1251 "unify_proc.m"
        {
#line 1251 "unify_proc.m"
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 11, check_hlds__unify_proc__CastYGoal0_31, &check_hlds__unify_proc__CastYGoal_33);
        }
#line 1252 "unify_proc.m"
        {
#line 1252 "unify_proc.m"
          check_hlds__unify_proc__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_28));
#line 1252 "unify_proc.m"
        }
#line 1252 "unify_proc.m"
        {
#line 1252 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastY_29, check_hlds__unify_proc__V_61_61, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_34);
        }
#line 1254 "unify_proc.m"
        {
#line 1254 "unify_proc.m"
          check_hlds__unify_proc__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_34));
#line 1254 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1254 "unify_proc.m"
        }
#line 1254 "unify_proc.m"
        {
#line 1254 "unify_proc.m"
          check_hlds__unify_proc__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_33));
#line 1254 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_65_65, 1) = ((MR_Box) (check_hlds__unify_proc__V_66_66));
#line 1254 "unify_proc.m"
        }
#line 1254 "unify_proc.m"
        {
#line 1254 "unify_proc.m"
          check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_32));
#line 1254 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 1254 "unify_proc.m"
        }
#line 1254 "unify_proc.m"
        {
#line 1254 "unify_proc.m"
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_27));
#line 1254 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 1254 "unify_proc.m"
        }
#line 1243 "unify_proc.m"
      }
#line 1255 "unify_proc.m"
    else
#line 1256 "unify_proc.m"
      {
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars1_36;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Vars2_37;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS1_38;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RHS2_39;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyArgs_Goals_40;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_68_68;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_69_69;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_77_77;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyX_Goal_78;
#line 1256 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyY_Goal_79;
#line 1925 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_88;
#line 1925 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_17_89;

#line 1256 "unify_proc.m"
        {
#line 1256 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, &check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_43, &check_hlds__unify_proc__STATE_VARIABLE_Info_68_68);
        }
#line 1257 "unify_proc.m"
        {
#line 1257 "unify_proc.m"
          check_hlds__unify_proc__make_fresh_vars_5_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, &check_hlds__unify_proc__Vars2_37, check_hlds__unify_proc__STATE_VARIABLE_Info_68_68, &check_hlds__unify_proc__STATE_VARIABLE_Info_69_69);
        }
#line 1258 "unify_proc.m"
        {
#line 1258 "unify_proc.m"
          check_hlds__unify_proc__RHS1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1258 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1258 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS1_38, 2) = ((MR_Box) (check_hlds__unify_proc__Vars1_36));
#line 1258 "unify_proc.m"
        }
#line 1259 "unify_proc.m"
        {
#line 1259 "unify_proc.m"
          check_hlds__unify_proc__RHS2_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 0) = ((MR_Box) (check_hlds__unify_proc__FunctorConsId_25));
#line 1259 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1259 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__RHS2_39, 2) = ((MR_Box) (check_hlds__unify_proc__Vars2_37));
#line 1259 "unify_proc.m"
        }
#line 1260 "unify_proc.m"
        {
#line 1260 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__RHS1_38, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyX_Goal_78);
        }
#line 1262 "unify_proc.m"
        {
#line 1262 "unify_proc.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__Y_12, check_hlds__unify_proc__RHS2_39, check_hlds__unify_proc__Context_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyY_Goal_79);
        }
#line 1922 "unify_proc.m"
        {
#line 1922 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__unify_proc__unify_var_lists_2_7_p_0(check_hlds__unify_proc__ArgTypes_21, check_hlds__unify_proc__ExistQTVars_18, check_hlds__unify_proc__Vars1_36, check_hlds__unify_proc__Vars2_37, &check_hlds__unify_proc__Goal0_88, check_hlds__unify_proc__STATE_VARIABLE_Info_69_69, &check_hlds__unify_proc__STATE_VARIABLE_Info_17_89);
        }
#line 1925 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 1924 "unify_proc.m"
          {
#line 1924 "unify_proc.m"
            *check_hlds__unify_proc__STATE_VARIABLE_Info_44 = check_hlds__unify_proc__STATE_VARIABLE_Info_17_89;
#line 1924 "unify_proc.m"
            check_hlds__unify_proc__UnifyArgs_Goals_40 = check_hlds__unify_proc__Goal0_88;
#line 1924 "unify_proc.m"
          }
#line 1925 "unify_proc.m"
        else
#line 1926 "unify_proc.m"
          {
#line 1926 "unify_proc.m"
            {
#line 1926 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.unify_var_lists\'/7", (MR_String) "length mismatch");
#line 1926 "unify_proc.m"
              return;
            }
#line 1926 "unify_proc.m"
          }
#line 1266 "unify_proc.m"
        {
#line 1266 "unify_proc.m"
          check_hlds__unify_proc__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_77_77, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyY_Goal_79));
#line 1266 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_77_77, 1) = ((MR_Box) (check_hlds__unify_proc__UnifyArgs_Goals_40));
#line 1266 "unify_proc.m"
        }
#line 1266 "unify_proc.m"
        {
#line 1266 "unify_proc.m"
          check_hlds__unify_proc__GoalList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyX_Goal_78));
#line 1266 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__GoalList_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_77_77));
#line 1266 "unify_proc.m"
        }
#line 1256 "unify_proc.m"
      }
#line 1268 "unify_proc.m"
    {
#line 1268 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_41);
    }
#line 1269 "unify_proc.m"
    {
#line 1269 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_41, &check_hlds__unify_proc__GoalInfo_42);
    }
#line 1270 "unify_proc.m"
    {
#line 1270 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__GoalList_35, check_hlds__unify_proc__GoalInfo_42, check_hlds__unify_proc__Goal_16);
    }
#line 1231 "unify_proc.m"
  }
#line 1226 "unify_proc.m"
}

#line 1218 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1(
#line 1218 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 1218 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1,
#line 1218 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_2,
#line 1218 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_3,
#line 1218 "unify_proc.m"
  MR_Box * check_hlds__unify_proc__wrapper_arg_4)
#line 1218 "unify_proc.m"
{
#line 1218 "unify_proc.m"
  {
#line 1218 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 1218 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv1_Goal_16;
#line 1218 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44;

#line 1218 "unify_proc.m"
    {
#line 1218 "unify_proc.m"
      check_hlds__unify_proc__generate_du_unify_case_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1), &check_hlds__unify_proc__conv1_Goal_16, ((MR_Word) check_hlds__unify_proc__wrapper_arg_3), &check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44);
    }
#line 1218 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv1_Goal_16));
#line 1218 "unify_proc.m"
    *check_hlds__unify_proc__wrapper_arg_4 = ((MR_Box) (check_hlds__unify_proc__conv0_STATE_VARIABLE_Info_44));
#line 1218 "unify_proc.m"
  }
#line 1218 "unify_proc.m"
}

#line 1212 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_9,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Ctors_10,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1212 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1212 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 1212 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
#line 1212 "unify_proc.m"
{
#line 1216 "unify_proc.m"
  {
#line 1216 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CanCompareAsInt_16;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Disjuncts_17;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_18;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_19;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_20;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_21;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_24_24;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_25_25;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_29_29;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 1216 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Globals_43;
#line 1279 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 1279 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 1279 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 1218 "unify_proc.m"
    MR_Box check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25;

#line 1280 "unify_proc.m"
    {
#line 1280 "unify_proc.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__unify_proc__ModuleInfo_42, &check_hlds__unify_proc__Globals_43);
    }
#line 1281 "unify_proc.m"
    {
#line 1281 "unify_proc.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__unify_proc__Globals_43, (MR_Integer) 265, &check_hlds__unify_proc__CanCompareAsInt_16);
    }
#line 1218 "unify_proc.m"
    {
#line 1218 "unify_proc.m"
      check_hlds__unify_proc__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0]));
#line 1218 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0_1));
#line 1218 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1218 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 3) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_9));
#line 1218 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 4) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1218 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 5) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1218 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 6) = ((MR_Box) (check_hlds__unify_proc__Context_13));
#line 1218 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_24_24, 7) = ((MR_Box) (check_hlds__unify_proc__CanCompareAsInt_16));
#line 1218 "unify_proc.m"
    }
#line 1218 "unify_proc.m"
    {
#line 1218 "unify_proc.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0, check_hlds__unify_proc__V_24_24, check_hlds__unify_proc__Ctors_10, &check_hlds__unify_proc__Disjuncts_17, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_Info_0_22)), &check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
    }
#line 1218 "unify_proc.m"
    check_hlds__unify_proc__STATE_VARIABLE_Info_25_25 = ((MR_Word) check_hlds__unify_proc__conv2_STATE_VARIABLE_Info_25_25);
#line 1220 "unify_proc.m"
    {
#line 1220 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_18);
    }
#line 1221 "unify_proc.m"
    {
#line 1221 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_18, &check_hlds__unify_proc__GoalInfo_19);
    }
#line 1222 "unify_proc.m"
    {
#line 1222 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1222 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__Disjuncts_17));
#line 1222 "unify_proc.m"
    }
#line 1222 "unify_proc.m"
    {
#line 1222 "unify_proc.m"
      check_hlds__unify_proc__Goal0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 0) = ((MR_Box) (check_hlds__unify_proc__V_26_26));
#line 1222 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_20, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_19));
#line 1222 "unify_proc.m"
    }
#line 1223 "unify_proc.m"
    {
#line 1223 "unify_proc.m"
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_20, &check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__STATE_VARIABLE_Info_25_25, &check_hlds__unify_proc__STATE_VARIABLE_Info_28_28);
    }
#line 1224 "unify_proc.m"
    {
#line 1224 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1224 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1224 "unify_proc.m"
    }
#line 1224 "unify_proc.m"
    {
#line 1224 "unify_proc.m"
      check_hlds__unify_proc__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1224 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_29_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_31_31));
#line 1224 "unify_proc.m"
    }
#line 1224 "unify_proc.m"
    {
#line 1224 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_29_29, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
    }
#line 1216 "unify_proc.m"
  }
#line 1212 "unify_proc.m"
}

#line 1137 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_9,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_10,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 1137 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 1137 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_24,
#line 1137 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_25)
#line 1137 "unify_proc.m"
{
#line 1141 "unify_proc.m"
  {
#line 1141 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_16;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_17;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_18;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_19;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CompareGoal_20;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_21;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_22;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_23;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_28_28;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_36_36;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_38_38;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_40_40;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_42_42;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_44_44;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_47_47;
#line 1141 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_56;
#line 1141 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_57;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_65;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_66;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_67;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_68;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_79_79;
#line 1141 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_80_80;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_73_73;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_77_77;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_78_78;

#line 1873 "unify_proc.m"
    {
#line 1873 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_56);
    }
#line 1874 "unify_proc.m"
    {
#line 1874 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_56, &check_hlds__unify_proc__Name_57);
    }
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2121 "unify_proc.m"
    {
#line 2121 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_57, &check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__VarSet0_65, &check_hlds__unify_proc__VarSet_67);
    }
#line 2122 "unify_proc.m"
    {
#line 2122 "unify_proc.m"
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__EqvType_9, check_hlds__unify_proc__VarTypes0_66, &check_hlds__unify_proc__VarTypes_68);
    }
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2124 "unify_proc.m"
    {
#line 2124 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_67));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_68));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 2124 "unify_proc.m"
    }
#line 1148 "unify_proc.m"
    {
#line 1148 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_9, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_17, check_hlds__unify_proc__STATE_VARIABLE_Info_28_28, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
    }
#line 1149 "unify_proc.m"
    {
#line 1149 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__X_11, check_hlds__unify_proc__CastX_16, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastXGoal_18);
    }
#line 1150 "unify_proc.m"
    {
#line 1150 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__CastY_17, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CastYGoal_19);
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_38_38, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_17));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_16));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (check_hlds__unify_proc__V_38_38));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
#line 1151 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 1151 "unify_proc.m"
    }
#line 1151 "unify_proc.m"
    {
#line 1151 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "compare", check_hlds__unify_proc__V_35_35, check_hlds__unify_proc__Context_13, &check_hlds__unify_proc__CompareGoal_20, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, &check_hlds__unify_proc__STATE_VARIABLE_Info_36_36);
    }
#line 1153 "unify_proc.m"
    {
#line 1153 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_21);
    }
#line 1154 "unify_proc.m"
    {
#line 1154 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_13, check_hlds__unify_proc__GoalInfo0_21, &check_hlds__unify_proc__GoalInfo_22);
    }
#line 1155 "unify_proc.m"
    {
#line 1155 "unify_proc.m"
      check_hlds__unify_proc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_20));
#line 1155 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1155 "unify_proc.m"
    }
#line 1155 "unify_proc.m"
    {
#line 1155 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_19));
#line 1155 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (check_hlds__unify_proc__V_42_42));
#line 1155 "unify_proc.m"
    }
#line 1155 "unify_proc.m"
    {
#line 1155 "unify_proc.m"
      check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_18));
#line 1155 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 1155 "unify_proc.m"
    }
#line 1155 "unify_proc.m"
    {
#line 1155 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_40_40, check_hlds__unify_proc__GoalInfo_22, &check_hlds__unify_proc__Goal_23);
    }
#line 1156 "unify_proc.m"
    {
#line 1156 "unify_proc.m"
      check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 1156 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1156 "unify_proc.m"
    }
#line 1156 "unify_proc.m"
    {
#line 1156 "unify_proc.m"
      check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 1156 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_47_47));
#line 1156 "unify_proc.m"
    }
#line 1156 "unify_proc.m"
    {
#line 1156 "unify_proc.m"
      check_hlds__unify_proc__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 0) = ((MR_Box) (check_hlds__unify_proc__Res_10));
#line 1156 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_44_44, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1156 "unify_proc.m"
    }
#line 1156 "unify_proc.m"
    {
#line 1156 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_44_44, check_hlds__unify_proc__Goal_23, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_36_36, check_hlds__unify_proc__STATE_VARIABLE_Info_25);
    }
#line 1141 "unify_proc.m"
  }
#line 1137 "unify_proc.m"
}

#line 1103 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__HeadVar__1_1,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_2,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_3,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_4,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_5,
#line 1103 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_6,
#line 1103 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_7,
#line 1103 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_8)
#line 1103 "unify_proc.m"
{
#line 1108 "unify_proc.m"
  {
#line 1108 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 1108 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1108 "unify_proc.m"
      {
#line 1109 "unify_proc.m"
        {
#line 1109 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_compare_proc_body\'/8", (MR_String) "trying to create compare proc for abstract noncanonical type");
#line 1109 "unify_proc.m"
          return;
        }
#line 1108 "unify_proc.m"
      }
#line 1108 "unify_proc.m"
    else
#line 1112 "unify_proc.m"
      {
#line 1112 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeCompare_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 1)));
#line 1112 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgVars_29;
#line 1112 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_36;
#line 1112 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_39_39;
#line 1112 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_40_40;
#line 1112 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_47_47;
#line 1111 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__HeadVar__1_1, (MR_Integer) 0)));

#line 1113 "unify_proc.m"
        {
#line 1113 "unify_proc.m"
          check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__Y_4));
#line 1113 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1113 "unify_proc.m"
        }
#line 1113 "unify_proc.m"
        {
#line 1113 "unify_proc.m"
          check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_3));
#line 1113 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1113 "unify_proc.m"
        }
#line 1113 "unify_proc.m"
        {
#line 1113 "unify_proc.m"
          check_hlds__unify_proc__ArgVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_29, 0) = ((MR_Box) (check_hlds__unify_proc__Res_2));
#line 1113 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_29, 1) = ((MR_Box) (check_hlds__unify_proc__V_39_39));
#line 1113 "unify_proc.m"
        }
#line 1129 "unify_proc.m"
        if ((check_hlds__unify_proc__MaybeCompare_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "unify_proc.m"
          {
#line 1132 "unify_proc.m"
            {
#line 1132 "unify_proc.m"
              check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_non_canonical_type", check_hlds__unify_proc__ArgVars_29, check_hlds__unify_proc__Context_5, &check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_7, &check_hlds__unify_proc__STATE_VARIABLE_Info_47_47);
            }
#line 1130 "unify_proc.m"
          }
#line 1129 "unify_proc.m"
        else
#line 1115 "unify_proc.m"
          {
#line 1115 "unify_proc.m"
            MR_Word check_hlds__unify_proc__ComparePredName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_22, (MR_Integer) 0)));
#line 1115 "unify_proc.m"
            MR_Word check_hlds__unify_proc__PredId_31;
#line 1115 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__ModeId_32;
#line 1115 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Call_33;
#line 1115 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_34;
#line 1115 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Goal0_35;
#line 1115 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_46_46;

#line 1121 "unify_proc.m"
            {
#line 1121 "unify_proc.m"
              check_hlds__unify_proc__PredId_31 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1122 "unify_proc.m"
            {
#line 1122 "unify_proc.m"
              check_hlds__unify_proc__ModeId_32 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 1123 "unify_proc.m"
            {
#line 1123 "unify_proc.m"
              check_hlds__unify_proc__Call_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_31));
#line 1123 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_32));
#line 1123 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 2) = ((MR_Box) (check_hlds__unify_proc__ArgVars_29));
#line 1123 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1123 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1123 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_33, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_30));
#line 1123 "unify_proc.m"
            }
#line 1125 "unify_proc.m"
            {
#line 1125 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_5, &check_hlds__unify_proc__GoalInfo_34);
            }
#line 1126 "unify_proc.m"
            {
#line 1126 "unify_proc.m"
              check_hlds__unify_proc__Goal0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1126 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_35, 0) = ((MR_Box) (check_hlds__unify_proc__Call_33));
#line 1126 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_35, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_34));
#line 1126 "unify_proc.m"
            }
#line 1127 "unify_proc.m"
            {
#line 1127 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Res_2));
#line 1127 "unify_proc.m"
            }
#line 1127 "unify_proc.m"
            {
#line 1127 "unify_proc.m"
              check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_5, check_hlds__unify_proc__X_3, check_hlds__unify_proc__Y_4, check_hlds__unify_proc__V_46_46, check_hlds__unify_proc__Goal0_35, &check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__STATE_VARIABLE_Info_0_7, &check_hlds__unify_proc__STATE_VARIABLE_Info_47_47);
            }
#line 1115 "unify_proc.m"
          }
#line 1135 "unify_proc.m"
        {
#line 1135 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_29, check_hlds__unify_proc__Goal_36, check_hlds__unify_proc__Context_5, check_hlds__unify_proc__Clause_6, check_hlds__unify_proc__STATE_VARIABLE_Info_47_47, check_hlds__unify_proc__STATE_VARIABLE_Info_8);
        }
#line 1112 "unify_proc.m"
      }
#line 1108 "unify_proc.m"
  }
#line 1103 "unify_proc.m"
}

#line 1093 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1093 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1093 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_16,
#line 1093 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_17)
#line 1093 "unify_proc.m"
{
#line 1098 "unify_proc.m"
  {
#line 1098 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1098 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_14;
#line 1098 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_15;
#line 1098 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18;
#line 1098 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19;
#line 1098 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_22_22;

#line 1099 "unify_proc.m"
    {
#line 1099 "unify_proc.m"
      check_hlds__unify_proc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1099 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1099 "unify_proc.m"
    }
#line 1099 "unify_proc.m"
    {
#line 1099 "unify_proc.m"
      check_hlds__unify_proc__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_18_18, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1099 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_18_18, 1) = ((MR_Box) (check_hlds__unify_proc__V_19_19));
#line 1099 "unify_proc.m"
    }
#line 1099 "unify_proc.m"
    {
#line 1099 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1099 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__V_18_18));
#line 1099 "unify_proc.m"
    }
#line 1100 "unify_proc.m"
    {
#line 1100 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_solver_type", check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__Goal_15, check_hlds__unify_proc__STATE_VARIABLE_Info_0_16, &check_hlds__unify_proc__STATE_VARIABLE_Info_22_22);
    }
#line 1101 "unify_proc.m"
    {
#line 1101 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Goal_15, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_22_22, check_hlds__unify_proc__STATE_VARIABLE_Info_17);
    }
#line 1098 "unify_proc.m"
  }
#line 1093 "unify_proc.m"
}

#line 1084 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(
#line 1084 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_7,
#line 1084 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_8,
#line 1084 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_9,
#line 1084 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_10,
#line 1084 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_14,
#line 1084 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_15)
#line 1084 "unify_proc.m"
{
#line 1088 "unify_proc.m"
  {
#line 1088 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1088 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_12;
#line 1088 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_13;
#line 1088 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_16_16;
#line 1088 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_19_19;

#line 1089 "unify_proc.m"
    {
#line 1089 "unify_proc.m"
      check_hlds__unify_proc__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_16_16, 0) = ((MR_Box) (check_hlds__unify_proc__Y_8));
#line 1089 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "unify_proc.m"
    }
#line 1089 "unify_proc.m"
    {
#line 1089 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 0) = ((MR_Box) (check_hlds__unify_proc__X_7));
#line 1089 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_12, 1) = ((MR_Box) (check_hlds__unify_proc__V_16_16));
#line 1089 "unify_proc.m"
    }
#line 1090 "unify_proc.m"
    {
#line 1090 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_unify_solver_type", check_hlds__unify_proc__ArgVars_12, check_hlds__unify_proc__Context_9, &check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__STATE_VARIABLE_Info_0_14, &check_hlds__unify_proc__STATE_VARIABLE_Info_19_19);
    }
#line 1091 "unify_proc.m"
    {
#line 1091 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_12, check_hlds__unify_proc__Goal_13, check_hlds__unify_proc__Context_9, check_hlds__unify_proc__Clause_10, check_hlds__unify_proc__STATE_VARIABLE_Info_19_19, check_hlds__unify_proc__STATE_VARIABLE_Info_15);
    }
#line 1088 "unify_proc.m"
  }
#line 1084 "unify_proc.m"
}

#line 1037 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1037 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1037 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_15,
#line 1037 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_16)
#line 1037 "unify_proc.m"
{
#line 1041 "unify_proc.m"
  {
#line 1041 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_14;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_19_19;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal0_25;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_26_26;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SymName_29;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_31_31;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Builtin_34;
#line 1041 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;

#line 2056 "unify_proc.m"
    {
#line 2056 "unify_proc.m"
      check_hlds__unify_proc__Builtin_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2057 "unify_proc.m"
    {
#line 2057 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_34));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2057 "unify_proc.m"
    }
#line 2057 "unify_proc.m"
    {
#line 2057 "unify_proc.m"
      check_hlds__unify_proc__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_35_35));
#line 2057 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_31_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2057 "unify_proc.m"
    }
#line 2062 "unify_proc.m"
    {
#line 2062 "unify_proc.m"
      check_hlds__unify_proc__V_32_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 2062 "unify_proc.m"
    {
#line 2062 "unify_proc.m"
      check_hlds__unify_proc__SymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 0) = ((MR_Box) (check_hlds__unify_proc__V_32_32));
#line 2062 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_29, 1) = ((MR_Box) ((MR_String) "="));
#line 2062 "unify_proc.m"
    }
#line 2061 "unify_proc.m"
    {
#line 2061 "unify_proc.m"
      check_hlds__unify_proc__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_29));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2061 "unify_proc.m"
      MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__V_31_31));
#line 2061 "unify_proc.m"
    }
#line 1816 "unify_proc.m"
    {
#line 1816 "unify_proc.m"
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__unify_proc__Res_8, check_hlds__unify_proc__V_26_26, &check_hlds__unify_proc__Goal0_25);
    }
#line 1817 "unify_proc.m"
    {
#line 1817 "unify_proc.m"
      hlds__hlds_goal__goal_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Goal0_25, &check_hlds__unify_proc__Goal_14);
    }
#line 1044 "unify_proc.m"
    {
#line 1044 "unify_proc.m"
      check_hlds__unify_proc__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_20_20, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1044 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "unify_proc.m"
    }
#line 1044 "unify_proc.m"
    {
#line 1044 "unify_proc.m"
      check_hlds__unify_proc__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1044 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_19_19, 1) = ((MR_Box) (check_hlds__unify_proc__V_20_20));
#line 1044 "unify_proc.m"
    }
#line 1044 "unify_proc.m"
    {
#line 1044 "unify_proc.m"
      check_hlds__unify_proc__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_17_17, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1044 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_17_17, 1) = ((MR_Box) (check_hlds__unify_proc__V_19_19));
#line 1044 "unify_proc.m"
    }
#line 1044 "unify_proc.m"
    {
#line 1044 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_17_17, check_hlds__unify_proc__Goal_14, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_0_15, check_hlds__unify_proc__STATE_VARIABLE_Info_16);
    }
#line 1041 "unify_proc.m"
  }
#line 1037 "unify_proc.m"
}

#line 1019 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_8,
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 1019 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 1019 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_23,
#line 1019 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_24)
#line 1019 "unify_proc.m"
{
#line 1023 "unify_proc.m"
  {
#line 1023 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__IntType_14;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_15;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_16;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_17;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_18;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CompareGoal_19;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_20;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_21;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_22;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_27_27;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_30_30;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_34_34;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_35_35;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_39_39;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_40_40;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_45_45;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_46_46;
#line 1023 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_55;
#line 1023 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_56;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_64;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_65;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_66;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_67;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_78_78;
#line 1023 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_79_79;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_71_71;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_76_76;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_77_77;

#line 1024 "unify_proc.m"
    {
#line 1024 "unify_proc.m"
      check_hlds__unify_proc__IntType_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 1873 "unify_proc.m"
    {
#line 1873 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_55);
    }
#line 1874 "unify_proc.m"
    {
#line 1874 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_55, &check_hlds__unify_proc__Name_56);
    }
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 2121 "unify_proc.m"
    {
#line 2121 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_56, &check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__VarSet0_64, &check_hlds__unify_proc__VarSet_66);
    }
#line 2122 "unify_proc.m"
    {
#line 2122 "unify_proc.m"
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__IntType_14, check_hlds__unify_proc__VarTypes0_65, &check_hlds__unify_proc__VarTypes_67);
    }
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 2124 "unify_proc.m"
    {
#line 2124 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_66));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_67));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__unify_proc__V_78_78));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (check_hlds__unify_proc__V_79_79));
#line 2124 "unify_proc.m"
    }
#line 1026 "unify_proc.m"
    {
#line 1026 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__IntType_14, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_16, check_hlds__unify_proc__STATE_VARIABLE_Info_27_27, &check_hlds__unify_proc__STATE_VARIABLE_Info_30_30);
    }
#line 1027 "unify_proc.m"
    {
#line 1027 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__X_9, check_hlds__unify_proc__CastX_15, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastXGoal_17);
    }
#line 1028 "unify_proc.m"
    {
#line 1028 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, check_hlds__unify_proc__Y_10, check_hlds__unify_proc__CastY_16, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastYGoal_18);
    }
#line 1029 "unify_proc.m"
    {
#line 1029 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_16));
#line 1029 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1029 "unify_proc.m"
    }
#line 1029 "unify_proc.m"
    {
#line 1029 "unify_proc.m"
      check_hlds__unify_proc__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastX_15));
#line 1029 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 1029 "unify_proc.m"
    }
#line 1029 "unify_proc.m"
    {
#line 1029 "unify_proc.m"
      check_hlds__unify_proc__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_34_34, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1029 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_34_34, 1) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 1029 "unify_proc.m"
    }
#line 1029 "unify_proc.m"
    {
#line 1029 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0((MR_String) "builtin_compare_int", check_hlds__unify_proc__V_34_34, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CompareGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_35_35);
    }
#line 1032 "unify_proc.m"
    {
#line 1032 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_20);
    }
#line 1033 "unify_proc.m"
    {
#line 1033 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_20, &check_hlds__unify_proc__GoalInfo_21);
    }
#line 1034 "unify_proc.m"
    {
#line 1034 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__CompareGoal_19));
#line 1034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1034 "unify_proc.m"
    }
#line 1034 "unify_proc.m"
    {
#line 1034 "unify_proc.m"
      check_hlds__unify_proc__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_18));
#line 1034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 1034 "unify_proc.m"
    }
#line 1034 "unify_proc.m"
    {
#line 1034 "unify_proc.m"
      check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_17));
#line 1034 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_40_40));
#line 1034 "unify_proc.m"
    }
#line 1034 "unify_proc.m"
    {
#line 1034 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_39_39, check_hlds__unify_proc__GoalInfo_21, &check_hlds__unify_proc__Goal_22);
    }
#line 1035 "unify_proc.m"
    {
#line 1035 "unify_proc.m"
      check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 1035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "unify_proc.m"
    }
#line 1035 "unify_proc.m"
    {
#line 1035 "unify_proc.m"
      check_hlds__unify_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 1035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 1) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 1035 "unify_proc.m"
    }
#line 1035 "unify_proc.m"
    {
#line 1035 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__Res_8));
#line 1035 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_45_45));
#line 1035 "unify_proc.m"
    }
#line 1035 "unify_proc.m"
    {
#line 1035 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_43_43, check_hlds__unify_proc__Goal_22, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_35_35, check_hlds__unify_proc__STATE_VARIABLE_Info_24);
    }
#line 1023 "unify_proc.m"
  }
#line 1019 "unify_proc.m"
}

#line 998 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__compare_ctors_lexically_3_p_0(
#line 998 "unify_proc.m"
  MR_Word check_hlds__unify_proc__A_4,
#line 998 "unify_proc.m"
  MR_Word check_hlds__unify_proc__B_5,
#line 998 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Res_6)
#line 998 "unify_proc.m"
{
#line 1001 "unify_proc.m"
  {
#line 1001 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 1001 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1001 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ArityA_7;
#line 1001 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__ArityB_8;
#line 1001 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArityRes_9;
#line 1001 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
#line 1001 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_13_13;
#line 1002 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
#line 1002 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
#line 1002 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
#line 1002 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
#line 1002 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 5)));
#line 1003 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_21_21;
#line 1003 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 1003 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_23_23;
#line 1003 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__V_24_24;
#line 1003 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25;

#line 1002 "unify_proc.m"
    {
#line 1002 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_36_36, check_hlds__unify_proc__V_12_12, &check_hlds__unify_proc__ArityA_7);
    }
#line 1003 "unify_proc.m"
    check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
#line 1003 "unify_proc.m"
    check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
#line 1003 "unify_proc.m"
    check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
#line 1003 "unify_proc.m"
    check_hlds__unify_proc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
#line 1003 "unify_proc.m"
    check_hlds__unify_proc__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
#line 1003 "unify_proc.m"
    check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 5)));
#line 1003 "unify_proc.m"
    {
#line 1003 "unify_proc.m"
      mercury__list__length_2_p_0(check_hlds__unify_proc__TypeCtorInfo_36_36, check_hlds__unify_proc__V_13_13, &check_hlds__unify_proc__ArityB_8);
    }
#line 1004 "unify_proc.m"
    {
#line 1004 "unify_proc.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__unify_proc__ArityRes_9, check_hlds__unify_proc__ArityA_7, check_hlds__unify_proc__ArityB_8);
    }
#line 1012 "unify_proc.m"
#line 1012 "unify_proc.m"
    switch (check_hlds__unify_proc__ArityRes_9) {
#line 1012 "unify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1012 "unify_proc.m"
      case (MR_Integer) 1:
#line 1012 "unify_proc.m"
      case (MR_Integer) 2:
#line 1016 "unify_proc.m"
        *check_hlds__unify_proc__Res_6 = check_hlds__unify_proc__ArityRes_9;
#line 1012 "unify_proc.m"
        break;
#line 1012 "unify_proc.m"
      case (MR_Integer) 0:
#line 1006 "unify_proc.m"
        {
#line 1006 "unify_proc.m"
          MR_String check_hlds__unify_proc__NameA_10;
#line 1006 "unify_proc.m"
          MR_String check_hlds__unify_proc__NameB_11;
#line 1006 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 2)));
#line 1006 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_15_15;
#line 1009 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 0)));
#line 1009 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 1)));
#line 1009 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 3)));
#line 1009 "unify_proc.m"
          MR_Integer check_hlds__unify_proc__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 4)));
#line 1009 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__A_4, (MR_Integer) 5)));
#line 1010 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_31_31;
#line 1010 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_32_32;
#line 1010 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_33_33;
#line 1010 "unify_proc.m"
          MR_Integer check_hlds__unify_proc__V_34_34;
#line 1010 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_35_35;

#line 1009 "unify_proc.m"
          {
#line 1009 "unify_proc.m"
            check_hlds__unify_proc__NameA_10 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unify_proc__V_14_14);
          }
#line 1010 "unify_proc.m"
          check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 0)));
#line 1010 "unify_proc.m"
          check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 1)));
#line 1010 "unify_proc.m"
          check_hlds__unify_proc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 2)));
#line 1010 "unify_proc.m"
          check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 3)));
#line 1010 "unify_proc.m"
          check_hlds__unify_proc__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 4)));
#line 1010 "unify_proc.m"
          check_hlds__unify_proc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__B_5, (MR_Integer) 5)));
#line 1010 "unify_proc.m"
          {
#line 1010 "unify_proc.m"
            check_hlds__unify_proc__NameB_11 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__unify_proc__V_15_15);
          }
#line 1011 "unify_proc.m"
          {
#line 1011 "unify_proc.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__unify_proc__Res_6, check_hlds__unify_proc__NameA_10, check_hlds__unify_proc__NameB_11);
          }
#line 1006 "unify_proc.m"
        }
#line 1012 "unify_proc.m"
        break;
#line 1012 "unify_proc.m"
    }
#line 1001 "unify_proc.m"
  }
#line 998 "unify_proc.m"
}

#line 910 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_9_p_0(
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_10,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_11,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Res_12,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_13,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_14,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 910 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_16,
#line 910 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_41,
#line 910 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_42)
#line 910 "unify_proc.m"
{
#line 915 "unify_proc.m"
  {
#line 915 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 915 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 918 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_19;
#line 918 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_43_43;

#line 918 "unify_proc.m"
    {
#line 918 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_10, &check_hlds__unify_proc__TypeCtor_19);
    }
#line 919 "unify_proc.m"
    {
#line 919 "unify_proc.m"
      check_hlds__unify_proc__V_43_43 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_19);
    }
#line 919 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_43_43 == (MR_Integer) 0);
#line 922 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 921 "unify_proc.m"
      {
#line 921 "unify_proc.m"
        check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
      }
#line 922 "unify_proc.m"
    else
#line 928 "unify_proc.m"
      {
#line 928 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UserEqComp_20;

#line 923 "unify_proc.m"
        {
#line 923 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__TypeBody_11, &check_hlds__unify_proc__UserEqComp_20);
        }
#line 928 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 926 "unify_proc.m"
          {
#line 926 "unify_proc.m"
            check_hlds__unify_proc__generate_user_defined_compare_proc_body_8_p_0(check_hlds__unify_proc__UserEqComp_20, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
          }
#line 928 "unify_proc.m"
        else
#line 960 "unify_proc.m"
#line 960 "unify_proc.m"
          switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_11)) {
#line 960 "unify_proc.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 960 "unify_proc.m"
            case (MR_Integer) 0:
#line 974 "unify_proc.m"
              {
#line 974 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_51_51;

#line 975 "unify_proc.m"
                {
#line 975 "unify_proc.m"
                  check_hlds__unify_proc__V_51_51 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                }
#line 975 "unify_proc.m"
                {
#line 975 "unify_proc.m"
                  check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__V_51_51, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                }
#line 974 "unify_proc.m"
              }
#line 960 "unify_proc.m"
              break;
#line 960 "unify_proc.m"
            case (MR_Integer) 1:
#line 930 "unify_proc.m"
              {
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__Ctors_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__DuTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 3)));
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 1)));
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 2)));
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 4)));
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 5)));
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 930 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 7)));

#line 937 "unify_proc.m"
#line 937 "unify_proc.m"
                switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_24)) {
#line 937 "unify_proc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 937 "unify_proc.m"
                  case (MR_Integer) 0:
#line 937 "unify_proc.m"
#line 937 "unify_proc.m"
                    switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_24)) {
#line 937 "unify_proc.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 937 "unify_proc.m"
                      case (MR_Integer) 0:
#line 935 "unify_proc.m"
                        {
#line 935 "unify_proc.m"
                          check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                        }
#line 937 "unify_proc.m"
                        break;
#line 937 "unify_proc.m"
                      case (MR_Integer) 1:
#line 939 "unify_proc.m"
                        {
#line 939 "unify_proc.m"
                          check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                        }
#line 937 "unify_proc.m"
                        break;
#line 937 "unify_proc.m"
                      case (MR_Integer) 2:
#line 957 "unify_proc.m"
                        {
#line 957 "unify_proc.m"
                          check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                        }
#line 937 "unify_proc.m"
                        break;
#line 937 "unify_proc.m"
                    }
#line 937 "unify_proc.m"
                    break;
#line 937 "unify_proc.m"
                  case (MR_Integer) 1:
#line 935 "unify_proc.m"
                    {
#line 935 "unify_proc.m"
                      check_hlds__unify_proc__generate_enum_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                    }
#line 937 "unify_proc.m"
                    break;
#line 937 "unify_proc.m"
                  case (MR_Integer) 2:
#line 943 "unify_proc.m"
                    {
#line 943 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__ArgType_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 1)));
#line 943 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__IsDummyType_34;
#line 943 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 0)));
#line 943 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_24, (MR_Integer) 2)));

#line 944 "unify_proc.m"
                      {
#line 944 "unify_proc.m"
                        check_hlds__unify_proc__IsDummyType_34 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__ArgType_32);
                      }
#line 950 "unify_proc.m"
#line 950 "unify_proc.m"
                      switch (check_hlds__unify_proc__IsDummyType_34) {
#line 950 "unify_proc.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 950 "unify_proc.m"
                        case (MR_Integer) 0:
#line 948 "unify_proc.m"
                          {
#line 948 "unify_proc.m"
                            check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                          }
#line 950 "unify_proc.m"
                          break;
#line 950 "unify_proc.m"
                        case (MR_Integer) 1:
#line 952 "unify_proc.m"
                          {
#line 952 "unify_proc.m"
                            check_hlds__unify_proc__generate_du_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_10, check_hlds__unify_proc__Ctors_21, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                          }
#line 950 "unify_proc.m"
                          break;
#line 950 "unify_proc.m"
                      }
#line 943 "unify_proc.m"
                    }
#line 937 "unify_proc.m"
                    break;
#line 937 "unify_proc.m"
                }
#line 930 "unify_proc.m"
              }
#line 960 "unify_proc.m"
              break;
#line 960 "unify_proc.m"
            case (MR_Integer) 2:
#line 961 "unify_proc.m"
              {
#line 961 "unify_proc.m"
                MR_Word check_hlds__unify_proc__EqvType_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)));
#line 961 "unify_proc.m"
                MR_Word check_hlds__unify_proc__IsDummyType_60;

#line 962 "unify_proc.m"
                {
#line 962 "unify_proc.m"
                  check_hlds__unify_proc__IsDummyType_60 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__EqvType_35);
                }
#line 968 "unify_proc.m"
#line 968 "unify_proc.m"
                switch (check_hlds__unify_proc__IsDummyType_60) {
#line 968 "unify_proc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 968 "unify_proc.m"
                  case (MR_Integer) 0:
#line 966 "unify_proc.m"
                    {
#line 966 "unify_proc.m"
                      check_hlds__unify_proc__generate_dummy_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                    }
#line 968 "unify_proc.m"
                    break;
#line 968 "unify_proc.m"
                  case (MR_Integer) 1:
#line 970 "unify_proc.m"
                    {
#line 970 "unify_proc.m"
                      check_hlds__unify_proc__generate_eqv_compare_proc_body_8_p_0(check_hlds__unify_proc__EqvType_35, check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                    }
#line 968 "unify_proc.m"
                    break;
#line 968 "unify_proc.m"
                }
#line 961 "unify_proc.m"
              }
#line 960 "unify_proc.m"
              break;
#line 960 "unify_proc.m"
            case (MR_Integer) 3:
#line 960 "unify_proc.m"
#line 960 "unify_proc.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_11, (MR_Integer) 0)))) {
#line 960 "unify_proc.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 960 "unify_proc.m"
                case (MR_Integer) 0:
#line 979 "unify_proc.m"
                  {
#line 979 "unify_proc.m"
                    check_hlds__unify_proc__generate_default_solver_type_compare_proc_body_7_p_0(check_hlds__unify_proc__Res_12, check_hlds__unify_proc__X_13, check_hlds__unify_proc__Y_14, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                  }
#line 960 "unify_proc.m"
                  break;
#line 960 "unify_proc.m"
                case (MR_Integer) 1:
#line 987 "unify_proc.m"
                  {
#line 983 "unify_proc.m"
                    {
#line 983 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_18);
                    }
#line 987 "unify_proc.m"
                    if (check_hlds__unify_proc__succeeded)
#line 984 "unify_proc.m"
                      {
#line 984 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__TypeCategory_40;
#line 984 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__ArgVars_74;
#line 984 "unify_proc.m"
                        MR_String check_hlds__unify_proc__Name_75;
#line 984 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__CompareGoal_79;
#line 984 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_80_80;
#line 984 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__V_81_81;
#line 984 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_34_90;

#line 984 "unify_proc.m"
                        {
#line 984 "unify_proc.m"
                          check_hlds__unify_proc__TypeCategory_40 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_18, check_hlds__unify_proc__Type_10);
                        }
#line 1051 "unify_proc.m"
                        {
#line 1051 "unify_proc.m"
                          check_hlds__unify_proc__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 0) = ((MR_Box) (check_hlds__unify_proc__Y_14));
#line 1051 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "unify_proc.m"
                        }
#line 1051 "unify_proc.m"
                        {
#line 1051 "unify_proc.m"
                          check_hlds__unify_proc__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 0) = ((MR_Box) (check_hlds__unify_proc__X_13));
#line 1051 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_80_80, 1) = ((MR_Box) (check_hlds__unify_proc__V_81_81));
#line 1051 "unify_proc.m"
                        }
#line 1051 "unify_proc.m"
                        {
#line 1051 "unify_proc.m"
                          check_hlds__unify_proc__ArgVars_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_74, 0) = ((MR_Box) (check_hlds__unify_proc__Res_12));
#line 1051 "unify_proc.m"
                          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_74, 1) = ((MR_Box) (check_hlds__unify_proc__V_80_80));
#line 1051 "unify_proc.m"
                        }
#line 1058 "unify_proc.m"
#line 1058 "unify_proc.m"
                        switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeCategory_40)) {
#line 1058 "unify_proc.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1058 "unify_proc.m"
                          case (MR_Integer) 0:
#line 1058 "unify_proc.m"
#line 1058 "unify_proc.m"
                            switch (MR_unmkbody(check_hlds__unify_proc__TypeCategory_40)) {
#line 1058 "unify_proc.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1058 "unify_proc.m"
                              case (MR_Integer) 0:
#line 1068 "unify_proc.m"
                                check_hlds__unify_proc__Name_75 = (MR_String) "builtin_compare_pred";
#line 1058 "unify_proc.m"
                                break;
#line 1058 "unify_proc.m"
                              case (MR_Integer) 1:
#line 1058 "unify_proc.m"
                              case (MR_Integer) 2:
#line 1058 "unify_proc.m"
                              case (MR_Integer) 3:
#line 1058 "unify_proc.m"
                              case (MR_Integer) 4:
#line 1078 "unify_proc.m"
                                {
#line 1079 "unify_proc.m"
                                  {
#line 1079 "unify_proc.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
#line 1079 "unify_proc.m"
                                    return;
                                  }
#line 1078 "unify_proc.m"
                                }
#line 1058 "unify_proc.m"
                                break;
#line 1058 "unify_proc.m"
                            }
#line 1058 "unify_proc.m"
                            break;
#line 1058 "unify_proc.m"
                          case (MR_Integer) 1:
#line 1058 "unify_proc.m"
                            {
#line 1058 "unify_proc.m"
                              MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeCategory_40, (MR_Integer) 0)));

#line 1058 "unify_proc.m"
                              check_hlds__unify_proc__Name_75 = ((&check_hlds__unify_proc_vector_common_7[4 + check_hlds__unify_proc__V_92_92]))->check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
#line 1058 "unify_proc.m"
                            }
#line 1058 "unify_proc.m"
                            break;
#line 1058 "unify_proc.m"
                          case (MR_Integer) 2:
#line 1078 "unify_proc.m"
                            {
#line 1079 "unify_proc.m"
                              {
#line 1079 "unify_proc.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
#line 1079 "unify_proc.m"
                                return;
                              }
#line 1078 "unify_proc.m"
                            }
#line 1058 "unify_proc.m"
                            break;
#line 1058 "unify_proc.m"
                          case (MR_Integer) 3:
#line 1078 "unify_proc.m"
                            {
#line 1079 "unify_proc.m"
                              {
#line 1079 "unify_proc.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_compare\'/8", (MR_String) "bad ctor category");
#line 1079 "unify_proc.m"
                                return;
                              }
#line 1078 "unify_proc.m"
                            }
#line 1058 "unify_proc.m"
                            break;
#line 1058 "unify_proc.m"
                        }
#line 1081 "unify_proc.m"
                        {
#line 1081 "unify_proc.m"
                          check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_75, check_hlds__unify_proc__ArgVars_74, check_hlds__unify_proc__Context_15, &check_hlds__unify_proc__CompareGoal_79, check_hlds__unify_proc__STATE_VARIABLE_Info_0_41, &check_hlds__unify_proc__STATE_VARIABLE_Info_34_90);
                        }
#line 1082 "unify_proc.m"
                        {
#line 1082 "unify_proc.m"
                          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_74, check_hlds__unify_proc__CompareGoal_79, check_hlds__unify_proc__Context_15, check_hlds__unify_proc__Clause_16, check_hlds__unify_proc__STATE_VARIABLE_Info_34_90, check_hlds__unify_proc__STATE_VARIABLE_Info_42);
                        }
#line 984 "unify_proc.m"
                      }
#line 987 "unify_proc.m"
                    else
#line 988 "unify_proc.m"
                      {
#line 988 "unify_proc.m"
                        {
#line 988 "unify_proc.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/9", (MR_String) "trying to create compare proc for abstract type");
#line 988 "unify_proc.m"
                          return;
                        }
#line 988 "unify_proc.m"
                      }
#line 987 "unify_proc.m"
                  }
#line 960 "unify_proc.m"
                  break;
#line 960 "unify_proc.m"
              }
#line 960 "unify_proc.m"
              break;
#line 960 "unify_proc.m"
          }
#line 928 "unify_proc.m"
      }
#line 915 "unify_proc.m"
  }
#line 910 "unify_proc.m"
}

#line 843 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_8_p_0(
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Index_12,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 843 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 843 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_37,
#line 843 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_38)
#line 843 "unify_proc.m"
{
#line 847 "unify_proc.m"
  {
#line 847 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 847 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 3)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, (MR_Integer) 2)));
#line 849 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_17_17;

#line 849 "unify_proc.m"
    {
#line 849 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__V_17_17);
    }
#line 856 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 854 "unify_proc.m"
      {
#line 854 "unify_proc.m"
        {
#line 854 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for non-canonical type");
#line 854 "unify_proc.m"
          return;
        }
#line 854 "unify_proc.m"
      }
#line 856 "unify_proc.m"
    else
#line 885 "unify_proc.m"
#line 885 "unify_proc.m"
      switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) {
#line 885 "unify_proc.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 885 "unify_proc.m"
        case (MR_Integer) 0:
#line 896 "unify_proc.m"
          {
#line 897 "unify_proc.m"
            {
#line 897 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a foreign type");
#line 897 "unify_proc.m"
              return;
            }
#line 896 "unify_proc.m"
          }
#line 885 "unify_proc.m"
          break;
#line 885 "unify_proc.m"
        case (MR_Integer) 1:
#line 858 "unify_proc.m"
          {
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Ctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__DuTypeKind_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 858 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

#line 867 "unify_proc.m"
#line 867 "unify_proc.m"
            switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_21)) {
#line 867 "unify_proc.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 867 "unify_proc.m"
              case (MR_Integer) 0:
#line 867 "unify_proc.m"
#line 867 "unify_proc.m"
                switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_21)) {
#line 867 "unify_proc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 867 "unify_proc.m"
                  case (MR_Integer) 0:
#line 864 "unify_proc.m"
                    {
#line 865 "unify_proc.m"
                      {
#line 865 "unify_proc.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for enum type");
#line 865 "unify_proc.m"
                        return;
                      }
#line 864 "unify_proc.m"
                    }
#line 867 "unify_proc.m"
                    break;
#line 867 "unify_proc.m"
                  case (MR_Integer) 1:
#line 872 "unify_proc.m"
                    {
#line 873 "unify_proc.m"
                      {
#line 873 "unify_proc.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for dummy type");
#line 873 "unify_proc.m"
                        return;
                      }
#line 872 "unify_proc.m"
                    }
#line 867 "unify_proc.m"
                    break;
#line 867 "unify_proc.m"
                  case (MR_Integer) 2:
#line 880 "unify_proc.m"
                    {
#line 880 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__TypeCtor_31;

#line 881 "unify_proc.m"
                      {
#line 881 "unify_proc.m"
                        parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_31);
                      }
#line 882 "unify_proc.m"
                      {
#line 882 "unify_proc.m"
                        check_hlds__unify_proc__generate_du_index_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_31, check_hlds__unify_proc__Ctors_18, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Index_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_37, check_hlds__unify_proc__STATE_VARIABLE_Info_38);
                      }
#line 880 "unify_proc.m"
                    }
#line 867 "unify_proc.m"
                    break;
#line 867 "unify_proc.m"
                }
#line 867 "unify_proc.m"
                break;
#line 867 "unify_proc.m"
              case (MR_Integer) 1:
#line 868 "unify_proc.m"
                {
#line 869 "unify_proc.m"
                  {
#line 869 "unify_proc.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for foreign enum type");
#line 869 "unify_proc.m"
                    return;
                  }
#line 868 "unify_proc.m"
                }
#line 867 "unify_proc.m"
                break;
#line 867 "unify_proc.m"
              case (MR_Integer) 2:
#line 876 "unify_proc.m"
                {
#line 877 "unify_proc.m"
                  {
#line 877 "unify_proc.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for notag type");
#line 877 "unify_proc.m"
                    return;
                  }
#line 876 "unify_proc.m"
                }
#line 867 "unify_proc.m"
                break;
#line 867 "unify_proc.m"
            }
#line 858 "unify_proc.m"
          }
#line 885 "unify_proc.m"
          break;
#line 885 "unify_proc.m"
        case (MR_Integer) 2:
#line 886 "unify_proc.m"
          {
#line 893 "unify_proc.m"
            {
#line 893 "unify_proc.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for eqv type");
#line 893 "unify_proc.m"
              return;
            }
#line 886 "unify_proc.m"
          }
#line 885 "unify_proc.m"
          break;
#line 885 "unify_proc.m"
        case (MR_Integer) 3:
#line 885 "unify_proc.m"
#line 885 "unify_proc.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)))) {
#line 885 "unify_proc.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 885 "unify_proc.m"
            case (MR_Integer) 0:
#line 900 "unify_proc.m"
              {
#line 901 "unify_proc.m"
                {
#line 901 "unify_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for a solver type");
#line 901 "unify_proc.m"
                  return;
                }
#line 900 "unify_proc.m"
              }
#line 885 "unify_proc.m"
              break;
#line 885 "unify_proc.m"
            case (MR_Integer) 1:
#line 904 "unify_proc.m"
              {
#line 905 "unify_proc.m"
                {
#line 905 "unify_proc.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/8", (MR_String) "trying to create index proc for abstract type");
#line 905 "unify_proc.m"
                  return;
                }
#line 904 "unify_proc.m"
              }
#line 885 "unify_proc.m"
              break;
#line 885 "unify_proc.m"
          }
#line 885 "unify_proc.m"
          break;
#line 885 "unify_proc.m"
      }
#line 847 "unify_proc.m"
  }
#line 843 "unify_proc.m"
}

#line 812 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__EqvType_8,
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 812 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 812 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_22,
#line 812 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_23)
#line 812 "unify_proc.m"
{
#line 816 "unify_proc.m"
  {
#line 816 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastX_14;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastY_15;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastXGoal_16;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__CastYGoal_17;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyGoal_18;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo0_19;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__GoalInfo_20;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Goal_21;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_26_26;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_29_29;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_35_35;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_36_36;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_37_37;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_39_39;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_41_41;
#line 816 "unify_proc.m"
    MR_String check_hlds__unify_proc__NumStr_50;
#line 816 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_51;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet0_59;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes0_60;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_61;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_62;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_73_73;
#line 816 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_74_74;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_66_66;
#line 2119 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_67_67;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_71_71;
#line 2123 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_72_72;

#line 1873 "unify_proc.m"
    {
#line 1873 "unify_proc.m"
      mercury__string__int_to_string_2_p_0((MR_Integer) 1, &check_hlds__unify_proc__NumStr_50);
    }
#line 1874 "unify_proc.m"
    {
#line 1874 "unify_proc.m"
      mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", check_hlds__unify_proc__NumStr_50, &check_hlds__unify_proc__Name_51);
    }
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__VarSet0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__VarTypes0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 2119 "unify_proc.m"
    check_hlds__unify_proc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 2121 "unify_proc.m"
    {
#line 2121 "unify_proc.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unify_proc__Name_51, &check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__VarSet0_59, &check_hlds__unify_proc__VarSet_61);
    }
#line 2122 "unify_proc.m"
    {
#line 2122 "unify_proc.m"
      hlds__vartypes__add_var_type_4_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__EqvType_8, check_hlds__unify_proc__VarTypes0_60, &check_hlds__unify_proc__VarTypes_62);
    }
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 2123 "unify_proc.m"
    check_hlds__unify_proc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 2124 "unify_proc.m"
    {
#line 2124 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_61));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_62));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (check_hlds__unify_proc__V_73_73));
#line 2124 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
#line 2124 "unify_proc.m"
    }
#line 825 "unify_proc.m"
    {
#line 825 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(check_hlds__unify_proc__EqvType_8, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &check_hlds__unify_proc__CastY_15, check_hlds__unify_proc__STATE_VARIABLE_Info_26_26, &check_hlds__unify_proc__STATE_VARIABLE_Info_29_29);
    }
#line 826 "unify_proc.m"
    {
#line 826 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__X_9, check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastXGoal_16);
    }
#line 827 "unify_proc.m"
    {
#line 827 "unify_proc.m"
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, check_hlds__unify_proc__Y_10, check_hlds__unify_proc__CastY_15, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__CastYGoal_17);
    }
#line 828 "unify_proc.m"
    {
#line 828 "unify_proc.m"
      check_hlds__unify_proc__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 828 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (check_hlds__unify_proc__CastY_15));
#line 828 "unify_proc.m"
    }
#line 828 "unify_proc.m"
    {
#line 828 "unify_proc.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__CastX_14, check_hlds__unify_proc__V_32_32, check_hlds__unify_proc__Context_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_18);
    }
#line 831 "unify_proc.m"
    {
#line 831 "unify_proc.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__unify_proc__GoalInfo0_19);
    }
#line 832 "unify_proc.m"
    {
#line 832 "unify_proc.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__unify_proc__Context_11, check_hlds__unify_proc__GoalInfo0_19, &check_hlds__unify_proc__GoalInfo_20);
    }
#line 833 "unify_proc.m"
    {
#line 833 "unify_proc.m"
      check_hlds__unify_proc__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_18));
#line 833 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "unify_proc.m"
    }
#line 833 "unify_proc.m"
    {
#line 833 "unify_proc.m"
      check_hlds__unify_proc__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 0) = ((MR_Box) (check_hlds__unify_proc__CastYGoal_17));
#line 833 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_36_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_37_37));
#line 833 "unify_proc.m"
    }
#line 833 "unify_proc.m"
    {
#line 833 "unify_proc.m"
      check_hlds__unify_proc__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 0) = ((MR_Box) (check_hlds__unify_proc__CastXGoal_16));
#line 833 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_35_35, 1) = ((MR_Box) (check_hlds__unify_proc__V_36_36));
#line 833 "unify_proc.m"
    }
#line 833 "unify_proc.m"
    {
#line 833 "unify_proc.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__unify_proc__V_35_35, check_hlds__unify_proc__GoalInfo_20, &check_hlds__unify_proc__Goal_21);
    }
#line 834 "unify_proc.m"
    {
#line 834 "unify_proc.m"
      check_hlds__unify_proc__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 834 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "unify_proc.m"
    }
#line 834 "unify_proc.m"
    {
#line 834 "unify_proc.m"
      check_hlds__unify_proc__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 834 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, 1) = ((MR_Box) (check_hlds__unify_proc__V_41_41));
#line 834 "unify_proc.m"
    }
#line 834 "unify_proc.m"
    {
#line 834 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_39_39, check_hlds__unify_proc__Goal_21, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_29_29, check_hlds__unify_proc__STATE_VARIABLE_Info_23);
    }
#line 816 "unify_proc.m"
  }
#line 812 "unify_proc.m"
}

#line 760 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UserEqCompare_1,
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_2,
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_3,
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_4,
#line 760 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_5,
#line 760 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_6,
#line 760 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_7)
#line 760 "unify_proc.m"
{
#line 764 "unify_proc.m"
  {
#line 764 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;

#line 764 "unify_proc.m"
    if (((MR_tag((MR_Word) check_hlds__unify_proc__UserEqCompare_1)) == (MR_mktag((MR_Integer) 1))))
#line 764 "unify_proc.m"
      {
#line 766 "unify_proc.m"
        {
#line 766 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "trying to create unify proc for abstract noncanonical type");
#line 766 "unify_proc.m"
          return;
        }
#line 764 "unify_proc.m"
      }
#line 764 "unify_proc.m"
    else
#line 769 "unify_proc.m"
      {
#line 769 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeUnify_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 0)));
#line 769 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MaybeCompare_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UserEqCompare_1, (MR_Integer) 1)));
#line 769 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal0_33;
#line 769 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_38;
#line 769 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_45_45;
#line 769 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_67_67;
#line 769 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_68_68;
#line 769 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_70_70;

#line 783 "unify_proc.m"
        if ((check_hlds__unify_proc__MaybeUnify_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "unify_proc.m"
          if ((check_hlds__unify_proc__MaybeCompare_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "unify_proc.m"
            {
#line 806 "unify_proc.m"
              {
#line 806 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_user_defined_unify_proc_body\'/7", (MR_String) "MaybeCompare = no");
#line 806 "unify_proc.m"
                return;
              }
#line 805 "unify_proc.m"
            }
#line 804 "unify_proc.m"
          else
#line 786 "unify_proc.m"
            {
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ComparePredName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeCompare_27, (MR_Integer) 0)));
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ResultVar_35;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__CallGoal_36;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__UnifyGoal_37;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_44_44;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_46_46;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_47_47;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_48_48;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_52_52;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_56_56;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_58_58;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_59_59;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__PredId_72;
#line 786 "unify_proc.m"
              MR_Integer check_hlds__unify_proc__ModeId_73;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Call_74;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__GoalInfo_75;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_85_85;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__SymName_89;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_91_91;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_92_92;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__Builtin_94;
#line 786 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_95_95;

#line 792 "unify_proc.m"
              {
#line 792 "unify_proc.m"
                check_hlds__unify_proc__V_44_44 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              }
#line 792 "unify_proc.m"
              {
#line 792 "unify_proc.m"
                check_hlds__unify_proc__info_new_var_4_p_0(check_hlds__unify_proc__V_44_44, &check_hlds__unify_proc__ResultVar_35, check_hlds__unify_proc__STATE_VARIABLE_Info_0_6, &check_hlds__unify_proc__STATE_VARIABLE_Info_45_45);
              }
#line 793 "unify_proc.m"
              {
#line 793 "unify_proc.m"
                check_hlds__unify_proc__PredId_72 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              }
#line 794 "unify_proc.m"
              {
#line 794 "unify_proc.m"
                check_hlds__unify_proc__ModeId_73 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              }
#line 795 "unify_proc.m"
              {
#line 795 "unify_proc.m"
                check_hlds__unify_proc__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "unify_proc.m"
              }
#line 795 "unify_proc.m"
              {
#line 795 "unify_proc.m"
                check_hlds__unify_proc__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_47_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_48_48));
#line 795 "unify_proc.m"
              }
#line 795 "unify_proc.m"
              {
#line 795 "unify_proc.m"
                check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__ResultVar_35));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (check_hlds__unify_proc__V_47_47));
#line 795 "unify_proc.m"
              }
#line 795 "unify_proc.m"
              {
#line 795 "unify_proc.m"
                check_hlds__unify_proc__Call_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_72));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_73));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 2) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 3) = ((MR_Box) ((MR_Integer) 2));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "unify_proc.m"
                MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_74, 5) = ((MR_Box) (check_hlds__unify_proc__ComparePredName_34));
#line 795 "unify_proc.m"
              }
#line 797 "unify_proc.m"
              {
#line 797 "unify_proc.m"
                hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_75);
              }
#line 798 "unify_proc.m"
              {
#line 798 "unify_proc.m"
                check_hlds__unify_proc__CallGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_36, 0) = ((MR_Box) (check_hlds__unify_proc__Call_74));
#line 798 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__CallGoal_36, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_75));
#line 798 "unify_proc.m"
              }
#line 2056 "unify_proc.m"
              {
#line 2056 "unify_proc.m"
                check_hlds__unify_proc__Builtin_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 2057 "unify_proc.m"
              {
#line 2057 "unify_proc.m"
                check_hlds__unify_proc__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_95_95, 0) = ((MR_Box) (check_hlds__unify_proc__Builtin_94));
#line 2057 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_95_95, 1) = ((MR_Box) ((MR_String) "comparison_result"));
#line 2057 "unify_proc.m"
              }
#line 2057 "unify_proc.m"
              {
#line 2057 "unify_proc.m"
                check_hlds__unify_proc__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2057 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_91_91, 0) = ((MR_Box) (check_hlds__unify_proc__V_95_95));
#line 2057 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_91_91, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2057 "unify_proc.m"
              }
#line 2062 "unify_proc.m"
              {
#line 2062 "unify_proc.m"
                check_hlds__unify_proc__V_92_92 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              }
#line 2062 "unify_proc.m"
              {
#line 2062 "unify_proc.m"
                check_hlds__unify_proc__SymName_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_89, 0) = ((MR_Box) (check_hlds__unify_proc__V_92_92));
#line 2062 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__SymName_89, 1) = ((MR_Box) ((MR_String) "="));
#line 2062 "unify_proc.m"
              }
#line 2061 "unify_proc.m"
              {
#line 2061 "unify_proc.m"
                check_hlds__unify_proc__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2061 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 1) = ((MR_Box) (check_hlds__unify_proc__SymName_89));
#line 2061 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2061 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_85_85, 3) = ((MR_Box) (check_hlds__unify_proc__V_91_91));
#line 2061 "unify_proc.m"
              }
#line 2067 "unify_proc.m"
              {
#line 2067 "unify_proc.m"
                check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2067 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__V_85_85));
#line 2067 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2067 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2067 "unify_proc.m"
              }
#line 800 "unify_proc.m"
              {
#line 800 "unify_proc.m"
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__unify_proc__ResultVar_35, check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__UnifyGoal_37);
              }
#line 802 "unify_proc.m"
              {
#line 802 "unify_proc.m"
                check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyGoal_37));
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "unify_proc.m"
              }
#line 802 "unify_proc.m"
              {
#line 802 "unify_proc.m"
                check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__CallGoal_36));
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 802 "unify_proc.m"
              }
#line 802 "unify_proc.m"
              {
#line 802 "unify_proc.m"
                check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) ((MR_Integer) 0));
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(3), check_hlds__unify_proc__V_56_56, 2) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 802 "unify_proc.m"
              }
#line 802 "unify_proc.m"
              {
#line 802 "unify_proc.m"
                check_hlds__unify_proc__Goal0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 0) = ((MR_Box) (check_hlds__unify_proc__V_56_56));
#line 802 "unify_proc.m"
                MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_75));
#line 802 "unify_proc.m"
              }
#line 786 "unify_proc.m"
            }
#line 783 "unify_proc.m"
        else
#line 772 "unify_proc.m"
          {
#line 772 "unify_proc.m"
            MR_Word check_hlds__unify_proc__UnifyPredName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeUnify_26, (MR_Integer) 0)));
#line 772 "unify_proc.m"
            MR_Word check_hlds__unify_proc__PredId_29;
#line 772 "unify_proc.m"
            MR_Integer check_hlds__unify_proc__ModeId_30;
#line 772 "unify_proc.m"
            MR_Word check_hlds__unify_proc__Call_31;
#line 772 "unify_proc.m"
            MR_Word check_hlds__unify_proc__GoalInfo_32;
#line 772 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_61_61;
#line 772 "unify_proc.m"
            MR_Word check_hlds__unify_proc__V_62_62;

#line 777 "unify_proc.m"
            {
#line 777 "unify_proc.m"
              check_hlds__unify_proc__PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 778 "unify_proc.m"
            {
#line 778 "unify_proc.m"
              check_hlds__unify_proc__ModeId_30 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            }
#line 779 "unify_proc.m"
            {
#line 779 "unify_proc.m"
              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "unify_proc.m"
            }
#line 779 "unify_proc.m"
            {
#line 779 "unify_proc.m"
              check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 1) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 779 "unify_proc.m"
            }
#line 779 "unify_proc.m"
            {
#line 779 "unify_proc.m"
              check_hlds__unify_proc__Call_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_29));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 1) = ((MR_Box) (check_hlds__unify_proc__ModeId_30));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 2) = ((MR_Box) (check_hlds__unify_proc__V_61_61));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 3) = ((MR_Box) ((MR_Integer) 2));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "unify_proc.m"
              MR_hl_field(MR_mktag(2), check_hlds__unify_proc__Call_31, 5) = ((MR_Box) (check_hlds__unify_proc__UnifyPredName_28));
#line 779 "unify_proc.m"
            }
#line 781 "unify_proc.m"
            {
#line 781 "unify_proc.m"
              hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__unify_proc__Context_4, &check_hlds__unify_proc__GoalInfo_32);
            }
#line 782 "unify_proc.m"
            {
#line 782 "unify_proc.m"
              check_hlds__unify_proc__Goal0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 0) = ((MR_Box) (check_hlds__unify_proc__Call_31));
#line 782 "unify_proc.m"
              MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Goal0_33, 1) = ((MR_Box) (check_hlds__unify_proc__GoalInfo_32));
#line 782 "unify_proc.m"
            }
#line 772 "unify_proc.m"
            check_hlds__unify_proc__STATE_VARIABLE_Info_45_45 = check_hlds__unify_proc__STATE_VARIABLE_Info_0_6;
#line 772 "unify_proc.m"
          }
#line 809 "unify_proc.m"
        {
#line 809 "unify_proc.m"
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(check_hlds__unify_proc__Context_4, check_hlds__unify_proc__X_2, check_hlds__unify_proc__Y_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__Goal0_33, &check_hlds__unify_proc__Goal_38, check_hlds__unify_proc__STATE_VARIABLE_Info_45_45, &check_hlds__unify_proc__STATE_VARIABLE_Info_67_67);
        }
#line 810 "unify_proc.m"
        {
#line 810 "unify_proc.m"
          check_hlds__unify_proc__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 0) = ((MR_Box) (check_hlds__unify_proc__Y_3));
#line 810 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 810 "unify_proc.m"
        }
#line 810 "unify_proc.m"
        {
#line 810 "unify_proc.m"
          check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__X_2));
#line 810 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (check_hlds__unify_proc__V_70_70));
#line 810 "unify_proc.m"
        }
#line 810 "unify_proc.m"
        {
#line 810 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_68_68, check_hlds__unify_proc__Goal_38, check_hlds__unify_proc__Context_4, check_hlds__unify_proc__Clause_5, check_hlds__unify_proc__STATE_VARIABLE_Info_67_67, check_hlds__unify_proc__STATE_VARIABLE_Info_7);
        }
#line 769 "unify_proc.m"
      }
#line 764 "unify_proc.m"
  }
#line 760 "unify_proc.m"
}

#line 722 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_builtin_unify_7_p_0(
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__CtorCat_8,
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_9,
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_10,
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_11,
#line 722 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_12,
#line 722 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_20,
#line 722 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_21)
#line 722 "unify_proc.m"
{
#line 726 "unify_proc.m"
  {
#line 726 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 726 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVars_14;
#line 726 "unify_proc.m"
    MR_String check_hlds__unify_proc__Name_15;
#line 726 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyGoal_19;
#line 726 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_22_22;
#line 726 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_31_31;

#line 727 "unify_proc.m"
    {
#line 727 "unify_proc.m"
      check_hlds__unify_proc__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_22_22, 0) = ((MR_Box) (check_hlds__unify_proc__Y_10));
#line 727 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "unify_proc.m"
    }
#line 727 "unify_proc.m"
    {
#line 727 "unify_proc.m"
      check_hlds__unify_proc__ArgVars_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 0) = ((MR_Box) (check_hlds__unify_proc__X_9));
#line 727 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgVars_14, 1) = ((MR_Box) (check_hlds__unify_proc__V_22_22));
#line 727 "unify_proc.m"
    }
#line 734 "unify_proc.m"
#line 734 "unify_proc.m"
    switch (MR_tag((MR_Word) check_hlds__unify_proc__CtorCat_8)) {
#line 734 "unify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 734 "unify_proc.m"
      case (MR_Integer) 0:
#line 734 "unify_proc.m"
#line 734 "unify_proc.m"
        switch (MR_unmkbody(check_hlds__unify_proc__CtorCat_8)) {
#line 734 "unify_proc.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 734 "unify_proc.m"
          case (MR_Integer) 0:
#line 744 "unify_proc.m"
            check_hlds__unify_proc__Name_15 = (MR_String) "builtin_unify_pred";
#line 734 "unify_proc.m"
            break;
#line 734 "unify_proc.m"
          case (MR_Integer) 1:
#line 734 "unify_proc.m"
          case (MR_Integer) 2:
#line 734 "unify_proc.m"
          case (MR_Integer) 3:
#line 734 "unify_proc.m"
          case (MR_Integer) 4:
#line 754 "unify_proc.m"
            {
#line 755 "unify_proc.m"
              {
#line 755 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
#line 755 "unify_proc.m"
                return;
              }
#line 754 "unify_proc.m"
            }
#line 734 "unify_proc.m"
            break;
#line 734 "unify_proc.m"
        }
#line 734 "unify_proc.m"
        break;
#line 734 "unify_proc.m"
      case (MR_Integer) 1:
#line 734 "unify_proc.m"
        {
#line 734 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__CtorCat_8, (MR_Integer) 0)));

#line 734 "unify_proc.m"
          check_hlds__unify_proc__Name_15 = ((&check_hlds__unify_proc_vector_common_7[0 + check_hlds__unify_proc__V_33_33]))->check_hlds__unify_proc__vector_common_type_7_0__vct_7_f_0;
#line 734 "unify_proc.m"
        }
#line 734 "unify_proc.m"
        break;
#line 734 "unify_proc.m"
      case (MR_Integer) 2:
#line 754 "unify_proc.m"
        {
#line 755 "unify_proc.m"
          {
#line 755 "unify_proc.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
#line 755 "unify_proc.m"
            return;
          }
#line 754 "unify_proc.m"
        }
#line 734 "unify_proc.m"
        break;
#line 734 "unify_proc.m"
      case (MR_Integer) 3:
#line 754 "unify_proc.m"
        {
#line 755 "unify_proc.m"
          {
#line 755 "unify_proc.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_builtin_unify\'/7", (MR_String) "bad ctor category");
#line 755 "unify_proc.m"
            return;
          }
#line 754 "unify_proc.m"
        }
#line 734 "unify_proc.m"
        break;
#line 734 "unify_proc.m"
    }
#line 757 "unify_proc.m"
    {
#line 757 "unify_proc.m"
      check_hlds__unify_proc__build_call_6_p_0(check_hlds__unify_proc__Name_15, check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__Context_11, &check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__STATE_VARIABLE_Info_0_20, &check_hlds__unify_proc__STATE_VARIABLE_Info_31_31);
    }
#line 758 "unify_proc.m"
    {
#line 758 "unify_proc.m"
      check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__ArgVars_14, check_hlds__unify_proc__UnifyGoal_19, check_hlds__unify_proc__Context_11, check_hlds__unify_proc__Clause_12, check_hlds__unify_proc__STATE_VARIABLE_Info_31_31, check_hlds__unify_proc__STATE_VARIABLE_Info_21);
    }
#line 726 "unify_proc.m"
  }
#line 722 "unify_proc.m"
}

#line 636 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_8_p_0(
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_9,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_10,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__X_11,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Y_12,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_13,
#line 636 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Clause_14,
#line 636 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_0_40,
#line 636 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_Info_41)
#line 636 "unify_proc.m"
{
#line 640 "unify_proc.m"
  {
#line 640 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 640 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)));
#line 640 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_17;
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 2131 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 644 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_42_42;

#line 642 "unify_proc.m"
    {
#line 642 "unify_proc.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__unify_proc__Type_9, &check_hlds__unify_proc__TypeCtor_17);
    }
#line 644 "unify_proc.m"
    {
#line 644 "unify_proc.m"
      check_hlds__unify_proc__V_42_42 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__unify_proc__TypeCtor_17);
    }
#line 644 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_42_42 == (MR_Integer) 0);
#line 648 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 646 "unify_proc.m"
      {
#line 646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Goal_18;
#line 646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_43_43;
#line 646 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_45_45;

#line 646 "unify_proc.m"
        {
#line 646 "unify_proc.m"
          check_hlds__unify_proc__Goal_18 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
        }
#line 647 "unify_proc.m"
        {
#line 647 "unify_proc.m"
          check_hlds__unify_proc__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 647 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "unify_proc.m"
        }
#line 647 "unify_proc.m"
        {
#line 647 "unify_proc.m"
          check_hlds__unify_proc__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 647 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (check_hlds__unify_proc__V_45_45));
#line 647 "unify_proc.m"
        }
#line 647 "unify_proc.m"
        {
#line 647 "unify_proc.m"
          check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_43_43, check_hlds__unify_proc__Goal_18, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
        }
#line 646 "unify_proc.m"
      }
#line 648 "unify_proc.m"
    else
#line 654 "unify_proc.m"
      {
#line 654 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UserEqComp_19;

#line 649 "unify_proc.m"
        {
#line 649 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__TypeBody_10, &check_hlds__unify_proc__UserEqComp_19);
        }
#line 654 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 652 "unify_proc.m"
          {
#line 652 "unify_proc.m"
            check_hlds__unify_proc__generate_user_defined_unify_proc_body_7_p_0(check_hlds__unify_proc__UserEqComp_19, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
          }
#line 654 "unify_proc.m"
        else
#line 685 "unify_proc.m"
#line 685 "unify_proc.m"
          switch (MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_10)) {
#line 685 "unify_proc.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 685 "unify_proc.m"
            case (MR_Integer) 0:
#line 703 "unify_proc.m"
              {
#line 703 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_52_52;

#line 707 "unify_proc.m"
                {
#line 707 "unify_proc.m"
                  check_hlds__unify_proc__V_52_52 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                }
#line 707 "unify_proc.m"
                {
#line 707 "unify_proc.m"
                  check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                }
#line 703 "unify_proc.m"
              }
#line 685 "unify_proc.m"
              break;
#line 685 "unify_proc.m"
            case (MR_Integer) 1:
#line 656 "unify_proc.m"
              {
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__DuTypeKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 3)));
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 1)));
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 2)));
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 4)));
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 5)));
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 7)));

#line 663 "unify_proc.m"
#line 663 "unify_proc.m"
                switch (MR_tag((MR_Word) check_hlds__unify_proc__DuTypeKind_23)) {
#line 663 "unify_proc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 663 "unify_proc.m"
                  case (MR_Integer) 0:
#line 663 "unify_proc.m"
#line 663 "unify_proc.m"
                    switch (MR_unmkbody(check_hlds__unify_proc__DuTypeKind_23)) {
#line 663 "unify_proc.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 663 "unify_proc.m"
                      case (MR_Integer) 0:
#line 660 "unify_proc.m"
                        {
#line 660 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__V_72_72;
#line 660 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__V_74_74;
#line 660 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__Goal_76;

#line 661 "unify_proc.m"
                          {
#line 661 "unify_proc.m"
                            hlds__make_goal__make_simple_test_5_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_76);
                          }
#line 662 "unify_proc.m"
                          {
#line 662 "unify_proc.m"
                            check_hlds__unify_proc__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 662 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "unify_proc.m"
                          }
#line 662 "unify_proc.m"
                          {
#line 662 "unify_proc.m"
                            check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 662 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
#line 662 "unify_proc.m"
                          }
#line 662 "unify_proc.m"
                          {
#line 662 "unify_proc.m"
                            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Goal_76, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                          }
#line 660 "unify_proc.m"
                        }
#line 663 "unify_proc.m"
                        break;
#line 663 "unify_proc.m"
                      case (MR_Integer) 1:
#line 664 "unify_proc.m"
                        {
#line 664 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__V_66_66;
#line 664 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__V_68_68;
#line 664 "unify_proc.m"
                          MR_Word check_hlds__unify_proc__Goal_77;

#line 665 "unify_proc.m"
                          {
#line 665 "unify_proc.m"
                            check_hlds__unify_proc__Goal_77 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                          }
#line 666 "unify_proc.m"
                          {
#line 666 "unify_proc.m"
                            check_hlds__unify_proc__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 666 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "unify_proc.m"
                          }
#line 666 "unify_proc.m"
                          {
#line 666 "unify_proc.m"
                            check_hlds__unify_proc__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 666 "unify_proc.m"
                            MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_66_66, 1) = ((MR_Box) (check_hlds__unify_proc__V_68_68));
#line 666 "unify_proc.m"
                          }
#line 666 "unify_proc.m"
                          {
#line 666 "unify_proc.m"
                            check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_66_66, check_hlds__unify_proc__Goal_77, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                          }
#line 664 "unify_proc.m"
                        }
#line 663 "unify_proc.m"
                        break;
#line 663 "unify_proc.m"
                      case (MR_Integer) 2:
#line 682 "unify_proc.m"
                        {
#line 682 "unify_proc.m"
                          check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                        }
#line 663 "unify_proc.m"
                        break;
#line 663 "unify_proc.m"
                    }
#line 663 "unify_proc.m"
                    break;
#line 663 "unify_proc.m"
                  case (MR_Integer) 1:
#line 660 "unify_proc.m"
                    {
#line 660 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_72_72;
#line 660 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_74_74;
#line 660 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__Goal_76;

#line 661 "unify_proc.m"
                      {
#line 661 "unify_proc.m"
                        hlds__make_goal__make_simple_test_5_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__unify_proc__Goal_76);
                      }
#line 662 "unify_proc.m"
                      {
#line 662 "unify_proc.m"
                        check_hlds__unify_proc__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 662 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "unify_proc.m"
                      }
#line 662 "unify_proc.m"
                      {
#line 662 "unify_proc.m"
                        check_hlds__unify_proc__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 662 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_72_72, 1) = ((MR_Box) (check_hlds__unify_proc__V_74_74));
#line 662 "unify_proc.m"
                      }
#line 662 "unify_proc.m"
                      {
#line 662 "unify_proc.m"
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_72_72, check_hlds__unify_proc__Goal_76, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                      }
#line 660 "unify_proc.m"
                    }
#line 663 "unify_proc.m"
                    break;
#line 663 "unify_proc.m"
                  case (MR_Integer) 2:
#line 668 "unify_proc.m"
                    {
#line 668 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__ArgType_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 1)));
#line 668 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__IsDummyType_33;
#line 668 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 0)));
#line 668 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__DuTypeKind_23, (MR_Integer) 2)));

#line 669 "unify_proc.m"
                      {
#line 669 "unify_proc.m"
                        check_hlds__unify_proc__IsDummyType_33 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__ArgType_31);
                      }
#line 675 "unify_proc.m"
#line 675 "unify_proc.m"
                      switch (check_hlds__unify_proc__IsDummyType_33) {
#line 675 "unify_proc.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 675 "unify_proc.m"
                        case (MR_Integer) 0:
#line 671 "unify_proc.m"
                          {
#line 671 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_62_62;
#line 671 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__V_64_64;
#line 671 "unify_proc.m"
                            MR_Word check_hlds__unify_proc__Goal_78;

#line 673 "unify_proc.m"
                            {
#line 673 "unify_proc.m"
                              check_hlds__unify_proc__Goal_78 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                            }
#line 674 "unify_proc.m"
                            {
#line 674 "unify_proc.m"
                              check_hlds__unify_proc__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 674 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "unify_proc.m"
                            }
#line 674 "unify_proc.m"
                            {
#line 674 "unify_proc.m"
                              check_hlds__unify_proc__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 674 "unify_proc.m"
                              MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_62_62, 1) = ((MR_Box) (check_hlds__unify_proc__V_64_64));
#line 674 "unify_proc.m"
                            }
#line 674 "unify_proc.m"
                            {
#line 674 "unify_proc.m"
                              check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_62_62, check_hlds__unify_proc__Goal_78, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                            }
#line 671 "unify_proc.m"
                          }
#line 675 "unify_proc.m"
                          break;
#line 675 "unify_proc.m"
                        case (MR_Integer) 1:
#line 677 "unify_proc.m"
                          {
#line 677 "unify_proc.m"
                            check_hlds__unify_proc__generate_du_unify_proc_body_8_p_0(check_hlds__unify_proc__TypeCtor_17, check_hlds__unify_proc__Ctors_20, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                          }
#line 675 "unify_proc.m"
                          break;
#line 675 "unify_proc.m"
                      }
#line 668 "unify_proc.m"
                    }
#line 663 "unify_proc.m"
                    break;
#line 663 "unify_proc.m"
                }
#line 656 "unify_proc.m"
              }
#line 685 "unify_proc.m"
              break;
#line 685 "unify_proc.m"
            case (MR_Integer) 2:
#line 686 "unify_proc.m"
              {
#line 686 "unify_proc.m"
                MR_Word check_hlds__unify_proc__EqvType_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)));
#line 686 "unify_proc.m"
                MR_Word check_hlds__unify_proc__IsDummyType_86;

#line 687 "unify_proc.m"
                {
#line 687 "unify_proc.m"
                  check_hlds__unify_proc__IsDummyType_86 = check_hlds__type_util__check_dummy_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__EqvType_34);
                }
#line 693 "unify_proc.m"
#line 693 "unify_proc.m"
                switch (check_hlds__unify_proc__IsDummyType_86) {
#line 693 "unify_proc.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 693 "unify_proc.m"
                  case (MR_Integer) 0:
#line 689 "unify_proc.m"
                    {
#line 689 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_56_56;
#line 689 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__V_58_58;
#line 689 "unify_proc.m"
                      MR_Word check_hlds__unify_proc__Goal_83;

#line 691 "unify_proc.m"
                      {
#line 691 "unify_proc.m"
                        check_hlds__unify_proc__Goal_83 = hlds__make_goal__true_goal_with_context_1_f_0(check_hlds__unify_proc__Context_13);
                      }
#line 692 "unify_proc.m"
                      {
#line 692 "unify_proc.m"
                        check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__Y_12));
#line 692 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "unify_proc.m"
                      }
#line 692 "unify_proc.m"
                      {
#line 692 "unify_proc.m"
                        check_hlds__unify_proc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 0) = ((MR_Box) (check_hlds__unify_proc__X_11));
#line 692 "unify_proc.m"
                        MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_56_56, 1) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 692 "unify_proc.m"
                      }
#line 692 "unify_proc.m"
                      {
#line 692 "unify_proc.m"
                        check_hlds__unify_proc__quantify_clause_body_6_p_0(check_hlds__unify_proc__V_56_56, check_hlds__unify_proc__Goal_83, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                      }
#line 689 "unify_proc.m"
                    }
#line 693 "unify_proc.m"
                    break;
#line 693 "unify_proc.m"
                  case (MR_Integer) 1:
#line 695 "unify_proc.m"
                    {
#line 695 "unify_proc.m"
                      check_hlds__unify_proc__generate_eqv_unify_proc_body_7_p_0(check_hlds__unify_proc__EqvType_34, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                    }
#line 693 "unify_proc.m"
                    break;
#line 693 "unify_proc.m"
                }
#line 686 "unify_proc.m"
              }
#line 685 "unify_proc.m"
              break;
#line 685 "unify_proc.m"
            case (MR_Integer) 3:
#line 685 "unify_proc.m"
#line 685 "unify_proc.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_10, (MR_Integer) 0)))) {
#line 685 "unify_proc.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 685 "unify_proc.m"
                case (MR_Integer) 0:
#line 700 "unify_proc.m"
                  {
#line 700 "unify_proc.m"
                    check_hlds__unify_proc__generate_default_solver_type_unify_proc_body_6_p_0(check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                  }
#line 685 "unify_proc.m"
                  break;
#line 685 "unify_proc.m"
                case (MR_Integer) 1:
#line 715 "unify_proc.m"
                  {
#line 711 "unify_proc.m"
                    {
#line 711 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(check_hlds__unify_proc__ModuleInfo_16);
                    }
#line 715 "unify_proc.m"
                    if (check_hlds__unify_proc__succeeded)
#line 712 "unify_proc.m"
                      {
#line 712 "unify_proc.m"
                        MR_Word check_hlds__unify_proc__TypeCategory_39;

#line 712 "unify_proc.m"
                        {
#line 712 "unify_proc.m"
                          check_hlds__unify_proc__TypeCategory_39 = check_hlds__type_util__classify_type_2_f_0(check_hlds__unify_proc__ModuleInfo_16, check_hlds__unify_proc__Type_9);
                        }
#line 713 "unify_proc.m"
                        {
#line 713 "unify_proc.m"
                          check_hlds__unify_proc__generate_builtin_unify_7_p_0(check_hlds__unify_proc__TypeCategory_39, check_hlds__unify_proc__X_11, check_hlds__unify_proc__Y_12, check_hlds__unify_proc__Context_13, check_hlds__unify_proc__Clause_14, check_hlds__unify_proc__STATE_VARIABLE_Info_0_40, check_hlds__unify_proc__STATE_VARIABLE_Info_41);
                        }
#line 712 "unify_proc.m"
                      }
#line 715 "unify_proc.m"
                    else
#line 716 "unify_proc.m"
                      {
#line 716 "unify_proc.m"
                        {
#line 716 "unify_proc.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/8", (MR_String) "trying to create unify proc for abstract type");
#line 716 "unify_proc.m"
                          return;
                        }
#line 716 "unify_proc.m"
                      }
#line 715 "unify_proc.m"
                  }
#line 685 "unify_proc.m"
                  break;
#line 685 "unify_proc.m"
              }
#line 685 "unify_proc.m"
              break;
#line 685 "unify_proc.m"
          }
#line 654 "unify_proc.m"
      }
#line 640 "unify_proc.m"
  }
#line 636 "unify_proc.m"
}

#line 487 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1(
#line 487 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 487 "unify_proc.m"
{
#line 487 "unify_proc.m"
  {
#line 487 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 487 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
    }
#line 487 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 487 "unify_proc.m"
  }
#line 487 "unify_proc.m"
}

#line 454 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0(
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialId_12,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Item_13,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TVarSet_14,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_15,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_16,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_17,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_18,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeStatus_19,
#line 454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_20,
#line 454 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26,
#line 454 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27)
#line 454 "unify_proc.m"
{
#line 460 "unify_proc.m"
  {
#line 460 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 460 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ErrorProcs_24;
#line 460 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo_25;
#line 460 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29;
#line 460 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_30_30;
#line 460 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_35;

#line 12607 "check_hlds.unify_proc.c"
#line 12608 "check_hlds.unify_proc.c"
    switch (check_hlds__unify_proc__Item_13) {
#line 12610 "check_hlds.unify_proc.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 12612 "check_hlds.unify_proc.c"
      case (MR_Integer) 1:
#line 12614 "check_hlds.unify_proc.c"
        {
#line 12616 "check_hlds.unify_proc.c"
          MR_Word check_hlds__unify_proc__SpecialPredMaps_22;
#line 12618 "check_hlds.unify_proc.c"
          MR_Word check_hlds__unify_proc__PredInfo0_23;

#line 464 "unify_proc.m"
          {
#line 464 "unify_proc.m"
            hlds__make_hlds__add_special_pred_for_real_9_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__TypeBody_17, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__TypeStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29);
          }
#line 472 "unify_proc.m"
          {
#line 472 "unify_proc.m"
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__SpecialPredMaps_22);
          }
#line 473 "unify_proc.m"
          {
#line 473 "unify_proc.m"
            hlds__special_pred__lookup_special_pred_maps_4_p_0(check_hlds__unify_proc__SpecialPredMaps_22, check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__PredId_20);
          }
#line 474 "unify_proc.m"
          {
#line 474 "unify_proc.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo0_23);
          }
#line 480 "unify_proc.m"
          {
#line 480 "unify_proc.m"
            check_hlds__post_typecheck__post_typecheck_finish_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__ErrorProcs_24, check_hlds__unify_proc__PredInfo0_23, &check_hlds__unify_proc__PredInfo_25);
          }
#line 12646 "check_hlds.unify_proc.c"
        }
#line 12648 "check_hlds.unify_proc.c"
        break;
#line 12650 "check_hlds.unify_proc.c"
      case (MR_Integer) 0:
#line 12652 "check_hlds.unify_proc.c"
        {
#line 12654 "check_hlds.unify_proc.c"
          MR_Word check_hlds__unify_proc__SpecialPredMaps_38;
#line 12656 "check_hlds.unify_proc.c"
          MR_Word check_hlds__unify_proc__PredInfo0_39;

#line 468 "unify_proc.m"
          {
#line 468 "unify_proc.m"
            hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TVarSet_14, check_hlds__unify_proc__Type_15, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__TypeStatus_19, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_26, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29);
          }
#line 472 "unify_proc.m"
          {
#line 472 "unify_proc.m"
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__SpecialPredMaps_38);
          }
#line 473 "unify_proc.m"
          {
#line 473 "unify_proc.m"
            hlds__special_pred__lookup_special_pred_maps_4_p_0(check_hlds__unify_proc__SpecialPredMaps_38, check_hlds__unify_proc__SpecialId_12, check_hlds__unify_proc__TypeCtor_16, check_hlds__unify_proc__PredId_20);
          }
#line 474 "unify_proc.m"
          {
#line 474 "unify_proc.m"
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, *check_hlds__unify_proc__PredId_20, &check_hlds__unify_proc__PredInfo0_39);
          }
#line 484 "unify_proc.m"
          {
#line 484 "unify_proc.m"
            check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__ErrorProcs_24, check_hlds__unify_proc__PredInfo0_39, &check_hlds__unify_proc__PredInfo_25);
          }
#line 12684 "check_hlds.unify_proc.c"
        }
#line 12686 "check_hlds.unify_proc.c"
        break;
#line 12688 "check_hlds.unify_proc.c"
    }
#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      check_hlds__unify_proc__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0_1));
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_24));
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_30_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "unify_proc.m"
    }
#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_30_30, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
#line 491 "unify_proc.m"
    {
#line 491 "unify_proc.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__PredInfo_25, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_35);
    }
#line 497 "unify_proc.m"
    {
#line 497 "unify_proc.m"
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_20, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_35, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_27);
    }
#line 460 "unify_proc.m"
  }
#line 454 "unify_proc.m"
}

#line 124 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__generate_clause_info_6_p_0(
#line 124 "unify_proc.m"
  MR_Word check_hlds__unify_proc__SpecialPredId_7,
#line 124 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Type_8,
#line 124 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeBody_9,
#line 124 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_10,
#line 124 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ModuleInfo_11,
#line 124 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__ClauseInfo_12)
#line 124 "unify_proc.m"
{
#line 524 "unify_proc.m"
  {
#line 524 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgTypes_13;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Args_17;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Clause_20;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_23;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Types_24;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarNameMap_25;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ArgVec_26;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ClausesRep_27;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_28;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_30_30;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_33_33;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_Info_54_54;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_59_59;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_62_62;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarSet_76;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__VarTypes_77;
#line 524 "unify_proc.m"
    MR_Word check_hlds__unify_proc__RttiVarMaps_78;
#line 525 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Modes_14;
#line 525 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Det_15;
#line 2126 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_82_82;
#line 2126 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_83_83;

#line 525 "unify_proc.m"
    {
#line 525 "unify_proc.m"
      hlds__special_pred__special_pred_interface_5_p_0(check_hlds__unify_proc__SpecialPredId_7, check_hlds__unify_proc__Type_8, &check_hlds__unify_proc__ArgTypes_13, &check_hlds__unify_proc___Modes_14, &check_hlds__unify_proc___Det_15);
    }
#line 2105 "unify_proc.m"
    {
#line 2105 "unify_proc.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__unify_proc__VarSet_76);
    }
#line 2106 "unify_proc.m"
    {
#line 2106 "unify_proc.m"
      hlds__vartypes__init_vartypes_1_p_0(&check_hlds__unify_proc__VarTypes_77);
    }
#line 2107 "unify_proc.m"
    {
#line 2107 "unify_proc.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_78);
    }
#line 2108 "unify_proc.m"
    {
#line 2108 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2108 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_76));
#line 2108 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (check_hlds__unify_proc__VarTypes_77));
#line 2108 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_78));
#line 2108 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (check_hlds__unify_proc__ModuleInfo_11));
#line 2108 "unify_proc.m"
    }
#line 528 "unify_proc.m"
    {
#line 528 "unify_proc.m"
      check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(check_hlds__unify_proc__ArgTypes_13, (MR_String) "HeadVar__", (MR_Integer) 1, &check_hlds__unify_proc__Args_17, check_hlds__unify_proc__STATE_VARIABLE_Info_30_30, &check_hlds__unify_proc__STATE_VARIABLE_Info_33_33);
    }
#line 538 "unify_proc.m"
#line 538 "unify_proc.m"
    switch (check_hlds__unify_proc__SpecialPredId_7) {
#line 538 "unify_proc.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 538 "unify_proc.m"
      case (MR_Integer) 2:
#line 551 "unify_proc.m"
        {
#line 551 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Res_22;
#line 551 "unify_proc.m"
          MR_Word check_hlds__unify_proc__X_65;
#line 551 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Y_66;
#line 548 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_39_39;
#line 548 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_40_40;
#line 548 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_41_41;

#line 548 "unify_proc.m"
          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 548 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 548 "unify_proc.m"
            {
#line 548 "unify_proc.m"
              check_hlds__unify_proc__Res_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 548 "unify_proc.m"
              check_hlds__unify_proc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 548 "unify_proc.m"
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 548 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 548 "unify_proc.m"
                {
#line 548 "unify_proc.m"
                  check_hlds__unify_proc__X_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, (MR_Integer) 0)));
#line 548 "unify_proc.m"
                  check_hlds__unify_proc__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_39_39, (MR_Integer) 1)));
#line 548 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 548 "unify_proc.m"
                  if (check_hlds__unify_proc__succeeded)
#line 548 "unify_proc.m"
                    {
#line 548 "unify_proc.m"
                      check_hlds__unify_proc__Y_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, (MR_Integer) 0)));
#line 548 "unify_proc.m"
                      check_hlds__unify_proc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_40_40, (MR_Integer) 1)));
#line 548 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "unify_proc.m"
                    }
#line 548 "unify_proc.m"
                }
#line 548 "unify_proc.m"
            }
#line 551 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 549 "unify_proc.m"
            {
#line 549 "unify_proc.m"
              check_hlds__unify_proc__generate_compare_proc_body_9_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__Res_22, check_hlds__unify_proc__X_65, check_hlds__unify_proc__Y_66, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
            }
#line 551 "unify_proc.m"
          else
#line 552 "unify_proc.m"
            {
#line 552 "unify_proc.m"
              {
#line 552 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad compare args");
#line 552 "unify_proc.m"
                return;
              }
#line 552 "unify_proc.m"
            }
#line 551 "unify_proc.m"
        }
#line 538 "unify_proc.m"
        break;
#line 538 "unify_proc.m"
      case (MR_Integer) 1:
#line 543 "unify_proc.m"
        {
#line 543 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Index_21;
#line 543 "unify_proc.m"
          MR_Word check_hlds__unify_proc__X_63;
#line 540 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_46_46;
#line 540 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_47_47;

#line 540 "unify_proc.m"
          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 540 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 540 "unify_proc.m"
            {
#line 540 "unify_proc.m"
              check_hlds__unify_proc__X_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 540 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 540 "unify_proc.m"
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 540 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 540 "unify_proc.m"
                {
#line 540 "unify_proc.m"
                  check_hlds__unify_proc__Index_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, (MR_Integer) 0)));
#line 540 "unify_proc.m"
                  check_hlds__unify_proc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, (MR_Integer) 1)));
#line 540 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "unify_proc.m"
                }
#line 540 "unify_proc.m"
            }
#line 543 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 541 "unify_proc.m"
            {
#line 541 "unify_proc.m"
              check_hlds__unify_proc__generate_index_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_63, check_hlds__unify_proc__Index_21, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
            }
#line 543 "unify_proc.m"
          else
#line 544 "unify_proc.m"
            {
#line 544 "unify_proc.m"
              {
#line 544 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad index args");
#line 544 "unify_proc.m"
                return;
              }
#line 544 "unify_proc.m"
            }
#line 543 "unify_proc.m"
        }
#line 538 "unify_proc.m"
        break;
#line 538 "unify_proc.m"
      case (MR_Integer) 3:
#line 559 "unify_proc.m"
        {
#line 559 "unify_proc.m"
          MR_Word check_hlds__unify_proc__X_69;
#line 556 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_34_34;

#line 556 "unify_proc.m"
          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 556 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 556 "unify_proc.m"
            {
#line 556 "unify_proc.m"
              check_hlds__unify_proc__X_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 556 "unify_proc.m"
              check_hlds__unify_proc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 556 "unify_proc.m"
              check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "unify_proc.m"
            }
#line 559 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 557 "unify_proc.m"
            {
#line 557 "unify_proc.m"
              check_hlds__unify_proc__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_105_110_105_116_105_97_108_105_115_101_95_112_114_111_99_95_98_111_100_121_95_95_91_49_93_95_48_7_p_0(check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_69, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
            }
#line 559 "unify_proc.m"
          else
#line 560 "unify_proc.m"
            {
#line 560 "unify_proc.m"
              {
#line 560 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad init args");
#line 560 "unify_proc.m"
                return;
              }
#line 560 "unify_proc.m"
            }
#line 559 "unify_proc.m"
        }
#line 538 "unify_proc.m"
        break;
#line 538 "unify_proc.m"
      case (MR_Integer) 0:
#line 535 "unify_proc.m"
        {
#line 535 "unify_proc.m"
          MR_Word check_hlds__unify_proc__X_18;
#line 535 "unify_proc.m"
          MR_Word check_hlds__unify_proc__Y_19;
#line 532 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_52_52;
#line 532 "unify_proc.m"
          MR_Word check_hlds__unify_proc__V_53_53;

#line 532 "unify_proc.m"
          check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__Args_17)) == (MR_mktag((MR_Integer) 1)));
#line 532 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 532 "unify_proc.m"
            {
#line 532 "unify_proc.m"
              check_hlds__unify_proc__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 0)));
#line 532 "unify_proc.m"
              check_hlds__unify_proc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__Args_17, (MR_Integer) 1)));
#line 532 "unify_proc.m"
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 532 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 532 "unify_proc.m"
                {
#line 532 "unify_proc.m"
                  check_hlds__unify_proc__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, (MR_Integer) 0)));
#line 532 "unify_proc.m"
                  check_hlds__unify_proc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, (MR_Integer) 1)));
#line 532 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "unify_proc.m"
                }
#line 532 "unify_proc.m"
            }
#line 535 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 533 "unify_proc.m"
            {
#line 533 "unify_proc.m"
              check_hlds__unify_proc__generate_unify_proc_body_8_p_0(check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeBody_9, check_hlds__unify_proc__X_18, check_hlds__unify_proc__Y_19, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__Clause_20, check_hlds__unify_proc__STATE_VARIABLE_Info_33_33, &check_hlds__unify_proc__STATE_VARIABLE_Info_54_54);
            }
#line 535 "unify_proc.m"
          else
#line 536 "unify_proc.m"
            {
#line 536 "unify_proc.m"
              {
#line 536 "unify_proc.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.generate_clause_info\'/6", (MR_String) "bad unify args");
#line 536 "unify_proc.m"
                return;
              }
#line 536 "unify_proc.m"
            }
#line 535 "unify_proc.m"
        }
#line 538 "unify_proc.m"
        break;
#line 538 "unify_proc.m"
    }
#line 2126 "unify_proc.m"
    check_hlds__unify_proc__VarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 0)));
#line 2126 "unify_proc.m"
    check_hlds__unify_proc__Types_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 1)));
#line 2126 "unify_proc.m"
    check_hlds__unify_proc__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 2)));
#line 2126 "unify_proc.m"
    check_hlds__unify_proc__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__STATE_VARIABLE_Info_54_54, (MR_Integer) 3)));
#line 565 "unify_proc.m"
    {
#line 565 "unify_proc.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__unify_proc_scalar_common_1[0], &check_hlds__unify_proc__TVarNameMap_25);
    }
#line 566 "unify_proc.m"
    {
#line 566 "unify_proc.m"
      check_hlds__unify_proc__ArgVec_26 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[1], (MR_Integer) 0, check_hlds__unify_proc__Args_17);
    }
#line 567 "unify_proc.m"
    {
#line 567 "unify_proc.m"
      check_hlds__unify_proc__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__Clause_20));
#line 567 "unify_proc.m"
      MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "unify_proc.m"
    }
#line 567 "unify_proc.m"
    {
#line 567 "unify_proc.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__unify_proc__V_59_59, &check_hlds__unify_proc__ClausesRep_27);
    }
#line 568 "unify_proc.m"
    {
#line 568 "unify_proc.m"
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__unify_proc__RttiVarMaps_28);
    }
#line 571 "unify_proc.m"
    {
#line 571 "unify_proc.m"
      check_hlds__unify_proc__V_62_62 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 570 "unify_proc.m"
    {
#line 570 "unify_proc.m"
      MR_Word base;
#line 570 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 570 "unify_proc.m"
      *check_hlds__unify_proc__ClauseInfo_12 = base;
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__VarSet_23));
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__Types_24));
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__unify_proc__TVarNameMap_25));
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__unify_proc__Types_24));
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__unify_proc__ArgVec_26));
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__unify_proc__ClausesRep_27));
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__unify_proc__V_62_62));
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__unify_proc__RttiVarMaps_28));
#line 570 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 1));
#line 570 "unify_proc.m"
    }
#line 524 "unify_proc.m"
  }
#line 124 "unify_proc.m"
}

#line 118 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__lookup_mode_num_5_p_0(
#line 118 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ModuleInfo_6,
#line 118 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_7,
#line 118 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UniMode_8,
#line 118 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Det_9,
#line 118 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__Num_10)
#line 118 "unify_proc.m"
{
#line 215 "unify_proc.m"
  {
#line 215 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 215 "unify_proc.m"
    MR_Integer check_hlds__unify_proc__Num1_11;
#line 230 "unify_proc.m"
    MR_Word check_hlds__unify_proc__XInitial_20;
#line 230 "unify_proc.m"
    MR_Word check_hlds__unify_proc__YInitial_21;
#line 230 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UniMode_8, (MR_Integer) 0)));
#line 231 "unify_proc.m"
    MR_Word check_hlds__unify_proc___Final_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UniMode_8, (MR_Integer) 1)));

#line 231 "unify_proc.m"
    check_hlds__unify_proc__XInitial_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_25_25, (MR_Integer) 0)));
#line 231 "unify_proc.m"
    check_hlds__unify_proc__YInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_25_25, (MR_Integer) 1)));
#line 233 "unify_proc.m"
    check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Det_9 == (MR_Integer) 1);
#line 233 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 233 "unify_proc.m"
      {
#line 234 "unify_proc.m"
        {
#line 234 "unify_proc.m"
          check_hlds__unify_proc__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__ModuleInfo_6, check_hlds__unify_proc__XInitial_20);
        }
#line 233 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 235 "unify_proc.m"
          {
#line 235 "unify_proc.m"
            check_hlds__unify_proc__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__ModuleInfo_6, check_hlds__unify_proc__YInitial_21);
          }
#line 233 "unify_proc.m"
      }
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
        check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__XInitial_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
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
#line 246 "unify_proc.m"
          {
#line 243 "unify_proc.m"
            check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__YInitial_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 246 "unify_proc.m"
            if (check_hlds__unify_proc__succeeded)
#line 245 "unify_proc.m"
              {
#line 245 "unify_proc.m"
                {
#line 245 "unify_proc.m"
                  hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__Num1_11);
                }
#line 245 "unify_proc.m"
                check_hlds__unify_proc__succeeded = MR_TRUE;
#line 245 "unify_proc.m"
              }
#line 246 "unify_proc.m"
            else
#line 247 "unify_proc.m"
              {
#line 247 "unify_proc.m"
                MR_Word check_hlds__unify_proc__Requests_23;
#line 247 "unify_proc.m"
                MR_Word check_hlds__unify_proc__UnifyReqMap_24;
#line 247 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_26_26;
#line 205 "unify_proc.m"
                MR_Word check_hlds__unify_proc__V_30_30;
#line 249 "unify_proc.m"
                MR_Box check_hlds__unify_proc__conv0_Num1_11;

#line 247 "unify_proc.m"
                {
#line 247 "unify_proc.m"
                  hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__ModuleInfo_6, &check_hlds__unify_proc__Requests_23);
                }
#line 205 "unify_proc.m"
                check_hlds__unify_proc__UnifyReqMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_23, (MR_Integer) 0)));
#line 205 "unify_proc.m"
                check_hlds__unify_proc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_23, (MR_Integer) 1)));
#line 249 "unify_proc.m"
                {
#line 249 "unify_proc.m"
                  check_hlds__unify_proc__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "unify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_26_26, 0) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_7));
#line 249 "unify_proc.m"
                  MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_26_26, 1) = ((MR_Box) (check_hlds__unify_proc__UniMode_8));
#line 249 "unify_proc.m"
                }
#line 249 "unify_proc.m"
                {
#line 249 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__unify_proc__UnifyReqMap_24, ((MR_Box) (check_hlds__unify_proc__V_26_26)), &check_hlds__unify_proc__conv0_Num1_11);
                }
#line 249 "unify_proc.m"
                if (check_hlds__unify_proc__succeeded)
#line 249 "unify_proc.m"
                  {
#line 249 "unify_proc.m"
                    check_hlds__unify_proc__Num1_11 = ((MR_Integer) check_hlds__unify_proc__conv0_Num1_11);
#line 249 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = MR_TRUE;
#line 249 "unify_proc.m"
                  }
#line 247 "unify_proc.m"
              }
#line 246 "unify_proc.m"
          }
#line 242 "unify_proc.m"
      }
#line 215 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 214 "unify_proc.m"
      *check_hlds__unify_proc__Num_10 = check_hlds__unify_proc__Num1_11;
#line 215 "unify_proc.m"
    else
#line 216 "unify_proc.m"
      {
#line 216 "unify_proc.m"
        {
#line 216 "unify_proc.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.lookup_mode_num\'/5", (MR_String) "search_num failed");
#line 216 "unify_proc.m"
          return;
        }
#line 216 "unify_proc.m"
      }
#line 215 "unify_proc.m"
  }
#line 118 "unify_proc.m"
}

#line 487 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2(
#line 487 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 487 "unify_proc.m"
{
#line 487 "unify_proc.m"
  {
#line 487 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 487 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      check_hlds__unify_proc__succeeded = check_hlds__unify_proc__IntroducedFrom__pred__add_lazily_generated_special_pred__487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))));
    }
#line 487 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 487 "unify_proc.m"
  }
#line 487 "unify_proc.m"
}

#line 516 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1(
#line 516 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 516 "unify_proc.m"
{
#line 516 "unify_proc.m"
  {
#line 516 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 516 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 516 "unify_proc.m"
    {
#line 516 "unify_proc.m"
      check_hlds__unify_proc__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))));
    }
#line 516 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 516 "unify_proc.m"
  }
#line 516 "unify_proc.m"
}

#line 112 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0(
#line 112 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_5,
#line 112 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_6,
#line 112 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13,
#line 112 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_14)
#line 112 "unify_proc.m"
{
#line 444 "unify_proc.m"
  {
#line 444 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Type_8;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarSet_9;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeBody_10;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Context_11;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeTable_26;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeDefn_27;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeParams_28;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__KindMap_29;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeStatus_30;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeArgs_31;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_32_32;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__SpecialPredMaps_48;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo0_49;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ErrorProcs_50;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__PredInfo_51;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_53;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_54_54;
#line 444 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_59;

#line 507 "unify_proc.m"
    {
#line 507 "unify_proc.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__TypeTable_26);
    }
#line 508 "unify_proc.m"
    {
#line 508 "unify_proc.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_26, check_hlds__unify_proc__TypeCtor_5, &check_hlds__unify_proc__TypeDefn_27);
    }
#line 509 "unify_proc.m"
    {
#line 509 "unify_proc.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__TVarSet_9);
    }
#line 510 "unify_proc.m"
    {
#line 510 "unify_proc.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__TypeParams_28);
    }
#line 511 "unify_proc.m"
    {
#line 511 "unify_proc.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__KindMap_29);
    }
#line 512 "unify_proc.m"
    {
#line 512 "unify_proc.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__TypeBody_10);
    }
#line 513 "unify_proc.m"
    {
#line 513 "unify_proc.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__TypeStatus_30);
    }
#line 514 "unify_proc.m"
    {
#line 514 "unify_proc.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__unify_proc__TypeDefn_27, &check_hlds__unify_proc__Context_11);
    }
#line 516 "unify_proc.m"
    {
#line 516 "unify_proc.m"
      check_hlds__unify_proc__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 516 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
#line 516 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_1));
#line 516 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 516 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13));
#line 516 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
#line 516 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_10));
#line 516 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_32_32, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_30));
#line 516 "unify_proc.m"
    }
#line 516 "unify_proc.m"
    {
#line 516 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_32_32, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
    }
#line 518 "unify_proc.m"
    {
#line 518 "unify_proc.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_29, check_hlds__unify_proc__TypeParams_28, &check_hlds__unify_proc__TypeArgs_31);
    }
#line 519 "unify_proc.m"
    {
#line 519 "unify_proc.m"
      parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_31, &check_hlds__unify_proc__Type_8);
    }
#line 468 "unify_proc.m"
    {
#line 468 "unify_proc.m"
      hlds__make_hlds__add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, check_hlds__unify_proc__TVarSet_9, check_hlds__unify_proc__Type_8, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__Context_11, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1]))), check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_13, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_53);
    }
#line 472 "unify_proc.m"
    {
#line 472 "unify_proc.m"
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_53, &check_hlds__unify_proc__SpecialPredMaps_48);
    }
#line 473 "unify_proc.m"
    {
#line 473 "unify_proc.m"
      hlds__special_pred__lookup_special_pred_maps_4_p_0(check_hlds__unify_proc__SpecialPredMaps_48, (MR_Integer) 2, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__PredId_6);
    }
#line 474 "unify_proc.m"
    {
#line 474 "unify_proc.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_53, *check_hlds__unify_proc__PredId_6, &check_hlds__unify_proc__PredInfo0_49);
    }
#line 484 "unify_proc.m"
    {
#line 484 "unify_proc.m"
      check_hlds__post_typecheck__post_typecheck_finish_imported_pred_no_io_4_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_53, &check_hlds__unify_proc__ErrorProcs_50, check_hlds__unify_proc__PredInfo0_49, &check_hlds__unify_proc__PredInfo_51);
    }
#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      check_hlds__unify_proc__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_compare_pred_decl_4_p_0_2));
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 3) = ((MR_Box) (check_hlds__unify_proc__ErrorProcs_50));
#line 487 "unify_proc.m"
      MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_54_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "unify_proc.m"
    }
#line 487 "unify_proc.m"
    {
#line 487 "unify_proc.m"
      mercury__require__expect_4_p_0(check_hlds__unify_proc__V_54_54, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.add_lazily_generated_special_pred\'/11", (MR_String) "ErrorProcs != []");
    }
#line 491 "unify_proc.m"
    {
#line 491 "unify_proc.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__PredInfo_51, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_29_53, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_59);
    }
#line 497 "unify_proc.m"
    {
#line 497 "unify_proc.m"
      check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(*check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35_59, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_14);
    }
#line 444 "unify_proc.m"
  }
#line 112 "unify_proc.m"
}

#line 516 "unify_proc.m"
static MR_bool MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2(
#line 516 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg)
#line 516 "unify_proc.m"
{
#line 516 "unify_proc.m"
  {
#line 516 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 516 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;

#line 516 "unify_proc.m"
    {
#line 516 "unify_proc.m"
      check_hlds__unify_proc__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 6))));
    }
#line 516 "unify_proc.m"
    return check_hlds__unify_proc__succeeded;
#line 516 "unify_proc.m"
  }
#line 516 "unify_proc.m"
}

#line 402 "unify_proc.m"
static MR_Box MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1(
#line 402 "unify_proc.m"
  MR_Box check_hlds__unify_proc__closure_arg,
#line 402 "unify_proc.m"
  MR_Box check_hlds__unify_proc__wrapper_arg_1)
#line 402 "unify_proc.m"
{
#line 402 "unify_proc.m"
  {
#line 402 "unify_proc.m"
    MR_Box check_hlds__unify_proc__wrapper_arg_2;
#line 402 "unify_proc.m"
    MR_Box check_hlds__unify_proc__closure = check_hlds__unify_proc__closure_arg;
#line 402 "unify_proc.m"
    MR_Word check_hlds__unify_proc__conv0_LambdaHeadVar__2_38;

#line 402 "unify_proc.m"
    {
#line 402 "unify_proc.m"
      check_hlds__unify_proc__conv0_LambdaHeadVar__2_38 = check_hlds__unify_proc__IntroducedFrom__func__add_lazily_generated_unify_pred__402__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__unify_proc__wrapper_arg_1));
    }
#line 402 "unify_proc.m"
    check_hlds__unify_proc__wrapper_arg_2 = ((MR_Box) (check_hlds__unify_proc__conv0_LambdaHeadVar__2_38));
#line 402 "unify_proc.m"
    return check_hlds__unify_proc__wrapper_arg_2;
#line 402 "unify_proc.m"
  }
#line 402 "unify_proc.m"
}

#line 104 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(
#line 104 "unify_proc.m"
  MR_Word check_hlds__unify_proc__TypeCtor_5,
#line 104 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__PredId_6,
#line 104 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34,
#line 104 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35)
#line 104 "unify_proc.m"
{
#line 387 "unify_proc.m"
  {
#line 387 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 387 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TVarSet_12;
#line 387 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Context_18;
#line 387 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeBody_30;
#line 387 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Type_31;
#line 387 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeStatus_32;
#line 387 "unify_proc.m"
    MR_Word check_hlds__unify_proc__Item_33;

#line 388 "unify_proc.m"
    {
#line 388 "unify_proc.m"
      check_hlds__unify_proc__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__unify_proc__TypeCtor_5);
    }
#line 424 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 389 "unify_proc.m"
      {
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 389 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__TupleArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 1)));
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TVarSet0_10;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TupleArgTVars_11;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TupleArgTypes_13;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__MakeUnamedField_16;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__CtorArgs_19;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Ctor_21;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ConsId_22;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ConsTagValues_23;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_36_36;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_42_42;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_43_43;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_46_46;
#line 389 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_5, (MR_Integer) 0)));

#line 393 "unify_proc.m"
        {
#line 393 "unify_proc.m"
          mercury__varset__init_1_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, &check_hlds__unify_proc__TVarSet0_10);
        }
#line 394 "unify_proc.m"
        {
#line 394 "unify_proc.m"
          mercury__varset__new_vars_4_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TupleArity_9, &check_hlds__unify_proc__TupleArgTVars_11, check_hlds__unify_proc__TVarSet0_10, &check_hlds__unify_proc__TVarSet_12);
        }
#line 395 "unify_proc.m"
        {
#line 395 "unify_proc.m"
          check_hlds__unify_proc__V_36_36 = mercury__map__init_0_f_0((MR_Word) &check_hlds__unify_proc_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 395 "unify_proc.m"
        {
#line 395 "unify_proc.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__V_36_36, check_hlds__unify_proc__TupleArgTVars_11, &check_hlds__unify_proc__TupleArgTypes_13);
        }
#line 410 "unify_proc.m"
        {
#line 410 "unify_proc.m"
          check_hlds__unify_proc__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 410 "unify_proc.m"
          MR_hl_field(MR_mktag(3), check_hlds__unify_proc__ConsId_22, 1) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
#line 410 "unify_proc.m"
        }
#line 411 "unify_proc.m"
        {
#line 411 "unify_proc.m"
          check_hlds__unify_proc__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_43_43, 0) = ((MR_Box) (check_hlds__unify_proc__ConsId_22));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "unify_proc.m"
        }
#line 411 "unify_proc.m"
        {
#line 411 "unify_proc.m"
          check_hlds__unify_proc__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 0) = ((MR_Box) (check_hlds__unify_proc__V_43_43));
#line 411 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "unify_proc.m"
        }
#line 411 "unify_proc.m"
        {
#line 411 "unify_proc.m"
          mercury__map__from_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, check_hlds__unify_proc__V_42_42, &check_hlds__unify_proc__ConsTagValues_23);
        }
#line 421 "unify_proc.m"
        {
#line 421 "unify_proc.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TupleArgTypes_13, &check_hlds__unify_proc__Type_31);
        }
#line 423 "unify_proc.m"
        {
#line 423 "unify_proc.m"
          mercury__term__context_init_1_p_0(&check_hlds__unify_proc__Context_18);
        }
#line 402 "unify_proc.m"
        {
#line 402 "unify_proc.m"
          check_hlds__unify_proc__MakeUnamedField_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 402 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0]));
#line 402 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_1));
#line 402 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__MakeUnamedField_16, 3) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 402 "unify_proc.m"
        }
#line 404 "unify_proc.m"
        {
#line 404 "unify_proc.m"
          check_hlds__unify_proc__CtorArgs_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__unify_proc__MakeUnamedField_16, check_hlds__unify_proc__TupleArgTypes_13);
        }
#line 407 "unify_proc.m"
        {
#line 407 "unify_proc.m"
          check_hlds__unify_proc__Ctor_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 407 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 2) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_3[0]));
#line 407 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 3) = ((MR_Box) (check_hlds__unify_proc__CtorArgs_19));
#line 407 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 4) = ((MR_Box) (check_hlds__unify_proc__TupleArity_9));
#line 407 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Ctor_21, 5) = ((MR_Box) (check_hlds__unify_proc__Context_18));
#line 407 "unify_proc.m"
        }
#line 418 "unify_proc.m"
        {
#line 418 "unify_proc.m"
          check_hlds__unify_proc__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 0) = ((MR_Box) (check_hlds__unify_proc__Ctor_21));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "unify_proc.m"
        }
#line 418 "unify_proc.m"
        {
#line 418 "unify_proc.m"
          check_hlds__unify_proc__TypeBody_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 0) = ((MR_Box) (check_hlds__unify_proc__V_46_46));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 1) = ((MR_Box) (check_hlds__unify_proc__ConsTagValues_23));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 6) = ((MR_Box) (((MR_Integer) 1 | (((MR_Integer) 1 << (MR_Integer) 1)))));
#line 418 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeBody_30, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "unify_proc.m"
        }
#line 389 "unify_proc.m"
      }
#line 424 "unify_proc.m"
    else
#line 506 "unify_proc.m"
      {
#line 506 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeTable_68;
#line 506 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeDefn_69;
#line 506 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeParams_70;
#line 506 "unify_proc.m"
        MR_Word check_hlds__unify_proc__KindMap_71;
#line 506 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeStatus_72;
#line 506 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeArgs_73;
#line 506 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_74_74;

#line 507 "unify_proc.m"
        {
#line 507 "unify_proc.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, &check_hlds__unify_proc__TypeTable_68);
        }
#line 508 "unify_proc.m"
        {
#line 508 "unify_proc.m"
          hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_68, check_hlds__unify_proc__TypeCtor_5, &check_hlds__unify_proc__TypeDefn_69);
        }
#line 509 "unify_proc.m"
        {
#line 509 "unify_proc.m"
          hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__TVarSet_12);
        }
#line 510 "unify_proc.m"
        {
#line 510 "unify_proc.m"
          hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__TypeParams_70);
        }
#line 511 "unify_proc.m"
        {
#line 511 "unify_proc.m"
          hlds__hlds_data__get_type_defn_kind_map_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__KindMap_71);
        }
#line 512 "unify_proc.m"
        {
#line 512 "unify_proc.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__TypeBody_30);
        }
#line 513 "unify_proc.m"
        {
#line 513 "unify_proc.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__TypeStatus_72);
        }
#line 514 "unify_proc.m"
        {
#line 514 "unify_proc.m"
          hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__unify_proc__TypeDefn_69, &check_hlds__unify_proc__Context_18);
        }
#line 516 "unify_proc.m"
        {
#line 516 "unify_proc.m"
          check_hlds__unify_proc__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 516 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0]));
#line 516 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 1) = ((MR_Box) (check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0_2));
#line 516 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 516 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 3) = ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34));
#line 516 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 4) = ((MR_Box) (check_hlds__unify_proc__TypeCtor_5));
#line 516 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 5) = ((MR_Box) (check_hlds__unify_proc__TypeBody_30));
#line 516 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_74_74, 6) = ((MR_Box) (check_hlds__unify_proc__TypeStatus_72));
#line 516 "unify_proc.m"
        }
#line 516 "unify_proc.m"
        {
#line 516 "unify_proc.m"
          mercury__require__expect_4_p_0(check_hlds__unify_proc__V_74_74, (MR_String) "check_hlds.unify_proc", (MR_String) "predicate \140check_hlds.unify_proc.collect_type_defn\'/6", (MR_String) "not generated lazily");
        }
#line 518 "unify_proc.m"
        {
#line 518 "unify_proc.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__unify_proc__KindMap_71, check_hlds__unify_proc__TypeParams_70, &check_hlds__unify_proc__TypeArgs_73);
        }
#line 519 "unify_proc.m"
        {
#line 519 "unify_proc.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeArgs_73, &check_hlds__unify_proc__Type_31);
        }
#line 506 "unify_proc.m"
      }
#line 429 "unify_proc.m"
    {
#line 429 "unify_proc.m"
      check_hlds__unify_proc__succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30);
    }
#line 437 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 435 "unify_proc.m"
      {
#line 435 "unify_proc.m"
        check_hlds__unify_proc__TypeStatus_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 436 "unify_proc.m"
        check_hlds__unify_proc__Item_33 = (MR_Integer) 1;
#line 435 "unify_proc.m"
      }
#line 437 "unify_proc.m"
    else
#line 438 "unify_proc.m"
      {
#line 438 "unify_proc.m"
        check_hlds__unify_proc__TypeStatus_32 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__unify_proc_scalar_common_3[1])));
#line 439 "unify_proc.m"
        check_hlds__unify_proc__Item_33 = (MR_Integer) 0;
#line 438 "unify_proc.m"
      }
#line 441 "unify_proc.m"
    {
#line 441 "unify_proc.m"
      check_hlds__unify_proc__add_lazily_generated_special_pred_11_p_0((MR_Integer) 0, check_hlds__unify_proc__Item_33, check_hlds__unify_proc__TVarSet_12, check_hlds__unify_proc__Type_31, check_hlds__unify_proc__TypeCtor_5, check_hlds__unify_proc__TypeBody_30, check_hlds__unify_proc__Context_18, check_hlds__unify_proc__TypeStatus_32, check_hlds__unify_proc__PredId_6, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_34, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_35);
    }
#line 387 "unify_proc.m"
  }
#line 104 "unify_proc.m"
}

#line 358 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_1(
#line 358 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 358 "unify_proc.m"
{
#line 358 "unify_proc.m"
  {
#line 358 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 358 "unify_proc.m"
    MR_builtin_longjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0, 1);
#line 358 "unify_proc.m"
  }
#line 358 "unify_proc.m"
}

#line 359 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_3(
#line 359 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 359 "unify_proc.m"
{
#line 359 "unify_proc.m"
  {
#line 359 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 359 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27 = ((MR_Word) (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27);
#line 359 "unify_proc.m"
    {
#line 359 "unify_proc.m"
      check_hlds__unify_proc__request_proc_9_p_0_2(check_hlds__unify_proc__env_ptr);
    }
#line 359 "unify_proc.m"
  }
#line 359 "unify_proc.m"
}

#line 358 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_2(
#line 358 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 358 "unify_proc.m"
{
#line 358 "unify_proc.m"
  {
#line 358 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 361 "unify_proc.m"
    {
#line 361 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgMode_27);
    }
#line 360 "unify_proc.m"
    (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 360 "unify_proc.m"
    if ((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 360 "unify_proc.m"
      {
#line 360 "unify_proc.m"
        check_hlds__unify_proc__request_proc_9_p_0_1(check_hlds__unify_proc__env_ptr);
      }
#line 358 "unify_proc.m"
  }
#line 358 "unify_proc.m"
}

#line 358 "unify_proc.m"
static void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0_4(
#line 358 "unify_proc.m"
  void * check_hlds__unify_proc__env_ptr_arg)
#line 358 "unify_proc.m"
{
#line 358 "unify_proc.m"
  {
#line 358 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s * check_hlds__unify_proc__env_ptr = (struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s *) check_hlds__unify_proc__env_ptr_arg;

#line 358 "unify_proc.m"
    if (MR_builtin_setjmp((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__commit_0) == 0)
#line 358 "unify_proc.m"
      {
#line 359 "unify_proc.m"
        {
#line 359 "unify_proc.m"
          mercury__list__member_2_p_1((check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57, &(check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__conv2_ArgMode_27, (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, check_hlds__unify_proc__request_proc_9_p_0_3, check_hlds__unify_proc__env_ptr);
        }
#line 358 "unify_proc.m"
        (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = MR_FALSE;
#line 358 "unify_proc.m"
      }
#line 358 "unify_proc.m"
    else
#line 358 "unify_proc.m"
      (check_hlds__unify_proc__env_ptr)->check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = MR_TRUE;
#line 358 "unify_proc.m"
  }
#line 358 "unify_proc.m"
}

#line 91 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__request_proc_9_p_0(
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PredId_10,
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgModes_11,
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstVarSet_12,
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ArgLives_13,
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__MaybeDet_14,
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_15,
#line 91 "unify_proc.m"
  MR_Integer * check_hlds__unify_proc__ProcId_16,
#line 91 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_32,
#line 91 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_33)
#line 91 "unify_proc.m"
{
#line 91 "unify_proc.m"
  {
#line 91 "unify_proc.m"
    struct check_hlds__unify_proc__request_proc_9_p_0_env_0_s check_hlds__unify_proc__env;

#line 91 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11 = check_hlds__unify_proc__ArgModes_11;
#line 91 "unify_proc.m"
    (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_32;
#line 330 "unify_proc.m"
    {
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_55_55;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_56_56;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__TypeCtorInfo_59_59;
#line 330 "unify_proc.m"
      MR_Integer check_hlds__unify_proc__Arity_23;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ClausesInfo_26;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__Requests0_28;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ReqQueue0_29;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__ReqQueue_30;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__Requests_31;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52;
#line 330 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_53_53;
#line 331 "unify_proc.m"
      MR_Box check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35;
#line 345 "unify_proc.m"
      MR_Box check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40;
#line 363 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_46_46;
#line 206 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_62_62;
#line 208 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_65_65;
#line 208 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_66_66;

#line 330 "unify_proc.m"
      {
#line 330 "unify_proc.m"
        hlds__hlds_module__module_info_get_preds_2_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34);
      }
#line 14193 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_55_55 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 14195 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 331 "unify_proc.m"
      {
#line 331 "unify_proc.m"
        mercury__map__lookup_3_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TypeCtorInfo_56_56, check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34, ((MR_Box) (check_hlds__unify_proc__PredId_10)), &check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35);
      }
#line 331 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35 = ((MR_Word) check_hlds__unify_proc__conv0_STATE_VARIABLE_PredInfo_35_35);
#line 14204 "check_hlds.unify_proc.c"
      (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 332 "unify_proc.m"
      {
#line 332 "unify_proc.m"
        mercury__list__length_2_p_0((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__TypeCtorInfo_57_57, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, &check_hlds__unify_proc__Arity_23);
      }
#line 336 "unify_proc.m"
      {
#line 336 "unify_proc.m"
        hlds__make_hlds__add_new_proc_13_p_0(check_hlds__unify_proc__InstVarSet_12, check_hlds__unify_proc__Arity_23, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__ArgModes_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__ArgLives_13, (MR_Integer) 1, check_hlds__unify_proc__MaybeDet_14, check_hlds__unify_proc__Context_15, (MR_Integer) 1, (MR_Integer) 1, check_hlds__unify_proc__STATE_VARIABLE_PredInfo_35_35, &check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, check_hlds__unify_proc__ProcId_16);
      }
#line 343 "unify_proc.m"
      {
#line 343 "unify_proc.m"
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39);
      }
#line 344 "unify_proc.m"
      {
#line 344 "unify_proc.m"
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__ClausesInfo_26);
      }
#line 14226 "check_hlds.unify_proc.c"
      check_hlds__unify_proc__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 345 "unify_proc.m"
      {
#line 345 "unify_proc.m"
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__unify_proc__TypeCtorInfo_59_59, check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39, *check_hlds__unify_proc__ProcId_16, &check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40);
      }
#line 345 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40 = ((MR_Word) check_hlds__unify_proc__conv1_STATE_VARIABLE_ProcInfo_40_40);
#line 346 "unify_proc.m"
      {
#line 346 "unify_proc.m"
        hlds__hlds_pred__proc_info_set_can_process_3_p_0((MR_Integer) 0, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_40_40, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42);
      }
#line 348 "unify_proc.m"
      {
#line 348 "unify_proc.m"
        check_hlds__clause_to_proc__copy_clauses_to_proc_4_p_0(*check_hlds__unify_proc__ProcId_16, check_hlds__unify_proc__ClausesInfo_26, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_42_42, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43);
      }
#line 350 "unify_proc.m"
      {
#line 350 "unify_proc.m"
        hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43, &check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44);
      }
#line 351 "unify_proc.m"
      {
#line 351 "unify_proc.m"
        hlds__hlds_goal__set_goal_contexts_3_p_0(check_hlds__unify_proc__Context_15, check_hlds__unify_proc__STATE_VARIABLE_Goal_44_44, &check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45);
      }
#line 358 "unify_proc.m"
      {
#line 358 "unify_proc.m"
        check_hlds__unify_proc__request_proc_9_p_0_4(&check_hlds__unify_proc__env);
      }
#line 358 "unify_proc.m"
      (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 362 "unify_proc.m"
      if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 362 "unify_proc.m"
        {
#line 363 "unify_proc.m"
          (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__MaybeDet_14)) == (MR_mktag((MR_Integer) 1)));
#line 363 "unify_proc.m"
          if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 363 "unify_proc.m"
            {
#line 363 "unify_proc.m"
              check_hlds__unify_proc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeDet_14, (MR_Integer) 0)));
#line 363 "unify_proc.m"
              (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = (check_hlds__unify_proc__V_46_46 == (MR_Integer) 7);
#line 363 "unify_proc.m"
            }
#line 363 "unify_proc.m"
          (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded = !((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded);
#line 362 "unify_proc.m"
        }
#line 366 "unify_proc.m"
      if ((check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__succeeded)
#line 366 "unify_proc.m"
        check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47 = check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45;
#line 366 "unify_proc.m"
      else
#line 367 "unify_proc.m"
        {
#line 367 "unify_proc.m"
          check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47 = hlds__goal_util__maybe_strip_equality_pretest_1_f_0(check_hlds__unify_proc__STATE_VARIABLE_Goal_45_45);
        }
#line 369 "unify_proc.m"
      {
#line 369 "unify_proc.m"
        hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_Goal_47_47, check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_43_43, &check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48);
      }
#line 371 "unify_proc.m"
      {
#line 371 "unify_proc.m"
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__unify_proc__TypeCtorInfo_59_59, *check_hlds__unify_proc__ProcId_16, ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_ProcInfo_48_48)), check_hlds__unify_proc__STATE_VARIABLE_ProcMap_39_39, &check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49);
      }
#line 372 "unify_proc.m"
      {
#line 372 "unify_proc.m"
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_ProcMap_49_49, check_hlds__unify_proc__STATE_VARIABLE_PredInfo_38_38, &check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50);
      }
#line 373 "unify_proc.m"
      {
#line 373 "unify_proc.m"
        mercury__map__det_update_4_p_0(check_hlds__unify_proc__TypeCtorInfo_55_55, check_hlds__unify_proc__TypeCtorInfo_56_56, ((MR_Box) (check_hlds__unify_proc__PredId_10)), ((MR_Box) (check_hlds__unify_proc__STATE_VARIABLE_PredInfo_50_50)), check_hlds__unify_proc__STATE_VARIABLE_PredMap_34_34, &check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51);
      }
#line 374 "unify_proc.m"
      {
#line 374 "unify_proc.m"
        hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__unify_proc__STATE_VARIABLE_PredMap_51_51, (check_hlds__unify_proc__env).check_hlds__unify_proc__request_proc_9_p_0_env_0__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52);
      }
#line 377 "unify_proc.m"
      {
#line 377 "unify_proc.m"
        hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, &check_hlds__unify_proc__Requests0_28);
      }
#line 206 "unify_proc.m"
      check_hlds__unify_proc__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 0)));
#line 206 "unify_proc.m"
      check_hlds__unify_proc__ReqQueue0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 1)));
#line 379 "unify_proc.m"
      {
#line 379 "unify_proc.m"
        check_hlds__unify_proc__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 0) = ((MR_Box) (check_hlds__unify_proc__PredId_10));
#line 379 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_53_53, 1) = ((MR_Box) (*check_hlds__unify_proc__ProcId_16));
#line 379 "unify_proc.m"
      }
#line 379 "unify_proc.m"
      {
#line 379 "unify_proc.m"
        mercury__queue__put_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__unify_proc__V_53_53)), check_hlds__unify_proc__ReqQueue0_29, &check_hlds__unify_proc__ReqQueue_30);
      }
#line 208 "unify_proc.m"
      check_hlds__unify_proc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 0)));
#line 208 "unify_proc.m"
      check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_28, (MR_Integer) 1)));
#line 208 "unify_proc.m"
      {
#line 208 "unify_proc.m"
        check_hlds__unify_proc__Requests_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_31, 0) = ((MR_Box) (check_hlds__unify_proc__V_65_65));
#line 208 "unify_proc.m"
        MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_31, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_30));
#line 208 "unify_proc.m"
      }
#line 381 "unify_proc.m"
      {
#line 381 "unify_proc.m"
        hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__unify_proc__Requests_31, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_52_52, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_33);
      }
#line 330 "unify_proc.m"
    }
#line 91 "unify_proc.m"
  }
#line 91 "unify_proc.m"
}

#line 84 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__request_unify_6_p_0(
#line 84 "unify_proc.m"
  MR_Word check_hlds__unify_proc__UnifyId_7,
#line 84 "unify_proc.m"
  MR_Word check_hlds__unify_proc__InstVarSet_8,
#line 84 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Determinism_9,
#line 84 "unify_proc.m"
  MR_Word check_hlds__unify_proc__Context_10,
#line 84 "unify_proc.m"
  MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_48,
#line 84 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_49)
#line 84 "unify_proc.m"
{
#line 254 "unify_proc.m"
  {
#line 254 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 254 "unify_proc.m"
    MR_Word check_hlds__unify_proc__TypeCtor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyId_7, (MR_Integer) 0)));
#line 254 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyMode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyId_7, (MR_Integer) 1)));
#line 254 "unify_proc.m"
    MR_Word check_hlds__unify_proc__MaybeRecompInfo0_14;
#line 254 "unify_proc.m"
    MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53;

#line 258 "unify_proc.m"
    {
#line 258 "unify_proc.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_48, &check_hlds__unify_proc__MaybeRecompInfo0_14);
    }
#line 265 "unify_proc.m"
    if ((check_hlds__unify_proc__MaybeRecompInfo0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "unify_proc.m"
      check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_48;
#line 265 "unify_proc.m"
    else
#line 260 "unify_proc.m"
      {
#line 260 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RecompInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__MaybeRecompInfo0_14, (MR_Integer) 0)));
#line 260 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorItem_16;
#line 260 "unify_proc.m"
        MR_Word check_hlds__unify_proc__RecompInfo_17;
#line 260 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_52_52;

#line 261 "unify_proc.m"
        {
#line 261 "unify_proc.m"
          check_hlds__unify_proc__TypeCtorItem_16 = recompilation__type_ctor_to_item_name_1_f_0(check_hlds__unify_proc__TypeCtor_12);
        }
#line 262 "unify_proc.m"
        {
#line 262 "unify_proc.m"
          recompilation__record_used_item_5_p_0((MR_Integer) 1, check_hlds__unify_proc__TypeCtorItem_16, check_hlds__unify_proc__TypeCtorItem_16, check_hlds__unify_proc__RecompInfo0_15, &check_hlds__unify_proc__RecompInfo_17);
        }
#line 264 "unify_proc.m"
        {
#line 264 "unify_proc.m"
          check_hlds__unify_proc__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_52_52, 0) = ((MR_Box) (check_hlds__unify_proc__RecompInfo_17));
#line 264 "unify_proc.m"
        }
#line 264 "unify_proc.m"
        {
#line 264 "unify_proc.m"
          hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(check_hlds__unify_proc__V_52_52, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_0_48, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53);
        }
#line 260 "unify_proc.m"
      }
#line 230 "unify_proc.m"
    {
#line 230 "unify_proc.m"
      MR_Word check_hlds__unify_proc__XInitial_78;
#line 230 "unify_proc.m"
      MR_Word check_hlds__unify_proc__YInitial_79;
#line 230 "unify_proc.m"
      MR_Word check_hlds__unify_proc__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 0)));
#line 231 "unify_proc.m"
      MR_Word check_hlds__unify_proc___Final_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 1)));

#line 231 "unify_proc.m"
      check_hlds__unify_proc__XInitial_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_83_83, (MR_Integer) 0)));
#line 231 "unify_proc.m"
      check_hlds__unify_proc__YInitial_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_83_83, (MR_Integer) 1)));
#line 233 "unify_proc.m"
      check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__Determinism_9 == (MR_Integer) 1);
#line 233 "unify_proc.m"
      if (check_hlds__unify_proc__succeeded)
#line 233 "unify_proc.m"
        {
#line 234 "unify_proc.m"
          {
#line 234 "unify_proc.m"
            check_hlds__unify_proc__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, check_hlds__unify_proc__XInitial_78);
          }
#line 233 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 235 "unify_proc.m"
            {
#line 235 "unify_proc.m"
              check_hlds__unify_proc__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, check_hlds__unify_proc__YInitial_79);
            }
#line 233 "unify_proc.m"
        }
#line 238 "unify_proc.m"
      if (check_hlds__unify_proc__succeeded)
#line 237 "unify_proc.m"
        {
#line 237 "unify_proc.m"
          MR_Integer check_hlds__unify_proc__V_18_18;

#line 237 "unify_proc.m"
          {
#line 237 "unify_proc.m"
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_18_18);
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
          check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__XInitial_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 242 "unify_proc.m"
          if (check_hlds__unify_proc__succeeded)
#line 241 "unify_proc.m"
            {
#line 241 "unify_proc.m"
              MR_Integer check_hlds__unify_proc__V_95_95;

#line 241 "unify_proc.m"
              {
#line 241 "unify_proc.m"
                hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_95_95);
              }
#line 241 "unify_proc.m"
              check_hlds__unify_proc__succeeded = MR_TRUE;
#line 241 "unify_proc.m"
            }
#line 242 "unify_proc.m"
          else
#line 246 "unify_proc.m"
            {
#line 243 "unify_proc.m"
              check_hlds__unify_proc__succeeded = (check_hlds__unify_proc__YInitial_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 246 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 245 "unify_proc.m"
                {
#line 245 "unify_proc.m"
                  MR_Integer check_hlds__unify_proc__V_96_96;

#line 245 "unify_proc.m"
                  {
#line 245 "unify_proc.m"
                    hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&check_hlds__unify_proc__V_96_96);
                  }
#line 245 "unify_proc.m"
                  check_hlds__unify_proc__succeeded = MR_TRUE;
#line 245 "unify_proc.m"
                }
#line 246 "unify_proc.m"
              else
#line 247 "unify_proc.m"
                {
#line 247 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__Requests_81;
#line 247 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__UnifyReqMap_82;
#line 205 "unify_proc.m"
                  MR_Word check_hlds__unify_proc__V_88_88;
#line 249 "unify_proc.m"
                  MR_Integer check_hlds__unify_proc__V_97_97;
#line 249 "unify_proc.m"
                  MR_Box check_hlds__unify_proc__conv0_V_97_97;

#line 247 "unify_proc.m"
                  {
#line 247 "unify_proc.m"
                    hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__Requests_81);
                  }
#line 205 "unify_proc.m"
                  check_hlds__unify_proc__UnifyReqMap_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_81, (MR_Integer) 0)));
#line 205 "unify_proc.m"
                  check_hlds__unify_proc__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_81, (MR_Integer) 1)));
#line 249 "unify_proc.m"
                  {
#line 249 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__unify_proc__UnifyReqMap_82, ((MR_Box) (check_hlds__unify_proc__UnifyId_7)), &check_hlds__unify_proc__conv0_V_97_97);
                  }
#line 249 "unify_proc.m"
                  if (check_hlds__unify_proc__succeeded)
#line 249 "unify_proc.m"
                    {
#line 249 "unify_proc.m"
                      check_hlds__unify_proc__V_97_97 = ((MR_Integer) check_hlds__unify_proc__conv0_V_97_97);
#line 249 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = MR_TRUE;
#line 249 "unify_proc.m"
                    }
#line 247 "unify_proc.m"
                }
#line 246 "unify_proc.m"
            }
#line 242 "unify_proc.m"
        }
#line 230 "unify_proc.m"
    }
#line 274 "unify_proc.m"
    if (!(check_hlds__unify_proc__succeeded))
#line 275 "unify_proc.m"
      {
#line 275 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeTable_19;
#line 275 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeDefn_20;
#line 275 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeBody_21;

#line 275 "unify_proc.m"
        {
#line 275 "unify_proc.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__TypeTable_19);
        }
#line 276 "unify_proc.m"
        {
#line 276 "unify_proc.m"
          check_hlds__unify_proc__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__unify_proc__TypeTable_19, check_hlds__unify_proc__TypeCtor_12, &check_hlds__unify_proc__TypeDefn_20);
        }
#line 275 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 275 "unify_proc.m"
          {
#line 277 "unify_proc.m"
            {
#line 277 "unify_proc.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__unify_proc__TypeDefn_20, &check_hlds__unify_proc__TypeBody_21);
            }
#line 279 "unify_proc.m"
            {
#line 279 "unify_proc.m"
              MR_Word check_hlds__unify_proc__TypeName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 0)));
#line 279 "unify_proc.m"
              MR_Word check_hlds__unify_proc__TypeModuleName_24;
#line 279 "unify_proc.m"
              MR_Word check_hlds__unify_proc__ModuleName_26;
#line 279 "unify_proc.m"
              MR_Integer check_hlds__unify_proc___TypeArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 1)));
#line 280 "unify_proc.m"
              MR_String check_hlds__unify_proc__V_25_25;
#line 283 "unify_proc.m"
              MR_Word check_hlds__unify_proc__V_27_27;

#line 280 "unify_proc.m"
              check_hlds__unify_proc__succeeded = ((MR_tag((MR_Word) check_hlds__unify_proc__TypeName_22)) == (MR_mktag((MR_Integer) 1)));
#line 280 "unify_proc.m"
              if (check_hlds__unify_proc__succeeded)
#line 280 "unify_proc.m"
                {
#line 280 "unify_proc.m"
                  check_hlds__unify_proc__TypeModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeName_22, (MR_Integer) 0)));
#line 280 "unify_proc.m"
                  check_hlds__unify_proc__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__unify_proc__TypeName_22, (MR_Integer) 1)));
#line 281 "unify_proc.m"
                  {
#line 281 "unify_proc.m"
                    hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__ModuleName_26);
                  }
#line 282 "unify_proc.m"
                  {
#line 282 "unify_proc.m"
                    check_hlds__unify_proc__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__unify_proc__ModuleName_26, check_hlds__unify_proc__TypeModuleName_24);
                  }
#line 279 "unify_proc.m"
                  if (check_hlds__unify_proc__succeeded)
#line 279 "unify_proc.m"
                    {
#line 283 "unify_proc.m"
                      check_hlds__unify_proc__succeeded = ((((MR_tag((MR_Word) check_hlds__unify_proc__TypeBody_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 283 "unify_proc.m"
                      if (check_hlds__unify_proc__succeeded)
#line 283 "unify_proc.m"
                        check_hlds__unify_proc__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unify_proc__TypeBody_21, (MR_Integer) 1)));
#line 279 "unify_proc.m"
                    }
#line 280 "unify_proc.m"
                }
#line 279 "unify_proc.m"
            }
#line 284 "unify_proc.m"
            if (!(check_hlds__unify_proc__succeeded))
#line 285 "unify_proc.m"
              {
#line 285 "unify_proc.m"
                check_hlds__unify_proc__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(check_hlds__unify_proc__TypeCtor_12, check_hlds__unify_proc__TypeBody_21);
              }
#line 275 "unify_proc.m"
          }
#line 275 "unify_proc.m"
      }
#line 290 "unify_proc.m"
    if (check_hlds__unify_proc__succeeded)
#line 290 "unify_proc.m"
      *check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_49 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53;
#line 290 "unify_proc.m"
    else
#line 293 "unify_proc.m"
      {
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeCtorInfo_69_69;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__SpecialPredMaps_28;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyMap_29;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredId_31;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_Initial_32;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_Initial_33;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__X_Final_34;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Y_Final_35;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgModes0_36;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__InMode_37;
#line 293 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__TypeArity_39;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__TypeInfoModes_40;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__ArgModes_41;
#line 293 "unify_proc.m"
        MR_Integer check_hlds__unify_proc__ProcId_43;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Requests0_44;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyReqMap0_45;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__UnifyReqMap_46;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__Requests_47;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_54_54;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_55_55;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_56_56;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_57_57;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_58_58;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_59_59;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_61_61;
#line 293 "unify_proc.m"
        MR_Word check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_62_62;
#line 294 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_64_64;
#line 294 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_65_65;
#line 294 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_66_66;
#line 297 "unify_proc.m"
        MR_Word check_hlds__unify_proc__PredIdPrime_30;
#line 295 "unify_proc.m"
        MR_Box check_hlds__unify_proc__conv1_PredIdPrime_30;
#line 309 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_38_38;
#line 205 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_90_90;
#line 207 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_94_94;
#line 207 "unify_proc.m"
        MR_Word check_hlds__unify_proc__V_93_93;

#line 293 "unify_proc.m"
        {
#line 293 "unify_proc.m"
          hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__SpecialPredMaps_28);
        }
#line 294 "unify_proc.m"
        check_hlds__unify_proc__UnifyMap_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SpecialPredMaps_28, (MR_Integer) 0)));
#line 294 "unify_proc.m"
        check_hlds__unify_proc__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SpecialPredMaps_28, (MR_Integer) 1)));
#line 294 "unify_proc.m"
        check_hlds__unify_proc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SpecialPredMaps_28, (MR_Integer) 2)));
#line 294 "unify_proc.m"
        check_hlds__unify_proc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__SpecialPredMaps_28, (MR_Integer) 3)));
#line 295 "unify_proc.m"
        {
#line 295 "unify_proc.m"
          check_hlds__unify_proc__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__unify_proc__UnifyMap_29, ((MR_Box) (check_hlds__unify_proc__TypeCtor_12)), &check_hlds__unify_proc__conv1_PredIdPrime_30);
        }
#line 295 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 295 "unify_proc.m"
          {
#line 295 "unify_proc.m"
            check_hlds__unify_proc__PredIdPrime_30 = ((MR_Word) check_hlds__unify_proc__conv1_PredIdPrime_30);
#line 295 "unify_proc.m"
            check_hlds__unify_proc__succeeded = MR_TRUE;
#line 295 "unify_proc.m"
          }
#line 297 "unify_proc.m"
        if (check_hlds__unify_proc__succeeded)
#line 296 "unify_proc.m"
          {
#line 296 "unify_proc.m"
            check_hlds__unify_proc__PredId_31 = check_hlds__unify_proc__PredIdPrime_30;
#line 296 "unify_proc.m"
            check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_54_54 = check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53;
#line 296 "unify_proc.m"
          }
#line 297 "unify_proc.m"
        else
#line 300 "unify_proc.m"
          {
#line 300 "unify_proc.m"
            check_hlds__unify_proc__add_lazily_generated_unify_pred_4_p_0(check_hlds__unify_proc__TypeCtor_12, &check_hlds__unify_proc__PredId_31, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_53_53, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_54_54);
          }
#line 304 "unify_proc.m"
        check_hlds__unify_proc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 0)));
#line 304 "unify_proc.m"
        check_hlds__unify_proc__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__UnifyMode_13, (MR_Integer) 1)));
#line 304 "unify_proc.m"
        check_hlds__unify_proc__X_Initial_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, (MR_Integer) 0)));
#line 304 "unify_proc.m"
        check_hlds__unify_proc__Y_Initial_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_55_55, (MR_Integer) 1)));
#line 304 "unify_proc.m"
        check_hlds__unify_proc__X_Final_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_56_56, (MR_Integer) 0)));
#line 304 "unify_proc.m"
        check_hlds__unify_proc__Y_Final_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_56_56, (MR_Integer) 1)));
#line 305 "unify_proc.m"
        {
#line 305 "unify_proc.m"
          check_hlds__unify_proc__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_57_57, 0) = ((MR_Box) (check_hlds__unify_proc__X_Initial_32));
#line 305 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_57_57, 1) = ((MR_Box) (check_hlds__unify_proc__X_Final_34));
#line 305 "unify_proc.m"
        }
#line 305 "unify_proc.m"
        {
#line 305 "unify_proc.m"
          check_hlds__unify_proc__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 305 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_59_59, 0) = ((MR_Box) (check_hlds__unify_proc__Y_Initial_33));
#line 305 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__V_59_59, 1) = ((MR_Box) (check_hlds__unify_proc__Y_Final_35));
#line 305 "unify_proc.m"
        }
#line 305 "unify_proc.m"
        {
#line 305 "unify_proc.m"
          check_hlds__unify_proc__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 0) = ((MR_Box) (check_hlds__unify_proc__V_59_59));
#line 305 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "unify_proc.m"
        }
#line 305 "unify_proc.m"
        {
#line 305 "unify_proc.m"
          check_hlds__unify_proc__ArgModes0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgModes0_36, 0) = ((MR_Box) (check_hlds__unify_proc__V_57_57));
#line 305 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__ArgModes0_36, 1) = ((MR_Box) (check_hlds__unify_proc__V_58_58));
#line 305 "unify_proc.m"
        }
#line 308 "unify_proc.m"
        {
#line 308 "unify_proc.m"
          parse_tree__prog_mode__in_mode_1_p_0(&check_hlds__unify_proc__InMode_37);
        }
#line 309 "unify_proc.m"
        check_hlds__unify_proc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 0)));
#line 309 "unify_proc.m"
        check_hlds__unify_proc__TypeArity_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__TypeCtor_12, (MR_Integer) 1)));
#line 14864 "check_hlds.unify_proc.c"
        check_hlds__unify_proc__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 310 "unify_proc.m"
        {
#line 310 "unify_proc.m"
          mercury__list__duplicate_3_p_0(check_hlds__unify_proc__TypeCtorInfo_69_69, check_hlds__unify_proc__TypeArity_39, ((MR_Box) (check_hlds__unify_proc__InMode_37)), &check_hlds__unify_proc__TypeInfoModes_40);
        }
#line 311 "unify_proc.m"
        {
#line 311 "unify_proc.m"
          check_hlds__unify_proc__ArgModes_41 = mercury__list__f_43_43_2_f_0(check_hlds__unify_proc__TypeCtorInfo_69_69, check_hlds__unify_proc__TypeInfoModes_40, check_hlds__unify_proc__ArgModes0_36);
        }
#line 315 "unify_proc.m"
        {
#line 315 "unify_proc.m"
          check_hlds__unify_proc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "unify_proc.m"
          MR_hl_field(MR_mktag(1), check_hlds__unify_proc__V_61_61, 0) = ((MR_Box) (check_hlds__unify_proc__Determinism_9));
#line 315 "unify_proc.m"
        }
#line 315 "unify_proc.m"
        {
#line 315 "unify_proc.m"
          check_hlds__unify_proc__request_proc_9_p_0(check_hlds__unify_proc__PredId_31, check_hlds__unify_proc__ArgModes_41, check_hlds__unify_proc__InstVarSet_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unify_proc__V_61_61, check_hlds__unify_proc__Context_10, &check_hlds__unify_proc__ProcId_43, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_54_54, &check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_62_62);
        }
#line 319 "unify_proc.m"
        {
#line 319 "unify_proc.m"
          hlds__hlds_module__module_info_get_proc_requests_2_p_0(check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_62_62, &check_hlds__unify_proc__Requests0_44);
        }
#line 205 "unify_proc.m"
        check_hlds__unify_proc__UnifyReqMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_44, (MR_Integer) 0)));
#line 205 "unify_proc.m"
        check_hlds__unify_proc__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_44, (MR_Integer) 1)));
#line 321 "unify_proc.m"
        {
#line 321 "unify_proc.m"
          mercury__map__set_4_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__unify_proc__UnifyId_7)), ((MR_Box) (check_hlds__unify_proc__ProcId_43)), check_hlds__unify_proc__UnifyReqMap0_45, &check_hlds__unify_proc__UnifyReqMap_46);
        }
#line 207 "unify_proc.m"
        check_hlds__unify_proc__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_44, (MR_Integer) 0)));
#line 207 "unify_proc.m"
        check_hlds__unify_proc__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests0_44, (MR_Integer) 1)));
#line 207 "unify_proc.m"
        {
#line 207 "unify_proc.m"
          check_hlds__unify_proc__Requests_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_47, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyReqMap_46));
#line 207 "unify_proc.m"
          MR_hl_field(MR_mktag(0), check_hlds__unify_proc__Requests_47, 1) = ((MR_Box) (check_hlds__unify_proc__V_94_94));
#line 207 "unify_proc.m"
        }
#line 323 "unify_proc.m"
        {
#line 323 "unify_proc.m"
          hlds__hlds_module__module_info_set_proc_requests_3_p_0(check_hlds__unify_proc__Requests_47, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_62_62, check_hlds__unify_proc__STATE_VARIABLE_ModuleInfo_49);
        }
#line 293 "unify_proc.m"
      }
#line 254 "unify_proc.m"
  }
#line 84 "unify_proc.m"
}

#line 80 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__init_requests_1_p_0(
#line 80 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__Requests_2)
#line 80 "unify_proc.m"
{
#line 192 "unify_proc.m"
  {
#line 192 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 192 "unify_proc.m"
    MR_Word check_hlds__unify_proc__UnifyReqMap_3;
#line 192 "unify_proc.m"
    MR_Word check_hlds__unify_proc__ReqQueue_4;

#line 193 "unify_proc.m"
    {
#line 193 "unify_proc.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &check_hlds__unify_proc__UnifyReqMap_3);
    }
#line 194 "unify_proc.m"
    {
#line 194 "unify_proc.m"
      mercury__queue__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__unify_proc__ReqQueue_4);
    }
#line 195 "unify_proc.m"
    {
#line 195 "unify_proc.m"
      MR_Word base;
#line 195 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "unify_proc.m"
      *check_hlds__unify_proc__Requests_2 = base;
#line 195 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__UnifyReqMap_3));
#line 195 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_4));
#line 195 "unify_proc.m"
    }
#line 192 "unify_proc.m"
  }
#line 80 "unify_proc.m"
}

#line 72 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__set_req_queue_3_p_0(
#line 72 "unify_proc.m"
  MR_Word check_hlds__unify_proc__ReqQueue_4,
#line 72 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PR_5,
#line 72 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__3_3)
#line 72 "unify_proc.m"
{
#line 208 "unify_proc.m"
  {
#line 208 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 208 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_5, (MR_Integer) 0)));
#line 208 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_5, (MR_Integer) 1)));

#line 208 "unify_proc.m"
    {
#line 208 "unify_proc.m"
      MR_Word base;
#line 208 "unify_proc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "unify_proc.m"
      *check_hlds__unify_proc__HeadVar__3_3 = base;
#line 208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unify_proc__V_6_6));
#line 208 "unify_proc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unify_proc__ReqQueue_4));
#line 208 "unify_proc.m"
    }
#line 208 "unify_proc.m"
  }
#line 72 "unify_proc.m"
}

#line 71 "unify_proc.m"
void MR_CALL 
check_hlds__unify_proc__get_req_queue_2_p_0(
#line 71 "unify_proc.m"
  MR_Word check_hlds__unify_proc__PR_3,
#line 71 "unify_proc.m"
  MR_Word * check_hlds__unify_proc__HeadVar__2_2)
#line 71 "unify_proc.m"
{
#line 206 "unify_proc.m"
  {
#line 206 "unify_proc.m"
    MR_bool check_hlds__unify_proc__succeeded;
#line 206 "unify_proc.m"
    MR_Word check_hlds__unify_proc__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_3, (MR_Integer) 0)));

#line 206 "unify_proc.m"
    *check_hlds__unify_proc__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unify_proc__PR_3, (MR_Integer) 1)));
#line 206 "unify_proc.m"
  }
#line 71 "unify_proc.m"
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
