/*
** Automatically generated from `inst_match.m'
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



#line 1413 "inst_match.m"
struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s {
#line 1413 "inst_match.m"
  MR_Word * check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4;
#line 1413 "inst_match.m"
  MR_Cont check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont;
#line 1413 "inst_match.m"
  void * check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr;
#line 1415 "inst_match.m"
  MR_Word check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7;
#line 1421 "inst_match.m"
  MR_Box check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7;
#line 1413 "inst_match.m"
};

#line 1340 "inst_match.m"
struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s {
#line 1340 "inst_match.m"
  MR_Word * check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4;
#line 1340 "inst_match.m"
  MR_Cont check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont;
#line 1340 "inst_match.m"
  void * check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr;
#line 1344 "inst_match.m"
  MR_bool check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded;
#line 1349 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8;
#line 1356 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28;
#line 1356 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__V_27_27;
#line 1357 "inst_match.m"
  MR_Box check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4;
#line 1340 "inst_match.m"
};

#line 663 "inst_match.m"
struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s {
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5;
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6;
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8;
#line 676 "inst_match.m"
  MR_bool check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
#line 679 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13;
#line 641 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0;
#line 649 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1;
#line 649 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23;
#line 649 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24;
#line 653 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28;
#line 653 "inst_match.m"
  MR_Box check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27;
#line 663 "inst_match.m"
};

#line 635 "inst_match.m"
struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s {
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5;
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6;
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7;
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8;
#line 639 "inst_match.m"
  MR_bool check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
#line 641 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0;
#line 649 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1;
#line 649 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11;
#line 649 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12;
#line 653 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15;
#line 653 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16;
#line 653 "inst_match.m"
  MR_Box check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15;
#line 635 "inst_match.m"
};


#line 259 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 262 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 265 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 268 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0;

#line 271 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1;

#line 274 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2;

#line 277 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0[3];

#line 280 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3];

#line 283 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3];

#line 286 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;

#line 289 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0;

#line 292 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1;

#line 295 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0[2];

#line 298 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0[2];

#line 301 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0[2];

#line 304 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 307 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 310 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 313 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[7];

#line 316 "check_hlds.inst_match.c"
static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[7];

#line 319 "check_hlds.inst_match.c"
static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[7];

#line 322 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0;

#line 325 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1];

#line 328 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1];

#line 331 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1];

#line 334 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1];

#line 337 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 340 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3];

#line 343 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0;

#line 346 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1];

#line 349 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1];

#line 352 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1];

#line 355 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1];

#line 358 "check_hlds.inst_match.c"
static const MR_VA_TypeInfo_Struct5 check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0;

#line 361 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0;

#line 364 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1;

#line 367 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0[2];

#line 370 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2];

#line 373 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2];

#line 376 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
#line 379 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 381 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 384 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
#line 387 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 389 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 391 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 394 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
#line 397 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 399 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 402 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
#line 405 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 407 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 409 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 412 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
#line 415 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 417 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 420 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
#line 423 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 425 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 427 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 430 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
#line 433 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 435 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 438 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
#line 441 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 443 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 445 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 448 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
#line 451 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 453 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 456 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
#line 459 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 461 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 463 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 466 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
#line 469 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 471 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 474 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
#line 477 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 479 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 481 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 484 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
#line 487 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 489 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 492 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
#line 495 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 497 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 499 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 293 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 293 "inst_match.m"
  MR_Word check_hlds__inst_match__V_33_33,
#line 293 "inst_match.m"
  MR_Word check_hlds__inst_match__V_34_34,
#line 293 "inst_match.m"
  MR_Word check_hlds__inst_match__V_35_35,
#line 293 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_7,
#line 293 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_8);

#line 303 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho12_6_p_0(
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 303 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

#line 303 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho11_6_p_0(
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 303 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

#line 303 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho10_6_p_0(
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 303 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

#line 303 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho9_6_p_0(
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 303 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14);

#line 388 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 388 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 345 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 345 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 388 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 388 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 345 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 345 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 388 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 388 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 345 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 345 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 388 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 388 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 345 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 345 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 322 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 322 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 322 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho1_7_p_0(
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 322 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 243 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
#line 243 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 243 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 243 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 243 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
#line 243 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 243 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 288 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
#line 288 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 288 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 216 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
#line 216 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 216 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 216 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 216 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
#line 216 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 216 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 252 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
#line 252 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 252 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
#line 252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 223 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
#line 223 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 223 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 223 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 223 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
#line 223 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 223 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 265 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
#line 265 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 265 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 1427 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
#line 1427 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_1,
#line 1427 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_2);

#line 1415 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(
#line 1415 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1421 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_2(
#line 1421 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1413 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0(
#line 1413 "inst_match.m"
  MR_Word check_hlds__inst_match__Mode_3,
#line 1413 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1413 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1413 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1403 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(
#line 1403 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1403 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1403 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1403 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1390 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
#line 1390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1390 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1390 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1390 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1379 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
#line 1379 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1379 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1379 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1379 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1357 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_2(
#line 1357 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1356 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_3(
#line 1356 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1356 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(
#line 1356 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 1340 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
#line 1340 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_3,
#line 1340 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1340 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1340 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1303 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
#line 1303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_3,
#line 1303 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1303 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1303 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 1279 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
#line 1279 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1279 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1279 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1279 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1279 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1262 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
#line 1262 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1262 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1262 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1262 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1262 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1242 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
#line 1242 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_5,
#line 1242 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_6,
#line 1242 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 1242 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8);

#line 1153 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
#line 1153 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1153 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1153 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1153 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 1153 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42);

#line 1136 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
#line 1136 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1136 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1136 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1136 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 1136 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 1099 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
#line 1099 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1099 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1099 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1099 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1099 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1082 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
#line 1082 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1082 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1082 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1082 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1082 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1061 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
#line 1061 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 1061 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 1061 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1061 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 1061 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

#line 950 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
#line 950 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 950 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 950 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 950 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 950 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42);

#line 930 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
#line 930 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 930 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 930 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 930 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 930 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 904 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
#line 904 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 904 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 904 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 904 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 904 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 882 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 882 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 862 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
#line 862 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_4,
#line 862 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_5,
#line 862 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6);

#line 850 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
#line 850 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_4,
#line 850 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_5,
#line 850 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6);

#line 842 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
#line 842 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 842 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_2,
#line 842 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_3,
#line 842 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4);

#line 817 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
#line 817 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 817 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_2,
#line 817 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_3);

#line 779 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
#line 779 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 779 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 779 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 779 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 779 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 716 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
#line 716 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 716 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 716 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 716 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 716 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

#line 658 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 641 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
#line 641 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 641 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
#line 641 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 663 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_7,
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8);

#line 658 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 641 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
#line 641 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 641 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
#line 641 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 635 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_7,
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8);

#line 619 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
#line 619 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 619 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 619 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 619 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 619 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 606 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
#line 606 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 606 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 606 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 606 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 606 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 474 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
#line 474 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 474 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 474 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 474 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_50,
#line 474 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_51);

#line 458 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
#line 458 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 458 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 458 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 458 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 458 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 393 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
#line 393 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 393 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 393 "inst_match.m"
  MR_Word check_hlds__inst_match__InstVar_8,
#line 393 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 393 "inst_match.m"
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



#line 1476 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1484 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1492 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1500 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0 = {
  (MR_String) "cs_forward",
  (MR_Integer) 0
};

#line 1506 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1 = {
  (MR_String) "cs_reverse",
  (MR_Integer) 1
};

#line 1512 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2 = {
  (MR_String) "cs_none",
  (MR_Integer) 2
};

#line 1518 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2
};

#line 1525 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1
};

#line 1532 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1539 "check_hlds.inst_match.c"
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

#line 1556 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0
  }
};

#line 1564 "check_hlds.inst_match.c"
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

#line 1581 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0 = {
  (MR_String) "ground_matches_bound_if_complete",
  (MR_Integer) 0
};

#line 1587 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1 = {
  (MR_String) "ground_matches_bound_always",
  (MR_Integer) 1
};

#line 1593 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_ground_matches_bound_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1
};

#line 1599 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_ground_matches_bound_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_ground_matches_bound_0_0
};

#line 1605 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_ground_matches_bound_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1611 "check_hlds.inst_match.c"
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

#line 1628 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1636 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1645 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1653 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_ground_matches_bound_0
};

#line 1664 "check_hlds.inst_match.c"
static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[7] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_expansions",
  (MR_String) "imi_maybe_sub",
  (MR_String) "imi_calculate_sub",
  (MR_String) "imi_uniqueness_comparison",
  (MR_String) "imi_any_matches_any",
  (MR_String) "imi_ground_matches_bound"
};

#line 1675 "check_hlds.inst_match.c"
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

#line 1714 "check_hlds.inst_match.c"
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

#line 1729 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

#line 1734 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0
  }
};

#line 1743 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

#line 1748 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1] = {
  (MR_Integer) 0
};

#line 1753 "check_hlds.inst_match.c"
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

#line 1770 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1778 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1785 "check_hlds.inst_match.c"
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

#line 1800 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

#line 1805 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0
  }
};

#line 1814 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

#line 1819 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1] = {
  (MR_Integer) 0
};

#line 1824 "check_hlds.inst_match.c"
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

#line 1841 "check_hlds.inst_match.c"
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

#line 1854 "check_hlds.inst_match.c"
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

#line 1871 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0 = {
  (MR_String) "uc_match",
  (MR_Integer) 0
};

#line 1877 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1 = {
  (MR_String) "uc_instantiated",
  (MR_Integer) 1
};

#line 1883 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1
};

#line 1889 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0
};

#line 1895 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1901 "check_hlds.inst_match.c"
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

#line 1918 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
#line 1921 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 1923 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 1925 "check_hlds.inst_match.c"
{
#line 1927 "check_hlds.inst_match.c"
  {
#line 1929 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 1932 "check_hlds.inst_match.c"
    {
#line 1934 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____calculate_sub_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 1937 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 1939 "check_hlds.inst_match.c"
  }
#line 1941 "check_hlds.inst_match.c"
}

#line 1944 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
#line 1947 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 1949 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 1951 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 1953 "check_hlds.inst_match.c"
{
#line 1955 "check_hlds.inst_match.c"
  {
#line 1957 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 1960 "check_hlds.inst_match.c"
    {
#line 1962 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____calculate_sub_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 1965 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 1967 "check_hlds.inst_match.c"
  }
#line 1969 "check_hlds.inst_match.c"
}

#line 1972 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
#line 1975 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 1977 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 1979 "check_hlds.inst_match.c"
{
#line 1981 "check_hlds.inst_match.c"
  {
#line 1983 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 1986 "check_hlds.inst_match.c"
    {
#line 1988 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____expansions_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 1991 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 1993 "check_hlds.inst_match.c"
  }
#line 1995 "check_hlds.inst_match.c"
}

#line 1998 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
#line 2001 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2003 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2005 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2007 "check_hlds.inst_match.c"
{
#line 2009 "check_hlds.inst_match.c"
  {
#line 2011 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2014 "check_hlds.inst_match.c"
    {
#line 2016 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____expansions_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2019 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2021 "check_hlds.inst_match.c"
  }
#line 2023 "check_hlds.inst_match.c"
}

#line 2026 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____ground_matches_bound_0_0_10001(
#line 2029 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2031 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2033 "check_hlds.inst_match.c"
{
#line 2035 "check_hlds.inst_match.c"
  {
#line 2037 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2040 "check_hlds.inst_match.c"
    {
#line 2042 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____ground_matches_bound_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2045 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2047 "check_hlds.inst_match.c"
  }
#line 2049 "check_hlds.inst_match.c"
}

#line 2052 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____ground_matches_bound_0_0_10001(
#line 2055 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2057 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2059 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2061 "check_hlds.inst_match.c"
{
#line 2063 "check_hlds.inst_match.c"
  {
#line 2065 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2068 "check_hlds.inst_match.c"
    {
#line 2070 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____ground_matches_bound_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2073 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2075 "check_hlds.inst_match.c"
  }
#line 2077 "check_hlds.inst_match.c"
}

#line 2080 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
#line 2083 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2085 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2087 "check_hlds.inst_match.c"
{
#line 2089 "check_hlds.inst_match.c"
  {
#line 2091 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2094 "check_hlds.inst_match.c"
    {
#line 2096 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_match_info_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2099 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2101 "check_hlds.inst_match.c"
  }
#line 2103 "check_hlds.inst_match.c"
}

#line 2106 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
#line 2109 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2111 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2113 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2115 "check_hlds.inst_match.c"
{
#line 2117 "check_hlds.inst_match.c"
  {
#line 2119 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2122 "check_hlds.inst_match.c"
    {
#line 2124 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_match_info_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2127 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2129 "check_hlds.inst_match.c"
  }
#line 2131 "check_hlds.inst_match.c"
}

#line 2134 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
#line 2137 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2139 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2141 "check_hlds.inst_match.c"
{
#line 2143 "check_hlds.inst_match.c"
  {
#line 2145 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2148 "check_hlds.inst_match.c"
    {
#line 2150 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_match_inputs_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2153 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2155 "check_hlds.inst_match.c"
  }
#line 2157 "check_hlds.inst_match.c"
}

#line 2160 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
#line 2163 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2165 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2167 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2169 "check_hlds.inst_match.c"
{
#line 2171 "check_hlds.inst_match.c"
  {
#line 2173 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2176 "check_hlds.inst_match.c"
    {
#line 2178 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_match_inputs_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2181 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2183 "check_hlds.inst_match.c"
  }
#line 2185 "check_hlds.inst_match.c"
}

#line 2188 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
#line 2191 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2193 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2195 "check_hlds.inst_match.c"
{
#line 2197 "check_hlds.inst_match.c"
  {
#line 2199 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2202 "check_hlds.inst_match.c"
    {
#line 2204 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_matches_pred_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2207 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2209 "check_hlds.inst_match.c"
  }
#line 2211 "check_hlds.inst_match.c"
}

#line 2214 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
#line 2217 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2219 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2221 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2223 "check_hlds.inst_match.c"
{
#line 2225 "check_hlds.inst_match.c"
  {
#line 2227 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2230 "check_hlds.inst_match.c"
    {
#line 2232 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_matches_pred_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2235 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2237 "check_hlds.inst_match.c"
  }
#line 2239 "check_hlds.inst_match.c"
}

#line 2242 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
#line 2245 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2247 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2249 "check_hlds.inst_match.c"
{
#line 2251 "check_hlds.inst_match.c"
  {
#line 2253 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2256 "check_hlds.inst_match.c"
    {
#line 2258 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____uniqueness_comparison_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2261 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2263 "check_hlds.inst_match.c"
  }
#line 2265 "check_hlds.inst_match.c"
}

#line 2268 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
#line 2271 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2273 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2275 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2277 "check_hlds.inst_match.c"
{
#line 2279 "check_hlds.inst_match.c"
  {
#line 2281 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2284 "check_hlds.inst_match.c"
    {
#line 2286 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____uniqueness_comparison_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2289 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2291 "check_hlds.inst_match.c"
  }
#line 2293 "check_hlds.inst_match.c"
}

#line 293 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 293 "inst_match.m"
  MR_Word check_hlds__inst_match__V_33_33,
#line 293 "inst_match.m"
  MR_Word check_hlds__inst_match__V_34_34,
#line 293 "inst_match.m"
  MR_Word check_hlds__inst_match__V_35_35,
#line 293 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_7,
#line 293 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_8)
#line 293 "inst_match.m"
{
#line 297 "inst_match.m"
  {
#line 297 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_9_9;
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_11_11;
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 297 "inst_match.m"
    MR_Word check_hlds__inst_match__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 301 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26;
#line 301 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27;
#line 301 "inst_match.m"
    MR_Word check_hlds__inst_match__V_28_28;
#line 301 "inst_match.m"
    MR_Word check_hlds__inst_match__V_30_30;
#line 301 "inst_match.m"
    MR_Word check_hlds__inst_match__V_31_31;
#line 301 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 301 "inst_match.m"
    MR_Word check_hlds__inst_match__V_29_29;

#line 316 "inst_match.m"
#line 316 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_6) {
#line 316 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "inst_match.m"
      case (MR_Integer) 0:
#line 316 "inst_match.m"
        check_hlds__inst_match__V_10_10 = (MR_Integer) 1;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 2:
#line 318 "inst_match.m"
        check_hlds__inst_match__V_10_10 = (MR_Integer) 2;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 1:
#line 317 "inst_match.m"
        check_hlds__inst_match__V_10_10 = (MR_Integer) 0;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
    }
#line 299 "inst_match.m"
    {
#line 299 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 299 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 0) = ((MR_Box) (check_hlds__inst_match__V_13_13));
#line 299 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 1) = ((MR_Box) (check_hlds__inst_match__V_14_14));
#line 299 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 2) = ((MR_Box) (check_hlds__inst_match__V_15_15));
#line 299 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 3) = ((MR_Box) ((check_hlds__inst_match__V_10_10 | ((((check_hlds__inst_match__V_16_16 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_17_17 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_18_18 << (MR_Integer) 4)))))))));
#line 299 "inst_match.m"
    }
#line 300 "inst_match.m"
    {
#line 300 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__V_33_33, check_hlds__inst_match__V_34_34, check_hlds__inst_match__V_35_35, check_hlds__inst_match__STATE_VARIABLE_Info_9_9, &check_hlds__inst_match__STATE_VARIABLE_Info_11_11);
    }
#line 297 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 297 "inst_match.m"
      {
#line 301 "inst_match.m"
        check_hlds__inst_match__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 0)));
#line 301 "inst_match.m"
        check_hlds__inst_match__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 1)));
#line 301 "inst_match.m"
        check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 2)));
#line 301 "inst_match.m"
        check_hlds__inst_match__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 301 "inst_match.m"
        check_hlds__inst_match__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 301 "inst_match.m"
        check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 301 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 301 "inst_match.m"
        {
#line 301 "inst_match.m"
          MR_Word base;
#line 301 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 301 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_8 = base;
#line 301 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_26_26));
#line 301 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_27_27));
#line 301 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_28_28));
#line 301 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_6 | ((((check_hlds__inst_match__V_30_30 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_31_31 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_32_32 << (MR_Integer) 4)))))))));
#line 301 "inst_match.m"
        }
#line 301 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 297 "inst_match.m"
      }
#line 297 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 297 "inst_match.m"
  }
#line 293 "inst_match.m"
}

#line 187 "inst_match.m"
void MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_108_105_115_116_95_99_111_110_116_97_105_110_115_95_105_110_115_116_95_118_97_114_95_95_91_50_93_95_48_3_p_0(
#line 187 "inst_match.m"
  MR_Word check_hlds__inst_match__Modes_4,
#line 187 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_6,
#line 187 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 187 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 187 "inst_match.m"
{
#line 1401 "inst_match.m"
  {
#line 1401 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1401 "inst_match.m"
    {
#line 1401 "inst_match.m"
      check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_4, check_hlds__inst_match__InstVar_6, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
    }
#line 1401 "inst_match.m"
  }
#line 187 "inst_match.m"
}

#line 303 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho12_6_p_0(
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 303 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
#line 303 "inst_match.m"
{
#line 307 "inst_match.m"
  {
#line 307 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_34_34;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_36_36;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_37_37;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_35_35;

#line 316 "inst_match.m"
#line 316 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_12) {
#line 316 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "inst_match.m"
      case (MR_Integer) 0:
#line 316 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 1;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 2:
#line 318 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 2;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 1:
#line 317 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 0;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
    }
#line 310 "inst_match.m"
    {
#line 310 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__V_16_16 | ((((check_hlds__inst_match__V_22_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_23_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_24_24 << (MR_Integer) 4)))))))));
#line 310 "inst_match.m"
    }
#line 311 "inst_match.m"
    {
#line 311 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
#line 307 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 307 "inst_match.m"
      {
#line 312 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        {
#line 312 "inst_match.m"
          MR_Word base;
#line 312 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_32_32));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_34_34));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__V_36_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 4)))))))));
#line 312 "inst_match.m"
        }
#line 312 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 307 "inst_match.m"
      }
#line 307 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 307 "inst_match.m"
  }
#line 303 "inst_match.m"
}

#line 303 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho11_6_p_0(
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 303 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
#line 303 "inst_match.m"
{
#line 307 "inst_match.m"
  {
#line 307 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_34_34;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_36_36;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_37_37;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_35_35;

#line 316 "inst_match.m"
#line 316 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_12) {
#line 316 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "inst_match.m"
      case (MR_Integer) 0:
#line 316 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 1;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 2:
#line 318 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 2;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 1:
#line 317 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 0;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
    }
#line 310 "inst_match.m"
    {
#line 310 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__V_16_16 | ((((check_hlds__inst_match__V_22_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_23_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_24_24 << (MR_Integer) 4)))))))));
#line 310 "inst_match.m"
    }
#line 311 "inst_match.m"
    {
#line 311 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
#line 307 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 307 "inst_match.m"
      {
#line 312 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        {
#line 312 "inst_match.m"
          MR_Word base;
#line 312 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_32_32));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_34_34));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__V_36_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 4)))))))));
#line 312 "inst_match.m"
        }
#line 312 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 307 "inst_match.m"
      }
#line 307 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 307 "inst_match.m"
  }
#line 303 "inst_match.m"
}

#line 303 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho10_6_p_0(
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 303 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
#line 303 "inst_match.m"
{
#line 307 "inst_match.m"
  {
#line 307 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_34_34;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_36_36;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_37_37;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_35_35;

#line 316 "inst_match.m"
#line 316 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_12) {
#line 316 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "inst_match.m"
      case (MR_Integer) 0:
#line 316 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 1;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 2:
#line 318 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 2;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 1:
#line 317 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 0;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
    }
#line 310 "inst_match.m"
    {
#line 310 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__V_16_16 | ((((check_hlds__inst_match__V_22_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_23_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_24_24 << (MR_Integer) 4)))))))));
#line 310 "inst_match.m"
    }
#line 311 "inst_match.m"
    {
#line 311 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
#line 307 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 307 "inst_match.m"
      {
#line 312 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        {
#line 312 "inst_match.m"
          MR_Word base;
#line 312 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_32_32));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_34_34));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__V_36_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 4)))))))));
#line 312 "inst_match.m"
        }
#line 312 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 307 "inst_match.m"
      }
#line 307 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 307 "inst_match.m"
  }
#line 303 "inst_match.m"
}

#line 303 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__unswap__ho9_6_p_0(
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 303 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_13,
#line 303 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_14)
#line 303 "inst_match.m"
{
#line 307 "inst_match.m"
  {
#line 307 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_15_15;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 307 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_34_34;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_36_36;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_37_37;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 312 "inst_match.m"
    MR_Word check_hlds__inst_match__V_35_35;

#line 316 "inst_match.m"
#line 316 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_12) {
#line 316 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 316 "inst_match.m"
      case (MR_Integer) 0:
#line 316 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 1;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 2:
#line 318 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 2;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
      case (MR_Integer) 1:
#line 317 "inst_match.m"
        check_hlds__inst_match__V_16_16 = (MR_Integer) 0;
#line 316 "inst_match.m"
        break;
#line 316 "inst_match.m"
    }
#line 310 "inst_match.m"
    {
#line 310 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 310 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) ((check_hlds__inst_match__V_16_16 | ((((check_hlds__inst_match__V_22_22 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_23_23 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_24_24 << (MR_Integer) 4)))))))));
#line 310 "inst_match.m"
    }
#line 311 "inst_match.m"
    {
#line 311 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_15_15, &check_hlds__inst_match__STATE_VARIABLE_Info_17_17);
    }
#line 307 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 307 "inst_match.m"
      {
#line 312 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 312 "inst_match.m"
        check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 312 "inst_match.m"
        {
#line 312 "inst_match.m"
          MR_Word base;
#line 312 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 312 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_14 = base;
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_32_32));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_34_34));
#line 312 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_12 | ((((check_hlds__inst_match__V_36_36 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 4)))))))));
#line 312 "inst_match.m"
        }
#line 312 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 307 "inst_match.m"
      }
#line 307 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 307 "inst_match.m"
  }
#line 303 "inst_match.m"
}

#line 388 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 388 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 388 "inst_match.m"
{
#line 388 "inst_match.m"
  {
#line 388 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 388 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 388 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 388 "inst_match.m"
    {
#line 388 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 388 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
      {
#line 388 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 388 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 388 "inst_match.m"
      }
#line 388 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 388 "inst_match.m"
  }
#line 388 "inst_match.m"
}

#line 345 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 345 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 345 "inst_match.m"
{
#line 372 "inst_match.m"
  {
#line 372 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 372 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 372 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 352 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 352 "inst_match.m"
      {
#line 352 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 352 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 358 "inst_match.m"
        {
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifyInst_17;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_19;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 359 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_18;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_42_42;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_43_43;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_44_44;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_45_45;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 369 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifySubInst_20;
#line 366 "inst_match.m"
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
#line 366 "inst_match.m"
          MR_Word check_hlds__inst_match__V_46_46;

#line 359 "inst_match.m"
          {
#line 359 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
#line 358 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 358 "inst_match.m"
            {
#line 361 "inst_match.m"
              check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              {
#line 361 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_45_45 << (MR_Integer) 4)))))))));
#line 361 "inst_match.m"
              }
#line 387 "inst_match.m"
              if ((check_hlds__inst_match__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "inst_match.m"
                {
#line 390 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 390 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 390 "inst_match.m"
                }
#line 387 "inst_match.m"
              else
#line 387 "inst_match.m"
                {
#line 387 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_57_57;
#line 388 "inst_match.m"
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

#line 388 "inst_match.m"
                  {
#line 388 "inst_match.m"
                    check_hlds__inst_match__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 388 "inst_match.m"
                  }
#line 388 "inst_match.m"
                  {
#line 388 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_57_57, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
                    {
#line 388 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
#line 388 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 388 "inst_match.m"
                    }
#line 387 "inst_match.m"
                }
#line 358 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 358 "inst_match.m"
                {
#line 366 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 366 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 366 "inst_match.m"
                    {
#line 366 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
#line 366 "inst_match.m"
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
#line 3275 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
#line 366 "inst_match.m"
                      {
#line 366 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__V_46_46)));
                      }
#line 366 "inst_match.m"
                    }
#line 369 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 368 "inst_match.m"
                    {
#line 368 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 369 "inst_match.m"
                  else
#line 370 "inst_match.m"
                    {
#line 370 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 358 "inst_match.m"
                }
#line 358 "inst_match.m"
            }
#line 358 "inst_match.m"
        }
#line 352 "inst_match.m"
      }
#line 352 "inst_match.m"
    else
#line 374 "inst_match.m"
      {
#line 374 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 372 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 372 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 372 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 372 "inst_match.m"
          {
#line 372 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 372 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 373 "inst_match.m"
            {
#line 373 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 372 "inst_match.m"
          }
#line 372 "inst_match.m"
        else
#line 375 "inst_match.m"
          {
#line 375 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 374 "inst_match.m"
      }
#line 372 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 372 "inst_match.m"
  }
#line 345 "inst_match.m"
}

#line 388 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 388 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 388 "inst_match.m"
{
#line 388 "inst_match.m"
  {
#line 388 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 388 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 388 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 388 "inst_match.m"
    {
#line 388 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 388 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
      {
#line 388 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 388 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 388 "inst_match.m"
      }
#line 388 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 388 "inst_match.m"
  }
#line 388 "inst_match.m"
}

#line 345 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 345 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 345 "inst_match.m"
{
#line 372 "inst_match.m"
  {
#line 372 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 372 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 372 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 352 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 352 "inst_match.m"
      {
#line 352 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 352 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 358 "inst_match.m"
        {
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifyInst_17;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_19;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 359 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_18;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_42_42;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_43_43;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_44_44;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_45_45;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 369 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifySubInst_20;
#line 366 "inst_match.m"
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
#line 366 "inst_match.m"
          MR_Word check_hlds__inst_match__V_46_46;

#line 359 "inst_match.m"
          {
#line 359 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
#line 358 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 358 "inst_match.m"
            {
#line 361 "inst_match.m"
              check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              {
#line 361 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_45_45 << (MR_Integer) 4)))))))));
#line 361 "inst_match.m"
              }
#line 387 "inst_match.m"
              if ((check_hlds__inst_match__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "inst_match.m"
                {
#line 390 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 390 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 390 "inst_match.m"
                }
#line 387 "inst_match.m"
              else
#line 387 "inst_match.m"
                {
#line 387 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_69_69;
#line 388 "inst_match.m"
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

#line 388 "inst_match.m"
                  {
#line 388 "inst_match.m"
                    check_hlds__inst_match__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 388 "inst_match.m"
                  }
#line 388 "inst_match.m"
                  {
#line 388 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_69_69, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
                    {
#line 388 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
#line 388 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 388 "inst_match.m"
                    }
#line 387 "inst_match.m"
                }
#line 358 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 358 "inst_match.m"
                {
#line 366 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 366 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 366 "inst_match.m"
                    {
#line 366 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
#line 366 "inst_match.m"
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
#line 3574 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
#line 366 "inst_match.m"
                      {
#line 366 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__V_46_46)));
                      }
#line 366 "inst_match.m"
                    }
#line 369 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 368 "inst_match.m"
                    {
#line 368 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 369 "inst_match.m"
                  else
#line 370 "inst_match.m"
                    {
#line 370 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 358 "inst_match.m"
                }
#line 358 "inst_match.m"
            }
#line 358 "inst_match.m"
        }
#line 352 "inst_match.m"
      }
#line 352 "inst_match.m"
    else
#line 374 "inst_match.m"
      {
#line 374 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 372 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 372 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 372 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 372 "inst_match.m"
          {
#line 372 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 372 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 373 "inst_match.m"
            {
#line 373 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho10_6_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 372 "inst_match.m"
          }
#line 372 "inst_match.m"
        else
#line 375 "inst_match.m"
          {
#line 375 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho9_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 374 "inst_match.m"
      }
#line 372 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 372 "inst_match.m"
  }
#line 345 "inst_match.m"
}

#line 388 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 388 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 388 "inst_match.m"
{
#line 388 "inst_match.m"
  {
#line 388 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 388 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 388 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 388 "inst_match.m"
    {
#line 388 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 388 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
      {
#line 388 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 388 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 388 "inst_match.m"
      }
#line 388 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 388 "inst_match.m"
  }
#line 388 "inst_match.m"
}

#line 345 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 345 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 345 "inst_match.m"
{
#line 372 "inst_match.m"
  {
#line 372 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 372 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 372 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 352 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 352 "inst_match.m"
      {
#line 352 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 352 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 358 "inst_match.m"
        {
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifyInst_17;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_19;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 359 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_18;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_42_42;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_43_43;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_44_44;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_45_45;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 369 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifySubInst_20;
#line 366 "inst_match.m"
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
#line 366 "inst_match.m"
          MR_Word check_hlds__inst_match__V_46_46;

#line 359 "inst_match.m"
          {
#line 359 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
#line 358 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 358 "inst_match.m"
            {
#line 361 "inst_match.m"
              check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              {
#line 361 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_45_45 << (MR_Integer) 4)))))))));
#line 361 "inst_match.m"
              }
#line 387 "inst_match.m"
              if ((check_hlds__inst_match__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "inst_match.m"
                {
#line 390 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 390 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 390 "inst_match.m"
                }
#line 387 "inst_match.m"
              else
#line 387 "inst_match.m"
                {
#line 387 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_57_57;
#line 388 "inst_match.m"
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

#line 388 "inst_match.m"
                  {
#line 388 "inst_match.m"
                    check_hlds__inst_match__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_57_57, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 388 "inst_match.m"
                  }
#line 388 "inst_match.m"
                  {
#line 388 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_57_57, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
                    {
#line 388 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
#line 388 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 388 "inst_match.m"
                    }
#line 387 "inst_match.m"
                }
#line 358 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 358 "inst_match.m"
                {
#line 366 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 366 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 366 "inst_match.m"
                    {
#line 366 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
#line 366 "inst_match.m"
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
#line 3873 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
#line 366 "inst_match.m"
                      {
#line 366 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__V_46_46)));
                      }
#line 366 "inst_match.m"
                    }
#line 369 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 368 "inst_match.m"
                    {
#line 368 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 369 "inst_match.m"
                  else
#line 370 "inst_match.m"
                    {
#line 370 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 358 "inst_match.m"
                }
#line 358 "inst_match.m"
            }
#line 358 "inst_match.m"
        }
#line 352 "inst_match.m"
      }
#line 352 "inst_match.m"
    else
#line 374 "inst_match.m"
      {
#line 374 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 372 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 372 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 372 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 372 "inst_match.m"
          {
#line 372 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 372 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 373 "inst_match.m"
            {
#line 373 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 372 "inst_match.m"
          }
#line 372 "inst_match.m"
        else
#line 375 "inst_match.m"
          {
#line 375 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 374 "inst_match.m"
      }
#line 372 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 372 "inst_match.m"
  }
#line 345 "inst_match.m"
}

#line 388 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 388 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 388 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 388 "inst_match.m"
{
#line 388 "inst_match.m"
  {
#line 388 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 388 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 388 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 388 "inst_match.m"
    {
#line 388 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 388 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
      {
#line 388 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 388 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 388 "inst_match.m"
      }
#line 388 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 388 "inst_match.m"
  }
#line 388 "inst_match.m"
}

#line 345 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 345 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 345 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 345 "inst_match.m"
{
#line 372 "inst_match.m"
  {
#line 372 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 372 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 372 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 352 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 352 "inst_match.m"
      {
#line 352 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 352 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 358 "inst_match.m"
        {
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifyInst_17;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_19;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_28_28;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 358 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 359 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_18;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_42_42;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_43_43;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_44_44;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_45_45;
#line 361 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 369 "inst_match.m"
          MR_Word check_hlds__inst_match__UnifySubInst_20;
#line 366 "inst_match.m"
          MR_Word check_hlds__inst_match__TypeInfo_47_47;
#line 366 "inst_match.m"
          MR_Word check_hlds__inst_match__V_46_46;

#line 359 "inst_match.m"
          {
#line 359 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, (MR_Integer) 1, &check_hlds__inst_match__UnifyInst_17, &check_hlds__inst_match___Det_18, check_hlds__inst_match__ModuleInfo0_16, &check_hlds__inst_match__ModuleInfo_19);
          }
#line 358 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 358 "inst_match.m"
            {
#line 361 "inst_match.m"
              check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 361 "inst_match.m"
              check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 361 "inst_match.m"
              {
#line 361 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_19));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 361 "inst_match.m"
                MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_45_45 << (MR_Integer) 4)))))))));
#line 361 "inst_match.m"
              }
#line 387 "inst_match.m"
              if ((check_hlds__inst_match__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "inst_match.m"
                {
#line 390 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 390 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 390 "inst_match.m"
                }
#line 387 "inst_match.m"
              else
#line 387 "inst_match.m"
                {
#line 387 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_69_69;
#line 388 "inst_match.m"
                  MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28;

#line 388 "inst_match.m"
                  {
#line 388 "inst_match.m"
                    check_hlds__inst_match__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 3) = ((MR_Box) (check_hlds__inst_match__UnifyInst_17));
#line 388 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_69_69, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 388 "inst_match.m"
                  }
#line 388 "inst_match.m"
                  {
#line 388 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_69_69, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
                  }
#line 388 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 388 "inst_match.m"
                    {
#line 388 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_28_28 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_28_28);
#line 388 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 388 "inst_match.m"
                    }
#line 387 "inst_match.m"
                }
#line 358 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 358 "inst_match.m"
                {
#line 366 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__UnifyInst_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 366 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 366 "inst_match.m"
                    {
#line 366 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 1)));
#line 366 "inst_match.m"
                      check_hlds__inst_match__UnifySubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__UnifyInst_17, (MR_Integer) 2)));
#line 4172 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_47_47 = (MR_Word) &check_hlds__inst_match_scalar_common_1[4];
#line 366 "inst_match.m"
                      {
#line 366 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_47_47, ((MR_Box) (check_hlds__inst_match__InstVarsB_14)), ((MR_Box) (check_hlds__inst_match__V_46_46)));
                      }
#line 366 "inst_match.m"
                    }
#line 369 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 368 "inst_match.m"
                    {
#line 368 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifySubInst_20, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 369 "inst_match.m"
                  else
#line 370 "inst_match.m"
                    {
#line 370 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__UnifyInst_17, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_28_28, check_hlds__inst_match__STATE_VARIABLE_Info_24);
                    }
#line 358 "inst_match.m"
                }
#line 358 "inst_match.m"
            }
#line 358 "inst_match.m"
        }
#line 352 "inst_match.m"
      }
#line 352 "inst_match.m"
    else
#line 374 "inst_match.m"
      {
#line 374 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 372 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 372 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 372 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 372 "inst_match.m"
          {
#line 372 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 372 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 373 "inst_match.m"
            {
#line 373 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho12_6_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 372 "inst_match.m"
          }
#line 372 "inst_match.m"
        else
#line 375 "inst_match.m"
          {
#line 375 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__unswap__ho11_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 374 "inst_match.m"
      }
#line 372 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 372 "inst_match.m"
  }
#line 345 "inst_match.m"
}

#line 322 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 322 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 322 "inst_match.m"
{
#line 328 "inst_match.m"
  {
#line 328 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 328 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 334 "inst_match.m"
#line 334 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_14) {
#line 334 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 334 "inst_match.m"
      case (MR_Integer) 0:
#line 332 "inst_match.m"
        {
#line 332 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 334 "inst_match.m"
        break;
#line 334 "inst_match.m"
      case (MR_Integer) 2:
#line 342 "inst_match.m"
        {
#line 342 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 334 "inst_match.m"
        break;
#line 334 "inst_match.m"
      case (MR_Integer) 1:
#line 338 "inst_match.m"
        {
#line 338 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(check_hlds__inst_match__InstB_11, check_hlds__inst_match__InstA_10, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 334 "inst_match.m"
        break;
#line 334 "inst_match.m"
    }
#line 328 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 328 "inst_match.m"
  }
#line 322 "inst_match.m"
}

#line 322 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho1_7_p_0(
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 322 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 322 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 322 "inst_match.m"
{
#line 328 "inst_match.m"
  {
#line 328 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 328 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 329 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 334 "inst_match.m"
#line 334 "inst_match.m"
    switch (check_hlds__inst_match__CalculateSub_14) {
#line 334 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 334 "inst_match.m"
      case (MR_Integer) 0:
#line 332 "inst_match.m"
        {
#line 332 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 334 "inst_match.m"
        break;
#line 334 "inst_match.m"
      case (MR_Integer) 2:
#line 342 "inst_match.m"
        {
#line 342 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 334 "inst_match.m"
        break;
#line 334 "inst_match.m"
      case (MR_Integer) 1:
#line 338 "inst_match.m"
        {
#line 338 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(check_hlds__inst_match__InstB_11, check_hlds__inst_match__InstA_10, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 334 "inst_match.m"
        break;
#line 334 "inst_match.m"
    }
#line 328 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 328 "inst_match.m"
  }
#line 322 "inst_match.m"
}

#line 243 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
#line 243 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 243 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 243 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 243 "inst_match.m"
{
#line 243 "inst_match.m"
  {
#line 243 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 243 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 243 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 243 "inst_match.m"
    {
#line 243 "inst_match.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
    }
#line 243 "inst_match.m"
  }
#line 243 "inst_match.m"
}

#line 243 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
#line 243 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 243 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 243 "inst_match.m"
{
#line 4434 "check_hlds.inst_match.c"
  {
#line 4436 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

#line 4439 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 4441 "check_hlds.inst_match.c"
  }
#line 243 "inst_match.m"
}

#line 288 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
#line 288 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 288 "inst_match.m"
{
#line 288 "inst_match.m"
  {
#line 288 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 288 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
#line 288 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

#line 288 "inst_match.m"
    {
#line 288 "inst_match.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_3[0], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
    }
#line 288 "inst_match.m"
  }
#line 288 "inst_match.m"
}

#line 288 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 288 "inst_match.m"
{
#line 288 "inst_match.m"
  {
#line 288 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 288 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
#line 288 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

#line 288 "inst_match.m"
    {
#line 288 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) check_hlds__inst_match__Cast_HeadVar1_3, (MR_Word) check_hlds__inst_match__Cast_HeadVar2_4);
    }
#line 288 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 288 "inst_match.m"
  }
#line 288 "inst_match.m"
}

#line 216 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
#line 216 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 216 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 216 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 216 "inst_match.m"
{
#line 216 "inst_match.m"
  {
#line 216 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 216 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_12 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 216 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_13 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 216 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_12 == check_hlds__inst_match__CastY_13);
#line 216 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 4530 "check_hlds.inst_match.c"
      *check_hlds__inst_match__HeadVar__1_1 = (MR_Integer) 0;
#line 216 "inst_match.m"
    else
#line 216 "inst_match.m"
      {
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 2)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10;

#line 216 "inst_match.m"
        {
#line 216 "inst_match.m"
          parse_tree__prog_data____Compare____mer_inst_0_0(&check_hlds__inst_match__V_10_10, check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_7_7);
        }
#line 4556 "check_hlds.inst_match.c"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_10_10 == (MR_Integer) 0);
#line 216 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 216 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 216 "inst_match.m"
          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_10_10;
#line 216 "inst_match.m"
        else
#line 216 "inst_match.m"
          {
#line 216 "inst_match.m"
            MR_Word check_hlds__inst_match__V_11_11;

#line 216 "inst_match.m"
            {
#line 216 "inst_match.m"
              parse_tree__prog_data____Compare____mer_inst_0_0(&check_hlds__inst_match__V_11_11, check_hlds__inst_match__V_5_5, check_hlds__inst_match__V_8_8);
            }
#line 4576 "check_hlds.inst_match.c"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_11_11 == (MR_Integer) 0);
#line 216 "inst_match.m"
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 216 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 216 "inst_match.m"
              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_11_11;
#line 216 "inst_match.m"
            else
#line 216 "inst_match.m"
              {
#line 216 "inst_match.m"
                {
#line 216 "inst_match.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[1], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__V_6_6)), ((MR_Box) (check_hlds__inst_match__V_9_9)));
                }
#line 216 "inst_match.m"
              }
#line 216 "inst_match.m"
          }
#line 216 "inst_match.m"
      }
#line 216 "inst_match.m"
  }
#line 216 "inst_match.m"
}

#line 216 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
#line 216 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 216 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 216 "inst_match.m"
{
#line 216 "inst_match.m"
  {
#line 216 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 216 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_9 = (MR_Integer) check_hlds__inst_match__HeadVar__1_1;
#line 216 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_10 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;

#line 216 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_9 == check_hlds__inst_match__CastY_10);
#line 216 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 216 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 216 "inst_match.m"
    else
#line 216 "inst_match.m"
      {
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_13_13;
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 2)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 216 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));

#line 4647 "check_hlds.inst_match.c"
        {
#line 4649 "check_hlds.inst_match.c"
          check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__V_3_3, check_hlds__inst_match__V_6_6);
        }
#line 216 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 216 "inst_match.m"
          {
#line 4656 "check_hlds.inst_match.c"
            {
#line 4658 "check_hlds.inst_match.c"
              check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_7_7);
            }
#line 216 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 216 "inst_match.m"
              {
#line 4665 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_13_13 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 4667 "check_hlds.inst_match.c"
                {
#line 4669 "check_hlds.inst_match.c"
                  check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_13_13, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_8_8)));
                }
#line 216 "inst_match.m"
              }
#line 216 "inst_match.m"
          }
#line 216 "inst_match.m"
      }
#line 216 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 216 "inst_match.m"
  }
#line 216 "inst_match.m"
}

#line 252 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
#line 252 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 252 "inst_match.m"
{
#line 252 "inst_match.m"
  {
#line 252 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 252 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_24 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 252 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_25 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 252 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_24 == check_hlds__inst_match__CastY_25);
#line 252 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 4709 "check_hlds.inst_match.c"
      *check_hlds__inst_match__HeadVar__1_1 = (MR_Integer) 0;
#line 252 "inst_match.m"
    else
#line 252 "inst_match.m"
      {
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 2)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_18_18;

#line 252 "inst_match.m"
        {
#line 252 "inst_match.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__inst_match__V_18_18, check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_11_11);
        }
#line 4751 "check_hlds.inst_match.c"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_18_18 == (MR_Integer) 0);
#line 252 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 252 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_18_18;
#line 252 "inst_match.m"
        else
#line 252 "inst_match.m"
          {
#line 252 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19;

#line 252 "inst_match.m"
            {
#line 252 "inst_match.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], &check_hlds__inst_match__V_19_19, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_12_12)));
            }
#line 4771 "check_hlds.inst_match.c"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 0);
#line 252 "inst_match.m"
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 252 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_19_19;
#line 252 "inst_match.m"
            else
#line 252 "inst_match.m"
              {
#line 252 "inst_match.m"
                MR_Word check_hlds__inst_match__V_20_20;

#line 252 "inst_match.m"
                {
#line 252 "inst_match.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[3], &check_hlds__inst_match__V_20_20, ((MR_Box) (check_hlds__inst_match__V_6_6)), ((MR_Box) (check_hlds__inst_match__V_13_13)));
                }
#line 4791 "check_hlds.inst_match.c"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_20_20 == (MR_Integer) 0);
#line 252 "inst_match.m"
                check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 252 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
                  *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_20_20;
#line 252 "inst_match.m"
                else
#line 252 "inst_match.m"
                  {
#line 252 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_21_21;
#line 252 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_33_33 = (MR_Integer) check_hlds__inst_match__V_7_7;
#line 252 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_34_34 = (MR_Integer) check_hlds__inst_match__V_14_14;

#line 252 "inst_match.m"
                    {
#line 252 "inst_match.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__V_21_21, check_hlds__inst_match__V_33_33, check_hlds__inst_match__V_34_34);
                    }
#line 4815 "check_hlds.inst_match.c"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_21_21 == (MR_Integer) 0);
#line 252 "inst_match.m"
                    check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 252 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
                      *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_21_21;
#line 252 "inst_match.m"
                    else
#line 252 "inst_match.m"
                      {
#line 252 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_22_22;
#line 252 "inst_match.m"
                        MR_Integer check_hlds__inst_match__V_35_35 = (MR_Integer) check_hlds__inst_match__V_8_8;
#line 252 "inst_match.m"
                        MR_Integer check_hlds__inst_match__V_36_36 = (MR_Integer) check_hlds__inst_match__V_15_15;

#line 252 "inst_match.m"
                        {
#line 252 "inst_match.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__V_22_22, check_hlds__inst_match__V_35_35, check_hlds__inst_match__V_36_36);
                        }
#line 4839 "check_hlds.inst_match.c"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_22_22 == (MR_Integer) 0);
#line 252 "inst_match.m"
                        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 252 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
                          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_22_22;
#line 252 "inst_match.m"
                        else
#line 252 "inst_match.m"
                          {
#line 252 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_23_23;
#line 252 "inst_match.m"
                            MR_Integer check_hlds__inst_match__V_37_37 = (MR_Integer) check_hlds__inst_match__V_9_9;
#line 252 "inst_match.m"
                            MR_Integer check_hlds__inst_match__V_38_38 = (MR_Integer) check_hlds__inst_match__V_16_16;

#line 252 "inst_match.m"
                            {
#line 252 "inst_match.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__V_23_23, check_hlds__inst_match__V_37_37, check_hlds__inst_match__V_38_38);
                            }
#line 4863 "check_hlds.inst_match.c"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_23_23 == (MR_Integer) 0);
#line 252 "inst_match.m"
                            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 252 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
                              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_23_23;
#line 252 "inst_match.m"
                            else
#line 252 "inst_match.m"
                              {
#line 252 "inst_match.m"
                                MR_Integer check_hlds__inst_match__V_39_39 = (MR_Integer) check_hlds__inst_match__V_10_10;
#line 252 "inst_match.m"
                                MR_Integer check_hlds__inst_match__V_40_40 = (MR_Integer) check_hlds__inst_match__V_17_17;

#line 252 "inst_match.m"
                                {
#line 252 "inst_match.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__V_39_39, check_hlds__inst_match__V_40_40);
                                }
#line 252 "inst_match.m"
                              }
#line 252 "inst_match.m"
                          }
#line 252 "inst_match.m"
                      }
#line 252 "inst_match.m"
                  }
#line 252 "inst_match.m"
              }
#line 252 "inst_match.m"
          }
#line 252 "inst_match.m"
      }
#line 252 "inst_match.m"
  }
#line 252 "inst_match.m"
}

#line 252 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
#line 252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 252 "inst_match.m"
{
#line 252 "inst_match.m"
  {
#line 252 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 252 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_17 = (MR_Integer) check_hlds__inst_match__HeadVar__1_1;
#line 252 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_18 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;

#line 252 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_17 == check_hlds__inst_match__CastY_18);
#line 252 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 252 "inst_match.m"
    else
#line 252 "inst_match.m"
      {
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_20_20;
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_21_21;
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 2)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 252 "inst_match.m"
        MR_Word check_hlds__inst_match__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 4965 "check_hlds.inst_match.c"
        {
#line 4967 "check_hlds.inst_match.c"
          check_hlds__inst_match__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__inst_match__V_3_3, check_hlds__inst_match__V_10_10);
        }
#line 252 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
          {
#line 4974 "check_hlds.inst_match.c"
            check_hlds__inst_match__TypeInfo_20_20 = (MR_Word) &check_hlds__inst_match_scalar_common_1[2];
#line 4976 "check_hlds.inst_match.c"
            {
#line 4978 "check_hlds.inst_match.c"
              check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_20_20, ((MR_Box) (check_hlds__inst_match__V_4_4)), ((MR_Box) (check_hlds__inst_match__V_11_11)));
            }
#line 252 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
              {
#line 4985 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_21_21 = (MR_Word) &check_hlds__inst_match_scalar_common_1[3];
#line 4987 "check_hlds.inst_match.c"
                {
#line 4989 "check_hlds.inst_match.c"
                  check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_21_21, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_12_12)));
                }
#line 252 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
                  {
#line 4996 "check_hlds.inst_match.c"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_6_6 == check_hlds__inst_match__V_13_13);
#line 252 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
                      {
#line 5002 "check_hlds.inst_match.c"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_7_7 == check_hlds__inst_match__V_14_14);
#line 252 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 252 "inst_match.m"
                          {
#line 5008 "check_hlds.inst_match.c"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_8_8 == check_hlds__inst_match__V_15_15);
#line 252 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 5012 "check_hlds.inst_match.c"
                              check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_9_9 == check_hlds__inst_match__V_16_16);
#line 252 "inst_match.m"
                          }
#line 252 "inst_match.m"
                      }
#line 252 "inst_match.m"
                  }
#line 252 "inst_match.m"
              }
#line 252 "inst_match.m"
          }
#line 252 "inst_match.m"
      }
#line 252 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 252 "inst_match.m"
  }
#line 252 "inst_match.m"
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
#line 5072 "check_hlds.inst_match.c"
  {
#line 5074 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

#line 5077 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 5079 "check_hlds.inst_match.c"
  }
#line 113 "inst_match.m"
}

#line 223 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
#line 223 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 223 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 223 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 223 "inst_match.m"
{
#line 223 "inst_match.m"
  {
#line 223 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 223 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
#line 223 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

#line 223 "inst_match.m"
    {
#line 223 "inst_match.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
    }
#line 223 "inst_match.m"
  }
#line 223 "inst_match.m"
}

#line 223 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
#line 223 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 223 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 223 "inst_match.m"
{
#line 223 "inst_match.m"
  {
#line 223 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 223 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
#line 223 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

#line 223 "inst_match.m"
    {
#line 223 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_4)));
    }
#line 223 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 223 "inst_match.m"
  }
#line 223 "inst_match.m"
}

#line 265 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
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
check_hlds__inst_match____Unify____calculate_sub_0_0(
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 265 "inst_match.m"
{
#line 5183 "check_hlds.inst_match.c"
  {
#line 5185 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

#line 5188 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 5190 "check_hlds.inst_match.c"
  }
#line 265 "inst_match.m"
}

#line 1427 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
#line 1427 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_1,
#line 1427 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_2)
#line 1427 "inst_match.m"
{
#line 1429 "inst_match.m"
  {
#line 1429 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1432 "inst_match.m"
{
#define MR_PROC_LABEL check_hlds__inst_match__same_addr_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA =  check_hlds__inst_match__InstA_1 ;
	InstB =  check_hlds__inst_match__InstB_2 ;
		{
#line 1432 "inst_match.m"

    SUCCESS_INDICATOR = ((void *) InstA == (void *) InstB);

#line 5224 "check_hlds.inst_match.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1432 "inst_match.m"
	}
check_hlds__inst_match__succeeded  = SUCCESS_INDICATOR;
}
#line 1429 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1429 "inst_match.m"
  }
#line 1427 "inst_match.m"
}

#line 1415 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(
#line 1415 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1415 "inst_match.m"
{
#line 1415 "inst_match.m"
  {
#line 1415 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 1423 "inst_match.m"
    {
#line 1423 "inst_match.m"
      check_hlds__inst_match__inst_contains_inst_var_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr);
    }
#line 1415 "inst_match.m"
  }
#line 1415 "inst_match.m"
}

#line 1421 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_2(
#line 1421 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1421 "inst_match.m"
{
#line 1421 "inst_match.m"
  {
#line 1421 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 1421 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7);
#line 1421 "inst_match.m"
    {
#line 1421 "inst_match.m"
      check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(check_hlds__inst_match__env_ptr);
    }
#line 1421 "inst_match.m"
  }
#line 1421 "inst_match.m"
}

#line 1413 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0(
#line 1413 "inst_match.m"
  MR_Word check_hlds__inst_match__Mode_3,
#line 1413 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1413 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1413 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1413 "inst_match.m"
{
#line 1413 "inst_match.m"
  {
#line 1413 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s check_hlds__inst_match__env;

#line 1413 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4 = check_hlds__inst_match__InstVar_4;
#line 1413 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont = check_hlds__inst_match__cont;
#line 1413 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr = check_hlds__inst_match__cont_env_ptr;
#line 1415 "inst_match.m"
    {
#line 1415 "inst_match.m"
      MR_bool check_hlds__inst_match__succeeded;

#line 1419 "inst_match.m"
      if (((MR_tag((MR_Word) check_hlds__inst_match__Mode_3)) == (MR_mktag((MR_Integer) 0))))
#line 1417 "inst_match.m"
        {
#line 1417 "inst_match.m"
          MR_Word check_hlds__inst_match__Initial_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Mode_3, (MR_Integer) 0)));
#line 1417 "inst_match.m"
          MR_Word check_hlds__inst_match__Final_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Mode_3, (MR_Integer) 1)));

#line 1418 "inst_match.m"
          (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = check_hlds__inst_match__Initial_5;
#line 1418 "inst_match.m"
          {
#line 1418 "inst_match.m"
            check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(&check_hlds__inst_match__env);
          }
#line 1418 "inst_match.m"
          (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = check_hlds__inst_match__Final_6;
#line 1418 "inst_match.m"
          {
#line 1418 "inst_match.m"
            check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(&check_hlds__inst_match__env);
          }
#line 1417 "inst_match.m"
        }
#line 1419 "inst_match.m"
      else
#line 1420 "inst_match.m"
        {
#line 1420 "inst_match.m"
          MR_Word check_hlds__inst_match__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Mode_3, (MR_Integer) 1)));
#line 1420 "inst_match.m"
          MR_Word check_hlds__inst_match___Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Mode_3, (MR_Integer) 0)));

#line 1421 "inst_match.m"
          {
#line 1421 "inst_match.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7, check_hlds__inst_match__Insts_9, check_hlds__inst_match__mode_contains_inst_var_2_p_0_2, &check_hlds__inst_match__env);
          }
#line 1420 "inst_match.m"
        }
#line 1415 "inst_match.m"
    }
#line 1413 "inst_match.m"
  }
#line 1413 "inst_match.m"
}

#line 1403 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(
#line 1403 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1403 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1403 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1403 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1403 "inst_match.m"
{
#line 1406 "inst_match.m"
  while (MR_TRUE)
#line 1406 "inst_match.m"
    {
#line 1406 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1406 "inst_match.m"
      {
#line 1406 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1406 "inst_match.m"
        MR_Word check_hlds__inst_match__Mode_3;
#line 1406 "inst_match.m"
        MR_Word check_hlds__inst_match__Modes_4;

#line 1406 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1406 "inst_match.m"
          {
#line 1406 "inst_match.m"
            check_hlds__inst_match__Mode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1406 "inst_match.m"
            check_hlds__inst_match__Modes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1408 "inst_match.m"
            {
#line 1408 "inst_match.m"
              check_hlds__inst_match__mode_contains_inst_var_2_p_0(check_hlds__inst_match__Mode_3, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 1410 "inst_match.m"
            {
#line 1410 "inst_match.m"
              /* direct tailcall eliminated */
