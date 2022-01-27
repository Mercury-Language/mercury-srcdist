/*
** Automatically generated from `inst_match.m'
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


/* :- module check_hlds.inst_match. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_match__init
ENDINIT
*/

#include "check_hlds.inst_match.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
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
#include "libs.op_mode.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1600 "inst_match.m"
struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s {
#line 1600 "inst_match.m"
  MR_Word * check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4;
#line 1600 "inst_match.m"
  MR_Cont check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont;
#line 1600 "inst_match.m"
  void * check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr;
#line 1602 "inst_match.m"
  MR_Word check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7;
#line 1608 "inst_match.m"
  MR_Box check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7;
#line 1600 "inst_match.m"
};

#line 1527 "inst_match.m"
struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s {
#line 1527 "inst_match.m"
  MR_Word * check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4;
#line 1527 "inst_match.m"
  MR_Cont check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont;
#line 1527 "inst_match.m"
  void * check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr;
#line 1531 "inst_match.m"
  MR_bool check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded;
#line 1536 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8;
#line 1543 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28;
#line 1543 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__V_27_27;
#line 1544 "inst_match.m"
  MR_Box check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4;
#line 1527 "inst_match.m"
};

#line 688 "inst_match.m"
struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s {
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5;
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6;
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8;
#line 693 "inst_match.m"
  MR_bool check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
#line 701 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13;
#line 666 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0;
#line 674 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1;
#line 674 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23;
#line 674 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24;
#line 678 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28;
#line 678 "inst_match.m"
  MR_Box check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27;
#line 688 "inst_match.m"
};

#line 660 "inst_match.m"
struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s {
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5;
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6;
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7;
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8;
#line 664 "inst_match.m"
  MR_bool check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
#line 666 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0;
#line 674 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1;
#line 674 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11;
#line 674 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12;
#line 678 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15;
#line 678 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16;
#line 678 "inst_match.m"
  MR_Box check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15;
#line 660 "inst_match.m"
};


#line 261 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 264 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 267 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 270 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0;

#line 273 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1;

#line 276 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2;

#line 279 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0[3];

#line 282 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3];

#line 285 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3];

#line 288 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;

#line 291 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0;

#line 294 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1;

#line 297 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0[2];

#line 300 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0[2];

#line 303 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0[2];

#line 306 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 309 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 312 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 315 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[7];

#line 318 "check_hlds.inst_match.c"
static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[7];

#line 321 "check_hlds.inst_match.c"
static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[7];

#line 324 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0;

#line 327 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1];

#line 330 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1];

#line 333 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1];

#line 336 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1];

#line 339 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 342 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3];

#line 345 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0;

#line 348 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1];

#line 351 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1];

#line 354 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1];

#line 357 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1];

#line 360 "check_hlds.inst_match.c"
static const MR_VA_TypeInfo_Struct5 check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0;

#line 363 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0;

#line 366 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1;

#line 369 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0[2];

#line 372 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2];

#line 375 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2];

#line 378 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
#line 381 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 383 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 386 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
#line 389 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 391 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 393 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 396 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
#line 399 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 401 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 404 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
#line 407 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 409 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 411 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 414 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
#line 417 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 419 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 422 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
#line 425 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 427 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 429 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 432 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
#line 435 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 437 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 440 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
#line 443 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 445 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 447 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 450 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
#line 453 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 455 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 458 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
#line 461 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 463 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 465 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 468 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
#line 471 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 473 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 476 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
#line 479 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 481 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 483 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 486 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
#line 489 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 491 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 494 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
#line 497 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 499 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 501 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 315 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_49_95_95_91_52_93_95_48_3_p_0(
#line 315 "inst_match.m"
  MR_Word check_hlds__inst_match__V_33_33,
#line 315 "inst_match.m"
  MR_Word check_hlds__inst_match__V_34_34,
#line 315 "inst_match.m"
  MR_Word check_hlds__inst_match__V_35_35,
#line 315 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_7,
#line 315 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_8);

#line 325 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho12_6_p_0(
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 325 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

#line 325 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho11_6_p_0(
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 325 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

#line 325 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho10_6_p_0(
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 325 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

#line 325 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho9_6_p_0(
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 325 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

#line 410 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 410 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 367 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 367 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 410 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 410 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 367 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 367 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 410 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 410 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 367 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 367 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 410 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 410 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 367 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 367 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 344 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 344 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 344 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho2_7_p_0(
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 344 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 265 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
#line 265 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 265 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 310 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
#line 310 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 310 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 310 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 310 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
#line 310 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 310 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 238 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
#line 238 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 238 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 238 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 238 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
#line 238 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 238 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 274 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
#line 274 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 274 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 274 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 274 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
#line 274 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 274 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 245 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
#line 245 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 245 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 245 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 245 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
#line 245 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 245 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 287 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
#line 287 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 287 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 287 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 287 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
#line 287 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 287 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 1614 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
#line 1614 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_1,
#line 1614 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_2);

#line 1602 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(
#line 1602 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1608 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_2(
#line 1608 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1600 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0(
#line 1600 "inst_match.m"
  MR_Word check_hlds__inst_match__Mode_3,
#line 1600 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1600 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1600 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1590 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(
#line 1590 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1590 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1590 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1590 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1577 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
#line 1577 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1577 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1577 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1577 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1566 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
#line 1566 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1566 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1566 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1566 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1544 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_2(
#line 1544 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1543 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_3(
#line 1543 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1543 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(
#line 1543 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1527 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
#line 1527 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_3,
#line 1527 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1527 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1527 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1490 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
#line 1490 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_3,
#line 1490 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1490 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1490 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1458 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
#line 1458 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1458 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1458 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1458 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1458 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1434 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_2_5_p_0(
#line 1434 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInstA_6,
#line 1434 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInstB_7,
#line 1434 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1434 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_17,
#line 1434 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_18);

#line 1400 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(
#line 1400 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInst_5,
#line 1400 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_6,
#line 1400 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_14,
#line 1400 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_15);

#line 1378 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(
#line 1378 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfo_5,
#line 1378 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_6,
#line 1378 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_9,
#line 1378 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_10);

#line 1370 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(
#line 1370 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4,
#line 1370 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfo_5,
#line 1370 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_6);

#line 1346 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(
#line 1346 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1346 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1346 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__3_3,
#line 1346 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1346 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1328 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(
#line 1328 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1328 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1328 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__3_3,
#line 1328 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1328 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1272 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(
#line 1272 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1272 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30,
#line 1272 "inst_match.m"
  MR_Word * check_hlds__inst_match__ContainsNonstd_8,
#line 1272 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_31,
#line 1272 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_32);

#line 1265 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(
#line 1265 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_5,
#line 1265 "inst_match.m"
  MR_Word * check_hlds__inst_match__ContainsNonstd_6,
#line 1265 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_8,
#line 1265 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_9);

#line 1236 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
#line 1236 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1236 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1236 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1236 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1236 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1219 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
#line 1219 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1219 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1219 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1219 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1219 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1198 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
#line 1198 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_5,
#line 1198 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_6,
#line 1198 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 1198 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8);

#line 1107 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
#line 1107 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1107 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1107 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1107 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 1107 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42);

#line 1090 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
#line 1090 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1090 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1090 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1090 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 1090 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 1053 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
#line 1053 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1053 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1053 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1053 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1053 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1036 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
#line 1036 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1036 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1036 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1036 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1036 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1016 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
#line 1016 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 1016 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 1016 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1016 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 1016 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

#line 902 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
#line 902 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 902 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 902 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 902 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 902 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42);

#line 882 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 882 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 856 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
#line 856 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 856 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 856 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 856 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 856 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 834 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
#line 834 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 834 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 834 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 834 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 834 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 814 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
#line 814 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_4,
#line 814 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_5,
#line 814 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6);

#line 802 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_4,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_5,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6);

#line 794 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
#line 794 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 794 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_2,
#line 794 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_3,
#line 794 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4);

#line 769 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
#line 769 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 769 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_2,
#line 769 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_3);

#line 741 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
#line 741 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 741 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 741 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 741 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 741 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

#line 683 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 666 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
#line 666 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 666 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
#line 666 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 688 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_7,
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8);

#line 683 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 666 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
#line 666 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 666 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
#line 666 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 660 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_7,
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8);

#line 643 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
#line 643 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 643 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 643 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 643 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 643 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 630 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
#line 630 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 630 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 630 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 630 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 630 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 496 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
#line 496 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 496 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 496 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 496 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_48,
#line 496 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_49);

#line 480 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
#line 480 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 480 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 480 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 480 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 480 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 415 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
#line 415 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 415 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 415 "inst_match.m"
  MR_Word check_hlds__inst_match__InstVar_8,
#line 415 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 415 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);


static /* final */ const MR_Box check_hlds__inst_match_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_3[2][7];

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_4[1][8];




static /* final */ const MR_Box check_hlds__inst_match_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_3[2][7] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__inst_match_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_match_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0)),
    ((MR_Box) (&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.inst_match.mh"
#include "mdbcomp.rtti_access.mh"



#line 1580 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1588 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1596 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1604 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0 = {
  (MR_String) "cs_forward",
  (MR_Integer) 0
};

#line 1610 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1 = {
  (MR_String) "cs_reverse",
  (MR_Integer) 1
};

#line 1616 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2 = {
  (MR_String) "cs_none",
  (MR_Integer) 2
};

#line 1622 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2
};

#line 1629 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1
};

#line 1636 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1643 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____calculate_sub_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____calculate_sub_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "calculate_sub",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0
};

#line 1660 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0
  }
};

#line 1668 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____expansions_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____expansions_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "expansions",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1685 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0 = {
  (MR_String) "ground_matches_bound_if_complete",
  (MR_Integer) 0
};

#line 1691 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1 = {
  (MR_String) "ground_matches_bound_always",
  (MR_Integer) 1
};

#line 1697 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1
};

#line 1703 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0
};

#line 1709 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1715 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "ground_matches_bound",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0
};

#line 1732 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1740 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1749 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1757 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0
};

#line 1768 "check_hlds.inst_match.c"
static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[7] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_expansions",
  (MR_String) "imi_maybe_sub",
  (MR_String) "imi_calculate_sub",
  (MR_String) "imi_uniqueness_comparison",
  (MR_String) "imi_any_matches_any",
  (MR_String) "imi_ground_matches_bound"
};

#line 1779 "check_hlds.inst_match.c"
static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

#line 1818 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0 = {
  (MR_String) "inst_match_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0,
  check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0,
  check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0,
  NULL
};

#line 1833 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

#line 1838 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0
  }
};

#line 1847 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

#line 1852 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1] = {
  (MR_Integer) 0
};

#line 1857 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_info_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_info_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_info",
  {     check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0
};

#line 1874 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1882 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1889 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0 = {
  (MR_String) "inst_match_inputs",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0,
  NULL,
  NULL,
  NULL
};

#line 1904 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

#line 1909 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0
  }
};

#line 1918 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

#line 1923 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1] = {
  (MR_Integer) 0
};

#line 1928 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_inputs",
  {     check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0
};

#line 1945 "check_hlds.inst_match.c"
static const MR_VA_TypeInfo_Struct5 check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0,
    (MR_TypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0
  }
};

#line 1958 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_matches_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_matches_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1975 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0 = {
  (MR_String) "uc_match",
  (MR_Integer) 0
};

#line 1981 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1 = {
  (MR_String) "uc_instantiated",
  (MR_Integer) 1
};

#line 1987 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1
};

#line 1993 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0
};

#line 1999 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2005 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "uniqueness_comparison",
  {     check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0 },
  {     check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0
};