#line 1410 "inst_match.m"
              {
#line 1410 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Modes_4;

#line 1410 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1410 "inst_match.m"
              }
#line 1410 "inst_match.m"
              continue;
#line 1410 "inst_match.m"
            }
#line 1406 "inst_match.m"
          }
#line 1406 "inst_match.m"
      }
#line 1406 "inst_match.m"
      break;
#line 1406 "inst_match.m"
    }
#line 1403 "inst_match.m"
}

#line 1390 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
#line 1390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1390 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1390 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1390 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1390 "inst_match.m"
{
#line 1393 "inst_match.m"
  while (MR_TRUE)
#line 1393 "inst_match.m"
    {
#line 1393 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1393 "inst_match.m"
      {
#line 1393 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1393 "inst_match.m"
        MR_Word check_hlds__inst_match__Inst_3;
#line 1393 "inst_match.m"
        MR_Word check_hlds__inst_match__Insts_4;

#line 1393 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1393 "inst_match.m"
          {
#line 1393 "inst_match.m"
            check_hlds__inst_match__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1393 "inst_match.m"
            check_hlds__inst_match__Insts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1395 "inst_match.m"
            {
#line 1395 "inst_match.m"
              check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__Inst_3, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 1397 "inst_match.m"
            {
#line 1397 "inst_match.m"
              /* direct tailcall eliminated */
#line 1397 "inst_match.m"
              {
#line 1397 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_4;

#line 1397 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1397 "inst_match.m"
              }
#line 1397 "inst_match.m"
              continue;
#line 1397 "inst_match.m"
            }
#line 1393 "inst_match.m"
          }
#line 1393 "inst_match.m"
      }
#line 1393 "inst_match.m"
      break;
#line 1393 "inst_match.m"
    }
#line 1390 "inst_match.m"
}

#line 1379 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
#line 1379 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1379 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 1379 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1379 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1379 "inst_match.m"
{
#line 1382 "inst_match.m"
  while (MR_TRUE)
#line 1382 "inst_match.m"
    {
#line 1382 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1382 "inst_match.m"
      {
#line 1382 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1382 "inst_match.m"
        MR_Word check_hlds__inst_match__BoundInst_3;
#line 1382 "inst_match.m"
        MR_Word check_hlds__inst_match__BoundInsts_4;
#line 1382 "inst_match.m"
        MR_Word check_hlds__inst_match__ArgInsts_7;
#line 1383 "inst_match.m"
        MR_Word check_hlds__inst_match___Functor_6;

#line 1382 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1382 "inst_match.m"
          {
#line 1382 "inst_match.m"
            check_hlds__inst_match__BoundInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1382 "inst_match.m"
            check_hlds__inst_match__BoundInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1383 "inst_match.m"
            check_hlds__inst_match___Functor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_3, (MR_Integer) 0)));
#line 1383 "inst_match.m"
            check_hlds__inst_match__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_3, (MR_Integer) 1)));
#line 1385 "inst_match.m"
            {
#line 1385 "inst_match.m"
              check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_7, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 1387 "inst_match.m"
            {
#line 1387 "inst_match.m"
              /* direct tailcall eliminated */
#line 1387 "inst_match.m"
              {
#line 1387 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_4;

#line 1387 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1387 "inst_match.m"
              }
#line 1387 "inst_match.m"
              continue;
#line 1387 "inst_match.m"
            }
#line 1382 "inst_match.m"
          }
#line 1382 "inst_match.m"
      }
#line 1382 "inst_match.m"
      break;
#line 1382 "inst_match.m"
    }
#line 1379 "inst_match.m"
}

#line 1357 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_2(
#line 1357 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1357 "inst_match.m"
{
#line 1357 "inst_match.m"
  {
#line 1357 "inst_match.m"
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 1357 "inst_match.m"
    *((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4);
#line 1357 "inst_match.m"
    {
#line 1357 "inst_match.m"
      check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(check_hlds__inst_match__env_ptr);
    }
#line 1357 "inst_match.m"
  }
#line 1357 "inst_match.m"
}

#line 1356 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_3(
#line 1356 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1356 "inst_match.m"
{
#line 1356 "inst_match.m"
  {
#line 1356 "inst_match.m"
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 5614 "check_hlds.inst_match.c"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &check_hlds__inst_match_scalar_common_1[0];
#line 1361 "inst_match.m"
    {
#line 1361 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__TypeInfo_28_28, ((MR_Box) (*((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4))), ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__V_27_27)));
    }
#line 1361 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded)
#line 1361 "inst_match.m"
      {
#line 1361 "inst_match.m"
        ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont)((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
      }
#line 1356 "inst_match.m"
  }
#line 1356 "inst_match.m"
}

#line 1356 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0_1(
#line 1356 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 1356 "inst_match.m"
{
#line 1356 "inst_match.m"
  {
#line 1356 "inst_match.m"
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 1361 "inst_match.m"
    {
#line 1361 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__V_27_27, check_hlds__inst_match__inst_contains_inst_var_2_p_0_3, check_hlds__inst_match__env_ptr);
    }
#line 1356 "inst_match.m"
  }
#line 1356 "inst_match.m"
}

#line 1340 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
#line 1340 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_3,
#line 1340 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1340 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1340 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1340 "inst_match.m"
{
#line 1340 "inst_match.m"
  {
#line 1340 "inst_match.m"
    struct check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0_s check_hlds__inst_match__env;

#line 1340 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4 = check_hlds__inst_match__InstVar_4;
#line 1340 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont = check_hlds__inst_match__cont;
#line 1340 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr = check_hlds__inst_match__cont_env_ptr;
#line 1344 "inst_match.m"
#line 1344 "inst_match.m"
    switch (MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) {
#line 1344 "inst_match.m"
      case (MR_Integer) 3:
#line 1344 "inst_match.m"
#line 1344 "inst_match.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) {
#line 1344 "inst_match.m"
          case (MR_Integer) 0:
#line 1349 "inst_match.m"
            {
#line 1349 "inst_match.m"
              MR_Word check_hlds__inst_match__InstResults_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 1349 "inst_match.m"
              MR_Word check_hlds__inst_match___Uniq_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 1349 "inst_match.m"
              (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 3)));
#line 1353 "inst_match.m"
              if ((check_hlds__inst_match__InstResults_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1368 "inst_match.m"
                {
#line 1368 "inst_match.m"
                  check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                }
#line 1353 "inst_match.m"
              else
#line 1353 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__InstResults_7)) == (MR_mktag((MR_Integer) 1))))
#line 1354 "inst_match.m"
                {
#line 1354 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstVarResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 3)));
#line 1354 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 0)));
#line 1354 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 1)));
#line 1354 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 2)));
#line 1354 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 4)));
#line 1354 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 5)));

#line 1362 "inst_match.m"
                  if ((check_hlds__inst_match__InstVarResult_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1364 "inst_match.m"
                    {
#line 1364 "inst_match.m"
                      check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__BoundInsts_8, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                    }
#line 1362 "inst_match.m"
                  else
#line 1356 "inst_match.m"
                    {
#line 1356 "inst_match.m"
                      MR_Word check_hlds__inst_match__InstVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstVarResult_12, (MR_Integer) 0)));

#line 1357 "inst_match.m"
                      {
#line 1357 "inst_match.m"
                        mercury__set__member_2_p_1((MR_Word) &check_hlds__inst_match_scalar_common_1[0], &(check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__conv0_InstVar_4, check_hlds__inst_match__InstVars_15, check_hlds__inst_match__inst_contains_inst_var_2_p_0_2, &check_hlds__inst_match__env);
                      }
#line 1356 "inst_match.m"
                    }
#line 1354 "inst_match.m"
                }
#line 1353 "inst_match.m"
              else
#line 1353 "inst_match.m"
                {
#line 1353 "inst_match.m"
                }
#line 1349 "inst_match.m"
            }
#line 1344 "inst_match.m"
            break;
#line 1344 "inst_match.m"
          case (MR_Integer) 1:
#line 1371 "inst_match.m"
            {
#line 1371 "inst_match.m"
              MR_Word check_hlds__inst_match__HOInstInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 1371 "inst_match.m"
              MR_Word check_hlds__inst_match__Modes_18;
#line 1371 "inst_match.m"
              MR_Word check_hlds__inst_match__V_23_23;
#line 1371 "inst_match.m"
              MR_Word check_hlds__inst_match___Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
#line 1372 "inst_match.m"
              MR_Word check_hlds__inst_match___PredOrFunc_17;
#line 1372 "inst_match.m"
              MR_Word check_hlds__inst_match__V_19_19;
#line 1372 "inst_match.m"
              MR_Word check_hlds__inst_match___Det_20;

#line 1372 "inst_match.m"
              (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HOInstInfo_16)) == (MR_mktag((MR_Integer) 1)));
#line 1372 "inst_match.m"
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__succeeded)
#line 1372 "inst_match.m"
                {
#line 1372 "inst_match.m"
                  check_hlds__inst_match__V_23_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_16), (MR_Integer) 1);
#line 1372 "inst_match.m"
                  check_hlds__inst_match___PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 0)));
#line 1372 "inst_match.m"
                  check_hlds__inst_match__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 1)));
#line 1372 "inst_match.m"
                  check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 2)));
#line 1372 "inst_match.m"
                  check_hlds__inst_match___Det_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 3)));
#line 1373 "inst_match.m"
                  {
#line 1373 "inst_match.m"
                    check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_18, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
                  }
#line 1372 "inst_match.m"
                }
#line 1371 "inst_match.m"
            }
#line 1344 "inst_match.m"
            break;
#line 1344 "inst_match.m"
          case (MR_Integer) 2:
#line 1344 "inst_match.m"
            {
#line 1344 "inst_match.m"
              *((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
#line 1344 "inst_match.m"
              {
#line 1344 "inst_match.m"
                ((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont)((check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
#line 1344 "inst_match.m"
            }
#line 1344 "inst_match.m"
            break;
#line 1344 "inst_match.m"
          case (MR_Integer) 4:
#line 1346 "inst_match.m"
            {
#line 1346 "inst_match.m"
              MR_Word check_hlds__inst_match__InstName_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 1347 "inst_match.m"
              {
#line 1347 "inst_match.m"
                check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(check_hlds__inst_match__InstName_5, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
#line 1346 "inst_match.m"
            }
#line 1344 "inst_match.m"
            break;
#line 1344 "inst_match.m"
          case (MR_Integer) 5:
#line 1375 "inst_match.m"
            {
#line 1375 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 1375 "inst_match.m"
              MR_Word check_hlds__inst_match___Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 1376 "inst_match.m"
              {
#line 1376 "inst_match.m"
                check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_22, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env).check_hlds__inst_match__inst_contains_inst_var_2_p_0_env_0__cont_env_ptr);
              }
#line 1375 "inst_match.m"
            }
#line 1344 "inst_match.m"
            break;
#line 1344 "inst_match.m"
        }
#line 1344 "inst_match.m"
        break;
#line 1344 "inst_match.m"
    }
#line 1340 "inst_match.m"
  }
#line 1340 "inst_match.m"
}

#line 1303 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
#line 1303 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_3,
#line 1303 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 1303 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 1303 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 1303 "inst_match.m"
{
#line 1310 "inst_match.m"
  while (MR_TRUE)
#line 1310 "inst_match.m"
    {
#line 1310 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1310 "inst_match.m"
      {
#line 1310 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1310 "inst_match.m"
#line 1310 "inst_match.m"
        switch (MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) {
#line 1310 "inst_match.m"
          case (MR_Integer) 0:
#line 1308 "inst_match.m"
            {
#line 1308 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 1308 "inst_match.m"
              MR_Word check_hlds__inst_match___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));

#line 1309 "inst_match.m"
              {
#line 1309 "inst_match.m"
                check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_6, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1308 "inst_match.m"
            }
#line 1310 "inst_match.m"
            break;
#line 1310 "inst_match.m"
          case (MR_Integer) 1:
#line 1316 "inst_match.m"
            {
#line 1316 "inst_match.m"
              MR_Word check_hlds__inst_match__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 2)));
#line 1316 "inst_match.m"
              MR_Word check_hlds__inst_match__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 3)));
#line 1316 "inst_match.m"
              MR_Word check_hlds__inst_match___Live_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));
#line 1316 "inst_match.m"
              MR_Word check_hlds__inst_match___Real_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1317 "inst_match.m"
              {
#line 1317 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstA_14, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1318 "inst_match.m"
              {
#line 1318 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstB_15, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1316 "inst_match.m"
            }
#line 1310 "inst_match.m"
            break;
#line 1310 "inst_match.m"
          case (MR_Integer) 2:
#line 1311 "inst_match.m"
            {
#line 1311 "inst_match.m"
              MR_Word check_hlds__inst_match__InstA_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));
#line 1311 "inst_match.m"
              MR_Word check_hlds__inst_match__InstB_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1312 "inst_match.m"
              {
#line 1312 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstA_7, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1313 "inst_match.m"
              {
#line 1313 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstB_8, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 1311 "inst_match.m"
            }
#line 1310 "inst_match.m"
            break;
#line 1310 "inst_match.m"
          case (MR_Integer) 3:
#line 1310 "inst_match.m"
#line 1310 "inst_match.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 0)))) {
#line 1310 "inst_match.m"
              case (MR_Integer) 0:
#line 1321 "inst_match.m"
                {
#line 1321 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 1321 "inst_match.m"
                  MR_Word check_hlds__inst_match___Uniq_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1321 "inst_match.m"
                  MR_Word check_hlds__inst_match___Live_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1321 "inst_match.m"
                  MR_Word check_hlds__inst_match___Real_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1322 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1322 "inst_match.m"
                  {
#line 1322 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_11;

#line 1322 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1322 "inst_match.m"
                  }
#line 1322 "inst_match.m"
                  continue;
#line 1321 "inst_match.m"
                }
#line 1310 "inst_match.m"
                break;
#line 1310 "inst_match.m"
              case (MR_Integer) 1:
#line 1324 "inst_match.m"
                {
#line 1324 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 1324 "inst_match.m"
                  MR_Word check_hlds__inst_match___Live_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1324 "inst_match.m"
                  MR_Word check_hlds__inst_match___Real_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1324 "inst_match.m"
                  MR_Word check_hlds__inst_match___Uniq_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1325 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1325 "inst_match.m"
                  {
#line 1325 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_25;

#line 1325 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1325 "inst_match.m"
                  }
#line 1325 "inst_match.m"
                  continue;
#line 1324 "inst_match.m"
                }
#line 1310 "inst_match.m"
                break;
#line 1310 "inst_match.m"
              case (MR_Integer) 2:
#line 1327 "inst_match.m"
                {
#line 1327 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1328 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1328 "inst_match.m"
                  {
#line 1328 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_27;

#line 1328 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1328 "inst_match.m"
                  }
#line 1328 "inst_match.m"
                  continue;
#line 1327 "inst_match.m"
                }
#line 1310 "inst_match.m"
                break;
#line 1310 "inst_match.m"
              case (MR_Integer) 3:
#line 1330 "inst_match.m"
                {
#line 1330 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1331 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1331 "inst_match.m"
                  {
#line 1331 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_28;

#line 1331 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1331 "inst_match.m"
                  }
#line 1331 "inst_match.m"
                  continue;
#line 1330 "inst_match.m"
                }
#line 1310 "inst_match.m"
                break;
#line 1310 "inst_match.m"
              case (MR_Integer) 5:
#line 1336 "inst_match.m"
                {
#line 1336 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)));
#line 1336 "inst_match.m"
                  MR_Word check_hlds__inst_match___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 1337 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1337 "inst_match.m"
                  {
#line 1337 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_32;

#line 1337 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 1337 "inst_match.m"
                  }
#line 1337 "inst_match.m"
                  continue;
#line 1336 "inst_match.m"
                }
#line 1310 "inst_match.m"
                break;
#line 1310 "inst_match.m"
            }
#line 1310 "inst_match.m"
            break;
#line 1310 "inst_match.m"
        }
#line 1310 "inst_match.m"
      }
#line 1310 "inst_match.m"
      break;
#line 1310 "inst_match.m"
    }
#line 1303 "inst_match.m"
}

#line 1279 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
#line 1279 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1279 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1279 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1279 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1279 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1279 "inst_match.m"
{
#line 1283 "inst_match.m"
  while (MR_TRUE)
#line 1283 "inst_match.m"
    {
#line 1283 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1283 "inst_match.m"
      {
#line 1283 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1283 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1283 "inst_match.m"
          {
#line 1283 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1283 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1283 "inst_match.m"
          }
#line 1283 "inst_match.m"
        else
#line 1284 "inst_match.m"
          {
#line 1284 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1284 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1284 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 1284 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 1284 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 1284 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 1284 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 1284 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 1284 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1284 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1284 "inst_match.m"
              {
#line 1284 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1284 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1285 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 1285 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 1286 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 1286 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 1287 "inst_match.m"
                {
#line 1287 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 1292 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1289 "inst_match.m"
                  {
#line 1289 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 1289 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1289 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 1289 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 1288 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1288 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1288 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1288 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1288 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1288 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1289 "inst_match.m"
                    {
#line 1289 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 1288 "inst_match.m"
                    {
#line 1288 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 1290 "inst_match.m"
                    {
#line 1290 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 1289 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1291 "inst_match.m"
                      {
#line 1291 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1291 "inst_match.m"
                        {
#line 1291 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 1291 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 1291 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 1291 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1291 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1291 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1291 "inst_match.m"
                        }
#line 1291 "inst_match.m"
                        continue;
#line 1291 "inst_match.m"
                      }
#line 1289 "inst_match.m"
                  }
#line 1292 "inst_match.m"
                else
#line 1293 "inst_match.m"
                  {
#line 707 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_39;
#line 707 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_40;
#line 707 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_42;
#line 707 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_43;
#line 691 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_41_41;
#line 692 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_44_44;

#line 691 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 691 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 691 "inst_match.m"
                      {
#line 691 "inst_match.m"
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 691 "inst_match.m"
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 691 "inst_match.m"
                        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 692 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 692 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 692 "inst_match.m"
                          {
#line 692 "inst_match.m"
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 692 "inst_match.m"
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 692 "inst_match.m"
                            check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 692 "inst_match.m"
                          }
#line 691 "inst_match.m"
                      }
#line 707 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 696 "inst_match.m"
                      {
#line 696 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_45;
#line 696 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_47;
#line 696 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_49;

#line 695 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
#line 695 "inst_match.m"
                          {
#line 695 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

#line 695 "inst_match.m"
                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
#line 695 "inst_match.m"
                          }
#line 695 "inst_match.m"
                        else
#line 694 "inst_match.m"
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
#line 698 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
#line 698 "inst_match.m"
                          {
#line 698 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

#line 698 "inst_match.m"
                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
#line 698 "inst_match.m"
                          }
#line 698 "inst_match.m"
                        else
#line 697 "inst_match.m"
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
#line 700 "inst_match.m"
                        {
#line 700 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
#line 703 "inst_match.m"
#line 703 "inst_match.m"
                        switch (check_hlds__inst_match__O_49) {
#line 703 "inst_match.m"
                          default:
#line 703 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                          case (MR_Integer) 0:
#line 705 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                          case (MR_Integer) 2:
#line 702 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                        }
#line 696 "inst_match.m"
                      }
#line 707 "inst_match.m"
                    else
#line 708 "inst_match.m"
                      {
#line 708 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;

#line 708 "inst_match.m"
                        {
#line 708 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_53_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 708 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_53_53);
#line 708 "inst_match.m"
                      }
#line 1293 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1298 "inst_match.m"
                      {
#line 1298 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1298 "inst_match.m"
                        {
#line 1298 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 1298 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1298 "inst_match.m"
                        }
#line 1298 "inst_match.m"
                        continue;
#line 1298 "inst_match.m"
                      }
#line 1293 "inst_match.m"
                  }
#line 1284 "inst_match.m"
              }
#line 1284 "inst_match.m"
          }
#line 1283 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1283 "inst_match.m"
      }
#line 1283 "inst_match.m"
      break;
#line 1283 "inst_match.m"
    }
#line 1279 "inst_match.m"
}

#line 1262 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
#line 1262 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1262 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1262 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1262 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1262 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1262 "inst_match.m"
{
#line 1266 "inst_match.m"
  while (MR_TRUE)
#line 1266 "inst_match.m"
    {
#line 1266 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1266 "inst_match.m"
      {
#line 1266 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1266 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1266 "inst_match.m"
          {
#line 1266 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1266 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1266 "inst_match.m"
              {
#line 1266 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1266 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1266 "inst_match.m"
                  {
#line 1266 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1266 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1266 "inst_match.m"
                  }
#line 1266 "inst_match.m"
              }
#line 1266 "inst_match.m"
          }
#line 1266 "inst_match.m"
        else
#line 1268 "inst_match.m"
          {
#line 1268 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1268 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1268 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgB_11;
#line 1268 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsB_12;
#line 1268 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 1268 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 1268 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1267 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1267 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1267 "inst_match.m"
              {
#line 1267 "inst_match.m"
                check_hlds__inst_match__ArgB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1267 "inst_match.m"
                check_hlds__inst_match__ArgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1268 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1268 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1268 "inst_match.m"
                  {
#line 1268 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 1268 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 1269 "inst_match.m"
                    {
#line 1269 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__ArgA_9, check_hlds__inst_match__ArgB_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 1268 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1270 "inst_match.m"
                      {
#line 1270 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1270 "inst_match.m"
                        {
#line 1270 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ArgsA_10;
#line 1270 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ArgsB_12;
#line 1270 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 1270 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1270 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1270 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 1270 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1270 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1270 "inst_match.m"
                        }
#line 1270 "inst_match.m"
                        continue;
#line 1270 "inst_match.m"
                      }
#line 1268 "inst_match.m"
                  }
#line 1267 "inst_match.m"
              }
#line 1268 "inst_match.m"
          }
#line 1266 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1266 "inst_match.m"
      }
#line 1266 "inst_match.m"
      break;
#line 1266 "inst_match.m"
    }
#line 1262 "inst_match.m"
}

#line 1242 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
#line 1242 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_5,
#line 1242 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_6,
#line 1242 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 1242 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 1242 "inst_match.m"
{
#line 1248 "inst_match.m"
  {
#line 1248 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1248 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1248 "inst_match.m"
    else
#line 1248 "inst_match.m"
      {
#line 1248 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_6), (MR_Integer) 1);

#line 1248 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1250 "inst_match.m"
          {
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_18_18;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_2_75;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_91;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 1250 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_13;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_14;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__Info0_61;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_63_63;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_64_64;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_65_65;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_66_66;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_67_67;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_74_74;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_82;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_83;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_85;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_86;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_88;
#line 1250 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_89_89;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_92_92;
#line 1250 "inst_match.m"
            MR_Word check_hlds__inst_match__V_93_93;
#line 1252 "inst_match.m"
            MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 1252 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 762 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_84;
#line 763 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_87;
#line 765 "inst_match.m"
            MR_Word check_hlds__inst_match__V_62_62;

#line 1252 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_15_15 == (MR_Integer) 1);
#line 1250 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1250 "inst_match.m"
              {
#line 6667 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1253 "inst_match.m"
                {
#line 1253 "inst_match.m"
                  check_hlds__inst_match__Arity_13 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_18_18, check_hlds__inst_match__ArgModes_10);
                }
#line 1254 "inst_match.m"
                {
#line 1254 "inst_match.m"
                  check_hlds__inst_match__PredInstA_14 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_match__Arity_13);
                }
#line 744 "inst_match.m"
                check_hlds__inst_match__V_63_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 744 "inst_match.m"
                check_hlds__inst_match__V_64_64 = (MR_Integer) 2;
#line 744 "inst_match.m"
                check_hlds__inst_match__V_65_65 = (MR_Integer) 0;
#line 744 "inst_match.m"
                check_hlds__inst_match__V_66_66 = (MR_Integer) 1;
#line 745 "inst_match.m"
                check_hlds__inst_match__V_67_67 = (MR_Integer) 0;
#line 6689 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_2_75 = (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;
#line 228 "inst_match.m"
                {
#line 228 "inst_match.m"
                  check_hlds__inst_match__V_74_74 = mercury__set_tree234__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_2_75);
                }
#line 762 "inst_match.m"
                check_hlds__inst_match__PredOrFunc_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 0)));
#line 762 "inst_match.m"
                check_hlds__inst_match__ModesA_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 1)));
#line 762 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsA_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 2)));
#line 762 "inst_match.m"
                check_hlds__inst_match__Det_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 3)));
#line 763 "inst_match.m"
                check_hlds__inst_match__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 763 "inst_match.m"
                check_hlds__inst_match__ModesB_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 763 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsB_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 763 "inst_match.m"
                check_hlds__inst_match__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 763 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_82 == check_hlds__inst_match__V_92_92);
#line 1250 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1250 "inst_match.m"
                  {
#line 763 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_85 == check_hlds__inst_match__V_93_93);
#line 1250 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1250 "inst_match.m"
                      {
#line 6724 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_21_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 285 "inst_match.m"
                        {
#line 285 "inst_match.m"
                          check_hlds__inst_match__Info0_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 285 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 1) = ((MR_Box) (check_hlds__inst_match__V_74_74));
#line 285 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 2) = ((MR_Box) (check_hlds__inst_match__V_63_63));
#line 285 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_61, 3) = ((MR_Box) ((check_hlds__inst_match__V_64_64 | ((((check_hlds__inst_match__V_65_65 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_66_66 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_67_67 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
                        }
#line 764 "inst_match.m"
                        {
#line 764 "inst_match.m"
                          check_hlds__inst_match__V_89_89 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_91, check_hlds__inst_match__ModesA_83);
                        }
#line 764 "inst_match.m"
                        {
#line 764 "inst_match.m"
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__V_89_89, &check_hlds__inst_match__MaybeTypes_88);
                        }
#line 765 "inst_match.m"
                        {
#line 765 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_83, check_hlds__inst_match__ModesB_86, check_hlds__inst_match__MaybeTypes_88, check_hlds__inst_match__Info0_61, &check_hlds__inst_match__V_62_62);
                        }
#line 1250 "inst_match.m"
                      }
#line 1250 "inst_match.m"
                  }
#line 1250 "inst_match.m"
              }
#line 1250 "inst_match.m"
          }
#line 1248 "inst_match.m"
        else
#line 1257 "inst_match.m"
          {
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_54;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_17 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_5), (MR_Integer) 1);
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__Info0_24;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__V_37_37;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_45;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_46;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_48;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_49;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_51;
#line 1257 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_52_52;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__V_55_55;
#line 1257 "inst_match.m"
            MR_Word check_hlds__inst_match__V_56_56;
#line 762 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_47;
#line 763 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_50;
#line 765 "inst_match.m"
            MR_Word check_hlds__inst_match__V_25_25;

#line 228 "inst_match.m"
            {
#line 228 "inst_match.m"
              check_hlds__inst_match__V_37_37 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
            }
#line 762 "inst_match.m"
            check_hlds__inst_match__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 0)));
#line 762 "inst_match.m"
            check_hlds__inst_match__ModesA_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 1)));
#line 762 "inst_match.m"
            check_hlds__inst_match___MaybeArgRegsA_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 2)));
#line 762 "inst_match.m"
            check_hlds__inst_match__Det_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 3)));
#line 763 "inst_match.m"
            check_hlds__inst_match__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 763 "inst_match.m"
            check_hlds__inst_match__ModesB_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 763 "inst_match.m"
            check_hlds__inst_match___MaybeArgRegsB_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 763 "inst_match.m"
            check_hlds__inst_match__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 763 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_45 == check_hlds__inst_match__V_55_55);
#line 1257 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1257 "inst_match.m"
              {
#line 763 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_48 == check_hlds__inst_match__V_56_56);
#line 1257 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1257 "inst_match.m"
                  {
#line 6831 "check_hlds.inst_match.c"
                    check_hlds__inst_match__TypeCtorInfo_21_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 285 "inst_match.m"
                    {
#line 285 "inst_match.m"
                      check_hlds__inst_match__Info0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 285 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 1) = ((MR_Box) (check_hlds__inst_match__V_37_37));
#line 285 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
                    }
#line 764 "inst_match.m"
                    {
#line 764 "inst_match.m"
                      check_hlds__inst_match__V_52_52 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_54, check_hlds__inst_match__ModesA_46);
                    }
#line 764 "inst_match.m"
                    {
#line 764 "inst_match.m"
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__V_52_52, &check_hlds__inst_match__MaybeTypes_51);
                    }
#line 765 "inst_match.m"
                    {
#line 765 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_46, check_hlds__inst_match__ModesB_49, check_hlds__inst_match__MaybeTypes_51, check_hlds__inst_match__Info0_24, &check_hlds__inst_match__V_25_25);
                    }
#line 1257 "inst_match.m"
                  }
#line 1257 "inst_match.m"
              }
#line 1257 "inst_match.m"
          }
#line 1248 "inst_match.m"
      }
#line 1248 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1248 "inst_match.m"
  }
#line 1242 "inst_match.m"
}

#line 1153 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
#line 1153 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1153 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1153 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1153 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 1153 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42)
#line 1153 "inst_match.m"
{
#line 1158 "inst_match.m"
  {
#line 1158 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
#line 1158 "inst_match.m"
      default:
#line 1158 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_FALSE;
#line 1158 "inst_match.m"
        break;
#line 1158 "inst_match.m"
      case (MR_Integer) 0:
#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
#line 1158 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1158 "inst_match.m"
          case (MR_Integer) 0:
#line 1158 "inst_match.m"
            {
#line 1159 "inst_match.m"
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 1158 "inst_match.m"
                {
#line 1158 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1158 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 1158 "inst_match.m"
                }
#line 1158 "inst_match.m"
            }
#line 1158 "inst_match.m"
            break;
#line 1158 "inst_match.m"
          case (MR_Integer) 1:
#line 1239 "inst_match.m"
            {
#line 1239 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1239 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1239 "inst_match.m"
            }
#line 1158 "inst_match.m"
            break;
#line 1158 "inst_match.m"
        }
#line 1158 "inst_match.m"
        break;
#line 1158 "inst_match.m"
      case (MR_Integer) 2:
#line 1158 "inst_match.m"
        {
#line 1158 "inst_match.m"
          MR_Word check_hlds__inst_match__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1158 "inst_match.m"
          MR_Word check_hlds__inst_match__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));