#line 2022 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
#line 2025 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2027 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2029 "check_hlds.inst_match.c"
{
#line 2031 "check_hlds.inst_match.c"
  {
#line 2033 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2036 "check_hlds.inst_match.c"
    {
#line 2038 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____calculate_sub_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2041 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2043 "check_hlds.inst_match.c"
  }
#line 2045 "check_hlds.inst_match.c"
}

#line 2048 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
#line 2051 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2053 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2055 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2057 "check_hlds.inst_match.c"
{
#line 2059 "check_hlds.inst_match.c"
  {
#line 2061 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2064 "check_hlds.inst_match.c"
    {
#line 2066 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____calculate_sub_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2069 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2071 "check_hlds.inst_match.c"
  }
#line 2073 "check_hlds.inst_match.c"
}

#line 2076 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
#line 2079 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2081 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2083 "check_hlds.inst_match.c"
{
#line 2085 "check_hlds.inst_match.c"
  {
#line 2087 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2090 "check_hlds.inst_match.c"
    {
#line 2092 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____expansions_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2095 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2097 "check_hlds.inst_match.c"
  }
#line 2099 "check_hlds.inst_match.c"
}

#line 2102 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
#line 2105 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2107 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2109 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2111 "check_hlds.inst_match.c"
{
#line 2113 "check_hlds.inst_match.c"
  {
#line 2115 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2118 "check_hlds.inst_match.c"
    {
#line 2120 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____expansions_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2123 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2125 "check_hlds.inst_match.c"
  }
#line 2127 "check_hlds.inst_match.c"
}

#line 2130 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
#line 2133 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2135 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2137 "check_hlds.inst_match.c"
{
#line 2139 "check_hlds.inst_match.c"
  {
#line 2141 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2144 "check_hlds.inst_match.c"
    {
#line 2146 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____ground_matches_bound_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2149 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2151 "check_hlds.inst_match.c"
  }
#line 2153 "check_hlds.inst_match.c"
}

#line 2156 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
#line 2159 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2161 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2163 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2165 "check_hlds.inst_match.c"
{
#line 2167 "check_hlds.inst_match.c"
  {
#line 2169 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2172 "check_hlds.inst_match.c"
    {
#line 2174 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____ground_matches_bound_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2177 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2179 "check_hlds.inst_match.c"
  }
#line 2181 "check_hlds.inst_match.c"
}

#line 2184 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
#line 2187 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2189 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2191 "check_hlds.inst_match.c"
{
#line 2193 "check_hlds.inst_match.c"
  {
#line 2195 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2198 "check_hlds.inst_match.c"
    {
#line 2200 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_match_info_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2203 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2205 "check_hlds.inst_match.c"
  }
#line 2207 "check_hlds.inst_match.c"
}

#line 2210 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
#line 2213 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2215 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2217 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2219 "check_hlds.inst_match.c"
{
#line 2221 "check_hlds.inst_match.c"
  {
#line 2223 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2226 "check_hlds.inst_match.c"
    {
#line 2228 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_match_info_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2231 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2233 "check_hlds.inst_match.c"
  }
#line 2235 "check_hlds.inst_match.c"
}

#line 2238 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
#line 2241 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2243 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2245 "check_hlds.inst_match.c"
{
#line 2247 "check_hlds.inst_match.c"
  {
#line 2249 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2252 "check_hlds.inst_match.c"
    {
#line 2254 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_match_inputs_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2257 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2259 "check_hlds.inst_match.c"
  }
#line 2261 "check_hlds.inst_match.c"
}

#line 2264 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
#line 2267 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2269 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2271 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2273 "check_hlds.inst_match.c"
{
#line 2275 "check_hlds.inst_match.c"
  {
#line 2277 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2280 "check_hlds.inst_match.c"
    {
#line 2282 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_match_inputs_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2285 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2287 "check_hlds.inst_match.c"
  }
#line 2289 "check_hlds.inst_match.c"
}

#line 2292 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
#line 2295 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2297 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2299 "check_hlds.inst_match.c"
{
#line 2301 "check_hlds.inst_match.c"
  {
#line 2303 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2306 "check_hlds.inst_match.c"
    {
#line 2308 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_matches_pred_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2311 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2313 "check_hlds.inst_match.c"
  }
#line 2315 "check_hlds.inst_match.c"
}

#line 2318 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
#line 2321 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2323 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2325 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2327 "check_hlds.inst_match.c"
{
#line 2329 "check_hlds.inst_match.c"
  {
#line 2331 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2334 "check_hlds.inst_match.c"
    {
#line 2336 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_matches_pred_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2339 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2341 "check_hlds.inst_match.c"
  }
#line 2343 "check_hlds.inst_match.c"
}

#line 2346 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
#line 2349 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2351 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2353 "check_hlds.inst_match.c"
{
#line 2355 "check_hlds.inst_match.c"
  {
#line 2357 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2360 "check_hlds.inst_match.c"
    {
#line 2362 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____uniqueness_comparison_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2365 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2367 "check_hlds.inst_match.c"
  }
#line 2369 "check_hlds.inst_match.c"
}

#line 2372 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
#line 2375 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2377 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2379 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2381 "check_hlds.inst_match.c"
{
#line 2383 "check_hlds.inst_match.c"
  {
#line 2385 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2388 "check_hlds.inst_match.c"
    {
#line 2390 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____uniqueness_comparison_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2393 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2395 "check_hlds.inst_match.c"
  }
#line 2397 "check_hlds.inst_match.c"
}

#line 315 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_49_95_95_91_52_93_95_48_3_p_0(
#line 315 "inst_match.m"
  MR_Word check_hlds__inst_match__V_33_33,
#line 315 "inst_match.m"
  MR_Word check_hlds__inst_match__V_34_34,
#line 315 "inst_match.m"
  MR_Word check_hlds__inst_match__V_35_35,
#line 315 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_7,
#line 315 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_8)
#line 315 "inst_match.m"
{
#line 319 "inst_match.m"
  {
#line 319 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_9_9;
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_11_11;
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 319 "inst_match.m"
    MR_Word check_hlds__inst_match__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 323 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26;
#line 323 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27;
#line 323 "inst_match.m"
    MR_Word check_hlds__inst_match__V_28_28;
#line 323 "inst_match.m"
    MR_Word check_hlds__inst_match__V_30_30;
#line 323 "inst_match.m"
    MR_Word check_hlds__inst_match__V_31_31;
#line 323 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 323 "inst_match.m"
    MR_Word check_hlds__inst_match__V_29_29;

#line 338 "inst_match.m"
#line 338 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_6) {
#line 338 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 338 "inst_match.m"
      case (MR_Integer) 0:
#line 338 "inst_match.m"
        check_hlds__inst_match__V_10_10 = (MR_Integer) 1;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 2:
#line 340 "inst_match.m"
        check_hlds__inst_match__V_10_10 = (MR_Integer) 2;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 1:
#line 339 "inst_match.m"
        check_hlds__inst_match__V_10_10 = (MR_Integer) 0;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
    }
#line 321 "inst_match.m"
    {
#line 321 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 321 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 0) = ((MR_Box) (check_hlds__inst_match__V_13_13));
#line 321 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 1) = ((MR_Box) (check_hlds__inst_match__V_14_14));
#line 321 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 2) = ((MR_Box) (check_hlds__inst_match__V_15_15));
#line 321 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 3) = ((MR_Box) ((check_hlds__inst_match__V_10_10 | ((((check_hlds__inst_match__V_16_16 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_17_17 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_18_18 << (MR_Integer) 4)))))))));
#line 321 "inst_match.m"
    }
#line 322 "inst_match.m"
    {
#line 322 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__V_33_33, check_hlds__inst_match__V_34_34, check_hlds__inst_match__V_35_35, check_hlds__inst_match__STATE_VARIABLE_Info_9_9, &check_hlds__inst_match__STATE_VARIABLE_Info_11_11);
    }
#line 319 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 319 "inst_match.m"
      {
#line 323 "inst_match.m"
        check_hlds__inst_match__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 0)));
#line 323 "inst_match.m"
        check_hlds__inst_match__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 1)));
#line 323 "inst_match.m"
        check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 2)));
#line 323 "inst_match.m"
        check_hlds__inst_match__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 323 "inst_match.m"
        check_hlds__inst_match__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 323 "inst_match.m"
        check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 323 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 323 "inst_match.m"
        {
#line 323 "inst_match.m"
          MR_Word base;
#line 323 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 323 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_8 = base;
#line 323 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_26_26));
#line 323 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_27_27));
#line 323 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_28_28));
#line 323 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_6 | ((((check_hlds__inst_match__V_30_30 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_31_31 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_32_32 << (MR_Integer) 4)))))))));
#line 323 "inst_match.m"
        }
#line 323 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 319 "inst_match.m"
      }
#line 319 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 319 "inst_match.m"
  }
#line 315 "inst_match.m"
}

#line 209 "inst_match.m"
void MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_108_105_115_116_95_99_111_110_116_97_105_110_115_95_105_110_115_116_95_118_97_114_95_95_91_50_93_95_48_3_p_0(
#line 209 "inst_match.m"
  MR_Word check_hlds__inst_match__Modes_4,
#line 209 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_6,
#line 209 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 209 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 209 "inst_match.m"
{
#line 1588 "inst_match.m"
  {
#line 1588 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1588 "inst_match.m"
    {
#line 1588 "inst_match.m"
      check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_4, check_hlds__inst_match__InstVar_6, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
    }
#line 1588 "inst_match.m"
  }
#line 209 "inst_match.m"
}

#line 325 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho12_6_p_0(
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 325 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
#line 325 "inst_match.m"
{
#line 329 "inst_match.m"
  {
#line 329 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_34_34;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_36_36;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_37_37;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_35_35;

#line 338 "inst_match.m"
#line 338 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_12) {
#line 338 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 338 "inst_match.m"
      case (MR_Integer) 0:
#line 338 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 1;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 2:
#line 340 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 2;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 1:
#line 339 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 0;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
    }
#line 332 "inst_match.m"
    {
#line 332 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__V_16_16 | ((((check_hlds__inst_match__V_22_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_23_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_24_24 << (MR_Integer) 4)))))))));
#line 332 "inst_match.m"
    }
#line 333 "inst_match.m"
    {
#line 333 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
#line 329 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 329 "inst_match.m"
      {
#line 334 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        {
#line 334 "inst_match.m"
          MR_Word base;
#line 334 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 334 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_32_32));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_34_34));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__V_36_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 4)))))))));
#line 334 "inst_match.m"
        }
#line 334 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 329 "inst_match.m"
      }
#line 329 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 329 "inst_match.m"
  }
#line 325 "inst_match.m"
}

#line 325 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho11_6_p_0(
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 325 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
#line 325 "inst_match.m"
{
#line 329 "inst_match.m"
  {
#line 329 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_34_34;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_36_36;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_37_37;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_35_35;

#line 338 "inst_match.m"
#line 338 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_12) {
#line 338 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 338 "inst_match.m"
      case (MR_Integer) 0:
#line 338 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 1;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 2:
#line 340 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 2;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 1:
#line 339 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 0;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
    }
#line 332 "inst_match.m"
    {
#line 332 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__V_16_16 | ((((check_hlds__inst_match__V_22_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_23_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_24_24 << (MR_Integer) 4)))))))));
#line 332 "inst_match.m"
    }
#line 333 "inst_match.m"
    {
#line 333 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
#line 329 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 329 "inst_match.m"
      {
#line 334 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        {
#line 334 "inst_match.m"
          MR_Word base;
#line 334 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 334 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_32_32));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_34_34));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__V_36_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 4)))))))));
#line 334 "inst_match.m"
        }
#line 334 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 329 "inst_match.m"
      }
#line 329 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 329 "inst_match.m"
  }
#line 325 "inst_match.m"
}

#line 325 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho10_6_p_0(
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 325 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
#line 325 "inst_match.m"
{
#line 329 "inst_match.m"
  {
#line 329 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_34_34;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_36_36;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_37_37;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_35_35;

#line 338 "inst_match.m"
#line 338 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_12) {
#line 338 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 338 "inst_match.m"
      case (MR_Integer) 0:
#line 338 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 1;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 2:
#line 340 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 2;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 1:
#line 339 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 0;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
    }
#line 332 "inst_match.m"
    {
#line 332 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__V_16_16 | ((((check_hlds__inst_match__V_22_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_23_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_24_24 << (MR_Integer) 4)))))))));
#line 332 "inst_match.m"
    }
#line 333 "inst_match.m"
    {
#line 333 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
#line 329 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 329 "inst_match.m"
      {
#line 334 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        {
#line 334 "inst_match.m"
          MR_Word base;
#line 334 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 334 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_32_32));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_34_34));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__V_36_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 4)))))))));
#line 334 "inst_match.m"
        }
#line 334 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 329 "inst_match.m"
      }
#line 329 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 329 "inst_match.m"
  }
#line 325 "inst_match.m"
}

#line 325 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho9_6_p_0(
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 325 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 325 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
#line 325 "inst_match.m"
{
#line 329 "inst_match.m"
  {
#line 329 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_34_34;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_36_36;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_37_37;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 334 "inst_match.m"
    MR_Word check_hlds__inst_match__V_35_35;

#line 338 "inst_match.m"
#line 338 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_12) {
#line 338 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 338 "inst_match.m"
      case (MR_Integer) 0:
#line 338 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 1;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 2:
#line 340 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 2;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
      case (MR_Integer) 1:
#line 339 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 0;
#line 338 "inst_match.m"
        break;
#line 338 "inst_match.m"
    }
#line 332 "inst_match.m"
    {
#line 332 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 332 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__V_16_16 | ((((check_hlds__inst_match__V_22_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_23_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_24_24 << (MR_Integer) 4)))))))));
#line 332 "inst_match.m"
    }
#line 333 "inst_match.m"
    {
#line 333 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
#line 329 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 329 "inst_match.m"
      {
#line 334 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 334 "inst_match.m"
        check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 334 "inst_match.m"
        {
#line 334 "inst_match.m"
          MR_Word base;
#line 334 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 334 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_32_32));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_34_34));
#line 334 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__V_36_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 4)))))))));
#line 334 "inst_match.m"
        }
#line 334 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 329 "inst_match.m"
      }
#line 329 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 329 "inst_match.m"
  }
#line 325 "inst_match.m"
}

#line 410 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 410 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 410 "inst_match.m"
{
#line 410 "inst_match.m"
  {
#line 410 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 410 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 410 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 410 "inst_match.m"
    {
#line 410 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 410 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 410 "inst_match.m"
      {
#line 410 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 410 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
      }
#line 410 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 410 "inst_match.m"
  }
#line 410 "inst_match.m"
}

#line 367 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 367 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 367 "inst_match.m"
{
#line 374 "inst_match.m"
  {
#line 374 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 374 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 374 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 374 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 374 "inst_match.m"
      {
#line 374 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 374 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 380 "inst_match.m"
        {
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifyInst_17;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_19;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 381 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_18;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_42_42;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_43_43;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_44_44;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_45_45;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifySubInst_20;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__V_46_46;

#line 381 "inst_match.m"
          {
#line 381 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
#line 380 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
            {
#line 383 "inst_match.m"
              check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              {
#line 383 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_45_45 << (MR_Integer) 4)))))))));
#line 383 "inst_match.m"
              }
#line 409 "inst_match.m"
              if ((check_hlds__inst_match__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "inst_match.m"
                {
#line 412 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 412 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 412 "inst_match.m"
                }
#line 409 "inst_match.m"
              else
#line 409 "inst_match.m"
                {
#line 409 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_57_57;
#line 410 "inst_match.m"
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

#line 410 "inst_match.m"
                  {
#line 410 "inst_match.m"
                    check_hlds__inst_match__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 410 "inst_match.m"
                  }
#line 410 "inst_match.m"
                  {
#line 410 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_57_57, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
#line 410 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 410 "inst_match.m"
                    {
#line 410 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
#line 410 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
                    }
#line 409 "inst_match.m"
                }
#line 380 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
                {
#line 388 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
                    {
#line 388 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
#line 388 "inst_match.m"
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
#line 3379 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
#line 388 "inst_match.m"
                      {
#line 388 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__V_46_46)));
                      }
#line 388 "inst_match.m"
                    }
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 390 "inst_match.m"
                    {
#line 390 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 388 "inst_match.m"
                  else
#line 392 "inst_match.m"
                    {
#line 392 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 380 "inst_match.m"
                }
#line 380 "inst_match.m"
            }
#line 380 "inst_match.m"
        }
#line 374 "inst_match.m"
      }
#line 374 "inst_match.m"
    else
#line 394 "inst_match.m"
      {
#line 394 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 394 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 394 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 394 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 394 "inst_match.m"
          {
#line 394 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 394 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 395 "inst_match.m"
            {
#line 395 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 394 "inst_match.m"
          }
#line 394 "inst_match.m"
        else
#line 397 "inst_match.m"
          {
#line 397 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 394 "inst_match.m"
      }
#line 374 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 374 "inst_match.m"
  }
#line 367 "inst_match.m"
}

#line 410 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 410 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 410 "inst_match.m"
{
#line 410 "inst_match.m"
  {
#line 410 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 410 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 410 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 410 "inst_match.m"
    {
#line 410 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 410 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 410 "inst_match.m"
      {
#line 410 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 410 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
      }
#line 410 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 410 "inst_match.m"
  }
#line 410 "inst_match.m"
}

#line 367 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 367 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 367 "inst_match.m"
{
#line 374 "inst_match.m"
  {
#line 374 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 374 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 374 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 374 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 374 "inst_match.m"
      {
#line 374 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 374 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 380 "inst_match.m"
        {
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifyInst_17;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_19;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 381 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_18;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_42_42;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_43_43;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_44_44;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_45_45;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifySubInst_20;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__V_46_46;

#line 381 "inst_match.m"
          {
#line 381 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
#line 380 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
            {
#line 383 "inst_match.m"
              check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              {
#line 383 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_45_45 << (MR_Integer) 4)))))))));
#line 383 "inst_match.m"
              }
#line 409 "inst_match.m"
              if ((check_hlds__inst_match__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "inst_match.m"
                {
#line 412 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 412 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 412 "inst_match.m"
                }
#line 409 "inst_match.m"
              else
#line 409 "inst_match.m"
                {
#line 409 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_69_69;
#line 410 "inst_match.m"
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

#line 410 "inst_match.m"
                  {
#line 410 "inst_match.m"
                    check_hlds__inst_match__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 410 "inst_match.m"
                  }
#line 410 "inst_match.m"
                  {
#line 410 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_69_69, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
#line 410 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 410 "inst_match.m"
                    {
#line 410 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
#line 410 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
                    }
#line 409 "inst_match.m"
                }
#line 380 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
                {
#line 388 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
                    {
#line 388 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
#line 388 "inst_match.m"
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
#line 3678 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
#line 388 "inst_match.m"
                      {
#line 388 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__V_46_46)));
                      }
#line 388 "inst_match.m"
                    }
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 390 "inst_match.m"
                    {
#line 390 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 388 "inst_match.m"
                  else
#line 392 "inst_match.m"
                    {
#line 392 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 380 "inst_match.m"
                }
#line 380 "inst_match.m"
            }
#line 380 "inst_match.m"
        }
#line 374 "inst_match.m"
      }
#line 374 "inst_match.m"
    else
#line 394 "inst_match.m"
      {
#line 394 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 394 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 394 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 394 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 394 "inst_match.m"
          {
#line 394 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 394 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 395 "inst_match.m"
            {
#line 395 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 394 "inst_match.m"
          }
#line 394 "inst_match.m"
        else
#line 397 "inst_match.m"
          {
#line 397 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho9_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 394 "inst_match.m"
      }
#line 374 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 374 "inst_match.m"
  }
#line 367 "inst_match.m"
}

#line 410 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 410 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 410 "inst_match.m"
{
#line 410 "inst_match.m"
  {
#line 410 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 410 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 410 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 410 "inst_match.m"
    {
#line 410 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 410 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 410 "inst_match.m"
      {
#line 410 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 410 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
      }
#line 410 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 410 "inst_match.m"
  }
#line 410 "inst_match.m"
}

#line 367 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 367 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 367 "inst_match.m"
{
#line 374 "inst_match.m"
  {
#line 374 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 374 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 374 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 374 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 374 "inst_match.m"
      {
#line 374 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 374 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 380 "inst_match.m"
        {
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifyInst_17;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_19;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 381 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_18;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_42_42;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_43_43;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_44_44;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_45_45;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifySubInst_20;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__V_46_46;

#line 381 "inst_match.m"
          {
#line 381 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
#line 380 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
            {
#line 383 "inst_match.m"
              check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              {
#line 383 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_45_45 << (MR_Integer) 4)))))))));
#line 383 "inst_match.m"
              }
#line 409 "inst_match.m"
              if ((check_hlds__inst_match__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "inst_match.m"
                {
#line 412 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 412 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 412 "inst_match.m"
                }
#line 409 "inst_match.m"
              else
#line 409 "inst_match.m"
                {
#line 409 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_57_57;
#line 410 "inst_match.m"
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

#line 410 "inst_match.m"
                  {
#line 410 "inst_match.m"
                    check_hlds__inst_match__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 410 "inst_match.m"
                  }
#line 410 "inst_match.m"
                  {
#line 410 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_57_57, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
#line 410 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 410 "inst_match.m"
                    {
#line 410 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
#line 410 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
                    }
#line 409 "inst_match.m"
                }
#line 380 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
                {
#line 388 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
                    {
#line 388 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
#line 388 "inst_match.m"
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
#line 3977 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
#line 388 "inst_match.m"
                      {
#line 388 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__V_46_46)));
                      }
#line 388 "inst_match.m"
                    }
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 390 "inst_match.m"
                    {
#line 390 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 388 "inst_match.m"
                  else
#line 392 "inst_match.m"
                    {
#line 392 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 380 "inst_match.m"
                }
#line 380 "inst_match.m"
            }
#line 380 "inst_match.m"
        }
#line 374 "inst_match.m"
      }
#line 374 "inst_match.m"
    else
#line 394 "inst_match.m"
      {
#line 394 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 394 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 394 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 394 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 394 "inst_match.m"
          {
#line 394 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 394 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 395 "inst_match.m"
            {
#line 395 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 394 "inst_match.m"
          }
#line 394 "inst_match.m"
        else
#line 397 "inst_match.m"
          {
#line 397 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 394 "inst_match.m"
      }
#line 374 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 374 "inst_match.m"
  }
#line 367 "inst_match.m"
}

#line 410 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 410 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 410 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 410 "inst_match.m"
{
#line 410 "inst_match.m"
  {
#line 410 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 410 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 410 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 410 "inst_match.m"
    {
#line 410 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 410 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 410 "inst_match.m"
      {
#line 410 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 410 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
      }
#line 410 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 410 "inst_match.m"
  }
#line 410 "inst_match.m"
}

#line 367 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 367 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 367 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 367 "inst_match.m"
{
#line 374 "inst_match.m"
  {
#line 374 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 374 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 374 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 374 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 374 "inst_match.m"
      {
#line 374 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 374 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 380 "inst_match.m"
        {
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifyInst_17;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_19;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 380 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 381 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_18;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_42_42;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_43_43;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_44_44;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_45_45;
#line 383 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifySubInst_20;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
#line 388 "inst_match.m"
          MR_Word check_hlds__inst_match__V_46_46;

#line 381 "inst_match.m"
          {
#line 381 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
#line 380 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
            {
#line 383 "inst_match.m"
              check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 383 "inst_match.m"
              check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 383 "inst_match.m"
              {
#line 383 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 383 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_45_45 << (MR_Integer) 4)))))))));
#line 383 "inst_match.m"
              }
#line 409 "inst_match.m"
              if ((check_hlds__inst_match__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "inst_match.m"
                {
#line 412 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 412 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 412 "inst_match.m"
                }
#line 409 "inst_match.m"
              else
#line 409 "inst_match.m"
                {
#line 409 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_69_69;
#line 410 "inst_match.m"
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

#line 410 "inst_match.m"
                  {
#line 410 "inst_match.m"
                    check_hlds__inst_match__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
#line 410 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 410 "inst_match.m"
                  }
#line 410 "inst_match.m"
                  {
#line 410 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_69_69, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
#line 410 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 410 "inst_match.m"
                    {
#line 410 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
#line 410 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
                    }
#line 409 "inst_match.m"
                }
#line 380 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
                {
#line 388 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
                    {
#line 388 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
#line 388 "inst_match.m"
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
#line 4276 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
#line 388 "inst_match.m"
                      {
#line 388 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__V_46_46)));
                      }
#line 388 "inst_match.m"
                    }
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 390 "inst_match.m"
                    {
#line 390 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 388 "inst_match.m"
                  else
#line 392 "inst_match.m"
                    {
#line 392 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 380 "inst_match.m"
                }
#line 380 "inst_match.m"
            }
#line 380 "inst_match.m"
        }
#line 374 "inst_match.m"
      }
#line 374 "inst_match.m"
    else
#line 394 "inst_match.m"
      {
#line 394 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 394 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 394 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 394 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 394 "inst_match.m"
          {
#line 394 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 394 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 395 "inst_match.m"
            {
#line 395 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 394 "inst_match.m"
          }
#line 394 "inst_match.m"
        else
#line 397 "inst_match.m"
          {
#line 397 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho11_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 394 "inst_match.m"
      }
#line 374 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 374 "inst_match.m"
  }
#line 367 "inst_match.m"
}

#line 344 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 344 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 344 "inst_match.m"
{
#line 350 "inst_match.m"
  {
#line 350 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 350 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 356 "inst_match.m"
#line 356 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_14) {
#line 356 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 356 "inst_match.m"
      case (MR_Integer) 0:
#line 354 "inst_match.m"
        {
#line 354 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 356 "inst_match.m"
        break;
#line 356 "inst_match.m"
      case (MR_Integer) 2:
#line 364 "inst_match.m"
        {
#line 364 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 356 "inst_match.m"
        break;
#line 356 "inst_match.m"
      case (MR_Integer) 1:
#line 360 "inst_match.m"
        {
#line 360 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(check_hlds__inst_match__InstB_11, check_hlds__inst_match__InstA_10, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 356 "inst_match.m"
        break;
#line 356 "inst_match.m"
    }
#line 350 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 350 "inst_match.m"
  }
#line 344 "inst_match.m"
}

#line 344 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho2_7_p_0(
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 344 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 344 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 344 "inst_match.m"
{
#line 350 "inst_match.m"
  {
#line 350 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 350 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 351 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 356 "inst_match.m"
#line 356 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_14) {
#line 356 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 356 "inst_match.m"
      case (MR_Integer) 0:
#line 354 "inst_match.m"
        {
#line 354 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 356 "inst_match.m"
        break;
#line 356 "inst_match.m"
      case (MR_Integer) 2:
#line 364 "inst_match.m"
        {
#line 364 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 356 "inst_match.m"
        break;
#line 356 "inst_match.m"
      case (MR_Integer) 1:
#line 360 "inst_match.m"
        {
#line 360 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(check_hlds__inst_match__InstB_11, check_hlds__inst_match__InstA_10, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 356 "inst_match.m"
        break;
#line 356 "inst_match.m"
    }
#line 350 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 350 "inst_match.m"
  }
#line 344 "inst_match.m"
}

#line 265 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
#line 265 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 265 "inst_match.m"
{
#line 265 "inst_match.m"
  {
#line 265 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 265 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 265 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 265 "inst_match.m"
    {
#line 265 "inst_match.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
    }
#line 265 "inst_match.m"
  }
#line 265 "inst_match.m"
}

#line 265 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 265 "inst_match.m"
{
#line 4538 "check_hlds.inst_match.c"
  {
#line 4540 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

#line 4543 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 4545 "check_hlds.inst_match.c"
  }
#line 265 "inst_match.m"
}

#line 310 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
#line 310 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 310 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 310 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 310 "inst_match.m"
{
#line 310 "inst_match.m"
  {
#line 310 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 310 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
#line 310 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

#line 310 "inst_match.m"
    {
#line 310 "inst_match.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_3[0], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
    }
#line 310 "inst_match.m"
  }
#line 310 "inst_match.m"
}

#line 310 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
#line 310 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 310 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 310 "inst_match.m"
{
#line 310 "inst_match.m"
  {
#line 310 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 310 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
#line 310 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

#line 310 "inst_match.m"
    {
#line 310 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) check_hlds__inst_match__Cast_HeadVar1_3, (MR_Word) check_hlds__inst_match__Cast_HeadVar2_4);
    }
#line 310 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 310 "inst_match.m"
  }
#line 310 "inst_match.m"
}

#line 238 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
#line 238 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 238 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 238 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 238 "inst_match.m"
{
#line 238 "inst_match.m"
  {
#line 238 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 238 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_12 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 238 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_13 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 238 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_12 == check_hlds__inst_match__CastY_13);
#line 238 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 4634 "check_hlds.inst_match.c"
      *check_hlds__inst_match__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "inst_match.m"
    else
#line 238 "inst_match.m"
      {
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 2)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10;

#line 238 "inst_match.m"
        {
#line 238 "inst_match.m"
          parse_tree__prog_data____Compare____mer_inst_0_0(&check_hlds__inst_match__V_10_10, check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_7_7);
        }
#line 4660 "check_hlds.inst_match.c"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_10_10 == (MR_Integer) 0);
#line 238 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 238 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 238 "inst_match.m"
          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_10_10;
#line 238 "inst_match.m"
        else
#line 238 "inst_match.m"
          {
#line 238 "inst_match.m"
            MR_Word check_hlds__inst_match__V_11_11;

#line 238 "inst_match.m"
            {
#line 238 "inst_match.m"
              parse_tree__prog_data____Compare____mer_inst_0_0(&check_hlds__inst_match__V_11_11, check_hlds__inst_match__V_5_5, check_hlds__inst_match__V_8_8);
            }
#line 4680 "check_hlds.inst_match.c"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_11_11 == (MR_Integer) 0);
#line 238 "inst_match.m"
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 238 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 238 "inst_match.m"
              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_11_11;
#line 238 "inst_match.m"
            else
#line 238 "inst_match.m"
              {
#line 238 "inst_match.m"
                {
#line 238 "inst_match.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[1], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__V_6_6)), ((MR_Box) (check_hlds__inst_match__V_9_9)));
                }
#line 238 "inst_match.m"
              }
#line 238 "inst_match.m"
          }
#line 238 "inst_match.m"
      }
#line 238 "inst_match.m"
  }
#line 238 "inst_match.m"
}

#line 238 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
#line 238 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 238 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 238 "inst_match.m"
{
#line 238 "inst_match.m"
  {
#line 238 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 238 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_9 = (MR_Integer) check_hlds__inst_match__HeadVar__1_1;
#line 238 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_10 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;

#line 238 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_9 == check_hlds__inst_match__CastY_10);
#line 238 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 238 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 238 "inst_match.m"
    else
#line 238 "inst_match.m"
      {
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_13_13;
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));

#line 4751 "check_hlds.inst_match.c"
        {
#line 4753 "check_hlds.inst_match.c"
          check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__V_3_3, check_hlds__inst_match__V_6_6);
        }
#line 238 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 238 "inst_match.m"
          {
#line 4760 "check_hlds.inst_match.c"
            {
#line 4762 "check_hlds.inst_match.c"
              check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_7_7);
            }
#line 238 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 238 "inst_match.m"
              {
#line 4769 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_13_13 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 4771 "check_hlds.inst_match.c"
                {
#line 4773 "check_hlds.inst_match.c"
                  check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_13_13, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_8_8)));
                }
#line 238 "inst_match.m"
              }
#line 238 "inst_match.m"
          }
#line 238 "inst_match.m"
      }
#line 238 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 238 "inst_match.m"
  }
#line 238 "inst_match.m"
}

#line 274 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
#line 274 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 274 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 274 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 274 "inst_match.m"
{
#line 274 "inst_match.m"
  {
#line 274 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 274 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_24 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 274 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_25 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 274 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_24 == check_hlds__inst_match__CastY_25);
#line 274 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 4813 "check_hlds.inst_match.c"
      *check_hlds__inst_match__HeadVar__1_1 = (MR_Integer) 0;
#line 274 "inst_match.m"
    else
#line 274 "inst_match.m"
      {
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 2)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_18_18;

#line 274 "inst_match.m"
        {
#line 274 "inst_match.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__inst_match__V_18_18, check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_11_11);
        }
#line 4855 "check_hlds.inst_match.c"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_18_18 == (MR_Integer) 0);
#line 274 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 274 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_18_18;
#line 274 "inst_match.m"
        else
#line 274 "inst_match.m"
          {
#line 274 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19;

#line 274 "inst_match.m"
            {
#line 274 "inst_match.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], &check_hlds__inst_match__V_19_19, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_12_12)));
            }
#line 4875 "check_hlds.inst_match.c"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 0);
#line 274 "inst_match.m"
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 274 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_19_19;
#line 274 "inst_match.m"
            else
#line 274 "inst_match.m"
              {
#line 274 "inst_match.m"
                MR_Word check_hlds__inst_match__V_20_20;

#line 274 "inst_match.m"
                {
#line 274 "inst_match.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[3], &check_hlds__inst_match__V_20_20, ((MR_Box) (check_hlds__inst_match__V_6_6)), ((MR_Box) (check_hlds__inst_match__V_13_13)));
                }
#line 4895 "check_hlds.inst_match.c"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_20_20 == (MR_Integer) 0);
#line 274 "inst_match.m"
                check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 274 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
                  *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_20_20;
#line 274 "inst_match.m"
                else
#line 274 "inst_match.m"
                  {
#line 274 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_21_21;
#line 274 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_33_33 = (MR_Integer) check_hlds__inst_match__V_7_7;
#line 274 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_34_34 = (MR_Integer) check_hlds__inst_match__V_14_14;

#line 274 "inst_match.m"
                    {
#line 274 "inst_match.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__V_21_21, check_hlds__inst_match__V_33_33, check_hlds__inst_match__V_34_34);
                    }
#line 4919 "check_hlds.inst_match.c"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_21_21 == (MR_Integer) 0);
#line 274 "inst_match.m"
                    check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 274 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
                      *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_21_21;
#line 274 "inst_match.m"
                    else
#line 274 "inst_match.m"
                      {
#line 274 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_22_22;
#line 274 "inst_match.m"
                        MR_Integer check_hlds__inst_match__V_35_35 = (MR_Integer) check_hlds__inst_match__V_8_8;
#line 274 "inst_match.m"
                        MR_Integer check_hlds__inst_match__V_36_36 = (MR_Integer) check_hlds__inst_match__V_15_15;

#line 274 "inst_match.m"
                        {
#line 274 "inst_match.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__V_22_22, check_hlds__inst_match__V_35_35, check_hlds__inst_match__V_36_36);
                        }
#line 4943 "check_hlds.inst_match.c"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_22_22 == (MR_Integer) 0);
#line 274 "inst_match.m"
                        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 274 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
                          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_22_22;
#line 274 "inst_match.m"
                        else
#line 274 "inst_match.m"
                          {
#line 274 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_23_23;
#line 274 "inst_match.m"
                            MR_Integer check_hlds__inst_match__V_37_37 = (MR_Integer) check_hlds__inst_match__V_9_9;
#line 274 "inst_match.m"
                            MR_Integer check_hlds__inst_match__V_38_38 = (MR_Integer) check_hlds__inst_match__V_16_16;

#line 274 "inst_match.m"
                            {
#line 274 "inst_match.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__V_23_23, check_hlds__inst_match__V_37_37, check_hlds__inst_match__V_38_38);
                            }
#line 4967 "check_hlds.inst_match.c"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_23_23 == (MR_Integer) 0);
#line 274 "inst_match.m"
                            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 274 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
                              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_23_23;
#line 274 "inst_match.m"
                            else
#line 274 "inst_match.m"
                              {
#line 274 "inst_match.m"
                                MR_Integer check_hlds__inst_match__V_39_39 = (MR_Integer) check_hlds__inst_match__V_10_10;
#line 274 "inst_match.m"
                                MR_Integer check_hlds__inst_match__V_40_40 = (MR_Integer) check_hlds__inst_match__V_17_17;

#line 274 "inst_match.m"
                                {
#line 274 "inst_match.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__V_39_39, check_hlds__inst_match__V_40_40);
                                }
#line 274 "inst_match.m"
                              }
#line 274 "inst_match.m"
                          }
#line 274 "inst_match.m"
                      }
#line 274 "inst_match.m"
                  }
#line 274 "inst_match.m"
              }
#line 274 "inst_match.m"
          }
#line 274 "inst_match.m"
      }
#line 274 "inst_match.m"
  }
#line 274 "inst_match.m"
}

#line 274 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
#line 274 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 274 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 274 "inst_match.m"
{
#line 274 "inst_match.m"
  {
#line 274 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 274 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_17 = (MR_Integer) check_hlds__inst_match__HeadVar__1_1;
#line 274 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_18 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;

#line 274 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_17 == check_hlds__inst_match__CastY_18);
#line 274 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 274 "inst_match.m"
    else
#line 274 "inst_match.m"
      {
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_20_20;
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_21_21;
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 2)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 274 "inst_match.m"
        MR_Word check_hlds__inst_match__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 5069 "check_hlds.inst_match.c"
        {
#line 5071 "check_hlds.inst_match.c"
          check_hlds__inst_match__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__inst_match__V_3_3, check_hlds__inst_match__V_10_10);
        }
#line 274 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
          {
#line 5078 "check_hlds.inst_match.c"
            check_hlds__inst_match__TypeInfo_20_20 = (MR_Word) &check_hlds__inst_match_scalar_common_1[2];
#line 5080 "check_hlds.inst_match.c"
            {
#line 5082 "check_hlds.inst_match.c"
              check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_20_20, ((MR_Box) (check_hlds__inst_match__V_4_4)), ((MR_Box) (check_hlds__inst_match__V_11_11)));
            }
#line 274 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
              {
#line 5089 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_21_21 = (MR_Word) &check_hlds__inst_match_scalar_common_1[3];
#line 5091 "check_hlds.inst_match.c"
                {
#line 5093 "check_hlds.inst_match.c"
                  check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_21_21, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_12_12)));
                }
#line 274 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
                  {
#line 5100 "check_hlds.inst_match.c"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_6_6 == check_hlds__inst_match__V_13_13);
#line 274 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
                      {
#line 5106 "check_hlds.inst_match.c"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_7_7 == check_hlds__inst_match__V_14_14);
#line 274 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 274 "inst_match.m"
                          {
#line 5112 "check_hlds.inst_match.c"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_8_8 == check_hlds__inst_match__V_15_15);
#line 274 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 5116 "check_hlds.inst_match.c"
                              check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_9_9 == check_hlds__inst_match__V_16_16);
#line 274 "inst_match.m"
                          }
#line 274 "inst_match.m"
                      }
#line 274 "inst_match.m"
                  }
#line 274 "inst_match.m"
              }
#line 274 "inst_match.m"
          }
#line 274 "inst_match.m"
      }
#line 274 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 274 "inst_match.m"
  }
#line 274 "inst_match.m"
}

#line 113 "inst_match.m"
void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0(
#line 113 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 113 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 113 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 113 "inst_match.m"
{
#line 113 "inst_match.m"
  {
#line 113 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 113 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 113 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 113 "inst_match.m"
    {
#line 113 "inst_match.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
    }
#line 113 "inst_match.m"
  }
#line 113 "inst_match.m"
}

#line 113 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0(
#line 113 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 113 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 113 "inst_match.m"
{
#line 5176 "check_hlds.inst_match.c"
  {
#line 5178 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

#line 5181 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 5183 "check_hlds.inst_match.c"
  }
#line 113 "inst_match.m"
}

#line 245 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
#line 245 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 245 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 245 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 245 "inst_match.m"
{
#line 245 "inst_match.m"
  {
#line 245 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 245 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
#line 245 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

#line 245 "inst_match.m"
    {
#line 245 "inst_match.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
    }
#line 245 "inst_match.m"
  }
#line 245 "inst_match.m"
}

#line 245 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
#line 245 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 245 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 245 "inst_match.m"
{
#line 245 "inst_match.m"
  {
#line 245 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 245 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
#line 245 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

#line 245 "inst_match.m"
    {
#line 245 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_4)));
    }
#line 245 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 245 "inst_match.m"
  }
#line 245 "inst_match.m"
}

#line 287 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
#line 287 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 287 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 287 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 287 "inst_match.m"
{
#line 287 "inst_match.m"
  {
#line 287 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 287 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 287 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 287 "inst_match.m"
    {
#line 287 "inst_match.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
    }
#line 287 "inst_match.m"
  }
#line 287 "inst_match.m"
}

#line 287 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
#line 287 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 287 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 287 "inst_match.m"
{
#line 5287 "check_hlds.inst_match.c"
  {
#line 5289 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

#line 5292 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 5294 "check_hlds.inst_match.c"
  }
#line 287 "inst_match.m"
}

#line 1614 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
#line 1614 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_1,
#line 1614 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_2)
#line 1614 "inst_match.m"
{
#line 1616 "inst_match.m"
  {
#line 1616 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1619 "inst_match.m"
{
#define MR_PROC_LABEL check_hlds__inst_match__same_addr_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA =  check_hlds__inst_match__InstA_1 ;
	InstB =  check_hlds__inst_match__InstB_2 ;
		{
#line 1619 "inst_match.m"

    SUCCESS_INDICATOR = ((void *) InstA == (void *) InstB);

#line 5328 "check_hlds.inst_match.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1619 "inst_match.m"
	}
check_hlds__inst_match__succeeded  = SUCCESS_INDICATOR;
}
#line 1616 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1616 "inst_match.m"
  }
#line 1614 "inst_match.m"
}

#line 1602 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(
#line 1602 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1602 "inst_match.m"
{
#line 1602 "inst_match.m"
  {
#line 1602 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 1610 "inst_match.m"
    {
#line 1610 "inst_match.m"
      check_hlds__inst_match__inst_contains_inst_var_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr);
    }
#line 1602 "inst_match.m"
  }
#line 1602 "inst_match.m"
}

#line 1608 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_2(
#line 1608 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1608 "inst_match.m"
{
#line 1608 "inst_match.m"
  {
#line 1608 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 1608 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7);
#line 1608 "inst_match.m"
    {
#line 1608 "inst_match.m"
      check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(check_hlds__inst_match__env_ptr);
    }
#line 1608 "inst_match.m"
  }
#line 1608 "inst_match.m"
}

#line 1600 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0(
#line 1600 "inst_match.m"
  MR_Word check_hlds__inst_match__Mode_3,
#line 1600 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1600 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1600 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1600 "inst_match.m"
{
#line 1600 "inst_match.m"
  {
#line 1600 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s check_hlds__inst_match__env;

#line 1600 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4 = check_hlds__inst_match__InstVar_4;
#line 1600 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont = check_hlds__inst_match__cont;
#line 1600 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr = check_hlds__inst_match__cont_env_ptr;
#line 1602 "inst_match.m"
    {
#line 1602 "inst_match.m"
      MR_bool check_hlds__inst_match__succeeded;

#line 1606 "inst_match.m"
      if (((MR_tag((MR_Word) check_hlds__inst_match__Mode_3)) == (MR_mktag((MR_Integer) 0))))
#line 1604 "inst_match.m"
        {
#line 1604 "inst_match.m"
          MR_Word check_hlds__inst_match__Initial_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Mode_3, (MR_Integer) 0)));
#line 1604 "inst_match.m"
          MR_Word check_hlds__inst_match__Final_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Mode_3, (MR_Integer) 1)));

#line 1605 "inst_match.m"
          (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = check_hlds__inst_match__Initial_5;
#line 1605 "inst_match.m"
          {
#line 1605 "inst_match.m"
            check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(&check_hlds__inst_match__env);
          }
#line 1605 "inst_match.m"
          (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = check_hlds__inst_match__Final_6;
#line 1605 "inst_match.m"
          {
#line 1605 "inst_match.m"
            check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(&check_hlds__inst_match__env);
          }
#line 1604 "inst_match.m"
        }
#line 1606 "inst_match.m"
      else
#line 1607 "inst_match.m"
        {
#line 1607 "inst_match.m"
          MR_Word check_hlds__inst_match__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Mode_3, (MR_Integer) 1)));
#line 1607 "inst_match.m"
          MR_Word check_hlds__inst_match___Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Mode_3, (MR_Integer) 0)));

#line 1608 "inst_match.m"
          {
#line 1608 "inst_match.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7, check_hlds__inst_match__Insts_9, check_hlds__inst_match__mode_contains_inst_var_2_p_0_2, &check_hlds__inst_match__env);
          }
#line 1607 "inst_match.m"
        }
#line 1602 "inst_match.m"
    }
#line 1600 "inst_match.m"
  }
#line 1600 "inst_match.m"
}

#line 1590 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(
#line 1590 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1590 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1590 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1590 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1590 "inst_match.m"
{
#line 1593 "inst_match.m"
  while (MR_TRUE)
#line 1593 "inst_match.m"
    {
#line 1593 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1593 "inst_match.m"
      {
#line 1593 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1593 "inst_match.m"
        MR_Word check_hlds__inst_match__Mode_3;
#line 1593 "inst_match.m"
        MR_Word check_hlds__inst_match__Modes_4;

#line 1593 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1593 "inst_match.m"
          {
#line 1593 "inst_match.m"
            check_hlds__inst_match__Mode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1593 "inst_match.m"
            check_hlds__inst_match__Modes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1595 "inst_match.m"
            {
#line 1595 "inst_match.m"
              check_hlds__inst_match__mode_contains_inst_var_2_p_0(check_hlds__inst_match__Mode_3, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 1597 "inst_match.m"
            {
#line 1597 "inst_match.m"
              /* direct tailcall eliminated */
#line 1597 "inst_match.m"
              {
#line 1597 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Modes_4;

#line 1597 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1597 "inst_match.m"
              }
#line 1597 "inst_match.m"
              continue;
#line 1597 "inst_match.m"
            }
#line 1593 "inst_match.m"
          }
#line 1593 "inst_match.m"
      }
#line 1593 "inst_match.m"
      break;
#line 1593 "inst_match.m"
    }
#line 1590 "inst_match.m"
}

#line 1577 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
#line 1577 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1577 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1577 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1577 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1577 "inst_match.m"
{
#line 1580 "inst_match.m"
  while (MR_TRUE)
#line 1580 "inst_match.m"
    {
#line 1580 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1580 "inst_match.m"
      {
#line 1580 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1580 "inst_match.m"
        MR_Word check_hlds__inst_match__Inst_3;
#line 1580 "inst_match.m"
        MR_Word check_hlds__inst_match__Insts_4;

#line 1580 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1580 "inst_match.m"
          {
#line 1580 "inst_match.m"
            check_hlds__inst_match__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1580 "inst_match.m"
            check_hlds__inst_match__Insts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1582 "inst_match.m"
            {
#line 1582 "inst_match.m"
              check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__Inst_3, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 1584 "inst_match.m"
            {
#line 1584 "inst_match.m"
              /* direct tailcall eliminated */
#line 1584 "inst_match.m"
              {
#line 1584 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_4;

#line 1584 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1584 "inst_match.m"
              }
#line 1584 "inst_match.m"
              continue;
#line 1584 "inst_match.m"
            }
#line 1580 "inst_match.m"
          }
#line 1580 "inst_match.m"
      }
#line 1580 "inst_match.m"
      break;
#line 1580 "inst_match.m"
    }
#line 1577 "inst_match.m"
}

#line 1566 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
#line 1566 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1566 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1566 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1566 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1566 "inst_match.m"
{
#line 1569 "inst_match.m"
  while (MR_TRUE)
#line 1569 "inst_match.m"
    {
#line 1569 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1569 "inst_match.m"
      {
#line 1569 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1569 "inst_match.m"
        MR_Word check_hlds__inst_match__BoundInst_3;
#line 1569 "inst_match.m"
        MR_Word check_hlds__inst_match__BoundInsts_4;
#line 1569 "inst_match.m"
        MR_Word check_hlds__inst_match__ArgInsts_7;
#line 1570 "inst_match.m"
        MR_Word check_hlds__inst_match___Functor_6;

#line 1569 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1569 "inst_match.m"
          {
#line 1569 "inst_match.m"
            check_hlds__inst_match__BoundInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1569 "inst_match.m"
            check_hlds__inst_match__BoundInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1570 "inst_match.m"
            check_hlds__inst_match___Functor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_3, (MR_Integer) 0)));
#line 1570 "inst_match.m"
            check_hlds__inst_match__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_3, (MR_Integer) 1)));
#line 1572 "inst_match.m"
            {
#line 1572 "inst_match.m"
              check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_7, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 1574 "inst_match.m"
            {
#line 1574 "inst_match.m"
              /* direct tailcall eliminated */
#line 1574 "inst_match.m"
              {
#line 1574 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_4;

#line 1574 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1574 "inst_match.m"
              }
#line 1574 "inst_match.m"
              continue;
#line 1574 "inst_match.m"
            }
#line 1569 "inst_match.m"
          }
#line 1569 "inst_match.m"
      }
#line 1569 "inst_match.m"
      break;
#line 1569 "inst_match.m"
    }
#line 1566 "inst_match.m"
}

#line 1544 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_2(
#line 1544 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1544 "inst_match.m"
{
#line 1544 "inst_match.m"
  {
#line 1544 "inst_match.m"
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 1544 "inst_match.m"
    *((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4);
#line 1544 "inst_match.m"
    {
#line 1544 "inst_match.m"
      check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(check_hlds__inst_match__env_ptr);
    }
#line 1544 "inst_match.m"
  }
#line 1544 "inst_match.m"
}

#line 1543 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_3(
#line 1543 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1543 "inst_match.m"
{
#line 1543 "inst_match.m"
  {
#line 1543 "inst_match.m"
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 5718 "check_hlds.inst_match.c"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &check_hlds__inst_match_scalar_common_1[0];
#line 1548 "inst_match.m"
    {
#line 1548 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28, ((MR_Box) (*((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4))), ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__V_27_27)));
    }
#line 1548 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded)
#line 1548 "inst_match.m"
      {
#line 1548 "inst_match.m"
        ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont)((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
      }
#line 1543 "inst_match.m"
  }
#line 1543 "inst_match.m"
}

#line 1543 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(
#line 1543 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1543 "inst_match.m"
{
#line 1543 "inst_match.m"
  {
#line 1543 "inst_match.m"
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 1548 "inst_match.m"
    {
#line 1548 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__V_27_27, check_hlds__inst_match__inst_contains_inst_var_2_p_0_3, check_hlds__inst_match__env_ptr);
    }
#line 1543 "inst_match.m"
  }
#line 1543 "inst_match.m"
}

#line 1527 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
#line 1527 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_3,
#line 1527 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1527 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1527 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1527 "inst_match.m"
{
#line 1527 "inst_match.m"
  {
#line 1527 "inst_match.m"
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s check_hlds__inst_match__env;

#line 1527 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4 = check_hlds__inst_match__InstVar_4;
#line 1527 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont = check_hlds__inst_match__cont;
#line 1527 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr = check_hlds__inst_match__cont_env_ptr;
#line 1531 "inst_match.m"
#line 1531 "inst_match.m"
    switch (MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) {
#line 1531 "inst_match.m"
      case (MR_Integer) 3:
#line 1531 "inst_match.m"
#line 1531 "inst_match.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) {
#line 1531 "inst_match.m"
          case (MR_Integer) 0:
#line 1536 "inst_match.m"
            {
#line 1536 "inst_match.m"
              MR_Word check_hlds__inst_match__InstResults_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 1536 "inst_match.m"
              MR_Word check_hlds__inst_match___Uniq_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 1536 "inst_match.m"
              (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 3)));
#line 1540 "inst_match.m"
              if ((check_hlds__inst_match__InstResults_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1555 "inst_match.m"
                {
#line 1555 "inst_match.m"
                  check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                }
#line 1540 "inst_match.m"
              else
#line 1540 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__InstResults_7)) == (MR_mktag((MR_Integer) 1))))
#line 1541 "inst_match.m"
                {
#line 1541 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstVarResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 3)));
#line 1541 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 0)));
#line 1541 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 1)));
#line 1541 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 2)));
#line 1541 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 4)));
#line 1541 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 5)));

#line 1549 "inst_match.m"
                  if ((check_hlds__inst_match__InstVarResult_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1551 "inst_match.m"
                    {
#line 1551 "inst_match.m"
                      check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                    }
#line 1549 "inst_match.m"
                  else
#line 1543 "inst_match.m"
                    {
#line 1543 "inst_match.m"
                      MR_Word check_hlds__inst_match__InstVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstVarResult_12, (MR_Integer) 0)));

#line 1544 "inst_match.m"
                      {
#line 1544 "inst_match.m"
                        mercury__set__member_2_p_1((MR_Word) &check_hlds__inst_match_scalar_common_1[0], &(check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4, check_hlds__inst_match__InstVars_15, check_hlds__inst_match__inst_contains_inst_var_2_p_0_2, &check_hlds__inst_match__env);
                      }
#line 1543 "inst_match.m"
                    }
#line 1541 "inst_match.m"
                }
#line 1540 "inst_match.m"
              else
#line 1540 "inst_match.m"
                {
#line 1540 "inst_match.m"
                }
#line 1536 "inst_match.m"
            }
#line 1531 "inst_match.m"
            break;
#line 1531 "inst_match.m"
          case (MR_Integer) 1:
#line 1558 "inst_match.m"
            {
#line 1558 "inst_match.m"
              MR_Word check_hlds__inst_match__HOInstInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 1558 "inst_match.m"
              MR_Word check_hlds__inst_match__Modes_18;
#line 1558 "inst_match.m"
              MR_Word check_hlds__inst_match__V_23_23;
#line 1558 "inst_match.m"
              MR_Word check_hlds__inst_match___Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
#line 1559 "inst_match.m"
              MR_Word check_hlds__inst_match___PredOrFunc_17;
#line 1559 "inst_match.m"
              MR_Word check_hlds__inst_match__V_19_19;
#line 1559 "inst_match.m"
              MR_Word check_hlds__inst_match___Det_20;

#line 1559 "inst_match.m"
              (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HOInstInfo_16)) == (MR_mktag((MR_Integer) 1)));
#line 1559 "inst_match.m"
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded)
#line 1559 "inst_match.m"
                {
#line 1559 "inst_match.m"
                  check_hlds__inst_match__V_23_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_16), (MR_Integer) 1);
#line 1559 "inst_match.m"
                  check_hlds__inst_match___PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 0)));
#line 1559 "inst_match.m"
                  check_hlds__inst_match__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 1)));
#line 1559 "inst_match.m"
                  check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 2)));
#line 1559 "inst_match.m"
                  check_hlds__inst_match___Det_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 3)));
#line 1560 "inst_match.m"
                  {
#line 1560 "inst_match.m"
                    check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_18, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                  }
#line 1559 "inst_match.m"
                }
#line 1558 "inst_match.m"
            }
#line 1531 "inst_match.m"
            break;
#line 1531 "inst_match.m"
          case (MR_Integer) 2:
#line 1531 "inst_match.m"
            {
#line 1531 "inst_match.m"
              *((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
#line 1531 "inst_match.m"
              {
#line 1531 "inst_match.m"
                ((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont)((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
#line 1531 "inst_match.m"
            }
#line 1531 "inst_match.m"
            break;
#line 1531 "inst_match.m"
          case (MR_Integer) 4:
#line 1533 "inst_match.m"
            {
#line 1533 "inst_match.m"
              MR_Word check_hlds__inst_match__InstName_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 1534 "inst_match.m"
              {
#line 1534 "inst_match.m"
                check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(check_hlds__inst_match__InstName_5, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
#line 1533 "inst_match.m"
            }
#line 1531 "inst_match.m"
            break;
#line 1531 "inst_match.m"
          case (MR_Integer) 5:
#line 1562 "inst_match.m"
            {
#line 1562 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 1562 "inst_match.m"
              MR_Word check_hlds__inst_match___Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 1563 "inst_match.m"
              {
#line 1563 "inst_match.m"
                check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_22, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
#line 1562 "inst_match.m"
            }
#line 1531 "inst_match.m"
            break;
#line 1531 "inst_match.m"
        }
#line 1531 "inst_match.m"
        break;
#line 1531 "inst_match.m"
    }
#line 1527 "inst_match.m"
  }
#line 1527 "inst_match.m"
}

#line 1490 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
#line 1490 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_3,
#line 1490 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1490 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1490 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1490 "inst_match.m"
{
#line 1497 "inst_match.m"
  while (MR_TRUE)
#line 1497 "inst_match.m"
    {
#line 1497 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1497 "inst_match.m"
      {
#line 1497 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1497 "inst_match.m"
#line 1497 "inst_match.m"
        switch (MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) {
#line 1497 "inst_match.m"
          case (MR_Integer) 0:
#line 1495 "inst_match.m"
            {
#line 1495 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 1495 "inst_match.m"
              MR_Word check_hlds__inst_match___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));

#line 1496 "inst_match.m"
              {
#line 1496 "inst_match.m"
                check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_6, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1495 "inst_match.m"
            }
#line 1497 "inst_match.m"
            break;
#line 1497 "inst_match.m"
          case (MR_Integer) 1:
#line 1503 "inst_match.m"
            {
#line 1503 "inst_match.m"
              MR_Word check_hlds__inst_match__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 2)));
#line 1503 "inst_match.m"
              MR_Word check_hlds__inst_match__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 3)));
#line 1503 "inst_match.m"
              MR_Word check_hlds__inst_match___Live_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));
#line 1503 "inst_match.m"
              MR_Word check_hlds__inst_match___Real_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1504 "inst_match.m"
              {
#line 1504 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstA_14, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1505 "inst_match.m"
              {
#line 1505 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstB_15, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1503 "inst_match.m"
            }
#line 1497 "inst_match.m"
            break;
#line 1497 "inst_match.m"
          case (MR_Integer) 2:
#line 1498 "inst_match.m"
            {
#line 1498 "inst_match.m"
              MR_Word check_hlds__inst_match__InstA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));
#line 1498 "inst_match.m"
              MR_Word check_hlds__inst_match__InstB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1499 "inst_match.m"
              {
#line 1499 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstA_7, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1500 "inst_match.m"
              {
#line 1500 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstB_8, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1498 "inst_match.m"
            }
#line 1497 "inst_match.m"
            break;
#line 1497 "inst_match.m"
          case (MR_Integer) 3:
#line 1497 "inst_match.m"
#line 1497 "inst_match.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 0)))) {
#line 1497 "inst_match.m"
              case (MR_Integer) 0:
#line 1508 "inst_match.m"
                {
#line 1508 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 1508 "inst_match.m"
                  MR_Word check_hlds__inst_match___Uniq_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1508 "inst_match.m"
                  MR_Word check_hlds__inst_match___Live_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1508 "inst_match.m"
                  MR_Word check_hlds__inst_match___Real_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1509 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1509 "inst_match.m"
                  {
#line 1509 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_11;

#line 1509 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1509 "inst_match.m"
                  }
#line 1509 "inst_match.m"
                  continue;
#line 1508 "inst_match.m"
                }
#line 1497 "inst_match.m"
                break;
#line 1497 "inst_match.m"
              case (MR_Integer) 1:
#line 1511 "inst_match.m"
                {
#line 1511 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 1511 "inst_match.m"
                  MR_Word check_hlds__inst_match___Live_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1511 "inst_match.m"
                  MR_Word check_hlds__inst_match___Real_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1511 "inst_match.m"
                  MR_Word check_hlds__inst_match___Uniq_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1512 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1512 "inst_match.m"
                  {
#line 1512 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_25;

#line 1512 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1512 "inst_match.m"
                  }
#line 1512 "inst_match.m"
                  continue;
#line 1511 "inst_match.m"
                }
#line 1497 "inst_match.m"
                break;
#line 1497 "inst_match.m"
              case (MR_Integer) 2:
#line 1514 "inst_match.m"
                {
#line 1514 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1515 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1515 "inst_match.m"
                  {
#line 1515 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_27;

#line 1515 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1515 "inst_match.m"
                  }
#line 1515 "inst_match.m"
                  continue;
#line 1514 "inst_match.m"
                }
#line 1497 "inst_match.m"
                break;
#line 1497 "inst_match.m"
              case (MR_Integer) 3:
#line 1517 "inst_match.m"
                {
#line 1517 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1518 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1518 "inst_match.m"
                  {
#line 1518 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_28;

#line 1518 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1518 "inst_match.m"
                  }
#line 1518 "inst_match.m"
                  continue;
#line 1517 "inst_match.m"
                }
#line 1497 "inst_match.m"
                break;
#line 1497 "inst_match.m"
              case (MR_Integer) 5:
#line 1523 "inst_match.m"
                {
#line 1523 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)));
#line 1523 "inst_match.m"
                  MR_Word check_hlds__inst_match___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1524 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1524 "inst_match.m"
                  {
#line 1524 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_32;

#line 1524 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1524 "inst_match.m"
                  }
#line 1524 "inst_match.m"
                  continue;
#line 1523 "inst_match.m"
                }
#line 1497 "inst_match.m"
                break;
#line 1497 "inst_match.m"
            }
#line 1497 "inst_match.m"
            break;
#line 1497 "inst_match.m"
        }
#line 1497 "inst_match.m"
      }
#line 1497 "inst_match.m"
      break;
#line 1497 "inst_match.m"
    }