#line 1158 "inst_match.m"
          MR_Word check_hlds__inst_match__V_171_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1158 "inst_match.m"
          MR_Word check_hlds__inst_match__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1166 "inst_match.m"
          MR_Word check_hlds__inst_match__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1166 "inst_match.m"
          MR_Word check_hlds__inst_match__V_172_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1166 "inst_match.m"
          MR_Word check_hlds__inst_match__V_173_173 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1166 "inst_match.m"
          MR_Word check_hlds__inst_match__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1166 "inst_match.m"
          MR_Word check_hlds__inst_match__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));

#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 1158 "inst_match.m"
            default:
#line 1158 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 1158 "inst_match.m"
              break;
#line 1158 "inst_match.m"
            case (MR_Integer) 2:
#line 1161 "inst_match.m"
              {
#line 1161 "inst_match.m"
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1161 "inst_match.m"
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1171 "inst_match.m"
#line 1171 "inst_match.m"
                switch (check_hlds__inst_match__V_171_171) {
#line 1171 "inst_match.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1171 "inst_match.m"
                  case (MR_Integer) 0:
#line 1172 "inst_match.m"
                    {
#line 1172 "inst_match.m"
                      MR_Word check_hlds__inst_match__NextInstA_15;
#line 1172 "inst_match.m"
                      MR_Word check_hlds__inst_match__NextInstB_16;
#line 1172 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_62_62;
#line 1175 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_105_105;
#line 1175 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_106_106;
#line 1175 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_107_107;
#line 1175 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_108_108;
#line 1175 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_109_109;
#line 1175 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_110_110;

#line 1173 "inst_match.m"
                      {
#line 1173 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_176_176, check_hlds__inst_match__V_164_164, check_hlds__inst_match__V_163_163, &check_hlds__inst_match__NextInstA_15);
                      }
#line 1172 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1172 "inst_match.m"
                        {
#line 1175 "inst_match.m"
                          check_hlds__inst_match__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1175 "inst_match.m"
                          check_hlds__inst_match__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1175 "inst_match.m"
                          check_hlds__inst_match__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1175 "inst_match.m"
                          check_hlds__inst_match__V_107_107 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1175 "inst_match.m"
                          check_hlds__inst_match__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1175 "inst_match.m"
                          check_hlds__inst_match__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1175 "inst_match.m"
                          check_hlds__inst_match__V_110_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1175 "inst_match.m"
                          {
#line 1175 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_62_62, check_hlds__inst_match__UniqB_12, check_hlds__inst_match__HOInstInfoB_13, &check_hlds__inst_match__NextInstB_16);
                          }
#line 1172 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 1177 "inst_match.m"
                            {
#line 1177 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_15, check_hlds__inst_match__NextInstB_16, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                            }
#line 1172 "inst_match.m"
                        }
#line 1172 "inst_match.m"
                    }
#line 1171 "inst_match.m"
                    break;
#line 1171 "inst_match.m"
                  case (MR_Integer) 1:
#line 1168 "inst_match.m"
                    {
#line 1168 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_163_163, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
#line 1171 "inst_match.m"
                    break;
#line 1171 "inst_match.m"
                }
#line 1161 "inst_match.m"
              }
#line 1158 "inst_match.m"
              break;
#line 1158 "inst_match.m"
            case (MR_Integer) 3:
#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 1158 "inst_match.m"
                default:
#line 1158 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
                case (MR_Integer) 0:
#line 1186 "inst_match.m"
                  {
#line 1186 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_70;

#line 1188 "inst_match.m"
                    {
#line 1188 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_176_176, check_hlds__inst_match__V_164_164, check_hlds__inst_match__V_163_163, &check_hlds__inst_match__NextInstA_70);
                    }
#line 1186 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1190 "inst_match.m"
                      {
#line 1190 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_70, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1186 "inst_match.m"
                  }
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
                case (MR_Integer) 1:
#line 1180 "inst_match.m"
                  {
#line 1180 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_67;

#line 1182 "inst_match.m"
                    {
#line 1182 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_176_176, check_hlds__inst_match__V_164_164, check_hlds__inst_match__V_163_163, &check_hlds__inst_match__NextInstA_67);
                    }
#line 1180 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1184 "inst_match.m"
                      {
#line 1184 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_67, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1180 "inst_match.m"
                  }
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
              }
#line 1158 "inst_match.m"
              break;
#line 1158 "inst_match.m"
          }
#line 1158 "inst_match.m"
        }
#line 1158 "inst_match.m"
        break;
#line 1158 "inst_match.m"
      case (MR_Integer) 3:
#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
#line 1158 "inst_match.m"
          default:
#line 1158 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 1158 "inst_match.m"
            break;
#line 1158 "inst_match.m"
          case (MR_Integer) 0:
#line 1158 "inst_match.m"
            {
#line 1158 "inst_match.m"
              MR_Word check_hlds__inst_match__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 1158 "inst_match.m"
              MR_Word check_hlds__inst_match__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1198 "inst_match.m"
              MR_Word check_hlds__inst_match__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 1158 "inst_match.m"
                default:
#line 1158 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
                case (MR_Integer) 2:
#line 1198 "inst_match.m"
                  {
#line 1198 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1198 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1198 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1198 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstB_76;
#line 1200 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1200 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1200 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_131_131 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1200 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1200 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1200 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_134_134 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1200 "inst_match.m"
                    {
#line 1200 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_53_53, check_hlds__inst_match__UniqB_74, check_hlds__inst_match__HOInstInfoB_75, &check_hlds__inst_match__NextInstB_76);
                    }
#line 1198 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1202 "inst_match.m"
                      {
#line 1202 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__NextInstB_76, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1198 "inst_match.m"
                  }
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
                case (MR_Integer) 3:
#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 1158 "inst_match.m"
                    default:
#line 1158 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 1158 "inst_match.m"
                      break;
#line 1158 "inst_match.m"
                    case (MR_Integer) 0:
#line 1204 "inst_match.m"
                      {
#line 1204 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1205 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1205 "inst_match.m"
                        MR_Word check_hlds__inst_match___InstResultB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 1206 "inst_match.m"
                        {
#line 1206 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(check_hlds__inst_match__V_165_165, check_hlds__inst_match__BoundInstsB_32, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                        }
#line 1204 "inst_match.m"
                      }
#line 1158 "inst_match.m"
                      break;
#line 1158 "inst_match.m"
                    case (MR_Integer) 1:
#line 1209 "inst_match.m"
                      {
#line 1209 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1209 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_51_51;
#line 1210 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1211 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_135_135;
#line 1211 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_136_136;
#line 1211 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_137_137;
#line 1211 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_138_138;
#line 1211 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_139_139;
#line 1211 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_140_140;

#line 1210 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1209 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1209 "inst_match.m"
                          {
#line 1211 "inst_match.m"
                            check_hlds__inst_match__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1211 "inst_match.m"
                            check_hlds__inst_match__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1211 "inst_match.m"
                            check_hlds__inst_match__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1211 "inst_match.m"
                            check_hlds__inst_match__V_137_137 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1211 "inst_match.m"
                            check_hlds__inst_match__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1211 "inst_match.m"
                            check_hlds__inst_match__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1211 "inst_match.m"
                            check_hlds__inst_match__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1211 "inst_match.m"
                            {
#line 1211 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_166_166, check_hlds__inst_match__V_165_165, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_51_51);
                            }
#line 1209 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1209 "inst_match.m"
                              {
#line 1209 "inst_match.m"
                                *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1209 "inst_match.m"
                                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1209 "inst_match.m"
                              }
#line 1209 "inst_match.m"
                          }
#line 1209 "inst_match.m"
                      }
#line 1158 "inst_match.m"
                      break;
#line 1158 "inst_match.m"
                  }
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
              }
#line 1158 "inst_match.m"
            }
#line 1158 "inst_match.m"
            break;
#line 1158 "inst_match.m"
          case (MR_Integer) 1:
#line 1158 "inst_match.m"
            {
#line 1158 "inst_match.m"
              MR_Word check_hlds__inst_match__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1158 "inst_match.m"
              MR_Word check_hlds__inst_match__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1192 "inst_match.m"
              MR_Word check_hlds__inst_match__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1194 "inst_match.m"
              MR_Word check_hlds__inst_match__V_177_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1194 "inst_match.m"
              MR_Word check_hlds__inst_match__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1194 "inst_match.m"
              MR_Word check_hlds__inst_match__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1194 "inst_match.m"
              MR_Word check_hlds__inst_match__V_180_180 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1194 "inst_match.m"
              MR_Word check_hlds__inst_match__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1194 "inst_match.m"
              MR_Word check_hlds__inst_match__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));

#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 1158 "inst_match.m"
                default:
#line 1158 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
                case (MR_Integer) 2:
#line 1192 "inst_match.m"
                  {
#line 1192 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1192 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1192 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstB_73;

#line 1194 "inst_match.m"
                    {
#line 1194 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_183_183, check_hlds__inst_match__UniqB_71, check_hlds__inst_match__HOInstInfoB_72, &check_hlds__inst_match__NextInstB_73);
                    }
#line 1192 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1196 "inst_match.m"
                      {
#line 1196 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__NextInstB_73, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1192 "inst_match.m"
                  }
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
                case (MR_Integer) 3:
#line 1158 "inst_match.m"
#line 1158 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 1158 "inst_match.m"
                    default:
#line 1158 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 1158 "inst_match.m"
                      break;
#line 1158 "inst_match.m"
                    case (MR_Integer) 0:
#line 1214 "inst_match.m"
                      {
#line 1214 "inst_match.m"
                        MR_Word check_hlds__inst_match__TypeCtorInfo_159_159;
#line 1214 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstResultsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1214 "inst_match.m"
                        MR_Word check_hlds__inst_match__Type_36;
#line 1214 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_48_48;
#line 1214 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_49_49;
#line 1214 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1215 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1221 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_147_147;
#line 1221 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_148_148;
#line 1221 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_149_149;
#line 1221 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_150_150;
#line 1221 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_151_151;
#line 1221 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_152_152;

#line 1216 "inst_match.m"
                        {
#line 1216 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__InstResultsB_35, check_hlds__inst_match__BoundInstsB_86, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_183_183);
                        }
#line 1214 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1214 "inst_match.m"
                          {
#line 7428 "check_hlds.inst_match.c"
                            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 7430 "check_hlds.inst_match.c"
                            if (check_hlds__inst_match__succeeded)
#line 7432 "check_hlds.inst_match.c"
                              {
#line 7434 "check_hlds.inst_match.c"
                                check_hlds__inst_match__Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 7436 "check_hlds.inst_match.c"
                                check_hlds__inst_match__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1221 "inst_match.m"
                                {
#line 1221 "inst_match.m"
                                  check_hlds__inst_match__V_48_48 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_159_159);
                                }
#line 1221 "inst_match.m"
                                check_hlds__inst_match__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1221 "inst_match.m"
                                check_hlds__inst_match__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1221 "inst_match.m"
                                check_hlds__inst_match__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1221 "inst_match.m"
                                check_hlds__inst_match__V_149_149 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1221 "inst_match.m"
                                check_hlds__inst_match__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1221 "inst_match.m"
                                check_hlds__inst_match__V_151_151 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1221 "inst_match.m"
                                check_hlds__inst_match__V_152_152 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1221 "inst_match.m"
                                {
#line 1221 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_48_48, check_hlds__inst_match__V_49_49, check_hlds__inst_match__BoundInstsB_86, check_hlds__inst_match__Type_36);
                                }
#line 1214 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 1214 "inst_match.m"
                                  {
#line 1214 "inst_match.m"
                                    *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1214 "inst_match.m"
                                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1214 "inst_match.m"
                                  }
#line 7472 "check_hlds.inst_match.c"
                              }
#line 1214 "inst_match.m"
                          }
#line 1214 "inst_match.m"
                      }
#line 1158 "inst_match.m"
                      break;
#line 1158 "inst_match.m"
                    case (MR_Integer) 1:
#line 1228 "inst_match.m"
                      {
#line 1228 "inst_match.m"
                        MR_Word check_hlds__inst_match__HOInstInfoB_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1229 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1230 "inst_match.m"
                        {
#line 1230 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(check_hlds__inst_match__V_168_168, check_hlds__inst_match__HOInstInfoB_90, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_183_183);
                        }
#line 1228 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1228 "inst_match.m"
                          {
#line 1228 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1228 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1228 "inst_match.m"
                          }
#line 1228 "inst_match.m"
                      }
#line 1158 "inst_match.m"
                      break;
#line 1158 "inst_match.m"
                  }
#line 1158 "inst_match.m"
                  break;
#line 1158 "inst_match.m"
              }
#line 1158 "inst_match.m"
            }
#line 1158 "inst_match.m"
            break;
#line 1158 "inst_match.m"
          case (MR_Integer) 5:
#line 1233 "inst_match.m"
            {
#line 1233 "inst_match.m"
              MR_Word check_hlds__inst_match__TypeCtorInfo_160_160;
#line 1233 "inst_match.m"
              MR_Word check_hlds__inst_match__TypeInfo_161_161;
#line 1233 "inst_match.m"
              MR_Word check_hlds__inst_match__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1233 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1233 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgsB_39;
#line 1233 "inst_match.m"
              MR_Word check_hlds__inst_match__MaybeTypes_40;
#line 1233 "inst_match.m"
              MR_Integer check_hlds__inst_match__V_43_43;
#line 1233 "inst_match.m"
              MR_Word check_hlds__inst_match__V_44_44;
#line 1233 "inst_match.m"
              MR_Word check_hlds__inst_match__V_162_162;

#line 1234 "inst_match.m"
              check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1234 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 1234 "inst_match.m"
                {
#line 1234 "inst_match.m"
                  check_hlds__inst_match__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1234 "inst_match.m"
                  check_hlds__inst_match__ArgsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1234 "inst_match.m"
                  {
#line 1234 "inst_match.m"
                    check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__Name_37, check_hlds__inst_match__V_162_162);
                  }
#line 1233 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1233 "inst_match.m"
                    {
#line 7560 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1235 "inst_match.m"
                      {
#line 1235 "inst_match.m"
                        check_hlds__inst_match__V_43_43 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_160_160, check_hlds__inst_match__ArgsA_38);
                      }
#line 1235 "inst_match.m"
                      check_hlds__inst_match__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7569 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_161_161 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 1235 "inst_match.m"
                      {
#line 1235 "inst_match.m"
                        mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_161_161, check_hlds__inst_match__V_43_43, ((MR_Box) (check_hlds__inst_match__V_44_44)), &check_hlds__inst_match__MaybeTypes_40);
                      }
#line 1237 "inst_match.m"
                      {
#line 1237 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(check_hlds__inst_match__ArgsA_38, check_hlds__inst_match__ArgsB_39, check_hlds__inst_match__MaybeTypes_40, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1233 "inst_match.m"
                    }
#line 1234 "inst_match.m"
                }
#line 1233 "inst_match.m"
            }
#line 1158 "inst_match.m"
            break;
#line 1158 "inst_match.m"
        }
#line 1158 "inst_match.m"
        break;
#line 1158 "inst_match.m"
    }
#line 1158 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1158 "inst_match.m"
  }
#line 1153 "inst_match.m"
}

#line 1136 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
#line 1136 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1136 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1136 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1136 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 1136 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 1136 "inst_match.m"
{
#line 1139 "inst_match.m"
  {
#line 1139 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1139 "inst_match.m"
    MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 1139 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1141 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1141 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1141 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1141 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1141 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1141 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1149 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions_12;

#line 1140 "inst_match.m"
    {
#line 1140 "inst_match.m"
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 1140 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 1140 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 1140 "inst_match.m"
    }
#line 235 "inst_match.m"
    {
#line 235 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
    }
#line 1149 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 1143 "inst_match.m"
      {
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19;
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1143 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1146 "inst_match.m"
        MR_Word check_hlds__inst_match__V_40_40;
#line 1146 "inst_match.m"
        MR_Word check_hlds__inst_match__V_41_41;
#line 1146 "inst_match.m"
        MR_Word check_hlds__inst_match__V_42_42;
#line 1146 "inst_match.m"
        MR_Word check_hlds__inst_match__V_43_43;
#line 1146 "inst_match.m"
        MR_Word check_hlds__inst_match__V_44_44;
#line 1146 "inst_match.m"
        MR_Word check_hlds__inst_match__V_45_45;

#line 1143 "inst_match.m"
        {
#line 1143 "inst_match.m"
          check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_27_27));
#line 1143 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 1143 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_29_29));
#line 1143 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_30_30 | ((((check_hlds__inst_match__V_31_31 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_32_32 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_33_33 << (MR_Integer) 4)))))))));
#line 1143 "inst_match.m"
        }
#line 1144 "inst_match.m"
        {
#line 1144 "inst_match.m"
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__V_27_27, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
        }
#line 1146 "inst_match.m"
        check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 1146 "inst_match.m"
        check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 1146 "inst_match.m"
        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 1146 "inst_match.m"
        check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1146 "inst_match.m"
        check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1146 "inst_match.m"
        check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1146 "inst_match.m"
        check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1146 "inst_match.m"
        {
#line 1146 "inst_match.m"
          check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
        }
#line 1148 "inst_match.m"
        {
#line 1148 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 1143 "inst_match.m"
      }
#line 1149 "inst_match.m"
    else
#line 1149 "inst_match.m"
      {
#line 1149 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 1149 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1149 "inst_match.m"
      }
#line 1139 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1139 "inst_match.m"
  }
#line 1136 "inst_match.m"
}

#line 1099 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
#line 1099 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1099 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1099 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1099 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1099 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1099 "inst_match.m"
{
#line 1103 "inst_match.m"
  while (MR_TRUE)
#line 1103 "inst_match.m"
    {
#line 1103 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1103 "inst_match.m"
      {
#line 1103 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1103 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "inst_match.m"
          {
#line 1103 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1103 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1103 "inst_match.m"
          }
#line 1103 "inst_match.m"
        else
#line 1104 "inst_match.m"
          {
#line 1104 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1104 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1104 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 1104 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 1104 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 1104 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 1104 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 1104 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 1104 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1104 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1104 "inst_match.m"
              {
#line 1104 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1104 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1105 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 1105 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 1106 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 1106 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 1107 "inst_match.m"
                {
#line 1107 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 1112 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1109 "inst_match.m"
                  {
#line 1109 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 1109 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1109 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 1109 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1109 "inst_match.m"
                    {
#line 1109 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 1108 "inst_match.m"
                    {
#line 1108 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 1110 "inst_match.m"
                    {
#line 1110 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 1109 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1111 "inst_match.m"
                      {
#line 1111 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1111 "inst_match.m"
                        {
#line 1111 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 1111 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 1111 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 1111 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1111 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1111 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1111 "inst_match.m"
                        }
#line 1111 "inst_match.m"
                        continue;
#line 1111 "inst_match.m"
                      }
#line 1109 "inst_match.m"
                  }
#line 1112 "inst_match.m"
                else
#line 1113 "inst_match.m"
                  {
#line 707 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_39;
#line 707 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_40;
#line 707 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_42;
#line 707 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_43;
#line 691 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_41_41;
#line 692 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_44_44;

#line 691 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 691 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 691 "inst_match.m"
                      {
#line 691 "inst_match.m"
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 691 "inst_match.m"
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 691 "inst_match.m"
                        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 692 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 692 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 692 "inst_match.m"
                          {
#line 692 "inst_match.m"
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 692 "inst_match.m"
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 692 "inst_match.m"
                            check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 692 "inst_match.m"
                          }
#line 691 "inst_match.m"
                      }
#line 707 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 696 "inst_match.m"
                      {
#line 696 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_45;
#line 696 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_47;
#line 696 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_49;

#line 695 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
#line 695 "inst_match.m"
                          {
#line 695 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

#line 695 "inst_match.m"
                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
#line 695 "inst_match.m"
                          }
#line 695 "inst_match.m"
                        else
#line 694 "inst_match.m"
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
#line 698 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
#line 698 "inst_match.m"
                          {
#line 698 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

#line 698 "inst_match.m"
                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
#line 698 "inst_match.m"
                          }
#line 698 "inst_match.m"
                        else
#line 697 "inst_match.m"
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
#line 700 "inst_match.m"
                        {
#line 700 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
#line 703 "inst_match.m"
#line 703 "inst_match.m"
                        switch (check_hlds__inst_match__O_49) {
#line 703 "inst_match.m"
                          default:
#line 703 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                          case (MR_Integer) 0:
#line 705 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                          case (MR_Integer) 2:
#line 702 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                        }
#line 696 "inst_match.m"
                      }
#line 707 "inst_match.m"
                    else
#line 708 "inst_match.m"
                      {
#line 708 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;

#line 708 "inst_match.m"
                        {
#line 708 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_53_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 708 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_53_53);
#line 708 "inst_match.m"
                      }
#line 1113 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1118 "inst_match.m"
                      {
#line 1118 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1118 "inst_match.m"
                        {
#line 1118 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 1118 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1118 "inst_match.m"
                        }
#line 1118 "inst_match.m"
                        continue;
#line 1118 "inst_match.m"
                      }
#line 1113 "inst_match.m"
                  }
#line 1104 "inst_match.m"
              }
#line 1104 "inst_match.m"
          }
#line 1103 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1103 "inst_match.m"
      }
#line 1103 "inst_match.m"
      break;
#line 1103 "inst_match.m"
    }
#line 1099 "inst_match.m"
}

#line 1082 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
#line 1082 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1082 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1082 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1082 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1082 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1082 "inst_match.m"
{
#line 1086 "inst_match.m"
  while (MR_TRUE)
#line 1086 "inst_match.m"
    {
#line 1086 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1086 "inst_match.m"
      {
#line 1086 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1086 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1086 "inst_match.m"
          {
#line 1086 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1086 "inst_match.m"
              {
#line 1086 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1086 "inst_match.m"
                  {
#line 1086 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1086 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1086 "inst_match.m"
                  }
#line 1086 "inst_match.m"
              }
#line 1086 "inst_match.m"
          }
#line 1086 "inst_match.m"
        else
#line 1088 "inst_match.m"
          {
#line 1088 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1088 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1088 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgB_11;
#line 1088 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsB_12;
#line 1088 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 1088 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 1088 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1087 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1087 "inst_match.m"
              {
#line 1087 "inst_match.m"
                check_hlds__inst_match__ArgB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1087 "inst_match.m"
                check_hlds__inst_match__ArgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1088 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1088 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1088 "inst_match.m"
                  {
#line 1088 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 1088 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 1089 "inst_match.m"
                    {
#line 1089 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__ArgA_9, check_hlds__inst_match__ArgB_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 1088 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1090 "inst_match.m"
                      {
#line 1090 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1090 "inst_match.m"
                        {
#line 1090 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ArgsA_10;
#line 1090 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ArgsB_12;
#line 1090 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 1090 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1090 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1090 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 1090 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1090 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1090 "inst_match.m"
                        }
#line 1090 "inst_match.m"
                        continue;
#line 1090 "inst_match.m"
                      }
#line 1088 "inst_match.m"
                  }
#line 1087 "inst_match.m"
              }
#line 1088 "inst_match.m"
          }
#line 1086 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1086 "inst_match.m"
      }
#line 1086 "inst_match.m"
      break;
#line 1086 "inst_match.m"
    }
#line 1082 "inst_match.m"
}

#line 1061 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
#line 1061 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 1061 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 1061 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1061 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 1061 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 1061 "inst_match.m"
{
#line 1066 "inst_match.m"
  {
#line 1066 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1066 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1066 "inst_match.m"
      {
#line 1067 "inst_match.m"
        MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1067 "inst_match.m"
        MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 1067 "inst_match.m"
        MR_Word check_hlds__inst_match__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1067 "inst_match.m"
        MR_Word check_hlds__inst_match__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1067 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1067 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1067 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1067 "inst_match.m"
        {
#line 1067 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_match__V_21_21, check_hlds__inst_match__HOInstInfoA_6);
        }
#line 1067 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 1066 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1066 "inst_match.m"
          {
#line 1066 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_17 = check_hlds__inst_match__STATE_VARIABLE_Info_0_16;
#line 1066 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1066 "inst_match.m"
          }
#line 1066 "inst_match.m"
      }
#line 1066 "inst_match.m"
    else
#line 1066 "inst_match.m"
      {
#line 1066 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_7), (MR_Integer) 1);

#line 1066 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1070 "inst_match.m"
          {
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_30_30;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_65;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 1)));
#line 1070 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_14;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_15;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 0)));
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_56;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_57;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_59;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_60;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_62;
#line 1070 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_63_63;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__V_66_66;
#line 1070 "inst_match.m"
            MR_Word check_hlds__inst_match__V_67_67;
#line 1072 "inst_match.m"
            MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 2)));
#line 1072 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 3)));
#line 762 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_58;
#line 763 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_61;

#line 1072 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 1);
#line 1070 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1070 "inst_match.m"
              {
#line 8331 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1073 "inst_match.m"
                {
#line 1073 "inst_match.m"
                  check_hlds__inst_match__Arity_14 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_30_30, check_hlds__inst_match__ArgModes_11);
                }
#line 1074 "inst_match.m"
                {
#line 1074 "inst_match.m"
                  check_hlds__inst_match__PredInstA_15 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_match__Arity_14);
                }
#line 762 "inst_match.m"
                check_hlds__inst_match__PredOrFunc_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 0)));
#line 762 "inst_match.m"
                check_hlds__inst_match__ModesA_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 1)));
#line 762 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsA_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 2)));
#line 762 "inst_match.m"
                check_hlds__inst_match__Det_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 3)));
#line 763 "inst_match.m"
                check_hlds__inst_match__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 0)));
#line 763 "inst_match.m"
                check_hlds__inst_match__ModesB_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 1)));
#line 763 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsB_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 2)));
#line 763 "inst_match.m"
                check_hlds__inst_match__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 3)));
#line 763 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_56 == check_hlds__inst_match__V_66_66);
#line 1070 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1070 "inst_match.m"
                  {
#line 763 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_59 == check_hlds__inst_match__V_67_67);
#line 1070 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1070 "inst_match.m"
                      {
#line 8371 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_21_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 764 "inst_match.m"
                        {
#line 764 "inst_match.m"
                          check_hlds__inst_match__V_63_63 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_65, check_hlds__inst_match__ModesA_57);
                        }
#line 764 "inst_match.m"
                        {
#line 764 "inst_match.m"
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_63_63, &check_hlds__inst_match__MaybeTypes_62);
                        }
#line 765 "inst_match.m"
                        {
#line 765 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_57, check_hlds__inst_match__ModesB_60, check_hlds__inst_match__MaybeTypes_62, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                        }
#line 1070 "inst_match.m"
                      }
#line 1070 "inst_match.m"
                  }
#line 1070 "inst_match.m"
              }
#line 1070 "inst_match.m"
          }
#line 1066 "inst_match.m"
        else
#line 1077 "inst_match.m"
          {
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_47;
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 0)));
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 1)));
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 3)));
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 1)));
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_44;
#line 1077 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_45_45;
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 0)));
#line 1077 "inst_match.m"
            MR_Word check_hlds__inst_match__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 3)));
#line 762 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 2)));
#line 763 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 2)));

#line 763 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_38 == check_hlds__inst_match__V_48_48);
#line 1077 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1077 "inst_match.m"
              {
#line 763 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_41 == check_hlds__inst_match__V_49_49);
#line 1077 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1077 "inst_match.m"
                  {
#line 8437 "check_hlds.inst_match.c"
                    check_hlds__inst_match__TypeCtorInfo_21_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 764 "inst_match.m"
                    {
#line 764 "inst_match.m"
                      check_hlds__inst_match__V_45_45 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_47, check_hlds__inst_match__ModesA_39);
                    }
#line 764 "inst_match.m"
                    {
#line 764 "inst_match.m"
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_45_45, &check_hlds__inst_match__MaybeTypes_44);
                    }
#line 765 "inst_match.m"
                    {
#line 765 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_39, check_hlds__inst_match__ModesB_42, check_hlds__inst_match__MaybeTypes_44, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                    }
#line 1077 "inst_match.m"
                  }
#line 1077 "inst_match.m"
              }
#line 1077 "inst_match.m"
          }
#line 1066 "inst_match.m"
      }
#line 1066 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1066 "inst_match.m"
  }
#line 1061 "inst_match.m"
}

#line 950 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
#line 950 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 950 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 950 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 950 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 950 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42)
#line 950 "inst_match.m"
{
#line 955 "inst_match.m"
  {
#line 955 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 955 "inst_match.m"
#line 955 "inst_match.m"
    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
#line 955 "inst_match.m"
      default:
#line 955 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
        break;
#line 955 "inst_match.m"
      case (MR_Integer) 0:
#line 955 "inst_match.m"
#line 955 "inst_match.m"
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
#line 955 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 955 "inst_match.m"
          case (MR_Integer) 0:
#line 955 "inst_match.m"
            if ((check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "inst_match.m"
              {
#line 980 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 980 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 980 "inst_match.m"
              }
#line 955 "inst_match.m"
            else
#line 955 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 972 "inst_match.m"
              {
#line 972 "inst_match.m"
                MR_Word check_hlds__inst_match__Uniq_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 973 "inst_match.m"
                MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 978 "inst_match.m"
#line 978 "inst_match.m"
                switch (check_hlds__inst_match__Uniq_20) {
#line 978 "inst_match.m"
                  default:
#line 978 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 978 "inst_match.m"
                    break;
#line 978 "inst_match.m"
                  case (MR_Integer) 3:
#line 978 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 978 "inst_match.m"
                    break;
#line 978 "inst_match.m"
                  case (MR_Integer) 4:
#line 978 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 978 "inst_match.m"
                    break;
#line 978 "inst_match.m"
                }
#line 972 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 972 "inst_match.m"
                  {
#line 972 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 972 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 972 "inst_match.m"
                  }
#line 972 "inst_match.m"
              }
#line 955 "inst_match.m"
            else
#line 955 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
            break;
#line 955 "inst_match.m"
          case (MR_Integer) 1:
#line 1048 "inst_match.m"
            {
#line 1048 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1048 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1048 "inst_match.m"
            }
#line 955 "inst_match.m"
            break;
#line 955 "inst_match.m"
        }
#line 955 "inst_match.m"
        break;
#line 955 "inst_match.m"
      case (MR_Integer) 2:
#line 955 "inst_match.m"
        {
#line 955 "inst_match.m"
          MR_Word check_hlds__inst_match__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 955 "inst_match.m"
          MR_Word check_hlds__inst_match__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));

#line 955 "inst_match.m"
#line 955 "inst_match.m"
          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 955 "inst_match.m"
            default:
#line 955 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
              break;
#line 955 "inst_match.m"
            case (MR_Integer) 2:
#line 955 "inst_match.m"
              {
#line 955 "inst_match.m"
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 955 "inst_match.m"
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 957 "inst_match.m"
                {
#line 957 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_146_146, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                }
#line 955 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 958 "inst_match.m"
                  {
#line 958 "inst_match.m"
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_147_147, check_hlds__inst_match__UniqB_12);
                  }
#line 955 "inst_match.m"
              }
#line 955 "inst_match.m"
              break;
#line 955 "inst_match.m"
            case (MR_Integer) 3:
#line 955 "inst_match.m"
#line 955 "inst_match.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 955 "inst_match.m"
                default:
#line 955 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
                case (MR_Integer) 0:
#line 966 "inst_match.m"
                  {
#line 966 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 966 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_69;
#line 968 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 968 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 968 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_99_99 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 968 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_100_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 968 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_101_101 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 968 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_102_102 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 968 "inst_match.m"
                    {
#line 968 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_60_60, check_hlds__inst_match__V_147_147, check_hlds__inst_match__V_146_146, &check_hlds__inst_match__NextInstA_69);
                    }
#line 966 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 970 "inst_match.m"
                      {
#line 970 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__NextInstA_69, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 966 "inst_match.m"
                  }
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
                case (MR_Integer) 1:
#line 960 "inst_match.m"
                  {
#line 960 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_16;
#line 960 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 962 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 962 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 962 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_93_93 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 962 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 962 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_95_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 962 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_96_96 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 962 "inst_match.m"
                    {
#line 962 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_62_62, check_hlds__inst_match__V_147_147, check_hlds__inst_match__V_146_146, &check_hlds__inst_match__NextInstA_16);
                    }
#line 960 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 964 "inst_match.m"
                      {
#line 964 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__NextInstA_16, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 960 "inst_match.m"
                  }
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
              }
#line 955 "inst_match.m"
              break;
#line 955 "inst_match.m"
          }
#line 955 "inst_match.m"
        }
#line 955 "inst_match.m"
        break;
#line 955 "inst_match.m"
      case (MR_Integer) 3:
#line 955 "inst_match.m"
#line 955 "inst_match.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
#line 955 "inst_match.m"
          default:
#line 955 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
            break;
#line 955 "inst_match.m"
          case (MR_Integer) 0:
#line 955 "inst_match.m"
            {
#line 955 "inst_match.m"
              MR_Word check_hlds__inst_match__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 955 "inst_match.m"
              MR_Word check_hlds__inst_match__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 955 "inst_match.m"
              MR_Word check_hlds__inst_match__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 955 "inst_match.m"
#line 955 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 955 "inst_match.m"
                default:
#line 955 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
                case (MR_Integer) 2:
#line 983 "inst_match.m"
                  {
#line 983 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 983 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_58_58;
#line 983 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_59_59;
#line 983 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 986 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_103_103;
#line 986 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_104_104;
#line 986 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_105_105;
#line 986 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_106_106;
#line 986 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_107_107;
#line 986 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_108_108;
#line 991 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_109_109;
#line 991 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_110_110;
#line 991 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_111_111;
#line 991 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_112_112;
#line 991 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_113_113;
#line 991 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_114_114;

#line 984 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 983 "inst_match.m"
                      {
#line 985 "inst_match.m"
                        {
#line 985 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_150_150, check_hlds__inst_match__UniqB_71);
                        }
#line 983 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 983 "inst_match.m"
                          {
#line 986 "inst_match.m"
                            check_hlds__inst_match__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 986 "inst_match.m"
                            check_hlds__inst_match__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 986 "inst_match.m"
                            check_hlds__inst_match__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 986 "inst_match.m"
                            check_hlds__inst_match__V_105_105 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 986 "inst_match.m"
                            check_hlds__inst_match__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 986 "inst_match.m"
                            check_hlds__inst_match__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 986 "inst_match.m"
                            check_hlds__inst_match__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 986 "inst_match.m"
                            {
#line 986 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(check_hlds__inst_match__V_148_148, check_hlds__inst_match__UniqB_71, check_hlds__inst_match__V_58_58);
                            }
#line 983 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 983 "inst_match.m"
                              {
#line 991 "inst_match.m"
                                check_hlds__inst_match__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 991 "inst_match.m"
                                check_hlds__inst_match__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 991 "inst_match.m"
                                check_hlds__inst_match__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 991 "inst_match.m"
                                check_hlds__inst_match__V_111_111 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 991 "inst_match.m"
                                check_hlds__inst_match__V_112_112 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 991 "inst_match.m"
                                check_hlds__inst_match__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 991 "inst_match.m"
                                check_hlds__inst_match__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 991 "inst_match.m"
                                {
#line 991 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_match__V_149_149, check_hlds__inst_match__V_148_148, check_hlds__inst_match__V_59_59);
                                }
#line 983 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 983 "inst_match.m"
                                  {
#line 983 "inst_match.m"
                                    *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 983 "inst_match.m"
                                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 983 "inst_match.m"
                                  }
#line 983 "inst_match.m"
                              }
#line 983 "inst_match.m"
                          }
#line 983 "inst_match.m"
                      }
#line 983 "inst_match.m"
                  }
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
                case (MR_Integer) 3:
#line 955 "inst_match.m"
#line 955 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 955 "inst_match.m"
                    default:
#line 955 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
                      break;
#line 955 "inst_match.m"
                    case (MR_Integer) 0:
#line 994 "inst_match.m"
                      {
#line 994 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 994 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 995 "inst_match.m"
                        MR_Word check_hlds__inst_match___InstResultsB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 996 "inst_match.m"
                        {
#line 996 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_150_150, check_hlds__inst_match__UniqB_73);
                        }
#line 994 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 997 "inst_match.m"
                          {
#line 997 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(check_hlds__inst_match__V_148_148, check_hlds__inst_match__BoundInstsB_26, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                          }
#line 994 "inst_match.m"
                      }
#line 955 "inst_match.m"
                      break;
#line 955 "inst_match.m"
                    case (MR_Integer) 1:
#line 1000 "inst_match.m"
                      {
#line 1000 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1000 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_54_54;
#line 1000 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_55_55;
#line 1000 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1003 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_115_115;
#line 1003 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_116_116;
#line 1003 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_117_117;
#line 1003 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_118_118;
#line 1003 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_119_119;
#line 1003 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_120_120;
#line 1005 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_121_121;
#line 1005 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_122_122;
#line 1005 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_123_123;
#line 1005 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_124_124;
#line 1005 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_125_125;
#line 1005 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_126_126;

#line 1001 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1000 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1000 "inst_match.m"
                          {
#line 1002 "inst_match.m"
                            {
#line 1002 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_150_150, check_hlds__inst_match__UniqB_76);
                            }
#line 1000 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1000 "inst_match.m"
                              {
#line 1003 "inst_match.m"
                                check_hlds__inst_match__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1003 "inst_match.m"
                                check_hlds__inst_match__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1003 "inst_match.m"
                                check_hlds__inst_match__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1003 "inst_match.m"
                                check_hlds__inst_match__V_117_117 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1003 "inst_match.m"
                                check_hlds__inst_match__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1003 "inst_match.m"
                                check_hlds__inst_match__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1003 "inst_match.m"
                                check_hlds__inst_match__V_120_120 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1003 "inst_match.m"
                                {
#line 1003 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_149_149, check_hlds__inst_match__V_148_148, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_54_54);
                                }
#line 1000 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 1000 "inst_match.m"
                                  {
#line 1005 "inst_match.m"
                                    check_hlds__inst_match__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1005 "inst_match.m"
                                    check_hlds__inst_match__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1005 "inst_match.m"
                                    check_hlds__inst_match__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1005 "inst_match.m"
                                    check_hlds__inst_match__V_123_123 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1005 "inst_match.m"
                                    check_hlds__inst_match__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1005 "inst_match.m"
                                    check_hlds__inst_match__V_125_125 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1005 "inst_match.m"
                                    check_hlds__inst_match__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1005 "inst_match.m"
                                    {
#line 1005 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(check_hlds__inst_match__V_148_148, check_hlds__inst_match__UniqB_76, check_hlds__inst_match__V_55_55);
                                    }
#line 1000 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 1000 "inst_match.m"
                                      {
#line 1000 "inst_match.m"
                                        *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1000 "inst_match.m"
                                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1000 "inst_match.m"
                                      }
#line 1000 "inst_match.m"
                                  }
#line 1000 "inst_match.m"
                              }
#line 1000 "inst_match.m"
                          }
#line 1000 "inst_match.m"
                      }
#line 955 "inst_match.m"
                      break;
#line 955 "inst_match.m"
                  }
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
              }
#line 955 "inst_match.m"
            }
#line 955 "inst_match.m"
            break;
#line 955 "inst_match.m"
          case (MR_Integer) 1:
#line 955 "inst_match.m"
            {
#line 955 "inst_match.m"
              MR_Word check_hlds__inst_match__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 955 "inst_match.m"
              MR_Word check_hlds__inst_match__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 955 "inst_match.m"
#line 955 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 955 "inst_match.m"
                default:
#line 955 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
                case (MR_Integer) 2:
#line 1008 "inst_match.m"
                  {
#line 1008 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1008 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1010 "inst_match.m"
                    {
#line 1010 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_151_151, check_hlds__inst_match__HOInstInfoB_82, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
#line 1008 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1011 "inst_match.m"
                      {
#line 1011 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_152_152, check_hlds__inst_match__UniqB_81);
                      }
#line 1008 "inst_match.m"
                  }
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
                case (MR_Integer) 3:
#line 955 "inst_match.m"
#line 955 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 955 "inst_match.m"
                    default:
#line 955 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
                      break;
#line 955 "inst_match.m"
                    case (MR_Integer) 0:
#line 1013 "inst_match.m"
                      {
#line 1013 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstResultsB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1013 "inst_match.m"
                        MR_Word check_hlds__inst_match__ModuleInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1013 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1013 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1015 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1015 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1015 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_129_129 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1015 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1015 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1015 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1016 "inst_match.m"
                        {
#line 1016 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_match__ModuleInfo_28, check_hlds__inst_match__V_151_151);
                        }
#line 1016 "inst_match.m"
                        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 1013 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1013 "inst_match.m"
                          {
#line 1017 "inst_match.m"
                            {
#line 1017 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_152_152, check_hlds__inst_match__UniqB_85);
                            }
#line 1013 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1013 "inst_match.m"
                              {
#line 1018 "inst_match.m"
                                {
#line 1018 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__InstResultsB_27, check_hlds__inst_match__BoundInstsB_86, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__ModuleInfo_28);
                                }
#line 1013 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 1013 "inst_match.m"
                                  {
#line 1020 "inst_match.m"
                                    {
#line 1020 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(check_hlds__inst_match__V_152_152, check_hlds__inst_match__BoundInstsB_86, check_hlds__inst_match__ModuleInfo_28);
                                    }
#line 1013 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 1013 "inst_match.m"
                                      {
#line 1022 "inst_match.m"
                                        {
#line 1022 "inst_match.m"
                                          MR_Word check_hlds__inst_match__TypeCtorInfo_139_139;
#line 1022 "inst_match.m"
                                          MR_Word check_hlds__inst_match__Type_29;
#line 1022 "inst_match.m"
                                          MR_Word check_hlds__inst_match__V_51_51;

#line 1022 "inst_match.m"
                                          check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 1022 "inst_match.m"
                                          if (check_hlds__inst_match__succeeded)
#line 1022 "inst_match.m"
                                            {
#line 1022 "inst_match.m"
                                              check_hlds__inst_match__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 9164 "check_hlds.inst_match.c"
                                              check_hlds__inst_match__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1024 "inst_match.m"
                                              {
#line 1024 "inst_match.m"
                                                check_hlds__inst_match__V_51_51 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_139_139);
                                              }
#line 1024 "inst_match.m"
                                              {
#line 1024 "inst_match.m"
                                                check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_51_51, check_hlds__inst_match__ModuleInfo_28, check_hlds__inst_match__BoundInstsB_86, check_hlds__inst_match__Type_29);
                                              }
#line 1022 "inst_match.m"
                                            }
#line 1022 "inst_match.m"
                                        }
#line 1026 "inst_match.m"
                                        if (!(check_hlds__inst_match__succeeded))
#line 1030 "inst_match.m"
                                          {
#line 1030 "inst_match.m"
                                            MR_Word check_hlds__inst_match__GroundMatchesBound_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1030 "inst_match.m"
                                            MR_Word check_hlds__inst_match__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1030 "inst_match.m"
                                            MR_Word check_hlds__inst_match__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1030 "inst_match.m"
                                            MR_Word check_hlds__inst_match__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1030 "inst_match.m"
                                            MR_Word check_hlds__inst_match__V_136_136 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1030 "inst_match.m"
                                            MR_Word check_hlds__inst_match__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1030 "inst_match.m"
                                            MR_Word check_hlds__inst_match__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1031 "inst_match.m"
                                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__GroundMatchesBound_30 == (MR_Integer) 1);
#line 1030 "inst_match.m"
                                          }
#line 1013 "inst_match.m"
                                        if (check_hlds__inst_match__succeeded)
#line 1013 "inst_match.m"
                                          {
#line 1013 "inst_match.m"
                                            *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1013 "inst_match.m"
                                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1013 "inst_match.m"
                                          }
#line 1013 "inst_match.m"
                                      }
#line 1013 "inst_match.m"
                                  }
#line 1013 "inst_match.m"
                              }
#line 1013 "inst_match.m"
                          }
#line 1013 "inst_match.m"
                      }
#line 955 "inst_match.m"
                      break;
#line 955 "inst_match.m"
                    case (MR_Integer) 1:
#line 1034 "inst_match.m"
                      {
#line 1034 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1034 "inst_match.m"
                        MR_Word check_hlds__inst_match__HOInstInfoB_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 1036 "inst_match.m"
                        {
#line 1036 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_151_151, check_hlds__inst_match__HOInstInfoB_90, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                        }
#line 1034 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1037 "inst_match.m"
                          {
#line 1037 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_152_152, check_hlds__inst_match__UniqB_89);
                          }
#line 1034 "inst_match.m"
                      }
#line 955 "inst_match.m"
                      break;
#line 955 "inst_match.m"
                  }
#line 955 "inst_match.m"
                  break;
#line 955 "inst_match.m"
              }
#line 955 "inst_match.m"
            }
#line 955 "inst_match.m"
            break;
#line 955 "inst_match.m"
          case (MR_Integer) 3:
#line 1050 "inst_match.m"
            {
#line 1050 "inst_match.m"
              MR_Word check_hlds__inst_match__InstVarsA_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1050 "inst_match.m"
              MR_Word check_hlds__inst_match__SubInstA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1056 "inst_match.m"
              MR_Word check_hlds__inst_match__InstVarsB_39;
#line 1056 "inst_match.m"
              MR_Word check_hlds__inst_match__SubInstB_40;

#line 1051 "inst_match.m"
              check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1051 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 1051 "inst_match.m"
                {
#line 1051 "inst_match.m"
                  check_hlds__inst_match__InstVarsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1051 "inst_match.m"
                  check_hlds__inst_match__SubInstB_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1054 "inst_match.m"
                  {
#line 1054 "inst_match.m"
                    check_hlds__inst_match__succeeded = mercury__set__subset_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], check_hlds__inst_match__InstVarsB_39, check_hlds__inst_match__InstVarsA_37);
                  }
#line 1054 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1055 "inst_match.m"
                    {
#line 1055 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_38, check_hlds__inst_match__SubInstB_40, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
#line 1051 "inst_match.m"
                }
#line 1051 "inst_match.m"
              else
#line 1057 "inst_match.m"
                {
#line 1057 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_38, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                }
#line 1050 "inst_match.m"
            }
#line 955 "inst_match.m"
            break;
#line 955 "inst_match.m"
          case (MR_Integer) 5:
#line 955 "inst_match.m"
            {
#line 955 "inst_match.m"
              MR_Word check_hlds__inst_match__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 955 "inst_match.m"
              MR_Word check_hlds__inst_match__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 955 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1039 "inst_match.m"
                {
#line 1039 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1039 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1040 "inst_match.m"
                  check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_48_48 == (MR_Integer) 0);
#line 1039 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1039 "inst_match.m"
                    {
#line 1040 "inst_match.m"
                      check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1039 "inst_match.m"
                        {
#line 1039 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1039 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1039 "inst_match.m"
                        }
#line 1039 "inst_match.m"
                    }
#line 1039 "inst_match.m"
                }
#line 955 "inst_match.m"
              else
#line 955 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1042 "inst_match.m"
                {
#line 1042 "inst_match.m"
                  MR_Word check_hlds__inst_match__TypeCtorInfo_140_140;
#line 1042 "inst_match.m"
                  MR_Word check_hlds__inst_match__TypeInfo_141_141;
#line 1042 "inst_match.m"
                  MR_Word check_hlds__inst_match__ArgsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1042 "inst_match.m"
                  MR_Word check_hlds__inst_match__MaybeTypes_36;
#line 1042 "inst_match.m"
                  MR_Integer check_hlds__inst_match__V_45_45;
#line 1042 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_46_46;
#line 1042 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1043 "inst_match.m"
                  {
#line 1043 "inst_match.m"
                    check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__V_145_145, check_hlds__inst_match__V_143_143);
                  }
#line 1042 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1042 "inst_match.m"
                    {
#line 9378 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1044 "inst_match.m"
                      {
#line 1044 "inst_match.m"
                        check_hlds__inst_match__V_45_45 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_140_140, check_hlds__inst_match__V_144_144);
                      }
#line 1044 "inst_match.m"
                      check_hlds__inst_match__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9387 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_141_141 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 1044 "inst_match.m"
                      {
#line 1044 "inst_match.m"
                        mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_141_141, check_hlds__inst_match__V_45_45, ((MR_Box) (check_hlds__inst_match__V_46_46)), &check_hlds__inst_match__MaybeTypes_36);
                      }
#line 1046 "inst_match.m"
                      {
#line 1046 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(check_hlds__inst_match__V_144_144, check_hlds__inst_match__ArgsB_35, check_hlds__inst_match__MaybeTypes_36, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1042 "inst_match.m"
                    }
#line 1042 "inst_match.m"
                }
#line 955 "inst_match.m"
              else
#line 955 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 955 "inst_match.m"
            }
#line 955 "inst_match.m"
            break;
#line 955 "inst_match.m"
        }
#line 955 "inst_match.m"
        break;
#line 955 "inst_match.m"
    }
#line 955 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 955 "inst_match.m"
  }
#line 950 "inst_match.m"
}

#line 930 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
#line 930 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 930 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 930 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 930 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 930 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 930 "inst_match.m"
{
#line 936 "inst_match.m"
  {
#line 936 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 934 "inst_match.m"
    {
#line 934 "inst_match.m"
      check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7);
    }
#line 936 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 936 "inst_match.m"
      {
#line 936 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 936 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 936 "inst_match.m"
      }
#line 936 "inst_match.m"
    else
#line 937 "inst_match.m"
      {
#line 937 "inst_match.m"
        MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 937 "inst_match.m"
        MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 938 "inst_match.m"
        MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 938 "inst_match.m"
        MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 938 "inst_match.m"
        MR_Word check_hlds__inst_match__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 938 "inst_match.m"
        MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 938 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 938 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 945 "inst_match.m"
        MR_Word check_hlds__inst_match__Expansions_12;

#line 937 "inst_match.m"
        {
#line 937 "inst_match.m"
          check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 937 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 937 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 937 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 937 "inst_match.m"
        }
#line 235 "inst_match.m"
        {
#line 235 "inst_match.m"
          check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
        }
#line 945 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 940 "inst_match.m"
          {
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19;
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 940 "inst_match.m"
            MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 942 "inst_match.m"
            MR_Word check_hlds__inst_match__V_42_42;
#line 942 "inst_match.m"
            MR_Word check_hlds__inst_match__V_43_43;
#line 942 "inst_match.m"
            MR_Word check_hlds__inst_match__V_44_44;
#line 942 "inst_match.m"
            MR_Word check_hlds__inst_match__V_45_45;
#line 942 "inst_match.m"
            MR_Word check_hlds__inst_match__V_46_46;
#line 942 "inst_match.m"
            MR_Word check_hlds__inst_match__V_47_47;

#line 940 "inst_match.m"
            {
#line 940 "inst_match.m"
              check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 940 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_29_29));
#line 940 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 940 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_31_31));
#line 940 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_32_32 | ((((check_hlds__inst_match__V_33_33 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_34_34 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_35_35 << (MR_Integer) 4)))))))));
#line 940 "inst_match.m"
            }
#line 941 "inst_match.m"
            {
#line 941 "inst_match.m"
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__V_29_29, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
            }
#line 942 "inst_match.m"
            check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 942 "inst_match.m"
            check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 942 "inst_match.m"
            check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 942 "inst_match.m"
            check_hlds__inst_match__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 942 "inst_match.m"
            check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 942 "inst_match.m"
            check_hlds__inst_match__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 942 "inst_match.m"
            check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 942 "inst_match.m"
            {
#line 942 "inst_match.m"
              check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
            }
#line 943 "inst_match.m"
            {
#line 943 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs__ho1_7_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
            }
#line 940 "inst_match.m"
          }
#line 945 "inst_match.m"
        else
#line 945 "inst_match.m"
          {
#line 945 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 945 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 945 "inst_match.m"
          }
#line 937 "inst_match.m"
      }
#line 936 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 936 "inst_match.m"
  }
#line 930 "inst_match.m"
}

#line 904 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
#line 904 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 904 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 904 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 904 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 904 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 904 "inst_match.m"
{
#line 908 "inst_match.m"
  while (MR_TRUE)
#line 908 "inst_match.m"
    {
#line 908 "inst_match.m"
      /* tailcall optimized into a loop */
#line 908 "inst_match.m"
      {
#line 908 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 908 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "inst_match.m"
          {
#line 908 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 908 "inst_match.m"
              {
#line 908 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 908 "inst_match.m"
                  {
#line 908 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 908 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 908 "inst_match.m"
                  }
#line 908 "inst_match.m"
              }
#line 908 "inst_match.m"
          }
#line 908 "inst_match.m"
        else
#line 910 "inst_match.m"
          {
#line 910 "inst_match.m"
            MR_Word check_hlds__inst_match__X_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 910 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 910 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_11;
#line 910 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_12;
#line 910 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 910 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 910 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 909 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 909 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 909 "inst_match.m"
              {
#line 909 "inst_match.m"
                check_hlds__inst_match__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 909 "inst_match.m"
                check_hlds__inst_match__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 909 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 909 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 909 "inst_match.m"
                  {
#line 909 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 909 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 911 "inst_match.m"
                    {
#line 911 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__X_9, check_hlds__inst_match__Y_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 910 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 912 "inst_match.m"
                      {
#line 912 "inst_match.m"
                        /* direct tailcall eliminated */
#line 912 "inst_match.m"
                        {
#line 912 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_10;
#line 912 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_12;
#line 912 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 912 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 912 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 912 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 912 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 912 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 912 "inst_match.m"
                        }
#line 912 "inst_match.m"
                        continue;
#line 912 "inst_match.m"
                      }
#line 909 "inst_match.m"
                  }
#line 909 "inst_match.m"
              }
#line 910 "inst_match.m"
          }
#line 908 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 908 "inst_match.m"
      }
#line 908 "inst_match.m"
      break;
#line 908 "inst_match.m"
    }
#line 904 "inst_match.m"
}

#line 882 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 882 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 882 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 882 "inst_match.m"
{
#line 886 "inst_match.m"
  while (MR_TRUE)
#line 886 "inst_match.m"
    {
#line 886 "inst_match.m"
      /* tailcall optimized into a loop */
#line 886 "inst_match.m"
      {
#line 886 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 886 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "inst_match.m"
          {
#line 886 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 886 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 886 "inst_match.m"
          }
#line 886 "inst_match.m"
        else
#line 887 "inst_match.m"
          {
#line 887 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 887 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 887 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 887 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 887 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 887 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 887 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 887 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 887 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 887 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 887 "inst_match.m"
              {
#line 887 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 887 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 888 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 888 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 889 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 889 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 890 "inst_match.m"
                {
#line 890 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 895 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 892 "inst_match.m"
                  {
#line 892 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 892 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 892 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 892 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 891 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 891 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 891 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 891 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 891 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 891 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 892 "inst_match.m"
                    {
#line 892 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 891 "inst_match.m"
                    {
#line 891 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 893 "inst_match.m"
                    {
#line 893 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 892 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 894 "inst_match.m"
                      {
#line 894 "inst_match.m"
                        /* direct tailcall eliminated */
#line 894 "inst_match.m"
                        {
#line 894 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 894 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 894 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 894 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 894 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 894 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 894 "inst_match.m"
                        }
#line 894 "inst_match.m"
                        continue;
#line 894 "inst_match.m"
                      }
#line 892 "inst_match.m"
                  }
#line 895 "inst_match.m"
                else
#line 896 "inst_match.m"
                  {
#line 707 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_39;
#line 707 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_40;
#line 707 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_42;
#line 707 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_43;
#line 691 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_41_41;
#line 692 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_44_44;

#line 691 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 691 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 691 "inst_match.m"
                      {
#line 691 "inst_match.m"
                        check_hlds__inst_match__QNameA_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 691 "inst_match.m"
                        check_hlds__inst_match__ArityA_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 691 "inst_match.m"
                        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 692 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 692 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 692 "inst_match.m"
                          {
#line 692 "inst_match.m"
                            check_hlds__inst_match__QNameB_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 692 "inst_match.m"
                            check_hlds__inst_match__ArityB_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 692 "inst_match.m"
                            check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 692 "inst_match.m"
                          }
#line 691 "inst_match.m"
                      }
#line 707 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 696 "inst_match.m"
                      {
#line 696 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_45;
#line 696 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_47;
#line 696 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_49;

#line 695 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_39)) == (MR_mktag((MR_Integer) 1))))
#line 695 "inst_match.m"
                          {
#line 695 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));

#line 695 "inst_match.m"
                            check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_39, (MR_Integer) 1)));
#line 695 "inst_match.m"
                          }
#line 695 "inst_match.m"
                        else
#line 694 "inst_match.m"
                          check_hlds__inst_match__NameA_45 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_39, (MR_Integer) 0)));
#line 698 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_42)) == (MR_mktag((MR_Integer) 1))))
#line 698 "inst_match.m"
                          {
#line 698 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));

#line 698 "inst_match.m"
                            check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_42, (MR_Integer) 1)));
#line 698 "inst_match.m"
                          }
#line 698 "inst_match.m"
                        else
#line 697 "inst_match.m"
                          check_hlds__inst_match__NameB_47 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_42, (MR_Integer) 0)));
#line 700 "inst_match.m"
                        {
#line 700 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_49, check_hlds__inst_match__NameA_45, check_hlds__inst_match__NameB_47);
                        }
#line 703 "inst_match.m"
#line 703 "inst_match.m"
                        switch (check_hlds__inst_match__O_49) {
#line 703 "inst_match.m"
                          default:
#line 703 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                          case (MR_Integer) 0:
#line 705 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_40 > check_hlds__inst_match__ArityB_43);
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                          case (MR_Integer) 2:
#line 702 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 703 "inst_match.m"
                            break;
#line 703 "inst_match.m"
                        }
#line 696 "inst_match.m"
                      }
#line 707 "inst_match.m"
                    else