#line 1490 "inst_match.m"
}

#line 1458 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
#line 1458 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1458 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1458 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1458 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1458 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1458 "inst_match.m"
{
#line 1462 "inst_match.m"
  while (MR_TRUE)
#line 1462 "inst_match.m"
    {
#line 1462 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1462 "inst_match.m"
      {
#line 1462 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1462 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1462 "inst_match.m"
          {
#line 1462 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1462 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1462 "inst_match.m"
              {
#line 1462 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1462 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1462 "inst_match.m"
                  {
#line 1462 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1462 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1462 "inst_match.m"
                  }
#line 1462 "inst_match.m"
              }
#line 1462 "inst_match.m"
          }
#line 1462 "inst_match.m"
        else
#line 1464 "inst_match.m"
          {
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeAs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeB_11;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeBs_12;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo_16;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__InitialA_17;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__FinalA0_18;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__InitialB_19;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__FinalB_20;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__FinalA_21;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_25_25;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 1464 "inst_match.m"
            MR_Word check_hlds__inst_match__V_58_58;
#line 1465 "inst_match.m"
            MR_Word check_hlds__inst_match__V_28_28;
#line 1465 "inst_match.m"
            MR_Word check_hlds__inst_match__V_29_29;
#line 1465 "inst_match.m"
            MR_Word check_hlds__inst_match__V_30_30;
#line 1465 "inst_match.m"
            MR_Word check_hlds__inst_match__V_31_31;
#line 1465 "inst_match.m"
            MR_Word check_hlds__inst_match__V_32_32;
#line 1465 "inst_match.m"
            MR_Word check_hlds__inst_match__V_33_33;
#line 1481 "inst_match.m"
            MR_Word check_hlds__inst_match__V_54_54;
#line 1481 "inst_match.m"
            MR_Word check_hlds__inst_match__V_55_55;
#line 1481 "inst_match.m"
            MR_Word check_hlds__inst_match__V_56_56;
#line 1481 "inst_match.m"
            MR_Word check_hlds__inst_match__V_57_57;
#line 1481 "inst_match.m"
            MR_Word check_hlds__inst_match__V_59_59;
#line 1481 "inst_match.m"
            MR_Word check_hlds__inst_match__V_60_60;

#line 1463 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1463 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1463 "inst_match.m"
              {
#line 1463 "inst_match.m"
                check_hlds__inst_match__ModeB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1463 "inst_match.m"
                check_hlds__inst_match__ModeBs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1464 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1464 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1464 "inst_match.m"
                  {
#line 1464 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 1464 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 1465 "inst_match.m"
                    check_hlds__inst_match__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1465 "inst_match.m"
                    check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1465 "inst_match.m"
                    check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1465 "inst_match.m"
                    check_hlds__inst_match__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1465 "inst_match.m"
                    check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1465 "inst_match.m"
                    check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1465 "inst_match.m"
                    check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1466 "inst_match.m"
                    {
#line 1466 "inst_match.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__inst_match__ModuleInfo_16, check_hlds__inst_match__ModeA_9, &check_hlds__inst_match__InitialA_17, &check_hlds__inst_match__FinalA0_18);
                    }
#line 1467 "inst_match.m"
                    {
#line 1467 "inst_match.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__inst_match__ModuleInfo_16, check_hlds__inst_match__ModeB_11, &check_hlds__inst_match__InitialB_19, &check_hlds__inst_match__FinalB_20);
                    }
#line 1469 "inst_match.m"
                    {
#line 1469 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_49_95_95_91_52_93_95_48_3_p_0(check_hlds__inst_match__InitialB_19, check_hlds__inst_match__InitialA_17, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_25_25);
                    }
#line 1464 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1464 "inst_match.m"
                      {
#line 1481 "inst_match.m"
                        check_hlds__inst_match__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1481 "inst_match.m"
                        check_hlds__inst_match__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 1481 "inst_match.m"
                        check_hlds__inst_match__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1481 "inst_match.m"
                        check_hlds__inst_match__V_57_57 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1481 "inst_match.m"
                        check_hlds__inst_match__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1481 "inst_match.m"
                        check_hlds__inst_match__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1481 "inst_match.m"
                        check_hlds__inst_match__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1481 "inst_match.m"
                        if ((check_hlds__inst_match__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1485 "inst_match.m"
                          check_hlds__inst_match__FinalA_21 = check_hlds__inst_match__FinalA0_18;
#line 1481 "inst_match.m"
                        else
#line 1481 "inst_match.m"
                          {
#line 1481 "inst_match.m"
                            MR_Word check_hlds__inst_match__Subst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_58_58, (MR_Integer) 0)));

#line 1482 "inst_match.m"
                            {
#line 1482 "inst_match.m"
                              parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__inst_match__Subst_39, check_hlds__inst_match__FinalA0_18, &check_hlds__inst_match__FinalA_21);
                            }
#line 1481 "inst_match.m"
                          }
#line 1473 "inst_match.m"
                        {
#line 1473 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__FinalA_21, check_hlds__inst_match__FinalB_20, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_25_25, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                        }
#line 1464 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1474 "inst_match.m"
                          {
#line 1474 "inst_match.m"
                            /* direct tailcall eliminated */
#line 1474 "inst_match.m"
                            {
#line 1474 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ModeAs_10;
#line 1474 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ModeBs_12;
#line 1474 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 1474 "inst_match.m"
                              MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 1474 "inst_match.m"
                              check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1474 "inst_match.m"
                              check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 1474 "inst_match.m"
                              check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1474 "inst_match.m"
                              check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1474 "inst_match.m"
                            }
#line 1474 "inst_match.m"
                            continue;
#line 1474 "inst_match.m"
                          }
#line 1464 "inst_match.m"
                      }
#line 1464 "inst_match.m"
                  }
#line 1463 "inst_match.m"
              }
#line 1464 "inst_match.m"
          }
#line 1462 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1462 "inst_match.m"
      }
#line 1462 "inst_match.m"
      break;
#line 1462 "inst_match.m"
    }
#line 1458 "inst_match.m"
}

#line 1434 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_2_5_p_0(
#line 1434 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInstA_6,
#line 1434 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInstB_7,
#line 1434 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1434 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_17,
#line 1434 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_18)
#line 1434 "inst_match.m"
{
#line 1437 "inst_match.m"
  {
#line 1437 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1437 "inst_match.m"
    MR_Word check_hlds__inst_match__TypeCtorInfo_21_21;
#line 1437 "inst_match.m"
    MR_Word check_hlds__inst_match__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_6, (MR_Integer) 0)));
#line 1437 "inst_match.m"
    MR_Word check_hlds__inst_match__ModesA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_6, (MR_Integer) 1)));
#line 1437 "inst_match.m"
    MR_Word check_hlds__inst_match__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_6, (MR_Integer) 3)));
#line 1437 "inst_match.m"
    MR_Word check_hlds__inst_match__ModesB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_7, (MR_Integer) 1)));
#line 1437 "inst_match.m"
    MR_Word check_hlds__inst_match__MaybeTypes_16;
#line 1437 "inst_match.m"
    MR_Integer check_hlds__inst_match__V_19_19;
#line 1437 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_7, (MR_Integer) 0)));
#line 1437 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_7, (MR_Integer) 3)));
#line 1441 "inst_match.m"
    MR_Word check_hlds__inst_match___MaybeArgRegsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_6, (MR_Integer) 2)));
#line 1442 "inst_match.m"
    MR_Word check_hlds__inst_match___MaybeArgRegsB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_7, (MR_Integer) 2)));

#line 1442 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_10 == check_hlds__inst_match__V_22_22);
#line 1437 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 1437 "inst_match.m"
      {
#line 1442 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_13 == check_hlds__inst_match__V_23_23);
#line 1437 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1437 "inst_match.m"
          {
#line 6521 "check_hlds.inst_match.c"
            check_hlds__inst_match__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1443 "inst_match.m"
            {
#line 1443 "inst_match.m"
              check_hlds__inst_match__V_19_19 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_21, check_hlds__inst_match__ModesA_11);
            }
#line 1443 "inst_match.m"
            {
#line 1443 "inst_match.m"
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_19_19, &check_hlds__inst_match__MaybeTypes_16);
            }
#line 1444 "inst_match.m"
            {
#line 1444 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_11, check_hlds__inst_match__ModesB_14, check_hlds__inst_match__MaybeTypes_16, check_hlds__inst_match__STATE_VARIABLE_Info_0_17, check_hlds__inst_match__STATE_VARIABLE_Info_18);
            }
#line 1437 "inst_match.m"
          }
#line 1437 "inst_match.m"
      }
#line 1437 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1437 "inst_match.m"
  }
#line 1434 "inst_match.m"
}

#line 1400 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(
#line 1400 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInst_5,
#line 1400 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_6,
#line 1400 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_14,
#line 1400 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_15)
#line 1400 "inst_match.m"
{
#line 1403 "inst_match.m"
  {
#line 1403 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1403 "inst_match.m"
    MR_Word check_hlds__inst_match__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 0)));
#line 1403 "inst_match.m"
    MR_Word check_hlds__inst_match__ArgModes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 1)));
#line 1404 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 2)));
#line 1404 "inst_match.m"
    MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_5, (MR_Integer) 3)));

#line 1407 "inst_match.m"
#line 1407 "inst_match.m"
    switch (check_hlds__inst_match__PredOrFunc_8) {
#line 1407 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1407 "inst_match.m"
      case (MR_Integer) 1:
#line 1408 "inst_match.m"
        {
#line 1408 "inst_match.m"
          MR_Integer check_hlds__inst_match__Arity_12;
#line 1408 "inst_match.m"
          MR_Word check_hlds__inst_match__DefaultFunc_13;

#line 1409 "inst_match.m"
          {
#line 1409 "inst_match.m"
            check_hlds__inst_match__Arity_12 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__inst_match__ArgModes_9);
          }
#line 1410 "inst_match.m"
          {
#line 1410 "inst_match.m"
            check_hlds__inst_match__DefaultFunc_13 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_12);
          }
#line 1411 "inst_match.m"
          {
#line 1411 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(check_hlds__inst_match__PredInst_5, check_hlds__inst_match__DefaultFunc_13, check_hlds__inst_match__MaybeType_6, check_hlds__inst_match__STATE_VARIABLE_Info_0_14, check_hlds__inst_match__STATE_VARIABLE_Info_15);
          }
#line 1408 "inst_match.m"
        }
#line 1407 "inst_match.m"
        break;
#line 1407 "inst_match.m"
      case (MR_Integer) 0:
#line 1406 "inst_match.m"
        {
#line 1406 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_15 = check_hlds__inst_match__STATE_VARIABLE_Info_0_14;
#line 1406 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1406 "inst_match.m"
        }
#line 1407 "inst_match.m"
        break;
#line 1407 "inst_match.m"
    }
#line 1403 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1403 "inst_match.m"
  }
#line 1400 "inst_match.m"
}

#line 1378 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(
#line 1378 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfo_5,
#line 1378 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_6,
#line 1378 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_9,
#line 1378 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_10)
#line 1378 "inst_match.m"
{
#line 1383 "inst_match.m"
  {
#line 1383 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1383 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1386 "inst_match.m"
      {
#line 1386 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_10 = check_hlds__inst_match__STATE_VARIABLE_Info_0_9;
#line 1386 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1386 "inst_match.m"
      }
#line 1383 "inst_match.m"
    else
#line 1383 "inst_match.m"
      {
#line 1383 "inst_match.m"
        MR_Word check_hlds__inst_match__PredInst_8 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_5), (MR_Integer) 1);

#line 1384 "inst_match.m"
        {
#line 1384 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(check_hlds__inst_match__PredInst_8, check_hlds__inst_match__MaybeType_6, check_hlds__inst_match__STATE_VARIABLE_Info_0_9, check_hlds__inst_match__STATE_VARIABLE_Info_10);
        }
#line 1383 "inst_match.m"
      }
#line 1383 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1383 "inst_match.m"
  }
#line 1378 "inst_match.m"
}

#line 1370 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(
#line 1370 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4,
#line 1370 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfo_5,
#line 1370 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_6)
#line 1370 "inst_match.m"
{
#line 1373 "inst_match.m"
  {
#line 1373 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1373 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_7;
#line 1373 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_20_20 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_7, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_4));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_7, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_7, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 1383 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1386 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1383 "inst_match.m"
    else
#line 1383 "inst_match.m"
      {
#line 1383 "inst_match.m"
        MR_Word check_hlds__inst_match__PredInst_27 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_5), (MR_Integer) 1);
#line 1384 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8;

#line 1384 "inst_match.m"
        {
#line 1384 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(check_hlds__inst_match__PredInst_27, check_hlds__inst_match__MaybeType_6, check_hlds__inst_match__Info_7, &check_hlds__inst_match__V_8_8);
        }
#line 1383 "inst_match.m"
      }
#line 1373 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1373 "inst_match.m"
  }
#line 1370 "inst_match.m"
}

#line 1346 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(
#line 1346 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1346 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1346 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__3_3,
#line 1346 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1346 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1346 "inst_match.m"
{
#line 1350 "inst_match.m"
  while (MR_TRUE)
#line 1350 "inst_match.m"
    {
#line 1350 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1350 "inst_match.m"
      {
#line 1350 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1350 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1350 "inst_match.m"
          {
#line 1350 "inst_match.m"
            *check_hlds__inst_match__HeadVar__3_3 = (MR_Integer) 0;
#line 1350 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1350 "inst_match.m"
          }
#line 1350 "inst_match.m"
        else
#line 1352 "inst_match.m"
          {
#line 1352 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1352 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1352 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_10, (MR_Integer) 1)));
#line 1352 "inst_match.m"
            MR_Word check_hlds__inst_match__HeadContainsNonstd_17;
#line 1352 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_20_20;
#line 1353 "inst_match.m"
            MR_Word check_hlds__inst_match___ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_10, (MR_Integer) 0)));

#line 1354 "inst_match.m"
            {
#line 1354 "inst_match.m"
              check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(check_hlds__inst_match__ArgInsts_16, check_hlds__inst_match__HeadVar__2_2, &check_hlds__inst_match__HeadContainsNonstd_17, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_20_20);
            }
#line 1359 "inst_match.m"
#line 1359 "inst_match.m"
            switch (check_hlds__inst_match__HeadContainsNonstd_17) {
#line 1359 "inst_match.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1359 "inst_match.m"
              case (MR_Integer) 0:
#line 1361 "inst_match.m"
                {
#line 1361 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1361 "inst_match.m"
                  {
#line 1361 "inst_match.m"
                    MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_11;
#line 1361 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_20_20;

#line 1361 "inst_match.m"
                    check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1361 "inst_match.m"
                    check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1361 "inst_match.m"
                  }
#line 1361 "inst_match.m"
                  continue;
#line 1361 "inst_match.m"
                }
#line 1359 "inst_match.m"
                break;
#line 1359 "inst_match.m"
              case (MR_Integer) 1:
#line 1357 "inst_match.m"
                {
#line 1358 "inst_match.m"
                  *check_hlds__inst_match__HeadVar__3_3 = (MR_Integer) 1;
#line 1357 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_20_20;
#line 1357 "inst_match.m"
                }
#line 1359 "inst_match.m"
                break;
#line 1359 "inst_match.m"
            }
#line 1352 "inst_match.m"
          }
#line 1350 "inst_match.m"
      }
#line 1350 "inst_match.m"
      break;
#line 1350 "inst_match.m"
    }
#line 1346 "inst_match.m"
}

#line 1328 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_nondefault_func_mode_5_p_0(
#line 1328 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1328 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1328 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__3_3,
#line 1328 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1328 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1328 "inst_match.m"
{
#line 1332 "inst_match.m"
  while (MR_TRUE)
#line 1332 "inst_match.m"
    {
#line 1332 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1332 "inst_match.m"
      {
#line 1332 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1332 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1332 "inst_match.m"
          {
#line 1332 "inst_match.m"
            *check_hlds__inst_match__HeadVar__3_3 = (MR_Integer) 0;
#line 1332 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1332 "inst_match.m"
          }
#line 1332 "inst_match.m"
        else
#line 1334 "inst_match.m"
          {
#line 1334 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1334 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1334 "inst_match.m"
            MR_Word check_hlds__inst_match__HeadContainsNonstd_15;
#line 1334 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1335 "inst_match.m"
            {
#line 1335 "inst_match.m"
              check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(check_hlds__inst_match__Inst_10, check_hlds__inst_match__HeadVar__2_2, &check_hlds__inst_match__HeadContainsNonstd_15, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
            }
#line 1340 "inst_match.m"
#line 1340 "inst_match.m"
            switch (check_hlds__inst_match__HeadContainsNonstd_15) {
#line 1340 "inst_match.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1340 "inst_match.m"
              case (MR_Integer) 0:
#line 1342 "inst_match.m"
                {
#line 1342 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1342 "inst_match.m"
                  {
#line 1342 "inst_match.m"
                    MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_11;
#line 1342 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1342 "inst_match.m"
                    check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1342 "inst_match.m"
                    check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1342 "inst_match.m"
                  }
#line 1342 "inst_match.m"
                  continue;
#line 1342 "inst_match.m"
                }
#line 1340 "inst_match.m"
                break;
#line 1340 "inst_match.m"
              case (MR_Integer) 1:
#line 1338 "inst_match.m"
                {
#line 1339 "inst_match.m"
                  *check_hlds__inst_match__HeadVar__3_3 = (MR_Integer) 1;
#line 1338 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;
#line 1338 "inst_match.m"
                }
#line 1340 "inst_match.m"
                break;
#line 1340 "inst_match.m"
            }
#line 1334 "inst_match.m"
          }
#line 1332 "inst_match.m"
      }
#line 1332 "inst_match.m"
      break;
#line 1332 "inst_match.m"
    }
#line 1328 "inst_match.m"
}

#line 1272 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(
#line 1272 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1272 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30,
#line 1272 "inst_match.m"
  MR_Word * check_hlds__inst_match__ContainsNonstd_8,
#line 1272 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_31,
#line 1272 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_32)
#line 1272 "inst_match.m"
{
#line 1278 "inst_match.m"
  while (MR_TRUE)
#line 1278 "inst_match.m"
    {
#line 1278 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1278 "inst_match.m"
      {
#line 1278 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1278 "inst_match.m"
#line 1278 "inst_match.m"
        switch (MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) {
#line 1278 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1278 "inst_match.m"
          case (MR_Integer) 0:
#line 1318 "inst_match.m"
            {
#line 1319 "inst_match.m"
              *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
#line 1318 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
#line 1318 "inst_match.m"
            }
#line 1278 "inst_match.m"
            break;
#line 1278 "inst_match.m"
          case (MR_Integer) 1:
#line 1318 "inst_match.m"
            {
#line 1319 "inst_match.m"
              *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
#line 1318 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
#line 1318 "inst_match.m"
            }
#line 1278 "inst_match.m"
            break;
#line 1278 "inst_match.m"
          case (MR_Integer) 2:
#line 1321 "inst_match.m"
            {
#line 1325 "inst_match.m"
              *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
#line 1321 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
#line 1321 "inst_match.m"
            }
#line 1278 "inst_match.m"
            break;
#line 1278 "inst_match.m"
          case (MR_Integer) 3:
#line 1278 "inst_match.m"
#line 1278 "inst_match.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) {
#line 1278 "inst_match.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1278 "inst_match.m"
              case (MR_Integer) 0:
#line 1285 "inst_match.m"
                {
#line 1285 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1285 "inst_match.m"
                  MR_Word check_hlds__inst_match__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 3)));
#line 1285 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1289 "inst_match.m"
#line 1289 "inst_match.m"
                  switch (MR_tag((MR_Word) check_hlds__inst_match__InstResults_13)) {
#line 1289 "inst_match.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1289 "inst_match.m"
                    case (MR_Integer) 0:
#line 1289 "inst_match.m"
#line 1289 "inst_match.m"
                      switch (MR_unmkbody(check_hlds__inst_match__InstResults_13)) {
#line 1289 "inst_match.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1289 "inst_match.m"
                        case (MR_Integer) 0:
#line 1293 "inst_match.m"
                          {
#line 1293 "inst_match.m"
                            check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(check_hlds__inst_match__BoundInsts_14, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30, check_hlds__inst_match__ContainsNonstd_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_31, check_hlds__inst_match__STATE_VARIABLE_Info_32);
                          }
#line 1289 "inst_match.m"
                          break;
#line 1289 "inst_match.m"
                        case (MR_Integer) 1:
#line 1287 "inst_match.m"
                          {
#line 1288 "inst_match.m"
                            *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
#line 1287 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
#line 1287 "inst_match.m"
                          }
#line 1289 "inst_match.m"
                          break;
#line 1289 "inst_match.m"
                      }
#line 1289 "inst_match.m"
                      break;
#line 1289 "inst_match.m"
                    case (MR_Integer) 1:
#line 1293 "inst_match.m"
                      {
#line 1293 "inst_match.m"
                        check_hlds__inst_match__bound_inst_list_contains_nondefault_func_mode_5_p_0(check_hlds__inst_match__BoundInsts_14, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30, check_hlds__inst_match__ContainsNonstd_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_31, check_hlds__inst_match__STATE_VARIABLE_Info_32);
                      }
#line 1289 "inst_match.m"
                      break;
#line 1289 "inst_match.m"
                  }
#line 1285 "inst_match.m"
                }
#line 1278 "inst_match.m"
                break;
#line 1278 "inst_match.m"
              case (MR_Integer) 1:
#line 1278 "inst_match.m"
                {
#line 1278 "inst_match.m"
                  MR_Word check_hlds__inst_match__HOInstInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1278 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1279 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_42_42;

#line 1279 "inst_match.m"
                  {
#line 1279 "inst_match.m"
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(check_hlds__inst_match__HOInstInfo_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, &check_hlds__inst_match__STATE_VARIABLE_Info_42_42);
                  }
#line 1279 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1280 "inst_match.m"
                    {
#line 1280 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_42_42;
#line 1280 "inst_match.m"
                      *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
#line 1280 "inst_match.m"
                    }
#line 1279 "inst_match.m"
                  else
#line 1282 "inst_match.m"
                    {
#line 1282 "inst_match.m"
                      *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 1;
#line 1282 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
#line 1282 "inst_match.m"
                    }
#line 1278 "inst_match.m"
                }
#line 1278 "inst_match.m"
                break;
#line 1278 "inst_match.m"
              case (MR_Integer) 2:
#line 1297 "inst_match.m"
                {
#line 1298 "inst_match.m"
                  {
#line 1298 "inst_match.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_contains_nondefault_func_mode_2\'/5", (MR_String) "uninstantiated inst parameter");
#line 1298 "inst_match.m"
                    return;
                  }
#line 1297 "inst_match.m"
                }
#line 1278 "inst_match.m"
                break;
#line 1278 "inst_match.m"
              case (MR_Integer) 3:
#line 1310 "inst_match.m"
                {
#line 1310 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInst_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1310 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1311 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1311 "inst_match.m"
                  {
#line 1311 "inst_match.m"
                    MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__SubInst_54;

#line 1311 "inst_match.m"
                    check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1311 "inst_match.m"
                  }
#line 1311 "inst_match.m"
                  continue;
#line 1310 "inst_match.m"
                }
#line 1278 "inst_match.m"
                break;
#line 1278 "inst_match.m"
              case (MR_Integer) 4:
#line 1300 "inst_match.m"
                {
#line 1300 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1301 "inst_match.m"
                  {
#line 1301 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__InstName_22)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30);
                  }
#line 1301 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1302 "inst_match.m"
                    {
#line 1302 "inst_match.m"
                      *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
#line 1302 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
#line 1302 "inst_match.m"
                    }
#line 1301 "inst_match.m"
                  else
#line 1304 "inst_match.m"
                    {
#line 1304 "inst_match.m"
                      MR_Word check_hlds__inst_match__SubInst_23;
#line 1304 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_35_35;
#line 1304 "inst_match.m"
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_34_50;
#line 1305 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_60_60;
#line 1305 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_61_61;
#line 1305 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_62_62;
#line 1305 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_63_63;
#line 1305 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_64_64;
#line 1305 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_65_65;

#line 1304 "inst_match.m"
                      {
#line 1304 "inst_match.m"
                        mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__InstName_22)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30, &check_hlds__inst_match__STATE_VARIABLE_Expansions_34_50);
                      }
#line 1305 "inst_match.m"
                      check_hlds__inst_match__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 0)));
#line 1305 "inst_match.m"
                      check_hlds__inst_match__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 1)));
#line 1305 "inst_match.m"
                      check_hlds__inst_match__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 2)));
#line 1305 "inst_match.m"
                      check_hlds__inst_match__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1305 "inst_match.m"
                      check_hlds__inst_match__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1305 "inst_match.m"
                      check_hlds__inst_match__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1305 "inst_match.m"
                      check_hlds__inst_match__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_31, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1305 "inst_match.m"
                      {
#line 1305 "inst_match.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__V_35_35, check_hlds__inst_match__InstName_22, &check_hlds__inst_match__SubInst_23);
                      }
#line 1306 "inst_match.m"
                      /* direct tailcall eliminated */
#line 1306 "inst_match.m"
                      {
#line 1306 "inst_match.m"
                        MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__SubInst_23;
#line 1306 "inst_match.m"
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_30 = check_hlds__inst_match__STATE_VARIABLE_Expansions_34_50;

#line 1306 "inst_match.m"
                        check_hlds__inst_match__STATE_VARIABLE_Expansions_0_30 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_30;
#line 1306 "inst_match.m"
                        check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1306 "inst_match.m"
                      }
#line 1306 "inst_match.m"
                      continue;
#line 1304 "inst_match.m"
                    }
#line 1300 "inst_match.m"
                }
#line 1278 "inst_match.m"
                break;
#line 1278 "inst_match.m"
              case (MR_Integer) 5:
#line 1318 "inst_match.m"
                {
#line 1319 "inst_match.m"
                  *check_hlds__inst_match__ContainsNonstd_8 = (MR_Integer) 0;
#line 1318 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_32 = check_hlds__inst_match__STATE_VARIABLE_Info_0_31;
#line 1318 "inst_match.m"
                }
#line 1278 "inst_match.m"
                break;
#line 1278 "inst_match.m"
            }
#line 1278 "inst_match.m"
            break;
#line 1278 "inst_match.m"
        }
#line 1278 "inst_match.m"
      }
#line 1278 "inst_match.m"
      break;
#line 1278 "inst_match.m"
    }
#line 1272 "inst_match.m"
}

#line 1265 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(
#line 1265 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_5,
#line 1265 "inst_match.m"
  MR_Word * check_hlds__inst_match__ContainsNonstd_6,
#line 1265 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_8,
#line 1265 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_9)
#line 1265 "inst_match.m"
{
#line 1268 "inst_match.m"
  {
#line 1268 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1268 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 1269 "inst_match.m"
    {
#line 1269 "inst_match.m"
      check_hlds__inst_match__V_10_10 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    }
#line 1269 "inst_match.m"
    {
#line 1269 "inst_match.m"
      check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(check_hlds__inst_match__Inst_5, check_hlds__inst_match__V_10_10, check_hlds__inst_match__ContainsNonstd_6, check_hlds__inst_match__STATE_VARIABLE_Info_0_8, check_hlds__inst_match__STATE_VARIABLE_Info_9);
    }
#line 1268 "inst_match.m"
  }
#line 1265 "inst_match.m"
}

#line 1236 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
#line 1236 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1236 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1236 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1236 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1236 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1236 "inst_match.m"
{
#line 1240 "inst_match.m"
  while (MR_TRUE)
#line 1240 "inst_match.m"
    {
#line 1240 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1240 "inst_match.m"
      {
#line 1240 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1240 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1240 "inst_match.m"
          {
#line 1240 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1240 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1240 "inst_match.m"
          }
#line 1240 "inst_match.m"
        else
#line 1241 "inst_match.m"
          {
#line 1241 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1241 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1241 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 1241 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 1241 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 1241 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 1241 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 1241 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 1241 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1241 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1241 "inst_match.m"
              {
#line 1241 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1241 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1242 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 1242 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 1243 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 1243 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 1244 "inst_match.m"
                {
#line 1244 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 1244 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1246 "inst_match.m"
                  {
#line 1246 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 1246 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1246 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 1246 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 1245 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1245 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1245 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1245 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1245 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1245 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1246 "inst_match.m"
                    {
#line 1246 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 1245 "inst_match.m"
                    {
#line 1245 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 1247 "inst_match.m"
                    {
#line 1247 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 1246 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1248 "inst_match.m"
                      {
#line 1248 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1248 "inst_match.m"
                        {
#line 1248 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 1248 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 1248 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 1248 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1248 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1248 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1248 "inst_match.m"
                        }
#line 1248 "inst_match.m"
                        continue;
#line 1248 "inst_match.m"
                      }
#line 1246 "inst_match.m"
                  }
#line 1244 "inst_match.m"
                else
#line 1250 "inst_match.m"
                  {
#line 715 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_39;
#line 715 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_40;
#line 715 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_42;
#line 715 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_43;
#line 716 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_41_41;
#line 717 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_44_44;

#line 716 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 716 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 716 "inst_match.m"
                      {
#line 716 "inst_match.m"
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 716 "inst_match.m"
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 716 "inst_match.m"
                        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 717 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 717 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 717 "inst_match.m"
                          {
#line 717 "inst_match.m"
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 717 "inst_match.m"
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 717 "inst_match.m"
                            check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 717 "inst_match.m"
                          }
#line 716 "inst_match.m"
                      }
#line 715 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 721 "inst_match.m"
                      {
#line 721 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_45;
#line 721 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_47;
#line 721 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_49;

#line 720 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
#line 720 "inst_match.m"
                          {
#line 720 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

#line 720 "inst_match.m"
                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
#line 720 "inst_match.m"
                          }
#line 720 "inst_match.m"
                        else
#line 719 "inst_match.m"
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
#line 723 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
#line 723 "inst_match.m"
                          {
#line 723 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

#line 723 "inst_match.m"
                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
#line 723 "inst_match.m"
                          }
#line 723 "inst_match.m"
                        else
#line 722 "inst_match.m"
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
#line 725 "inst_match.m"
                        {
#line 725 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
#line 728 "inst_match.m"
#line 728 "inst_match.m"
                        switch (check_hlds__inst_match__O_49) {
#line 728 "inst_match.m"
                          default:
#line 728 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                          case (MR_Integer) 0:
#line 730 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                          case (MR_Integer) 2:
#line 727 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                        }
#line 721 "inst_match.m"
                      }
#line 715 "inst_match.m"
                    else
#line 733 "inst_match.m"
                      {
#line 733 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;

#line 733 "inst_match.m"
                        {
#line 733 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_53_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 733 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_53_53);
#line 733 "inst_match.m"
                      }
#line 1250 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1255 "inst_match.m"
                      {
#line 1255 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1255 "inst_match.m"
                        {
#line 1255 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 1255 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1255 "inst_match.m"
                        }
#line 1255 "inst_match.m"
                        continue;
#line 1255 "inst_match.m"
                      }
#line 1250 "inst_match.m"
                  }
#line 1241 "inst_match.m"
              }
#line 1241 "inst_match.m"
          }
#line 1240 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1240 "inst_match.m"
      }
#line 1240 "inst_match.m"
      break;
#line 1240 "inst_match.m"
    }
#line 1236 "inst_match.m"
}

#line 1219 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
#line 1219 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1219 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1219 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1219 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1219 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1219 "inst_match.m"
{
#line 1223 "inst_match.m"
  while (MR_TRUE)
#line 1223 "inst_match.m"
    {
#line 1223 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1223 "inst_match.m"
      {
#line 1223 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1223 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "inst_match.m"
          {
#line 1223 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1223 "inst_match.m"
              {
#line 1223 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1223 "inst_match.m"
                  {
#line 1223 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1223 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1223 "inst_match.m"
                  }
#line 1223 "inst_match.m"
              }
#line 1223 "inst_match.m"
          }
#line 1223 "inst_match.m"
        else
#line 1225 "inst_match.m"
          {
#line 1225 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1225 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1225 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgB_11;
#line 1225 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsB_12;
#line 1225 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 1225 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 1225 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1224 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1224 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1224 "inst_match.m"
              {
#line 1224 "inst_match.m"
                check_hlds__inst_match__ArgB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1224 "inst_match.m"
                check_hlds__inst_match__ArgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1225 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1225 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1225 "inst_match.m"
                  {
#line 1225 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 1225 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 1226 "inst_match.m"
                    {
#line 1226 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__ArgA_9, check_hlds__inst_match__ArgB_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 1225 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1227 "inst_match.m"
                      {
#line 1227 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1227 "inst_match.m"
                        {
#line 1227 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ArgsA_10;
#line 1227 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ArgsB_12;
#line 1227 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 1227 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1227 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1227 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 1227 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1227 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1227 "inst_match.m"
                        }
#line 1227 "inst_match.m"
                        continue;
#line 1227 "inst_match.m"
                      }
#line 1225 "inst_match.m"
                  }
#line 1224 "inst_match.m"
              }
#line 1225 "inst_match.m"
          }
#line 1223 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1223 "inst_match.m"
      }
#line 1223 "inst_match.m"
      break;
#line 1223 "inst_match.m"
    }
#line 1219 "inst_match.m"
}

#line 1198 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
#line 1198 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_5,
#line 1198 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_6,
#line 1198 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 1198 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 1198 "inst_match.m"
{
#line 1204 "inst_match.m"
  {
#line 1204 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1204 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "inst_match.m"
      {
#line 1204 "inst_match.m"
        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_mt_3_p_0(check_hlds__inst_match__ModuleInfo_8, check_hlds__inst_match__HOInstInfoA_5, check_hlds__inst_match__MaybeType_7);
      }
#line 1204 "inst_match.m"
    else
#line 1204 "inst_match.m"
      {
#line 1204 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_6), (MR_Integer) 1);

#line 1204 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "inst_match.m"
          {
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_18_18;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_2_75;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_91;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 1207 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_13;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_14;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__Info0_61;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_63_63;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_64_64;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_65_65;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_66_66;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_67_67;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_74_74;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_82;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_83;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_85;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_86;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_88;
#line 1207 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_89_89;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_92_92;
#line 1207 "inst_match.m"
            MR_Word check_hlds__inst_match__V_93_93;
#line 1209 "inst_match.m"
            MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 1209 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 1441 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_84;
#line 1442 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_87;
#line 1444 "inst_match.m"
            MR_Word check_hlds__inst_match__V_62_62;

#line 1209 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_15_15 == (MR_Integer) 1);
#line 1207 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1207 "inst_match.m"
              {
#line 7896 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1210 "inst_match.m"
                {
#line 1210 "inst_match.m"
                  check_hlds__inst_match__Arity_13 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_18_18, check_hlds__inst_match__ArgModes_10);
                }
#line 1211 "inst_match.m"
                {
#line 1211 "inst_match.m"
                  check_hlds__inst_match__PredInstA_14 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_13);
                }
#line 1423 "inst_match.m"
                check_hlds__inst_match__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1423 "inst_match.m"
                check_hlds__inst_match__V_64_64 = (MR_Integer) 2;
#line 1423 "inst_match.m"
                check_hlds__inst_match__V_65_65 = (MR_Integer) 0;
#line 1423 "inst_match.m"
                check_hlds__inst_match__V_66_66 = (MR_Integer) 1;
#line 1424 "inst_match.m"
                check_hlds__inst_match__V_67_67 = (MR_Integer) 0;
#line 7918 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_2_75 = (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;
#line 250 "inst_match.m"
                {
#line 250 "inst_match.m"
                  check_hlds__inst_match__V_74_74 = mercury__set_tree234__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_2_75);
                }
#line 1441 "inst_match.m"
                check_hlds__inst_match__PredOrFunc_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 0)));
#line 1441 "inst_match.m"
                check_hlds__inst_match__ModesA_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 1)));
#line 1441 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsA_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 2)));
#line 1441 "inst_match.m"
                check_hlds__inst_match__Det_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 3)));
#line 1442 "inst_match.m"
                check_hlds__inst_match__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 1442 "inst_match.m"
                check_hlds__inst_match__ModesB_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 1442 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsB_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 1442 "inst_match.m"
                check_hlds__inst_match__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 1442 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_82 == check_hlds__inst_match__V_92_92);
#line 1207 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1207 "inst_match.m"
                  {
#line 1442 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_85 == check_hlds__inst_match__V_93_93);
#line 1207 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1207 "inst_match.m"
                      {
#line 7953 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_21_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 307 "inst_match.m"
                        {
#line 307 "inst_match.m"
                          check_hlds__inst_match__Info0_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 307 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 1) = ((MR_Box) (check_hlds__inst_match__V_74_74));
#line 307 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 2) = ((MR_Box) (check_hlds__inst_match__V_63_63));
#line 307 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 3) = ((MR_Box) ((check_hlds__inst_match__V_64_64 | ((((check_hlds__inst_match__V_65_65 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_66_66 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_67_67 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
                        }
#line 1443 "inst_match.m"
                        {
#line 1443 "inst_match.m"
                          check_hlds__inst_match__V_89_89 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_91, check_hlds__inst_match__ModesA_83);
                        }
#line 1443 "inst_match.m"
                        {
#line 1443 "inst_match.m"
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__V_89_89, &check_hlds__inst_match__MaybeTypes_88);
                        }
#line 1444 "inst_match.m"
                        {
#line 1444 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_83, check_hlds__inst_match__ModesB_86, check_hlds__inst_match__MaybeTypes_88, check_hlds__inst_match__Info0_61, &check_hlds__inst_match__V_62_62);
                        }
#line 1207 "inst_match.m"
                      }
#line 1207 "inst_match.m"
                  }
#line 1207 "inst_match.m"
              }
#line 1207 "inst_match.m"
          }
#line 1204 "inst_match.m"
        else
#line 1214 "inst_match.m"
          {
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_54;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_17 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_5), (MR_Integer) 1);
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__Info0_24;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__V_37_37;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_45;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_46;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_48;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_49;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_51;
#line 1214 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_52_52;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__V_55_55;
#line 1214 "inst_match.m"
            MR_Word check_hlds__inst_match__V_56_56;
#line 1441 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_47;
#line 1442 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_50;
#line 1444 "inst_match.m"
            MR_Word check_hlds__inst_match__V_25_25;

#line 250 "inst_match.m"
            {
#line 250 "inst_match.m"
              check_hlds__inst_match__V_37_37 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
            }
#line 1441 "inst_match.m"
            check_hlds__inst_match__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 0)));
#line 1441 "inst_match.m"
            check_hlds__inst_match__ModesA_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 1)));
#line 1441 "inst_match.m"
            check_hlds__inst_match___MaybeArgRegsA_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 2)));
#line 1441 "inst_match.m"
            check_hlds__inst_match__Det_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 3)));
#line 1442 "inst_match.m"
            check_hlds__inst_match__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 1442 "inst_match.m"
            check_hlds__inst_match__ModesB_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 1442 "inst_match.m"
            check_hlds__inst_match___MaybeArgRegsB_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 1442 "inst_match.m"
            check_hlds__inst_match__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 1442 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_45 == check_hlds__inst_match__V_55_55);
#line 1214 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1214 "inst_match.m"
              {
#line 1442 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_48 == check_hlds__inst_match__V_56_56);
#line 1214 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1214 "inst_match.m"
                  {
#line 8060 "check_hlds.inst_match.c"
                    check_hlds__inst_match__TypeCtorInfo_21_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 307 "inst_match.m"
                    {
#line 307 "inst_match.m"
                      check_hlds__inst_match__Info0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 307 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 1) = ((MR_Box) (check_hlds__inst_match__V_37_37));
#line 307 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
                    }
#line 1443 "inst_match.m"
                    {
#line 1443 "inst_match.m"
                      check_hlds__inst_match__V_52_52 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_54, check_hlds__inst_match__ModesA_46);
                    }
#line 1443 "inst_match.m"
                    {
#line 1443 "inst_match.m"
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__V_52_52, &check_hlds__inst_match__MaybeTypes_51);
                    }
#line 1444 "inst_match.m"
                    {
#line 1444 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_46, check_hlds__inst_match__ModesB_49, check_hlds__inst_match__MaybeTypes_51, check_hlds__inst_match__Info0_24, &check_hlds__inst_match__V_25_25);
                    }
#line 1214 "inst_match.m"
                  }
#line 1214 "inst_match.m"
              }
#line 1214 "inst_match.m"
          }
#line 1204 "inst_match.m"
      }
#line 1204 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1204 "inst_match.m"
  }
#line 1198 "inst_match.m"
}

#line 1107 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
#line 1107 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1107 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1107 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1107 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 1107 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42)
#line 1107 "inst_match.m"
{
#line 1112 "inst_match.m"
  {
#line 1112 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
#line 1112 "inst_match.m"
      default:
#line 1112 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_FALSE;
#line 1112 "inst_match.m"
        break;
#line 1112 "inst_match.m"
      case (MR_Integer) 0:
#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
#line 1112 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1112 "inst_match.m"
          case (MR_Integer) 0:
#line 1112 "inst_match.m"
            {
#line 1113 "inst_match.m"
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1112 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 1112 "inst_match.m"
                {
#line 1112 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1112 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 1112 "inst_match.m"
                }
#line 1112 "inst_match.m"
            }
#line 1112 "inst_match.m"
            break;
#line 1112 "inst_match.m"
          case (MR_Integer) 1:
#line 1195 "inst_match.m"
            {
#line 1195 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1195 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1195 "inst_match.m"
            }
#line 1112 "inst_match.m"
            break;
#line 1112 "inst_match.m"
        }
#line 1112 "inst_match.m"
        break;
#line 1112 "inst_match.m"
      case (MR_Integer) 2:
#line 1112 "inst_match.m"
        {
#line 1112 "inst_match.m"
          MR_Word check_hlds__inst_match__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1112 "inst_match.m"
          MR_Word check_hlds__inst_match__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));
#line 1112 "inst_match.m"
          MR_Word check_hlds__inst_match__V_177_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1112 "inst_match.m"
          MR_Word check_hlds__inst_match__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1120 "inst_match.m"
          MR_Word check_hlds__inst_match__V_176_176 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1120 "inst_match.m"
          MR_Word check_hlds__inst_match__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1120 "inst_match.m"
          MR_Word check_hlds__inst_match__V_179_179 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1120 "inst_match.m"
          MR_Word check_hlds__inst_match__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1120 "inst_match.m"
          MR_Word check_hlds__inst_match__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));

#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 1112 "inst_match.m"
            default:
#line 1112 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 1112 "inst_match.m"
              break;
#line 1112 "inst_match.m"
            case (MR_Integer) 2:
#line 1115 "inst_match.m"
              {
#line 1115 "inst_match.m"
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1115 "inst_match.m"
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1125 "inst_match.m"
#line 1125 "inst_match.m"
                switch (check_hlds__inst_match__V_177_177) {
#line 1125 "inst_match.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1125 "inst_match.m"
                  case (MR_Integer) 0:
#line 1126 "inst_match.m"
                    {
#line 1126 "inst_match.m"
                      MR_Word check_hlds__inst_match__NextInstA_15;
#line 1126 "inst_match.m"
                      MR_Word check_hlds__inst_match__NextInstB_16;
#line 1126 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_66_66;
#line 1129 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_109_109;
#line 1129 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_110_110;
#line 1129 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_111_111;
#line 1129 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_112_112;
#line 1129 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_113_113;
#line 1129 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_114_114;

#line 1127 "inst_match.m"
                      {
#line 1127 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_182_182, check_hlds__inst_match__V_170_170, check_hlds__inst_match__V_169_169, &check_hlds__inst_match__NextInstA_15);
                      }
#line 1126 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1126 "inst_match.m"
                        {
#line 1129 "inst_match.m"
                          check_hlds__inst_match__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1129 "inst_match.m"
                          check_hlds__inst_match__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1129 "inst_match.m"
                          check_hlds__inst_match__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1129 "inst_match.m"
                          check_hlds__inst_match__V_111_111 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1129 "inst_match.m"
                          check_hlds__inst_match__V_112_112 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1129 "inst_match.m"
                          check_hlds__inst_match__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1129 "inst_match.m"
                          check_hlds__inst_match__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1129 "inst_match.m"
                          {
#line 1129 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_66_66, check_hlds__inst_match__UniqB_12, check_hlds__inst_match__HOInstInfoB_13, &check_hlds__inst_match__NextInstB_16);
                          }
#line 1126 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 1131 "inst_match.m"
                            {
#line 1131 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_15, check_hlds__inst_match__NextInstB_16, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                            }
#line 1126 "inst_match.m"
                        }
#line 1126 "inst_match.m"
                    }
#line 1125 "inst_match.m"
                    break;
#line 1125 "inst_match.m"
                  case (MR_Integer) 1:
#line 1122 "inst_match.m"
                    {
#line 1122 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_169_169, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
#line 1125 "inst_match.m"
                    break;
#line 1125 "inst_match.m"
                }
#line 1115 "inst_match.m"
              }
#line 1112 "inst_match.m"
              break;
#line 1112 "inst_match.m"
            case (MR_Integer) 3:
#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 1112 "inst_match.m"
                default:
#line 1112 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
                case (MR_Integer) 0:
#line 1140 "inst_match.m"
                  {
#line 1140 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_74;

#line 1142 "inst_match.m"
                    {
#line 1142 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_182_182, check_hlds__inst_match__V_170_170, check_hlds__inst_match__V_169_169, &check_hlds__inst_match__NextInstA_74);
                    }
#line 1140 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1144 "inst_match.m"
                      {
#line 1144 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_74, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1140 "inst_match.m"
                  }
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
                case (MR_Integer) 1:
#line 1134 "inst_match.m"
                  {
#line 1134 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_71;

#line 1136 "inst_match.m"
                    {
#line 1136 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_182_182, check_hlds__inst_match__V_170_170, check_hlds__inst_match__V_169_169, &check_hlds__inst_match__NextInstA_71);
                    }
#line 1134 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1138 "inst_match.m"
                      {
#line 1138 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_71, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1134 "inst_match.m"
                  }
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
              }
#line 1112 "inst_match.m"
              break;
#line 1112 "inst_match.m"
          }
#line 1112 "inst_match.m"
        }
#line 1112 "inst_match.m"
        break;
#line 1112 "inst_match.m"
      case (MR_Integer) 3:
#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
#line 1112 "inst_match.m"
          default:
#line 1112 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 1112 "inst_match.m"
            break;
#line 1112 "inst_match.m"
          case (MR_Integer) 0:
#line 1112 "inst_match.m"
            {
#line 1112 "inst_match.m"
              MR_Word check_hlds__inst_match__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 1112 "inst_match.m"
              MR_Word check_hlds__inst_match__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1152 "inst_match.m"
              MR_Word check_hlds__inst_match__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 1112 "inst_match.m"
                default:
#line 1112 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
                case (MR_Integer) 2:
#line 1152 "inst_match.m"
                  {
#line 1152 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1152 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1152 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1152 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstB_80;
#line 1154 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1154 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1154 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_135_135 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1154 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1154 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1154 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1154 "inst_match.m"
                    {
#line 1154 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_57_57, check_hlds__inst_match__UniqB_78, check_hlds__inst_match__HOInstInfoB_79, &check_hlds__inst_match__NextInstB_80);
                    }
#line 1152 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1156 "inst_match.m"
                      {
#line 1156 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__NextInstB_80, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1152 "inst_match.m"
                  }
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
                case (MR_Integer) 3:
#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 1112 "inst_match.m"
                    default:
#line 1112 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 1112 "inst_match.m"
                      break;
#line 1112 "inst_match.m"
                    case (MR_Integer) 0:
#line 1158 "inst_match.m"
                      {
#line 1158 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1159 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1159 "inst_match.m"
                        MR_Word check_hlds__inst_match___InstResultB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 1160 "inst_match.m"
                        {
#line 1160 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(check_hlds__inst_match__V_171_171, check_hlds__inst_match__BoundInstsB_32, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                        }
#line 1158 "inst_match.m"
                      }
#line 1112 "inst_match.m"
                      break;
#line 1112 "inst_match.m"
                    case (MR_Integer) 1:
#line 1163 "inst_match.m"
                      {
#line 1163 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1163 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;
#line 1163 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_54_54;
#line 1163 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_166_166;
#line 1164 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1165 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_139_139;
#line 1165 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_140_140;
#line 1165 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_141_141;
#line 1165 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_142_142;
#line 1165 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_143_143;
#line 1165 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_144_144;

#line 1164 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1163 "inst_match.m"
                          {
#line 1165 "inst_match.m"
                            check_hlds__inst_match__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1165 "inst_match.m"
                            check_hlds__inst_match__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1165 "inst_match.m"
                            check_hlds__inst_match__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1165 "inst_match.m"
                            check_hlds__inst_match__V_141_141 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1165 "inst_match.m"
                            check_hlds__inst_match__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1165 "inst_match.m"
                            check_hlds__inst_match__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1165 "inst_match.m"
                            check_hlds__inst_match__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1165 "inst_match.m"
                            {
#line 1165 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_172_172, check_hlds__inst_match__V_171_171, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_53_53);
                            }
#line 1163 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1163 "inst_match.m"
                              {
#line 1167 "inst_match.m"
                                check_hlds__inst_match__V_54_54 = (MR_Integer) 0;
#line 1167 "inst_match.m"
                                {
#line 1167 "inst_match.m"
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__V_166_166, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                                }
#line 1167 "inst_match.m"
                                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_54_54 == check_hlds__inst_match__V_166_166);
#line 1163 "inst_match.m"
                              }
#line 1163 "inst_match.m"
                          }
#line 1163 "inst_match.m"
                      }
#line 1112 "inst_match.m"
                      break;
#line 1112 "inst_match.m"
                  }
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
              }
#line 1112 "inst_match.m"
            }
#line 1112 "inst_match.m"
            break;
#line 1112 "inst_match.m"
          case (MR_Integer) 1:
#line 1112 "inst_match.m"
            {
#line 1112 "inst_match.m"
              MR_Word check_hlds__inst_match__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1112 "inst_match.m"
              MR_Word check_hlds__inst_match__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1146 "inst_match.m"
              MR_Word check_hlds__inst_match__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1148 "inst_match.m"
              MR_Word check_hlds__inst_match__V_183_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1148 "inst_match.m"
              MR_Word check_hlds__inst_match__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1148 "inst_match.m"
              MR_Word check_hlds__inst_match__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1148 "inst_match.m"
              MR_Word check_hlds__inst_match__V_186_186 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1148 "inst_match.m"
              MR_Word check_hlds__inst_match__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1148 "inst_match.m"
              MR_Word check_hlds__inst_match__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));

#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 1112 "inst_match.m"
                default:
#line 1112 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
                case (MR_Integer) 2:
#line 1146 "inst_match.m"
                  {
#line 1146 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1146 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1146 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstB_77;

#line 1148 "inst_match.m"
                    {
#line 1148 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_189_189, check_hlds__inst_match__UniqB_75, check_hlds__inst_match__HOInstInfoB_76, &check_hlds__inst_match__NextInstB_77);
                    }
#line 1146 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1150 "inst_match.m"
                      {
#line 1150 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__NextInstB_77, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1146 "inst_match.m"
                  }
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
                case (MR_Integer) 3:
#line 1112 "inst_match.m"
#line 1112 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 1112 "inst_match.m"
                    default:
#line 1112 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 1112 "inst_match.m"
                      break;
#line 1112 "inst_match.m"
                    case (MR_Integer) 0:
#line 1169 "inst_match.m"
                      {
#line 1169 "inst_match.m"
                        MR_Word check_hlds__inst_match__TypeCtorInfo_163_163;
#line 1169 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstResultsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1169 "inst_match.m"
                        MR_Word check_hlds__inst_match__Type_36;
#line 1169 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_48_48;
#line 1169 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_50_50;
#line 1169 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_51_51;
#line 1169 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1169 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_167_167;
#line 1170 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1177 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_151_151;
#line 1177 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_152_152;
#line 1177 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_153_153;
#line 1177 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_154_154;
#line 1177 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_155_155;
#line 1177 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_156_156;

#line 1171 "inst_match.m"
                        {
#line 1171 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__InstResultsB_35, check_hlds__inst_match__BoundInstsB_90, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_189_189);
                        }
#line 1169 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1169 "inst_match.m"
                          {
#line 1173 "inst_match.m"
                            check_hlds__inst_match__V_48_48 = (MR_Integer) 0;
#line 1173 "inst_match.m"
                            {
#line 1173 "inst_match.m"
                              check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstB_7, &check_hlds__inst_match__V_167_167, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                            }
#line 1173 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_48_48 == check_hlds__inst_match__V_167_167);
#line 1169 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1169 "inst_match.m"
                              {
#line 8683 "check_hlds.inst_match.c"
                                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 8685 "check_hlds.inst_match.c"
                                if (check_hlds__inst_match__succeeded)
#line 8687 "check_hlds.inst_match.c"
                                  {
#line 8689 "check_hlds.inst_match.c"
                                    check_hlds__inst_match__Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 8691 "check_hlds.inst_match.c"
                                    check_hlds__inst_match__TypeCtorInfo_163_163 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1177 "inst_match.m"
                                    {
#line 1177 "inst_match.m"
                                      check_hlds__inst_match__V_50_50 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_163_163);
                                    }
#line 1177 "inst_match.m"
                                    check_hlds__inst_match__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 0)));
#line 1177 "inst_match.m"
                                    check_hlds__inst_match__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 1)));
#line 1177 "inst_match.m"
                                    check_hlds__inst_match__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 2)));
#line 1177 "inst_match.m"
                                    check_hlds__inst_match__V_153_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1177 "inst_match.m"
                                    check_hlds__inst_match__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1177 "inst_match.m"
                                    check_hlds__inst_match__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1177 "inst_match.m"
                                    check_hlds__inst_match__V_156_156 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1177 "inst_match.m"
                                    {
#line 1177 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_50_50, check_hlds__inst_match__V_51_51, check_hlds__inst_match__BoundInstsB_90, check_hlds__inst_match__Type_36);
                                    }
#line 8717 "check_hlds.inst_match.c"
                                  }
#line 1169 "inst_match.m"
                              }
#line 1169 "inst_match.m"
                          }
#line 1169 "inst_match.m"
                      }
#line 1112 "inst_match.m"
                      break;
#line 1112 "inst_match.m"
                    case (MR_Integer) 1:
#line 1184 "inst_match.m"
                      {
#line 1184 "inst_match.m"
                        MR_Word check_hlds__inst_match__HOInstInfoB_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1185 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1186 "inst_match.m"
                        {
#line 1186 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(check_hlds__inst_match__V_174_174, check_hlds__inst_match__HOInstInfoB_94, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_189_189);
                        }
#line 1184 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1184 "inst_match.m"
                          {
#line 1184 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1184 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1184 "inst_match.m"
                          }
#line 1184 "inst_match.m"
                      }
#line 1112 "inst_match.m"
                      break;
#line 1112 "inst_match.m"
                  }
#line 1112 "inst_match.m"
                  break;
#line 1112 "inst_match.m"
              }
#line 1112 "inst_match.m"
            }
#line 1112 "inst_match.m"
            break;
#line 1112 "inst_match.m"
          case (MR_Integer) 5:
#line 1189 "inst_match.m"
            {
#line 1189 "inst_match.m"
              MR_Word check_hlds__inst_match__TypeCtorInfo_164_164;
#line 1189 "inst_match.m"
              MR_Word check_hlds__inst_match__TypeInfo_165_165;
#line 1189 "inst_match.m"
              MR_Word check_hlds__inst_match__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1189 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1189 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgsB_39;
#line 1189 "inst_match.m"
              MR_Word check_hlds__inst_match__MaybeTypes_40;
#line 1189 "inst_match.m"
              MR_Integer check_hlds__inst_match__V_43_43;
#line 1189 "inst_match.m"
              MR_Word check_hlds__inst_match__V_44_44;
#line 1189 "inst_match.m"
              MR_Word check_hlds__inst_match__V_168_168;

#line 1190 "inst_match.m"
              check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1190 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 1190 "inst_match.m"
                {
#line 1190 "inst_match.m"
                  check_hlds__inst_match__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1190 "inst_match.m"
                  check_hlds__inst_match__ArgsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1190 "inst_match.m"
                  {
#line 1190 "inst_match.m"
                    check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__Name_37, check_hlds__inst_match__V_168_168);
                  }
#line 1189 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1189 "inst_match.m"
                    {
#line 8807 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeCtorInfo_164_164 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1191 "inst_match.m"
                      {
#line 1191 "inst_match.m"
                        check_hlds__inst_match__V_43_43 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_164_164, check_hlds__inst_match__ArgsA_38);
                      }
#line 1191 "inst_match.m"
                      check_hlds__inst_match__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8816 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_165_165 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 1191 "inst_match.m"
                      {
#line 1191 "inst_match.m"
                        mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_165_165, check_hlds__inst_match__V_43_43, ((MR_Box) (check_hlds__inst_match__V_44_44)), &check_hlds__inst_match__MaybeTypes_40);
                      }