#line 708 "inst_match.m"
                      {
#line 708 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;

#line 708 "inst_match.m"
                        {
#line 708 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_53_53, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 708 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_53_53);
#line 708 "inst_match.m"
                      }
#line 896 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 901 "inst_match.m"
                      {
#line 901 "inst_match.m"
                        /* direct tailcall eliminated */
#line 901 "inst_match.m"
                        {
#line 901 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 901 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 901 "inst_match.m"
                        }
#line 901 "inst_match.m"
                        continue;
#line 901 "inst_match.m"
                      }
#line 896 "inst_match.m"
                  }
#line 887 "inst_match.m"
              }
#line 887 "inst_match.m"
          }
#line 886 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 886 "inst_match.m"
      }
#line 886 "inst_match.m"
      break;
#line 886 "inst_match.m"
    }
#line 882 "inst_match.m"
}

#line 862 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
#line 862 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_4,
#line 862 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_5,
#line 862 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 862 "inst_match.m"
{
#line 868 "inst_match.m"
  {
#line 868 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_4 == (MR_Integer) 0);

#line 868 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 867 "inst_match.m"
      {
#line 867 "inst_match.m"
        check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
      }
#line 868 "inst_match.m"
    else
#line 870 "inst_match.m"
      {
#line 868 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_4 == (MR_Integer) 2);
#line 870 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 869 "inst_match.m"
          {
#line 869 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
          }
#line 870 "inst_match.m"
        else
#line 871 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 870 "inst_match.m"
      }
#line 868 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 868 "inst_match.m"
  }
#line 862 "inst_match.m"
}

#line 850 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
#line 850 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_4,
#line 850 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_5,
#line 850 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 850 "inst_match.m"
{
#line 856 "inst_match.m"
  {
#line 856 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_5 == (MR_Integer) 1);

#line 856 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 855 "inst_match.m"
      {
#line 855 "inst_match.m"
        check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__BoundInsts_4, check_hlds__inst_match__ModuleInfo_6);
      }
#line 856 "inst_match.m"
    else
#line 858 "inst_match.m"
      {
#line 856 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_5 == (MR_Integer) 2);
#line 858 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 857 "inst_match.m"
          {
#line 857 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__BoundInsts_4, check_hlds__inst_match__ModuleInfo_6);
          }
#line 858 "inst_match.m"
        else
#line 859 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 858 "inst_match.m"
      }
#line 856 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 856 "inst_match.m"
  }
#line 850 "inst_match.m"
}

#line 842 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
#line 842 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 842 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_2,
#line 842 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_3,
#line 842 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4)
#line 842 "inst_match.m"
{
#line 845 "inst_match.m"
  {
#line 845 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 845 "inst_match.m"
#line 845 "inst_match.m"
    switch (check_hlds__inst_match__HeadVar__1_1) {
#line 845 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 845 "inst_match.m"
      case (MR_Integer) 1:
#line 868 "inst_match.m"
        {
#line 866 "inst_match.m"
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 0);
#line 868 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 867 "inst_match.m"
            {
#line 867 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
            }
#line 868 "inst_match.m"
          else
#line 870 "inst_match.m"
            {
#line 868 "inst_match.m"
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 2);
#line 870 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 869 "inst_match.m"
                {
#line 869 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
                }
#line 870 "inst_match.m"
              else
#line 871 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 870 "inst_match.m"
            }
#line 868 "inst_match.m"
        }
#line 845 "inst_match.m"
        break;
#line 845 "inst_match.m"
      case (MR_Integer) 0:
#line 856 "inst_match.m"
        {
#line 854 "inst_match.m"
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 1);
#line 856 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 855 "inst_match.m"
            {
#line 855 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
            }
#line 856 "inst_match.m"
          else
#line 858 "inst_match.m"
            {
#line 856 "inst_match.m"
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 2);
#line 858 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 857 "inst_match.m"
                {
#line 857 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
                }
#line 858 "inst_match.m"
              else
#line 859 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 858 "inst_match.m"
            }
#line 856 "inst_match.m"
        }
#line 845 "inst_match.m"
        break;
#line 845 "inst_match.m"
    }
#line 845 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 845 "inst_match.m"
  }
#line 842 "inst_match.m"
}

#line 817 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
#line 817 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 817 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_2,
#line 817 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_3)
#line 817 "inst_match.m"
{
#line 820 "inst_match.m"
  {
#line 820 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 820 "inst_match.m"
#line 820 "inst_match.m"
    switch (check_hlds__inst_match__HeadVar__1_1) {
#line 820 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 820 "inst_match.m"
      case (MR_Integer) 1:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
        switch (check_hlds__inst_match__InstB_3) {
#line 825 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 825 "inst_match.m"
          case (MR_Integer) 3:
#line 835 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstA_2 == (MR_Integer) 3);
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 4:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
            switch (check_hlds__inst_match__InstA_2) {
#line 825 "inst_match.m"
              default:
#line 825 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 3:
#line 834 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 4:
#line 833 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
            }
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 2:
#line 825 "inst_match.m"
            if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__InstA_2))))
#line 825 "inst_match.m"
              {
#line 825 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
              }
#line 825 "inst_match.m"
            else
#line 825 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 0:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
            switch (check_hlds__inst_match__InstA_2) {
#line 825 "inst_match.m"
              default:
#line 825 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 3:
#line 832 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 4:
#line 831 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 0:
#line 830 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
            }
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 1:
#line 825 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
        }
#line 820 "inst_match.m"
        break;
#line 820 "inst_match.m"
      case (MR_Integer) 0:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
        switch (check_hlds__inst_match__InstA_2) {
#line 825 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 825 "inst_match.m"
          case (MR_Integer) 3:
#line 835 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_3 == (MR_Integer) 3);
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 4:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
            switch (check_hlds__inst_match__InstB_3) {
#line 825 "inst_match.m"
              default:
#line 825 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 3:
#line 834 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 4:
#line 833 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
            }
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 2:
#line 825 "inst_match.m"
            if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__InstB_3))))
#line 825 "inst_match.m"
              {
#line 825 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
              }
#line 825 "inst_match.m"
            else
#line 825 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 0:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
            switch (check_hlds__inst_match__InstB_3) {
#line 825 "inst_match.m"
              default:
#line 825 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 3:
#line 832 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 4:
#line 831 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
              case (MR_Integer) 0:
#line 830 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
                break;
#line 825 "inst_match.m"
            }
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 1:
#line 825 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
        }
#line 820 "inst_match.m"
        break;
#line 820 "inst_match.m"
    }
#line 820 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 820 "inst_match.m"
  }
#line 817 "inst_match.m"
}

#line 779 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
#line 779 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 779 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 779 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 779 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 779 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 779 "inst_match.m"
{
#line 783 "inst_match.m"
  while (MR_TRUE)
#line 783 "inst_match.m"
    {
#line 783 "inst_match.m"
      /* tailcall optimized into a loop */
#line 783 "inst_match.m"
      {
#line 783 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 783 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "inst_match.m"
          {
#line 783 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 783 "inst_match.m"
              {
#line 783 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 783 "inst_match.m"
                  {
#line 783 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 783 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 783 "inst_match.m"
                  }
#line 783 "inst_match.m"
              }
#line 783 "inst_match.m"
          }
#line 783 "inst_match.m"
        else
#line 785 "inst_match.m"
          {
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeAs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeB_11;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeBs_12;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo_16;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__InitialA_17;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__FinalA0_18;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__InitialB_19;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__FinalB_20;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__FinalA_21;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_25_25;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 785 "inst_match.m"
            MR_Word check_hlds__inst_match__V_58_58;
#line 786 "inst_match.m"
            MR_Word check_hlds__inst_match__V_28_28;
#line 786 "inst_match.m"
            MR_Word check_hlds__inst_match__V_29_29;
#line 786 "inst_match.m"
            MR_Word check_hlds__inst_match__V_30_30;
#line 786 "inst_match.m"
            MR_Word check_hlds__inst_match__V_31_31;
#line 786 "inst_match.m"
            MR_Word check_hlds__inst_match__V_32_32;
#line 786 "inst_match.m"
            MR_Word check_hlds__inst_match__V_33_33;
#line 802 "inst_match.m"
            MR_Word check_hlds__inst_match__V_54_54;
#line 802 "inst_match.m"
            MR_Word check_hlds__inst_match__V_55_55;
#line 802 "inst_match.m"
            MR_Word check_hlds__inst_match__V_56_56;
#line 802 "inst_match.m"
            MR_Word check_hlds__inst_match__V_57_57;
#line 802 "inst_match.m"
            MR_Word check_hlds__inst_match__V_59_59;
#line 802 "inst_match.m"
            MR_Word check_hlds__inst_match__V_60_60;

#line 784 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 784 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 784 "inst_match.m"
              {
#line 784 "inst_match.m"
                check_hlds__inst_match__ModeB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 784 "inst_match.m"
                check_hlds__inst_match__ModeBs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 785 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 785 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 785 "inst_match.m"
                  {
#line 785 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 785 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 786 "inst_match.m"
                    check_hlds__inst_match__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 786 "inst_match.m"
                    check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 786 "inst_match.m"
                    check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 786 "inst_match.m"
                    check_hlds__inst_match__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 786 "inst_match.m"
                    check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 786 "inst_match.m"
                    check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 786 "inst_match.m"
                    check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 787 "inst_match.m"
                    {
#line 787 "inst_match.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__inst_match__ModuleInfo_16, check_hlds__inst_match__ModeA_9, &check_hlds__inst_match__InitialA_17, &check_hlds__inst_match__FinalA0_18);
                    }
#line 788 "inst_match.m"
                    {
#line 788 "inst_match.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__inst_match__ModuleInfo_16, check_hlds__inst_match__ModeB_11, &check_hlds__inst_match__InitialB_19, &check_hlds__inst_match__FinalB_20);
                    }
#line 790 "inst_match.m"
                    {
#line 790 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(check_hlds__inst_match__InitialB_19, check_hlds__inst_match__InitialA_17, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_25_25);
                    }
#line 785 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 785 "inst_match.m"
                      {
#line 802 "inst_match.m"
                        check_hlds__inst_match__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 802 "inst_match.m"
                        check_hlds__inst_match__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 802 "inst_match.m"
                        check_hlds__inst_match__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 802 "inst_match.m"
                        check_hlds__inst_match__V_57_57 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 802 "inst_match.m"
                        check_hlds__inst_match__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 802 "inst_match.m"
                        check_hlds__inst_match__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 802 "inst_match.m"
                        check_hlds__inst_match__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 802 "inst_match.m"
                        if ((check_hlds__inst_match__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 806 "inst_match.m"
                          check_hlds__inst_match__FinalA_21 = check_hlds__inst_match__FinalA0_18;
#line 802 "inst_match.m"
                        else
#line 802 "inst_match.m"
                          {
#line 802 "inst_match.m"
                            MR_Word check_hlds__inst_match__Subst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_58_58, (MR_Integer) 0)));

#line 803 "inst_match.m"
                            {
#line 803 "inst_match.m"
                              parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__inst_match__Subst_39, check_hlds__inst_match__FinalA0_18, &check_hlds__inst_match__FinalA_21);
                            }
#line 802 "inst_match.m"
                          }
#line 794 "inst_match.m"
                        {
#line 794 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__FinalA_21, check_hlds__inst_match__FinalB_20, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_25_25, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                        }
#line 785 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 795 "inst_match.m"
                          {
#line 795 "inst_match.m"
                            /* direct tailcall eliminated */
#line 795 "inst_match.m"
                            {
#line 795 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ModeAs_10;
#line 795 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ModeBs_12;
#line 795 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 795 "inst_match.m"
                              MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 795 "inst_match.m"
                              check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 795 "inst_match.m"
                              check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 795 "inst_match.m"
                              check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 795 "inst_match.m"
                              check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 795 "inst_match.m"
                            }
#line 795 "inst_match.m"
                            continue;
#line 795 "inst_match.m"
                          }
#line 785 "inst_match.m"
                      }
#line 785 "inst_match.m"
                  }
#line 784 "inst_match.m"
              }
#line 785 "inst_match.m"
          }
#line 783 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 783 "inst_match.m"
      }
#line 783 "inst_match.m"
      break;
#line 783 "inst_match.m"
    }
#line 779 "inst_match.m"
}

#line 716 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
#line 716 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 716 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 716 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 716 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 716 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 716 "inst_match.m"
{
#line 721 "inst_match.m"
  {
#line 721 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 721 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "inst_match.m"
      {
#line 722 "inst_match.m"
        MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 722 "inst_match.m"
        MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 722 "inst_match.m"
        MR_Word check_hlds__inst_match__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 722 "inst_match.m"
        MR_Word check_hlds__inst_match__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 722 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 722 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 722 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 722 "inst_match.m"
        {
#line 722 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_match__V_21_21, check_hlds__inst_match__HOInstInfoA_6);
        }
#line 722 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 721 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 721 "inst_match.m"
          {
#line 721 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_17 = check_hlds__inst_match__STATE_VARIABLE_Info_0_16;
#line 721 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 721 "inst_match.m"
          }
#line 721 "inst_match.m"
      }
#line 721 "inst_match.m"
    else
#line 721 "inst_match.m"
      {
#line 721 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_7), (MR_Integer) 1);

#line 721 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "inst_match.m"
          {
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_30_30;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_65;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 1)));
#line 725 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_14;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_15;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 0)));
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_56;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_57;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_59;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_60;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_62;
#line 725 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_63_63;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__V_66_66;
#line 725 "inst_match.m"
            MR_Word check_hlds__inst_match__V_67_67;
#line 727 "inst_match.m"
            MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 2)));
#line 727 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 3)));
#line 762 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_58;
#line 763 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_61;

#line 727 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 1);
#line 725 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 725 "inst_match.m"
              {
#line 10856 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 728 "inst_match.m"
                {
#line 728 "inst_match.m"
                  check_hlds__inst_match__Arity_14 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_30_30, check_hlds__inst_match__ArgModes_11);
                }
#line 729 "inst_match.m"
                {
#line 729 "inst_match.m"
                  check_hlds__inst_match__PredInstA_15 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_match__Arity_14);
                }
#line 762 "inst_match.m"
                check_hlds__inst_match__PredOrFunc_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 0)));
#line 762 "inst_match.m"
                check_hlds__inst_match__ModesA_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 1)));
#line 762 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsA_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 2)));
#line 762 "inst_match.m"
                check_hlds__inst_match__Det_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 3)));
#line 763 "inst_match.m"
                check_hlds__inst_match__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 0)));
#line 763 "inst_match.m"
                check_hlds__inst_match__ModesB_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 1)));
#line 763 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsB_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 2)));
#line 763 "inst_match.m"
                check_hlds__inst_match__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 3)));
#line 763 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_56 == check_hlds__inst_match__V_66_66);
#line 725 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 725 "inst_match.m"
                  {
#line 763 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_59 == check_hlds__inst_match__V_67_67);
#line 725 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 725 "inst_match.m"
                      {
#line 10896 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_21_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 764 "inst_match.m"
                        {
#line 764 "inst_match.m"
                          check_hlds__inst_match__V_63_63 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_65, check_hlds__inst_match__ModesA_57);
                        }
#line 764 "inst_match.m"
                        {
#line 764 "inst_match.m"
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_63_63, &check_hlds__inst_match__MaybeTypes_62);
                        }
#line 765 "inst_match.m"
                        {
#line 765 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_57, check_hlds__inst_match__ModesB_60, check_hlds__inst_match__MaybeTypes_62, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                        }
#line 725 "inst_match.m"
                      }
#line 725 "inst_match.m"
                  }
#line 725 "inst_match.m"
              }
#line 725 "inst_match.m"
          }
#line 721 "inst_match.m"
        else
#line 732 "inst_match.m"
          {
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_47;
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 0)));
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 1)));
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 3)));
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 1)));
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_44;
#line 732 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_45_45;
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 0)));
#line 732 "inst_match.m"
            MR_Word check_hlds__inst_match__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 3)));
#line 762 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 2)));
#line 763 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_31_31, (MR_Integer) 2)));

#line 763 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_38 == check_hlds__inst_match__V_48_48);
#line 732 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 732 "inst_match.m"
              {
#line 763 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_41 == check_hlds__inst_match__V_49_49);
#line 732 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 732 "inst_match.m"
                  {
#line 10962 "check_hlds.inst_match.c"
                    check_hlds__inst_match__TypeCtorInfo_21_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 764 "inst_match.m"
                    {
#line 764 "inst_match.m"
                      check_hlds__inst_match__V_45_45 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_47, check_hlds__inst_match__ModesA_39);
                    }
#line 764 "inst_match.m"
                    {
#line 764 "inst_match.m"
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_45_45, &check_hlds__inst_match__MaybeTypes_44);
                    }
#line 765 "inst_match.m"
                    {
#line 765 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_39, check_hlds__inst_match__ModesB_42, check_hlds__inst_match__MaybeTypes_44, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                    }
#line 732 "inst_match.m"
                  }
#line 732 "inst_match.m"
              }
#line 732 "inst_match.m"
          }
#line 721 "inst_match.m"
      }
#line 721 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 721 "inst_match.m"
  }
#line 716 "inst_match.m"
}

#line 658 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 658 "inst_match.m"
{
#line 658 "inst_match.m"
  {
#line 658 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 658 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;

#line 658 "inst_match.m"
    {
#line 658 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 658 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 658 "inst_match.m"
  }
#line 658 "inst_match.m"
}

#line 641 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
#line 641 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 641 "inst_match.m"
{
#line 641 "inst_match.m"
  {
#line 641 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 641 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0, 1);
#line 641 "inst_match.m"
  }
#line 641 "inst_match.m"
}

#line 641 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
#line 641 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 641 "inst_match.m"
{
#line 641 "inst_match.m"
  {
#line 641 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 641 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
#line 641 "inst_match.m"
      {
#line 641 "inst_match.m"
        {
#line 641 "inst_match.m"
          MR_Word check_hlds__inst_match__V_21_21;
#line 641 "inst_match.m"
          MR_Word check_hlds__inst_match__V_22_22;

#line 641 "inst_match.m"
          {
#line 641 "inst_match.m"
            check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &check_hlds__inst_match__V_21_21, &check_hlds__inst_match__V_22_22, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1, check_hlds__inst_match__env_ptr);
          }
#line 641 "inst_match.m"
        }
#line 641 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 641 "inst_match.m"
      }
#line 641 "inst_match.m"
    else
#line 641 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 641 "inst_match.m"
  }
#line 641 "inst_match.m"
}

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 649 "inst_match.m"
{
#line 649 "inst_match.m"
  {
#line 649 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 649 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1, 1);
#line 649 "inst_match.m"
  }
#line 649 "inst_match.m"
}

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 653 "inst_match.m"
{
#line 653 "inst_match.m"
  {
#line 653 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2, 1);
#line 653 "inst_match.m"
  }
#line 653 "inst_match.m"
}

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 653 "inst_match.m"
{
#line 653 "inst_match.m"
  {
#line 653 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27);
#line 653 "inst_match.m"
    {
#line 653 "inst_match.m"
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(check_hlds__inst_match__env_ptr);
    }
#line 653 "inst_match.m"
  }
#line 653 "inst_match.m"
}

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 653 "inst_match.m"
{
#line 653 "inst_match.m"
  {
#line 653 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27, (MR_Integer) 0)));
#line 653 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27, (MR_Integer) 1)));
#line 657 "inst_match.m"
    {
#line 657 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23);
    }
#line 653 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 653 "inst_match.m"
      {
#line 11173 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 11175 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 658 "inst_match.m"
        {
#line 658 "inst_match.m"
          MR_Word base;
#line 658 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 658 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28 = base;
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8));
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5));
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
#line 658 "inst_match.m"
        }
#line 658 "inst_match.m"
        {
#line 658 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24);
        }
#line 658 "inst_match.m"
        if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 658 "inst_match.m"
          {
#line 658 "inst_match.m"
            check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(check_hlds__inst_match__env_ptr);
          }
#line 653 "inst_match.m"
      }
#line 653 "inst_match.m"
  }
#line 653 "inst_match.m"
}

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 653 "inst_match.m"
{
#line 653 "inst_match.m"
  {
#line 653 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
#line 653 "inst_match.m"
      {
#line 653 "inst_match.m"
        {
#line 653 "inst_match.m"
          {
#line 653 "inst_match.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7, check_hlds__inst_match__env_ptr);
          }
#line 653 "inst_match.m"
        }
#line 653 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 653 "inst_match.m"
      }
#line 653 "inst_match.m"
    else
#line 653 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 653 "inst_match.m"
  }
#line 653 "inst_match.m"
}

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 649 "inst_match.m"
{
#line 649 "inst_match.m"
  {
#line 649 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    {
#line 653 "inst_match.m"
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(check_hlds__inst_match__env_ptr);
    }
#line 651 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 651 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 651 "inst_match.m"
      {
#line 651 "inst_match.m"
        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(check_hlds__inst_match__env_ptr);
      }
#line 649 "inst_match.m"
  }
#line 649 "inst_match.m"
}

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 649 "inst_match.m"
{
#line 649 "inst_match.m"
  {
#line 649 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 649 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
#line 649 "inst_match.m"
      {
#line 650 "inst_match.m"
        {
#line 650 "inst_match.m"
          check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4, check_hlds__inst_match__env_ptr);
        }
#line 649 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 649 "inst_match.m"
      }
#line 649 "inst_match.m"
    else
#line 649 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 649 "inst_match.m"
  }
#line 649 "inst_match.m"
}

#line 663 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_7,
#line 663 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8)
#line 663 "inst_match.m"
{
#line 663 "inst_match.m"
  {
#line 663 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s check_hlds__inst_match__env;

#line 663 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions_5;
#line 663 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = check_hlds__inst_match__ModuleInfo_6;
#line 663 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8 = check_hlds__inst_match__Type_8;
#line 676 "inst_match.m"
    while (MR_TRUE)
#line 676 "inst_match.m"
      {
#line 676 "inst_match.m"
        /* tailcall optimized into a loop */
#line 676 "inst_match.m"
        {
#line 676 "inst_match.m"
          MR_Word check_hlds__inst_match__Name_9;

#line 668 "inst_match.m"
          (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 668 "inst_match.m"
          if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 668 "inst_match.m"
            {
#line 668 "inst_match.m"
              check_hlds__inst_match__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));
#line 669 "inst_match.m"
              {
#line 669 "inst_match.m"
                (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__Name_9)), (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5);
              }
#line 671 "inst_match.m"
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 670 "inst_match.m"
                (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 671 "inst_match.m"
              else
#line 672 "inst_match.m"
                {
#line 672 "inst_match.m"
                  MR_Word check_hlds__inst_match__ExpandedInst_10;
#line 672 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_14_14;

#line 672 "inst_match.m"
                  {
#line 672 "inst_match.m"
                    check_hlds__mode_util__inst_lookup_3_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, check_hlds__inst_match__Name_9, &check_hlds__inst_match__ExpandedInst_10);
                  }
#line 673 "inst_match.m"
                  {
#line 673 "inst_match.m"
                    check_hlds__inst_match__V_14_14 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5, ((MR_Box) (check_hlds__inst_match__Name_9)));
                  }
#line 673 "inst_match.m"
                  /* direct tailcall eliminated */
#line 673 "inst_match.m"
                  {
#line 673 "inst_match.m"
                    MR_Word check_hlds__inst_match__Expansions__tmp_copy_5 = check_hlds__inst_match__V_14_14;
#line 673 "inst_match.m"
                    MR_Word check_hlds__inst_match__Inst__tmp_copy_7 = check_hlds__inst_match__ExpandedInst_10;

#line 673 "inst_match.m"
                    check_hlds__inst_match__Inst_7 = check_hlds__inst_match__Inst__tmp_copy_7;
#line 673 "inst_match.m"
                    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions__tmp_copy_5;
#line 673 "inst_match.m"
                  }
#line 673 "inst_match.m"
                  continue;
#line 672 "inst_match.m"
                }
#line 668 "inst_match.m"
            }
#line 668 "inst_match.m"
          else
#line 679 "inst_match.m"
            {
#line 676 "inst_match.m"
              MR_Word check_hlds__inst_match__V_11_11;
#line 676 "inst_match.m"
              MR_Word check_hlds__inst_match__V_12_12;

#line 676 "inst_match.m"
              (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 676 "inst_match.m"
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 676 "inst_match.m"
                {
#line 676 "inst_match.m"
                  check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));
#line 676 "inst_match.m"
                  check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 2)));
#line 676 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 3)));
#line 641 "inst_match.m"
                  {
#line 641 "inst_match.m"
                    check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(&check_hlds__inst_match__env);
                  }
#line 639 "inst_match.m"
                  if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 639 "inst_match.m"
                    {
#line 649 "inst_match.m"
                      {
#line 649 "inst_match.m"
                        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(&check_hlds__inst_match__env);
                      }
#line 649 "inst_match.m"
                      (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 639 "inst_match.m"
                    }
#line 676 "inst_match.m"
                }
#line 676 "inst_match.m"
              else
#line 680 "inst_match.m"
                {
#line 680 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = (check_hlds__inst_match__Inst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 680 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 680 "inst_match.m"
                }
#line 679 "inst_match.m"
            }
#line 676 "inst_match.m"
          return (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
#line 676 "inst_match.m"
        }
#line 676 "inst_match.m"
        break;
#line 676 "inst_match.m"
      }
#line 663 "inst_match.m"
  }
#line 663 "inst_match.m"
}

#line 658 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 658 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 658 "inst_match.m"
{
#line 658 "inst_match.m"
  {
#line 658 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 658 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;

#line 658 "inst_match.m"
    {
#line 658 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 658 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 658 "inst_match.m"
  }
#line 658 "inst_match.m"
}

#line 641 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
#line 641 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 641 "inst_match.m"
{
#line 641 "inst_match.m"
  {
#line 641 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 641 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0, 1);
#line 641 "inst_match.m"
  }
#line 641 "inst_match.m"
}

#line 641 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
#line 641 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 641 "inst_match.m"
{
#line 641 "inst_match.m"
  {
#line 641 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 641 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
#line 641 "inst_match.m"
      {
#line 641 "inst_match.m"
        {
#line 641 "inst_match.m"
          MR_Word check_hlds__inst_match__V_9_9;
#line 641 "inst_match.m"
          MR_Word check_hlds__inst_match__V_10_10;

#line 641 "inst_match.m"
          {
#line 641 "inst_match.m"
            check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &check_hlds__inst_match__V_9_9, &check_hlds__inst_match__V_10_10, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1, check_hlds__inst_match__env_ptr);
          }
#line 641 "inst_match.m"
        }
#line 641 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 641 "inst_match.m"
      }
#line 641 "inst_match.m"
    else
#line 641 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 641 "inst_match.m"
  }
#line 641 "inst_match.m"
}

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 649 "inst_match.m"
{
#line 649 "inst_match.m"
  {
#line 649 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 649 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1, 1);
#line 649 "inst_match.m"
  }
#line 649 "inst_match.m"
}

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 653 "inst_match.m"
{
#line 653 "inst_match.m"
  {
#line 653 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2, 1);
#line 653 "inst_match.m"
  }
#line 653 "inst_match.m"
}

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 653 "inst_match.m"
{
#line 653 "inst_match.m"
  {
#line 653 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15);
#line 653 "inst_match.m"
    {
#line 653 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(check_hlds__inst_match__env_ptr);
    }
#line 653 "inst_match.m"
  }
#line 653 "inst_match.m"
}

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 653 "inst_match.m"
{
#line 653 "inst_match.m"
  {
#line 653 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15, (MR_Integer) 0)));
#line 653 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15, (MR_Integer) 1)));
#line 657 "inst_match.m"
    {
#line 657 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11);
    }
#line 653 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 653 "inst_match.m"
      {
#line 11656 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 11658 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 658 "inst_match.m"
        {
#line 658 "inst_match.m"
          MR_Word base;
#line 658 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 658 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16 = base;
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8));
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5));
#line 658 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
#line 658 "inst_match.m"
        }
#line 658 "inst_match.m"
        {
#line 658 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12);
        }
#line 658 "inst_match.m"
        if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 658 "inst_match.m"
          {
#line 658 "inst_match.m"
            check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(check_hlds__inst_match__env_ptr);
          }
#line 653 "inst_match.m"
      }
#line 653 "inst_match.m"
  }
#line 653 "inst_match.m"
}

#line 653 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
#line 653 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 653 "inst_match.m"
{
#line 653 "inst_match.m"
  {
#line 653 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
#line 653 "inst_match.m"
      {
#line 653 "inst_match.m"
        {
#line 653 "inst_match.m"
          {
#line 653 "inst_match.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7, check_hlds__inst_match__env_ptr);
          }
#line 653 "inst_match.m"
        }
#line 653 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 653 "inst_match.m"
      }
#line 653 "inst_match.m"
    else
#line 653 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 653 "inst_match.m"
  }
#line 653 "inst_match.m"
}

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 649 "inst_match.m"
{
#line 649 "inst_match.m"
  {
#line 649 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 653 "inst_match.m"
    {
#line 653 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(check_hlds__inst_match__env_ptr);
    }
#line 651 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
#line 651 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 651 "inst_match.m"
      {
#line 651 "inst_match.m"
        check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(check_hlds__inst_match__env_ptr);
      }
#line 649 "inst_match.m"
  }
#line 649 "inst_match.m"
}