#line 1193 "inst_match.m"
                      {
#line 1193 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(check_hlds__inst_match__ArgsA_38, check_hlds__inst_match__ArgsB_39, check_hlds__inst_match__MaybeTypes_40, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1189 "inst_match.m"
                    }
#line 1190 "inst_match.m"
                }
#line 1189 "inst_match.m"
            }
#line 1112 "inst_match.m"
            break;
#line 1112 "inst_match.m"
        }
#line 1112 "inst_match.m"
        break;
#line 1112 "inst_match.m"
    }
#line 1112 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1112 "inst_match.m"
  }
#line 1107 "inst_match.m"
}

#line 1090 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
#line 1090 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1090 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1090 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1090 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 1090 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 1090 "inst_match.m"
{
#line 1093 "inst_match.m"
  {
#line 1093 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1093 "inst_match.m"
    MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 1093 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1095 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1095 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1095 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1095 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1095 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1095 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1096 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions_12;

#line 1094 "inst_match.m"
    {
#line 1094 "inst_match.m"
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1094 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 1094 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 1094 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 1094 "inst_match.m"
    }
#line 257 "inst_match.m"
    {
#line 257 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
    }
#line 1096 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 1097 "inst_match.m"
      {
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19;
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1097 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1100 "inst_match.m"
        MR_Word check_hlds__inst_match__V_40_40;
#line 1100 "inst_match.m"
        MR_Word check_hlds__inst_match__V_41_41;
#line 1100 "inst_match.m"
        MR_Word check_hlds__inst_match__V_42_42;
#line 1100 "inst_match.m"
        MR_Word check_hlds__inst_match__V_43_43;
#line 1100 "inst_match.m"
        MR_Word check_hlds__inst_match__V_44_44;
#line 1100 "inst_match.m"
        MR_Word check_hlds__inst_match__V_45_45;

#line 1097 "inst_match.m"
        {
#line 1097 "inst_match.m"
          check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_27_27));
#line 1097 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 1097 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_29_29));
#line 1097 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_30_30 | ((((check_hlds__inst_match__V_31_31 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_32_32 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_33_33 << (MR_Integer) 4)))))))));
#line 1097 "inst_match.m"
        }
#line 1098 "inst_match.m"
        {
#line 1098 "inst_match.m"
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__V_27_27, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
        }
#line 1100 "inst_match.m"
        check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 1100 "inst_match.m"
        check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 1100 "inst_match.m"
        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 1100 "inst_match.m"
        check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1100 "inst_match.m"
        check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1100 "inst_match.m"
        check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1100 "inst_match.m"
        check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1100 "inst_match.m"
        {
#line 1100 "inst_match.m"
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
        }
#line 1102 "inst_match.m"
        {
#line 1102 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 1097 "inst_match.m"
      }
#line 1096 "inst_match.m"
    else
#line 1096 "inst_match.m"
      {
#line 1096 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 1096 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1096 "inst_match.m"
      }
#line 1093 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1093 "inst_match.m"
  }
#line 1090 "inst_match.m"
}

#line 1053 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
#line 1053 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1053 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1053 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1053 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1053 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1053 "inst_match.m"
{
#line 1057 "inst_match.m"
  while (MR_TRUE)
#line 1057 "inst_match.m"
    {
#line 1057 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1057 "inst_match.m"
      {
#line 1057 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1057 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "inst_match.m"
          {
#line 1057 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1057 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1057 "inst_match.m"
          }
#line 1057 "inst_match.m"
        else
#line 1058 "inst_match.m"
          {
#line 1058 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1058 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1058 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 1058 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 1058 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 1058 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 1058 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 1058 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 1058 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1058 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1058 "inst_match.m"
              {
#line 1058 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1058 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1059 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 1059 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 1060 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 1060 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 1061 "inst_match.m"
                {
#line 1061 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 1061 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1063 "inst_match.m"
                  {
#line 1063 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 1063 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1063 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 1063 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 1062 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1062 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1062 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1062 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1062 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1062 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1063 "inst_match.m"
                    {
#line 1063 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 1062 "inst_match.m"
                    {
#line 1062 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 1064 "inst_match.m"
                    {
#line 1064 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 1063 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1065 "inst_match.m"
                      {
#line 1065 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1065 "inst_match.m"
                        {
#line 1065 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 1065 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 1065 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 1065 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1065 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1065 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1065 "inst_match.m"
                        }
#line 1065 "inst_match.m"
                        continue;
#line 1065 "inst_match.m"
                      }
#line 1063 "inst_match.m"
                  }
#line 1061 "inst_match.m"
                else
#line 1067 "inst_match.m"
                  {
#line 715 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_39;
#line 715 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_40;
#line 715 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_42;
#line 715 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_43;
#line 716 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_41_41;
#line 717 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_44_44;

#line 716 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 716 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 716 "inst_match.m"
                      {
#line 716 "inst_match.m"
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 716 "inst_match.m"
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 716 "inst_match.m"
                        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 717 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 717 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 717 "inst_match.m"
                          {
#line 717 "inst_match.m"
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 717 "inst_match.m"
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 717 "inst_match.m"
                            check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 717 "inst_match.m"
                          }
#line 716 "inst_match.m"
                      }
#line 715 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 721 "inst_match.m"
                      {
#line 721 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_45;
#line 721 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_47;
#line 721 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_49;

#line 720 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
#line 720 "inst_match.m"
                          {
#line 720 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

#line 720 "inst_match.m"
                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
#line 720 "inst_match.m"
                          }
#line 720 "inst_match.m"
                        else
#line 719 "inst_match.m"
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
#line 723 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
#line 723 "inst_match.m"
                          {
#line 723 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

#line 723 "inst_match.m"
                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
#line 723 "inst_match.m"
                          }
#line 723 "inst_match.m"
                        else
#line 722 "inst_match.m"
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
#line 725 "inst_match.m"
                        {
#line 725 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
#line 728 "inst_match.m"
#line 728 "inst_match.m"
                        switch (check_hlds__inst_match__O_49) {
#line 728 "inst_match.m"
                          default:
#line 728 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                          case (MR_Integer) 0:
#line 730 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                          case (MR_Integer) 2:
#line 727 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                        }
#line 721 "inst_match.m"
                      }
#line 715 "inst_match.m"
                    else
#line 733 "inst_match.m"
                      {
#line 733 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;

#line 733 "inst_match.m"
                        {
#line 733 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_53_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 733 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_53_53);
#line 733 "inst_match.m"
                      }
#line 1067 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1072 "inst_match.m"
                      {
#line 1072 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1072 "inst_match.m"
                        {
#line 1072 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 1072 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1072 "inst_match.m"
                        }
#line 1072 "inst_match.m"
                        continue;
#line 1072 "inst_match.m"
                      }
#line 1067 "inst_match.m"
                  }
#line 1058 "inst_match.m"
              }
#line 1058 "inst_match.m"
          }
#line 1057 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1057 "inst_match.m"
      }
#line 1057 "inst_match.m"
      break;
#line 1057 "inst_match.m"
    }
#line 1053 "inst_match.m"
}

#line 1036 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
#line 1036 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1036 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1036 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1036 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1036 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1036 "inst_match.m"
{
#line 1040 "inst_match.m"
  while (MR_TRUE)
#line 1040 "inst_match.m"
    {
#line 1040 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1040 "inst_match.m"
      {
#line 1040 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1040 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "inst_match.m"
          {
#line 1040 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1040 "inst_match.m"
              {
#line 1040 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1040 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1040 "inst_match.m"
                  {
#line 1040 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1040 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1040 "inst_match.m"
                  }
#line 1040 "inst_match.m"
              }
#line 1040 "inst_match.m"
          }
#line 1040 "inst_match.m"
        else
#line 1042 "inst_match.m"
          {
#line 1042 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1042 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1042 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgB_11;
#line 1042 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsB_12;
#line 1042 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 1042 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 1042 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1041 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1041 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1041 "inst_match.m"
              {
#line 1041 "inst_match.m"
                check_hlds__inst_match__ArgB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1041 "inst_match.m"
                check_hlds__inst_match__ArgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1042 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1042 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1042 "inst_match.m"
                  {
#line 1042 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 1042 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 1043 "inst_match.m"
                    {
#line 1043 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__ArgA_9, check_hlds__inst_match__ArgB_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 1042 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1044 "inst_match.m"
                      {
#line 1044 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1044 "inst_match.m"
                        {
#line 1044 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ArgsA_10;
#line 1044 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ArgsB_12;
#line 1044 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 1044 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1044 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1044 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 1044 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1044 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1044 "inst_match.m"
                        }
#line 1044 "inst_match.m"
                        continue;
#line 1044 "inst_match.m"
                      }
#line 1042 "inst_match.m"
                  }
#line 1041 "inst_match.m"
              }
#line 1042 "inst_match.m"
          }
#line 1040 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1040 "inst_match.m"
      }
#line 1040 "inst_match.m"
      break;
#line 1040 "inst_match.m"
    }
#line 1036 "inst_match.m"
}

#line 1016 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
#line 1016 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 1016 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 1016 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1016 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 1016 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 1016 "inst_match.m"
{
#line 1021 "inst_match.m"
  {
#line 1021 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1021 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "inst_match.m"
      {
#line 1021 "inst_match.m"
        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(check_hlds__inst_match__HOInstInfoA_6, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
      }
#line 1021 "inst_match.m"
    else
#line 1021 "inst_match.m"
      {
#line 1021 "inst_match.m"
        MR_Word check_hlds__inst_match__V_25_25 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_7), (MR_Integer) 1);

#line 1021 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1024 "inst_match.m"
          {
#line 1024 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_24_24;
#line 1024 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 1)));
#line 1024 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_14;
#line 1024 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_15;
#line 1024 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 0)));
#line 1026 "inst_match.m"
            MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 2)));
#line 1026 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 3)));

#line 1026 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 1);
#line 1024 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1024 "inst_match.m"
              {
#line 9525 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1027 "inst_match.m"
                {
#line 1027 "inst_match.m"
                  check_hlds__inst_match__Arity_14 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_24_24, check_hlds__inst_match__ArgModes_11);
                }
#line 1028 "inst_match.m"
                {
#line 1028 "inst_match.m"
                  check_hlds__inst_match__PredInstA_15 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_14);
                }
#line 1029 "inst_match.m"
                {
#line 1029 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(check_hlds__inst_match__PredInstA_15, check_hlds__inst_match__V_25_25, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                }
#line 1024 "inst_match.m"
              }
#line 1024 "inst_match.m"
          }
#line 1021 "inst_match.m"
        else
#line 1031 "inst_match.m"
          {
#line 1031 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);

#line 1033 "inst_match.m"
            {
#line 1033 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(check_hlds__inst_match__PredInstA_23, check_hlds__inst_match__V_25_25, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
            }
#line 1031 "inst_match.m"
          }
#line 1021 "inst_match.m"
      }
#line 1021 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1021 "inst_match.m"
  }
#line 1016 "inst_match.m"
}

#line 902 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
#line 902 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 902 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 902 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 902 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 902 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42)
#line 902 "inst_match.m"
{
#line 907 "inst_match.m"
  {
#line 907 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 907 "inst_match.m"
#line 907 "inst_match.m"
    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
#line 907 "inst_match.m"
      default:
#line 907 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
        break;
#line 907 "inst_match.m"
      case (MR_Integer) 0:
#line 907 "inst_match.m"
#line 907 "inst_match.m"
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
#line 907 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 907 "inst_match.m"
          case (MR_Integer) 0:
#line 907 "inst_match.m"
            if ((check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "inst_match.m"
              {
#line 932 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 932 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 932 "inst_match.m"
              }
#line 907 "inst_match.m"
            else
#line 907 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 924 "inst_match.m"
              {
#line 924 "inst_match.m"
                MR_Word check_hlds__inst_match__Uniq_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 925 "inst_match.m"
                MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 930 "inst_match.m"
#line 930 "inst_match.m"
                switch (check_hlds__inst_match__Uniq_20) {
#line 930 "inst_match.m"
                  default:
#line 930 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 930 "inst_match.m"
                    break;
#line 930 "inst_match.m"
                  case (MR_Integer) 3:
#line 930 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 930 "inst_match.m"
                    break;
#line 930 "inst_match.m"
                  case (MR_Integer) 4:
#line 930 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 930 "inst_match.m"
                    break;
#line 930 "inst_match.m"
                }
#line 924 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 924 "inst_match.m"
                  {
#line 924 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 924 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 924 "inst_match.m"
                  }
#line 924 "inst_match.m"
              }
#line 907 "inst_match.m"
            else
#line 907 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
            break;
#line 907 "inst_match.m"
          case (MR_Integer) 1:
#line 1003 "inst_match.m"
            {
#line 1003 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1003 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1003 "inst_match.m"
            }
#line 907 "inst_match.m"
            break;
#line 907 "inst_match.m"
        }
#line 907 "inst_match.m"
        break;
#line 907 "inst_match.m"
      case (MR_Integer) 2:
#line 907 "inst_match.m"
        {
#line 907 "inst_match.m"
          MR_Word check_hlds__inst_match__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 907 "inst_match.m"
          MR_Word check_hlds__inst_match__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));

#line 907 "inst_match.m"
#line 907 "inst_match.m"
          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 907 "inst_match.m"
            default:
#line 907 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
              break;
#line 907 "inst_match.m"
            case (MR_Integer) 2:
#line 907 "inst_match.m"
              {
#line 907 "inst_match.m"
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 907 "inst_match.m"
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 909 "inst_match.m"
                {
#line 909 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_156_156, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                }
#line 907 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 910 "inst_match.m"
                  {
#line 910 "inst_match.m"
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_157_157, check_hlds__inst_match__UniqB_12);
                  }
#line 907 "inst_match.m"
              }
#line 907 "inst_match.m"
              break;
#line 907 "inst_match.m"
            case (MR_Integer) 3:
#line 907 "inst_match.m"
#line 907 "inst_match.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 907 "inst_match.m"
                default:
#line 907 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
                case (MR_Integer) 0:
#line 918 "inst_match.m"
                  {
#line 918 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 918 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_76;
#line 920 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 920 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 920 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_106_106 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 920 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 920 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 920 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 920 "inst_match.m"
                    {
#line 920 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_67_67, check_hlds__inst_match__V_157_157, check_hlds__inst_match__V_156_156, &check_hlds__inst_match__NextInstA_76);
                    }
#line 918 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 922 "inst_match.m"
                      {
#line 922 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__NextInstA_76, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 918 "inst_match.m"
                  }
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
                case (MR_Integer) 1:
#line 912 "inst_match.m"
                  {
#line 912 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_16;
#line 912 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 914 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 914 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 914 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_100_100 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 914 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 914 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 914 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 914 "inst_match.m"
                    {
#line 914 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_69_69, check_hlds__inst_match__V_157_157, check_hlds__inst_match__V_156_156, &check_hlds__inst_match__NextInstA_16);
                    }
#line 912 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 916 "inst_match.m"
                      {
#line 916 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__NextInstA_16, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 912 "inst_match.m"
                  }
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
              }
#line 907 "inst_match.m"
              break;
#line 907 "inst_match.m"
          }
#line 907 "inst_match.m"
        }
#line 907 "inst_match.m"
        break;
#line 907 "inst_match.m"
      case (MR_Integer) 3:
#line 907 "inst_match.m"
#line 907 "inst_match.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
#line 907 "inst_match.m"
          default:
#line 907 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
            break;
#line 907 "inst_match.m"
          case (MR_Integer) 0:
#line 907 "inst_match.m"
            {
#line 907 "inst_match.m"
              MR_Word check_hlds__inst_match__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 907 "inst_match.m"
              MR_Word check_hlds__inst_match__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 907 "inst_match.m"
              MR_Word check_hlds__inst_match__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 907 "inst_match.m"
#line 907 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 907 "inst_match.m"
                default:
#line 907 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
                case (MR_Integer) 2:
#line 935 "inst_match.m"
                  {
#line 935 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 935 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_63_63;
#line 935 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_64_64;
#line 935 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_65_65;
#line 935 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 935 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_150_150;
#line 938 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_110_110;
#line 938 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_111_111;
#line 938 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_112_112;
#line 938 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_113_113;
#line 938 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_114_114;
#line 938 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_115_115;
#line 943 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_116_116;
#line 943 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_117_117;
#line 943 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_118_118;
#line 943 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_119_119;
#line 943 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_120_120;
#line 943 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_121_121;

#line 936 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 935 "inst_match.m"
                      {
#line 937 "inst_match.m"
                        {
#line 937 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_160_160, check_hlds__inst_match__UniqB_78);
                        }
#line 935 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 935 "inst_match.m"
                          {
#line 938 "inst_match.m"
                            check_hlds__inst_match__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 938 "inst_match.m"
                            check_hlds__inst_match__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 938 "inst_match.m"
                            check_hlds__inst_match__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 938 "inst_match.m"
                            check_hlds__inst_match__V_112_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 938 "inst_match.m"
                            check_hlds__inst_match__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 938 "inst_match.m"
                            check_hlds__inst_match__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 938 "inst_match.m"
                            check_hlds__inst_match__V_115_115 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 938 "inst_match.m"
                            {
#line 938 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(check_hlds__inst_match__V_158_158, check_hlds__inst_match__UniqB_78, check_hlds__inst_match__V_63_63);
                            }
#line 935 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 935 "inst_match.m"
                              {
#line 943 "inst_match.m"
                                check_hlds__inst_match__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 943 "inst_match.m"
                                check_hlds__inst_match__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 943 "inst_match.m"
                                check_hlds__inst_match__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 943 "inst_match.m"
                                check_hlds__inst_match__V_118_118 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 943 "inst_match.m"
                                check_hlds__inst_match__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 943 "inst_match.m"
                                check_hlds__inst_match__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 943 "inst_match.m"
                                check_hlds__inst_match__V_121_121 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 943 "inst_match.m"
                                {
#line 943 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_match__V_159_159, check_hlds__inst_match__V_158_158, check_hlds__inst_match__V_64_64);
                                }
#line 935 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 935 "inst_match.m"
                                  {
#line 945 "inst_match.m"
                                    check_hlds__inst_match__V_65_65 = (MR_Integer) 0;
#line 945 "inst_match.m"
                                    {
#line 945 "inst_match.m"
                                      check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__V_150_150, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                                    }
#line 945 "inst_match.m"
                                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_65_65 == check_hlds__inst_match__V_150_150);
#line 935 "inst_match.m"
                                  }
#line 935 "inst_match.m"
                              }
#line 935 "inst_match.m"
                          }
#line 935 "inst_match.m"
                      }
#line 935 "inst_match.m"
                  }
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
                case (MR_Integer) 3:
#line 907 "inst_match.m"
#line 907 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 907 "inst_match.m"
                    default:
#line 907 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
                      break;
#line 907 "inst_match.m"
                    case (MR_Integer) 0:
#line 947 "inst_match.m"
                      {
#line 947 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 947 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 948 "inst_match.m"
                        MR_Word check_hlds__inst_match___InstResultsB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 949 "inst_match.m"
                        {
#line 949 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_160_160, check_hlds__inst_match__UniqB_80);
                        }
#line 947 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 950 "inst_match.m"
                          {
#line 950 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(check_hlds__inst_match__V_158_158, check_hlds__inst_match__BoundInstsB_26, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                          }
#line 947 "inst_match.m"
                      }
#line 907 "inst_match.m"
                      break;
#line 907 "inst_match.m"
                    case (MR_Integer) 1:
#line 953 "inst_match.m"
                      {
#line 953 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 953 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_57_57;
#line 953 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_58_58;
#line 953 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_59_59;
#line 953 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 953 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_151_151;
#line 956 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_122_122;
#line 956 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_123_123;
#line 956 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_124_124;
#line 956 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_125_125;
#line 956 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_126_126;
#line 956 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_127_127;
#line 958 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_128_128;
#line 958 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_129_129;
#line 958 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_130_130;
#line 958 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_131_131;
#line 958 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_132_132;
#line 958 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_133_133;

#line 954 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 953 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 953 "inst_match.m"
                          {
#line 955 "inst_match.m"
                            {
#line 955 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_160_160, check_hlds__inst_match__UniqB_83);
                            }
#line 953 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 953 "inst_match.m"
                              {
#line 956 "inst_match.m"
                                check_hlds__inst_match__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 956 "inst_match.m"
                                check_hlds__inst_match__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 956 "inst_match.m"
                                check_hlds__inst_match__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 956 "inst_match.m"
                                check_hlds__inst_match__V_124_124 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 956 "inst_match.m"
                                check_hlds__inst_match__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 956 "inst_match.m"
                                check_hlds__inst_match__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 956 "inst_match.m"
                                check_hlds__inst_match__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 956 "inst_match.m"
                                {
#line 956 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_159_159, check_hlds__inst_match__V_158_158, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_57_57);
                                }
#line 953 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 953 "inst_match.m"
                                  {
#line 958 "inst_match.m"
                                    check_hlds__inst_match__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 958 "inst_match.m"
                                    check_hlds__inst_match__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 958 "inst_match.m"
                                    check_hlds__inst_match__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 958 "inst_match.m"
                                    check_hlds__inst_match__V_130_130 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 958 "inst_match.m"
                                    check_hlds__inst_match__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 958 "inst_match.m"
                                    check_hlds__inst_match__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 958 "inst_match.m"
                                    check_hlds__inst_match__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 958 "inst_match.m"
                                    {
#line 958 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(check_hlds__inst_match__V_158_158, check_hlds__inst_match__UniqB_83, check_hlds__inst_match__V_58_58);
                                    }
#line 953 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 953 "inst_match.m"
                                      {
#line 960 "inst_match.m"
                                        check_hlds__inst_match__V_59_59 = (MR_Integer) 0;
#line 960 "inst_match.m"
                                        {
#line 960 "inst_match.m"
                                          check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__V_151_151, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                                        }
#line 960 "inst_match.m"
                                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_59_59 == check_hlds__inst_match__V_151_151);
#line 953 "inst_match.m"
                                      }
#line 953 "inst_match.m"
                                  }
#line 953 "inst_match.m"
                              }
#line 953 "inst_match.m"
                          }
#line 953 "inst_match.m"
                      }
#line 907 "inst_match.m"
                      break;
#line 907 "inst_match.m"
                  }
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
              }
#line 907 "inst_match.m"
            }
#line 907 "inst_match.m"
            break;
#line 907 "inst_match.m"
          case (MR_Integer) 1:
#line 907 "inst_match.m"
            {
#line 907 "inst_match.m"
              MR_Word check_hlds__inst_match__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 907 "inst_match.m"
              MR_Word check_hlds__inst_match__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 907 "inst_match.m"
#line 907 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 907 "inst_match.m"
                default:
#line 907 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
                case (MR_Integer) 2:
#line 962 "inst_match.m"
                  {
#line 962 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 962 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 964 "inst_match.m"
                    {
#line 964 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_161_161, check_hlds__inst_match__HOInstInfoB_89, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
#line 962 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 965 "inst_match.m"
                      {
#line 965 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_162_162, check_hlds__inst_match__UniqB_88);
                      }
#line 962 "inst_match.m"
                  }
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
                case (MR_Integer) 3:
#line 907 "inst_match.m"
#line 907 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 907 "inst_match.m"
                    default:
#line 907 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
                      break;
#line 907 "inst_match.m"
                    case (MR_Integer) 0:
#line 967 "inst_match.m"
                      {
#line 967 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstResultsB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 967 "inst_match.m"
                        MR_Word check_hlds__inst_match__ModuleInfo_28;
#line 967 "inst_match.m"
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_51_51;
#line 967 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_52_52;
#line 967 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 967 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 967 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_152_152;
#line 971 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_134_134;
#line 971 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_135_135;
#line 971 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_136_136;
#line 971 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_137_137;
#line 971 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_138_138;
#line 971 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_139_139;

#line 969 "inst_match.m"
                        {
#line 969 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_ground_2_4_p_0(check_hlds__inst_match__V_161_161, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, &check_hlds__inst_match__STATE_VARIABLE_Info_51_51);
                        }
#line 967 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 967 "inst_match.m"
                          {
#line 970 "inst_match.m"
                            {
#line 970 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_162_162, check_hlds__inst_match__UniqB_92);
                            }
#line 967 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 967 "inst_match.m"
                              {
#line 971 "inst_match.m"
                                check_hlds__inst_match__ModuleInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 971 "inst_match.m"
                                check_hlds__inst_match__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 971 "inst_match.m"
                                check_hlds__inst_match__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 971 "inst_match.m"
                                check_hlds__inst_match__V_136_136 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 971 "inst_match.m"
                                check_hlds__inst_match__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 971 "inst_match.m"
                                check_hlds__inst_match__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 971 "inst_match.m"
                                check_hlds__inst_match__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 972 "inst_match.m"
                                {
#line 972 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__InstResultsB_27, check_hlds__inst_match__BoundInstsB_93, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__ModuleInfo_28);
                                }
#line 967 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 967 "inst_match.m"
                                  {
#line 974 "inst_match.m"
                                    {
#line 974 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(check_hlds__inst_match__V_162_162, check_hlds__inst_match__BoundInstsB_93, check_hlds__inst_match__ModuleInfo_28);
                                    }
#line 967 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 967 "inst_match.m"
                                      {
#line 975 "inst_match.m"
                                        check_hlds__inst_match__V_52_52 = (MR_Integer) 0;
#line 975 "inst_match.m"
                                        {
#line 975 "inst_match.m"
                                          check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstB_7, &check_hlds__inst_match__V_152_152, check_hlds__inst_match__STATE_VARIABLE_Info_51_51, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                                        }
#line 975 "inst_match.m"
                                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_52_52 == check_hlds__inst_match__V_152_152);
#line 967 "inst_match.m"
                                        if (check_hlds__inst_match__succeeded)
#line 967 "inst_match.m"
                                          {
#line 977 "inst_match.m"
                                            {
#line 977 "inst_match.m"
                                              MR_Word check_hlds__inst_match__TypeCtorInfo_146_146;
#line 977 "inst_match.m"
                                              MR_Word check_hlds__inst_match__Type_29;
#line 977 "inst_match.m"
                                              MR_Word check_hlds__inst_match__V_54_54;

#line 977 "inst_match.m"
                                              check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 977 "inst_match.m"
                                              if (check_hlds__inst_match__succeeded)
#line 977 "inst_match.m"
                                                {
#line 977 "inst_match.m"
                                                  check_hlds__inst_match__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 10313 "check_hlds.inst_match.c"
                                                  check_hlds__inst_match__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 979 "inst_match.m"
                                                  {
#line 979 "inst_match.m"
                                                    check_hlds__inst_match__V_54_54 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_146_146);
                                                  }
#line 979 "inst_match.m"
                                                  {
#line 979 "inst_match.m"
                                                    check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_54_54, check_hlds__inst_match__ModuleInfo_28, check_hlds__inst_match__BoundInstsB_93, check_hlds__inst_match__Type_29);
                                                  }
#line 977 "inst_match.m"
                                                }
#line 977 "inst_match.m"
                                            }
#line 981 "inst_match.m"
                                            if (!(check_hlds__inst_match__succeeded))
#line 985 "inst_match.m"
                                              {
#line 985 "inst_match.m"
                                                MR_Word check_hlds__inst_match__GroundMatchesBound_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 985 "inst_match.m"
                                                MR_Word check_hlds__inst_match__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 0)));
#line 985 "inst_match.m"
                                                MR_Word check_hlds__inst_match__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 1)));
#line 985 "inst_match.m"
                                                MR_Word check_hlds__inst_match__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 2)));
#line 985 "inst_match.m"
                                                MR_Word check_hlds__inst_match__V_143_143 = ((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 985 "inst_match.m"
                                                MR_Word check_hlds__inst_match__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 985 "inst_match.m"
                                                MR_Word check_hlds__inst_match__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__inst_match__STATE_VARIABLE_Info_42, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 986 "inst_match.m"
                                                check_hlds__inst_match__succeeded = (check_hlds__inst_match__GroundMatchesBound_30 == (MR_Integer) 1);
#line 985 "inst_match.m"
                                              }
#line 967 "inst_match.m"
                                          }
#line 967 "inst_match.m"
                                      }
#line 967 "inst_match.m"
                                  }
#line 967 "inst_match.m"
                              }
#line 967 "inst_match.m"
                          }
#line 967 "inst_match.m"
                      }
#line 907 "inst_match.m"
                      break;
#line 907 "inst_match.m"
                    case (MR_Integer) 1:
#line 989 "inst_match.m"
                      {
#line 989 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 989 "inst_match.m"
                        MR_Word check_hlds__inst_match__HOInstInfoB_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 991 "inst_match.m"
                        {
#line 991 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_161_161, check_hlds__inst_match__HOInstInfoB_97, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                        }
#line 989 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 992 "inst_match.m"
                          {
#line 992 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_162_162, check_hlds__inst_match__UniqB_96);
                          }
#line 989 "inst_match.m"
                      }
#line 907 "inst_match.m"
                      break;
#line 907 "inst_match.m"
                  }
#line 907 "inst_match.m"
                  break;
#line 907 "inst_match.m"
              }
#line 907 "inst_match.m"
            }
#line 907 "inst_match.m"
            break;
#line 907 "inst_match.m"
          case (MR_Integer) 3:
#line 1005 "inst_match.m"
            {
#line 1005 "inst_match.m"
              MR_Word check_hlds__inst_match__InstVarsA_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1005 "inst_match.m"
              MR_Word check_hlds__inst_match__SubInstA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1006 "inst_match.m"
              MR_Word check_hlds__inst_match__InstVarsB_39;
#line 1006 "inst_match.m"
              MR_Word check_hlds__inst_match__SubInstB_40;

#line 1006 "inst_match.m"
              check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1006 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 1006 "inst_match.m"
                {
#line 1006 "inst_match.m"
                  check_hlds__inst_match__InstVarsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1006 "inst_match.m"
                  check_hlds__inst_match__SubInstB_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1009 "inst_match.m"
                  {
#line 1009 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__subset_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], check_hlds__inst_match__InstVarsB_39, check_hlds__inst_match__InstVarsA_37);
                  }
#line 1009 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1010 "inst_match.m"
                    {
#line 1010 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_38, check_hlds__inst_match__SubInstB_40, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
#line 1006 "inst_match.m"
                }
#line 1006 "inst_match.m"
              else
#line 1012 "inst_match.m"
                {
#line 1012 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_38, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                }
#line 1005 "inst_match.m"
            }
#line 907 "inst_match.m"
            break;
#line 907 "inst_match.m"
          case (MR_Integer) 5:
#line 907 "inst_match.m"
            {
#line 907 "inst_match.m"
              MR_Word check_hlds__inst_match__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 907 "inst_match.m"
              MR_Word check_hlds__inst_match__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 907 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 994 "inst_match.m"
                {
#line 994 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 994 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 995 "inst_match.m"
                  check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_48_48 == (MR_Integer) 0);
#line 994 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 994 "inst_match.m"
                    {
#line 995 "inst_match.m"
                      check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 994 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 994 "inst_match.m"
                        {
#line 994 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 994 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 994 "inst_match.m"
                        }
#line 994 "inst_match.m"
                    }
#line 994 "inst_match.m"
                }
#line 907 "inst_match.m"
              else
#line 907 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 997 "inst_match.m"
                {
#line 997 "inst_match.m"
                  MR_Word check_hlds__inst_match__TypeCtorInfo_147_147;
#line 997 "inst_match.m"
                  MR_Word check_hlds__inst_match__TypeInfo_148_148;
#line 997 "inst_match.m"
                  MR_Word check_hlds__inst_match__ArgsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 997 "inst_match.m"
                  MR_Word check_hlds__inst_match__MaybeTypes_36;
#line 997 "inst_match.m"
                  MR_Integer check_hlds__inst_match__V_45_45;
#line 997 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_46_46;
#line 997 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 998 "inst_match.m"
                  {
#line 998 "inst_match.m"
                    check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__V_155_155, check_hlds__inst_match__V_153_153);
                  }
#line 997 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 997 "inst_match.m"
                    {
#line 10519 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 999 "inst_match.m"
                      {
#line 999 "inst_match.m"
                        check_hlds__inst_match__V_45_45 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_147_147, check_hlds__inst_match__V_154_154);
                      }
#line 999 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10528 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_148_148 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 999 "inst_match.m"
                      {
#line 999 "inst_match.m"
                        mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_148_148, check_hlds__inst_match__V_45_45, ((MR_Box) (check_hlds__inst_match__V_46_46)), &check_hlds__inst_match__MaybeTypes_36);
                      }
#line 1001 "inst_match.m"
                      {
#line 1001 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(check_hlds__inst_match__V_154_154, check_hlds__inst_match__ArgsB_35, check_hlds__inst_match__MaybeTypes_36, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 997 "inst_match.m"
                    }
#line 997 "inst_match.m"
                }
#line 907 "inst_match.m"
              else
#line 907 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 907 "inst_match.m"
            }
#line 907 "inst_match.m"
            break;
#line 907 "inst_match.m"
        }
#line 907 "inst_match.m"
        break;
#line 907 "inst_match.m"
    }
#line 907 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 907 "inst_match.m"
  }
#line 902 "inst_match.m"
}

#line 882 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 882 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 882 "inst_match.m"
{
#line 886 "inst_match.m"
  {
#line 886 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 886 "inst_match.m"
    {
#line 886 "inst_match.m"
      check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7);
    }
#line 886 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 886 "inst_match.m"
      {
#line 886 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 886 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 886 "inst_match.m"
      }
#line 886 "inst_match.m"
    else
#line 889 "inst_match.m"
      {
#line 889 "inst_match.m"
        MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 889 "inst_match.m"
        MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 890 "inst_match.m"
        MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 890 "inst_match.m"
        MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 890 "inst_match.m"
        MR_Word check_hlds__inst_match__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 890 "inst_match.m"
        MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 890 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 890 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 891 "inst_match.m"
        MR_Word check_hlds__inst_match__Expansions_12;

#line 889 "inst_match.m"
        {
#line 889 "inst_match.m"
          check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 889 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 889 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 889 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 889 "inst_match.m"
        }
#line 257 "inst_match.m"
        {
#line 257 "inst_match.m"
          check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
        }
#line 891 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 892 "inst_match.m"
          {
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19;
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 892 "inst_match.m"
            MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 894 "inst_match.m"
            MR_Word check_hlds__inst_match__V_42_42;
#line 894 "inst_match.m"
            MR_Word check_hlds__inst_match__V_43_43;
#line 894 "inst_match.m"
            MR_Word check_hlds__inst_match__V_44_44;
#line 894 "inst_match.m"
            MR_Word check_hlds__inst_match__V_45_45;
#line 894 "inst_match.m"
            MR_Word check_hlds__inst_match__V_46_46;
#line 894 "inst_match.m"
            MR_Word check_hlds__inst_match__V_47_47;

#line 892 "inst_match.m"
            {
#line 892 "inst_match.m"
              check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 892 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_29_29));
#line 892 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 892 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_31_31));
#line 892 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_32_32 | ((((check_hlds__inst_match__V_33_33 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_34_34 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_35_35 << (MR_Integer) 4)))))))));
#line 892 "inst_match.m"
            }
#line 893 "inst_match.m"
            {
#line 893 "inst_match.m"
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__V_29_29, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
            }
#line 894 "inst_match.m"
            check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 894 "inst_match.m"
            check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 894 "inst_match.m"
            check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 894 "inst_match.m"
            check_hlds__inst_match__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 894 "inst_match.m"
            check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 894 "inst_match.m"
            check_hlds__inst_match__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 894 "inst_match.m"
            check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 894 "inst_match.m"
            {
#line 894 "inst_match.m"
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
            }
#line 895 "inst_match.m"
            {
#line 895 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs__ho2_7_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
            }
#line 892 "inst_match.m"
          }
#line 891 "inst_match.m"
        else
#line 891 "inst_match.m"
          {
#line 891 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 891 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 891 "inst_match.m"
          }
#line 889 "inst_match.m"
      }
#line 886 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 886 "inst_match.m"
  }
#line 882 "inst_match.m"
}

#line 856 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
#line 856 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 856 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 856 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 856 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 856 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 856 "inst_match.m"
{
#line 860 "inst_match.m"
  while (MR_TRUE)
#line 860 "inst_match.m"
    {
#line 860 "inst_match.m"
      /* tailcall optimized into a loop */
#line 860 "inst_match.m"
      {
#line 860 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 860 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "inst_match.m"
          {
#line 860 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 860 "inst_match.m"
              {
#line 860 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 860 "inst_match.m"
                  {
#line 860 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 860 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 860 "inst_match.m"
                  }
#line 860 "inst_match.m"
              }
#line 860 "inst_match.m"
          }
#line 860 "inst_match.m"
        else
#line 862 "inst_match.m"
          {
#line 862 "inst_match.m"
            MR_Word check_hlds__inst_match__X_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 862 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 862 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_11;
#line 862 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_12;
#line 862 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 862 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 862 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 861 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 861 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 861 "inst_match.m"
              {
#line 861 "inst_match.m"
                check_hlds__inst_match__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 861 "inst_match.m"
                check_hlds__inst_match__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 861 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 861 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 861 "inst_match.m"
                  {
#line 861 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 861 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 863 "inst_match.m"
                    {
#line 863 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__X_9, check_hlds__inst_match__Y_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 862 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 864 "inst_match.m"
                      {
#line 864 "inst_match.m"
                        /* direct tailcall eliminated */
#line 864 "inst_match.m"
                        {
#line 864 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_10;
#line 864 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_12;
#line 864 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 864 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 864 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 864 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 864 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 864 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 864 "inst_match.m"
                        }
#line 864 "inst_match.m"
                        continue;
#line 864 "inst_match.m"
                      }
#line 861 "inst_match.m"
                  }
#line 861 "inst_match.m"
              }
#line 862 "inst_match.m"
          }
#line 860 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 860 "inst_match.m"
      }
#line 860 "inst_match.m"
      break;
#line 860 "inst_match.m"
    }
#line 856 "inst_match.m"
}

#line 834 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
#line 834 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 834 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 834 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 834 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 834 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 834 "inst_match.m"
{
#line 838 "inst_match.m"
  while (MR_TRUE)
#line 838 "inst_match.m"
    {
#line 838 "inst_match.m"
      /* tailcall optimized into a loop */
#line 838 "inst_match.m"
      {
#line 838 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 838 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "inst_match.m"
          {
#line 838 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 838 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 838 "inst_match.m"
          }
#line 838 "inst_match.m"
        else
#line 839 "inst_match.m"
          {
#line 839 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 839 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 839 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 839 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 839 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 839 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 839 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 839 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 839 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 839 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 839 "inst_match.m"
              {
#line 839 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 839 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 840 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 840 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 841 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 841 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 842 "inst_match.m"
                {
#line 842 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 842 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 844 "inst_match.m"
                  {
#line 844 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 844 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 844 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 844 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 843 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 843 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 843 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 843 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 843 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 843 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 844 "inst_match.m"
                    {
#line 844 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 843 "inst_match.m"
                    {
#line 843 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 845 "inst_match.m"
                    {
#line 845 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 844 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 846 "inst_match.m"
                      {
#line 846 "inst_match.m"
                        /* direct tailcall eliminated */
#line 846 "inst_match.m"
                        {
#line 846 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 846 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 846 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 846 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 846 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 846 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 846 "inst_match.m"
                        }
#line 846 "inst_match.m"
                        continue;
#line 846 "inst_match.m"
                      }
#line 844 "inst_match.m"
                  }
#line 842 "inst_match.m"
                else
#line 848 "inst_match.m"
                  {
#line 715 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_39;
#line 715 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_40;
#line 715 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_42;
#line 715 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_43;
#line 716 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_41_41;
#line 717 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_44_44;

#line 716 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 716 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 716 "inst_match.m"
                      {
#line 716 "inst_match.m"
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 716 "inst_match.m"
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 716 "inst_match.m"
                        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 717 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 717 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 717 "inst_match.m"
                          {
#line 717 "inst_match.m"
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 717 "inst_match.m"
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 717 "inst_match.m"
                            check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 717 "inst_match.m"
                          }
#line 716 "inst_match.m"
                      }
#line 715 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 721 "inst_match.m"
                      {
#line 721 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_45;
#line 721 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_47;
#line 721 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_49;

#line 720 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
#line 720 "inst_match.m"
                          {
#line 720 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

#line 720 "inst_match.m"
                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
#line 720 "inst_match.m"
                          }
#line 720 "inst_match.m"
                        else
#line 719 "inst_match.m"
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
#line 723 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
#line 723 "inst_match.m"
                          {
#line 723 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

#line 723 "inst_match.m"
                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
#line 723 "inst_match.m"
                          }
#line 723 "inst_match.m"
                        else
#line 722 "inst_match.m"
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
#line 725 "inst_match.m"
                        {
#line 725 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
#line 728 "inst_match.m"
#line 728 "inst_match.m"
                        switch (check_hlds__inst_match__O_49) {
#line 728 "inst_match.m"
                          default:
#line 728 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                          case (MR_Integer) 0:
#line 730 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                          case (MR_Integer) 2:
#line 727 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 728 "inst_match.m"
                            break;
#line 728 "inst_match.m"
                        }
#line 721 "inst_match.m"
                      }
#line 715 "inst_match.m"
                    else
#line 733 "inst_match.m"
                      {
#line 733 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;

#line 733 "inst_match.m"
                        {
#line 733 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_53_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 733 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_53_53);
#line 733 "inst_match.m"
                      }
#line 848 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 853 "inst_match.m"
                      {
#line 853 "inst_match.m"
                        /* direct tailcall eliminated */
#line 853 "inst_match.m"
                        {
#line 853 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 853 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 853 "inst_match.m"
                        }
#line 853 "inst_match.m"
                        continue;
#line 853 "inst_match.m"
                      }
#line 848 "inst_match.m"
                  }
#line 839 "inst_match.m"
              }
#line 839 "inst_match.m"
          }
#line 838 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 838 "inst_match.m"
      }
#line 838 "inst_match.m"
      break;
#line 838 "inst_match.m"
    }
#line 834 "inst_match.m"
}

#line 814 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
#line 814 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_4,
#line 814 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_5,
#line 814 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 814 "inst_match.m"
{
#line 818 "inst_match.m"
  {
#line 818 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_4 == (MR_Integer) 0);

#line 818 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 819 "inst_match.m"
      {
#line 819 "inst_match.m"
        check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
      }
#line 818 "inst_match.m"
    else
#line 820 "inst_match.m"
      {
#line 820 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_4 == (MR_Integer) 2);
#line 820 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 821 "inst_match.m"
          {
#line 821 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
          }
#line 820 "inst_match.m"
        else
#line 823 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 820 "inst_match.m"
      }
#line 818 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 818 "inst_match.m"
  }
#line 814 "inst_match.m"
}

#line 802 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_4,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_5,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 802 "inst_match.m"
{
#line 806 "inst_match.m"
  {
#line 806 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_5 == (MR_Integer) 1);

#line 806 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 807 "inst_match.m"
      {
#line 807 "inst_match.m"
        check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__BoundInsts_4, check_hlds__inst_match__ModuleInfo_6);
      }
#line 806 "inst_match.m"
    else
#line 808 "inst_match.m"
      {
#line 808 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_5 == (MR_Integer) 2);
#line 808 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 809 "inst_match.m"
          {
#line 809 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__BoundInsts_4, check_hlds__inst_match__ModuleInfo_6);
          }
#line 808 "inst_match.m"
        else
#line 811 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 808 "inst_match.m"
      }
#line 806 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 806 "inst_match.m"
  }
#line 802 "inst_match.m"
}

#line 794 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
#line 794 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 794 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_2,
#line 794 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_3,
#line 794 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4)
#line 794 "inst_match.m"
{
#line 797 "inst_match.m"
  {
#line 797 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 797 "inst_match.m"
#line 797 "inst_match.m"
    switch (check_hlds__inst_match__HeadVar__1_1) {
#line 797 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 797 "inst_match.m"
      case (MR_Integer) 1:
#line 818 "inst_match.m"
        {
#line 818 "inst_match.m"
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 0);
#line 818 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 819 "inst_match.m"
            {
#line 819 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
            }
#line 818 "inst_match.m"
          else
#line 820 "inst_match.m"
            {
#line 820 "inst_match.m"
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 2);
#line 820 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 821 "inst_match.m"
                {
#line 821 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
                }
#line 820 "inst_match.m"
              else
#line 823 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 820 "inst_match.m"
            }
#line 818 "inst_match.m"
        }
#line 797 "inst_match.m"
        break;
#line 797 "inst_match.m"
      case (MR_Integer) 0:
#line 806 "inst_match.m"
        {
#line 806 "inst_match.m"
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 1);
#line 806 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 807 "inst_match.m"
            {
#line 807 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
            }
#line 806 "inst_match.m"
          else
#line 808 "inst_match.m"
            {
#line 808 "inst_match.m"
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 2);
#line 808 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 809 "inst_match.m"
                {
#line 809 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
                }
#line 808 "inst_match.m"
              else
#line 811 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 808 "inst_match.m"
            }
#line 806 "inst_match.m"
        }
#line 797 "inst_match.m"
        break;
#line 797 "inst_match.m"
    }
#line 797 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 797 "inst_match.m"
  }
#line 794 "inst_match.m"
}

#line 769 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
#line 769 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 769 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_2,
#line 769 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_3)
#line 769 "inst_match.m"
{
#line 772 "inst_match.m"
  {
#line 772 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 772 "inst_match.m"
#line 772 "inst_match.m"
    switch (check_hlds__inst_match__HeadVar__1_1) {
#line 772 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 772 "inst_match.m"
      case (MR_Integer) 1:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
        switch (check_hlds__inst_match__InstB_3) {
#line 777 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 777 "inst_match.m"
          case (MR_Integer) 3:
#line 787 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstA_2 == (MR_Integer) 3);
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 4:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
            switch (check_hlds__inst_match__InstA_2) {
#line 777 "inst_match.m"
              default:
#line 777 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 3:
#line 786 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 4:
#line 785 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
            }
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 2:
#line 777 "inst_match.m"
            if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__InstA_2))))
#line 777 "inst_match.m"
              {
#line 777 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
              }
#line 777 "inst_match.m"
            else
#line 777 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 0:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
            switch (check_hlds__inst_match__InstA_2) {
#line 777 "inst_match.m"
              default:
#line 777 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 3:
#line 784 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 4:
#line 783 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 0:
#line 782 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
            }
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 1:
#line 777 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
        }
#line 772 "inst_match.m"
        break;
#line 772 "inst_match.m"
      case (MR_Integer) 0:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
        switch (check_hlds__inst_match__InstA_2) {
#line 777 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 777 "inst_match.m"
          case (MR_Integer) 3:
#line 787 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_3 == (MR_Integer) 3);
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 4:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
            switch (check_hlds__inst_match__InstB_3) {
#line 777 "inst_match.m"
              default:
#line 777 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 3:
#line 786 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 4:
#line 785 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
            }
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 2:
#line 777 "inst_match.m"
            if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__InstB_3))))
#line 777 "inst_match.m"
              {
#line 777 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
              }
#line 777 "inst_match.m"
            else
#line 777 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 0:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
            switch (check_hlds__inst_match__InstB_3) {
#line 777 "inst_match.m"
              default:
#line 777 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 3:
#line 784 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 4:
#line 783 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
              case (MR_Integer) 0:
#line 782 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
                break;
#line 777 "inst_match.m"
            }
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 1:
#line 777 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
        }
#line 772 "inst_match.m"
        break;
#line 772 "inst_match.m"
    }
#line 772 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 772 "inst_match.m"
  }
#line 769 "inst_match.m"
}

#line 741 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
#line 741 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 741 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 741 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 741 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 741 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 741 "inst_match.m"
{
#line 746 "inst_match.m"
  {
#line 746 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 746 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1383 "inst_match.m"
      if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1386 "inst_match.m"
        {
#line 1386 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_17 = check_hlds__inst_match__STATE_VARIABLE_Info_0_16;
#line 1386 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1386 "inst_match.m"
        }
#line 1383 "inst_match.m"
      else
#line 1383 "inst_match.m"
        {
#line 1383 "inst_match.m"
          MR_Word check_hlds__inst_match__PredInst_67 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);

#line 1384 "inst_match.m"
          {
#line 1384 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(check_hlds__inst_match__PredInst_67, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
          }
#line 1383 "inst_match.m"
        }
#line 746 "inst_match.m"
    else
#line 746 "inst_match.m"
      {
#line 746 "inst_match.m"
        MR_Word check_hlds__inst_match__V_25_25 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_7), (MR_Integer) 1);

#line 746 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "inst_match.m"
          {
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_24_24;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_59;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 1)));
#line 749 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_14;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_15;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 0)));
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_50;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_51;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_53;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_54;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_56;
#line 749 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_57_57;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__V_60_60;
#line 749 "inst_match.m"
            MR_Word check_hlds__inst_match__V_61_61;
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 2)));
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 3)));
#line 1441 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_52;
#line 1442 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_55;

#line 751 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 1);
#line 749 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 749 "inst_match.m"
              {
#line 11734 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 752 "inst_match.m"
                {
#line 752 "inst_match.m"
                  check_hlds__inst_match__Arity_14 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_24_24, check_hlds__inst_match__ArgModes_11);
                }
#line 753 "inst_match.m"
                {
#line 753 "inst_match.m"
                  check_hlds__inst_match__PredInstA_15 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_14);
                }
#line 1441 "inst_match.m"
                check_hlds__inst_match__PredOrFunc_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 0)));
#line 1441 "inst_match.m"
                check_hlds__inst_match__ModesA_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 1)));
#line 1441 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsA_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 2)));
#line 1441 "inst_match.m"
                check_hlds__inst_match__Det_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 3)));
#line 1442 "inst_match.m"
                check_hlds__inst_match__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 0)));
#line 1442 "inst_match.m"
                check_hlds__inst_match__ModesB_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 1)));
#line 1442 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsB_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 2)));
#line 1442 "inst_match.m"
                check_hlds__inst_match__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 3)));
#line 1442 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_50 == check_hlds__inst_match__V_60_60);
#line 749 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 749 "inst_match.m"
                  {
#line 1442 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_53 == check_hlds__inst_match__V_61_61);
#line 749 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 749 "inst_match.m"
                      {
#line 11774 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_21_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1443 "inst_match.m"
                        {
#line 1443 "inst_match.m"
                          check_hlds__inst_match__V_57_57 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_59, check_hlds__inst_match__ModesA_51);
                        }
#line 1443 "inst_match.m"
                        {
#line 1443 "inst_match.m"
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_57_57, &check_hlds__inst_match__MaybeTypes_56);
                        }
#line 1444 "inst_match.m"
                        {
#line 1444 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_51, check_hlds__inst_match__ModesB_54, check_hlds__inst_match__MaybeTypes_56, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                        }
#line 749 "inst_match.m"
                      }
#line 749 "inst_match.m"
                  }
#line 749 "inst_match.m"
              }
#line 749 "inst_match.m"
          }
#line 746 "inst_match.m"
        else
#line 756 "inst_match.m"
          {
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_41;
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 0)));
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 1)));
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 3)));
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 1)));
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_38;
#line 756 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_39_39;
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 0)));
#line 756 "inst_match.m"
            MR_Word check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 3)));
#line 1441 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 2)));
#line 1442 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_25_25, (MR_Integer) 2)));

#line 1442 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_32 == check_hlds__inst_match__V_42_42);
#line 756 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 756 "inst_match.m"
              {
#line 1442 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_35 == check_hlds__inst_match__V_43_43);
#line 756 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 756 "inst_match.m"
                  {
#line 11840 "check_hlds.inst_match.c"
                    check_hlds__inst_match__TypeCtorInfo_21_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1443 "inst_match.m"
                    {
#line 1443 "inst_match.m"
                      check_hlds__inst_match__V_39_39 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_41, check_hlds__inst_match__ModesA_33);
                    }
#line 1443 "inst_match.m"
                    {
#line 1443 "inst_match.m"
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_39_39, &check_hlds__inst_match__MaybeTypes_38);
                    }
#line 1444 "inst_match.m"
                    {
#line 1444 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_33, check_hlds__inst_match__ModesB_36, check_hlds__inst_match__MaybeTypes_38, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                    }
#line 756 "inst_match.m"
                  }
#line 756 "inst_match.m"
              }
#line 756 "inst_match.m"
          }
#line 746 "inst_match.m"
      }
#line 746 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 746 "inst_match.m"
  }
#line 741 "inst_match.m"
}

#line 683 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 683 "inst_match.m"
{
#line 683 "inst_match.m"
  {
#line 683 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 683 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;

#line 683 "inst_match.m"
    {
#line 683 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 683 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 683 "inst_match.m"
  }
#line 683 "inst_match.m"
}

#line 666 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
#line 666 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 666 "inst_match.m"
{
#line 666 "inst_match.m"
  {
#line 666 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 666 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0, 1);
#line 666 "inst_match.m"
  }
#line 666 "inst_match.m"
}

#line 666 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
#line 666 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 666 "inst_match.m"
{
#line 666 "inst_match.m"
  {
#line 666 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 666 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
#line 666 "inst_match.m"
      {
#line 666 "inst_match.m"
        {
#line 666 "inst_match.m"
          MR_Word check_hlds__inst_match__V_21_21;
#line 666 "inst_match.m"
          MR_Word check_hlds__inst_match__V_22_22;

#line 666 "inst_match.m"
          {
#line 666 "inst_match.m"
            check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &check_hlds__inst_match__V_21_21, &check_hlds__inst_match__V_22_22, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1, check_hlds__inst_match__env_ptr);
          }
#line 666 "inst_match.m"
        }
#line 666 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 666 "inst_match.m"
      }
#line 666 "inst_match.m"
    else
#line 666 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 666 "inst_match.m"
  }
#line 666 "inst_match.m"
}

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 674 "inst_match.m"
{
#line 674 "inst_match.m"
  {
#line 674 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 674 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1, 1);
#line 674 "inst_match.m"
  }
#line 674 "inst_match.m"
}

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 678 "inst_match.m"
{
#line 678 "inst_match.m"
  {
#line 678 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2, 1);
#line 678 "inst_match.m"
  }
#line 678 "inst_match.m"
}

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 678 "inst_match.m"
{
#line 678 "inst_match.m"
  {
#line 678 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27);
#line 678 "inst_match.m"
    {
#line 678 "inst_match.m"
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(check_hlds__inst_match__env_ptr);
    }
#line 678 "inst_match.m"
  }
#line 678 "inst_match.m"
}

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 678 "inst_match.m"
{
#line 678 "inst_match.m"
  {
#line 678 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27, (MR_Integer) 0)));
#line 678 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27, (MR_Integer) 1)));
#line 682 "inst_match.m"
    {
#line 682 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23);
    }
#line 678 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 678 "inst_match.m"
      {
#line 12051 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 12053 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 683 "inst_match.m"
        {
#line 683 "inst_match.m"
          MR_Word base;
#line 683 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 683 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28 = base;
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8));
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5));
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
#line 683 "inst_match.m"
        }
#line 683 "inst_match.m"
        {
#line 683 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24);
        }
#line 683 "inst_match.m"
        if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 683 "inst_match.m"
          {
#line 683 "inst_match.m"
            check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(check_hlds__inst_match__env_ptr);
          }
#line 678 "inst_match.m"
      }
#line 678 "inst_match.m"
  }
#line 678 "inst_match.m"
}

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 678 "inst_match.m"
{
#line 678 "inst_match.m"
  {
#line 678 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
#line 678 "inst_match.m"
      {
#line 678 "inst_match.m"
        {
#line 678 "inst_match.m"
          {
#line 678 "inst_match.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7, check_hlds__inst_match__env_ptr);
          }
#line 678 "inst_match.m"
        }
#line 678 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 678 "inst_match.m"
      }
#line 678 "inst_match.m"
    else
#line 678 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 678 "inst_match.m"
  }
#line 678 "inst_match.m"
}

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 674 "inst_match.m"
{
#line 674 "inst_match.m"
  {
#line 674 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    {
#line 678 "inst_match.m"
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(check_hlds__inst_match__env_ptr);
    }
#line 676 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 676 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 676 "inst_match.m"
      {
#line 676 "inst_match.m"
        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(check_hlds__inst_match__env_ptr);
      }
#line 674 "inst_match.m"
  }
#line 674 "inst_match.m"
}

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 674 "inst_match.m"
{
#line 674 "inst_match.m"
  {
#line 674 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 674 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
#line 674 "inst_match.m"
      {
#line 675 "inst_match.m"
        {
#line 675 "inst_match.m"
          check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4, check_hlds__inst_match__env_ptr);
        }
#line 674 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 674 "inst_match.m"
      }
#line 674 "inst_match.m"
    else
#line 674 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 674 "inst_match.m"
  }
#line 674 "inst_match.m"
}

#line 688 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_7,
#line 688 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8)
#line 688 "inst_match.m"
{
#line 688 "inst_match.m"
  {
#line 688 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s check_hlds__inst_match__env;

#line 688 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions_5;
#line 688 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = check_hlds__inst_match__ModuleInfo_6;
#line 688 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8 = check_hlds__inst_match__Type_8;
#line 693 "inst_match.m"
    while (MR_TRUE)
#line 693 "inst_match.m"
      {
#line 693 "inst_match.m"
        /* tailcall optimized into a loop */
#line 693 "inst_match.m"
        {
#line 693 "inst_match.m"
          MR_Word check_hlds__inst_match__Name_9;

#line 693 "inst_match.m"
          (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 693 "inst_match.m"
          if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 693 "inst_match.m"
            {
#line 693 "inst_match.m"
              check_hlds__inst_match__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));
#line 694 "inst_match.m"
              {
#line 694 "inst_match.m"
                (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__Name_9)), (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5);
              }
#line 694 "inst_match.m"
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 695 "inst_match.m"
                (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 694 "inst_match.m"
              else
#line 697 "inst_match.m"
                {
#line 697 "inst_match.m"
                  MR_Word check_hlds__inst_match__ExpandedInst_10;
#line 697 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_14_14;

#line 697 "inst_match.m"
                  {
#line 697 "inst_match.m"
                    check_hlds__mode_util__inst_lookup_3_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, check_hlds__inst_match__Name_9, &check_hlds__inst_match__ExpandedInst_10);
                  }
#line 698 "inst_match.m"
                  {
#line 698 "inst_match.m"
                    check_hlds__inst_match__V_14_14 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5, ((MR_Box) (check_hlds__inst_match__Name_9)));
                  }
#line 698 "inst_match.m"
                  /* direct tailcall eliminated */
#line 698 "inst_match.m"
                  {
#line 698 "inst_match.m"
                    MR_Word check_hlds__inst_match__Expansions__tmp_copy_5 = check_hlds__inst_match__V_14_14;
#line 698 "inst_match.m"
                    MR_Word check_hlds__inst_match__Inst__tmp_copy_7 = check_hlds__inst_match__ExpandedInst_10;

#line 698 "inst_match.m"
                    check_hlds__inst_match__Inst_7 = check_hlds__inst_match__Inst__tmp_copy_7;
#line 698 "inst_match.m"
                    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions__tmp_copy_5;
#line 698 "inst_match.m"
                  }
#line 698 "inst_match.m"
                  continue;
#line 697 "inst_match.m"
                }
#line 693 "inst_match.m"
            }
#line 693 "inst_match.m"
          else
#line 701 "inst_match.m"
            {
#line 701 "inst_match.m"
              MR_Word check_hlds__inst_match__V_11_11;
#line 701 "inst_match.m"
              MR_Word check_hlds__inst_match__V_12_12;

#line 701 "inst_match.m"
              (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 701 "inst_match.m"
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 701 "inst_match.m"
                {
#line 701 "inst_match.m"
                  check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));
#line 701 "inst_match.m"
                  check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 2)));
#line 701 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 3)));
#line 666 "inst_match.m"
                  {
#line 666 "inst_match.m"
                    check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(&check_hlds__inst_match__env);
                  }
#line 664 "inst_match.m"
                  if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 664 "inst_match.m"
                    {
#line 674 "inst_match.m"
                      {
#line 674 "inst_match.m"
                        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(&check_hlds__inst_match__env);
                      }
#line 674 "inst_match.m"
                      (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 664 "inst_match.m"
                    }
#line 701 "inst_match.m"
                }
#line 701 "inst_match.m"
              else
#line 705 "inst_match.m"
                {
#line 705 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = (check_hlds__inst_match__Inst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 705 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 705 "inst_match.m"
                }
#line 701 "inst_match.m"
            }
#line 693 "inst_match.m"
          return (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
#line 693 "inst_match.m"
        }
#line 693 "inst_match.m"
        break;
#line 693 "inst_match.m"
      }
#line 688 "inst_match.m"
  }
#line 688 "inst_match.m"
}

#line 683 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 683 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 683 "inst_match.m"
{
#line 683 "inst_match.m"
  {
#line 683 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 683 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;

#line 683 "inst_match.m"
    {
#line 683 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 683 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 683 "inst_match.m"
  }
#line 683 "inst_match.m"
}

#line 666 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
#line 666 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 666 "inst_match.m"
{
#line 666 "inst_match.m"
  {
#line 666 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 666 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0, 1);
#line 666 "inst_match.m"
  }
#line 666 "inst_match.m"
}

#line 666 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
#line 666 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 666 "inst_match.m"
{
#line 666 "inst_match.m"
  {
#line 666 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 666 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
#line 666 "inst_match.m"
      {
#line 666 "inst_match.m"
        {
#line 666 "inst_match.m"
          MR_Word check_hlds__inst_match__V_9_9;
#line 666 "inst_match.m"
          MR_Word check_hlds__inst_match__V_10_10;

#line 666 "inst_match.m"
          {
#line 666 "inst_match.m"
            check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &check_hlds__inst_match__V_9_9, &check_hlds__inst_match__V_10_10, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1, check_hlds__inst_match__env_ptr);
          }
#line 666 "inst_match.m"
        }
#line 666 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 666 "inst_match.m"
      }
#line 666 "inst_match.m"
    else
#line 666 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 666 "inst_match.m"
  }
#line 666 "inst_match.m"
}

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 674 "inst_match.m"
{
#line 674 "inst_match.m"
  {
#line 674 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 674 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1, 1);
#line 674 "inst_match.m"
  }
#line 674 "inst_match.m"
}

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 678 "inst_match.m"
{
#line 678 "inst_match.m"
  {
#line 678 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2, 1);
#line 678 "inst_match.m"
  }
#line 678 "inst_match.m"
}

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 678 "inst_match.m"
{
#line 678 "inst_match.m"
  {
#line 678 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15);
#line 678 "inst_match.m"
    {
#line 678 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(check_hlds__inst_match__env_ptr);
    }
#line 678 "inst_match.m"
  }
#line 678 "inst_match.m"
}

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 678 "inst_match.m"
{
#line 678 "inst_match.m"
  {
#line 678 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15, (MR_Integer) 0)));
#line 678 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15, (MR_Integer) 1)));
#line 682 "inst_match.m"
    {
#line 682 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11);
    }
#line 678 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 678 "inst_match.m"
      {
#line 12534 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 12536 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 683 "inst_match.m"
        {
#line 683 "inst_match.m"
          MR_Word base;
#line 683 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 683 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16 = base;
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8));
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5));
#line 683 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
#line 683 "inst_match.m"
        }
#line 683 "inst_match.m"
        {
#line 683 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12);
        }
#line 683 "inst_match.m"
        if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 683 "inst_match.m"
          {
#line 683 "inst_match.m"
            check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(check_hlds__inst_match__env_ptr);
          }
#line 678 "inst_match.m"
      }
#line 678 "inst_match.m"
  }
#line 678 "inst_match.m"
}