#line 649 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
#line 649 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 649 "inst_match.m"
{
#line 649 "inst_match.m"
  {
#line 649 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 649 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
#line 649 "inst_match.m"
      {
#line 650 "inst_match.m"
        {
#line 650 "inst_match.m"
          check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4, check_hlds__inst_match__env_ptr);
        }
#line 649 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 649 "inst_match.m"
      }
#line 649 "inst_match.m"
    else
#line 649 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 649 "inst_match.m"
  }
#line 649 "inst_match.m"
}

#line 635 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_7,
#line 635 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8)
#line 635 "inst_match.m"
{
#line 635 "inst_match.m"
  {
#line 635 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s check_hlds__inst_match__env;

#line 635 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions_5;
#line 635 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = check_hlds__inst_match__ModuleInfo_6;
#line 635 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7 = check_hlds__inst_match__BoundInsts_7;
#line 635 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8 = check_hlds__inst_match__Type_8;
#line 641 "inst_match.m"
    {
#line 641 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(&check_hlds__inst_match__env);
    }
#line 639 "inst_match.m"
    if ((check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 639 "inst_match.m"
      {
#line 649 "inst_match.m"
        {
#line 649 "inst_match.m"
          check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(&check_hlds__inst_match__env);
        }
#line 649 "inst_match.m"
        (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
#line 639 "inst_match.m"
      }
#line 639 "inst_match.m"
    return (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
#line 635 "inst_match.m"
  }
#line 635 "inst_match.m"
}

#line 619 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
#line 619 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 619 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 619 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 619 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 619 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 619 "inst_match.m"
{
#line 623 "inst_match.m"
  while (MR_TRUE)
#line 623 "inst_match.m"
    {
#line 623 "inst_match.m"
      /* tailcall optimized into a loop */
#line 623 "inst_match.m"
      {
#line 623 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 623 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "inst_match.m"
          {
#line 623 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 623 "inst_match.m"
              {
#line 623 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 623 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 623 "inst_match.m"
              }
#line 623 "inst_match.m"
          }
#line 623 "inst_match.m"
        else
#line 625 "inst_match.m"
          {
#line 625 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 625 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 625 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 625 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 625 "inst_match.m"
            MR_Word check_hlds__inst_match__V_18_18;
#line 625 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_19_19;
#line 625 "inst_match.m"
            MR_Word check_hlds__inst_match__V_20_20;

#line 625 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 625 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 625 "inst_match.m"
              {
#line 625 "inst_match.m"
                check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 625 "inst_match.m"
                check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 626 "inst_match.m"
                check_hlds__inst_match__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 626 "inst_match.m"
                {
#line 626 "inst_match.m"
                  check_hlds__inst_match__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 626 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 626 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__V_18_18, 1) = ((MR_Box) (check_hlds__inst_match__Uniq_1));
#line 626 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__V_18_18, 2) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 626 "inst_match.m"
                }
#line 626 "inst_match.m"
                {
#line 626 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__V_18_18, check_hlds__inst_match__Inst_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_19_19);
                }
#line 625 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 627 "inst_match.m"
                  {
#line 627 "inst_match.m"
                    /* direct tailcall eliminated */
#line 627 "inst_match.m"
                    {
#line 627 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Insts_12;
#line 627 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 627 "inst_match.m"
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_19_19;

#line 627 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 627 "inst_match.m"
                      check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 627 "inst_match.m"
                      check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 627 "inst_match.m"
                    }
#line 627 "inst_match.m"
                    continue;
#line 627 "inst_match.m"
                  }
#line 625 "inst_match.m"
              }
#line 625 "inst_match.m"
          }
#line 623 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 623 "inst_match.m"
      }
#line 623 "inst_match.m"
      break;
#line 623 "inst_match.m"
    }
#line 619 "inst_match.m"
}

#line 606 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
#line 606 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 606 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 606 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 606 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 606 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 606 "inst_match.m"
{
#line 610 "inst_match.m"
  while (MR_TRUE)
#line 610 "inst_match.m"
    {
#line 610 "inst_match.m"
      /* tailcall optimized into a loop */
#line 610 "inst_match.m"
      {
#line 610 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 610 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "inst_match.m"
          {
#line 610 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 610 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 610 "inst_match.m"
          }
#line 610 "inst_match.m"
        else
#line 612 "inst_match.m"
          {
#line 612 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 612 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 612 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 0)));
#line 612 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 1)));
#line 612 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_18;
#line 612 "inst_match.m"
            MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 612 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_22_22;
#line 612 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_23_23;
#line 614 "inst_match.m"
            MR_Word check_hlds__inst_match__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 614 "inst_match.m"
            MR_Word check_hlds__inst_match__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 614 "inst_match.m"
            MR_Word check_hlds__inst_match__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 614 "inst_match.m"
            MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 614 "inst_match.m"
            MR_Word check_hlds__inst_match__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 614 "inst_match.m"
            MR_Word check_hlds__inst_match__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 615 "inst_match.m"
            {
#line 615 "inst_match.m"
              check_hlds__inst_match__V_22_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__Args_17);
            }
#line 614 "inst_match.m"
            {
#line 614 "inst_match.m"
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_21_21, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsId_16, check_hlds__inst_match__V_22_22, &check_hlds__inst_match__MaybeTypes_18);
            }
#line 616 "inst_match.m"
            {
#line 616 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(check_hlds__inst_match__Uniq_1, check_hlds__inst_match__Args_17, check_hlds__inst_match__MaybeTypes_18, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_23_23);
            }
#line 612 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 617 "inst_match.m"
              {
#line 617 "inst_match.m"
                /* direct tailcall eliminated */
#line 617 "inst_match.m"
                {
#line 617 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__BoundInsts_13;
#line 617 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_23_23;

#line 617 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 617 "inst_match.m"
                  check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 617 "inst_match.m"
                }
#line 617 "inst_match.m"
                continue;
#line 617 "inst_match.m"
              }
#line 612 "inst_match.m"
          }
#line 610 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 610 "inst_match.m"
      }
#line 610 "inst_match.m"
      break;
#line 610 "inst_match.m"
    }
#line 606 "inst_match.m"
}

#line 474 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
#line 474 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 474 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 474 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 474 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_50,
#line 474 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_51)
#line 474 "inst_match.m"
{
#line 484 "inst_match.m"
  {
#line 484 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 484 "inst_match.m"
#line 484 "inst_match.m"
    switch (MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) {
#line 484 "inst_match.m"
      default:
#line 484 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
        break;
#line 484 "inst_match.m"
      case (MR_Integer) 0:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
        switch (MR_unmkbody(check_hlds__inst_match__InstA_6)) {
#line 484 "inst_match.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 484 "inst_match.m"
          case (MR_Integer) 0:
#line 506 "inst_match.m"
            {
#line 507 "inst_match.m"
              check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 506 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 506 "inst_match.m"
                {
#line 506 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 506 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 506 "inst_match.m"
                }
#line 506 "inst_match.m"
            }
#line 484 "inst_match.m"
            break;
#line 484 "inst_match.m"
          case (MR_Integer) 1:
#line 598 "inst_match.m"
            {
#line 598 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 598 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 598 "inst_match.m"
            }
#line 484 "inst_match.m"
            break;
#line 484 "inst_match.m"
        }
#line 484 "inst_match.m"
        break;
#line 484 "inst_match.m"
      case (MR_Integer) 2:
#line 484 "inst_match.m"
        {
#line 484 "inst_match.m"
          MR_Word check_hlds__inst_match__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 484 "inst_match.m"
          MR_Word check_hlds__inst_match__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));

#line 484 "inst_match.m"
#line 484 "inst_match.m"
          switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 484 "inst_match.m"
            default:
#line 484 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
              break;
#line 484 "inst_match.m"
            case (MR_Integer) 0:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
              switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
#line 484 "inst_match.m"
                default:
#line 484 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 0:
#line 491 "inst_match.m"
                  {
#line 491 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 491 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 491 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
              }
#line 484 "inst_match.m"
              break;
#line 484 "inst_match.m"
            case (MR_Integer) 2:
#line 484 "inst_match.m"
              {
#line 484 "inst_match.m"
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 484 "inst_match.m"
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 484 "inst_match.m"
                MR_Word check_hlds__inst_match__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 484 "inst_match.m"
                MR_Word check_hlds__inst_match__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 486 "inst_match.m"
                MR_Word check_hlds__inst_match__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 486 "inst_match.m"
                MR_Word check_hlds__inst_match__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 486 "inst_match.m"
                MR_Word check_hlds__inst_match__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 486 "inst_match.m"
                MR_Word check_hlds__inst_match__V_129_129 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 486 "inst_match.m"
                MR_Word check_hlds__inst_match__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 486 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_91_91 == (MR_Integer) 1);
#line 484 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 484 "inst_match.m"
                  {
#line 487 "inst_match.m"
                    {
#line 487 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_130_130, check_hlds__inst_match__V_253_253, check_hlds__inst_match__UniqB_12);
                    }
#line 484 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 488 "inst_match.m"
                      {
#line 488 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_252_252, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                      }
#line 484 "inst_match.m"
                  }
#line 484 "inst_match.m"
              }
#line 484 "inst_match.m"
              break;
#line 484 "inst_match.m"
            case (MR_Integer) 3:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 484 "inst_match.m"
                default:
#line 484 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 0:
#line 500 "inst_match.m"
                  {
#line 500 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 500 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_98;
#line 502 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 502 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 502 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_146_146 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 502 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_147_147 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 502 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_148_148 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 502 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_149_149 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 502 "inst_match.m"
                    {
#line 502 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_87_87, check_hlds__inst_match__V_253_253, check_hlds__inst_match__V_252_252, &check_hlds__inst_match__NextInstA_98);
                    }
#line 500 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 504 "inst_match.m"
                      {
#line 504 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__NextInstA_98, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                      }
#line 500 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 1:
#line 494 "inst_match.m"
                  {
#line 494 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_18;
#line 494 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 496 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 496 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 496 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_140_140 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 496 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 496 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 496 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 496 "inst_match.m"
                    {
#line 496 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_89_89, check_hlds__inst_match__V_253_253, check_hlds__inst_match__V_252_252, &check_hlds__inst_match__NextInstA_18);
                    }
#line 494 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 498 "inst_match.m"
                      {
#line 498 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__NextInstA_18, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                      }
#line 494 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
              }
#line 484 "inst_match.m"
              break;
#line 484 "inst_match.m"
          }
#line 484 "inst_match.m"
        }
#line 484 "inst_match.m"
        break;
#line 484 "inst_match.m"
      case (MR_Integer) 3:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) {
#line 484 "inst_match.m"
          default:
#line 484 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
            break;
#line 484 "inst_match.m"
          case (MR_Integer) 0:
#line 484 "inst_match.m"
            {
#line 484 "inst_match.m"
              MR_Word check_hlds__inst_match__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 484 "inst_match.m"
              MR_Word check_hlds__inst_match__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 484 "inst_match.m"
              MR_Word check_hlds__inst_match__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 484 "inst_match.m"
#line 484 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 484 "inst_match.m"
                default:
#line 484 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 0:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
#line 484 "inst_match.m"
                    default:
#line 484 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 0:
#line 515 "inst_match.m"
                      {
#line 515 "inst_match.m"
                        *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 515 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 515 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 2:
#line 509 "inst_match.m"
                  {
#line 509 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 509 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_84_84;
#line 509 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_85_85;
#line 509 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 509 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_156_156;
#line 511 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_150_150;
#line 511 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_151_151;
#line 511 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_152_152;
#line 511 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_153_153;
#line 511 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_154_154;
#line 511 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_155_155;
#line 512 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_157_157;
#line 512 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_158_158;
#line 512 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_159_159;
#line 512 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_160_160;
#line 512 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_161_161;

#line 510 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 509 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 509 "inst_match.m"
                      {
#line 511 "inst_match.m"
                        check_hlds__inst_match__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 511 "inst_match.m"
                        check_hlds__inst_match__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 511 "inst_match.m"
                        check_hlds__inst_match__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 511 "inst_match.m"
                        check_hlds__inst_match__V_153_153 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 511 "inst_match.m"
                        check_hlds__inst_match__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 511 "inst_match.m"
                        check_hlds__inst_match__V_154_154 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 511 "inst_match.m"
                        check_hlds__inst_match__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 511 "inst_match.m"
                        {
#line 511 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_84_84, check_hlds__inst_match__V_256_256, check_hlds__inst_match__UniqB_100);
                        }
#line 509 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 509 "inst_match.m"
                          {
#line 512 "inst_match.m"
                            check_hlds__inst_match__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 512 "inst_match.m"
                            check_hlds__inst_match__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 512 "inst_match.m"
                            check_hlds__inst_match__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 512 "inst_match.m"
                            check_hlds__inst_match__V_159_159 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 512 "inst_match.m"
                            check_hlds__inst_match__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 512 "inst_match.m"
                            check_hlds__inst_match__V_160_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 512 "inst_match.m"
                            check_hlds__inst_match__V_161_161 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 512 "inst_match.m"
                            {
#line 512 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(check_hlds__inst_match__V_85_85, check_hlds__inst_match__V_254_254, check_hlds__inst_match__UniqB_100, check_hlds__inst_match__V_156_156);
                            }
#line 509 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 509 "inst_match.m"
                              {
#line 509 "inst_match.m"
                                *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 509 "inst_match.m"
                                check_hlds__inst_match__succeeded = MR_TRUE;
#line 509 "inst_match.m"
                              }
#line 509 "inst_match.m"
                          }
#line 509 "inst_match.m"
                      }
#line 509 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 3:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 484 "inst_match.m"
                    default:
#line 484 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 0:
#line 518 "inst_match.m"
                      {
#line 518 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 518 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 519 "inst_match.m"
                        MR_Word check_hlds__inst_match___InstResultsB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 521 "inst_match.m"
                        {
#line 521 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7);
                        }
#line 521 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 522 "inst_match.m"
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_255_255 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 525 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 525 "inst_match.m"
                          {
#line 525 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 525 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 525 "inst_match.m"
                          }
#line 525 "inst_match.m"
                        else
#line 527 "inst_match.m"
                          {
#line 527 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 526 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 526 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 526 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 526 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_171_171 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 526 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_172_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 526 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_173_173 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 526 "inst_match.m"
                            {
#line 526 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_81_81, check_hlds__inst_match__V_256_256, check_hlds__inst_match__UniqB_102);
                            }
#line 527 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
                              {
#line 528 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__V_254_254, check_hlds__inst_match__BoundInstsB_29, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                              }
#line 527 "inst_match.m"
                          }
#line 518 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 1:
#line 532 "inst_match.m"
                      {
#line 532 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 532 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_77_77;
#line 532 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_78_78;
#line 532 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_79_79;
#line 532 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 532 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_186_186;
#line 534 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_174_174;
#line 534 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_175_175;
#line 534 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_176_176;
#line 534 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_177_177;
#line 534 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_178_178;
#line 534 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_179_179;
#line 535 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_180_180;
#line 535 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_181_181;
#line 535 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_182_182;
#line 535 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_183_183;
#line 535 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_184_184;
#line 535 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_185_185;
#line 537 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_187_187;
#line 537 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_188_188;
#line 537 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_189_189;
#line 537 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_190_190;
#line 537 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_191_191;

#line 533 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 532 "inst_match.m"
                          {
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_177_177 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 534 "inst_match.m"
                            check_hlds__inst_match__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 534 "inst_match.m"
                            {
#line 534 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_77_77, check_hlds__inst_match__V_256_256, check_hlds__inst_match__UniqB_105);
                            }
#line 532 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 532 "inst_match.m"
                              {
#line 535 "inst_match.m"
                                check_hlds__inst_match__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 535 "inst_match.m"
                                check_hlds__inst_match__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 535 "inst_match.m"
                                check_hlds__inst_match__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 535 "inst_match.m"
                                check_hlds__inst_match__V_182_182 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 535 "inst_match.m"
                                check_hlds__inst_match__V_183_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 535 "inst_match.m"
                                check_hlds__inst_match__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 535 "inst_match.m"
                                check_hlds__inst_match__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 535 "inst_match.m"
                                {
#line 535 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_255_255, check_hlds__inst_match__V_254_254, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_78_78);
                                }
#line 532 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 532 "inst_match.m"
                                  {
#line 537 "inst_match.m"
                                    check_hlds__inst_match__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 537 "inst_match.m"
                                    check_hlds__inst_match__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 537 "inst_match.m"
                                    check_hlds__inst_match__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 537 "inst_match.m"
                                    check_hlds__inst_match__V_189_189 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 537 "inst_match.m"
                                    check_hlds__inst_match__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 537 "inst_match.m"
                                    check_hlds__inst_match__V_190_190 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 537 "inst_match.m"
                                    check_hlds__inst_match__V_191_191 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 537 "inst_match.m"
                                    {
#line 537 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(check_hlds__inst_match__V_79_79, check_hlds__inst_match__V_254_254, check_hlds__inst_match__UniqB_105, check_hlds__inst_match__V_186_186);
                                    }
#line 532 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 532 "inst_match.m"
                                      {
#line 532 "inst_match.m"
                                        *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 532 "inst_match.m"
                                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 532 "inst_match.m"
                                      }
#line 532 "inst_match.m"
                                  }
#line 532 "inst_match.m"
                              }
#line 532 "inst_match.m"
                          }
#line 532 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 5:
#line 484 "inst_match.m"
                      {
#line 484 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 543 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_261_261 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 543 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_262_262 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 543 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_263_263 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 543 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_264_264 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 543 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 543 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));

#line 484 "inst_match.m"
#line 484 "inst_match.m"
                        switch (check_hlds__inst_match__V_256_256) {
#line 484 "inst_match.m"
                          default:
#line 484 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                            break;
#line 484 "inst_match.m"
                          case (MR_Integer) 2:
#line 547 "inst_match.m"
                            {
#line 547 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_72_72;
#line 552 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_216_216;
#line 552 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_217_217;
#line 552 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_218_218;
#line 552 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_219_219;
#line 552 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_220_220;
#line 552 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_221_221;

#line 550 "inst_match.m"
                              {
#line 550 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_255_255, check_hlds__inst_match__V_254_254, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__V_267_267);
                              }
#line 547 "inst_match.m"
                              if (check_hlds__inst_match__succeeded)
#line 547 "inst_match.m"
                                {
#line 552 "inst_match.m"
                                  check_hlds__inst_match__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 552 "inst_match.m"
                                  check_hlds__inst_match__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 552 "inst_match.m"
                                  check_hlds__inst_match__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 552 "inst_match.m"
                                  check_hlds__inst_match__V_218_218 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 552 "inst_match.m"
                                  check_hlds__inst_match__V_219_219 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 552 "inst_match.m"
                                  check_hlds__inst_match__V_220_220 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 552 "inst_match.m"
                                  check_hlds__inst_match__V_221_221 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 552 "inst_match.m"
                                  {
#line 552 "inst_match.m"
                                    check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__V_254_254, check_hlds__inst_match__V_72_72);
                                  }
#line 547 "inst_match.m"
                                  if (check_hlds__inst_match__succeeded)
#line 547 "inst_match.m"
                                    {
#line 547 "inst_match.m"
                                      *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 547 "inst_match.m"
                                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 547 "inst_match.m"
                                    }
#line 547 "inst_match.m"
                                }
#line 547 "inst_match.m"
                            }
#line 484 "inst_match.m"
                            break;
#line 484 "inst_match.m"
                          case (MR_Integer) 1:
#line 540 "inst_match.m"
                            {
#line 540 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_75_75;
#line 545 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_204_204;
#line 545 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_205_205;
#line 545 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_206_206;
#line 545 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_207_207;
#line 545 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_208_208;
#line 545 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_209_209;

#line 543 "inst_match.m"
                              {
#line 543 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_255_255, check_hlds__inst_match__V_254_254, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__V_267_267);
                              }
#line 540 "inst_match.m"
                              if (check_hlds__inst_match__succeeded)
#line 540 "inst_match.m"
                                {
#line 545 "inst_match.m"
                                  check_hlds__inst_match__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 545 "inst_match.m"
                                  check_hlds__inst_match__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 545 "inst_match.m"
                                  check_hlds__inst_match__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 545 "inst_match.m"
                                  check_hlds__inst_match__V_206_206 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 545 "inst_match.m"
                                  check_hlds__inst_match__V_207_207 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 545 "inst_match.m"
                                  check_hlds__inst_match__V_208_208 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 545 "inst_match.m"
                                  check_hlds__inst_match__V_209_209 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 545 "inst_match.m"
                                  {
#line 545 "inst_match.m"
                                    check_hlds__inst_match__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__V_254_254, check_hlds__inst_match__V_75_75);
                                  }
#line 540 "inst_match.m"
                                  if (check_hlds__inst_match__succeeded)
#line 540 "inst_match.m"
                                    {
#line 540 "inst_match.m"
                                      *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 540 "inst_match.m"
                                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 540 "inst_match.m"
                                    }
#line 540 "inst_match.m"
                                }
#line 540 "inst_match.m"
                            }
#line 484 "inst_match.m"
                            break;
#line 484 "inst_match.m"
                        }
#line 484 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
              }
#line 484 "inst_match.m"
            }
#line 484 "inst_match.m"
            break;
#line 484 "inst_match.m"
          case (MR_Integer) 1:
#line 484 "inst_match.m"
            {
#line 484 "inst_match.m"
              MR_Word check_hlds__inst_match__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 484 "inst_match.m"
              MR_Word check_hlds__inst_match__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 484 "inst_match.m"
#line 484 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 484 "inst_match.m"
                default:
#line 484 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 0:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
#line 484 "inst_match.m"
                    default:
#line 484 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 0:
#line 560 "inst_match.m"
                      {
#line 560 "inst_match.m"
                        *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 560 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 560 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 2:
#line 554 "inst_match.m"
                  {
#line 554 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 554 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 554 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 556 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 556 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 556 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 556 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_225_225 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 556 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_226_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 556 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_227_227 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 556 "inst_match.m"
                    {
#line 556 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_68_68, check_hlds__inst_match__V_258_258, check_hlds__inst_match__UniqB_115);
                    }
#line 554 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 557 "inst_match.m"
                      {
#line 557 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_257_257, check_hlds__inst_match__HOInstInfoB_116, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                      }
#line 554 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 3:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 484 "inst_match.m"
                    default:
#line 484 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 0:
#line 563 "inst_match.m"
                      {
#line 563 "inst_match.m"
                        MR_Word check_hlds__inst_match__TypeCtorInfo_246_246;
#line 563 "inst_match.m"
                        MR_Word check_hlds__inst_match__Type_38;
#line 563 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_63_63;
#line 563 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_64_64;
#line 563 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_65_65;
#line 563 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 563 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 564 "inst_match.m"
                        MR_Word check_hlds__inst_match___InstResultsB_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 567 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_228_228;
#line 567 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_229_229;
#line 567 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_230_230;
#line 567 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_231_231;
#line 567 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_232_232;
#line 567 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_233_233;
#line 568 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_234_234;
#line 568 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_235_235;
#line 568 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_236_236;
#line 568 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_237_237;
#line 568 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_238_238;
#line 568 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_239_239;

#line 565 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 565 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 565 "inst_match.m"
                          {
#line 565 "inst_match.m"
                            check_hlds__inst_match__Type_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 567 "inst_match.m"
                            check_hlds__inst_match__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 567 "inst_match.m"
                            check_hlds__inst_match__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 567 "inst_match.m"
                            check_hlds__inst_match__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 567 "inst_match.m"
                            check_hlds__inst_match__V_231_231 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 567 "inst_match.m"
                            check_hlds__inst_match__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "inst_match.m"
                            check_hlds__inst_match__V_232_232 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 567 "inst_match.m"
                            check_hlds__inst_match__V_233_233 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 567 "inst_match.m"
                            {
#line 567 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_63_63, check_hlds__inst_match__V_258_258, check_hlds__inst_match__UniqB_119);
                            }
#line 563 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 563 "inst_match.m"
                              {
#line 13088 "check_hlds.inst_match.c"
                                check_hlds__inst_match__TypeCtorInfo_246_246 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 568 "inst_match.m"
                                {
#line 568 "inst_match.m"
                                  check_hlds__inst_match__V_64_64 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_246_246);
                                }
#line 568 "inst_match.m"
                                check_hlds__inst_match__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 568 "inst_match.m"
                                check_hlds__inst_match__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 568 "inst_match.m"
                                check_hlds__inst_match__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 568 "inst_match.m"
                                check_hlds__inst_match__V_236_236 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 568 "inst_match.m"
                                check_hlds__inst_match__V_237_237 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 568 "inst_match.m"
                                check_hlds__inst_match__V_238_238 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 568 "inst_match.m"
                                check_hlds__inst_match__V_239_239 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 568 "inst_match.m"
                                {
#line 568 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_64_64, check_hlds__inst_match__V_65_65, check_hlds__inst_match__BoundInstsB_121, check_hlds__inst_match__Type_38);
                                }
#line 563 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 570 "inst_match.m"
                                  {
#line 570 "inst_match.m"
                                    check_hlds__inst_match__succeeded = check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(check_hlds__inst_match__V_258_258, check_hlds__inst_match__BoundInstsB_121, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                                  }
#line 563 "inst_match.m"
                              }
#line 565 "inst_match.m"
                          }
#line 563 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 1:
#line 573 "inst_match.m"
                      {
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 573 "inst_match.m"
                        MR_Word check_hlds__inst_match__HOInstInfoB_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 575 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 575 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 575 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 575 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_243_243 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 575 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_244_244 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 575 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_245_245 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 575 "inst_match.m"
                        {
#line 575 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_61_61, check_hlds__inst_match__V_258_258, check_hlds__inst_match__UniqB_124);
                        }
#line 573 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 576 "inst_match.m"
                          {
#line 576 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_257_257, check_hlds__inst_match__HOInstInfoB_125, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                          }
#line 573 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 5:
#line 579 "inst_match.m"
                      {
#line 579 "inst_match.m"
                        MR_String check_hlds__inst_match__V_58_58;
#line 579 "inst_match.m"
                        MR_String check_hlds__inst_match__V_59_59;
#line 579 "inst_match.m"
                        MR_String check_hlds__inst_match__V_60_60;

#line 579 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_257_257 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 579 "inst_match.m"
                          {
#line 583 "inst_match.m"
                            check_hlds__inst_match__V_58_58 = (MR_String) "check_hlds.inst_match";
#line 583 "inst_match.m"
                            check_hlds__inst_match__V_59_59 = (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_4\'/5";
#line 584 "inst_match.m"
                            check_hlds__inst_match__V_60_60 = (MR_String) "inst_matches_initial(ground, abstract_inst) == \?\?";
#line 583 "inst_match.m"
                            {
#line 583 "inst_match.m"
                              mercury__require__unexpected_3_p_0(check_hlds__inst_match__V_58_58, check_hlds__inst_match__V_59_59, check_hlds__inst_match__V_60_60);
                            }
#line 583 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 579 "inst_match.m"
                          }
#line 579 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
              }
#line 484 "inst_match.m"
            }
#line 484 "inst_match.m"
            break;
#line 484 "inst_match.m"
          case (MR_Integer) 5:
#line 484 "inst_match.m"
            {
#line 484 "inst_match.m"
              MR_Word check_hlds__inst_match__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 484 "inst_match.m"
              MR_Word check_hlds__inst_match__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 484 "inst_match.m"
#line 484 "inst_match.m"
              switch (MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) {
#line 484 "inst_match.m"
                default:
#line 484 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 0:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
                  switch (MR_unmkbody(check_hlds__inst_match__InstB_7)) {
#line 484 "inst_match.m"
                    default:
#line 484 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 0:
#line 589 "inst_match.m"
                      {
#line 589 "inst_match.m"
                        *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 589 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 589 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 2:
#line 586 "inst_match.m"
                  {
#line 586 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 586 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 587 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_55_55 == (MR_Integer) 0);
#line 586 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 586 "inst_match.m"
                      {
#line 587 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 586 "inst_match.m"
                          {
#line 586 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 586 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 586 "inst_match.m"
                          }
#line 586 "inst_match.m"
                      }
#line 586 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
                case (MR_Integer) 3:
#line 484 "inst_match.m"
#line 484 "inst_match.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) {
#line 484 "inst_match.m"
                    default:
#line 484 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                    case (MR_Integer) 5:
#line 592 "inst_match.m"
                      {
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__TypeCtorInfo_247_247;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__TypeInfo_248_248;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__ArgsB_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__MaybeTypes_49;
#line 592 "inst_match.m"
                        MR_Integer check_hlds__inst_match__V_52_52;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;
#line 592 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 593 "inst_match.m"
                        {
#line 593 "inst_match.m"
                          check_hlds__inst_match__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__inst_match__V_251_251, check_hlds__inst_match__V_249_249);
                        }
#line 592 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 592 "inst_match.m"
                          {
#line 13331 "check_hlds.inst_match.c"
                            check_hlds__inst_match__TypeCtorInfo_247_247 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 594 "inst_match.m"
                            {
#line 594 "inst_match.m"
                              check_hlds__inst_match__V_52_52 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_247_247, check_hlds__inst_match__V_250_250);
                            }
#line 594 "inst_match.m"
                            check_hlds__inst_match__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13340 "check_hlds.inst_match.c"
                            check_hlds__inst_match__TypeInfo_248_248 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 594 "inst_match.m"
                            {
#line 594 "inst_match.m"
                              mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_248_248, check_hlds__inst_match__V_52_52, ((MR_Box) (check_hlds__inst_match__V_53_53)), &check_hlds__inst_match__MaybeTypes_49);
                            }
#line 596 "inst_match.m"
                            {
#line 596 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__V_250_250, check_hlds__inst_match__ArgsB_48, check_hlds__inst_match__MaybeTypes_49, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                            }
#line 592 "inst_match.m"
                          }
#line 592 "inst_match.m"
                      }
#line 484 "inst_match.m"
                      break;
#line 484 "inst_match.m"
                  }
#line 484 "inst_match.m"
                  break;
#line 484 "inst_match.m"
              }
#line 484 "inst_match.m"
            }
#line 484 "inst_match.m"
            break;
#line 484 "inst_match.m"
        }
#line 484 "inst_match.m"
        break;
#line 484 "inst_match.m"
    }
#line 484 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 484 "inst_match.m"
  }
#line 474 "inst_match.m"
}

#line 458 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
#line 458 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 458 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 458 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 458 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 458 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 458 "inst_match.m"
{
#line 461 "inst_match.m"
  {
#line 461 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 461 "inst_match.m"
    MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 461 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 463 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 463 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 463 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 463 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 463 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 463 "inst_match.m"
    MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 470 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions_12;

#line 462 "inst_match.m"
    {
#line 462 "inst_match.m"
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 462 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 462 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 462 "inst_match.m"
    }
#line 235 "inst_match.m"
    {
#line 235 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
    }
#line 470 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 465 "inst_match.m"
      {
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19;
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 465 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 467 "inst_match.m"
        MR_Word check_hlds__inst_match__V_42_42;
#line 467 "inst_match.m"
        MR_Word check_hlds__inst_match__V_43_43;
#line 467 "inst_match.m"
        MR_Word check_hlds__inst_match__V_44_44;
#line 467 "inst_match.m"
        MR_Word check_hlds__inst_match__V_45_45;
#line 467 "inst_match.m"
        MR_Word check_hlds__inst_match__V_46_46;
#line 467 "inst_match.m"
        MR_Word check_hlds__inst_match__V_47_47;

#line 465 "inst_match.m"
        {
#line 465 "inst_match.m"
          check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 465 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_29_29));
#line 465 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 465 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_31_31));
#line 465 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_32_32 | ((((check_hlds__inst_match__V_33_33 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_34_34 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_35_35 << (MR_Integer) 4)))))))));
#line 465 "inst_match.m"
        }
#line 466 "inst_match.m"
        {
#line 466 "inst_match.m"
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__V_29_29, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
        }
#line 467 "inst_match.m"
        check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 467 "inst_match.m"
        check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 467 "inst_match.m"
        check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 467 "inst_match.m"
        check_hlds__inst_match__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 467 "inst_match.m"
        check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 467 "inst_match.m"
        check_hlds__inst_match__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 467 "inst_match.m"
        check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 467 "inst_match.m"
        {
#line 467 "inst_match.m"
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
        }
#line 468 "inst_match.m"
        {
#line 468 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 465 "inst_match.m"
      }
#line 470 "inst_match.m"
    else
#line 470 "inst_match.m"
      {
#line 470 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 470 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 470 "inst_match.m"
      }
#line 461 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 461 "inst_match.m"
  }
#line 458 "inst_match.m"
}

#line 393 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
#line 393 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 393 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 393 "inst_match.m"
  MR_Word check_hlds__inst_match__InstVar_8,
#line 393 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 393 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 393 "inst_match.m"
{
#line 398 "inst_match.m"
  {
#line 398 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 398 "inst_match.m"
    MR_Word check_hlds__inst_match__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 398 "inst_match.m"
    MR_Word check_hlds__inst_match__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 398 "inst_match.m"
    MR_Word check_hlds__inst_match__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 398 "inst_match.m"
    MR_Word check_hlds__inst_match__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 398 "inst_match.m"
    MR_Word check_hlds__inst_match__V_86_86 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 398 "inst_match.m"
    MR_Word check_hlds__inst_match__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 398 "inst_match.m"
    MR_Word check_hlds__inst_match__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));

#line 398 "inst_match.m"
    if ((check_hlds__inst_match__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "inst_match.m"
      {
#line 414 "inst_match.m"
        MR_Word check_hlds__inst_match__V_20_20;
#line 414 "inst_match.m"
        MR_Word check_hlds__inst_match__InstVarSub_28;
#line 416 "inst_match.m"
        MR_Word check_hlds__inst_match__V_68_68;
#line 416 "inst_match.m"
        MR_Word check_hlds__inst_match__V_69_69;
#line 416 "inst_match.m"
        MR_Word check_hlds__inst_match__V_71_71;
#line 416 "inst_match.m"
        MR_Word check_hlds__inst_match__V_72_72;
#line 416 "inst_match.m"
        MR_Word check_hlds__inst_match__V_73_73;
#line 416 "inst_match.m"
        MR_Word check_hlds__inst_match__V_74_74;
#line 416 "inst_match.m"
        MR_Word check_hlds__inst_match__V_70_70;

#line 415 "inst_match.m"
        {
#line 415 "inst_match.m"
          check_hlds__inst_match__InstVarSub_28 = mercury__map__singleton_2_f_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__InstA_6)));
        }
#line 416 "inst_match.m"
        {
#line 416 "inst_match.m"
          check_hlds__inst_match__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 416 "inst_match.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_20_20, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_28));
#line 416 "inst_match.m"
        }
#line 416 "inst_match.m"
        check_hlds__inst_match__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 416 "inst_match.m"
        check_hlds__inst_match__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 416 "inst_match.m"
        check_hlds__inst_match__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 416 "inst_match.m"
        check_hlds__inst_match__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 416 "inst_match.m"
        check_hlds__inst_match__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 416 "inst_match.m"
        check_hlds__inst_match__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 416 "inst_match.m"
        check_hlds__inst_match__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 416 "inst_match.m"
        {
#line 416 "inst_match.m"
          MR_Word base;
#line 416 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 416 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 416 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_68_68));
#line 416 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_69_69));
#line 416 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 416 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_71_71 | ((((check_hlds__inst_match__V_72_72 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_73_73 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_74_74 << (MR_Integer) 4)))))))));
#line 416 "inst_match.m"
        }
#line 414 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 414 "inst_match.m"
      }
#line 398 "inst_match.m"
    else
#line 398 "inst_match.m"
      {
#line 398 "inst_match.m"
        MR_Word check_hlds__inst_match__InstVarSub0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_87_87, (MR_Integer) 0)));
#line 409 "inst_match.m"
        MR_Word check_hlds__inst_match__InstB_11;
#line 399 "inst_match.m"
        MR_Box check_hlds__inst_match__conv0_InstB_11;

#line 399 "inst_match.m"
        {
#line 399 "inst_match.m"
          check_hlds__inst_match__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__InstVarSub0_10, ((MR_Box) (check_hlds__inst_match__InstVar_8)), &check_hlds__inst_match__conv0_InstB_11);
        }
#line 399 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 399 "inst_match.m"
          {
#line 399 "inst_match.m"
            check_hlds__inst_match__InstB_11 = ((MR_Word) check_hlds__inst_match__conv0_InstB_11);
#line 399 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 399 "inst_match.m"
          }
#line 409 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 403 "inst_match.m"
          {
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeInfo_77_77;
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_78_78;
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_13;
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo_14;
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__InstVarSub_15;
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_22_22;
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__V_24_24;
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 403 "inst_match.m"
            MR_Word check_hlds__inst_match__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 406 "inst_match.m"
            MR_Word check_hlds__inst_match__V_42_42;
#line 406 "inst_match.m"
            MR_Word check_hlds__inst_match__V_43_43;
#line 406 "inst_match.m"
            MR_Word check_hlds__inst_match__V_44_44;
#line 406 "inst_match.m"
            MR_Word check_hlds__inst_match__V_45_45;
#line 406 "inst_match.m"
            MR_Word check_hlds__inst_match__V_46_46;
#line 406 "inst_match.m"
            MR_Word check_hlds__inst_match__V_47_47;
#line 406 "inst_match.m"
            MR_Word check_hlds__inst_match__V_41_41;
#line 408 "inst_match.m"
            MR_Word check_hlds__inst_match__V_48_48;
#line 408 "inst_match.m"
            MR_Word check_hlds__inst_match__V_49_49;
#line 408 "inst_match.m"
            MR_Word check_hlds__inst_match__V_51_51;
#line 408 "inst_match.m"
            MR_Word check_hlds__inst_match__V_52_52;
#line 408 "inst_match.m"
            MR_Word check_hlds__inst_match__V_53_53;
#line 408 "inst_match.m"
            MR_Word check_hlds__inst_match__V_54_54;
#line 408 "inst_match.m"
            MR_Word check_hlds__inst_match__V_50_50;

#line 404 "inst_match.m"
            {
#line 404 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_11, check_hlds__inst_match__MaybeType_7, &check_hlds__inst_match__Inst_13, check_hlds__inst_match__ModuleInfo0_12, &check_hlds__inst_match__ModuleInfo_14);
            }
#line 403 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 403 "inst_match.m"
              {
#line 406 "inst_match.m"
                check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 406 "inst_match.m"
                check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 406 "inst_match.m"
                check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 406 "inst_match.m"
                check_hlds__inst_match__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 406 "inst_match.m"
                check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 406 "inst_match.m"
                check_hlds__inst_match__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 406 "inst_match.m"
                check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 406 "inst_match.m"
                {
#line 406 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_14));
#line 406 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 1) = ((MR_Box) (check_hlds__inst_match__V_42_42));
#line 406 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 2) = ((MR_Box) (check_hlds__inst_match__V_43_43));
#line 406 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 3) = ((MR_Box) ((check_hlds__inst_match__V_44_44 | ((((check_hlds__inst_match__V_45_45 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_46_46 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_47_47 << (MR_Integer) 4)))))))));
#line 406 "inst_match.m"
                }
#line 13767 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_77_77 = (MR_Word) &check_hlds__inst_match_scalar_common_1[0];
#line 13769 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_78_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 407 "inst_match.m"
                {
#line 407 "inst_match.m"
                  mercury__map__det_update_4_p_0(check_hlds__inst_match__TypeInfo_77_77, check_hlds__inst_match__TypeCtorInfo_78_78, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__Inst_13)), check_hlds__inst_match__InstVarSub0_10, &check_hlds__inst_match__InstVarSub_15);
                }
#line 408 "inst_match.m"
                {
#line 408 "inst_match.m"
                  check_hlds__inst_match__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "inst_match.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_24_24, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_15));
#line 408 "inst_match.m"
                }
#line 408 "inst_match.m"
                check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 408 "inst_match.m"
                check_hlds__inst_match__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 408 "inst_match.m"
                check_hlds__inst_match__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 408 "inst_match.m"
                check_hlds__inst_match__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 408 "inst_match.m"
                check_hlds__inst_match__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 408 "inst_match.m"
                check_hlds__inst_match__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 408 "inst_match.m"
                check_hlds__inst_match__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 408 "inst_match.m"
                {
#line 408 "inst_match.m"
                  MR_Word base;
#line 408 "inst_match.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 408 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 408 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_48_48));
#line 408 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_49_49));
#line 408 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_24_24));
#line 408 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_51_51 | ((((check_hlds__inst_match__V_52_52 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_53_53 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_54_54 << (MR_Integer) 4)))))))));
#line 408 "inst_match.m"
                }
#line 408 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 403 "inst_match.m"
              }
#line 403 "inst_match.m"
          }
#line 409 "inst_match.m"
        else
#line 410 "inst_match.m"
          {
#line 410 "inst_match.m"
            MR_Word check_hlds__inst_match__V_26_26;
#line 410 "inst_match.m"
            MR_Word check_hlds__inst_match__InstVarSub_27;
#line 411 "inst_match.m"
            MR_Word check_hlds__inst_match__V_55_55;
#line 411 "inst_match.m"
            MR_Word check_hlds__inst_match__V_56_56;
#line 411 "inst_match.m"
            MR_Word check_hlds__inst_match__V_58_58;
#line 411 "inst_match.m"
            MR_Word check_hlds__inst_match__V_59_59;
#line 411 "inst_match.m"
            MR_Word check_hlds__inst_match__V_60_60;
#line 411 "inst_match.m"
            MR_Word check_hlds__inst_match__V_61_61;
#line 411 "inst_match.m"
            MR_Word check_hlds__inst_match__V_57_57;

#line 410 "inst_match.m"
            {
#line 410 "inst_match.m"
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__InstA_6)), check_hlds__inst_match__InstVarSub0_10, &check_hlds__inst_match__InstVarSub_27);
            }
#line 411 "inst_match.m"
            {
#line 411 "inst_match.m"
              check_hlds__inst_match__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "inst_match.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_26_26, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_27));
#line 411 "inst_match.m"
            }
#line 411 "inst_match.m"
            check_hlds__inst_match__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 411 "inst_match.m"
            check_hlds__inst_match__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 411 "inst_match.m"
            check_hlds__inst_match__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 411 "inst_match.m"
            check_hlds__inst_match__V_58_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 411 "inst_match.m"
            check_hlds__inst_match__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 411 "inst_match.m"
            check_hlds__inst_match__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 411 "inst_match.m"
            check_hlds__inst_match__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 411 "inst_match.m"
            {
#line 411 "inst_match.m"
              MR_Word base;
#line 411 "inst_match.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 411 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 411 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_55_55));
#line 411 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_56_56));
#line 411 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_26_26));
#line 411 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_58_58 | ((((check_hlds__inst_match__V_59_59 << (MR_Integer) 2)) | ((((check_hlds__inst_match__V_60_60 << (MR_Integer) 3)) | ((check_hlds__inst_match__V_61_61 << (MR_Integer) 4)))))))));
#line 411 "inst_match.m"
            }
#line 410 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 410 "inst_match.m"
          }