#line 678 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
#line 678 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 678 "inst_match.m"
{
#line 678 "inst_match.m"
  {
#line 678 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
#line 678 "inst_match.m"
      {
#line 678 "inst_match.m"
        {
#line 678 "inst_match.m"
          {
#line 678 "inst_match.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7, check_hlds__inst_match__env_ptr);
          }
#line 678 "inst_match.m"
        }
#line 678 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 678 "inst_match.m"
      }
#line 678 "inst_match.m"
    else
#line 678 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 678 "inst_match.m"
  }
#line 678 "inst_match.m"
}

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 674 "inst_match.m"
{
#line 674 "inst_match.m"
  {
#line 674 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 678 "inst_match.m"
    {
#line 678 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(check_hlds__inst_match__env_ptr);
    }
#line 676 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
#line 676 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 676 "inst_match.m"
      {
#line 676 "inst_match.m"
        check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(check_hlds__inst_match__env_ptr);
      }
#line 674 "inst_match.m"
  }
#line 674 "inst_match.m"
}

#line 674 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
#line 674 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 674 "inst_match.m"
{
#line 674 "inst_match.m"
  {
#line 674 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 674 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
#line 674 "inst_match.m"
      {
#line 675 "inst_match.m"
        {
#line 675 "inst_match.m"
          check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4, check_hlds__inst_match__env_ptr);
        }
#line 674 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 674 "inst_match.m"
      }
#line 674 "inst_match.m"
    else
#line 674 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 674 "inst_match.m"
  }
#line 674 "inst_match.m"
}

#line 660 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_7,
#line 660 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8)
#line 660 "inst_match.m"
{
#line 660 "inst_match.m"
  {
#line 660 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s check_hlds__inst_match__env;

#line 660 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions_5;
#line 660 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = check_hlds__inst_match__ModuleInfo_6;
#line 660 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7 = check_hlds__inst_match__BoundInsts_7;
#line 660 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8 = check_hlds__inst_match__Type_8;
#line 666 "inst_match.m"
    {
#line 666 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(&check_hlds__inst_match__env);
    }
#line 664 "inst_match.m"
    if ((check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 664 "inst_match.m"
      {
#line 674 "inst_match.m"
        {
#line 674 "inst_match.m"
          check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(&check_hlds__inst_match__env);
        }
#line 674 "inst_match.m"
        (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
#line 664 "inst_match.m"
      }
#line 664 "inst_match.m"
    return (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
#line 660 "inst_match.m"
  }
#line 660 "inst_match.m"
}

#line 643 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
#line 643 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 643 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 643 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 643 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 643 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 643 "inst_match.m"
{
#line 647 "inst_match.m"
  while (MR_TRUE)
#line 647 "inst_match.m"
    {
#line 647 "inst_match.m"
      /* tailcall optimized into a loop */
#line 647 "inst_match.m"
      {
#line 647 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 647 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "inst_match.m"
          {
#line 647 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 647 "inst_match.m"
              {
#line 647 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 647 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 647 "inst_match.m"
              }
#line 647 "inst_match.m"
          }
#line 647 "inst_match.m"
        else
#line 649 "inst_match.m"
          {
#line 649 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 649 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 649 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 649 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 649 "inst_match.m"
            MR_Word check_hlds__inst_match__Ground_16;
#line 649 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19;
#line 649 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_20_20;

#line 649 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 649 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 649 "inst_match.m"
              {
#line 649 "inst_match.m"
                check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 649 "inst_match.m"
                check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 650 "inst_match.m"
                check_hlds__inst_match__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 650 "inst_match.m"
                {
#line 650 "inst_match.m"
                  check_hlds__inst_match__Ground_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 650 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__Ground_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 650 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__Ground_16, 1) = ((MR_Box) (check_hlds__inst_match__Uniq_1));
#line 650 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__Ground_16, 2) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 650 "inst_match.m"
                }
#line 651 "inst_match.m"
                {
#line 651 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__Ground_16, check_hlds__inst_match__Inst_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_20_20);
                }
#line 649 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 652 "inst_match.m"
                  {
#line 652 "inst_match.m"
                    /* direct tailcall eliminated */
#line 652 "inst_match.m"
                    {
#line 652 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Insts_12;
#line 652 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 652 "inst_match.m"
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_20_20;

#line 652 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 652 "inst_match.m"
                      check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 652 "inst_match.m"
                      check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 652 "inst_match.m"
                    }
#line 652 "inst_match.m"
                    continue;
#line 652 "inst_match.m"
                  }
#line 649 "inst_match.m"
              }
#line 649 "inst_match.m"
          }
#line 647 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 647 "inst_match.m"
      }
#line 647 "inst_match.m"
      break;
#line 647 "inst_match.m"
    }
#line 643 "inst_match.m"
}

#line 630 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
#line 630 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 630 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 630 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 630 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 630 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 630 "inst_match.m"
{
#line 634 "inst_match.m"
  while (MR_TRUE)
#line 634 "inst_match.m"
    {
#line 634 "inst_match.m"
      /* tailcall optimized into a loop */
#line 634 "inst_match.m"
      {
#line 634 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 634 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "inst_match.m"
          {
#line 634 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 634 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 634 "inst_match.m"
          }
#line 634 "inst_match.m"
        else
#line 636 "inst_match.m"
          {
#line 636 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 636 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 636 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 0)));
#line 636 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 1)));
#line 636 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_18;
#line 636 "inst_match.m"
            MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 636 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_22_22;
#line 636 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_23_23;
#line 638 "inst_match.m"
            MR_Word check_hlds__inst_match__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 638 "inst_match.m"
            MR_Word check_hlds__inst_match__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 638 "inst_match.m"
            MR_Word check_hlds__inst_match__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 638 "inst_match.m"
            MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 638 "inst_match.m"
            MR_Word check_hlds__inst_match__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 638 "inst_match.m"
            MR_Word check_hlds__inst_match__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 639 "inst_match.m"
            {
#line 639 "inst_match.m"
              check_hlds__inst_match__V_22_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__Args_17);
            }
#line 638 "inst_match.m"
            {
#line 638 "inst_match.m"
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_21_21, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsId_16, check_hlds__inst_match__V_22_22, &check_hlds__inst_match__MaybeTypes_18);
            }
#line 640 "inst_match.m"
            {
#line 640 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(check_hlds__inst_match__Uniq_1, check_hlds__inst_match__Args_17, check_hlds__inst_match__MaybeTypes_18, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_23_23);
            }
#line 636 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 641 "inst_match.m"
              {
#line 641 "inst_match.m"
                /* direct tailcall eliminated */
#line 641 "inst_match.m"
                {
#line 641 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__BoundInsts_13;
#line 641 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_23_23;

#line 641 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 641 "inst_match.m"
                  check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 641 "inst_match.m"
                }
#line 641 "inst_match.m"
                continue;
#line 641 "inst_match.m"
              }
#line 636 "inst_match.m"
          }
#line 634 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 634 "inst_match.m"
      }
#line 634 "inst_match.m"
      break;
#line 634 "inst_match.m"
    }
#line 630 "inst_match.m"
}

#line 496 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
#line 496 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 496 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 496 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 496 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_48,
#line 496 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_49)
#line 496 "inst_match.m"
{
#line 506 "inst_match.m"
  {
#line 506 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 506 "inst_match.m"
#line 506 "inst_match.m"
    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
#line 506 "inst_match.m"
      default:
#line 506 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
        break;
#line 506 "inst_match.m"
      case (MR_Integer) 0:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
#line 506 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 506 "inst_match.m"
          case (MR_Integer) 0:
#line 528 "inst_match.m"
            {
#line 529 "inst_match.m"
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
                {
#line 528 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
#line 528 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
                }
#line 528 "inst_match.m"
            }
#line 506 "inst_match.m"
            break;
#line 506 "inst_match.m"
          case (MR_Integer) 1:
#line 622 "inst_match.m"
            {
#line 622 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
#line 622 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 622 "inst_match.m"
            }
#line 506 "inst_match.m"
            break;
#line 506 "inst_match.m"
        }
#line 506 "inst_match.m"
        break;
#line 506 "inst_match.m"
      case (MR_Integer) 2:
#line 506 "inst_match.m"
        {
#line 506 "inst_match.m"
          MR_Word check_hlds__inst_match__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 506 "inst_match.m"
          MR_Word check_hlds__inst_match__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));

#line 506 "inst_match.m"
#line 506 "inst_match.m"
          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 506 "inst_match.m"
            default:
#line 506 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
              break;
#line 506 "inst_match.m"
            case (MR_Integer) 0:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
              switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
#line 506 "inst_match.m"
                default:
#line 506 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 0:
#line 513 "inst_match.m"
                  {
#line 513 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
#line 513 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 513 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
              }
#line 506 "inst_match.m"
              break;
#line 506 "inst_match.m"
            case (MR_Integer) 2:
#line 506 "inst_match.m"
              {
#line 506 "inst_match.m"
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 506 "inst_match.m"
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 506 "inst_match.m"
                MR_Word check_hlds__inst_match__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 506 "inst_match.m"
                MR_Word check_hlds__inst_match__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 508 "inst_match.m"
                MR_Word check_hlds__inst_match__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 508 "inst_match.m"
                MR_Word check_hlds__inst_match__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 508 "inst_match.m"
                MR_Word check_hlds__inst_match__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 508 "inst_match.m"
                MR_Word check_hlds__inst_match__V_128_128 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 508 "inst_match.m"
                MR_Word check_hlds__inst_match__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 508 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_93_93 == (MR_Integer) 1);
#line 506 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 506 "inst_match.m"
                  {
#line 509 "inst_match.m"
                    {
#line 509 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_129_129, check_hlds__inst_match__V_249_249, check_hlds__inst_match__UniqB_12);
                    }
#line 506 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 510 "inst_match.m"
                      {
#line 510 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_248_248, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                      }
#line 506 "inst_match.m"
                  }
#line 506 "inst_match.m"
              }
#line 506 "inst_match.m"
              break;
#line 506 "inst_match.m"
            case (MR_Integer) 3:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 506 "inst_match.m"
                default:
#line 506 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 0:
#line 522 "inst_match.m"
                  {
#line 522 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 522 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_100;
#line 524 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 524 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 524 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_145_145 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 524 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 524 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 524 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 524 "inst_match.m"
                    {
#line 524 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_89_89, check_hlds__inst_match__V_249_249, check_hlds__inst_match__V_248_248, &check_hlds__inst_match__NextInstA_100);
                    }
#line 522 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 526 "inst_match.m"
                      {
#line 526 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__NextInstA_100, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                      }
#line 522 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 1:
#line 516 "inst_match.m"
                  {
#line 516 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_18;
#line 516 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 518 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 518 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 518 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_139_139 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 518 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 518 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 518 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 518 "inst_match.m"
                    {
#line 518 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_91_91, check_hlds__inst_match__V_249_249, check_hlds__inst_match__V_248_248, &check_hlds__inst_match__NextInstA_18);
                    }
#line 516 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 520 "inst_match.m"
                      {
#line 520 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__NextInstA_18, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                      }
#line 516 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
              }
#line 506 "inst_match.m"
              break;
#line 506 "inst_match.m"
          }
#line 506 "inst_match.m"
        }
#line 506 "inst_match.m"
        break;
#line 506 "inst_match.m"
      case (MR_Integer) 3:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
#line 506 "inst_match.m"
          default:
#line 506 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
            break;
#line 506 "inst_match.m"
          case (MR_Integer) 0:
#line 506 "inst_match.m"
            {
#line 506 "inst_match.m"
              MR_Word check_hlds__inst_match__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 506 "inst_match.m"
              MR_Word check_hlds__inst_match__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 506 "inst_match.m"
              MR_Word check_hlds__inst_match__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 506 "inst_match.m"
#line 506 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 506 "inst_match.m"
                default:
#line 506 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 0:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
#line 506 "inst_match.m"
                    default:
#line 506 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 0:
#line 538 "inst_match.m"
                      {
#line 538 "inst_match.m"
                        *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
#line 538 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 538 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 2:
#line 531 "inst_match.m"
                  {
#line 531 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 531 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_84_84;
#line 531 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_85_85;
#line 531 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_87_87;
#line 531 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 531 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_155_155;
#line 531 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_242_242;
#line 533 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_149_149;
#line 533 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_150_150;
#line 533 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_151_151;
#line 533 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_152_152;
#line 533 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_153_153;
#line 533 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_154_154;
#line 534 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_156_156;
#line 534 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_157_157;
#line 534 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_158_158;
#line 534 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_159_159;
#line 534 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_160_160;

#line 532 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 531 "inst_match.m"
                      {
#line 533 "inst_match.m"
                        check_hlds__inst_match__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 533 "inst_match.m"
                        check_hlds__inst_match__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 533 "inst_match.m"
                        check_hlds__inst_match__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 533 "inst_match.m"
                        check_hlds__inst_match__V_152_152 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 533 "inst_match.m"
                        check_hlds__inst_match__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 533 "inst_match.m"
                        check_hlds__inst_match__V_153_153 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 533 "inst_match.m"
                        check_hlds__inst_match__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 533 "inst_match.m"
                        {
#line 533 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_84_84, check_hlds__inst_match__V_252_252, check_hlds__inst_match__UniqB_102);
                        }
#line 531 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 531 "inst_match.m"
                          {
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_158_158 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_159_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_160_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 534 "inst_match.m"
                            {
#line 534 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(check_hlds__inst_match__V_85_85, check_hlds__inst_match__V_250_250, check_hlds__inst_match__UniqB_102, check_hlds__inst_match__V_155_155);
                            }
#line 531 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 531 "inst_match.m"
                              {
#line 536 "inst_match.m"
                                check_hlds__inst_match__V_87_87 = (MR_Integer) 0;
#line 536 "inst_match.m"
                                {
#line 536 "inst_match.m"
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__V_242_242, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                                }
#line 536 "inst_match.m"
                                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_87_87 == check_hlds__inst_match__V_242_242);
#line 531 "inst_match.m"
                              }
#line 531 "inst_match.m"
                          }
#line 531 "inst_match.m"
                      }
#line 531 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 3:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 506 "inst_match.m"
                    default:
#line 506 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 0:
#line 541 "inst_match.m"
                      {
#line 541 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 541 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 542 "inst_match.m"
                        MR_Word check_hlds__inst_match___InstResultsB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 544 "inst_match.m"
                        {
#line 544 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7);
                        }
#line 544 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 545 "inst_match.m"
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 543 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 543 "inst_match.m"
                          {
#line 543 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
#line 543 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 543 "inst_match.m"
                          }
#line 543 "inst_match.m"
                        else
#line 550 "inst_match.m"
                          {
#line 550 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 549 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 549 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 549 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 549 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_170_170 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 549 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 549 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_172_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 549 "inst_match.m"
                            {
#line 549 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_81_81, check_hlds__inst_match__V_252_252, check_hlds__inst_match__UniqB_104);
                            }
#line 550 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 551 "inst_match.m"
                              {
#line 551 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__V_250_250, check_hlds__inst_match__BoundInstsB_29, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                              }
#line 550 "inst_match.m"
                          }
#line 541 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 1:
#line 555 "inst_match.m"
                      {
#line 555 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 555 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_75_75;
#line 555 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_76_76;
#line 555 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_77_77;
#line 555 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_79_79;
#line 555 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 555 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_185_185;
#line 555 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_243_243;
#line 557 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_173_173;
#line 557 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_174_174;
#line 557 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_175_175;
#line 557 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_176_176;
#line 557 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_177_177;
#line 557 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_178_178;
#line 558 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_179_179;
#line 558 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_180_180;
#line 558 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_181_181;
#line 558 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_182_182;
#line 558 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_183_183;
#line 558 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_184_184;
#line 560 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_186_186;
#line 560 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_187_187;
#line 560 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_188_188;
#line 560 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_189_189;
#line 560 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_190_190;

#line 556 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_74_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 555 "inst_match.m"
                          {
#line 557 "inst_match.m"
                            check_hlds__inst_match__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 557 "inst_match.m"
                            check_hlds__inst_match__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 557 "inst_match.m"
                            check_hlds__inst_match__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 557 "inst_match.m"
                            check_hlds__inst_match__V_176_176 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 557 "inst_match.m"
                            check_hlds__inst_match__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 557 "inst_match.m"
                            check_hlds__inst_match__V_177_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 557 "inst_match.m"
                            check_hlds__inst_match__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 557 "inst_match.m"
                            {
#line 557 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_75_75, check_hlds__inst_match__V_252_252, check_hlds__inst_match__UniqB_107);
                            }
#line 555 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 555 "inst_match.m"
                              {
#line 558 "inst_match.m"
                                check_hlds__inst_match__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 558 "inst_match.m"
                                check_hlds__inst_match__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 558 "inst_match.m"
                                check_hlds__inst_match__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 558 "inst_match.m"
                                check_hlds__inst_match__V_181_181 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 558 "inst_match.m"
                                check_hlds__inst_match__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 558 "inst_match.m"
                                check_hlds__inst_match__V_183_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 558 "inst_match.m"
                                check_hlds__inst_match__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 558 "inst_match.m"
                                {
#line 558 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_251_251, check_hlds__inst_match__V_250_250, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_76_76);
                                }
#line 555 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 555 "inst_match.m"
                                  {
#line 560 "inst_match.m"
                                    check_hlds__inst_match__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 560 "inst_match.m"
                                    check_hlds__inst_match__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 560 "inst_match.m"
                                    check_hlds__inst_match__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 560 "inst_match.m"
                                    check_hlds__inst_match__V_188_188 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 560 "inst_match.m"
                                    check_hlds__inst_match__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 560 "inst_match.m"
                                    check_hlds__inst_match__V_189_189 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 560 "inst_match.m"
                                    check_hlds__inst_match__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 560 "inst_match.m"
                                    {
#line 560 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(check_hlds__inst_match__V_77_77, check_hlds__inst_match__V_250_250, check_hlds__inst_match__UniqB_107, check_hlds__inst_match__V_185_185);
                                    }
#line 555 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 555 "inst_match.m"
                                      {
#line 562 "inst_match.m"
                                        check_hlds__inst_match__V_79_79 = (MR_Integer) 0;
#line 562 "inst_match.m"
                                        {
#line 562 "inst_match.m"
                                          check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__V_243_243, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                                        }
#line 562 "inst_match.m"
                                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_79_79 == check_hlds__inst_match__V_243_243);
#line 555 "inst_match.m"
                                      }
#line 555 "inst_match.m"
                                  }
#line 555 "inst_match.m"
                              }
#line 555 "inst_match.m"
                          }
#line 555 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 5:
#line 564 "inst_match.m"
                      {
#line 564 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 564 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_72_72;
#line 564 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_244_244;
#line 564 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_261_261;
#line 566 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 566 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 566 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_199_199 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 566 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_200_200 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_201_201 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 566 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_202_202 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_255_255;
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_256_256;
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_257_257;
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_258_258;
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_259_259;
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_260_260;

#line 566 "inst_match.m"
                        {
#line 566 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_251_251, check_hlds__inst_match__V_250_250, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__V_69_69);
                        }
#line 564 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 564 "inst_match.m"
                          {
#line 573 "inst_match.m"
                            check_hlds__inst_match__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 573 "inst_match.m"
                            check_hlds__inst_match__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 573 "inst_match.m"
                            check_hlds__inst_match__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 573 "inst_match.m"
                            check_hlds__inst_match__V_258_258 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 573 "inst_match.m"
                            check_hlds__inst_match__V_257_257 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 573 "inst_match.m"
                            check_hlds__inst_match__V_256_256 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 573 "inst_match.m"
                            check_hlds__inst_match__V_255_255 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 571 "inst_match.m"
#line 571 "inst_match.m"
                            switch (check_hlds__inst_match__V_252_252) {
#line 571 "inst_match.m"
                              default:
#line 571 "inst_match.m"
                                check_hlds__inst_match__succeeded = MR_FALSE;
#line 571 "inst_match.m"
                                break;
#line 571 "inst_match.m"
                              case (MR_Integer) 2:
#line 573 "inst_match.m"
                                {
#line 573 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__V_250_250, check_hlds__inst_match__V_261_261);
                                }
#line 571 "inst_match.m"
                                break;
#line 571 "inst_match.m"
                              case (MR_Integer) 1:
#line 570 "inst_match.m"
                                {
#line 570 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__V_250_250, check_hlds__inst_match__V_261_261);
                                }
#line 571 "inst_match.m"
                                break;
#line 571 "inst_match.m"
                            }
#line 564 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 564 "inst_match.m"
                              {
#line 576 "inst_match.m"
                                check_hlds__inst_match__V_72_72 = (MR_Integer) 0;
#line 576 "inst_match.m"
                                {
#line 576 "inst_match.m"
                                  check_hlds__inst_match__inst_contains_nondefault_func_mode_1_4_p_0(check_hlds__inst_match__InstA_6, &check_hlds__inst_match__V_244_244, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                                }
#line 576 "inst_match.m"
                                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_72_72 == check_hlds__inst_match__V_244_244);
#line 564 "inst_match.m"
                              }
#line 564 "inst_match.m"
                          }
#line 564 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
              }
#line 506 "inst_match.m"
            }
#line 506 "inst_match.m"
            break;
#line 506 "inst_match.m"
          case (MR_Integer) 1:
#line 506 "inst_match.m"
            {
#line 506 "inst_match.m"
              MR_Word check_hlds__inst_match__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 506 "inst_match.m"
              MR_Word check_hlds__inst_match__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 506 "inst_match.m"
#line 506 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 506 "inst_match.m"
                default:
#line 506 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 0:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
#line 506 "inst_match.m"
                    default:
#line 506 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 0:
#line 584 "inst_match.m"
                      {
#line 584 "inst_match.m"
                        *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
#line 584 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 584 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 2:
#line 578 "inst_match.m"
                  {
#line 578 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 578 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_114 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 578 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 580 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 580 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 580 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 580 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_218_218 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 580 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_219_219 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_220_220 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 580 "inst_match.m"
                    {
#line 580 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_66_66, check_hlds__inst_match__V_254_254, check_hlds__inst_match__UniqB_114);
                    }
#line 578 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 581 "inst_match.m"
                      {
#line 581 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_253_253, check_hlds__inst_match__HOInstInfoB_115, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                      }
#line 578 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 3:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 506 "inst_match.m"
                    default:
#line 506 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 0:
#line 587 "inst_match.m"
                      {
#line 587 "inst_match.m"
                        MR_Word check_hlds__inst_match__TypeCtorInfo_239_239;
#line 587 "inst_match.m"
                        MR_Word check_hlds__inst_match__Type_36;
#line 587 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_61_61;
#line 587 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_62_62;
#line 587 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_63_63;
#line 587 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 587 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 588 "inst_match.m"
                        MR_Word check_hlds__inst_match___InstResultsB_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 591 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_221_221;
#line 591 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_222_222;
#line 591 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_223_223;
#line 591 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_224_224;
#line 591 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_225_225;
#line 591 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_226_226;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_227_227;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_228_228;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_229_229;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_230_230;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_231_231;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_232_232;

#line 589 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 589 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 589 "inst_match.m"
                          {
#line 589 "inst_match.m"
                            check_hlds__inst_match__Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 591 "inst_match.m"
                            check_hlds__inst_match__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 591 "inst_match.m"
                            check_hlds__inst_match__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 591 "inst_match.m"
                            check_hlds__inst_match__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 591 "inst_match.m"
                            check_hlds__inst_match__V_224_224 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 591 "inst_match.m"
                            check_hlds__inst_match__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 591 "inst_match.m"
                            check_hlds__inst_match__V_225_225 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 591 "inst_match.m"
                            check_hlds__inst_match__V_226_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 591 "inst_match.m"
                            {
#line 591 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_61_61, check_hlds__inst_match__V_254_254, check_hlds__inst_match__UniqB_118);
                            }
#line 587 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 587 "inst_match.m"
                              {
#line 13934 "check_hlds.inst_match.c"
                                check_hlds__inst_match__TypeCtorInfo_239_239 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 592 "inst_match.m"
                                {
#line 592 "inst_match.m"
                                  check_hlds__inst_match__V_62_62 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_239_239);
                                }
#line 592 "inst_match.m"
                                check_hlds__inst_match__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 592 "inst_match.m"
                                check_hlds__inst_match__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 592 "inst_match.m"
                                check_hlds__inst_match__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 592 "inst_match.m"
                                check_hlds__inst_match__V_229_229 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 592 "inst_match.m"
                                check_hlds__inst_match__V_230_230 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 592 "inst_match.m"
                                check_hlds__inst_match__V_231_231 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 592 "inst_match.m"
                                check_hlds__inst_match__V_232_232 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 592 "inst_match.m"
                                {
#line 592 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_62_62, check_hlds__inst_match__V_63_63, check_hlds__inst_match__BoundInstsB_120, check_hlds__inst_match__Type_36);
                                }
#line 587 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 594 "inst_match.m"
                                  {
#line 594 "inst_match.m"
                                    check_hlds__inst_match__succeeded = check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(check_hlds__inst_match__V_254_254, check_hlds__inst_match__BoundInstsB_120, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                                  }
#line 587 "inst_match.m"
                              }
#line 589 "inst_match.m"
                          }
#line 587 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 1:
#line 597 "inst_match.m"
                      {
#line 597 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 597 "inst_match.m"
                        MR_Word check_hlds__inst_match__HOInstInfoB_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 599 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 0)));
#line 599 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 1)));
#line 599 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 2)));
#line 599 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_236_236 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 599 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_237_237 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 599 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_238_238 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_48, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 599 "inst_match.m"
                        {
#line 599 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_59_59, check_hlds__inst_match__V_254_254, check_hlds__inst_match__UniqB_123);
                        }
#line 597 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 600 "inst_match.m"
                          {
#line 600 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_253_253, check_hlds__inst_match__HOInstInfoB_124, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                          }
#line 597 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 5:
#line 603 "inst_match.m"
                      {
#line 603 "inst_match.m"
                        MR_String check_hlds__inst_match__V_56_56;
#line 603 "inst_match.m"
                        MR_String check_hlds__inst_match__V_57_57;
#line 603 "inst_match.m"
                        MR_String check_hlds__inst_match__V_58_58;

#line 603 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_253_253 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 603 "inst_match.m"
                          {
#line 607 "inst_match.m"
                            check_hlds__inst_match__V_56_56 = (MR_String) "check_hlds.inst_match";
#line 607 "inst_match.m"
                            check_hlds__inst_match__V_57_57 = (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_4\'/5";
#line 608 "inst_match.m"
                            check_hlds__inst_match__V_58_58 = (MR_String) "inst_matches_initial(ground, abstract_inst) == \?\?";
#line 607 "inst_match.m"
                            {
#line 607 "inst_match.m"
                              mercury__require__unexpected_3_p_0(check_hlds__inst_match__V_56_56, check_hlds__inst_match__V_57_57, check_hlds__inst_match__V_58_58);
                            }
#line 607 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 603 "inst_match.m"
                          }
#line 603 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
              }
#line 506 "inst_match.m"
            }
#line 506 "inst_match.m"
            break;
#line 506 "inst_match.m"
          case (MR_Integer) 5:
#line 506 "inst_match.m"
            {
#line 506 "inst_match.m"
              MR_Word check_hlds__inst_match__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 506 "inst_match.m"
              MR_Word check_hlds__inst_match__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 506 "inst_match.m"
#line 506 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 506 "inst_match.m"
                default:
#line 506 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 0:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
#line 506 "inst_match.m"
                    default:
#line 506 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 0:
#line 613 "inst_match.m"
                      {
#line 613 "inst_match.m"
                        *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
#line 613 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 613 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 2:
#line 610 "inst_match.m"
                  {
#line 610 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 610 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 611 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_53_53 == (MR_Integer) 0);
#line 610 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 610 "inst_match.m"
                      {
#line 611 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 610 "inst_match.m"
                          {
#line 610 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_49 = check_hlds__inst_match__STATE_VARIABLE_Info_0_48;
#line 610 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 610 "inst_match.m"
                          }
#line 610 "inst_match.m"
                      }
#line 610 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
                case (MR_Integer) 3:
#line 506 "inst_match.m"
#line 506 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 506 "inst_match.m"
                    default:
#line 506 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                    case (MR_Integer) 5:
#line 616 "inst_match.m"
                      {
#line 616 "inst_match.m"
                        MR_Word check_hlds__inst_match__TypeCtorInfo_240_240;
#line 616 "inst_match.m"
                        MR_Word check_hlds__inst_match__TypeInfo_241_241;
#line 616 "inst_match.m"
                        MR_Word check_hlds__inst_match__ArgsB_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 616 "inst_match.m"
                        MR_Word check_hlds__inst_match__MaybeTypes_47;
#line 616 "inst_match.m"
                        MR_Integer check_hlds__inst_match__V_50_50;
#line 616 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_51_51;
#line 616 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 617 "inst_match.m"
                        {
#line 617 "inst_match.m"
                          check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__V_247_247, check_hlds__inst_match__V_245_245);
                        }
#line 616 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 616 "inst_match.m"
                          {
#line 14177 "check_hlds.inst_match.c"
                            check_hlds__inst_match__TypeCtorInfo_240_240 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 618 "inst_match.m"
                            {
#line 618 "inst_match.m"
                              check_hlds__inst_match__V_50_50 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_240_240, check_hlds__inst_match__V_246_246);
                            }
#line 618 "inst_match.m"
                            check_hlds__inst_match__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 14186 "check_hlds.inst_match.c"
                            check_hlds__inst_match__TypeInfo_241_241 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 618 "inst_match.m"
                            {
#line 618 "inst_match.m"
                              mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_241_241, check_hlds__inst_match__V_50_50, ((MR_Box) (check_hlds__inst_match__V_51_51)), &check_hlds__inst_match__MaybeTypes_47);
                            }
#line 620 "inst_match.m"
                            {
#line 620 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__V_246_246, check_hlds__inst_match__ArgsB_46, check_hlds__inst_match__MaybeTypes_47, check_hlds__inst_match__STATE_VARIABLE_Info_0_48, check_hlds__inst_match__STATE_VARIABLE_Info_49);
                            }
#line 616 "inst_match.m"
                          }
#line 616 "inst_match.m"
                      }
#line 506 "inst_match.m"
                      break;
#line 506 "inst_match.m"
                  }
#line 506 "inst_match.m"
                  break;
#line 506 "inst_match.m"
              }
#line 506 "inst_match.m"
            }
#line 506 "inst_match.m"
            break;
#line 506 "inst_match.m"
        }
#line 506 "inst_match.m"
        break;
#line 506 "inst_match.m"
    }
#line 506 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 506 "inst_match.m"
  }
#line 496 "inst_match.m"
}

#line 480 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
#line 480 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 480 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 480 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 480 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 480 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 480 "inst_match.m"
{
#line 483 "inst_match.m"
  {
#line 483 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 483 "inst_match.m"
    MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 483 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 485 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 485 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 485 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 485 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 485 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 485 "inst_match.m"
    MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 486 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions_12;

#line 484 "inst_match.m"
    {
#line 484 "inst_match.m"
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 484 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 484 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 484 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 484 "inst_match.m"
    }
#line 257 "inst_match.m"
    {
#line 257 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
    }
#line 486 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 487 "inst_match.m"
      {
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19;
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 487 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 489 "inst_match.m"
        MR_Word check_hlds__inst_match__V_42_42;
#line 489 "inst_match.m"
        MR_Word check_hlds__inst_match__V_43_43;
#line 489 "inst_match.m"
        MR_Word check_hlds__inst_match__V_44_44;
#line 489 "inst_match.m"
        MR_Word check_hlds__inst_match__V_45_45;
#line 489 "inst_match.m"
        MR_Word check_hlds__inst_match__V_46_46;
#line 489 "inst_match.m"
        MR_Word check_hlds__inst_match__V_47_47;

#line 487 "inst_match.m"
        {
#line 487 "inst_match.m"
          check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 487 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_29_29));
#line 487 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 487 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_31_31));
#line 487 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_32_32 | ((((check_hlds__inst_match__V_33_33 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_34_34 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_35_35 << (MR_Integer) 4)))))))));
#line 487 "inst_match.m"
        }
#line 488 "inst_match.m"
        {
#line 488 "inst_match.m"
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__V_29_29, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
        }
#line 489 "inst_match.m"
        check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 489 "inst_match.m"
        check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 489 "inst_match.m"
        check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 489 "inst_match.m"
        check_hlds__inst_match__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 489 "inst_match.m"
        check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 489 "inst_match.m"
        check_hlds__inst_match__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 489 "inst_match.m"
        check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 489 "inst_match.m"
        {
#line 489 "inst_match.m"
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
        }
#line 490 "inst_match.m"
        {
#line 490 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 487 "inst_match.m"
      }
#line 486 "inst_match.m"
    else
#line 486 "inst_match.m"
      {
#line 486 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 486 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 486 "inst_match.m"
      }
#line 483 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 483 "inst_match.m"
  }
#line 480 "inst_match.m"
}

#line 415 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
#line 415 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 415 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 415 "inst_match.m"
  MR_Word check_hlds__inst_match__InstVar_8,
#line 415 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 415 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 415 "inst_match.m"
{
#line 420 "inst_match.m"
  {
#line 420 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 420 "inst_match.m"
    MR_Word check_hlds__inst_match__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 420 "inst_match.m"
    MR_Word check_hlds__inst_match__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 420 "inst_match.m"
    MR_Word check_hlds__inst_match__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 420 "inst_match.m"
    MR_Word check_hlds__inst_match__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 420 "inst_match.m"
    MR_Word check_hlds__inst_match__V_86_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 420 "inst_match.m"
    MR_Word check_hlds__inst_match__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 420 "inst_match.m"
    MR_Word check_hlds__inst_match__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));

#line 420 "inst_match.m"
    if ((check_hlds__inst_match__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "inst_match.m"
      {
#line 436 "inst_match.m"
        MR_Word check_hlds__inst_match__V_20_20;
#line 436 "inst_match.m"
        MR_Word check_hlds__inst_match__InstVarSub_28;
#line 438 "inst_match.m"
        MR_Word check_hlds__inst_match__V_68_68;
#line 438 "inst_match.m"
        MR_Word check_hlds__inst_match__V_69_69;
#line 438 "inst_match.m"
        MR_Word check_hlds__inst_match__V_71_71;
#line 438 "inst_match.m"
        MR_Word check_hlds__inst_match__V_72_72;
#line 438 "inst_match.m"
        MR_Word check_hlds__inst_match__V_73_73;
#line 438 "inst_match.m"
        MR_Word check_hlds__inst_match__V_74_74;
#line 438 "inst_match.m"
        MR_Word check_hlds__inst_match__V_70_70;

#line 437 "inst_match.m"
        {
#line 437 "inst_match.m"
          check_hlds__inst_match__InstVarSub_28 = mercury__map__singleton_2_f_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__InstA_6)));
        }
#line 438 "inst_match.m"
        {
#line 438 "inst_match.m"
          check_hlds__inst_match__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 438 "inst_match.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_20_20, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_28));
#line 438 "inst_match.m"
        }
#line 438 "inst_match.m"
        check_hlds__inst_match__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 438 "inst_match.m"
        check_hlds__inst_match__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 438 "inst_match.m"
        check_hlds__inst_match__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 438 "inst_match.m"
        check_hlds__inst_match__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 438 "inst_match.m"
        check_hlds__inst_match__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 438 "inst_match.m"
        check_hlds__inst_match__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 438 "inst_match.m"
        check_hlds__inst_match__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 438 "inst_match.m"
        {
#line 438 "inst_match.m"
          MR_Word base;
#line 438 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 438 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 438 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_68_68));
#line 438 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_69_69));
#line 438 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 438 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_71_71 | ((((check_hlds__inst_match__V_72_72 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_73_73 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_74_74 << (MR_Integer) 4)))))))));
#line 438 "inst_match.m"
        }
#line 436 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 436 "inst_match.m"
      }