#line 398 "inst_match.m"
      }
#line 398 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 398 "inst_match.m"
  }
#line 393 "inst_match.m"
}

#line 187 "inst_match.m"
void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_3_p_0(
#line 187 "inst_match.m"
  MR_Word check_hlds__inst_match__Modes_4,
#line 187 "inst_match.m"
  MR_Word check_hlds__inst_match___ModuleInfo_5,
#line 187 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_6,
#line 187 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 187 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 187 "inst_match.m"
{
#line 1401 "inst_match.m"
  {
#line 1401 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1401 "inst_match.m"
    {
#line 1401 "inst_match.m"
      check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_108_105_115_116_95_99_111_110_116_97_105_110_115_95_105_110_115_116_95_118_97_114_95_95_91_50_93_95_48_3_p_0(check_hlds__inst_match__Modes_4, check_hlds__inst_match__InstVar_6, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
    }
#line 1401 "inst_match.m"
  }
#line 187 "inst_match.m"
}

#line 179 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_matches_3_p_0(
#line 179 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInstA_4,
#line 179 "inst_match.m"
  MR_Word check_hlds__inst_match__PredInstB_5,
#line 179 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 179 "inst_match.m"
{
#line 737 "inst_match.m"
  {
#line 737 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__TypeCtorInfo_21_42;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_12;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__PredOrFunc_33;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__ModesA_34;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__Det_36;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__ModesB_37;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__MaybeTypes_39;
#line 737 "inst_match.m"
    MR_Integer check_hlds__inst_match__V_40_40;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__V_43_43;
#line 737 "inst_match.m"
    MR_Word check_hlds__inst_match__V_44_44;
#line 762 "inst_match.m"
    MR_Word check_hlds__inst_match___MaybeArgRegsA_35;
#line 763 "inst_match.m"
    MR_Word check_hlds__inst_match___MaybeArgRegsB_38;
#line 765 "inst_match.m"
    MR_Word check_hlds__inst_match__V_13_13;

#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_25_25 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 762 "inst_match.m"
    check_hlds__inst_match__PredOrFunc_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 0)));
#line 762 "inst_match.m"
    check_hlds__inst_match__ModesA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 1)));
#line 762 "inst_match.m"
    check_hlds__inst_match___MaybeArgRegsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 2)));
#line 762 "inst_match.m"
    check_hlds__inst_match__Det_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 3)));
#line 763 "inst_match.m"
    check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 0)));
#line 763 "inst_match.m"
    check_hlds__inst_match__ModesB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 1)));
#line 763 "inst_match.m"
    check_hlds__inst_match___MaybeArgRegsB_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 2)));
#line 763 "inst_match.m"
    check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 3)));
#line 763 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_33 == check_hlds__inst_match__V_43_43);
#line 737 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 737 "inst_match.m"
      {
#line 763 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_36 == check_hlds__inst_match__V_44_44);
#line 737 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 737 "inst_match.m"
          {
#line 14010 "check_hlds.inst_match.c"
            check_hlds__inst_match__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 285 "inst_match.m"
            {
#line 285 "inst_match.m"
              check_hlds__inst_match__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_6));
#line 285 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 1) = ((MR_Box) (check_hlds__inst_match__V_25_25));
#line 285 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
            }
#line 764 "inst_match.m"
            {
#line 764 "inst_match.m"
              check_hlds__inst_match__V_40_40 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_42, check_hlds__inst_match__ModesA_34);
            }
#line 764 "inst_match.m"
            {
#line 764 "inst_match.m"
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__V_40_40, &check_hlds__inst_match__MaybeTypes_39);
            }
#line 765 "inst_match.m"
            {
#line 765 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_34, check_hlds__inst_match__ModesB_37, check_hlds__inst_match__MaybeTypes_39, check_hlds__inst_match__Info0_12, &check_hlds__inst_match__V_13_13);
            }
#line 737 "inst_match.m"
          }
#line 737 "inst_match.m"
      }
#line 737 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 737 "inst_match.m"
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
#line 1131 "inst_match.m"
  {
#line 1131 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1131 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1131 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 1131 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 1134 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 1134 "inst_match.m"
    {
#line 1134 "inst_match.m"
      check_hlds__inst_match__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_16_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1134 "inst_match.m"
    }
#line 1134 "inst_match.m"
    {
#line 1134 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_16_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1131 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1131 "inst_match.m"
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
#line 1126 "inst_match.m"
  {
#line 1126 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1126 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1126 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 1126 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 1129 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 1129 "inst_match.m"
    {
#line 1129 "inst_match.m"
      check_hlds__inst_match__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_16_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1129 "inst_match.m"
    }
#line 1129 "inst_match.m"
    {
#line 1129 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_16_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1126 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1126 "inst_match.m"
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
#line 825 "inst_match.m"
  {
#line 825 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 825 "inst_match.m"
#line 825 "inst_match.m"
    switch (check_hlds__inst_match__A_3) {
#line 825 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 825 "inst_match.m"
      case (MR_Integer) 3:
#line 835 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__B_4 == (MR_Integer) 3);
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
      case (MR_Integer) 4:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
        switch (check_hlds__inst_match__B_4) {
#line 825 "inst_match.m"
          default:
#line 825 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 3:
#line 834 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 4:
#line 833 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
        }
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
      case (MR_Integer) 2:
#line 825 "inst_match.m"
        if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__B_4))))
#line 825 "inst_match.m"
          {
#line 825 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
          }
#line 825 "inst_match.m"
        else
#line 825 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
      case (MR_Integer) 0:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
        switch (check_hlds__inst_match__B_4) {
#line 825 "inst_match.m"
          default:
#line 825 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 3:
#line 832 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 4:
#line 831 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 0:
#line 830 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
        }
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
      case (MR_Integer) 1:
#line 825 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
    }
#line 825 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 825 "inst_match.m"
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
#line 825 "inst_match.m"
  {
#line 825 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 825 "inst_match.m"
#line 825 "inst_match.m"
    switch (check_hlds__inst_match__HeadVar__1_1) {
#line 825 "inst_match.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 825 "inst_match.m"
      case (MR_Integer) 3:
#line 835 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 3);
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
      case (MR_Integer) 4:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
        switch (check_hlds__inst_match__HeadVar__2_2) {
#line 825 "inst_match.m"
          default:
#line 825 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 3:
#line 834 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 4:
#line 833 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
        }
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
      case (MR_Integer) 2:
#line 825 "inst_match.m"
        if (((MR_Integer) 29 & (((MR_Integer) 1 << check_hlds__inst_match__HeadVar__2_2))))
#line 825 "inst_match.m"
          {
#line 825 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
          }
#line 825 "inst_match.m"
        else
#line 825 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
      case (MR_Integer) 0:
#line 825 "inst_match.m"
#line 825 "inst_match.m"
        switch (check_hlds__inst_match__HeadVar__2_2) {
#line 825 "inst_match.m"
          default:
#line 825 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 3:
#line 832 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 4:
#line 831 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
          case (MR_Integer) 0:
#line 830 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
            break;
#line 825 "inst_match.m"
        }
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
      case (MR_Integer) 1:
#line 825 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 825 "inst_match.m"
        break;
#line 825 "inst_match.m"
    }
#line 825 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 825 "inst_match.m"
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
#line 1121 "inst_match.m"
  {
#line 1121 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1121 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1121 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 1121 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 1124 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 1124 "inst_match.m"
    {
#line 1124 "inst_match.m"
      check_hlds__inst_match__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_16_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1124 "inst_match.m"
    }
#line 1124 "inst_match.m"
    {
#line 1124 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_16_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1121 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1121 "inst_match.m"
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
#line 925 "inst_match.m"
  {
#line 925 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 925 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_11;
#line 925 "inst_match.m"
    MR_Word check_hlds__inst_match__V_17_17;
#line 925 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24;
#line 928 "inst_match.m"
    MR_Word check_hlds__inst_match__V_12_12;

#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_24_24 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_9));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 1) = ((MR_Box) (check_hlds__inst_match__V_24_24));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_11, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | ((check_hlds__inst_match__GroundMatchesBound_10 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 928 "inst_match.m"
    {
#line 928 "inst_match.m"
      check_hlds__inst_match__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 928 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_17_17, 0) = ((MR_Box) (check_hlds__inst_match__Type_8));
#line 928 "inst_match.m"
    }
#line 928 "inst_match.m"
    {
#line 928 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7, check_hlds__inst_match__V_17_17, check_hlds__inst_match__Info0_11, &check_hlds__inst_match__V_12_12);
    }
#line 925 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 925 "inst_match.m"
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
#line 921 "inst_match.m"
  {
#line 921 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 922 "inst_match.m"
    {
#line 922 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_gmb_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__Type_7, check_hlds__inst_match__ModuleInfo_8, (MR_Integer) 0);
    }
#line 921 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 921 "inst_match.m"
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
#line 916 "inst_match.m"
  {
#line 916 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 916 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_7;
#line 916 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21;
#line 919 "inst_match.m"
    MR_Word check_hlds__inst_match__V_8_8;

#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_21_21 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_6));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 1) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 919 "inst_match.m"
    {
#line 919 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_4, check_hlds__inst_match__InstB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Info0_7, &check_hlds__inst_match__V_8_8);
    }
#line 916 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 916 "inst_match.m"
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
#line 440 "inst_match.m"
  {
#line 440 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 440 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_13;
#line 440 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_14;
#line 440 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19;
#line 440 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24;
#line 440 "inst_match.m"
    MR_Word check_hlds__inst_match__V_29_29;
#line 440 "inst_match.m"
    MR_Word check_hlds__inst_match__V_46_46;
#line 444 "inst_match.m"
    MR_Word check_hlds__inst_match__V_28_28;
#line 444 "inst_match.m"
    MR_Word check_hlds__inst_match__V_30_30;
#line 444 "inst_match.m"
    MR_Word check_hlds__inst_match__V_31_31;
#line 444 "inst_match.m"
    MR_Word check_hlds__inst_match__V_32_32;
#line 444 "inst_match.m"
    MR_Word check_hlds__inst_match__V_33_33;

#line 441 "inst_match.m"
    {
#line 441 "inst_match.m"
      check_hlds__inst_match__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_19_19, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Sub_0_17));
#line 441 "inst_match.m"
    }
#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_46_46 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_15));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 1) = ((MR_Box) (check_hlds__inst_match__V_46_46));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 2) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 443 "inst_match.m"
    {
#line 443 "inst_match.m"
      check_hlds__inst_match__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 443 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_24_24, 0) = ((MR_Box) (check_hlds__inst_match__Type_10));
#line 443 "inst_match.m"
    }
#line 443 "inst_match.m"
    {
#line 443 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_8, check_hlds__inst_match__InstB_9, check_hlds__inst_match__V_24_24, check_hlds__inst_match__Info0_13, &check_hlds__inst_match__Info_14);
    }
#line 440 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 440 "inst_match.m"
      {
#line 444 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 0)));
#line 444 "inst_match.m"
        check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 1)));
#line 444 "inst_match.m"
        check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 2)));
#line 444 "inst_match.m"
        check_hlds__inst_match__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 444 "inst_match.m"
        check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 444 "inst_match.m"
        check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 444 "inst_match.m"
        check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 445 "inst_match.m"
        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 445 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 445 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Sub_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_29_29, (MR_Integer) 0)));
#line 440 "inst_match.m"
      }
#line 440 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 440 "inst_match.m"
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
#line 434 "inst_match.m"
  {
#line 434 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 434 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 434 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16;
#line 434 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 437 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 437 "inst_match.m"
    {
#line 437 "inst_match.m"
      check_hlds__inst_match__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 437 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_16_16, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 437 "inst_match.m"
    }
#line 437 "inst_match.m"
    {
#line 437 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_16_16, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 434 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 434 "inst_match.m"
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
#line 424 "inst_match.m"
  {
#line 424 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 424 "inst_match.m"
    MR_Word check_hlds__inst_match__MaybeSub_13;
#line 424 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19;
#line 424 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_33;
#line 424 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_34;
#line 424 "inst_match.m"
    MR_Word check_hlds__inst_match__V_39_39;
#line 424 "inst_match.m"
    MR_Word check_hlds__inst_match__V_60_60;
#line 455 "inst_match.m"
    MR_Word check_hlds__inst_match__V_42_42;
#line 455 "inst_match.m"
    MR_Word check_hlds__inst_match__V_44_44;
#line 455 "inst_match.m"
    MR_Word check_hlds__inst_match__V_45_45;
#line 455 "inst_match.m"
    MR_Word check_hlds__inst_match__V_46_46;
#line 455 "inst_match.m"
    MR_Word check_hlds__inst_match__V_47_47;

#line 426 "inst_match.m"
    {
#line 426 "inst_match.m"
      check_hlds__inst_match__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_19_19, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Sub_0_16));
#line 426 "inst_match.m"
    }
#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_60_60 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_14));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 1) = ((MR_Box) (check_hlds__inst_match__V_60_60));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 2) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 454 "inst_match.m"
    {
#line 454 "inst_match.m"
      check_hlds__inst_match__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 454 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_39_39, 0) = ((MR_Box) (check_hlds__inst_match__Type_10));
#line 454 "inst_match.m"
    }
#line 454 "inst_match.m"
    {
#line 454 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_8, check_hlds__inst_match__InstB_9, check_hlds__inst_match__V_39_39, check_hlds__inst_match__Info0_33, &check_hlds__inst_match__Info_34);
    }
#line 424 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 424 "inst_match.m"
      {
#line 455 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 0)));
#line 455 "inst_match.m"
        check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 1)));
#line 455 "inst_match.m"
        check_hlds__inst_match__MaybeSub_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 2)));
#line 455 "inst_match.m"
        check_hlds__inst_match__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 455 "inst_match.m"
        check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 455 "inst_match.m"
        check_hlds__inst_match__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 455 "inst_match.m"
        check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 429 "inst_match.m"
        if ((check_hlds__inst_match__MaybeSub_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "inst_match.m"
          {
#line 431 "inst_match.m"
            {
#line 431 "inst_match.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_sub\'/7", (MR_String) "missing inst_var_sub");
            }
#line 430 "inst_match.m"
          }
#line 429 "inst_match.m"
        else
#line 428 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Sub_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeSub_13, (MR_Integer) 0)));
#line 429 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 424 "inst_match.m"
      }
#line 424 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 424 "inst_match.m"
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
#line 421 "inst_match.m"
  {
#line 421 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 421 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_21;
#line 421 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27;
#line 421 "inst_match.m"
    MR_Word check_hlds__inst_match__V_48_48;
#line 454 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_22;

#line 228 "inst_match.m"
    {
#line 228 "inst_match.m"
      check_hlds__inst_match__V_48_48 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 285 "inst_match.m"
    {
#line 285 "inst_match.m"
      check_hlds__inst_match__Info0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 1) = ((MR_Box) (check_hlds__inst_match__V_48_48));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))));
#line 285 "inst_match.m"
    }
#line 454 "inst_match.m"
    {
#line 454 "inst_match.m"
      check_hlds__inst_match__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 454 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_27_27, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 454 "inst_match.m"
    }
#line 454 "inst_match.m"
    {
#line 454 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_27_27, check_hlds__inst_match__Info0_21, &check_hlds__inst_match__Info_22);
    }
#line 421 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 421 "inst_match.m"
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