#line 420 "inst_match.m"
    else
#line 420 "inst_match.m"
      {
#line 420 "inst_match.m"
        MR_Word check_hlds__inst_match__InstVarSub0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_87_87, (MR_Integer) 0)));
#line 421 "inst_match.m"
        MR_Word check_hlds__inst_match__InstB_11;
#line 421 "inst_match.m"
        MR_Box check_hlds__inst_match__conv0_InstB_11;

#line 421 "inst_match.m"
        {
#line 421 "inst_match.m"
          check_hlds__inst_match__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__InstVarSub0_10, ((MR_Box) (check_hlds__inst_match__InstVar_8)), &check_hlds__inst_match__conv0_InstB_11);
        }
#line 421 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 421 "inst_match.m"
          {
#line 421 "inst_match.m"
            check_hlds__inst_match__InstB_11 = ((MR_Word) check_hlds__inst_match__conv0_InstB_11);
#line 421 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 421 "inst_match.m"
          }
#line 421 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 425 "inst_match.m"
          {
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeInfo_77_77;
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_78_78;
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_13;
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo_14;
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__InstVarSub_15;
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_22_22;
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__V_24_24;
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 425 "inst_match.m"
            MR_Word check_hlds__inst_match__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 428 "inst_match.m"
            MR_Word check_hlds__inst_match__V_42_42;
#line 428 "inst_match.m"
            MR_Word check_hlds__inst_match__V_43_43;
#line 428 "inst_match.m"
            MR_Word check_hlds__inst_match__V_44_44;
#line 428 "inst_match.m"
            MR_Word check_hlds__inst_match__V_45_45;
#line 428 "inst_match.m"
            MR_Word check_hlds__inst_match__V_46_46;
#line 428 "inst_match.m"
            MR_Word check_hlds__inst_match__V_47_47;
#line 428 "inst_match.m"
            MR_Word check_hlds__inst_match__V_41_41;
#line 430 "inst_match.m"
            MR_Word check_hlds__inst_match__V_48_48;
#line 430 "inst_match.m"
            MR_Word check_hlds__inst_match__V_49_49;
#line 430 "inst_match.m"
            MR_Word check_hlds__inst_match__V_51_51;
#line 430 "inst_match.m"
            MR_Word check_hlds__inst_match__V_52_52;
#line 430 "inst_match.m"
            MR_Word check_hlds__inst_match__V_53_53;
#line 430 "inst_match.m"
            MR_Word check_hlds__inst_match__V_54_54;
#line 430 "inst_match.m"
            MR_Word check_hlds__inst_match__V_50_50;

#line 426 "inst_match.m"
            {
#line 426 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_11, check_hlds__inst_match__MaybeType_7, &check_hlds__inst_match__Inst_13, check_hlds__inst_match__ModuleInfo0_12, &check_hlds__inst_match__ModuleInfo_14);
            }
#line 425 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 425 "inst_match.m"
              {
#line 428 "inst_match.m"
                check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 428 "inst_match.m"
                check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 428 "inst_match.m"
                check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 428 "inst_match.m"
                check_hlds__inst_match__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 428 "inst_match.m"
                check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 428 "inst_match.m"
                check_hlds__inst_match__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 428 "inst_match.m"
                check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 428 "inst_match.m"
                {
#line 428 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 428 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_14));
#line 428 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 1) = ((MR_Box) (check_hlds__inst_match__V_42_42));
#line 428 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 2) = ((MR_Box) (check_hlds__inst_match__V_43_43));
#line 428 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 3) = ((MR_Box) ((check_hlds__inst_match__V_44_44 | ((((check_hlds__inst_match__V_45_45 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_46_46 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_47_47 << (MR_Integer) 4)))))))));
#line 428 "inst_match.m"
                }
#line 14613 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_77_77 = (MR_Word) &check_hlds__inst_match_scalar_common_1[0];
#line 14615 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 429 "inst_match.m"
                {
#line 429 "inst_match.m"
                  mercury__map__det_update_4_p_0(check_hlds__inst_match__TypeInfo_77_77, check_hlds__inst_match__TypeCtorInfo_78_78, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__Inst_13)), check_hlds__inst_match__InstVarSub0_10, &check_hlds__inst_match__InstVarSub_15);
                }
#line 430 "inst_match.m"
                {
#line 430 "inst_match.m"
                  check_hlds__inst_match__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 430 "inst_match.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_24_24, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_15));
#line 430 "inst_match.m"
                }
#line 430 "inst_match.m"
                check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 430 "inst_match.m"
                check_hlds__inst_match__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 430 "inst_match.m"
                check_hlds__inst_match__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 430 "inst_match.m"
                check_hlds__inst_match__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 430 "inst_match.m"
                check_hlds__inst_match__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 430 "inst_match.m"
                check_hlds__inst_match__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 430 "inst_match.m"
                check_hlds__inst_match__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 430 "inst_match.m"
                {
#line 430 "inst_match.m"
                  MR_Word base;
#line 430 "inst_match.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 430 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 430 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_48_48));
#line 430 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_49_49));
#line 430 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_24_24));
#line 430 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_51_51 | ((((check_hlds__inst_match__V_52_52 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_53_53 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_54_54 << (MR_Integer) 4)))))))));
#line 430 "inst_match.m"
                }
#line 430 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 425 "inst_match.m"
              }
#line 425 "inst_match.m"
          }
#line 421 "inst_match.m"
        else
#line 432 "inst_match.m"
          {
#line 432 "inst_match.m"
            MR_Word check_hlds__inst_match__V_26_26;
#line 432 "inst_match.m"
            MR_Word check_hlds__inst_match__InstVarSub_27;
#line 433 "inst_match.m"
            MR_Word check_hlds__inst_match__V_55_55;
#line 433 "inst_match.m"
            MR_Word check_hlds__inst_match__V_56_56;
#line 433 "inst_match.m"
            MR_Word check_hlds__inst_match__V_58_58;
#line 433 "inst_match.m"
            MR_Word check_hlds__inst_match__V_59_59;
#line 433 "inst_match.m"
            MR_Word check_hlds__inst_match__V_60_60;
#line 433 "inst_match.m"
            MR_Word check_hlds__inst_match__V_61_61;
#line 433 "inst_match.m"
            MR_Word check_hlds__inst_match__V_57_57;

#line 432 "inst_match.m"
            {
#line 432 "inst_match.m"
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__InstA_6)), check_hlds__inst_match__InstVarSub0_10, &check_hlds__inst_match__InstVarSub_27);
            }
#line 433 "inst_match.m"
            {
#line 433 "inst_match.m"
              check_hlds__inst_match__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "inst_match.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_26_26, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_27));
#line 433 "inst_match.m"
            }
#line 433 "inst_match.m"
            check_hlds__inst_match__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 433 "inst_match.m"
            check_hlds__inst_match__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 433 "inst_match.m"
            check_hlds__inst_match__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 433 "inst_match.m"
            check_hlds__inst_match__V_58_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 433 "inst_match.m"
            check_hlds__inst_match__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 433 "inst_match.m"
            check_hlds__inst_match__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 433 "inst_match.m"
            check_hlds__inst_match__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 433 "inst_match.m"
            {
#line 433 "inst_match.m"
              MR_Word base;
#line 433 "inst_match.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 433 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 433 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_55_55));
#line 433 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_56_56));
#line 433 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_26_26));
#line 433 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_58_58 | ((((check_hlds__inst_match__V_59_59 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_60_60 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_61_61 << (MR_Integer) 4)))))))));
#line 433 "inst_match.m"
            }
#line 432 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 432 "inst_match.m"
          }
#line 420 "inst_match.m"
      }
#line 420 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 420 "inst_match.m"
  }
#line 415 "inst_match.m"
}

#line 209 "inst_match.m"
void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_3_p_0(
#line 209 "inst_match.m"
  MR_Word check_hlds__inst_match__Modes_4,
#line 209 "inst_match.m"
  MR_Word check_hlds__inst_match___ModuleInfo_5,
#line 209 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_6,
#line 209 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 209 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 209 "inst_match.m"
{
#line 1588 "inst_match.m"
  {
#line 1588 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1588 "inst_match.m"
    {
#line 1588 "inst_match.m"
      check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_108_105_115_116_95_99_111_110_116_97_105_110_115_95_105_110_115_116_95_118_97_114_95_95_91_50_93_95_48_3_p_0(check_hlds__inst_match__Modes_4, check_hlds__inst_match__InstVar_6, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
    }
#line 1588 "inst_match.m"
  }
#line 209 "inst_match.m"
}

#line 201 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_3_p_0(
#line 201 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInstA_4,
#line 201 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInstB_5,
#line 201 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 201 "inst_match.m"
{
#line 1416 "inst_match.m"
  {
#line 1416 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__TypeCtorInfo_21_42;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_12;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__PredOrFunc_33;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__ModesA_34;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__Det_36;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__ModesB_37;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__MaybeTypes_39;
#line 1416 "inst_match.m"
    MR_Integer check_hlds__inst_match__V_40_40;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__V_43_43;
#line 1416 "inst_match.m"
    MR_Word check_hlds__inst_match__V_44_44;
#line 1441 "inst_match.m"
    MR_Word check_hlds__inst_match___MaybeArgRegsA_35;
#line 1442 "inst_match.m"
    MR_Word check_hlds__inst_match___MaybeArgRegsB_38;
#line 1444 "inst_match.m"
    MR_Word check_hlds__inst_match__V_13_13;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_25_25 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 1441 "inst_match.m"
    check_hlds__inst_match__PredOrFunc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 0)));
#line 1441 "inst_match.m"
    check_hlds__inst_match__ModesA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 1)));
#line 1441 "inst_match.m"
    check_hlds__inst_match___MaybeArgRegsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 2)));
#line 1441 "inst_match.m"
    check_hlds__inst_match__Det_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 3)));
#line 1442 "inst_match.m"
    check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 0)));
#line 1442 "inst_match.m"
    check_hlds__inst_match__ModesB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 1)));
#line 1442 "inst_match.m"
    check_hlds__inst_match___MaybeArgRegsB_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 2)));
#line 1442 "inst_match.m"
    check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 3)));
#line 1442 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_33 == check_hlds__inst_match__V_43_43);
#line 1416 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 1416 "inst_match.m"
      {
#line 1442 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_36 == check_hlds__inst_match__V_44_44);
#line 1416 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1416 "inst_match.m"
          {
#line 14856 "check_hlds.inst_match.c"
            check_hlds__inst_match__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 307 "inst_match.m"
            {
#line 307 "inst_match.m"
              check_hlds__inst_match__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_6));
#line 307 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 1) = ((MR_Box) (check_hlds__inst_match__V_25_25));
#line 307 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
            }
#line 1443 "inst_match.m"
            {
#line 1443 "inst_match.m"
              check_hlds__inst_match__V_40_40 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_42, check_hlds__inst_match__ModesA_34);
            }
#line 1443 "inst_match.m"
            {
#line 1443 "inst_match.m"
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__V_40_40, &check_hlds__inst_match__MaybeTypes_39);
            }
#line 1444 "inst_match.m"
            {
#line 1444 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_34, check_hlds__inst_match__ModesB_37, check_hlds__inst_match__MaybeTypes_39, check_hlds__inst_match__Info0_12, &check_hlds__inst_match__V_13_13);
            }
#line 1416 "inst_match.m"
          }
#line 1416 "inst_match.m"
      }
#line 1416 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1416 "inst_match.m"
  }
#line 201 "inst_match.m"
}

#line 191 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_ground_2_p_0(
#line 191 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 191 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInst_4)
#line 191 "inst_match.m"
{
#line 1389 "inst_match.m"
  {
#line 1389 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1389 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_9;
#line 1389 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22;
#line 1389 "inst_match.m"
    MR_Word check_hlds__inst_match__PredOrFunc_29;
#line 1389 "inst_match.m"
    MR_Word check_hlds__inst_match__ArgModes_30;
#line 1404 "inst_match.m"
    MR_Word check_hlds__inst_match__V_31_31;
#line 1404 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_22_22 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 1404 "inst_match.m"
    check_hlds__inst_match__PredOrFunc_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 0)));
#line 1404 "inst_match.m"
    check_hlds__inst_match__ArgModes_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 1)));
#line 1404 "inst_match.m"
    check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 2)));
#line 1404 "inst_match.m"
    check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInst_4, (MR_Integer) 3)));
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_3));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 1) = ((MR_Box) (check_hlds__inst_match__V_22_22));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 1407 "inst_match.m"
#line 1407 "inst_match.m"
    switch (check_hlds__inst_match__PredOrFunc_29) {
#line 1407 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1407 "inst_match.m"
      case (MR_Integer) 1:
#line 1408 "inst_match.m"
        {
#line 1408 "inst_match.m"
          MR_Integer check_hlds__inst_match__Arity_33;
#line 1408 "inst_match.m"
          MR_Word check_hlds__inst_match__DefaultFunc_34;
#line 1411 "inst_match.m"
          MR_Word check_hlds__inst_match__V_10_10;

#line 1409 "inst_match.m"
          {
#line 1409 "inst_match.m"
            check_hlds__inst_match__Arity_33 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, check_hlds__inst_match__ArgModes_30);
          }
#line 1410 "inst_match.m"
          {
#line 1410 "inst_match.m"
            check_hlds__inst_match__DefaultFunc_34 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(check_hlds__inst_match__Arity_33);
          }
#line 1411 "inst_match.m"
          {
#line 1411 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_2_5_p_0(check_hlds__inst_match__PredInst_4, check_hlds__inst_match__DefaultFunc_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Info_9, &check_hlds__inst_match__V_10_10);
          }
#line 1408 "inst_match.m"
        }
#line 1407 "inst_match.m"
        break;
#line 1407 "inst_match.m"
      case (MR_Integer) 0:
#line 1406 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1407 "inst_match.m"
        break;
#line 1407 "inst_match.m"
    }
#line 1389 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1389 "inst_match.m"
  }
#line 191 "inst_match.m"
}

#line 185 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_ground_2_p_0(
#line 185 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 185 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfo_4)
#line 185 "inst_match.m"
{
#line 1367 "inst_match.m"
  {
#line 1367 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1367 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_9;
#line 1367 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_22_22 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_3));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 1) = ((MR_Box) (check_hlds__inst_match__V_22_22));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 1383 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfo_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1386 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1383 "inst_match.m"
    else
#line 1383 "inst_match.m"
      {
#line 1383 "inst_match.m"
        MR_Word check_hlds__inst_match__PredInst_29 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_4), (MR_Integer) 1);
#line 1384 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10;

#line 1384 "inst_match.m"
        {
#line 1384 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_matches_ground_2_4_p_0(check_hlds__inst_match__PredInst_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Info_9, &check_hlds__inst_match__V_10_10);
        }
#line 1383 "inst_match.m"
      }
#line 1367 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1367 "inst_match.m"
  }
#line 185 "inst_match.m"
}

#line 179 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_contains_nondefault_func_mode_2_p_0(
#line 179 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 179 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 179 "inst_match.m"
{
#line 1260 "inst_match.m"
  {
#line 1260 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1260 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_5;
#line 1260 "inst_match.m"
    MR_Word check_hlds__inst_match__V_13_13;
#line 1260 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20;
#line 1260 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27;
#line 1269 "inst_match.m"
    MR_Word check_hlds__inst_match__V_6_6;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_20_20 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_5, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_3));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_5, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_5, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_5, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 1269 "inst_match.m"
    {
#line 1269 "inst_match.m"
      check_hlds__inst_match__V_27_27 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    }
#line 1269 "inst_match.m"
    {
#line 1269 "inst_match.m"
      check_hlds__inst_match__inst_contains_nondefault_func_mode_2_5_p_0(check_hlds__inst_match__Inst_4, check_hlds__inst_match__V_27_27, &check_hlds__inst_match__V_13_13, check_hlds__inst_match__Info_5, &check_hlds__inst_match__V_6_6);
    }
#line 1263 "inst_match.m"
    check_hlds__inst_match__succeeded = ((MR_Integer) 1 == check_hlds__inst_match__V_13_13);
#line 1260 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1260 "inst_match.m"
  }
#line 179 "inst_match.m"
}

#line 167 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(
#line 167 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 167 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 167 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 167 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 167 "inst_match.m"
{
#line 1085 "inst_match.m"
  {
#line 1085 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1085 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1085 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 1085 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 1088 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 1088 "inst_match.m"
    {
#line 1088 "inst_match.m"
      check_hlds__inst_match__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_16_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1088 "inst_match.m"
    }
#line 1088 "inst_match.m"
    {
#line 1088 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_16_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1085 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1085 "inst_match.m"
  }
#line 167 "inst_match.m"
}

#line 161 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_4_p_0(
#line 161 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 161 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 161 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 161 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 161 "inst_match.m"
{
#line 1080 "inst_match.m"
  {
#line 1080 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1080 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1080 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 1080 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 1083 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 1083 "inst_match.m"
    {
#line 1083 "inst_match.m"
      check_hlds__inst_match__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_16_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1083 "inst_match.m"
    }
#line 1083 "inst_match.m"
    {
#line 1083 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_16_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1080 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1080 "inst_match.m"
  }
#line 161 "inst_match.m"
}

#line 152 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__unique_matches_final_2_p_0(
#line 152 "inst_match.m"
  MR_Word check_hlds__inst_match__A_3,
#line 152 "inst_match.m"
  MR_Word check_hlds__inst_match__B_4)
#line 152 "inst_match.m"
{
#line 777 "inst_match.m"
  {
#line 777 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 777 "inst_match.m"
#line 777 "inst_match.m"
    switch (check_hlds__inst_match__A_3) {
#line 777 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "inst_match.m"
      case (MR_Integer) 3:
#line 787 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__B_4 == (MR_Integer) 3);
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
      case (MR_Integer) 4:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
        switch (check_hlds__inst_match__B_4) {
#line 777 "inst_match.m"
          default:
#line 777 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 3:
#line 786 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 4:
#line 785 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
        }
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
      case (MR_Integer) 2:
#line 777 "inst_match.m"
        if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__B_4))))
#line 777 "inst_match.m"
          {
#line 777 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
          }
#line 777 "inst_match.m"
        else
#line 777 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
      case (MR_Integer) 0:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
        switch (check_hlds__inst_match__B_4) {
#line 777 "inst_match.m"
          default:
#line 777 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 3:
#line 784 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 4:
#line 783 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 0:
#line 782 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
        }
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
      case (MR_Integer) 1:
#line 777 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
    }
#line 777 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 777 "inst_match.m"
  }
#line 152 "inst_match.m"
}

#line 147 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__unique_matches_initial_2_p_0(
#line 147 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 147 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 147 "inst_match.m"
{
#line 777 "inst_match.m"
  {
#line 777 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 777 "inst_match.m"
#line 777 "inst_match.m"
    switch (check_hlds__inst_match__HeadVar__1_1) {
#line 777 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "inst_match.m"
      case (MR_Integer) 3:
#line 787 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 3);
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
      case (MR_Integer) 4:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
        switch (check_hlds__inst_match__HeadVar__2_2) {
#line 777 "inst_match.m"
          default:
#line 777 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 3:
#line 786 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 4:
#line 785 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
        }
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
      case (MR_Integer) 2:
#line 777 "inst_match.m"
        if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__HeadVar__2_2))))
#line 777 "inst_match.m"
          {
#line 777 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
          }
#line 777 "inst_match.m"
        else
#line 777 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
      case (MR_Integer) 0:
#line 777 "inst_match.m"
#line 777 "inst_match.m"
        switch (check_hlds__inst_match__HeadVar__2_2) {
#line 777 "inst_match.m"
          default:
#line 777 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 3:
#line 784 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 4:
#line 783 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
          case (MR_Integer) 0:
#line 782 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
            break;
#line 777 "inst_match.m"
        }
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
      case (MR_Integer) 1:
#line 777 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 777 "inst_match.m"
        break;
#line 777 "inst_match.m"
    }
#line 777 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 777 "inst_match.m"
  }
#line 147 "inst_match.m"
}

#line 141 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(
#line 141 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 141 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 141 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 141 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 141 "inst_match.m"
{
#line 1075 "inst_match.m"
  {
#line 1075 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1075 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1075 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 1075 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 1078 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 1078 "inst_match.m"
    {
#line 1078 "inst_match.m"
      check_hlds__inst_match__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_16_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1078 "inst_match.m"
    }
#line 1078 "inst_match.m"
    {
#line 1078 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_16_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1075 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1075 "inst_match.m"
  }
#line 141 "inst_match.m"
}

#line 117 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_gmb_5_p_0(
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8,
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_9,
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__GroundMatchesBound_10)
#line 117 "inst_match.m"
{
#line 877 "inst_match.m"
  {
#line 877 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 877 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_11;
#line 877 "inst_match.m"
    MR_Word check_hlds__inst_match__V_17_17;
#line 877 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24;
#line 880 "inst_match.m"
    MR_Word check_hlds__inst_match__V_12_12;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_24_24 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_9));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 1) = ((MR_Box) (check_hlds__inst_match__V_24_24));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((check_hlds__inst_match__GroundMatchesBound_10 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 880 "inst_match.m"
    {
#line 880 "inst_match.m"
      check_hlds__inst_match__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 880 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_17_17, 0) = ((MR_Box) (check_hlds__inst_match__Type_8));
#line 880 "inst_match.m"
    }
#line 880 "inst_match.m"
    {
#line 880 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7, check_hlds__inst_match__V_17_17, check_hlds__inst_match__Info0_11, &check_hlds__inst_match__V_12_12);
    }
#line 877 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 877 "inst_match.m"
  }
#line 117 "inst_match.m"
}

#line 104 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_typed_4_p_0(
#line 104 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 104 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 104 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 104 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 104 "inst_match.m"
{
#line 873 "inst_match.m"
  {
#line 873 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 874 "inst_match.m"
    {
#line 874 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__Type_7, check_hlds__inst_match__ModuleInfo_8, (MR_Integer) 0);
    }
#line 873 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 873 "inst_match.m"
  }
#line 104 "inst_match.m"
}

#line 95 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_p_0(
#line 95 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_4,
#line 95 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_5,
#line 95 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 95 "inst_match.m"
{
#line 868 "inst_match.m"
  {
#line 868 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 868 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_7;
#line 868 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21;
#line 871 "inst_match.m"
    MR_Word check_hlds__inst_match__V_8_8;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_21_21 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_6));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 1) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 871 "inst_match.m"
    {
#line 871 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_4, check_hlds__inst_match__InstB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Info0_7, &check_hlds__inst_match__V_8_8);
    }
#line 868 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 868 "inst_match.m"
  }
#line 95 "inst_match.m"
}

#line 83 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_15,
#line 83 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_16,
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Sub_0_17,
#line 83 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Sub_18)
#line 83 "inst_match.m"
{
#line 462 "inst_match.m"
  {
#line 462 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 462 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_13;
#line 462 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_14;
#line 462 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19;
#line 462 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24;
#line 462 "inst_match.m"
    MR_Word check_hlds__inst_match__V_29_29;
#line 462 "inst_match.m"
    MR_Word check_hlds__inst_match__V_46_46;
#line 466 "inst_match.m"
    MR_Word check_hlds__inst_match__V_28_28;
#line 466 "inst_match.m"
    MR_Word check_hlds__inst_match__V_30_30;
#line 466 "inst_match.m"
    MR_Word check_hlds__inst_match__V_31_31;
#line 466 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 466 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;

#line 463 "inst_match.m"
    {
#line 463 "inst_match.m"
      check_hlds__inst_match__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_19_19, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Sub_0_17));
#line 463 "inst_match.m"
    }
#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_46_46 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_15));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 1) = ((MR_Box) (check_hlds__inst_match__V_46_46));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 2) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 465 "inst_match.m"
    {
#line 465 "inst_match.m"
      check_hlds__inst_match__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_24_24, 0) = ((MR_Box) (check_hlds__inst_match__Type_10));
#line 465 "inst_match.m"
    }
#line 465 "inst_match.m"
    {
#line 465 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_8, check_hlds__inst_match__InstB_9, check_hlds__inst_match__V_24_24, check_hlds__inst_match__Info0_13, &check_hlds__inst_match__Info_14);
    }
#line 462 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 462 "inst_match.m"
      {
#line 466 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 0)));
#line 466 "inst_match.m"
        check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 1)));
#line 466 "inst_match.m"
        check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 2)));
#line 466 "inst_match.m"
        check_hlds__inst_match__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 466 "inst_match.m"
        check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 466 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 466 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 467 "inst_match.m"
        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 467 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 467 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Sub_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_29_29, (MR_Integer) 0)));
#line 462 "inst_match.m"
      }
#line 462 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 462 "inst_match.m"
  }
#line 83 "inst_match.m"
}

#line 78 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(
#line 78 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 78 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 78 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 78 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 78 "inst_match.m"
{
#line 456 "inst_match.m"
  {
#line 456 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 456 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 456 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 456 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 459 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 459 "inst_match.m"
    {
#line 459 "inst_match.m"
      check_hlds__inst_match__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 459 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_16_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 459 "inst_match.m"
    }
#line 459 "inst_match.m"
    {
#line 459 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_16_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 456 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 456 "inst_match.m"
  }
#line 78 "inst_match.m"
}

#line 70 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_sub_7_p_0(
#line 70 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 70 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 70 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 70 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_14,
#line 70 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_15,
#line 70 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Sub_0_16,
#line 70 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Sub_17)
#line 70 "inst_match.m"
{
#line 446 "inst_match.m"
  {
#line 446 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 446 "inst_match.m"
    MR_Word check_hlds__inst_match__MaybeSub_13;
#line 446 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19;
#line 446 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_33;
#line 446 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_34;
#line 446 "inst_match.m"
    MR_Word check_hlds__inst_match__V_39_39;
#line 446 "inst_match.m"
    MR_Word check_hlds__inst_match__V_60_60;
#line 477 "inst_match.m"
    MR_Word check_hlds__inst_match__V_42_42;
#line 477 "inst_match.m"
    MR_Word check_hlds__inst_match__V_44_44;
#line 477 "inst_match.m"
    MR_Word check_hlds__inst_match__V_45_45;
#line 477 "inst_match.m"
    MR_Word check_hlds__inst_match__V_46_46;
#line 477 "inst_match.m"
    MR_Word check_hlds__inst_match__V_47_47;

#line 448 "inst_match.m"
    {
#line 448 "inst_match.m"
      check_hlds__inst_match__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 448 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_19_19, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Sub_0_16));
#line 448 "inst_match.m"
    }
#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_60_60 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_14));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 1) = ((MR_Box) (check_hlds__inst_match__V_60_60));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 2) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 476 "inst_match.m"
    {
#line 476 "inst_match.m"
      check_hlds__inst_match__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_39_39, 0) = ((MR_Box) (check_hlds__inst_match__Type_10));
#line 476 "inst_match.m"
    }
#line 476 "inst_match.m"
    {
#line 476 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_8, check_hlds__inst_match__InstB_9, check_hlds__inst_match__V_39_39, check_hlds__inst_match__Info0_33, &check_hlds__inst_match__Info_34);
    }
#line 446 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 446 "inst_match.m"
      {
#line 477 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 0)));
#line 477 "inst_match.m"
        check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 1)));
#line 477 "inst_match.m"
        check_hlds__inst_match__MaybeSub_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 2)));
#line 477 "inst_match.m"
        check_hlds__inst_match__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 477 "inst_match.m"
        check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 477 "inst_match.m"
        check_hlds__inst_match__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 477 "inst_match.m"
        check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 451 "inst_match.m"
        if ((check_hlds__inst_match__MaybeSub_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "inst_match.m"
          {
#line 453 "inst_match.m"
            {
#line 453 "inst_match.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_sub\'/7", (MR_String) "missing inst_var_sub");
            }
#line 452 "inst_match.m"
          }
#line 451 "inst_match.m"
        else
#line 450 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Sub_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeSub_13, (MR_Integer) 0)));
#line 451 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 446 "inst_match.m"
      }
#line 446 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 446 "inst_match.m"
  }
#line 70 "inst_match.m"
}

#line 63 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_p_0(
#line 63 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 63 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 63 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 63 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 63 "inst_match.m"
{
#line 443 "inst_match.m"
  {
#line 443 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 443 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_21;
#line 443 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27;
#line 443 "inst_match.m"
    MR_Word check_hlds__inst_match__V_48_48;
#line 476 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_22;

#line 250 "inst_match.m"
    {
#line 250 "inst_match.m"
      check_hlds__inst_match__V_48_48 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 307 "inst_match.m"
    {
#line 307 "inst_match.m"
      check_hlds__inst_match__Info0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 1) = ((MR_Box) (check_hlds__inst_match__V_48_48));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 307 "inst_match.m"
    }
#line 476 "inst_match.m"
    {
#line 476 "inst_match.m"
      check_hlds__inst_match__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_27_27, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 476 "inst_match.m"
    }
#line 476 "inst_match.m"
    {
#line 476 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_27_27, check_hlds__inst_match__Info0_21, &check_hlds__inst_match__Info_22);
    }
#line 443 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 443 "inst_match.m"
  }
#line 63 "inst_match.m"
}

void mercury__check_hlds__inst_match__init(void)
{
}

void mercury__check_hlds__inst_match__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_expansions_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_matches_pred_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0);
}

void mercury__check_hlds__inst_match__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_match. */
