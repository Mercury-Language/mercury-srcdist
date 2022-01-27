/*
** Automatically generated from `inst_match.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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
#include "set_tree234.mih"
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
#include "check_hlds.delay_info.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 2608 "inst_match.m"
struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s {
#line 2608 "inst_match.m"
  MR_Word * check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4;
#line 2608 "inst_match.m"
  MR_Cont check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont;
#line 2608 "inst_match.m"
  void * check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr;
#line 2610 "inst_match.m"
  MR_bool check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__succeeded;
#line 2610 "inst_match.m"
  MR_Word check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7;
#line 2616 "inst_match.m"
  MR_Box check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7;
#line 2608 "inst_match.m"
};

#line 802 "inst_match.m"
struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s {
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5;
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6;
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8;
#line 815 "inst_match.m"
  MR_bool check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
#line 818 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13;
#line 780 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0;
#line 788 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1;
#line 788 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23;
#line 788 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24;
#line 792 "inst_match.m"
  jmp_buf check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28;
#line 792 "inst_match.m"
  MR_Box check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27;
#line 802 "inst_match.m"
};

#line 774 "inst_match.m"
struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s {
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5;
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6;
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7;
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8;
#line 778 "inst_match.m"
  MR_bool check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
#line 780 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0;
#line 788 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1;
#line 788 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11;
#line 788 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12;
#line 792 "inst_match.m"
  jmp_buf check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15;
#line 792 "inst_match.m"
  MR_Word check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16;
#line 792 "inst_match.m"
  MR_Box check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15;
#line 774 "inst_match.m"
};


#line 230 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 233 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 236 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 239 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0;

#line 242 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1;

#line 245 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2;

#line 248 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0[3];

#line 251 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3];

#line 254 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3];

#line 257 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;

#line 260 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 263 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 266 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 269 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[6];

#line 272 "check_hlds.inst_match.c"
static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[6];

#line 275 "check_hlds.inst_match.c"
static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[6];

#line 278 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0;

#line 281 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1];

#line 284 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1];

#line 287 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1];

#line 290 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1];

#line 293 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 296 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3];

#line 299 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0;

#line 302 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1];

#line 305 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1];

#line 308 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1];

#line 311 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1];

#line 314 "check_hlds.inst_match.c"
static const MR_VA_TypeInfo_Struct5 check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0;

#line 317 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 320 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0;

#line 323 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1;

#line 326 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0[2];

#line 329 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2];

#line 332 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2];

#line 335 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
#line 338 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 340 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 343 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
#line 346 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 348 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 350 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 353 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
#line 356 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 358 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 361 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
#line 364 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 366 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 368 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 371 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
#line 374 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 376 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 379 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
#line 382 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 384 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 386 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 389 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
#line 392 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 394 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 397 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
#line 400 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 402 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 404 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 407 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
#line 410 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 412 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 415 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
#line 418 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 420 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 422 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 425 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_names_0_0_10001(
#line 428 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 430 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 433 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_names_0_0_10001(
#line 436 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 438 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 440 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 443 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
#line 446 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 448 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 451 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
#line 454 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 456 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 458 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3);

#line 443 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 443 "inst_match.m"
  MR_Word check_hlds__inst_match__V_30_30,
#line 443 "inst_match.m"
  MR_Word check_hlds__inst_match__V_31_31,
#line 443 "inst_match.m"
  MR_Word check_hlds__inst_match__V_32_32,
#line 443 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_7,
#line 443 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_8);

#line 459 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__swap_args__ho12_6_p_0(
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_12,
#line 459 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_13);

#line 459 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__swap_args__ho11_6_p_0(
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_12,
#line 459 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_13);

#line 459 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__swap_args__ho10_6_p_0(
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_12,
#line 459 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_13);

#line 459 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__swap_args__ho9_6_p_0(
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_12,
#line 459 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_13);

#line 528 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 528 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 489 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 489 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 528 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 528 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 489 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 489 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 528 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 528 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 489 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 489 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 528 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 528 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3);

#line 489 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 489 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24);

#line 468 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 468 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 468 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho1_7_p_0(
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 468 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 395 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
#line 395 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 395 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 395 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 395 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
#line 395 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 395 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 2390 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_names_0_0(
#line 2390 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 2390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 2390 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_names_0_0(
#line 2390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 438 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
#line 438 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 438 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 438 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 438 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
#line 438 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 438 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 348 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
#line 348 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 348 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 348 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 348 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
#line 348 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 348 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 404 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
#line 404 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 404 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 404 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 404 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
#line 404 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 404 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 355 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
#line 355 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 355 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 355 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 355 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
#line 355 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 355 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 416 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
#line 416 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 416 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 416 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3);

#line 416 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
#line 416 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 416 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2);

#line 2689 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
#line 2689 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_1,
#line 2689 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_2);

#line 2631 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__maybe_any_to_bound_5_p_0(
#line 2631 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2631 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_7,
#line 2631 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_8,
#line 2631 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__4_4,
#line 2631 "inst_match.m"
  MR_Word * check_hlds__inst_match__Inst_9);

#line 2610 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(
#line 2610 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 2616 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_2(
#line 2616 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 2608 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0(
#line 2608 "inst_match.m"
  MR_Word check_hlds__inst_match__Mode_3,
#line 2608 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 2608 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2608 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 2598 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(
#line 2598 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2598 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 2598 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2598 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 2585 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
#line 2585 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2585 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 2585 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2585 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 2574 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
#line 2574 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2574 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 2574 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2574 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 2546 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
#line 2546 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_3,
#line 2546 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 2546 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2546 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 2509 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
#line 2509 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_3,
#line 2509 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 2509 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2509 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr);

#line 2490 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_instname_6_p_0(
#line 2490 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2490 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2490 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 2490 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__4_4,
#line 2490 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5,
#line 2490 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_6);

#line 2471 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_instname_6_p_0(
#line 2471 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2471 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2471 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 2471 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__4_4,
#line 2471 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5,
#line 2471 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_6);

#line 2392 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_instname_2_6_p_0(
#line 2392 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_7,
#line 2392 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8,
#line 2392 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_9,
#line 2392 "inst_match.m"
  MR_Word * check_hlds__inst_match__Contains_10,
#line 2392 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32,
#line 2392 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_33);

#line 2338 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_not_fully_unique_2_4_p_0(
#line 2338 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2338 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2338 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2338 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2330 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_not_partly_unique_2_4_p_0(
#line 2330 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2330 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2330 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2330 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2322 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_mostly_unique_2_4_p_0(
#line 2322 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2322 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2322 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2322 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2314 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_unique_2_4_p_0(
#line 2314 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2314 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2314 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2314 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2306 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_or_any_2_4_p_0(
#line 2306 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2306 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2306 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2306 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2292 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_mt_2_5_p_0(
#line 2292 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2292 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2292 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 2292 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4,
#line 2292 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_5);

#line 2252 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_mt_3_p_0(
#line 2252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2252 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3);

#line 2239 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_not_fully_unique_2_4_p_0(
#line 2239 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2239 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2239 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2239 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2228 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_not_partly_unique_2_4_p_0(
#line 2228 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2228 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2228 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2228 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2218 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_mostly_unique_2_4_p_0(
#line 2218 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2218 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2218 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2218 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2208 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_unique_2_4_p_0(
#line 2208 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2208 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2208 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2208 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2198 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_4_p_0(
#line 2198 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2198 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2198 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2198 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4);

#line 2171 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(
#line 2171 "inst_match.m"
  MR_Word check_hlds__inst_match__InstResults_6,
#line 2171 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_7,
#line 2171 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8,
#line 2171 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_14,
#line 2171 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_15);

#line 2157 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_ground_mt_2_5_p_0(
#line 2157 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2157 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_2,
#line 2157 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 2157 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4,
#line 2157 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_5);

#line 2129 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__InstResults_7,
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_8,
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_9,
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_10,
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_16,
#line 2129 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_17);

#line 2072 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(
#line 2072 "inst_match.m"
  MR_Word check_hlds__inst_match__InstResults_4,
#line 2072 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_5,
#line 2072 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6);

#line 2060 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_ground_mt_3_p_0(
#line 2060 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2060 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_2,
#line 2060 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3);

#line 2035 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(
#line 2035 "inst_match.m"
  MR_Word check_hlds__inst_match__InstResults_5,
#line 2035 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_6,
#line 2035 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 2035 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8);

#line 1980 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_not_fully_unique_2_4_p_0(
#line 1980 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1980 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1980 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27,
#line 1980 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_28);

#line 1924 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_not_partly_unique_2_4_p_0(
#line 1924 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1924 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1924 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24,
#line 1924 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_25);

#line 1866 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_mostly_unique_2_4_p_0(
#line 1866 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1866 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1866 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26,
#line 1866 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_27);

#line 1816 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_unique_2_4_p_0(
#line 1816 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1816 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1816 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25,
#line 1816 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_26);

#line 1773 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_ground_or_any_2_4_p_0(
#line 1773 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1773 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1773 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23,
#line 1773 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_24);

#line 1726 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_ground_mt_2_5_p_0(
#line 1726 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 1726 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 1726 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_8,
#line 1726 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25,
#line 1726 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_26);

#line 1670 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__record_inst_is_ground_2_p_0(
#line 1670 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_1,
#line 1670 "inst_match.m"
  MR_Word check_hlds__inst_match__IsGround_2);

#line 1644 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__lookup_inst_is_ground_3_p_0(
#line 1644 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_1,
#line 1644 "inst_match.m"
  MR_Word * check_hlds__inst_match__Found_2,
#line 1644 "inst_match.m"
  MR_Word * check_hlds__inst_match__IsGround_3);

#line 1397 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
#line 1397 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1397 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1397 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1397 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1397 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1380 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
#line 1380 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1380 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1380 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1380 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1380 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1360 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
#line 1360 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_5,
#line 1360 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_6,
#line 1360 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 1360 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8);

#line 1268 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
#line 1268 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1268 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1268 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1268 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 1268 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42);

#line 1251 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
#line 1251 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1251 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1251 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1251 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 1251 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 1217 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
#line 1217 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1217 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1217 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1217 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1217 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1200 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
#line 1200 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1200 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1200 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1200 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1200 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1179 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
#line 1179 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 1179 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 1179 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1179 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 1179 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

#line 1067 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
#line 1067 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1067 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1067 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1067 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_40,
#line 1067 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_41);

#line 1046 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
#line 1046 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1046 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1046 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1046 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 1046 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 1026 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
#line 1026 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1026 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1026 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1026 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1026 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 1004 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
#line 1004 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1004 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1004 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1004 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1004 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 984 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
#line 984 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_4,
#line 984 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_5,
#line 984 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6);

#line 972 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
#line 972 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_4,
#line 972 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_5,
#line 972 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6);

#line 964 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
#line 964 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 964 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_2,
#line 964 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_3,
#line 964 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4);

#line 939 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
#line 939 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 939 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_2,
#line 939 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_3);

#line 917 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
#line 917 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 917 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 917 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 917 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 917 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 855 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
#line 855 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 855 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 855 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 855 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 855 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17);

#line 797 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 780 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
#line 780 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 780 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
#line 780 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 802 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_7,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8);

#line 797 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2);

#line 780 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
#line 780 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 780 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
#line 780 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg);

#line 774 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_7,
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8);

#line 758 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
#line 758 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 758 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 758 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 758 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 758 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 745 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
#line 745 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 745 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 745 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 745 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 745 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5);

#line 613 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
#line 613 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 613 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 613 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 613 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_50,
#line 613 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_51);

#line 597 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
#line 597 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 597 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 597 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 597 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 597 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16);

#line 533 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
#line 533 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 533 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 533 "inst_match.m"
  MR_Word check_hlds__inst_match__InstVar_8,
#line 533 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 533 "inst_match.m"
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
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



#include "check_hlds.inst_match.mh"
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



#line 1817 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1825 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1833 "check_hlds.inst_match.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_match__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1841 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0 = {
  (MR_String) "cs_forward",
  (MR_Integer) 0
};

#line 1847 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1 = {
  (MR_String) "cs_reverse",
  (MR_Integer) 1
};

#line 1853 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2 = {
  (MR_String) "cs_none",
  (MR_Integer) 2
};

#line 1859 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2
};

#line 1866 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0[3] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_2,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_calculate_sub_0_1
};

#line 1873 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1880 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____calculate_sub_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____calculate_sub_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "calculate_sub",
  {
    check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_calculate_sub_0
  },
  {
    check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_calculate_sub_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_calculate_sub_0
};

#line 1901 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0
  }
};

#line 1909 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_expansions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____expansions_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____expansions_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "expansions",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1930 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1938 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__inst_match__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1947 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__inst_match__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1955 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__set_tree234__ti_set_tree234_1check_hlds__inst_match__type_ctor_info_inst_match_inputs_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_calculate_sub_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1965 "check_hlds.inst_match.c"
static const MR_ConstString check_hlds__inst_match__check_hlds__inst_match__field_names_inst_match_info_0_0[6] = {
  (MR_String) "imi_module_info",
  (MR_String) "imi_expansions",
  (MR_String) "imi_maybe_sub",
  (MR_String) "imi_calculate_sub",
  (MR_String) "imi_uniqueness_comparison",
  (MR_String) "imi_any_matches_any"
};

#line 1975 "check_hlds.inst_match.c"
static const MR_DuArgLocn check_hlds__inst_match__check_hlds__inst_match__field_locns_inst_match_info_0_0[6] = {
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
  }
};

#line 2009 "check_hlds.inst_match.c"
static const MR_DuFunctorDesc check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0 = {
  (MR_String) "inst_match_info",
  (MR_Integer) 6,
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

#line 2024 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

#line 2029 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_info_0_0
  }
};

#line 2038 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_info_0_0
};

#line 2043 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0[1] = {
  (MR_Integer) 0
};

#line 2048 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_info_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_info_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_info",
  {
    check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_info_0
  },
  {
    check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_info_0
};

#line 2069 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2077 "check_hlds.inst_match.c"
static const MR_PseudoTypeInfo check_hlds__inst_match__check_hlds__inst_match__field_types_inst_match_inputs_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_match__maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2084 "check_hlds.inst_match.c"
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

#line 2099 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

#line 2104 "check_hlds.inst_match.c"
static const MR_DuPtagLayout check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__inst_match__check_hlds__inst_match__du_stag_ordered_inst_match_inputs_0_0
  }
};

#line 2113 "check_hlds.inst_match.c"
static const MR_DuFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0[1] = {
  &check_hlds__inst_match__check_hlds__inst_match__du_functor_desc_inst_match_inputs_0_0
};

#line 2118 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0[1] = {
  (MR_Integer) 0
};

#line 2123 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_match_inputs",
  {
    check_hlds__inst_match__check_hlds__inst_match__du_name_ordered_inst_match_inputs_0
  },
  {
    check_hlds__inst_match__check_hlds__inst_match__du_ptag_ordered_inst_match_inputs_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_inst_match_inputs_0
};

#line 2144 "check_hlds.inst_match.c"
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

#line 2157 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_matches_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_matches_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_match____vti_pred_5parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0maybe__ti_maybe_1parse_tree__prog_data__type_ctor_info_mer_type_0check_hlds__inst_match__type_ctor_info_inst_match_info_0check_hlds__inst_match__type_ctor_info_inst_match_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2178 "check_hlds.inst_match.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__inst_match__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 2186 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_names_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_match____Unify____inst_names_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____inst_names_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "inst_names",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_match__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2207 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0 = {
  (MR_String) "uc_match",
  (MR_Integer) 0
};

#line 2213 "check_hlds.inst_match.c"
static const MR_EnumFunctorDesc check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1 = {
  (MR_String) "uc_instantiated",
  (MR_Integer) 1
};

#line 2219 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1
};

#line 2225 "check_hlds.inst_match.c"
static const MR_EnumFunctorDescPtr check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0[2] = {
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_1,
  &check_hlds__inst_match__check_hlds__inst_match__enum_functor_desc_uniqueness_comparison_0_0
};

#line 2231 "check_hlds.inst_match.c"
static const MR_Integer check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2237 "check_hlds.inst_match.c"
const MR_TypeCtorInfo_Struct check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001)),
  (MR_String) "check_hlds.inst_match",
  (MR_String) "uniqueness_comparison",
  {
    check_hlds__inst_match__check_hlds__inst_match__enum_name_ordered_uniqueness_comparison_0
  },
  {
    check_hlds__inst_match__check_hlds__inst_match__enum_value_ordered_uniqueness_comparison_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_match__check_hlds__inst_match__functor_number_map_uniqueness_comparison_0
};

#line 2258 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0_10001(
#line 2261 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2263 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2265 "check_hlds.inst_match.c"
{
#line 2267 "check_hlds.inst_match.c"
  {
#line 2269 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2272 "check_hlds.inst_match.c"
    {
#line 2274 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____calculate_sub_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2277 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2279 "check_hlds.inst_match.c"
  }
#line 2281 "check_hlds.inst_match.c"
}

#line 2284 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0_10001(
#line 2287 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2289 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2291 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2293 "check_hlds.inst_match.c"
{
#line 2295 "check_hlds.inst_match.c"
  {
#line 2297 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2300 "check_hlds.inst_match.c"
    {
#line 2302 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____calculate_sub_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2305 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2307 "check_hlds.inst_match.c"
  }
#line 2309 "check_hlds.inst_match.c"
}

#line 2312 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0_10001(
#line 2315 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2317 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2319 "check_hlds.inst_match.c"
{
#line 2321 "check_hlds.inst_match.c"
  {
#line 2323 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2326 "check_hlds.inst_match.c"
    {
#line 2328 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____expansions_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2331 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2333 "check_hlds.inst_match.c"
  }
#line 2335 "check_hlds.inst_match.c"
}

#line 2338 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0_10001(
#line 2341 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2343 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2345 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2347 "check_hlds.inst_match.c"
{
#line 2349 "check_hlds.inst_match.c"
  {
#line 2351 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2354 "check_hlds.inst_match.c"
    {
#line 2356 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____expansions_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2359 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2361 "check_hlds.inst_match.c"
  }
#line 2363 "check_hlds.inst_match.c"
}

#line 2366 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0_10001(
#line 2369 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2371 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2373 "check_hlds.inst_match.c"
{
#line 2375 "check_hlds.inst_match.c"
  {
#line 2377 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2380 "check_hlds.inst_match.c"
    {
#line 2382 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_match_info_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2385 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2387 "check_hlds.inst_match.c"
  }
#line 2389 "check_hlds.inst_match.c"
}

#line 2392 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0_10001(
#line 2395 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2397 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2399 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2401 "check_hlds.inst_match.c"
{
#line 2403 "check_hlds.inst_match.c"
  {
#line 2405 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2408 "check_hlds.inst_match.c"
    {
#line 2410 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_match_info_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2413 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2415 "check_hlds.inst_match.c"
  }
#line 2417 "check_hlds.inst_match.c"
}

#line 2420 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0_10001(
#line 2423 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2425 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2427 "check_hlds.inst_match.c"
{
#line 2429 "check_hlds.inst_match.c"
  {
#line 2431 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2434 "check_hlds.inst_match.c"
    {
#line 2436 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_match_inputs_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2439 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2441 "check_hlds.inst_match.c"
  }
#line 2443 "check_hlds.inst_match.c"
}

#line 2446 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0_10001(
#line 2449 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2451 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2453 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2455 "check_hlds.inst_match.c"
{
#line 2457 "check_hlds.inst_match.c"
  {
#line 2459 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2462 "check_hlds.inst_match.c"
    {
#line 2464 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_match_inputs_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2467 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2469 "check_hlds.inst_match.c"
  }
#line 2471 "check_hlds.inst_match.c"
}

#line 2474 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0_10001(
#line 2477 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2479 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2481 "check_hlds.inst_match.c"
{
#line 2483 "check_hlds.inst_match.c"
  {
#line 2485 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2488 "check_hlds.inst_match.c"
    {
#line 2490 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_matches_pred_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2493 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2495 "check_hlds.inst_match.c"
  }
#line 2497 "check_hlds.inst_match.c"
}

#line 2500 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0_10001(
#line 2503 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2505 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2507 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2509 "check_hlds.inst_match.c"
{
#line 2511 "check_hlds.inst_match.c"
  {
#line 2513 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2516 "check_hlds.inst_match.c"
    {
#line 2518 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_matches_pred_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2521 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2523 "check_hlds.inst_match.c"
  }
#line 2525 "check_hlds.inst_match.c"
}

#line 2528 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_names_0_0_10001(
#line 2531 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2533 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2535 "check_hlds.inst_match.c"
{
#line 2537 "check_hlds.inst_match.c"
  {
#line 2539 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2542 "check_hlds.inst_match.c"
    {
#line 2544 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____inst_names_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2547 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2549 "check_hlds.inst_match.c"
  }
#line 2551 "check_hlds.inst_match.c"
}

#line 2554 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_names_0_0_10001(
#line 2557 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2559 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2561 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2563 "check_hlds.inst_match.c"
{
#line 2565 "check_hlds.inst_match.c"
  {
#line 2567 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2570 "check_hlds.inst_match.c"
    {
#line 2572 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____inst_names_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2575 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2577 "check_hlds.inst_match.c"
  }
#line 2579 "check_hlds.inst_match.c"
}

#line 2582 "check_hlds.inst_match.c"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0_10001(
#line 2585 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 2587 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 2589 "check_hlds.inst_match.c"
{
#line 2591 "check_hlds.inst_match.c"
  {
#line 2593 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded;

#line 2596 "check_hlds.inst_match.c"
    {
#line 2598 "check_hlds.inst_match.c"
      check_hlds__inst_match__succeeded = check_hlds__inst_match____Unify____uniqueness_comparison_0_0(((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 2601 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 2603 "check_hlds.inst_match.c"
  }
#line 2605 "check_hlds.inst_match.c"
}

#line 2608 "check_hlds.inst_match.c"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0_10001(
#line 2611 "check_hlds.inst_match.c"
  MR_Box * check_hlds__inst_match__wrapper_arg_1,
#line 2613 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 2615 "check_hlds.inst_match.c"
  MR_Box check_hlds__inst_match__wrapper_arg_3)
#line 2617 "check_hlds.inst_match.c"
{
#line 2619 "check_hlds.inst_match.c"
  {
#line 2621 "check_hlds.inst_match.c"
    MR_Word check_hlds__inst_match__conv0_HeadVar__1_1;

#line 2624 "check_hlds.inst_match.c"
    {
#line 2626 "check_hlds.inst_match.c"
      check_hlds__inst_match____Compare____uniqueness_comparison_0_0(&check_hlds__inst_match__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_match__wrapper_arg_2), ((MR_Word) check_hlds__inst_match__wrapper_arg_3));
    }
#line 2629 "check_hlds.inst_match.c"
    *check_hlds__inst_match__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_match__conv0_HeadVar__1_1));
#line 2631 "check_hlds.inst_match.c"
  }
#line 2633 "check_hlds.inst_match.c"
}

#line 443 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 443 "inst_match.m"
  MR_Word check_hlds__inst_match__V_30_30,
#line 443 "inst_match.m"
  MR_Word check_hlds__inst_match__V_31_31,
#line 443 "inst_match.m"
  MR_Word check_hlds__inst_match__V_32_32,
#line 443 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_7,
#line 443 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_8)
#line 443 "inst_match.m"
{
#line 447 "inst_match.m"
  {
#line 447 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_9_9;
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_11_11;
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 447 "inst_match.m"
    MR_Word check_hlds__inst_match__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 451 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24;
#line 451 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25;
#line 451 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26;
#line 451 "inst_match.m"
    MR_Word check_hlds__inst_match__V_28_28;
#line 451 "inst_match.m"
    MR_Word check_hlds__inst_match__V_29_29;
#line 451 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27;

#line 455 "inst_match.m"
    if ((check_hlds__inst_match__CalculateSub_6 == (MR_Integer) 0))
#line 455 "inst_match.m"
      check_hlds__inst_match__V_10_10 = (MR_Integer) 1;
#line 455 "inst_match.m"
    else
#line 455 "inst_match.m"
      if ((check_hlds__inst_match__CalculateSub_6 == (MR_Integer) 2))
#line 457 "inst_match.m"
        check_hlds__inst_match__V_10_10 = (MR_Integer) 2;
#line 455 "inst_match.m"
      else
#line 456 "inst_match.m"
        check_hlds__inst_match__V_10_10 = (MR_Integer) 0;
#line 449 "inst_match.m"
    {
#line 449 "inst_match.m"
      check_hlds__inst_match__STATE_VARIABLE_Info_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 449 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 0) = ((MR_Box) (check_hlds__inst_match__V_13_13));
#line 449 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 1) = ((MR_Box) (check_hlds__inst_match__V_14_14));
#line 449 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 2) = ((MR_Box) (check_hlds__inst_match__V_15_15));
#line 449 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_9_9, 3) = ((MR_Box) ((check_hlds__inst_match__V_10_10 | ((((check_hlds__inst_match__V_16_16 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_17_17 << (MR_Integer) 3)))))));
#line 449 "inst_match.m"
    }
#line 450 "inst_match.m"
    {
#line 450 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__V_30_30, check_hlds__inst_match__V_31_31, check_hlds__inst_match__V_32_32, check_hlds__inst_match__STATE_VARIABLE_Info_9_9, &check_hlds__inst_match__STATE_VARIABLE_Info_11_11);
    }
#line 447 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 447 "inst_match.m"
      {
#line 451 "inst_match.m"
        check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 0)));
#line 451 "inst_match.m"
        check_hlds__inst_match__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 1)));
#line 451 "inst_match.m"
        check_hlds__inst_match__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 2)));
#line 451 "inst_match.m"
        check_hlds__inst_match__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 451 "inst_match.m"
        check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 451 "inst_match.m"
        check_hlds__inst_match__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_11_11, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 451 "inst_match.m"
        {
#line 451 "inst_match.m"
          MR_Word base;
#line 451 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 451 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_8 = base;
#line 451 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_24_24));
#line 451 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_25_25));
#line 451 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_26_26));
#line 451 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__CalculateSub_6 | ((((check_hlds__inst_match__V_28_28 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_29_29 << (MR_Integer) 3)))))));
#line 451 "inst_match.m"
        }
#line 451 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 447 "inst_match.m"
      }
#line 447 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 447 "inst_match.m"
  }
#line 443 "inst_match.m"
}

#line 304 "inst_match.m"
void MR_CALL 
check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_108_105_115_116_95_99_111_110_116_97_105_110_115_95_105_110_115_116_95_118_97_114_95_95_91_50_93_95_48_3_p_0(
#line 304 "inst_match.m"
  MR_Word check_hlds__inst_match__Modes_4,
#line 304 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_6,
#line 304 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 304 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 304 "inst_match.m"
{
#line 2596 "inst_match.m"
  {
#line 2596 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2596 "inst_match.m"
    {
#line 2596 "inst_match.m"
      check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_4, check_hlds__inst_match__InstVar_6, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2596 "inst_match.m"
      return;
    }
#line 2596 "inst_match.m"
  }
#line 304 "inst_match.m"
}

#line 459 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__swap_args__ho12_6_p_0(
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_12,
#line 459 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_13)
#line 459 "inst_match.m"
{
#line 464 "inst_match.m"
  {
#line 464 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 464 "inst_match.m"
    {
#line 464 "inst_match.m"
      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_0_12, check_hlds__inst_match__STATE_VARIABLE_Info_13);
    }
#line 464 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 464 "inst_match.m"
  }
#line 459 "inst_match.m"
}

#line 459 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__swap_args__ho11_6_p_0(
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_12,
#line 459 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_13)
#line 459 "inst_match.m"
{
#line 464 "inst_match.m"
  {
#line 464 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 464 "inst_match.m"
    {
#line 464 "inst_match.m"
      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_0_12, check_hlds__inst_match__STATE_VARIABLE_Info_13);
    }
#line 464 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 464 "inst_match.m"
  }
#line 459 "inst_match.m"
}

#line 459 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__swap_args__ho10_6_p_0(
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_12,
#line 459 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_13)
#line 459 "inst_match.m"
{
#line 464 "inst_match.m"
  {
#line 464 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 464 "inst_match.m"
    {
#line 464 "inst_match.m"
      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_0_12, check_hlds__inst_match__STATE_VARIABLE_Info_13);
    }
#line 464 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 464 "inst_match.m"
  }
#line 459 "inst_match.m"
}

#line 459 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__swap_args__ho9_6_p_0(
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 459 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_12,
#line 459 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_13)
#line 459 "inst_match.m"
{
#line 464 "inst_match.m"
  {
#line 464 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 464 "inst_match.m"
    {
#line 464 "inst_match.m"
      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstB_9, check_hlds__inst_match__InstA_8, check_hlds__inst_match__Type_10, check_hlds__inst_match__STATE_VARIABLE_Info_0_12, check_hlds__inst_match__STATE_VARIABLE_Info_13);
    }
#line 464 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 464 "inst_match.m"
  }
#line 459 "inst_match.m"
}

#line 528 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1(
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 528 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 528 "inst_match.m"
{
#line 528 "inst_match.m"
  {
#line 528 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 528 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 528 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 528 "inst_match.m"
    {
#line 528 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 528 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
      {
#line 528 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 528 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
      }
#line 528 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 528 "inst_match.m"
  }
#line 528 "inst_match.m"
}

#line 489 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 489 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 489 "inst_match.m"
{
#line 512 "inst_match.m"
  {
#line 512 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 512 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 512 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 496 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 496 "inst_match.m"
      {
#line 496 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 496 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 500 "inst_match.m"
        {
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__Live_16;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_17;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__Inst_18;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_20;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_25_25;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__V_26_26;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_31_31;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_32_32;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35;
#line 508 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_19;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36;

#line 500 "inst_match.m"
          {
#line 500 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, &check_hlds__inst_match__STATE_VARIABLE_Info_25_25);
          }
#line 500 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 500 "inst_match.m"
            {
#line 506 "inst_match.m"
              check_hlds__inst_match__Live_16 = (MR_Integer) 1;
#line 507 "inst_match.m"
              check_hlds__inst_match__ModuleInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 507 "inst_match.m"
              check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 507 "inst_match.m"
              check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 508 "inst_match.m"
              check_hlds__inst_match__V_26_26 = (MR_Integer) 1;
#line 508 "inst_match.m"
              {
#line 508 "inst_match.m"
                check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_match__Live_16, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, check_hlds__inst_match__V_26_26, &check_hlds__inst_match__Inst_18, &check_hlds__inst_match___Det_19, check_hlds__inst_match__ModuleInfo0_17, &check_hlds__inst_match__ModuleInfo_20);
              }
#line 500 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 500 "inst_match.m"
                {
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 510 "inst_match.m"
                  {
#line 510 "inst_match.m"
                    check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_20));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_37_37));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_38_38));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_39_39 | ((((check_hlds__inst_match__V_40_40 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_41_41 << (MR_Integer) 3)))))));
#line 510 "inst_match.m"
                  }
#line 527 "inst_match.m"
                  if ((check_hlds__inst_match__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "inst_match.m"
                    {
#line 530 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Info_24 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 530 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 530 "inst_match.m"
                    }
#line 527 "inst_match.m"
                  else
#line 527 "inst_match.m"
                    {
#line 527 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_51_51;
#line 528 "inst_match.m"
                      MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24;

#line 528 "inst_match.m"
                      {
#line 528 "inst_match.m"
                        check_hlds__inst_match__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0_1));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 3) = ((MR_Box) (check_hlds__inst_match__Inst_18));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 528 "inst_match.m"
                      }
#line 528 "inst_match.m"
                      {
#line 528 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_51_51, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24);
                      }
#line 528 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
                        {
#line 528 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Info_24 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24);
#line 528 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
                        }
#line 527 "inst_match.m"
                    }
#line 500 "inst_match.m"
                }
#line 500 "inst_match.m"
            }
#line 500 "inst_match.m"
        }
#line 496 "inst_match.m"
      }
#line 496 "inst_match.m"
    else
#line 514 "inst_match.m"
      {
#line 514 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 512 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 512 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 512 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 512 "inst_match.m"
          {
#line 512 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 512 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 513 "inst_match.m"
            {
#line 513 "inst_match.m"
              return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 512 "inst_match.m"
          }
#line 512 "inst_match.m"
        else
#line 515 "inst_match.m"
          {
#line 515 "inst_match.m"
            return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 514 "inst_match.m"
      }
#line 512 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 512 "inst_match.m"
  }
#line 489 "inst_match.m"
}

#line 528 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1(
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 528 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 528 "inst_match.m"
{
#line 528 "inst_match.m"
  {
#line 528 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 528 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 528 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 528 "inst_match.m"
    {
#line 528 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 528 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
      {
#line 528 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 528 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
      }
#line 528 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 528 "inst_match.m"
  }
#line 528 "inst_match.m"
}

#line 489 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 489 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 489 "inst_match.m"
{
#line 512 "inst_match.m"
  {
#line 512 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 512 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 512 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 496 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 496 "inst_match.m"
      {
#line 496 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 496 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 500 "inst_match.m"
        {
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__Live_16;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_17;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__Inst_18;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_20;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_25_25;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__V_26_26;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_31_31;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_32_32;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35;
#line 508 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_19;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36;

#line 500 "inst_match.m"
          {
#line 500 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__swap_args__ho10_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, &check_hlds__inst_match__STATE_VARIABLE_Info_25_25);
          }
#line 500 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 500 "inst_match.m"
            {
#line 506 "inst_match.m"
              check_hlds__inst_match__Live_16 = (MR_Integer) 1;
#line 507 "inst_match.m"
              check_hlds__inst_match__ModuleInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 507 "inst_match.m"
              check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 507 "inst_match.m"
              check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 508 "inst_match.m"
              check_hlds__inst_match__V_26_26 = (MR_Integer) 1;
#line 508 "inst_match.m"
              {
#line 508 "inst_match.m"
                check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_match__Live_16, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, check_hlds__inst_match__V_26_26, &check_hlds__inst_match__Inst_18, &check_hlds__inst_match___Det_19, check_hlds__inst_match__ModuleInfo0_17, &check_hlds__inst_match__ModuleInfo_20);
              }
#line 500 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 500 "inst_match.m"
                {
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 510 "inst_match.m"
                  {
#line 510 "inst_match.m"
                    check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_20));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_37_37));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_38_38));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_39_39 | ((((check_hlds__inst_match__V_40_40 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_41_41 << (MR_Integer) 3)))))));
#line 510 "inst_match.m"
                  }
#line 527 "inst_match.m"
                  if ((check_hlds__inst_match__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "inst_match.m"
                    {
#line 530 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Info_24 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 530 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 530 "inst_match.m"
                    }
#line 527 "inst_match.m"
                  else
#line 527 "inst_match.m"
                    {
#line 527 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_63_63;
#line 528 "inst_match.m"
                      MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24;

#line 528 "inst_match.m"
                      {
#line 528 "inst_match.m"
                        check_hlds__inst_match__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0_1));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 3) = ((MR_Box) (check_hlds__inst_match__Inst_18));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 528 "inst_match.m"
                      }
#line 528 "inst_match.m"
                      {
#line 528 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_63_63, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24);
                      }
#line 528 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
                        {
#line 528 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Info_24 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24);
#line 528 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
                        }
#line 527 "inst_match.m"
                    }
#line 500 "inst_match.m"
                }
#line 500 "inst_match.m"
            }
#line 500 "inst_match.m"
        }
#line 496 "inst_match.m"
      }
#line 496 "inst_match.m"
    else
#line 514 "inst_match.m"
      {
#line 514 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 512 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 512 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 512 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 512 "inst_match.m"
          {
#line 512 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 512 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 513 "inst_match.m"
            {
#line 513 "inst_match.m"
              return check_hlds__inst_match__succeeded = check_hlds__inst_match__swap_args__ho10_6_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 512 "inst_match.m"
          }
#line 512 "inst_match.m"
        else
#line 515 "inst_match.m"
          {
#line 515 "inst_match.m"
            return check_hlds__inst_match__succeeded = check_hlds__inst_match__swap_args__ho9_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 514 "inst_match.m"
      }
#line 512 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 512 "inst_match.m"
  }
#line 489 "inst_match.m"
}

#line 528 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1(
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 528 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 528 "inst_match.m"
{
#line 528 "inst_match.m"
  {
#line 528 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 528 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 528 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 528 "inst_match.m"
    {
#line 528 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 528 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
      {
#line 528 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 528 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
      }
#line 528 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 528 "inst_match.m"
  }
#line 528 "inst_match.m"
}

#line 489 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 489 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 489 "inst_match.m"
{
#line 512 "inst_match.m"
  {
#line 512 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 512 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 512 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 496 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 496 "inst_match.m"
      {
#line 496 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 496 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 500 "inst_match.m"
        {
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__Live_16;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_17;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__Inst_18;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_20;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_25_25;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__V_26_26;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_31_31;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_32_32;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35;
#line 508 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_19;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36;

#line 500 "inst_match.m"
          {
#line 500 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, &check_hlds__inst_match__STATE_VARIABLE_Info_25_25);
          }
#line 500 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 500 "inst_match.m"
            {
#line 506 "inst_match.m"
              check_hlds__inst_match__Live_16 = (MR_Integer) 1;
#line 507 "inst_match.m"
              check_hlds__inst_match__ModuleInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 507 "inst_match.m"
              check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 507 "inst_match.m"
              check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 508 "inst_match.m"
              check_hlds__inst_match__V_26_26 = (MR_Integer) 1;
#line 508 "inst_match.m"
              {
#line 508 "inst_match.m"
                check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_match__Live_16, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, check_hlds__inst_match__V_26_26, &check_hlds__inst_match__Inst_18, &check_hlds__inst_match___Det_19, check_hlds__inst_match__ModuleInfo0_17, &check_hlds__inst_match__ModuleInfo_20);
              }
#line 500 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 500 "inst_match.m"
                {
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 510 "inst_match.m"
                  {
#line 510 "inst_match.m"
                    check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_20));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_37_37));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_38_38));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_39_39 | ((((check_hlds__inst_match__V_40_40 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_41_41 << (MR_Integer) 3)))))));
#line 510 "inst_match.m"
                  }
#line 527 "inst_match.m"
                  if ((check_hlds__inst_match__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "inst_match.m"
                    {
#line 530 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Info_24 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 530 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 530 "inst_match.m"
                    }
#line 527 "inst_match.m"
                  else
#line 527 "inst_match.m"
                    {
#line 527 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_51_51;
#line 528 "inst_match.m"
                      MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24;

#line 528 "inst_match.m"
                      {
#line 528 "inst_match.m"
                        check_hlds__inst_match__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0_1));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 3) = ((MR_Box) (check_hlds__inst_match__Inst_18));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_51_51, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 528 "inst_match.m"
                      }
#line 528 "inst_match.m"
                      {
#line 528 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_51_51, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24);
                      }
#line 528 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
                        {
#line 528 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Info_24 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24);
#line 528 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
                        }
#line 527 "inst_match.m"
                    }
#line 500 "inst_match.m"
                }
#line 500 "inst_match.m"
            }
#line 500 "inst_match.m"
        }
#line 496 "inst_match.m"
      }
#line 496 "inst_match.m"
    else
#line 514 "inst_match.m"
      {
#line 514 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 512 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 512 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 512 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 512 "inst_match.m"
          {
#line 512 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 512 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 513 "inst_match.m"
            {
#line 513 "inst_match.m"
              return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 512 "inst_match.m"
          }
#line 512 "inst_match.m"
        else
#line 515 "inst_match.m"
          {
#line 515 "inst_match.m"
            return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 514 "inst_match.m"
      }
#line 512 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 512 "inst_match.m"
  }
#line 489 "inst_match.m"
}

#line 528 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1(
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 528 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2,
#line 528 "inst_match.m"
  MR_Box * check_hlds__inst_match__wrapper_arg_3)
#line 528 "inst_match.m"
{
#line 528 "inst_match.m"
  {
#line 528 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 528 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;
#line 528 "inst_match.m"
    MR_Word check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17;

#line 528 "inst_match.m"
    {
#line 528 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__update_inst_var_sub_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2), &check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17);
    }
#line 528 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
      {
#line 528 "inst_match.m"
        *check_hlds__inst_match__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_match__conv0_STATE_VARIABLE_Info_17));
#line 528 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
      }
#line 528 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 528 "inst_match.m"
  }
#line 528 "inst_match.m"
}

#line 489 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 489 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_23,
#line 489 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_24)
#line 489 "inst_match.m"
{
#line 512 "inst_match.m"
  {
#line 512 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 512 "inst_match.m"
    MR_Word check_hlds__inst_match__InstVarsB_14;
#line 512 "inst_match.m"
    MR_Word check_hlds__inst_match__SubInstB_15;

#line 496 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 496 "inst_match.m"
      {
#line 496 "inst_match.m"
        check_hlds__inst_match__InstVarsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 1)));
#line 496 "inst_match.m"
        check_hlds__inst_match__SubInstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_11, (MR_Integer) 2)));
#line 500 "inst_match.m"
        {
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__Live_16;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo0_17;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__Inst_18;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__ModuleInfo_20;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_25_25;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__V_26_26;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 500 "inst_match.m"
          MR_Word check_hlds__inst_match__V_38_38;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_31_31;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_32_32;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_33_33;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_34_34;
#line 507 "inst_match.m"
          MR_Word check_hlds__inst_match__V_35_35;
#line 508 "inst_match.m"
          MR_Word check_hlds__inst_match___Det_19;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_37_37;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_39_39;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_40_40;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_41_41;
#line 510 "inst_match.m"
          MR_Word check_hlds__inst_match__V_36_36;

#line 500 "inst_match.m"
          {
#line 500 "inst_match.m"
            check_hlds__inst_match__succeeded = check_hlds__inst_match__swap_args__ho12_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, &check_hlds__inst_match__STATE_VARIABLE_Info_25_25);
          }
#line 500 "inst_match.m"
          if (check_hlds__inst_match__succeeded)
#line 500 "inst_match.m"
            {
#line 506 "inst_match.m"
              check_hlds__inst_match__Live_16 = (MR_Integer) 1;
#line 507 "inst_match.m"
              check_hlds__inst_match__ModuleInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 507 "inst_match.m"
              check_hlds__inst_match__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 507 "inst_match.m"
              check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 507 "inst_match.m"
              check_hlds__inst_match__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 508 "inst_match.m"
              check_hlds__inst_match__V_26_26 = (MR_Integer) 1;
#line 508 "inst_match.m"
              {
#line 508 "inst_match.m"
                check_hlds__inst_match__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__inst_match__Live_16, check_hlds__inst_match__InstA_10, check_hlds__inst_match__SubInstB_15, check_hlds__inst_match__V_26_26, &check_hlds__inst_match__Inst_18, &check_hlds__inst_match___Det_19, check_hlds__inst_match__ModuleInfo0_17, &check_hlds__inst_match__ModuleInfo_20);
              }
#line 500 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 500 "inst_match.m"
                {
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 510 "inst_match.m"
                  check_hlds__inst_match__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 510 "inst_match.m"
                  {
#line 510 "inst_match.m"
                    check_hlds__inst_match__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_20));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__inst_match__V_37_37));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__inst_match__V_38_38));
#line 510 "inst_match.m"
                    MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) ((check_hlds__inst_match__V_39_39 | ((((check_hlds__inst_match__V_40_40 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_41_41 << (MR_Integer) 3)))))));
#line 510 "inst_match.m"
                  }
#line 527 "inst_match.m"
                  if ((check_hlds__inst_match__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "inst_match.m"
                    {
#line 530 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Info_24 = check_hlds__inst_match__STATE_VARIABLE_Info_27_27;
#line 530 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 530 "inst_match.m"
                    }
#line 527 "inst_match.m"
                  else
#line 527 "inst_match.m"
                    {
#line 527 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_63_63;
#line 528 "inst_match.m"
                      MR_Box check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24;

#line 528 "inst_match.m"
                      {
#line 528 "inst_match.m"
                        check_hlds__inst_match__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_4[0]));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 1) = ((MR_Box) (check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0_1));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 3) = ((MR_Box) (check_hlds__inst_match__Inst_18));
#line 528 "inst_match.m"
                        MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_63_63, 4) = ((MR_Box) (check_hlds__inst_match__Type_12));
#line 528 "inst_match.m"
                      }
#line 528 "inst_match.m"
                      {
#line 528 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set__fold_4_p_3((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0, check_hlds__inst_match__V_63_63, check_hlds__inst_match__InstVarsB_14, ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Info_27_27)), &check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24);
                      }
#line 528 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 528 "inst_match.m"
                        {
#line 528 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Info_24 = ((MR_Word) check_hlds__inst_match__conv1_STATE_VARIABLE_Info_24);
#line 528 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 528 "inst_match.m"
                        }
#line 527 "inst_match.m"
                    }
#line 500 "inst_match.m"
                }
#line 500 "inst_match.m"
            }
#line 500 "inst_match.m"
        }
#line 496 "inst_match.m"
      }
#line 496 "inst_match.m"
    else
#line 514 "inst_match.m"
      {
#line 514 "inst_match.m"
        MR_Word check_hlds__inst_match__SubInstA_22;
#line 512 "inst_match.m"
        MR_Word check_hlds__inst_match___InstVarsA_21;

#line 512 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstA_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 512 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 512 "inst_match.m"
          {
#line 512 "inst_match.m"
            check_hlds__inst_match___InstVarsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 1)));
#line 512 "inst_match.m"
            check_hlds__inst_match__SubInstA_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_10, (MR_Integer) 2)));
#line 513 "inst_match.m"
            {
#line 513 "inst_match.m"
              return check_hlds__inst_match__succeeded = check_hlds__inst_match__swap_args__ho12_6_p_0(check_hlds__inst_match__SubInstA_22, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
            }
#line 512 "inst_match.m"
          }
#line 512 "inst_match.m"
        else
#line 515 "inst_match.m"
          {
#line 515 "inst_match.m"
            return check_hlds__inst_match__succeeded = check_hlds__inst_match__swap_args__ho11_6_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_23, check_hlds__inst_match__STATE_VARIABLE_Info_24);
          }
#line 514 "inst_match.m"
      }
#line 512 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 512 "inst_match.m"
  }
#line 489 "inst_match.m"
}

#line 468 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 468 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 468 "inst_match.m"
{
#line 474 "inst_match.m"
  {
#line 474 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 474 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 480 "inst_match.m"
    if ((check_hlds__inst_match__CalculateSub_14 == (MR_Integer) 0))
#line 478 "inst_match.m"
      {
#line 478 "inst_match.m"
        return check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho6_7_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
      }
#line 480 "inst_match.m"
    else
#line 480 "inst_match.m"
      if ((check_hlds__inst_match__CalculateSub_14 == (MR_Integer) 2))
#line 486 "inst_match.m"
        {
#line 486 "inst_match.m"
          return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_4_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 480 "inst_match.m"
      else
#line 482 "inst_match.m"
        {
#line 482 "inst_match.m"
          return check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho5_7_p_0(check_hlds__inst_match__InstB_11, check_hlds__inst_match__InstA_10, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 474 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 474 "inst_match.m"
  }
#line 468 "inst_match.m"
}

#line 468 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__handle_inst_var_subs__ho1_7_p_0(
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_10,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_11,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_12,
#line 468 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 468 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 468 "inst_match.m"
{
#line 474 "inst_match.m"
  {
#line 474 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 474 "inst_match.m"
    MR_Word check_hlds__inst_match__CalculateSub_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 475 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 480 "inst_match.m"
    if ((check_hlds__inst_match__CalculateSub_14 == (MR_Integer) 0))
#line 478 "inst_match.m"
      {
#line 478 "inst_match.m"
        return check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho8_7_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
      }
#line 480 "inst_match.m"
    else
#line 480 "inst_match.m"
      if ((check_hlds__inst_match__CalculateSub_14 == (MR_Integer) 2))
#line 486 "inst_match.m"
        {
#line 486 "inst_match.m"
          return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_3_5_p_0(check_hlds__inst_match__InstA_10, check_hlds__inst_match__InstB_11, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 480 "inst_match.m"
      else
#line 482 "inst_match.m"
        {
#line 482 "inst_match.m"
          return check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs_2__ho7_7_p_0(check_hlds__inst_match__InstB_11, check_hlds__inst_match__InstA_10, check_hlds__inst_match__Type_12, check_hlds__inst_match__STATE_VARIABLE_Info_0_15, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 474 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 474 "inst_match.m"
  }
#line 468 "inst_match.m"
}

#line 395 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____uniqueness_comparison_0_0(
#line 395 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 395 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 395 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 395 "inst_match.m"
{
#line 395 "inst_match.m"
  {
#line 395 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 395 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 395 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 395 "inst_match.m"
    {
#line 395 "inst_match.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
#line 395 "inst_match.m"
      return;
    }
#line 395 "inst_match.m"
  }
#line 395 "inst_match.m"
}

#line 395 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____uniqueness_comparison_0_0(
#line 395 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 395 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 395 "inst_match.m"
{
#line 4203 "check_hlds.inst_match.c"
  {
#line 4205 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

#line 4208 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 4210 "check_hlds.inst_match.c"
  }
#line 395 "inst_match.m"
}

#line 2390 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_names_0_0(
#line 2390 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 2390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 2390 "inst_match.m"
{
#line 2390 "inst_match.m"
  {
#line 2390 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 2390 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
#line 2390 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

#line 2390 "inst_match.m"
    {
#line 2390 "inst_match.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[4], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
#line 2390 "inst_match.m"
      return;
    }
#line 2390 "inst_match.m"
  }
#line 2390 "inst_match.m"
}

#line 2390 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_names_0_0(
#line 2390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2390 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 2390 "inst_match.m"
{
#line 2390 "inst_match.m"
  {
#line 2390 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 2390 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
#line 2390 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

#line 2390 "inst_match.m"
    {
#line 2390 "inst_match.m"
      return check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[4], ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_4)));
    }
#line 2390 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2390 "inst_match.m"
  }
#line 2390 "inst_match.m"
}

#line 438 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_matches_pred_0_0(
#line 438 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 438 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 438 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 438 "inst_match.m"
{
#line 438 "inst_match.m"
  {
#line 438 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 438 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
#line 438 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

#line 438 "inst_match.m"
    {
#line 438 "inst_match.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_3[0], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
#line 438 "inst_match.m"
      return;
    }
#line 438 "inst_match.m"
  }
#line 438 "inst_match.m"
}

#line 438 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_matches_pred_0_0(
#line 438 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 438 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 438 "inst_match.m"
{
#line 438 "inst_match.m"
  {
#line 438 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 438 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
#line 438 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

#line 438 "inst_match.m"
    {
#line 438 "inst_match.m"
      return check_hlds__inst_match__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) check_hlds__inst_match__Cast_HeadVar1_3, (MR_Word) check_hlds__inst_match__Cast_HeadVar2_4);
    }
#line 438 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 438 "inst_match.m"
  }
#line 438 "inst_match.m"
}

#line 348 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_inputs_0_0(
#line 348 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 348 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 348 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 348 "inst_match.m"
{
#line 348 "inst_match.m"
  {
#line 348 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 348 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_12 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 348 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_13 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 348 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_12 == check_hlds__inst_match__CastY_13);
#line 348 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 4363 "check_hlds.inst_match.c"
      *check_hlds__inst_match__HeadVar__1_1 = (MR_Integer) 0;
#line 348 "inst_match.m"
    else
#line 348 "inst_match.m"
      {
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 2)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10;

#line 348 "inst_match.m"
        {
#line 348 "inst_match.m"
          parse_tree__prog_data____Compare____mer_inst_0_0(&check_hlds__inst_match__V_10_10, check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_7_7);
        }
#line 4389 "check_hlds.inst_match.c"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_10_10 == (MR_Integer) 0);
#line 348 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 348 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 348 "inst_match.m"
          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_10_10;
#line 348 "inst_match.m"
        else
#line 348 "inst_match.m"
          {
#line 348 "inst_match.m"
            MR_Word check_hlds__inst_match__V_11_11;

#line 348 "inst_match.m"
            {
#line 348 "inst_match.m"
              parse_tree__prog_data____Compare____mer_inst_0_0(&check_hlds__inst_match__V_11_11, check_hlds__inst_match__V_5_5, check_hlds__inst_match__V_8_8);
            }
#line 4409 "check_hlds.inst_match.c"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_11_11 == (MR_Integer) 0);
#line 348 "inst_match.m"
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 348 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 348 "inst_match.m"
              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_11_11;
#line 348 "inst_match.m"
            else
#line 348 "inst_match.m"
              {
#line 348 "inst_match.m"
                {
#line 348 "inst_match.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[1], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__V_6_6)), ((MR_Box) (check_hlds__inst_match__V_9_9)));
#line 348 "inst_match.m"
                  return;
                }
#line 348 "inst_match.m"
              }
#line 348 "inst_match.m"
          }
#line 348 "inst_match.m"
      }
#line 348 "inst_match.m"
  }
#line 348 "inst_match.m"
}

#line 348 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_inputs_0_0(
#line 348 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 348 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 348 "inst_match.m"
{
#line 348 "inst_match.m"
  {
#line 348 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 348 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_9 = (MR_Integer) check_hlds__inst_match__HeadVar__1_1;
#line 348 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_10 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;

#line 348 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_9 == check_hlds__inst_match__CastY_10);
#line 348 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 348 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 348 "inst_match.m"
    else
#line 348 "inst_match.m"
      {
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_13_13;
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 2)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 348 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));

#line 4482 "check_hlds.inst_match.c"
        {
#line 4484 "check_hlds.inst_match.c"
          check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__V_3_3, check_hlds__inst_match__V_6_6);
        }
#line 348 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 348 "inst_match.m"
          {
#line 4491 "check_hlds.inst_match.c"
            {
#line 4493 "check_hlds.inst_match.c"
              check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_7_7);
            }
#line 348 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 348 "inst_match.m"
              {
#line 4500 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_13_13 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 4502 "check_hlds.inst_match.c"
                {
#line 4504 "check_hlds.inst_match.c"
                  return check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_13_13, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_8_8)));
                }
#line 348 "inst_match.m"
              }
#line 348 "inst_match.m"
          }
#line 348 "inst_match.m"
      }
#line 348 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 348 "inst_match.m"
  }
#line 348 "inst_match.m"
}

#line 404 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____inst_match_info_0_0(
#line 404 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 404 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 404 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 404 "inst_match.m"
{
#line 404 "inst_match.m"
  {
#line 404 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 404 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_21 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 404 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_22 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 404 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_21 == check_hlds__inst_match__CastY_22);
#line 404 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 4544 "check_hlds.inst_match.c"
      *check_hlds__inst_match__HeadVar__1_1 = (MR_Integer) 0;
#line 404 "inst_match.m"
    else
#line 404 "inst_match.m"
      {
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 2)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_16_16;

#line 404 "inst_match.m"
        {
#line 404 "inst_match.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__inst_match__V_16_16, check_hlds__inst_match__V_4_4, check_hlds__inst_match__V_10_10);
        }
#line 4582 "check_hlds.inst_match.c"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_16_16 == (MR_Integer) 0);
#line 404 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 404 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_16_16;
#line 404 "inst_match.m"
        else
#line 404 "inst_match.m"
          {
#line 404 "inst_match.m"
            MR_Word check_hlds__inst_match__V_17_17;

#line 404 "inst_match.m"
            {
#line 404 "inst_match.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], &check_hlds__inst_match__V_17_17, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_11_11)));
            }
#line 4602 "check_hlds.inst_match.c"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_17_17 == (MR_Integer) 0);
#line 404 "inst_match.m"
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 404 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
              *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_17_17;
#line 404 "inst_match.m"
            else
#line 404 "inst_match.m"
              {
#line 404 "inst_match.m"
                MR_Word check_hlds__inst_match__V_18_18;

#line 404 "inst_match.m"
                {
#line 404 "inst_match.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[3], &check_hlds__inst_match__V_18_18, ((MR_Box) (check_hlds__inst_match__V_6_6)), ((MR_Box) (check_hlds__inst_match__V_12_12)));
                }
#line 4622 "check_hlds.inst_match.c"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_18_18 == (MR_Integer) 0);
#line 404 "inst_match.m"
                check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 404 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
                  *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_18_18;
#line 404 "inst_match.m"
                else
#line 404 "inst_match.m"
                  {
#line 404 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_19_19;
#line 404 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_29_29 = (MR_Integer) check_hlds__inst_match__V_7_7;
#line 404 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_30_30 = (MR_Integer) check_hlds__inst_match__V_13_13;

#line 404 "inst_match.m"
                    {
#line 404 "inst_match.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__V_19_19, check_hlds__inst_match__V_29_29, check_hlds__inst_match__V_30_30);
                    }
#line 4646 "check_hlds.inst_match.c"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 0);
#line 404 "inst_match.m"
                    check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 404 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
                      *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_19_19;
#line 404 "inst_match.m"
                    else
#line 404 "inst_match.m"
                      {
#line 404 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_20_20;
#line 404 "inst_match.m"
                        MR_Integer check_hlds__inst_match__V_31_31 = (MR_Integer) check_hlds__inst_match__V_8_8;
#line 404 "inst_match.m"
                        MR_Integer check_hlds__inst_match__V_32_32 = (MR_Integer) check_hlds__inst_match__V_14_14;

#line 404 "inst_match.m"
                        {
#line 404 "inst_match.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_match__V_20_20, check_hlds__inst_match__V_31_31, check_hlds__inst_match__V_32_32);
                        }
#line 4670 "check_hlds.inst_match.c"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_20_20 == (MR_Integer) 0);
#line 404 "inst_match.m"
                        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 404 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
                          *check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__V_20_20;
#line 404 "inst_match.m"
                        else
#line 404 "inst_match.m"
                          {
#line 404 "inst_match.m"
                            MR_Integer check_hlds__inst_match__V_33_33 = (MR_Integer) check_hlds__inst_match__V_9_9;
#line 404 "inst_match.m"
                            MR_Integer check_hlds__inst_match__V_34_34 = (MR_Integer) check_hlds__inst_match__V_15_15;

#line 404 "inst_match.m"
                            {
#line 404 "inst_match.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__V_33_33, check_hlds__inst_match__V_34_34);
#line 404 "inst_match.m"
                              return;
                            }
#line 404 "inst_match.m"
                          }
#line 404 "inst_match.m"
                      }
#line 404 "inst_match.m"
                  }
#line 404 "inst_match.m"
              }
#line 404 "inst_match.m"
          }
#line 404 "inst_match.m"
      }
#line 404 "inst_match.m"
  }
#line 404 "inst_match.m"
}

#line 404 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____inst_match_info_0_0(
#line 404 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 404 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 404 "inst_match.m"
{
#line 404 "inst_match.m"
  {
#line 404 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 404 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastX_15 = (MR_Integer) check_hlds__inst_match__HeadVar__1_1;
#line 404 "inst_match.m"
    MR_Integer check_hlds__inst_match__CastY_16 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;

#line 404 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__CastX_15 == check_hlds__inst_match__CastY_16);
#line 404 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 404 "inst_match.m"
    else
#line 404 "inst_match.m"
      {
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_18_18;
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeInfo_19_19;
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 2)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 2)));
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 404 "inst_match.m"
        MR_Word check_hlds__inst_match__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 4768 "check_hlds.inst_match.c"
        {
#line 4770 "check_hlds.inst_match.c"
          check_hlds__inst_match__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__inst_match__V_3_3, check_hlds__inst_match__V_9_9);
        }
#line 404 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
          {
#line 4777 "check_hlds.inst_match.c"
            check_hlds__inst_match__TypeInfo_18_18 = (MR_Word) &check_hlds__inst_match_scalar_common_1[2];
#line 4779 "check_hlds.inst_match.c"
            {
#line 4781 "check_hlds.inst_match.c"
              check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_18_18, ((MR_Box) (check_hlds__inst_match__V_4_4)), ((MR_Box) (check_hlds__inst_match__V_10_10)));
            }
#line 404 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
              {
#line 4788 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_19_19 = (MR_Word) &check_hlds__inst_match_scalar_common_1[3];
#line 4790 "check_hlds.inst_match.c"
                {
#line 4792 "check_hlds.inst_match.c"
                  check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_match__TypeInfo_19_19, ((MR_Box) (check_hlds__inst_match__V_5_5)), ((MR_Box) (check_hlds__inst_match__V_11_11)));
                }
#line 404 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
                  {
#line 4799 "check_hlds.inst_match.c"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_6_6 == check_hlds__inst_match__V_12_12);
#line 404 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 404 "inst_match.m"
                      {
#line 4805 "check_hlds.inst_match.c"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_7_7 == check_hlds__inst_match__V_13_13);
#line 404 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 4809 "check_hlds.inst_match.c"
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_8_8 == check_hlds__inst_match__V_14_14);
#line 404 "inst_match.m"
                      }
#line 404 "inst_match.m"
                  }
#line 404 "inst_match.m"
              }
#line 404 "inst_match.m"
          }
#line 404 "inst_match.m"
      }
#line 404 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 404 "inst_match.m"
  }
#line 404 "inst_match.m"
}

#line 355 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____expansions_0_0(
#line 355 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 355 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 355 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 355 "inst_match.m"
{
#line 355 "inst_match.m"
  {
#line 355 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 355 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_4 = check_hlds__inst_match__HeadVar__2_2;
#line 355 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_5 = check_hlds__inst_match__HeadVar__3_3;

#line 355 "inst_match.m"
    {
#line 355 "inst_match.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], check_hlds__inst_match__HeadVar__1_1, ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_5)));
#line 355 "inst_match.m"
      return;
    }
#line 355 "inst_match.m"
  }
#line 355 "inst_match.m"
}

#line 355 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____expansions_0_0(
#line 355 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 355 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 355 "inst_match.m"
{
#line 355 "inst_match.m"
  {
#line 355 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 355 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar1_3 = check_hlds__inst_match__HeadVar__1_1;
#line 355 "inst_match.m"
    MR_Word check_hlds__inst_match__Cast_HeadVar2_4 = check_hlds__inst_match__HeadVar__2_2;

#line 355 "inst_match.m"
    {
#line 355 "inst_match.m"
      return check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], ((MR_Box) (check_hlds__inst_match__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_match__Cast_HeadVar2_4)));
    }
#line 355 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 355 "inst_match.m"
  }
#line 355 "inst_match.m"
}

#line 416 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match____Compare____calculate_sub_0_0(
#line 416 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__1_1,
#line 416 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 416 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3)
#line 416 "inst_match.m"
{
#line 416 "inst_match.m"
  {
#line 416 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 416 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_match__HeadVar__2_2;
#line 416 "inst_match.m"
    MR_Integer check_hlds__inst_match__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_match__HeadVar__3_3;

#line 416 "inst_match.m"
    {
#line 416 "inst_match.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_match__HeadVar__1_1, check_hlds__inst_match__Cast_HeadVar1_4, check_hlds__inst_match__Cast_HeadVar2_5);
#line 416 "inst_match.m"
      return;
    }
#line 416 "inst_match.m"
  }
#line 416 "inst_match.m"
}

#line 416 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match____Unify____calculate_sub_0_0(
#line 416 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_1,
#line 416 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2)
#line 416 "inst_match.m"
{
#line 4931 "check_hlds.inst_match.c"
  {
#line 4933 "check_hlds.inst_match.c"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_1 == check_hlds__inst_match__HeadVar__2_2);

#line 4936 "check_hlds.inst_match.c"
    return check_hlds__inst_match__succeeded;
#line 4938 "check_hlds.inst_match.c"
  }
#line 416 "inst_match.m"
}

#line 2689 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__same_addr_insts_2_p_0(
#line 2689 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_1,
#line 2689 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_2)
#line 2689 "inst_match.m"
{
#line 2691 "inst_match.m"
  {
#line 2691 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2694 "inst_match.m"
{
#define MR_PROC_LABEL check_hlds__inst_match__same_addr_insts_2_p_0

	MR_Word InstA;
	MR_Word InstB;
	MR_bool SUCCESS_INDICATOR;

	InstA =  check_hlds__inst_match__InstA_1 ;
	InstB =  check_hlds__inst_match__InstB_2 ;
		{
#line 2694 "inst_match.m"

    SUCCESS_INDICATOR = ((void *) InstA == (void *) InstB);

#line 4972 "check_hlds.inst_match.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2694 "inst_match.m"
	}
check_hlds__inst_match__succeeded  = SUCCESS_INDICATOR;
}
#line 2691 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2691 "inst_match.m"
  }
#line 2689 "inst_match.m"
}

#line 2631 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__maybe_any_to_bound_5_p_0(
#line 2631 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2631 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_7,
#line 2631 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_8,
#line 2631 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__4_4,
#line 2631 "inst_match.m"
  MR_Word * check_hlds__inst_match__Inst_9)
#line 2631 "inst_match.m"
{
#line 2634 "inst_match.m"
  {
#line 2634 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2634 "inst_match.m"
    MR_Word check_hlds__inst_match__Type_6;
#line 2650 "inst_match.m"
    MR_Word check_hlds__inst_match__Constructors_10;

#line 2634 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 2634 "inst_match.m"
      {
#line 2634 "inst_match.m"
        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2634 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 2634 "inst_match.m"
          {
#line 2634 "inst_match.m"
            check_hlds__inst_match__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2635 "inst_match.m"
            {
#line 2635 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_match__ModuleInfo_7, check_hlds__inst_match__Type_6);
            }
#line 2635 "inst_match.m"
            check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 2634 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2634 "inst_match.m"
              {
#line 2636 "inst_match.m"
                {
#line 2636 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_match__ModuleInfo_7, check_hlds__inst_match__Type_6, &check_hlds__inst_match__Constructors_10);
                }
#line 2650 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 2637 "inst_match.m"
                  {
#line 2637 "inst_match.m"
                    MR_Word check_hlds__inst_match__TypeCtor_11;
#line 2637 "inst_match.m"
                    MR_Word check_hlds__inst_match__BoundInsts0_12;
#line 2637 "inst_match.m"
                    MR_Word check_hlds__inst_match__BoundInsts_13;
#line 2637 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstResult_14;
#line 2637 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_17_17;
#line 2637 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_18_18;
#line 2637 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_19_19;
#line 2637 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_20_20;

#line 2637 "inst_match.m"
                    {
#line 2637 "inst_match.m"
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_match__Type_6, &check_hlds__inst_match__TypeCtor_11);
                    }
#line 2638 "inst_match.m"
                    {
#line 2638 "inst_match.m"
                      check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(check_hlds__inst_match__ModuleInfo_7, check_hlds__inst_match__Uniq_8, check_hlds__inst_match__TypeCtor_11, check_hlds__inst_match__Constructors_10, &check_hlds__inst_match__BoundInsts0_12);
                    }
#line 2640 "inst_match.m"
                    {
#line 2640 "inst_match.m"
                      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__inst_match__BoundInsts0_12, &check_hlds__inst_match__BoundInsts_13);
                    }
#line 2646 "inst_match.m"
                    {
#line 2646 "inst_match.m"
                      check_hlds__inst_match__V_18_18 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                    }
#line 2643 "inst_match.m"
                    {
#line 2643 "inst_match.m"
                      check_hlds__inst_match__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2643 "inst_match.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_18_18));
#line 2643 "inst_match.m"
                    }
#line 2647 "inst_match.m"
                    {
#line 2647 "inst_match.m"
                      check_hlds__inst_match__V_20_20 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
                    }
#line 2643 "inst_match.m"
                    {
#line 2643 "inst_match.m"
                      check_hlds__inst_match__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2643 "inst_match.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_19_19, 0) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 2643 "inst_match.m"
                    }
#line 2643 "inst_match.m"
                    {
#line 2643 "inst_match.m"
                      check_hlds__inst_match__InstResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2643 "inst_match.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResult_14, 0) = ((MR_Box) ((MR_Integer) 2));
#line 2643 "inst_match.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResult_14, 1) = ((MR_Box) ((MR_Integer) 2));
#line 2643 "inst_match.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResult_14, 2) = ((MR_Box) (check_hlds__inst_match__V_17_17));
#line 2643 "inst_match.m"
                      MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResult_14, 3) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 2643 "inst_match.m"
                    }
#line 2649 "inst_match.m"
                    {
#line 2649 "inst_match.m"
                      MR_Word base;
#line 2649 "inst_match.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2649 "inst_match.m"
                      *check_hlds__inst_match__Inst_9 = base;
#line 2649 "inst_match.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2649 "inst_match.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_match__Uniq_8));
#line 2649 "inst_match.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_match__InstResult_14));
#line 2649 "inst_match.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_match__BoundInsts_13));
#line 2649 "inst_match.m"
                    }
#line 2637 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 2637 "inst_match.m"
                  }
#line 2650 "inst_match.m"
                else
#line 2655 "inst_match.m"
                  {
#line 2661 "inst_match.m"
                    MR_Word check_hlds__inst_match__TypeCtorCat_27;

#line 2662 "inst_match.m"
                    {
#line 2662 "inst_match.m"
                      check_hlds__inst_match__TypeCtorCat_27 = check_hlds__type_util__classify_type_2_f_0(check_hlds__inst_match__ModuleInfo_7, check_hlds__inst_match__Type_6);
                    }
#line 2676 "inst_match.m"
                    if ((check_hlds__inst_match__TypeCtorCat_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2683 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 2676 "inst_match.m"
                    else
#line 2676 "inst_match.m"
                      if ((check_hlds__inst_match__TypeCtorCat_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2683 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 2676 "inst_match.m"
                      else
#line 2676 "inst_match.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_match__TypeCtorCat_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__TypeCtorCat_27, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2676 "inst_match.m"
                          {
#line 2676 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__TypeCtorCat_27, (MR_Integer) 1)));

#line 2676 "inst_match.m"
                            if ((check_hlds__inst_match__V_37_37 == (MR_Integer) 2))
#line 2684 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_TRUE;
#line 2676 "inst_match.m"
                            else
#line 2676 "inst_match.m"
                              if ((check_hlds__inst_match__V_37_37 == (MR_Integer) 1))
#line 2684 "inst_match.m"
                                check_hlds__inst_match__succeeded = MR_TRUE;
#line 2676 "inst_match.m"
                              else
#line 2676 "inst_match.m"
                                check_hlds__inst_match__succeeded = MR_FALSE;
#line 2676 "inst_match.m"
                          }
#line 2676 "inst_match.m"
                        else
#line 2676 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_FALSE;
#line 2655 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 2654 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 2655 "inst_match.m"
                    else
#line 2656 "inst_match.m"
                      {
#line 2656 "inst_match.m"
                        {
#line 2656 "inst_match.m"
                          MR_Word base;
#line 2656 "inst_match.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2656 "inst_match.m"
                          *check_hlds__inst_match__Inst_9 = base;
#line 2656 "inst_match.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2656 "inst_match.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_match__Uniq_8));
#line 2656 "inst_match.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2656 "inst_match.m"
                        }
#line 2656 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 2656 "inst_match.m"
                      }
#line 2655 "inst_match.m"
                  }
#line 2634 "inst_match.m"
              }
#line 2634 "inst_match.m"
          }
#line 2634 "inst_match.m"
      }
#line 2634 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2634 "inst_match.m"
  }
#line 2631 "inst_match.m"
}

#line 2610 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(
#line 2610 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 2610 "inst_match.m"
{
#line 2610 "inst_match.m"
  {
#line 2610 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 2550 "inst_match.m"
    if (((((MR_tag((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2570 "inst_match.m"
      {
#line 2570 "inst_match.m"
        MR_Word check_hlds__inst_match__ArgInsts_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 2)));
#line 2570 "inst_match.m"
        MR_Word check_hlds__inst_match___Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 1)));

#line 2571 "inst_match.m"
        {
#line 2571 "inst_match.m"
          check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_27, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr);
#line 2571 "inst_match.m"
          return;
        }
#line 2570 "inst_match.m"
      }
#line 2550 "inst_match.m"
    else
#line 2550 "inst_match.m"
      if (((((MR_tag((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2555 "inst_match.m"
        {
#line 2555 "inst_match.m"
          MR_Word check_hlds__inst_match__InstResults_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 2)));
#line 2555 "inst_match.m"
          MR_Word check_hlds__inst_match__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 3)));
#line 2555 "inst_match.m"
          MR_Word check_hlds__inst_match___Uniq_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 1)));

#line 2559 "inst_match.m"
          if ((((check_hlds__inst_match__InstResults_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_match__InstResults_15)) == (MR_mktag((MR_Integer) 1))))))
#line 2563 "inst_match.m"
            {
#line 2563 "inst_match.m"
              check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__BoundInsts_16, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr);
#line 2563 "inst_match.m"
              return;
            }
#line 2559 "inst_match.m"
          else
#line 2559 "inst_match.m"
            {
#line 2559 "inst_match.m"
            }
#line 2555 "inst_match.m"
        }
#line 2550 "inst_match.m"
      else
#line 2550 "inst_match.m"
        if (((((MR_tag((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2552 "inst_match.m"
          {
#line 2552 "inst_match.m"
            MR_Word check_hlds__inst_match__InstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 1)));

#line 2553 "inst_match.m"
            {
#line 2553 "inst_match.m"
              check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(check_hlds__inst_match__InstName_13, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr);
#line 2553 "inst_match.m"
              return;
            }
#line 2552 "inst_match.m"
          }
#line 2550 "inst_match.m"
        else
#line 2550 "inst_match.m"
          if (((((MR_tag((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2566 "inst_match.m"
            {
#line 2566 "inst_match.m"
              MR_Word check_hlds__inst_match__HOInstInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 2)));
#line 2566 "inst_match.m"
              MR_Word check_hlds__inst_match__Modes_23;
#line 2566 "inst_match.m"
              MR_Word check_hlds__inst_match__V_28_28;
#line 2566 "inst_match.m"
              MR_Word check_hlds__inst_match___Uniq_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 1)));
#line 2567 "inst_match.m"
              MR_Word check_hlds__inst_match___PredOrFunc_22;
#line 2567 "inst_match.m"
              MR_Word check_hlds__inst_match__V_24_24;
#line 2567 "inst_match.m"
              MR_Word check_hlds__inst_match___Det_25;

#line 2567 "inst_match.m"
              (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HOInstInfo_21)) == (MR_mktag((MR_Integer) 1)));
#line 2567 "inst_match.m"
              if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__succeeded)
#line 2567 "inst_match.m"
                {
#line 2567 "inst_match.m"
                  check_hlds__inst_match__V_28_28 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_21), (MR_Integer) 1);
#line 2566 "inst_match.m"
                  {
#line 2567 "inst_match.m"
                    check_hlds__inst_match___PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_28_28, (MR_Integer) 0)));
#line 2567 "inst_match.m"
                    check_hlds__inst_match__Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_28_28, (MR_Integer) 1)));
#line 2567 "inst_match.m"
                    check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_28_28, (MR_Integer) 2)));
#line 2567 "inst_match.m"
                    check_hlds__inst_match___Det_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_28_28, (MR_Integer) 3)));
#line 2568 "inst_match.m"
                    {
#line 2568 "inst_match.m"
                      check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_23, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr);
#line 2568 "inst_match.m"
                      return;
                    }
#line 2566 "inst_match.m"
                  }
#line 2567 "inst_match.m"
                }
#line 2566 "inst_match.m"
            }
#line 2550 "inst_match.m"
          else
#line 2550 "inst_match.m"
            if (((((MR_tag((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2550 "inst_match.m"
              {
#line 2550 "inst_match.m"
                *((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4) = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7, (MR_Integer) 1)));
#line 2550 "inst_match.m"
                {
#line 2550 "inst_match.m"
                  ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont)((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr);
#line 2550 "inst_match.m"
                  return;
                }
#line 2550 "inst_match.m"
              }
#line 2550 "inst_match.m"
            else
#line 2550 "inst_match.m"
              {
#line 2550 "inst_match.m"
              }
#line 2610 "inst_match.m"
  }
#line 2610 "inst_match.m"
}

#line 2616 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0_2(
#line 2616 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 2616 "inst_match.m"
{
#line 2616 "inst_match.m"
  {
#line 2616 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 2616 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7);
#line 2616 "inst_match.m"
    {
#line 2616 "inst_match.m"
      check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(check_hlds__inst_match__env_ptr);
#line 2616 "inst_match.m"
      return;
    }
#line 2616 "inst_match.m"
  }
#line 2616 "inst_match.m"
}

#line 2608 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_contains_inst_var_2_p_0(
#line 2608 "inst_match.m"
  MR_Word check_hlds__inst_match__Mode_3,
#line 2608 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 2608 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2608 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 2608 "inst_match.m"
{
#line 2608 "inst_match.m"
  {
#line 2608 "inst_match.m"
    struct check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0_s check_hlds__inst_match__env;

#line 2608 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__InstVar_4 = check_hlds__inst_match__InstVar_4;
#line 2608 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont = check_hlds__inst_match__cont;
#line 2608 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__cont_env_ptr = check_hlds__inst_match__cont_env_ptr;
#line 2614 "inst_match.m"
    if (((MR_tag((MR_Word) check_hlds__inst_match__Mode_3)) == (MR_mktag((MR_Integer) 0))))
#line 2612 "inst_match.m"
      {
#line 2612 "inst_match.m"
        MR_Word check_hlds__inst_match__Initial_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Mode_3, (MR_Integer) 0)));
#line 2612 "inst_match.m"
        MR_Word check_hlds__inst_match__Final_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Mode_3, (MR_Integer) 1)));

#line 2613 "inst_match.m"
        (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = check_hlds__inst_match__Initial_5;
#line 2613 "inst_match.m"
        {
#line 2613 "inst_match.m"
          check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(&check_hlds__inst_match__env);
        }
#line 2613 "inst_match.m"
        (check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__Inst_7 = check_hlds__inst_match__Final_6;
#line 2613 "inst_match.m"
        {
#line 2613 "inst_match.m"
          check_hlds__inst_match__mode_contains_inst_var_2_p_0_1(&check_hlds__inst_match__env);
        }
#line 2612 "inst_match.m"
      }
#line 2614 "inst_match.m"
    else
#line 2615 "inst_match.m"
      {
#line 2615 "inst_match.m"
        MR_Word check_hlds__inst_match__Insts_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Mode_3, (MR_Integer) 1)));
#line 2615 "inst_match.m"
        MR_Word check_hlds__inst_match___Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__Mode_3, (MR_Integer) 0)));

#line 2616 "inst_match.m"
        {
#line 2616 "inst_match.m"
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__inst_match__env).check_hlds__inst_match__mode_contains_inst_var_2_p_0_env_0__conv0_Inst_7, check_hlds__inst_match__Insts_9, check_hlds__inst_match__mode_contains_inst_var_2_p_0_2, &check_hlds__inst_match__env);
        }
#line 2615 "inst_match.m"
      }
#line 2608 "inst_match.m"
  }
#line 2608 "inst_match.m"
}

#line 2598 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(
#line 2598 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2598 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 2598 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2598 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 2598 "inst_match.m"
{
#line 2601 "inst_match.m"
  while (MR_TRUE)
#line 2601 "inst_match.m"
    {
#line 2601 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2601 "inst_match.m"
      {
#line 2601 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2601 "inst_match.m"
        MR_Word check_hlds__inst_match__Mode_3;
#line 2601 "inst_match.m"
        MR_Word check_hlds__inst_match__Modes_4;

#line 2601 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 2601 "inst_match.m"
          {
#line 2601 "inst_match.m"
            check_hlds__inst_match__Mode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2601 "inst_match.m"
            check_hlds__inst_match__Modes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2603 "inst_match.m"
            {
#line 2603 "inst_match.m"
              check_hlds__inst_match__mode_contains_inst_var_2_p_0(check_hlds__inst_match__Mode_3, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 2605 "inst_match.m"
            {
#line 2605 "inst_match.m"
              /* direct tailcall eliminated */
#line 2605 "inst_match.m"
              {
#line 2605 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Modes_4;

#line 2605 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2605 "inst_match.m"
              }
#line 2605 "inst_match.m"
              continue;
#line 2605 "inst_match.m"
            }
#line 2601 "inst_match.m"
          }
#line 2601 "inst_match.m"
      }
#line 2601 "inst_match.m"
      break;
#line 2601 "inst_match.m"
    }
#line 2598 "inst_match.m"
}

#line 2585 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(
#line 2585 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2585 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 2585 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2585 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 2585 "inst_match.m"
{
#line 2588 "inst_match.m"
  while (MR_TRUE)
#line 2588 "inst_match.m"
    {
#line 2588 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2588 "inst_match.m"
      {
#line 2588 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2588 "inst_match.m"
        MR_Word check_hlds__inst_match__Inst_3;
#line 2588 "inst_match.m"
        MR_Word check_hlds__inst_match__Insts_4;

#line 2588 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 2588 "inst_match.m"
          {
#line 2588 "inst_match.m"
            check_hlds__inst_match__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2588 "inst_match.m"
            check_hlds__inst_match__Insts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2550 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2570 "inst_match.m"
              {
#line 2570 "inst_match.m"
                MR_Word check_hlds__inst_match__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 2570 "inst_match.m"
                MR_Word check_hlds__inst_match___Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 2571 "inst_match.m"
                {
#line 2571 "inst_match.m"
                  check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_22, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
                }
#line 2570 "inst_match.m"
              }
#line 2550 "inst_match.m"
            else
#line 2550 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2555 "inst_match.m"
                {
#line 2555 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstResults_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 2555 "inst_match.m"
                  MR_Word check_hlds__inst_match__BoundInsts_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 3)));
#line 2555 "inst_match.m"
                  MR_Word check_hlds__inst_match___Uniq_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 2559 "inst_match.m"
                  if ((((check_hlds__inst_match__InstResults_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_match__InstResults_10)) == (MR_mktag((MR_Integer) 1))))))
#line 2563 "inst_match.m"
                    {
#line 2563 "inst_match.m"
                      check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__BoundInsts_11, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
                    }
#line 2559 "inst_match.m"
                  else
#line 2559 "inst_match.m"
                    {
#line 2559 "inst_match.m"
                    }
#line 2555 "inst_match.m"
                }
#line 2550 "inst_match.m"
              else
#line 2550 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2552 "inst_match.m"
                  {
#line 2552 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 2553 "inst_match.m"
                    {
#line 2553 "inst_match.m"
                      check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(check_hlds__inst_match__InstName_8, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
                    }
#line 2552 "inst_match.m"
                  }
#line 2550 "inst_match.m"
                else
#line 2550 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2566 "inst_match.m"
                    {
#line 2566 "inst_match.m"
                      MR_Word check_hlds__inst_match__HOInstInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 2566 "inst_match.m"
                      MR_Word check_hlds__inst_match__Modes_18;
#line 2566 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_23_23;
#line 2566 "inst_match.m"
                      MR_Word check_hlds__inst_match___Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
#line 2567 "inst_match.m"
                      MR_Word check_hlds__inst_match___PredOrFunc_17;
#line 2567 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_19_19;
#line 2567 "inst_match.m"
                      MR_Word check_hlds__inst_match___Det_20;

#line 2567 "inst_match.m"
                      check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HOInstInfo_16)) == (MR_mktag((MR_Integer) 1)));
#line 2567 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 2567 "inst_match.m"
                        {
#line 2567 "inst_match.m"
                          check_hlds__inst_match__V_23_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_16), (MR_Integer) 1);
#line 2567 "inst_match.m"
                          check_hlds__inst_match___PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 0)));
#line 2567 "inst_match.m"
                          check_hlds__inst_match__Modes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 1)));
#line 2567 "inst_match.m"
                          check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 2)));
#line 2567 "inst_match.m"
                          check_hlds__inst_match___Det_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_23_23, (MR_Integer) 3)));
#line 2568 "inst_match.m"
                          {
#line 2568 "inst_match.m"
                            check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_18, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
                          }
#line 2567 "inst_match.m"
                        }
#line 2566 "inst_match.m"
                    }
#line 2550 "inst_match.m"
                  else
#line 2550 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2550 "inst_match.m"
                      {
#line 2550 "inst_match.m"
                        *check_hlds__inst_match__InstVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
#line 2550 "inst_match.m"
                        {
#line 2550 "inst_match.m"
                          check_hlds__inst_match__cont(check_hlds__inst_match__cont_env_ptr);
                        }
#line 2550 "inst_match.m"
                      }
#line 2550 "inst_match.m"
                    else
#line 2550 "inst_match.m"
                      {
#line 2550 "inst_match.m"
                      }
#line 2592 "inst_match.m"
            {
#line 2592 "inst_match.m"
              /* direct tailcall eliminated */
#line 2592 "inst_match.m"
              {
#line 2592 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_4;

#line 2592 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2592 "inst_match.m"
              }
#line 2592 "inst_match.m"
              continue;
#line 2592 "inst_match.m"
            }
#line 2588 "inst_match.m"
          }
#line 2588 "inst_match.m"
      }
#line 2588 "inst_match.m"
      break;
#line 2588 "inst_match.m"
    }
#line 2585 "inst_match.m"
}

#line 2574 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(
#line 2574 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2574 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_5,
#line 2574 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2574 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 2574 "inst_match.m"
{
#line 2577 "inst_match.m"
  while (MR_TRUE)
#line 2577 "inst_match.m"
    {
#line 2577 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2577 "inst_match.m"
      {
#line 2577 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 2577 "inst_match.m"
        MR_Word check_hlds__inst_match__BoundInst_3;
#line 2577 "inst_match.m"
        MR_Word check_hlds__inst_match__BoundInsts_4;
#line 2577 "inst_match.m"
        MR_Word check_hlds__inst_match__ArgInsts_7;
#line 2578 "inst_match.m"
        MR_Word check_hlds__inst_match___Functor_6;

#line 2577 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 2577 "inst_match.m"
          {
#line 2577 "inst_match.m"
            check_hlds__inst_match__BoundInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2577 "inst_match.m"
            check_hlds__inst_match__BoundInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2578 "inst_match.m"
            check_hlds__inst_match___Functor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_3, (MR_Integer) 0)));
#line 2578 "inst_match.m"
            check_hlds__inst_match__ArgInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_3, (MR_Integer) 1)));
#line 2580 "inst_match.m"
            {
#line 2580 "inst_match.m"
              check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_7, check_hlds__inst_match__InstVar_5, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 2582 "inst_match.m"
            {
#line 2582 "inst_match.m"
              /* direct tailcall eliminated */
#line 2582 "inst_match.m"
              {
#line 2582 "inst_match.m"
                MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_4;

#line 2582 "inst_match.m"
                check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2582 "inst_match.m"
              }
#line 2582 "inst_match.m"
              continue;
#line 2582 "inst_match.m"
            }
#line 2577 "inst_match.m"
          }
#line 2577 "inst_match.m"
      }
#line 2577 "inst_match.m"
      break;
#line 2577 "inst_match.m"
    }
#line 2574 "inst_match.m"
}

#line 2546 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_inst_var_2_p_0(
#line 2546 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_3,
#line 2546 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 2546 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2546 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 2546 "inst_match.m"
{
#line 2550 "inst_match.m"
  {
#line 2550 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2550 "inst_match.m"
    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2570 "inst_match.m"
      {
#line 2570 "inst_match.m"
        MR_Word check_hlds__inst_match__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 2570 "inst_match.m"
        MR_Word check_hlds__inst_match___Name_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 2571 "inst_match.m"
        {
#line 2571 "inst_match.m"
          check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_19, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2571 "inst_match.m"
          return;
        }
#line 2570 "inst_match.m"
      }
#line 2550 "inst_match.m"
    else
#line 2550 "inst_match.m"
      if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2555 "inst_match.m"
        {
#line 2555 "inst_match.m"
          MR_Word check_hlds__inst_match__InstResults_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 2555 "inst_match.m"
          MR_Word check_hlds__inst_match__BoundInsts_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 3)));
#line 2555 "inst_match.m"
          MR_Word check_hlds__inst_match___Uniq_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 2559 "inst_match.m"
          if ((((check_hlds__inst_match__InstResults_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_match__InstResults_7)) == (MR_mktag((MR_Integer) 1))))))
#line 2563 "inst_match.m"
            {
#line 2563 "inst_match.m"
              check_hlds__inst_match__bound_inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__BoundInsts_8, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2563 "inst_match.m"
              return;
            }
#line 2559 "inst_match.m"
          else
#line 2559 "inst_match.m"
            {
#line 2559 "inst_match.m"
            }
#line 2555 "inst_match.m"
        }
#line 2550 "inst_match.m"
      else
#line 2550 "inst_match.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2552 "inst_match.m"
          {
#line 2552 "inst_match.m"
            MR_Word check_hlds__inst_match__InstName_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));

#line 2553 "inst_match.m"
            {
#line 2553 "inst_match.m"
              check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(check_hlds__inst_match__InstName_5, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2553 "inst_match.m"
              return;
            }
#line 2552 "inst_match.m"
          }
#line 2550 "inst_match.m"
        else
#line 2550 "inst_match.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2566 "inst_match.m"
            {
#line 2566 "inst_match.m"
              MR_Word check_hlds__inst_match__HOInstInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 2)));
#line 2566 "inst_match.m"
              MR_Word check_hlds__inst_match__Modes_15;
#line 2566 "inst_match.m"
              MR_Word check_hlds__inst_match__V_20_20;
#line 2566 "inst_match.m"
              MR_Word check_hlds__inst_match___Uniq_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
#line 2567 "inst_match.m"
              MR_Word check_hlds__inst_match___PredOrFunc_14;
#line 2567 "inst_match.m"
              MR_Word check_hlds__inst_match__V_16_16;
#line 2567 "inst_match.m"
              MR_Word check_hlds__inst_match___Det_17;

#line 2567 "inst_match.m"
              check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HOInstInfo_13)) == (MR_mktag((MR_Integer) 1)));
#line 2567 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 2567 "inst_match.m"
                {
#line 2567 "inst_match.m"
                  check_hlds__inst_match__V_20_20 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfo_13), (MR_Integer) 1);
#line 2567 "inst_match.m"
                  check_hlds__inst_match___PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_20_20, (MR_Integer) 0)));
#line 2567 "inst_match.m"
                  check_hlds__inst_match__Modes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_20_20, (MR_Integer) 1)));
#line 2567 "inst_match.m"
                  check_hlds__inst_match__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_20_20, (MR_Integer) 2)));
#line 2567 "inst_match.m"
                  check_hlds__inst_match___Det_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_20_20, (MR_Integer) 3)));
#line 2568 "inst_match.m"
                  {
#line 2568 "inst_match.m"
                    check_hlds__inst_match__mode_list_contains_inst_var_2_p_0(check_hlds__inst_match__Modes_15, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2568 "inst_match.m"
                    return;
                  }
#line 2567 "inst_match.m"
                }
#line 2566 "inst_match.m"
            }
#line 2550 "inst_match.m"
          else
#line 2550 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2550 "inst_match.m"
              {
#line 2550 "inst_match.m"
                *check_hlds__inst_match__InstVar_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_3, (MR_Integer) 1)));
#line 2550 "inst_match.m"
                {
#line 2550 "inst_match.m"
                  check_hlds__inst_match__cont(check_hlds__inst_match__cont_env_ptr);
#line 2550 "inst_match.m"
                  return;
                }
#line 2550 "inst_match.m"
              }
#line 2550 "inst_match.m"
            else
#line 2550 "inst_match.m"
              {
#line 2550 "inst_match.m"
              }
#line 2550 "inst_match.m"
  }
#line 2546 "inst_match.m"
}

#line 2509 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_name_contains_inst_var_2_p_0(
#line 2509 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_3,
#line 2509 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_4,
#line 2509 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 2509 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 2509 "inst_match.m"
{
#line 2516 "inst_match.m"
  while (MR_TRUE)
#line 2516 "inst_match.m"
    {
#line 2516 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2516 "inst_match.m"
      {
#line 2516 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2516 "inst_match.m"
        if (((MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) == (MR_mktag((MR_Integer) 1))))
#line 2517 "inst_match.m"
          {
#line 2517 "inst_match.m"
            MR_Word check_hlds__inst_match__InstA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));
#line 2517 "inst_match.m"
            MR_Word check_hlds__inst_match__InstB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 2518 "inst_match.m"
            {
#line 2518 "inst_match.m"
              check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstA_7, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
            }
#line 2519 "inst_match.m"
            {
#line 2519 "inst_match.m"
              check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstB_8, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2519 "inst_match.m"
              return;
            }
#line 2517 "inst_match.m"
          }
#line 2516 "inst_match.m"
        else
#line 2516 "inst_match.m"
          if (((MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) == (MR_mktag((MR_Integer) 2))))
#line 2522 "inst_match.m"
            {
#line 2522 "inst_match.m"
              MR_Word check_hlds__inst_match__InstA_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 2522 "inst_match.m"
              MR_Word check_hlds__inst_match__InstB_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 2)));
#line 2522 "inst_match.m"
              MR_Word check_hlds__inst_match___Live_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));
#line 2522 "inst_match.m"
              MR_Word check_hlds__inst_match___Real_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstName_3, (MR_Integer) 3)));

#line 2523 "inst_match.m"
              {
#line 2523 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstA_14, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
              }
#line 2524 "inst_match.m"
              {
#line 2524 "inst_match.m"
                check_hlds__inst_match__inst_contains_inst_var_2_p_0(check_hlds__inst_match__InstB_15, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2524 "inst_match.m"
                return;
              }
#line 2522 "inst_match.m"
            }
#line 2516 "inst_match.m"
          else
#line 2516 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) == (MR_mktag((MR_Integer) 0))))
#line 2514 "inst_match.m"
              {
#line 2514 "inst_match.m"
                MR_Word check_hlds__inst_match__ArgInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 2514 "inst_match.m"
                MR_Word check_hlds__inst_match___Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__InstName_3, (MR_Integer) 0)));

#line 2515 "inst_match.m"
                {
#line 2515 "inst_match.m"
                  check_hlds__inst_match__inst_list_contains_inst_var_2_p_0(check_hlds__inst_match__ArgInsts_6, check_hlds__inst_match__InstVar_4, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2515 "inst_match.m"
                  return;
                }
#line 2514 "inst_match.m"
              }
#line 2516 "inst_match.m"
            else
#line 2516 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2530 "inst_match.m"
                {
#line 2530 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 2530 "inst_match.m"
                  MR_Word check_hlds__inst_match___Live_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 2530 "inst_match.m"
                  MR_Word check_hlds__inst_match___Real_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 2530 "inst_match.m"
                  MR_Word check_hlds__inst_match___Uniq_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);

#line 2531 "inst_match.m"
                  /* direct tailcall eliminated */
#line 2531 "inst_match.m"
                  {
#line 2531 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_25;

#line 2531 "inst_match.m"
                    check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 2531 "inst_match.m"
                  }
#line 2531 "inst_match.m"
                  continue;
#line 2530 "inst_match.m"
                }
#line 2516 "inst_match.m"
              else
#line 2516 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2527 "inst_match.m"
                  {
#line 2527 "inst_match.m"
                    MR_Word check_hlds__inst_match__SubInstName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));
#line 2527 "inst_match.m"
                    MR_Word check_hlds__inst_match___Uniq_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 2527 "inst_match.m"
                    MR_Word check_hlds__inst_match___Live_16 = ((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 2527 "inst_match.m"
                    MR_Word check_hlds__inst_match___Real_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 2528 "inst_match.m"
                    /* direct tailcall eliminated */
#line 2528 "inst_match.m"
                    {
#line 2528 "inst_match.m"
                      MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_11;

#line 2528 "inst_match.m"
                      check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 2528 "inst_match.m"
                    }
#line 2528 "inst_match.m"
                    continue;
#line 2527 "inst_match.m"
                  }
#line 2516 "inst_match.m"
                else
#line 2516 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2536 "inst_match.m"
                    {
#line 2536 "inst_match.m"
                      MR_Word check_hlds__inst_match__SubInstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 2537 "inst_match.m"
                      /* direct tailcall eliminated */
#line 2537 "inst_match.m"
                      {
#line 2537 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_28;

#line 2537 "inst_match.m"
                        check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 2537 "inst_match.m"
                      }
#line 2537 "inst_match.m"
                      continue;
#line 2536 "inst_match.m"
                    }
#line 2516 "inst_match.m"
                  else
#line 2516 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2533 "inst_match.m"
                      {
#line 2533 "inst_match.m"
                        MR_Word check_hlds__inst_match__SubInstName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 2534 "inst_match.m"
                        /* direct tailcall eliminated */
#line 2534 "inst_match.m"
                        {
#line 2534 "inst_match.m"
                          MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_27;

#line 2534 "inst_match.m"
                          check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 2534 "inst_match.m"
                        }
#line 2534 "inst_match.m"
                        continue;
#line 2533 "inst_match.m"
                      }
#line 2516 "inst_match.m"
                    else
#line 2516 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__InstName_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2542 "inst_match.m"
                        {
#line 2542 "inst_match.m"
                          MR_Word check_hlds__inst_match__SubInstName_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 2)));
#line 2542 "inst_match.m"
                          MR_Word check_hlds__inst_match___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstName_3, (MR_Integer) 1)));

#line 2543 "inst_match.m"
                          /* direct tailcall eliminated */
#line 2543 "inst_match.m"
                          {
#line 2543 "inst_match.m"
                            MR_Word check_hlds__inst_match__InstName__tmp_copy_3 = check_hlds__inst_match__SubInstName_32;

#line 2543 "inst_match.m"
                            check_hlds__inst_match__InstName_3 = check_hlds__inst_match__InstName__tmp_copy_3;
#line 2543 "inst_match.m"
                          }
#line 2543 "inst_match.m"
                          continue;
#line 2542 "inst_match.m"
                        }
#line 2516 "inst_match.m"
                      else
#line 2516 "inst_match.m"
                        {
#line 2516 "inst_match.m"
                        }
#line 2516 "inst_match.m"
      }
#line 2516 "inst_match.m"
      break;
#line 2516 "inst_match.m"
    }
#line 2509 "inst_match.m"
}

#line 2490 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_list_contains_instname_6_p_0(
#line 2490 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2490 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2490 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 2490 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__4_4,
#line 2490 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5,
#line 2490 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_6)
#line 2490 "inst_match.m"
{
#line 2493 "inst_match.m"
  while (MR_TRUE)
#line 2493 "inst_match.m"
    {
#line 2493 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2493 "inst_match.m"
      {
#line 2493 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2493 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2493 "inst_match.m"
          {
#line 2493 "inst_match.m"
            *check_hlds__inst_match__HeadVar__4_4 = (MR_Integer) 0;
#line 2493 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_6 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5;
#line 2493 "inst_match.m"
          }
#line 2493 "inst_match.m"
        else
#line 2495 "inst_match.m"
          {
#line 2495 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2495 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2495 "inst_match.m"
            MR_Word check_hlds__inst_match__Contains1_18;
#line 2495 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_21_21;

#line 2496 "inst_match.m"
            {
#line 2496 "inst_match.m"
              check_hlds__inst_match__inst_contains_instname_2_6_p_0(check_hlds__inst_match__Inst_12, check_hlds__inst_match__HeadVar__2_2, check_hlds__inst_match__HeadVar__3_3, &check_hlds__inst_match__Contains1_18, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5, &check_hlds__inst_match__STATE_VARIABLE_Expansions_21_21);
            }
#line 2501 "inst_match.m"
            if ((check_hlds__inst_match__Contains1_18 == (MR_Integer) 0))
#line 2503 "inst_match.m"
              {
#line 2503 "inst_match.m"
                /* direct tailcall eliminated */
#line 2503 "inst_match.m"
                {
#line 2503 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_13;
#line 2503 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_5 = check_hlds__inst_match__STATE_VARIABLE_Expansions_21_21;

#line 2503 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_5;
#line 2503 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2503 "inst_match.m"
                }
#line 2503 "inst_match.m"
                continue;
#line 2503 "inst_match.m"
              }
#line 2501 "inst_match.m"
            else
#line 2499 "inst_match.m"
              {
#line 2500 "inst_match.m"
                *check_hlds__inst_match__HeadVar__4_4 = (MR_Integer) 1;
#line 2500 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Expansions_6 = check_hlds__inst_match__STATE_VARIABLE_Expansions_21_21;
#line 2499 "inst_match.m"
              }
#line 2495 "inst_match.m"
          }
#line 2493 "inst_match.m"
      }
#line 2493 "inst_match.m"
      break;
#line 2493 "inst_match.m"
    }
#line 2490 "inst_match.m"
}

#line 2471 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_contains_instname_6_p_0(
#line 2471 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2471 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2471 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 2471 "inst_match.m"
  MR_Word * check_hlds__inst_match__HeadVar__4_4,
#line 2471 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5,
#line 2471 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_6)
#line 2471 "inst_match.m"
{
#line 2475 "inst_match.m"
  while (MR_TRUE)
#line 2475 "inst_match.m"
    {
#line 2475 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2475 "inst_match.m"
      {
#line 2475 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2475 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2475 "inst_match.m"
          {
#line 2475 "inst_match.m"
            *check_hlds__inst_match__HeadVar__4_4 = (MR_Integer) 0;
#line 2475 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_6 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5;
#line 2475 "inst_match.m"
          }
#line 2475 "inst_match.m"
        else
#line 2477 "inst_match.m"
          {
#line 2477 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2477 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2477 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 1)));
#line 2477 "inst_match.m"
            MR_Word check_hlds__inst_match__Contains1_20;
#line 2477 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_23_23;
#line 2478 "inst_match.m"
            MR_Word check_hlds__inst_match___Functor_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 0)));

#line 2479 "inst_match.m"
            {
#line 2479 "inst_match.m"
              check_hlds__inst_match__inst_list_contains_instname_6_p_0(check_hlds__inst_match__ArgInsts_19, check_hlds__inst_match__HeadVar__2_2, check_hlds__inst_match__HeadVar__3_3, &check_hlds__inst_match__Contains1_20, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5, &check_hlds__inst_match__STATE_VARIABLE_Expansions_23_23);
            }
#line 2484 "inst_match.m"
            if ((check_hlds__inst_match__Contains1_20 == (MR_Integer) 0))
#line 2486 "inst_match.m"
              {
#line 2486 "inst_match.m"
                /* direct tailcall eliminated */
#line 2486 "inst_match.m"
                {
#line 2486 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_13;
#line 2486 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_5 = check_hlds__inst_match__STATE_VARIABLE_Expansions_23_23;

#line 2486 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_5 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_5;
#line 2486 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2486 "inst_match.m"
                }
#line 2486 "inst_match.m"
                continue;
#line 2486 "inst_match.m"
              }
#line 2484 "inst_match.m"
            else
#line 2482 "inst_match.m"
              {
#line 2483 "inst_match.m"
                *check_hlds__inst_match__HeadVar__4_4 = (MR_Integer) 1;
#line 2483 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Expansions_6 = check_hlds__inst_match__STATE_VARIABLE_Expansions_23_23;
#line 2482 "inst_match.m"
              }
#line 2477 "inst_match.m"
          }
#line 2475 "inst_match.m"
      }
#line 2475 "inst_match.m"
      break;
#line 2475 "inst_match.m"
    }
#line 2471 "inst_match.m"
}

#line 2392 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_contains_instname_2_6_p_0(
#line 2392 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_7,
#line 2392 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8,
#line 2392 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_9,
#line 2392 "inst_match.m"
  MR_Word * check_hlds__inst_match__Contains_10,
#line 2392 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32,
#line 2392 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_33)
#line 2392 "inst_match.m"
{
#line 2404 "inst_match.m"
  while (MR_TRUE)
#line 2404 "inst_match.m"
    {
#line 2404 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2404 "inst_match.m"
      {
#line 2404 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2404 "inst_match.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2425 "inst_match.m"
          {
#line 2425 "inst_match.m"
            MR_Word check_hlds__inst_match__InstResults_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 2)));
#line 2425 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 3)));
#line 2425 "inst_match.m"
            MR_Word check_hlds__inst_match___Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));

#line 2446 "inst_match.m"
            if ((check_hlds__inst_match__InstResults_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2466 "inst_match.m"
              {
#line 2466 "inst_match.m"
                check_hlds__inst_match__bound_inst_list_contains_instname_6_p_0(check_hlds__inst_match__ArgInsts_26, check_hlds__inst_match__ModuleInfo_8, check_hlds__inst_match__InstName_9, check_hlds__inst_match__Contains_10, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32, check_hlds__inst_match__STATE_VARIABLE_Expansions_33);
#line 2466 "inst_match.m"
                return;
              }
#line 2446 "inst_match.m"
            else
#line 2446 "inst_match.m"
              if ((check_hlds__inst_match__InstResults_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2444 "inst_match.m"
                {
#line 2445 "inst_match.m"
                  *check_hlds__inst_match__Contains_10 = (MR_Integer) 0;
#line 2445 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Expansions_33 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32;
#line 2444 "inst_match.m"
                }
#line 2446 "inst_match.m"
              else
#line 2447 "inst_match.m"
                {
#line 2447 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstNamesResult_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_25, (MR_Integer) 2)));
#line 2447 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_25, (MR_Integer) 0)));
#line 2447 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_25, (MR_Integer) 1)));
#line 2447 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_25, (MR_Integer) 3)));

#line 2459 "inst_match.m"
                  if ((check_hlds__inst_match__InstNamesResult_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2461 "inst_match.m"
                    {
#line 2461 "inst_match.m"
                      check_hlds__inst_match__bound_inst_list_contains_instname_6_p_0(check_hlds__inst_match__ArgInsts_26, check_hlds__inst_match__ModuleInfo_8, check_hlds__inst_match__InstName_9, check_hlds__inst_match__Contains_10, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32, check_hlds__inst_match__STATE_VARIABLE_Expansions_33);
#line 2461 "inst_match.m"
                      return;
                    }
#line 2459 "inst_match.m"
                  else
#line 2450 "inst_match.m"
                    {
#line 2450 "inst_match.m"
                      MR_Word check_hlds__inst_match__InstNameSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstNamesResult_29, (MR_Integer) 0)));

#line 2451 "inst_match.m"
                      {
#line 2451 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, check_hlds__inst_match__InstNameSet_31, ((MR_Box) (check_hlds__inst_match__InstName_9)));
                      }
#line 2456 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 2454 "inst_match.m"
                        {
#line 2454 "inst_match.m"
                          check_hlds__inst_match__bound_inst_list_contains_instname_6_p_0(check_hlds__inst_match__ArgInsts_26, check_hlds__inst_match__ModuleInfo_8, check_hlds__inst_match__InstName_9, check_hlds__inst_match__Contains_10, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32, check_hlds__inst_match__STATE_VARIABLE_Expansions_33);
#line 2454 "inst_match.m"
                          return;
                        }
#line 2456 "inst_match.m"
                      else
#line 2457 "inst_match.m"
                        {
#line 2457 "inst_match.m"
                          *check_hlds__inst_match__Contains_10 = (MR_Integer) 0;
#line 2457 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Expansions_33 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32;
#line 2457 "inst_match.m"
                        }
#line 2450 "inst_match.m"
                    }
#line 2447 "inst_match.m"
                }
#line 2425 "inst_match.m"
          }
#line 2404 "inst_match.m"
        else
#line 2404 "inst_match.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2407 "inst_match.m"
            {
#line 2407 "inst_match.m"
              MR_Word check_hlds__inst_match__SubInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 2)));
#line 2407 "inst_match.m"
              MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));

#line 2408 "inst_match.m"
              /* direct tailcall eliminated */
#line 2408 "inst_match.m"
              {
#line 2408 "inst_match.m"
                MR_Word check_hlds__inst_match__Inst__tmp_copy_7 = check_hlds__inst_match__SubInst_21;

#line 2408 "inst_match.m"
                check_hlds__inst_match__Inst_7 = check_hlds__inst_match__Inst__tmp_copy_7;
#line 2408 "inst_match.m"
              }
#line 2408 "inst_match.m"
              continue;
#line 2407 "inst_match.m"
            }
#line 2404 "inst_match.m"
          else
#line 2404 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2411 "inst_match.m"
              {
#line 2411 "inst_match.m"
                MR_Word check_hlds__inst_match__ThisInstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));

#line 2412 "inst_match.m"
                {
#line 2412 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(check_hlds__inst_match__InstName_9, check_hlds__inst_match__ThisInstName_22);
                }
#line 2414 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 2413 "inst_match.m"
                  {
#line 2413 "inst_match.m"
                    *check_hlds__inst_match__Contains_10 = (MR_Integer) 1;
#line 2413 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Expansions_33 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32;
#line 2413 "inst_match.m"
                  }
#line 2414 "inst_match.m"
                else
#line 2417 "inst_match.m"
                  {
#line 2415 "inst_match.m"
                    {
#line 2415 "inst_match.m"
                      check_hlds__inst_match__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__ThisInstName_22)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32);
                    }
#line 2417 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 2416 "inst_match.m"
                      {
#line 2416 "inst_match.m"
                        *check_hlds__inst_match__Contains_10 = (MR_Integer) 0;
#line 2416 "inst_match.m"
                        *check_hlds__inst_match__STATE_VARIABLE_Expansions_33 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32;
#line 2416 "inst_match.m"
                      }
#line 2417 "inst_match.m"
                    else
#line 2418 "inst_match.m"
                      {
#line 2418 "inst_match.m"
                        MR_Word check_hlds__inst_match__ThisInst_23;
#line 2418 "inst_match.m"
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_37_37;

#line 2418 "inst_match.m"
                        {
#line 2418 "inst_match.m"
                          check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_8, check_hlds__inst_match__ThisInstName_22, &check_hlds__inst_match__ThisInst_23);
                        }
#line 2419 "inst_match.m"
                        {
#line 2419 "inst_match.m"
                          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__ThisInstName_22)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32, &check_hlds__inst_match__STATE_VARIABLE_Expansions_37_37);
                        }
#line 2420 "inst_match.m"
                        /* direct tailcall eliminated */
#line 2420 "inst_match.m"
                        {
#line 2420 "inst_match.m"
                          MR_Word check_hlds__inst_match__Inst__tmp_copy_7 = check_hlds__inst_match__ThisInst_23;
#line 2420 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_32 = check_hlds__inst_match__STATE_VARIABLE_Expansions_37_37;

#line 2420 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_32;
#line 2420 "inst_match.m"
                          check_hlds__inst_match__Inst_7 = check_hlds__inst_match__Inst__tmp_copy_7;
#line 2420 "inst_match.m"
                        }
#line 2420 "inst_match.m"
                        continue;
#line 2418 "inst_match.m"
                      }
#line 2417 "inst_match.m"
                  }
#line 2411 "inst_match.m"
              }
#line 2404 "inst_match.m"
            else
#line 2404 "inst_match.m"
              {
#line 2405 "inst_match.m"
                *check_hlds__inst_match__Contains_10 = (MR_Integer) 0;
#line 2405 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Expansions_33 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_32;
#line 2404 "inst_match.m"
              }
#line 2404 "inst_match.m"
      }
#line 2404 "inst_match.m"
      break;
#line 2404 "inst_match.m"
    }
#line 2392 "inst_match.m"
}

#line 2338 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_not_fully_unique_2_4_p_0(
#line 2338 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2338 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2338 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2338 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2338 "inst_match.m"
{
#line 2341 "inst_match.m"
  while (MR_TRUE)
#line 2341 "inst_match.m"
    {
#line 2341 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2341 "inst_match.m"
      {
#line 2341 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2341 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2341 "inst_match.m"
          {
#line 2341 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2341 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2341 "inst_match.m"
          }
#line 2341 "inst_match.m"
        else
#line 2342 "inst_match.m"
          {
#line 2342 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2342 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2342 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2343 "inst_match.m"
            {
#line 2343 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_9, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15);
            }
#line 2342 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2344 "inst_match.m"
              {
#line 2344 "inst_match.m"
                /* direct tailcall eliminated */
#line 2344 "inst_match.m"
                {
#line 2344 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_10;
#line 2344 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2344 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2344 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2344 "inst_match.m"
                }
#line 2344 "inst_match.m"
                continue;
#line 2344 "inst_match.m"
              }
#line 2342 "inst_match.m"
          }
#line 2341 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2341 "inst_match.m"
      }
#line 2341 "inst_match.m"
      break;
#line 2341 "inst_match.m"
    }
#line 2338 "inst_match.m"
}

#line 2330 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_not_partly_unique_2_4_p_0(
#line 2330 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2330 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2330 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2330 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2330 "inst_match.m"
{
#line 2333 "inst_match.m"
  while (MR_TRUE)
#line 2333 "inst_match.m"
    {
#line 2333 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2333 "inst_match.m"
      {
#line 2333 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2333 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2333 "inst_match.m"
          {
#line 2333 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2333 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2333 "inst_match.m"
          }
#line 2333 "inst_match.m"
        else
#line 2334 "inst_match.m"
          {
#line 2334 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2334 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2334 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2335 "inst_match.m"
            {
#line 2335 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_9, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15);
            }
#line 2334 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2336 "inst_match.m"
              {
#line 2336 "inst_match.m"
                /* direct tailcall eliminated */
#line 2336 "inst_match.m"
                {
#line 2336 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_10;
#line 2336 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2336 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2336 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2336 "inst_match.m"
                }
#line 2336 "inst_match.m"
                continue;
#line 2336 "inst_match.m"
              }
#line 2334 "inst_match.m"
          }
#line 2333 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2333 "inst_match.m"
      }
#line 2333 "inst_match.m"
      break;
#line 2333 "inst_match.m"
    }
#line 2330 "inst_match.m"
}

#line 2322 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_mostly_unique_2_4_p_0(
#line 2322 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2322 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2322 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2322 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2322 "inst_match.m"
{
#line 2325 "inst_match.m"
  while (MR_TRUE)
#line 2325 "inst_match.m"
    {
#line 2325 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2325 "inst_match.m"
      {
#line 2325 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2325 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2325 "inst_match.m"
          {
#line 2325 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2325 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2325 "inst_match.m"
          }
#line 2325 "inst_match.m"
        else
#line 2326 "inst_match.m"
          {
#line 2326 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2326 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2326 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2327 "inst_match.m"
            {
#line 2327 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_9, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15);
            }
#line 2326 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2328 "inst_match.m"
              {
#line 2328 "inst_match.m"
                /* direct tailcall eliminated */
#line 2328 "inst_match.m"
                {
#line 2328 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_10;
#line 2328 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2328 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2328 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2328 "inst_match.m"
                }
#line 2328 "inst_match.m"
                continue;
#line 2328 "inst_match.m"
              }
#line 2326 "inst_match.m"
          }
#line 2325 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2325 "inst_match.m"
      }
#line 2325 "inst_match.m"
      break;
#line 2325 "inst_match.m"
    }
#line 2322 "inst_match.m"
}

#line 2314 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_unique_2_4_p_0(
#line 2314 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2314 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2314 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2314 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2314 "inst_match.m"
{
#line 2317 "inst_match.m"
  while (MR_TRUE)
#line 2317 "inst_match.m"
    {
#line 2317 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2317 "inst_match.m"
      {
#line 2317 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2317 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2317 "inst_match.m"
          {
#line 2317 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2317 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2317 "inst_match.m"
          }
#line 2317 "inst_match.m"
        else
#line 2318 "inst_match.m"
          {
#line 2318 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2318 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2318 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2319 "inst_match.m"
            {
#line 2319 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_9, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15);
            }
#line 2318 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2320 "inst_match.m"
              {
#line 2320 "inst_match.m"
                /* direct tailcall eliminated */
#line 2320 "inst_match.m"
                {
#line 2320 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_10;
#line 2320 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2320 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2320 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2320 "inst_match.m"
                }
#line 2320 "inst_match.m"
                continue;
#line 2320 "inst_match.m"
              }
#line 2318 "inst_match.m"
          }
#line 2317 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2317 "inst_match.m"
      }
#line 2317 "inst_match.m"
      break;
#line 2317 "inst_match.m"
    }
#line 2314 "inst_match.m"
}

#line 2306 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_or_any_2_4_p_0(
#line 2306 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2306 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2306 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2306 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2306 "inst_match.m"
{
#line 2309 "inst_match.m"
  while (MR_TRUE)
#line 2309 "inst_match.m"
    {
#line 2309 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2309 "inst_match.m"
      {
#line 2309 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2309 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2309 "inst_match.m"
          {
#line 2309 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2309 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2309 "inst_match.m"
          }
#line 2309 "inst_match.m"
        else
#line 2310 "inst_match.m"
          {
#line 2310 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2310 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2310 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2311 "inst_match.m"
            {
#line 2311 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_9, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15);
            }
#line 2310 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2312 "inst_match.m"
              {
#line 2312 "inst_match.m"
                /* direct tailcall eliminated */
#line 2312 "inst_match.m"
                {
#line 2312 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_10;
#line 2312 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_15_15;

#line 2312 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2312 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2312 "inst_match.m"
                }
#line 2312 "inst_match.m"
                continue;
#line 2312 "inst_match.m"
              }
#line 2310 "inst_match.m"
          }
#line 2309 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2309 "inst_match.m"
      }
#line 2309 "inst_match.m"
      break;
#line 2309 "inst_match.m"
    }
#line 2306 "inst_match.m"
}

#line 2292 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_mt_2_5_p_0(
#line 2292 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2292 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2292 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 2292 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4,
#line 2292 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_5)
#line 2292 "inst_match.m"
{
#line 2296 "inst_match.m"
  while (MR_TRUE)
#line 2296 "inst_match.m"
    {
#line 2296 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2296 "inst_match.m"
      {
#line 2296 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2296 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2296 "inst_match.m"
          {
#line 2296 "inst_match.m"
            if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2296 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Expansions_5 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4;
#line 2296 "inst_match.m"
            else
#line 2297 "inst_match.m"
              {
#line 2298 "inst_match.m"
                {
#line 2298 "inst_match.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
                }
#line 2297 "inst_match.m"
              }
#line 2296 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2296 "inst_match.m"
          }
#line 2296 "inst_match.m"
        else
#line 2296 "inst_match.m"
          {
#line 2296 "inst_match.m"
            MR_Word check_hlds__inst_match__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2296 "inst_match.m"
            MR_Word check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));

#line 2296 "inst_match.m"
            if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2299 "inst_match.m"
              {
#line 2300 "inst_match.m"
                {
#line 2300 "inst_match.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
                }
#line 2299 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 2299 "inst_match.m"
              }
#line 2296 "inst_match.m"
            else
#line 2302 "inst_match.m"
              {
#line 2302 "inst_match.m"
                MR_Word check_hlds__inst_match__MaybeType_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 2302 "inst_match.m"
                MR_Word check_hlds__inst_match__MaybeTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 2302 "inst_match.m"
                MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_36_36;
#line 1709 "inst_match.m"
                MR_Word check_hlds__inst_match__V_46_46;
#line 1709 "inst_match.m"
                MR_Word check_hlds__inst_match__V_47_47;

#line 1709 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__V_39_39)) == (MR_mktag((MR_Integer) 2)));
#line 1709 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1709 "inst_match.m"
                  {
#line 1709 "inst_match.m"
                    check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__V_39_39, (MR_Integer) 0)));
#line 1709 "inst_match.m"
                    check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__V_39_39, (MR_Integer) 1)));
#line 1710 "inst_match.m"
                    {
#line 1710 "inst_match.m"
                      check_hlds__inst_match__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4, ((MR_Box) (check_hlds__inst_match__V_39_39)));
                    }
#line 1712 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1710 "inst_match.m"
                      {
#line 1710 "inst_match.m"
                        check_hlds__inst_match__STATE_VARIABLE_Expansions_36_36 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4;
#line 1710 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1710 "inst_match.m"
                      }
#line 1712 "inst_match.m"
                    else
#line 1713 "inst_match.m"
                      {
#line 1713 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_mt_2_5_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__MaybeType_30, check_hlds__inst_match__V_39_39, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_match__STATE_VARIABLE_Expansions_36_36);
                      }
#line 1709 "inst_match.m"
                  }
#line 1709 "inst_match.m"
                else
#line 1720 "inst_match.m"
                  {
#line 1720 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_49;

#line 1717 "inst_match.m"
                    {
#line 1717 "inst_match.m"
                      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__V_39_39)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_49);
                    }
#line 1720 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1719 "inst_match.m"
                      {
#line 1719 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_mt_2_5_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__MaybeType_30, check_hlds__inst_match__V_39_39, check_hlds__inst_match__STATE_VARIABLE_Expansions_15_49, &check_hlds__inst_match__STATE_VARIABLE_Expansions_36_36);
                      }
#line 1720 "inst_match.m"
                    else
#line 1719 "inst_match.m"
                      {
#line 1719 "inst_match.m"
                        check_hlds__inst_match__STATE_VARIABLE_Expansions_36_36 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4;
#line 1719 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1719 "inst_match.m"
                      }
#line 1720 "inst_match.m"
                  }
#line 2302 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 2304 "inst_match.m"
                  {
#line 2304 "inst_match.m"
                    /* direct tailcall eliminated */
#line 2304 "inst_match.m"
                    {
#line 2304 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__V_38_38;
#line 2304 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__MaybeTypes_31;
#line 2304 "inst_match.m"
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_36_36;

#line 2304 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2304 "inst_match.m"
                      check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 2304 "inst_match.m"
                      check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2304 "inst_match.m"
                    }
#line 2304 "inst_match.m"
                    continue;
#line 2304 "inst_match.m"
                  }
#line 2302 "inst_match.m"
              }
#line 2296 "inst_match.m"
          }
#line 2296 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2296 "inst_match.m"
      }
#line 2296 "inst_match.m"
      break;
#line 2296 "inst_match.m"
    }
#line 2292 "inst_match.m"
}

#line 2252 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_mt_3_p_0(
#line 2252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2252 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 2252 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3)
#line 2252 "inst_match.m"
{
#line 2255 "inst_match.m"
  while (MR_TRUE)
#line 2255 "inst_match.m"
    {
#line 2255 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2255 "inst_match.m"
      {
#line 2255 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2255 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2255 "inst_match.m"
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2255 "inst_match.m"
        else
#line 2256 "inst_match.m"
          {
#line 2256 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_9_15;
#line 2256 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2256 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2256 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_7;
#line 2256 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_8;
#line 2256 "inst_match.m"
            MR_Word check_hlds__inst_match__Expansions0_13;
#line 1709 "inst_match.m"
            MR_Word check_hlds__inst_match__V_22_22;
#line 1709 "inst_match.m"
            MR_Word check_hlds__inst_match__V_23_23;

#line 2256 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2256 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2256 "inst_match.m"
              {
#line 2256 "inst_match.m"
                check_hlds__inst_match__MaybeType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 2256 "inst_match.m"
                check_hlds__inst_match__MaybeTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 7361 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_9_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1695 "inst_match.m"
                {
#line 1695 "inst_match.m"
                  check_hlds__inst_match__Expansions0_13 = mercury__set_tree234__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_9_15);
                }
#line 1709 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__Inst_5)) == (MR_mktag((MR_Integer) 2)));
#line 1709 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1709 "inst_match.m"
                  {
#line 1709 "inst_match.m"
                    check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_5, (MR_Integer) 0)));
#line 1709 "inst_match.m"
                    check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_5, (MR_Integer) 1)));
#line 1710 "inst_match.m"
                    {
#line 1710 "inst_match.m"
                      check_hlds__inst_match__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__Expansions0_13, ((MR_Box) (check_hlds__inst_match__Inst_5)));
                    }
#line 1712 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1710 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1712 "inst_match.m"
                    else
#line 1713 "inst_match.m"
                      {
#line 1713 "inst_match.m"
                        MR_Word check_hlds__inst_match___Expansions_29;

#line 1713 "inst_match.m"
                        {
#line 1713 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_mt_2_5_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__Inst_5, check_hlds__inst_match__Expansions0_13, &check_hlds__inst_match___Expansions_29);
                        }
#line 1713 "inst_match.m"
                      }
#line 1709 "inst_match.m"
                  }
#line 1709 "inst_match.m"
                else
#line 1720 "inst_match.m"
                  {
#line 1720 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_25;

#line 1717 "inst_match.m"
                    {
#line 1717 "inst_match.m"
                      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__Inst_5)), check_hlds__inst_match__Expansions0_13, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_25);
                    }
#line 1720 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1719 "inst_match.m"
                      {
#line 1719 "inst_match.m"
                        MR_Word check_hlds__inst_match___Expansions_30;

#line 1719 "inst_match.m"
                        {
#line 1719 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_mt_2_5_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__Inst_5, check_hlds__inst_match__STATE_VARIABLE_Expansions_15_25, &check_hlds__inst_match___Expansions_30);
                        }
#line 1719 "inst_match.m"
                      }
#line 1720 "inst_match.m"
                    else
#line 1719 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1720 "inst_match.m"
                  }
#line 2256 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 2258 "inst_match.m"
                  {
#line 2258 "inst_match.m"
                    /* direct tailcall eliminated */
#line 2258 "inst_match.m"
                    {
#line 2258 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_6;
#line 2258 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__MaybeTypes_8;

#line 2258 "inst_match.m"
                      check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 2258 "inst_match.m"
                      check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2258 "inst_match.m"
                    }
#line 2258 "inst_match.m"
                    continue;
#line 2258 "inst_match.m"
                  }
#line 2256 "inst_match.m"
              }
#line 2256 "inst_match.m"
          }
#line 2255 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2255 "inst_match.m"
      }
#line 2255 "inst_match.m"
      break;
#line 2255 "inst_match.m"
    }
#line 2252 "inst_match.m"
}

#line 2239 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_not_fully_unique_2_4_p_0(
#line 2239 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2239 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2239 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2239 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2239 "inst_match.m"
{
#line 2242 "inst_match.m"
  while (MR_TRUE)
#line 2242 "inst_match.m"
    {
#line 2242 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2242 "inst_match.m"
      {
#line 2242 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2242 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2242 "inst_match.m"
          {
#line 2242 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2242 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2242 "inst_match.m"
          }
#line 2242 "inst_match.m"
        else
#line 2244 "inst_match.m"
          {
#line 2244 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2244 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2244 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 1)));
#line 2244 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;
#line 2245 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 0)));

#line 2246 "inst_match.m"
            {
#line 2246 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_not_fully_unique_2_4_p_0(check_hlds__inst_match__Args_14, check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17);
            }
#line 2244 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2247 "inst_match.m"
              {
#line 2247 "inst_match.m"
                /* direct tailcall eliminated */
#line 2247 "inst_match.m"
                {
#line 2247 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_10;
#line 2247 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;

#line 2247 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2247 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2247 "inst_match.m"
                }
#line 2247 "inst_match.m"
                continue;
#line 2247 "inst_match.m"
              }
#line 2244 "inst_match.m"
          }
#line 2242 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2242 "inst_match.m"
      }
#line 2242 "inst_match.m"
      break;
#line 2242 "inst_match.m"
    }
#line 2239 "inst_match.m"
}

#line 2228 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_not_partly_unique_2_4_p_0(
#line 2228 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2228 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2228 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2228 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2228 "inst_match.m"
{
#line 2231 "inst_match.m"
  while (MR_TRUE)
#line 2231 "inst_match.m"
    {
#line 2231 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2231 "inst_match.m"
      {
#line 2231 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2231 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2231 "inst_match.m"
          {
#line 2231 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2231 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2231 "inst_match.m"
          }
#line 2231 "inst_match.m"
        else
#line 2233 "inst_match.m"
          {
#line 2233 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2233 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2233 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 1)));
#line 2233 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;
#line 2234 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 0)));

#line 2235 "inst_match.m"
            {
#line 2235 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_not_partly_unique_2_4_p_0(check_hlds__inst_match__Args_14, check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17);
            }
#line 2233 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2236 "inst_match.m"
              {
#line 2236 "inst_match.m"
                /* direct tailcall eliminated */
#line 2236 "inst_match.m"
                {
#line 2236 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_10;
#line 2236 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;

#line 2236 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2236 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2236 "inst_match.m"
                }
#line 2236 "inst_match.m"
                continue;
#line 2236 "inst_match.m"
              }
#line 2233 "inst_match.m"
          }
#line 2231 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2231 "inst_match.m"
      }
#line 2231 "inst_match.m"
      break;
#line 2231 "inst_match.m"
    }
#line 2228 "inst_match.m"
}

#line 2218 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_mostly_unique_2_4_p_0(
#line 2218 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2218 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2218 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2218 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2218 "inst_match.m"
{
#line 2221 "inst_match.m"
  while (MR_TRUE)
#line 2221 "inst_match.m"
    {
#line 2221 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2221 "inst_match.m"
      {
#line 2221 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2221 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2221 "inst_match.m"
          {
#line 2221 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2221 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2221 "inst_match.m"
          }
#line 2221 "inst_match.m"
        else
#line 2223 "inst_match.m"
          {
#line 2223 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2223 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2223 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 1)));
#line 2223 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;
#line 2224 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 0)));

#line 2225 "inst_match.m"
            {
#line 2225 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_mostly_unique_2_4_p_0(check_hlds__inst_match__Args_14, check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17);
            }
#line 2223 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2226 "inst_match.m"
              {
#line 2226 "inst_match.m"
                /* direct tailcall eliminated */
#line 2226 "inst_match.m"
                {
#line 2226 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_10;
#line 2226 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;

#line 2226 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2226 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2226 "inst_match.m"
                }
#line 2226 "inst_match.m"
                continue;
#line 2226 "inst_match.m"
              }
#line 2223 "inst_match.m"
          }
#line 2221 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2221 "inst_match.m"
      }
#line 2221 "inst_match.m"
      break;
#line 2221 "inst_match.m"
    }
#line 2218 "inst_match.m"
}

#line 2208 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_unique_2_4_p_0(
#line 2208 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2208 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2208 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2208 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2208 "inst_match.m"
{
#line 2211 "inst_match.m"
  while (MR_TRUE)
#line 2211 "inst_match.m"
    {
#line 2211 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2211 "inst_match.m"
      {
#line 2211 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2211 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2211 "inst_match.m"
          {
#line 2211 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2211 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2211 "inst_match.m"
          }
#line 2211 "inst_match.m"
        else
#line 2213 "inst_match.m"
          {
#line 2213 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2213 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2213 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 1)));
#line 2213 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;
#line 2214 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 0)));

#line 2215 "inst_match.m"
            {
#line 2215 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_unique_2_4_p_0(check_hlds__inst_match__Args_14, check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17);
            }
#line 2213 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2216 "inst_match.m"
              {
#line 2216 "inst_match.m"
                /* direct tailcall eliminated */
#line 2216 "inst_match.m"
                {
#line 2216 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_10;
#line 2216 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;

#line 2216 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2216 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2216 "inst_match.m"
                }
#line 2216 "inst_match.m"
                continue;
#line 2216 "inst_match.m"
              }
#line 2213 "inst_match.m"
          }
#line 2211 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2211 "inst_match.m"
      }
#line 2211 "inst_match.m"
      break;
#line 2211 "inst_match.m"
    }
#line 2208 "inst_match.m"
}

#line 2198 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_4_p_0(
#line 2198 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2198 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2,
#line 2198 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3,
#line 2198 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_4)
#line 2198 "inst_match.m"
{
#line 2201 "inst_match.m"
  while (MR_TRUE)
#line 2201 "inst_match.m"
    {
#line 2201 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2201 "inst_match.m"
      {
#line 2201 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2201 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2201 "inst_match.m"
          {
#line 2201 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3;
#line 2201 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2201 "inst_match.m"
          }
#line 2201 "inst_match.m"
        else
#line 2203 "inst_match.m"
          {
#line 2203 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2203 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2203 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 1)));
#line 2203 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;
#line 2204 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_9, (MR_Integer) 0)));

#line 2205 "inst_match.m"
            {
#line 2205 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_match__Args_14, check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17);
            }
#line 2203 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2206 "inst_match.m"
              {
#line 2206 "inst_match.m"
                /* direct tailcall eliminated */
#line 2206 "inst_match.m"
                {
#line 2206 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_10;
#line 2206 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_17_17;

#line 2206 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_3;
#line 2206 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2206 "inst_match.m"
                }
#line 2206 "inst_match.m"
                continue;
#line 2206 "inst_match.m"
              }
#line 2203 "inst_match.m"
          }
#line 2201 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2201 "inst_match.m"
      }
#line 2201 "inst_match.m"
      break;
#line 2201 "inst_match.m"
    }
#line 2198 "inst_match.m"
}

#line 2171 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(
#line 2171 "inst_match.m"
  MR_Word check_hlds__inst_match__InstResults_6,
#line 2171 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_7,
#line 2171 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8,
#line 2171 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_14,
#line 2171 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_15)
#line 2171 "inst_match.m"
{
#line 2180 "inst_match.m"
  {
#line 2180 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2180 "inst_match.m"
    if ((check_hlds__inst_match__InstResults_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2195 "inst_match.m"
      {
#line 2195 "inst_match.m"
        return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_match__BoundInsts_7, check_hlds__inst_match__ModuleInfo_8, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_14, check_hlds__inst_match__STATE_VARIABLE_Expansions_15);
      }
#line 2180 "inst_match.m"
    else
#line 2180 "inst_match.m"
      if ((check_hlds__inst_match__InstResults_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2179 "inst_match.m"
        {
#line 2179 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Expansions_15 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_14;
#line 2179 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2179 "inst_match.m"
        }
#line 2180 "inst_match.m"
      else
#line 2181 "inst_match.m"
        {
#line 2181 "inst_match.m"
          MR_Word check_hlds__inst_match__GroundnessResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_6, (MR_Integer) 0)));
#line 2181 "inst_match.m"
          MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_6, (MR_Integer) 1)));
#line 2181 "inst_match.m"
          MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_6, (MR_Integer) 2)));
#line 2181 "inst_match.m"
          MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_6, (MR_Integer) 3)));

#line 2185 "inst_match.m"
          if ((check_hlds__inst_match__GroundnessResult_10 == (MR_Integer) 2))
#line 2190 "inst_match.m"
            {
#line 2190 "inst_match.m"
              return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_match__BoundInsts_7, check_hlds__inst_match__ModuleInfo_8, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_14, check_hlds__inst_match__STATE_VARIABLE_Expansions_15);
            }
#line 2185 "inst_match.m"
          else
#line 2185 "inst_match.m"
            if ((check_hlds__inst_match__GroundnessResult_10 == (MR_Integer) 1))
#line 2184 "inst_match.m"
              {
#line 2184 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Expansions_15 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_14;
#line 2184 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 2184 "inst_match.m"
              }
#line 2185 "inst_match.m"
            else
#line 2185 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 2181 "inst_match.m"
        }
#line 2180 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2180 "inst_match.m"
  }
#line 2171 "inst_match.m"
}

#line 2157 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_ground_mt_2_5_p_0(
#line 2157 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2157 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_2,
#line 2157 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 2157 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4,
#line 2157 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_5)
#line 2157 "inst_match.m"
{
#line 2161 "inst_match.m"
  while (MR_TRUE)
#line 2161 "inst_match.m"
    {
#line 2161 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2161 "inst_match.m"
      {
#line 2161 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2161 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2161 "inst_match.m"
          {
#line 2161 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_5 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4;
#line 2161 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2161 "inst_match.m"
          }
#line 2161 "inst_match.m"
        else
#line 2163 "inst_match.m"
          {
#line 2163 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2163 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2163 "inst_match.m"
            MR_Word check_hlds__inst_match__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_11, (MR_Integer) 0)));
#line 2163 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_11, (MR_Integer) 1)));
#line 2163 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_18;
#line 2163 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_21_21;
#line 2163 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_22_22;

#line 2165 "inst_match.m"
            {
#line 2165 "inst_match.m"
              check_hlds__inst_match__V_21_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__Args_17);
            }
#line 2165 "inst_match.m"
            {
#line 2165 "inst_match.m"
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__MaybeType_2, check_hlds__inst_match__Name_16, check_hlds__inst_match__V_21_21, &check_hlds__inst_match__MaybeTypes_18);
            }
#line 2167 "inst_match.m"
            {
#line 2167 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_match__Args_17, check_hlds__inst_match__MaybeTypes_18, check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_match__STATE_VARIABLE_Expansions_22_22);
            }
#line 2163 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2168 "inst_match.m"
              {
#line 2168 "inst_match.m"
                /* direct tailcall eliminated */
#line 2168 "inst_match.m"
                {
#line 2168 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_12;
#line 2168 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_22_22;

#line 2168 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_4;
#line 2168 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2168 "inst_match.m"
                }
#line 2168 "inst_match.m"
                continue;
#line 2168 "inst_match.m"
              }
#line 2163 "inst_match.m"
          }
#line 2161 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2161 "inst_match.m"
      }
#line 2161 "inst_match.m"
      break;
#line 2161 "inst_match.m"
    }
#line 2157 "inst_match.m"
}

#line 2129 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__InstResults_7,
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_8,
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_9,
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_10,
#line 2129 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_16,
#line 2129 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_17)
#line 2129 "inst_match.m"
{
#line 2138 "inst_match.m"
  {
#line 2138 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2138 "inst_match.m"
    if ((check_hlds__inst_match__InstResults_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2153 "inst_match.m"
      {
#line 2153 "inst_match.m"
        return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_match__BoundInsts_8, check_hlds__inst_match__MaybeType_9, check_hlds__inst_match__ModuleInfo_10, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_16, check_hlds__inst_match__STATE_VARIABLE_Expansions_17);
      }
#line 2138 "inst_match.m"
    else
#line 2138 "inst_match.m"
      if ((check_hlds__inst_match__InstResults_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2137 "inst_match.m"
        {
#line 2137 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Expansions_17 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_16;
#line 2137 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2137 "inst_match.m"
        }
#line 2138 "inst_match.m"
      else
#line 2139 "inst_match.m"
        {
#line 2139 "inst_match.m"
          MR_Word check_hlds__inst_match__GroundnessResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 0)));
#line 2139 "inst_match.m"
          MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 1)));
#line 2139 "inst_match.m"
          MR_Word check_hlds__inst_match__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 2)));
#line 2139 "inst_match.m"
          MR_Word check_hlds__inst_match__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_7, (MR_Integer) 3)));

#line 2143 "inst_match.m"
          if ((check_hlds__inst_match__GroundnessResult_12 == (MR_Integer) 2))
#line 2148 "inst_match.m"
            {
#line 2148 "inst_match.m"
              return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_match__BoundInsts_8, check_hlds__inst_match__MaybeType_9, check_hlds__inst_match__ModuleInfo_10, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_16, check_hlds__inst_match__STATE_VARIABLE_Expansions_17);
            }
#line 2143 "inst_match.m"
          else
#line 2143 "inst_match.m"
            if ((check_hlds__inst_match__GroundnessResult_12 == (MR_Integer) 1))
#line 2142 "inst_match.m"
              {
#line 2142 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Expansions_17 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_16;
#line 2142 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 2142 "inst_match.m"
              }
#line 2143 "inst_match.m"
            else
#line 2143 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 2139 "inst_match.m"
        }
#line 2138 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2138 "inst_match.m"
  }
#line 2129 "inst_match.m"
}

#line 2072 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(
#line 2072 "inst_match.m"
  MR_Word check_hlds__inst_match__InstResults_4,
#line 2072 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_5,
#line 2072 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 2072 "inst_match.m"
{
#line 2080 "inst_match.m"
  {
#line 2080 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2080 "inst_match.m"
    if ((check_hlds__inst_match__InstResults_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2094 "inst_match.m"
      {
#line 2094 "inst_match.m"
        return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
      }
#line 2080 "inst_match.m"
    else
#line 2080 "inst_match.m"
      if ((check_hlds__inst_match__InstResults_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2079 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 2080 "inst_match.m"
      else
#line 2081 "inst_match.m"
        {
#line 2081 "inst_match.m"
          MR_Word check_hlds__inst_match__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_4, (MR_Integer) 0)));
#line 2081 "inst_match.m"
          MR_Word check_hlds__inst_match__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_4, (MR_Integer) 1)));
#line 2081 "inst_match.m"
          MR_Word check_hlds__inst_match__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_4, (MR_Integer) 2)));
#line 2081 "inst_match.m"
          MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_4, (MR_Integer) 3)));

#line 2085 "inst_match.m"
          if ((check_hlds__inst_match__GroundnessResult_7 == (MR_Integer) 2))
#line 2090 "inst_match.m"
            {
#line 2090 "inst_match.m"
              return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
            }
#line 2085 "inst_match.m"
          else
#line 2085 "inst_match.m"
            if ((check_hlds__inst_match__GroundnessResult_7 == (MR_Integer) 1))
#line 2084 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 2085 "inst_match.m"
            else
#line 2085 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 2081 "inst_match.m"
        }
#line 2080 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2080 "inst_match.m"
  }
#line 2072 "inst_match.m"
}

#line 2060 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_ground_mt_3_p_0(
#line 2060 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 2060 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_2,
#line 2060 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3)
#line 2060 "inst_match.m"
{
#line 2063 "inst_match.m"
  while (MR_TRUE)
#line 2063 "inst_match.m"
    {
#line 2063 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2063 "inst_match.m"
      {
#line 2063 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2063 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2063 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2063 "inst_match.m"
        else
#line 2065 "inst_match.m"
          {
#line 2065 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2065 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2065 "inst_match.m"
            MR_Word check_hlds__inst_match__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_6, (MR_Integer) 0)));
#line 2065 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_6, (MR_Integer) 1)));
#line 2065 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_12;
#line 2065 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_13_13;

#line 2067 "inst_match.m"
            {
#line 2067 "inst_match.m"
              check_hlds__inst_match__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__Args_11);
            }
#line 2067 "inst_match.m"
            {
#line 2067 "inst_match.m"
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__MaybeType_2, check_hlds__inst_match__Name_10, check_hlds__inst_match__V_13_13, &check_hlds__inst_match__MaybeTypes_12);
            }
#line 2069 "inst_match.m"
            {
#line 2069 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_ground_mt_3_p_0(check_hlds__inst_match__Args_11, check_hlds__inst_match__MaybeTypes_12, check_hlds__inst_match__ModuleInfo_3);
            }
#line 2065 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2070 "inst_match.m"
              {
#line 2070 "inst_match.m"
                /* direct tailcall eliminated */
#line 2070 "inst_match.m"
                {
#line 2070 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_7;

#line 2070 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2070 "inst_match.m"
                }
#line 2070 "inst_match.m"
                continue;
#line 2070 "inst_match.m"
              }
#line 2065 "inst_match.m"
          }
#line 2063 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2063 "inst_match.m"
      }
#line 2063 "inst_match.m"
      break;
#line 2063 "inst_match.m"
    }
#line 2060 "inst_match.m"
}

#line 2035 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(
#line 2035 "inst_match.m"
  MR_Word check_hlds__inst_match__InstResults_5,
#line 2035 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_6,
#line 2035 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 2035 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 2035 "inst_match.m"
{
#line 2043 "inst_match.m"
  {
#line 2043 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2043 "inst_match.m"
    if ((check_hlds__inst_match__InstResults_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2057 "inst_match.m"
      {
#line 2057 "inst_match.m"
        return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_match__BoundInsts_6, check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__ModuleInfo_8);
      }
#line 2043 "inst_match.m"
    else
#line 2043 "inst_match.m"
      if ((check_hlds__inst_match__InstResults_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2042 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 2043 "inst_match.m"
      else
#line 2044 "inst_match.m"
        {
#line 2044 "inst_match.m"
          MR_Word check_hlds__inst_match__GroundnessResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_5, (MR_Integer) 0)));
#line 2044 "inst_match.m"
          MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_5, (MR_Integer) 1)));
#line 2044 "inst_match.m"
          MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_5, (MR_Integer) 2)));
#line 2044 "inst_match.m"
          MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__InstResults_5, (MR_Integer) 3)));

#line 2048 "inst_match.m"
          if ((check_hlds__inst_match__GroundnessResult_9 == (MR_Integer) 2))
#line 2053 "inst_match.m"
            {
#line 2053 "inst_match.m"
              return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_match__BoundInsts_6, check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__ModuleInfo_8);
            }
#line 2048 "inst_match.m"
          else
#line 2048 "inst_match.m"
            if ((check_hlds__inst_match__GroundnessResult_9 == (MR_Integer) 1))
#line 2047 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 2048 "inst_match.m"
            else
#line 2048 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 2044 "inst_match.m"
        }
#line 2043 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2043 "inst_match.m"
  }
#line 2035 "inst_match.m"
}

#line 1980 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_not_fully_unique_2_4_p_0(
#line 1980 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1980 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1980 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27,
#line 1980 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_28)
#line 1980 "inst_match.m"
{
#line 1994 "inst_match.m"
  while (MR_TRUE)
#line 1994 "inst_match.m"
    {
#line 1994 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1994 "inst_match.m"
      {
#line 1994 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1994 "inst_match.m"
        if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1987 "inst_match.m"
          {
#line 1987 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 1987 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1987 "inst_match.m"
          }
#line 1994 "inst_match.m"
        else
#line 1994 "inst_match.m"
          if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1986 "inst_match.m"
            {
#line 1986 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 1986 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1986 "inst_match.m"
            }
#line 1994 "inst_match.m"
          else
#line 1994 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 1994 "inst_match.m"
              {
#line 1994 "inst_match.m"
                MR_Word check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_6, (MR_Integer) 0)));
#line 1991 "inst_match.m"
                MR_Word check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1994 "inst_match.m"
                if ((check_hlds__inst_match__V_42_42 == (MR_Integer) 2))
#line 1992 "inst_match.m"
                  {
#line 1992 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 1992 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1992 "inst_match.m"
                  }
#line 1994 "inst_match.m"
                else
#line 1994 "inst_match.m"
                  if ((check_hlds__inst_match__V_42_42 == (MR_Integer) 0))
#line 1991 "inst_match.m"
                    {
#line 1991 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 1991 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1991 "inst_match.m"
                    }
#line 1994 "inst_match.m"
                  else
#line 1994 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 1994 "inst_match.m"
              }
#line 1994 "inst_match.m"
            else
#line 1994 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 1))))
#line 1988 "inst_match.m"
                {
#line 1988 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 1988 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 1988 "inst_match.m"
                }
#line 1994 "inst_match.m"
              else
#line 1994 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1995 "inst_match.m"
                  {
#line 1995 "inst_match.m"
                    MR_Word check_hlds__inst_match__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1995 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstResult_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1995 "inst_match.m"
                    MR_Word check_hlds__inst_match__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 3)));

#line 1997 "inst_match.m"
                    if ((check_hlds__inst_match__Uniq_13 == (MR_Integer) 2))
#line 1997 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1997 "inst_match.m"
                    else
#line 1997 "inst_match.m"
                      if ((check_hlds__inst_match__Uniq_13 == (MR_Integer) 0))
#line 1996 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1997 "inst_match.m"
                      else
#line 1997 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_FALSE;
#line 1995 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 2001 "inst_match.m"
                      {
#line 2001 "inst_match.m"
                        if ((check_hlds__inst_match__InstResult_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2000 "inst_match.m"
                          {
#line 2000 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 2000 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2000 "inst_match.m"
                          }
#line 2001 "inst_match.m"
                        else
#line 2004 "inst_match.m"
                          {
#line 2004 "inst_match.m"
                            return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_not_fully_unique_2_4_p_0(check_hlds__inst_match__BoundInsts_15, check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27, check_hlds__inst_match__STATE_VARIABLE_Expansions_28);
                          }
#line 2001 "inst_match.m"
                      }
#line 1995 "inst_match.m"
                  }
#line 1994 "inst_match.m"
                else
#line 1994 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2012 "inst_match.m"
                    {
#line 2012 "inst_match.m"
                      MR_Word check_hlds__inst_match__SubInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 2012 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 2013 "inst_match.m"
                      /* direct tailcall eliminated */
#line 2013 "inst_match.m"
                      {
#line 2013 "inst_match.m"
                        MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__SubInst_22;

#line 2013 "inst_match.m"
                        check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 2013 "inst_match.m"
                      }
#line 2013 "inst_match.m"
                      continue;
#line 2012 "inst_match.m"
                    }
#line 1994 "inst_match.m"
                  else
#line 1994 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 2015 "inst_match.m"
                      {
#line 2015 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 2019 "inst_match.m"
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_29_29;

#line 2016 "inst_match.m"
                        {
#line 2016 "inst_match.m"
                          check_hlds__inst_match__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__Inst_6)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27, &check_hlds__inst_match__STATE_VARIABLE_Expansions_29_29);
                        }
#line 2019 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 2017 "inst_match.m"
                          {
#line 2017 "inst_match.m"
                            MR_Word check_hlds__inst_match__NextInst_24;

#line 2017 "inst_match.m"
                            {
#line 2017 "inst_match.m"
                              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__InstName_23, &check_hlds__inst_match__NextInst_24);
                            }
#line 2018 "inst_match.m"
                            /* direct tailcall eliminated */
#line 2018 "inst_match.m"
                            {
#line 2018 "inst_match.m"
                              MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__NextInst_24;
#line 2018 "inst_match.m"
                              MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_29_29;

#line 2018 "inst_match.m"
                              check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_27;
#line 2018 "inst_match.m"
                              check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 2018 "inst_match.m"
                            }
#line 2018 "inst_match.m"
                            continue;
#line 2017 "inst_match.m"
                          }
#line 2019 "inst_match.m"
                        else
#line 2018 "inst_match.m"
                          {
#line 2018 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 2018 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2018 "inst_match.m"
                          }
#line 2015 "inst_match.m"
                      }
#line 1994 "inst_match.m"
                    else
#line 1994 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1994 "inst_match.m"
                        {
#line 1994 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1989 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));

#line 1994 "inst_match.m"
                          if ((check_hlds__inst_match__V_44_44 == (MR_Integer) 2))
#line 1990 "inst_match.m"
                            {
#line 1990 "inst_match.m"
                              *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 1990 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1990 "inst_match.m"
                            }
#line 1994 "inst_match.m"
                          else
#line 1994 "inst_match.m"
                            if ((check_hlds__inst_match__V_44_44 == (MR_Integer) 0))
#line 1989 "inst_match.m"
                              {
#line 1989 "inst_match.m"
                                *check_hlds__inst_match__STATE_VARIABLE_Expansions_28 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_27;
#line 1989 "inst_match.m"
                                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1989 "inst_match.m"
                              }
#line 1994 "inst_match.m"
                            else
#line 1994 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_FALSE;
#line 1994 "inst_match.m"
                        }
#line 1994 "inst_match.m"
                      else
#line 1994 "inst_match.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2009 "inst_match.m"
                          {
#line 2010 "inst_match.m"
                            {
#line 2010 "inst_match.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_not_fully_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                            }
#line 2009 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 2009 "inst_match.m"
                          }
#line 1994 "inst_match.m"
                        else
#line 1994 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_FALSE;
#line 1994 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1994 "inst_match.m"
      }
#line 1994 "inst_match.m"
      break;
#line 1994 "inst_match.m"
    }
#line 1980 "inst_match.m"
}

#line 1924 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_not_partly_unique_2_4_p_0(
#line 1924 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1924 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1924 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24,
#line 1924 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_25)
#line 1924 "inst_match.m"
{
#line 1936 "inst_match.m"
  while (MR_TRUE)
#line 1936 "inst_match.m"
    {
#line 1936 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1936 "inst_match.m"
      {
#line 1936 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1936 "inst_match.m"
        if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1931 "inst_match.m"
          {
#line 1931 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24;
#line 1931 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1931 "inst_match.m"
          }
#line 1936 "inst_match.m"
        else
#line 1936 "inst_match.m"
          if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1930 "inst_match.m"
            {
#line 1930 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Expansions_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24;
#line 1930 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1930 "inst_match.m"
            }
#line 1936 "inst_match.m"
          else
#line 1936 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 1933 "inst_match.m"
              {
#line 1933 "inst_match.m"
                MR_Word check_hlds__inst_match__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_6, (MR_Integer) 0)));
#line 1933 "inst_match.m"
                MR_Word check_hlds__inst_match__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1933 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_35_35 == (MR_Integer) 0);
#line 1933 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1933 "inst_match.m"
                  {
#line 1933 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Expansions_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24;
#line 1933 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1933 "inst_match.m"
                  }
#line 1933 "inst_match.m"
              }
#line 1936 "inst_match.m"
            else
#line 1936 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 1))))
#line 1932 "inst_match.m"
                {
#line 1932 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Expansions_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24;
#line 1932 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 1932 "inst_match.m"
                }
#line 1936 "inst_match.m"
              else
#line 1936 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1937 "inst_match.m"
                  {
#line 1937 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1937 "inst_match.m"
                    MR_Word check_hlds__inst_match__BoundInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 3)));
#line 1937 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1937 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_32_32 == (MR_Integer) 0);
#line 1937 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1940 "inst_match.m"
                      {
#line 1940 "inst_match.m"
                        if ((check_hlds__inst_match__InstResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1939 "inst_match.m"
                          {
#line 1939 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Expansions_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24;
#line 1939 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1939 "inst_match.m"
                          }
#line 1940 "inst_match.m"
                        else
#line 1944 "inst_match.m"
                          {
#line 1944 "inst_match.m"
                            return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_not_partly_unique_2_4_p_0(check_hlds__inst_match__BoundInsts_12, check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24, check_hlds__inst_match__STATE_VARIABLE_Expansions_25);
                          }
#line 1940 "inst_match.m"
                      }
#line 1937 "inst_match.m"
                  }
#line 1936 "inst_match.m"
                else
#line 1936 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1951 "inst_match.m"
                    {
#line 1951 "inst_match.m"
                      MR_Word check_hlds__inst_match__SubInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1951 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1952 "inst_match.m"
                      /* direct tailcall eliminated */
#line 1952 "inst_match.m"
                      {
#line 1952 "inst_match.m"
                        MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__SubInst_19;

#line 1952 "inst_match.m"
                        check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1952 "inst_match.m"
                      }
#line 1952 "inst_match.m"
                      continue;
#line 1951 "inst_match.m"
                    }
#line 1936 "inst_match.m"
                  else
#line 1936 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1954 "inst_match.m"
                      {
#line 1954 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstName_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1958 "inst_match.m"
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_26_26;

#line 1955 "inst_match.m"
                        {
#line 1955 "inst_match.m"
                          check_hlds__inst_match__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__Inst_6)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24, &check_hlds__inst_match__STATE_VARIABLE_Expansions_26_26);
                        }
#line 1958 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1956 "inst_match.m"
                          {
#line 1956 "inst_match.m"
                            MR_Word check_hlds__inst_match__NextInst_21;

#line 1956 "inst_match.m"
                            {
#line 1956 "inst_match.m"
                              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__InstName_20, &check_hlds__inst_match__NextInst_21);
                            }
#line 1957 "inst_match.m"
                            /* direct tailcall eliminated */
#line 1957 "inst_match.m"
                            {
#line 1957 "inst_match.m"
                              MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__NextInst_21;
#line 1957 "inst_match.m"
                              MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_24 = check_hlds__inst_match__STATE_VARIABLE_Expansions_26_26;

#line 1957 "inst_match.m"
                              check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_24;
#line 1957 "inst_match.m"
                              check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1957 "inst_match.m"
                            }
#line 1957 "inst_match.m"
                            continue;
#line 1956 "inst_match.m"
                          }
#line 1958 "inst_match.m"
                        else
#line 1957 "inst_match.m"
                          {
#line 1957 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Expansions_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24;
#line 1957 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1957 "inst_match.m"
                          }
#line 1954 "inst_match.m"
                      }
#line 1936 "inst_match.m"
                    else
#line 1936 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1934 "inst_match.m"
                        {
#line 1934 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1934 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));

#line 1934 "inst_match.m"
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_34_34 == (MR_Integer) 0);
#line 1934 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 1934 "inst_match.m"
                            {
#line 1934 "inst_match.m"
                              *check_hlds__inst_match__STATE_VARIABLE_Expansions_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_24;
#line 1934 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1934 "inst_match.m"
                            }
#line 1934 "inst_match.m"
                        }
#line 1936 "inst_match.m"
                      else
#line 1936 "inst_match.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1948 "inst_match.m"
                          {
#line 1949 "inst_match.m"
                            {
#line 1949 "inst_match.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_not_partly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                            }
#line 1948 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1948 "inst_match.m"
                          }
#line 1936 "inst_match.m"
                        else
#line 1936 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_FALSE;
#line 1936 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1936 "inst_match.m"
      }
#line 1936 "inst_match.m"
      break;
#line 1936 "inst_match.m"
    }
#line 1924 "inst_match.m"
}

#line 1866 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_mostly_unique_2_4_p_0(
#line 1866 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1866 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1866 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26,
#line 1866 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_27)
#line 1866 "inst_match.m"
{
#line 1880 "inst_match.m"
  while (MR_TRUE)
#line 1880 "inst_match.m"
    {
#line 1880 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1880 "inst_match.m"
      {
#line 1880 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1880 "inst_match.m"
        if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1873 "inst_match.m"
          {
#line 1873 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26;
#line 1873 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1873 "inst_match.m"
          }
#line 1880 "inst_match.m"
        else
#line 1880 "inst_match.m"
          if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1872 "inst_match.m"
            {
#line 1872 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Expansions_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26;
#line 1872 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1872 "inst_match.m"
            }
#line 1880 "inst_match.m"
          else
#line 1880 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 1880 "inst_match.m"
              {
#line 1880 "inst_match.m"
                MR_Word check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_6, (MR_Integer) 0)));
#line 1877 "inst_match.m"
                MR_Word check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1880 "inst_match.m"
                if ((check_hlds__inst_match__V_42_42 == (MR_Integer) 2))
#line 1878 "inst_match.m"
                  {
#line 1878 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Expansions_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26;
#line 1878 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1878 "inst_match.m"
                  }
#line 1880 "inst_match.m"
                else
#line 1880 "inst_match.m"
                  if ((check_hlds__inst_match__V_42_42 == (MR_Integer) 1))
#line 1877 "inst_match.m"
                    {
#line 1877 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Expansions_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26;
#line 1877 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1877 "inst_match.m"
                    }
#line 1880 "inst_match.m"
                  else
#line 1880 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 1880 "inst_match.m"
              }
#line 1880 "inst_match.m"
            else
#line 1880 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 1))))
#line 1874 "inst_match.m"
                {
#line 1874 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Expansions_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26;
#line 1874 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 1874 "inst_match.m"
                }
#line 1880 "inst_match.m"
              else
#line 1880 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1881 "inst_match.m"
                  {
#line 1881 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1881 "inst_match.m"
                    MR_Word check_hlds__inst_match__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 3)));
#line 1881 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1881 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_34_34 == (MR_Integer) 1);
#line 1881 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1885 "inst_match.m"
                      {
#line 1885 "inst_match.m"
                        if ((((check_hlds__inst_match__InstResults_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_match__InstResults_13)) == (MR_mktag((MR_Integer) 1))))))
#line 1888 "inst_match.m"
                          {
#line 1888 "inst_match.m"
                            return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_mostly_unique_2_4_p_0(check_hlds__inst_match__BoundInsts_14, check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_match__STATE_VARIABLE_Expansions_27);
                          }
#line 1885 "inst_match.m"
                        else
#line 1885 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_FALSE;
#line 1885 "inst_match.m"
                      }
#line 1881 "inst_match.m"
                  }
#line 1880 "inst_match.m"
                else
#line 1880 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1896 "inst_match.m"
                    {
#line 1896 "inst_match.m"
                      MR_Word check_hlds__inst_match__SubInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1896 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1897 "inst_match.m"
                      /* direct tailcall eliminated */
#line 1897 "inst_match.m"
                      {
#line 1897 "inst_match.m"
                        MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__SubInst_21;

#line 1897 "inst_match.m"
                        check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1897 "inst_match.m"
                      }
#line 1897 "inst_match.m"
                      continue;
#line 1896 "inst_match.m"
                    }
#line 1880 "inst_match.m"
                  else
#line 1880 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1899 "inst_match.m"
                      {
#line 1899 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1903 "inst_match.m"
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_28_28;

#line 1900 "inst_match.m"
                        {
#line 1900 "inst_match.m"
                          check_hlds__inst_match__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__Inst_6)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_match__STATE_VARIABLE_Expansions_28_28);
                        }
#line 1903 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1901 "inst_match.m"
                          {
#line 1901 "inst_match.m"
                            MR_Word check_hlds__inst_match__NextInst_23;

#line 1901 "inst_match.m"
                            {
#line 1901 "inst_match.m"
                              check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__InstName_22, &check_hlds__inst_match__NextInst_23);
                            }
#line 1902 "inst_match.m"
                            /* direct tailcall eliminated */
#line 1902 "inst_match.m"
                            {
#line 1902 "inst_match.m"
                              MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__NextInst_23;
#line 1902 "inst_match.m"
                              MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_28_28;

#line 1902 "inst_match.m"
                              check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_26;
#line 1902 "inst_match.m"
                              check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1902 "inst_match.m"
                            }
#line 1902 "inst_match.m"
                            continue;
#line 1901 "inst_match.m"
                          }
#line 1903 "inst_match.m"
                        else
#line 1902 "inst_match.m"
                          {
#line 1902 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Expansions_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26;
#line 1902 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1902 "inst_match.m"
                          }
#line 1899 "inst_match.m"
                      }
#line 1880 "inst_match.m"
                    else
#line 1880 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1880 "inst_match.m"
                        {
#line 1880 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1875 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));

#line 1880 "inst_match.m"
                          if ((check_hlds__inst_match__V_44_44 == (MR_Integer) 2))
#line 1876 "inst_match.m"
                            {
#line 1876 "inst_match.m"
                              *check_hlds__inst_match__STATE_VARIABLE_Expansions_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26;
#line 1876 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1876 "inst_match.m"
                            }
#line 1880 "inst_match.m"
                          else
#line 1880 "inst_match.m"
                            if ((check_hlds__inst_match__V_44_44 == (MR_Integer) 1))
#line 1875 "inst_match.m"
                              {
#line 1875 "inst_match.m"
                                *check_hlds__inst_match__STATE_VARIABLE_Expansions_27 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_26;
#line 1875 "inst_match.m"
                                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1875 "inst_match.m"
                              }
#line 1880 "inst_match.m"
                            else
#line 1880 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_FALSE;
#line 1880 "inst_match.m"
                        }
#line 1880 "inst_match.m"
                      else
#line 1880 "inst_match.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1893 "inst_match.m"
                          {
#line 1894 "inst_match.m"
                            {
#line 1894 "inst_match.m"
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_mostly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                            }
#line 1893 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1893 "inst_match.m"
                          }
#line 1880 "inst_match.m"
                        else
#line 1880 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_FALSE;
#line 1880 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1880 "inst_match.m"
      }
#line 1880 "inst_match.m"
      break;
#line 1880 "inst_match.m"
    }
#line 1866 "inst_match.m"
}

#line 1816 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_unique_2_4_p_0(
#line 1816 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1816 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1816 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25,
#line 1816 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_26)
#line 1816 "inst_match.m"
{
#line 1821 "inst_match.m"
  while (MR_TRUE)
#line 1821 "inst_match.m"
    {
#line 1821 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1821 "inst_match.m"
      {
#line 1821 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1821 "inst_match.m"
        if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1824 "inst_match.m"
          {
#line 1824 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1824 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1824 "inst_match.m"
          }
#line 1821 "inst_match.m"
        else
#line 1821 "inst_match.m"
          if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1823 "inst_match.m"
            {
#line 1823 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1823 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1823 "inst_match.m"
            }
#line 1821 "inst_match.m"
          else
#line 1821 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 1821 "inst_match.m"
              {
#line 1821 "inst_match.m"
                MR_Word check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_6, (MR_Integer) 0)));
#line 1822 "inst_match.m"
                MR_Word check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 9335 "check_hlds.inst_match.c"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_42_42 == (MR_Integer) 1);
#line 1821 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1821 "inst_match.m"
                  {
#line 1822 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1822 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1821 "inst_match.m"
                  }
#line 1821 "inst_match.m"
              }
#line 1821 "inst_match.m"
            else
#line 1821 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1821 "inst_match.m"
                {
#line 1821 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1821 "inst_match.m"
                  MR_Word check_hlds__inst_match__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 3)));
#line 1821 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 9362 "check_hlds.inst_match.c"
                  check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_45_45 == (MR_Integer) 1);
#line 1821 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1837 "inst_match.m"
                    {
#line 1837 "inst_match.m"
                      if ((((check_hlds__inst_match__InstResults_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_match__InstResults_14)) == (MR_mktag((MR_Integer) 1))))))
#line 1840 "inst_match.m"
                        {
#line 1840 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_unique_2_4_p_0(check_hlds__inst_match__BoundInsts_15, check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, check_hlds__inst_match__STATE_VARIABLE_Expansions_26);
                        }
#line 1837 "inst_match.m"
                      else
#line 1837 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_FALSE;
#line 1837 "inst_match.m"
                    }
#line 1821 "inst_match.m"
                }
#line 1821 "inst_match.m"
              else
#line 1821 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1847 "inst_match.m"
                  {
#line 1847 "inst_match.m"
                    MR_Word check_hlds__inst_match__SubInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1847 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1848 "inst_match.m"
                    /* direct tailcall eliminated */
#line 1848 "inst_match.m"
                    {
#line 1848 "inst_match.m"
                      MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__SubInst_22;

#line 1848 "inst_match.m"
                      check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1848 "inst_match.m"
                    }
#line 1848 "inst_match.m"
                    continue;
#line 1847 "inst_match.m"
                  }
#line 1821 "inst_match.m"
                else
#line 1821 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1850 "inst_match.m"
                    {
#line 1850 "inst_match.m"
                      MR_Word check_hlds__inst_match__InstName_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1854 "inst_match.m"
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_27_27;

#line 1851 "inst_match.m"
                      {
#line 1851 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__Inst_6)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_match__STATE_VARIABLE_Expansions_27_27);
                      }
#line 1854 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1852 "inst_match.m"
                        {
#line 1852 "inst_match.m"
                          MR_Word check_hlds__inst_match__NextInst_24;

#line 1852 "inst_match.m"
                          {
#line 1852 "inst_match.m"
                            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__InstName_23, &check_hlds__inst_match__NextInst_24);
                          }
#line 1853 "inst_match.m"
                          /* direct tailcall eliminated */
#line 1853 "inst_match.m"
                          {
#line 1853 "inst_match.m"
                            MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__NextInst_24;
#line 1853 "inst_match.m"
                            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_27_27;

#line 1853 "inst_match.m"
                            check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_25;
#line 1853 "inst_match.m"
                            check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1853 "inst_match.m"
                          }
#line 1853 "inst_match.m"
                          continue;
#line 1852 "inst_match.m"
                        }
#line 1854 "inst_match.m"
                      else
#line 1853 "inst_match.m"
                        {
#line 1853 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1853 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1853 "inst_match.m"
                        }
#line 1850 "inst_match.m"
                    }
#line 1821 "inst_match.m"
                  else
#line 1821 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1821 "inst_match.m"
                      {
#line 1821 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1821 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));

#line 9479 "check_hlds.inst_match.c"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_47_47 == (MR_Integer) 1);
#line 1821 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1821 "inst_match.m"
                          {
#line 1821 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1821 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1821 "inst_match.m"
                          }
#line 1821 "inst_match.m"
                      }
#line 1821 "inst_match.m"
                    else
#line 1821 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1844 "inst_match.m"
                        {
#line 1845 "inst_match.m"
                          {
#line 1845 "inst_match.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                          }
#line 1844 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1844 "inst_match.m"
                        }
#line 1821 "inst_match.m"
                      else
#line 1821 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_FALSE;
#line 1821 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1821 "inst_match.m"
      }
#line 1821 "inst_match.m"
      break;
#line 1821 "inst_match.m"
    }
#line 1816 "inst_match.m"
}

#line 1773 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_ground_or_any_2_4_p_0(
#line 1773 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 1773 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_6,
#line 1773 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23,
#line 1773 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_24)
#line 1773 "inst_match.m"
{
#line 1783 "inst_match.m"
  while (MR_TRUE)
#line 1783 "inst_match.m"
    {
#line 1783 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1783 "inst_match.m"
      {
#line 1783 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1783 "inst_match.m"
        if ((check_hlds__inst_match__Inst_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1781 "inst_match.m"
          {
#line 1781 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_24 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23;
#line 1781 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1781 "inst_match.m"
          }
#line 1783 "inst_match.m"
        else
#line 1783 "inst_match.m"
          if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 2))))
#line 1780 "inst_match.m"
            {
#line 1780 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Expansions_24 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23;
#line 1780 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1780 "inst_match.m"
            }
#line 1783 "inst_match.m"
          else
#line 1783 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1784 "inst_match.m"
              {
#line 1784 "inst_match.m"
                MR_Word check_hlds__inst_match__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1784 "inst_match.m"
                MR_Word check_hlds__inst_match__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 3)));
#line 1784 "inst_match.m"
                MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1785 "inst_match.m"
                {
#line 1785 "inst_match.m"
                  return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(check_hlds__inst_match__InstResults_13, check_hlds__inst_match__BoundInsts_14, check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23, check_hlds__inst_match__STATE_VARIABLE_Expansions_24);
                }
#line 1784 "inst_match.m"
              }
#line 1783 "inst_match.m"
            else
#line 1783 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1797 "inst_match.m"
                {
#line 1797 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 2)));
#line 1797 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));

#line 1798 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1798 "inst_match.m"
                  {
#line 1798 "inst_match.m"
                    MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__SubInst_20;

#line 1798 "inst_match.m"
                    check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1798 "inst_match.m"
                  }
#line 1798 "inst_match.m"
                  continue;
#line 1797 "inst_match.m"
                }
#line 1783 "inst_match.m"
              else
#line 1783 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1800 "inst_match.m"
                  {
#line 1800 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 1)));
#line 1804 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_25_25;

#line 1801 "inst_match.m"
                    {
#line 1801 "inst_match.m"
                      check_hlds__inst_match__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__Inst_6)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23, &check_hlds__inst_match__STATE_VARIABLE_Expansions_25_25);
                    }
#line 1804 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1802 "inst_match.m"
                      {
#line 1802 "inst_match.m"
                        MR_Word check_hlds__inst_match__NextInst_22;

#line 1802 "inst_match.m"
                        {
#line 1802 "inst_match.m"
                          check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__InstName_21, &check_hlds__inst_match__NextInst_22);
                        }
#line 1803 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1803 "inst_match.m"
                        {
#line 1803 "inst_match.m"
                          MR_Word check_hlds__inst_match__Inst__tmp_copy_6 = check_hlds__inst_match__NextInst_22;
#line 1803 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_23 = check_hlds__inst_match__STATE_VARIABLE_Expansions_25_25;

#line 1803 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_23;
#line 1803 "inst_match.m"
                          check_hlds__inst_match__Inst_6 = check_hlds__inst_match__Inst__tmp_copy_6;
#line 1803 "inst_match.m"
                        }
#line 1803 "inst_match.m"
                        continue;
#line 1802 "inst_match.m"
                      }
#line 1804 "inst_match.m"
                    else
#line 1803 "inst_match.m"
                      {
#line 1803 "inst_match.m"
                        *check_hlds__inst_match__STATE_VARIABLE_Expansions_24 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23;
#line 1803 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1803 "inst_match.m"
                      }
#line 1800 "inst_match.m"
                  }
#line 1783 "inst_match.m"
                else
#line 1783 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1779 "inst_match.m"
                    {
#line 1779 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Expansions_24 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_23;
#line 1779 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1779 "inst_match.m"
                    }
#line 1783 "inst_match.m"
                  else
#line 1783 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1794 "inst_match.m"
                      {
#line 1795 "inst_match.m"
                        {
#line 1795 "inst_match.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_ground_or_any_2\'/4", (MR_String) "uninstantiated inst parameter");
                        }
#line 1794 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1794 "inst_match.m"
                      }
#line 1783 "inst_match.m"
                    else
#line 1783 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 1783 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1783 "inst_match.m"
      }
#line 1783 "inst_match.m"
      break;
#line 1783 "inst_match.m"
    }
#line 1773 "inst_match.m"
}

#line 1726 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_ground_mt_2_5_p_0(
#line 1726 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 1726 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 1726 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_8,
#line 1726 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25,
#line 1726 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Expansions_26)
#line 1726 "inst_match.m"
{
#line 1736 "inst_match.m"
  while (MR_TRUE)
#line 1736 "inst_match.m"
    {
#line 1736 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1736 "inst_match.m"
      {
#line 1736 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1736 "inst_match.m"
        if ((check_hlds__inst_match__Inst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1737 "inst_match.m"
          {
#line 1737 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1737 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1737 "inst_match.m"
          }
#line 1736 "inst_match.m"
        else
#line 1736 "inst_match.m"
          if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_8)) == (MR_mktag((MR_Integer) 2))))
#line 1752 "inst_match.m"
            {
#line 1752 "inst_match.m"
              MR_Word check_hlds__inst_match__Uniq_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_8, (MR_Integer) 0)));
#line 1752 "inst_match.m"
              MR_Word check_hlds__inst_match__HOInstInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_8, (MR_Integer) 1)));
#line 1752 "inst_match.m"
              MR_Word check_hlds__inst_match__NextInst_34;
#line 1709 "inst_match.m"
              MR_Word check_hlds__inst_match__V_41_41;
#line 1709 "inst_match.m"
              MR_Word check_hlds__inst_match__V_42_42;

#line 1753 "inst_match.m"
              {
#line 1753 "inst_match.m"
                check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__ModuleInfo_6, check_hlds__inst_match__Uniq_20, check_hlds__inst_match__HOInstInfo_21, &check_hlds__inst_match__NextInst_34);
              }
#line 1752 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 1752 "inst_match.m"
                {
#line 1709 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__NextInst_34)) == (MR_mktag((MR_Integer) 2)));
#line 1709 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1709 "inst_match.m"
                    {
#line 1709 "inst_match.m"
                      check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__NextInst_34, (MR_Integer) 0)));
#line 1709 "inst_match.m"
                      check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__NextInst_34, (MR_Integer) 1)));
#line 1710 "inst_match.m"
                      {
#line 1710 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_match__NextInst_34)));
                      }
#line 1712 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1710 "inst_match.m"
                        {
#line 1710 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1710 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1710 "inst_match.m"
                        }
#line 1712 "inst_match.m"
                      else
#line 1713 "inst_match.m"
                        {
#line 1713 "inst_match.m"
                          /* direct tailcall eliminated */
#line 1713 "inst_match.m"
                          {
#line 1713 "inst_match.m"
                            MR_Word check_hlds__inst_match__Inst__tmp_copy_8 = check_hlds__inst_match__NextInst_34;

#line 1713 "inst_match.m"
                            check_hlds__inst_match__Inst_8 = check_hlds__inst_match__Inst__tmp_copy_8;
#line 1713 "inst_match.m"
                          }
#line 1713 "inst_match.m"
                          continue;
#line 1713 "inst_match.m"
                        }
#line 1709 "inst_match.m"
                    }
#line 1709 "inst_match.m"
                  else
#line 1720 "inst_match.m"
                    {
#line 1720 "inst_match.m"
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_44;

#line 1717 "inst_match.m"
                      {
#line 1717 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__NextInst_34)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_44);
                      }
#line 1720 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1719 "inst_match.m"
                        {
#line 1719 "inst_match.m"
                          /* direct tailcall eliminated */
#line 1719 "inst_match.m"
                          {
#line 1719 "inst_match.m"
                            MR_Word check_hlds__inst_match__Inst__tmp_copy_8 = check_hlds__inst_match__NextInst_34;
#line 1719 "inst_match.m"
                            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_15_44;

#line 1719 "inst_match.m"
                            check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_25;
#line 1719 "inst_match.m"
                            check_hlds__inst_match__Inst_8 = check_hlds__inst_match__Inst__tmp_copy_8;
#line 1719 "inst_match.m"
                          }
#line 1719 "inst_match.m"
                          continue;
#line 1719 "inst_match.m"
                        }
#line 1720 "inst_match.m"
                      else
#line 1719 "inst_match.m"
                        {
#line 1719 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1719 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1719 "inst_match.m"
                        }
#line 1720 "inst_match.m"
                    }
#line 1752 "inst_match.m"
                }
#line 1752 "inst_match.m"
            }
#line 1736 "inst_match.m"
          else
#line 1736 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1741 "inst_match.m"
              {
#line 1741 "inst_match.m"
                MR_Word check_hlds__inst_match__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 2)));
#line 1741 "inst_match.m"
                MR_Word check_hlds__inst_match__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 3)));
#line 1741 "inst_match.m"
                MR_Word check_hlds__inst_match__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 1)));

#line 1742 "inst_match.m"
                {
#line 1742 "inst_match.m"
                  return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(check_hlds__inst_match__InstResults_14, check_hlds__inst_match__BoundInsts_15, check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__ModuleInfo_6, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, check_hlds__inst_match__STATE_VARIABLE_Expansions_26);
                }
#line 1741 "inst_match.m"
              }
#line 1736 "inst_match.m"
            else
#line 1736 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1745 "inst_match.m"
                {
#line 1745 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 2)));
#line 1745 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 1)));
#line 1709 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_54_54;
#line 1709 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_55_55;

#line 1709 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__SubInst_17)) == (MR_mktag((MR_Integer) 2)));
#line 1709 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1709 "inst_match.m"
                    {
#line 1709 "inst_match.m"
                      check_hlds__inst_match__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__SubInst_17, (MR_Integer) 0)));
#line 1709 "inst_match.m"
                      check_hlds__inst_match__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__SubInst_17, (MR_Integer) 1)));
#line 1710 "inst_match.m"
                      {
#line 1710 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_match__SubInst_17)));
                      }
#line 1712 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1710 "inst_match.m"
                        {
#line 1710 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1710 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1710 "inst_match.m"
                        }
#line 1712 "inst_match.m"
                      else
#line 1713 "inst_match.m"
                        {
#line 1713 "inst_match.m"
                          /* direct tailcall eliminated */
#line 1713 "inst_match.m"
                          {
#line 1713 "inst_match.m"
                            MR_Word check_hlds__inst_match__Inst__tmp_copy_8 = check_hlds__inst_match__SubInst_17;

#line 1713 "inst_match.m"
                            check_hlds__inst_match__Inst_8 = check_hlds__inst_match__Inst__tmp_copy_8;
#line 1713 "inst_match.m"
                          }
#line 1713 "inst_match.m"
                          continue;
#line 1713 "inst_match.m"
                        }
#line 1709 "inst_match.m"
                    }
#line 1709 "inst_match.m"
                  else
#line 1720 "inst_match.m"
                    {
#line 1720 "inst_match.m"
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_57;

#line 1717 "inst_match.m"
                      {
#line 1717 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__SubInst_17)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_57);
                      }
#line 1720 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1719 "inst_match.m"
                        {
#line 1719 "inst_match.m"
                          /* direct tailcall eliminated */
#line 1719 "inst_match.m"
                          {
#line 1719 "inst_match.m"
                            MR_Word check_hlds__inst_match__Inst__tmp_copy_8 = check_hlds__inst_match__SubInst_17;
#line 1719 "inst_match.m"
                            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_15_57;

#line 1719 "inst_match.m"
                            check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_25;
#line 1719 "inst_match.m"
                            check_hlds__inst_match__Inst_8 = check_hlds__inst_match__Inst__tmp_copy_8;
#line 1719 "inst_match.m"
                          }
#line 1719 "inst_match.m"
                          continue;
#line 1719 "inst_match.m"
                        }
#line 1720 "inst_match.m"
                      else
#line 1719 "inst_match.m"
                        {
#line 1719 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1719 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1719 "inst_match.m"
                        }
#line 1720 "inst_match.m"
                    }
#line 1745 "inst_match.m"
                }
#line 1736 "inst_match.m"
              else
#line 1736 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1748 "inst_match.m"
                  {
#line 1748 "inst_match.m"
                    MR_Word check_hlds__inst_match__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 1)));
#line 1748 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInst_19;
#line 1709 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_67_67;
#line 1709 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_68_68;

#line 1749 "inst_match.m"
                    {
#line 1749 "inst_match.m"
                      check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_6, check_hlds__inst_match__InstName_18, &check_hlds__inst_match__NextInst_19);
                    }
#line 1709 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__NextInst_19)) == (MR_mktag((MR_Integer) 2)));
#line 1709 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1709 "inst_match.m"
                      {
#line 1709 "inst_match.m"
                        check_hlds__inst_match__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__NextInst_19, (MR_Integer) 0)));
#line 1709 "inst_match.m"
                        check_hlds__inst_match__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__NextInst_19, (MR_Integer) 1)));
#line 1710 "inst_match.m"
                        {
#line 1710 "inst_match.m"
                          check_hlds__inst_match__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_match__NextInst_19)));
                        }
#line 1712 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1710 "inst_match.m"
                          {
#line 1710 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1710 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1710 "inst_match.m"
                          }
#line 1712 "inst_match.m"
                        else
#line 1713 "inst_match.m"
                          {
#line 1713 "inst_match.m"
                            /* direct tailcall eliminated */
#line 1713 "inst_match.m"
                            {
#line 1713 "inst_match.m"
                              MR_Word check_hlds__inst_match__Inst__tmp_copy_8 = check_hlds__inst_match__NextInst_19;

#line 1713 "inst_match.m"
                              check_hlds__inst_match__Inst_8 = check_hlds__inst_match__Inst__tmp_copy_8;
#line 1713 "inst_match.m"
                            }
#line 1713 "inst_match.m"
                            continue;
#line 1713 "inst_match.m"
                          }
#line 1709 "inst_match.m"
                      }
#line 1709 "inst_match.m"
                    else
#line 1720 "inst_match.m"
                      {
#line 1720 "inst_match.m"
                        MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_70;

#line 1717 "inst_match.m"
                        {
#line 1717 "inst_match.m"
                          check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__NextInst_19)), check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_70);
                        }
#line 1720 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1719 "inst_match.m"
                          {
#line 1719 "inst_match.m"
                            /* direct tailcall eliminated */
#line 1719 "inst_match.m"
                            {
#line 1719 "inst_match.m"
                              MR_Word check_hlds__inst_match__Inst__tmp_copy_8 = check_hlds__inst_match__NextInst_19;
#line 1719 "inst_match.m"
                              MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_15_70;

#line 1719 "inst_match.m"
                              check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0__tmp_copy_25;
#line 1719 "inst_match.m"
                              check_hlds__inst_match__Inst_8 = check_hlds__inst_match__Inst__tmp_copy_8;
#line 1719 "inst_match.m"
                            }
#line 1719 "inst_match.m"
                            continue;
#line 1719 "inst_match.m"
                          }
#line 1720 "inst_match.m"
                        else
#line 1719 "inst_match.m"
                          {
#line 1719 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1719 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1719 "inst_match.m"
                          }
#line 1720 "inst_match.m"
                      }
#line 1748 "inst_match.m"
                  }
#line 1736 "inst_match.m"
                else
#line 1736 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1738 "inst_match.m"
                    {
#line 1738 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Expansions_26 = check_hlds__inst_match__STATE_VARIABLE_Expansions_0_25;
#line 1738 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1738 "inst_match.m"
                    }
#line 1736 "inst_match.m"
                  else
#line 1736 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1756 "inst_match.m"
                      {
#line 1757 "inst_match.m"
                        {
#line 1757 "inst_match.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                        }
#line 1756 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1756 "inst_match.m"
                      }
#line 1736 "inst_match.m"
                    else
#line 1736 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 1736 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1736 "inst_match.m"
      }
#line 1736 "inst_match.m"
      break;
#line 1736 "inst_match.m"
    }
#line 1726 "inst_match.m"
}

#line 1670 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__record_inst_is_ground_2_p_0(
#line 1670 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_1,
#line 1670 "inst_match.m"
  MR_Word check_hlds__inst_match__IsGround_2)
#line 1670 "inst_match.m"
{
#line 1672 "inst_match.m"
  {
#line 1672 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1675 "inst_match.m"
{
#define MR_PROC_LABEL check_hlds__inst_match__record_inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_match__Inst_1 ;
	IsGround =  check_hlds__inst_match__IsGround_2 ;
		{
#line 1675 "inst_match.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;

#line 10197 "check_hlds.inst_match.c"

		;}
#undef MR_PROC_LABEL
#line 1675 "inst_match.m"
}
#line 1672 "inst_match.m"
  }
#line 1670 "inst_match.m"
}

#line 1644 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__lookup_inst_is_ground_3_p_0(
#line 1644 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_1,
#line 1644 "inst_match.m"
  MR_Word * check_hlds__inst_match__Found_2,
#line 1644 "inst_match.m"
  MR_Word * check_hlds__inst_match__IsGround_3)
#line 1644 "inst_match.m"
{
#line 1647 "inst_match.m"
  {
#line 1647 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1650 "inst_match.m"
{
#define MR_PROC_LABEL check_hlds__inst_match__lookup_inst_is_ground_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Inst =  check_hlds__inst_match__Inst_1 ;
		{
#line 1650 "inst_match.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (inst_is_ground_cache[hash].iig_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
    }

#line 10249 "check_hlds.inst_match.c"

		;}
#undef MR_PROC_LABEL
	 *check_hlds__inst_match__Found_2  = Found;
	 *check_hlds__inst_match__IsGround_3  = IsGround;
#line 1650 "inst_match.m"
}
#line 1647 "inst_match.m"
  }
#line 1644 "inst_match.m"
}

#line 1397 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(
#line 1397 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1397 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1397 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1397 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1397 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1397 "inst_match.m"
{
#line 1401 "inst_match.m"
  while (MR_TRUE)
#line 1401 "inst_match.m"
    {
#line 1401 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1401 "inst_match.m"
      {
#line 1401 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1401 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1401 "inst_match.m"
          {
#line 1401 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1401 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1401 "inst_match.m"
          }
#line 1401 "inst_match.m"
        else
#line 1402 "inst_match.m"
          {
#line 1402 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1402 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1402 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 1402 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 1402 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 1402 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 1402 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 1402 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 1402 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1402 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1402 "inst_match.m"
              {
#line 1402 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1402 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1403 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 1403 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 1404 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 1404 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 1405 "inst_match.m"
                {
#line 1405 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 1410 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1407 "inst_match.m"
                  {
#line 1407 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 1407 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1407 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 1407 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 1406 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1406 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1406 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1406 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1406 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1406 "inst_match.m"
                    {
#line 1406 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 1406 "inst_match.m"
                    {
#line 1406 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 1408 "inst_match.m"
                    {
#line 1408 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 1407 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1409 "inst_match.m"
                      {
#line 1409 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1409 "inst_match.m"
                        {
#line 1409 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 1409 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 1409 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 1409 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1409 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1409 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1409 "inst_match.m"
                        }
#line 1409 "inst_match.m"
                        continue;
#line 1409 "inst_match.m"
                      }
#line 1407 "inst_match.m"
                  }
#line 1410 "inst_match.m"
                else
#line 1411 "inst_match.m"
                  {
#line 846 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_38;
#line 846 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_39;
#line 846 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_41;
#line 846 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_42;
#line 830 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_40_40;
#line 831 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_43_43;

#line 830 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 830 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 830 "inst_match.m"
                      {
#line 830 "inst_match.m"
                        check_hlds__inst_match__QNameA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 830 "inst_match.m"
                        check_hlds__inst_match__ArityA_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 830 "inst_match.m"
                        check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 831 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 831 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 831 "inst_match.m"
                          {
#line 831 "inst_match.m"
                            check_hlds__inst_match__QNameB_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 831 "inst_match.m"
                            check_hlds__inst_match__ArityB_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 831 "inst_match.m"
                            check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 831 "inst_match.m"
                          }
#line 830 "inst_match.m"
                      }
#line 846 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 835 "inst_match.m"
                      {
#line 835 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_44;
#line 835 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_46;
#line 835 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_48;

#line 834 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_38)) == (MR_mktag((MR_Integer) 1))))
#line 834 "inst_match.m"
                          {
#line 834 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_38, (MR_Integer) 0)));

#line 834 "inst_match.m"
                            check_hlds__inst_match__NameA_44 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_38, (MR_Integer) 1)));
#line 834 "inst_match.m"
                          }
#line 834 "inst_match.m"
                        else
#line 833 "inst_match.m"
                          check_hlds__inst_match__NameA_44 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_38, (MR_Integer) 0)));
#line 837 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_41)) == (MR_mktag((MR_Integer) 1))))
#line 837 "inst_match.m"
                          {
#line 837 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_41, (MR_Integer) 0)));

#line 837 "inst_match.m"
                            check_hlds__inst_match__NameB_46 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_41, (MR_Integer) 1)));
#line 837 "inst_match.m"
                          }
#line 837 "inst_match.m"
                        else
#line 836 "inst_match.m"
                          check_hlds__inst_match__NameB_46 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_41, (MR_Integer) 0)));
#line 839 "inst_match.m"
                        {
#line 839 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_48, check_hlds__inst_match__NameA_44, check_hlds__inst_match__NameB_46);
                        }
#line 842 "inst_match.m"
                        if ((check_hlds__inst_match__O_48 == (MR_Integer) 0))
#line 844 "inst_match.m"
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_39 > check_hlds__inst_match__ArityB_42);
#line 842 "inst_match.m"
                        else
#line 842 "inst_match.m"
                          if ((check_hlds__inst_match__O_48 == (MR_Integer) 2))
#line 841 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 842 "inst_match.m"
                          else
#line 842 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 835 "inst_match.m"
                      }
#line 846 "inst_match.m"
                    else
#line 847 "inst_match.m"
                      {
#line 847 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_52_52;

#line 847 "inst_match.m"
                        {
#line 847 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_52_52, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 847 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_52_52);
#line 847 "inst_match.m"
                      }
#line 1411 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1416 "inst_match.m"
                      {
#line 1416 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1416 "inst_match.m"
                        {
#line 1416 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 1416 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1416 "inst_match.m"
                        }
#line 1416 "inst_match.m"
                        continue;
#line 1416 "inst_match.m"
                      }
#line 1411 "inst_match.m"
                  }
#line 1402 "inst_match.m"
              }
#line 1402 "inst_match.m"
          }
#line 1401 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1401 "inst_match.m"
      }
#line 1401 "inst_match.m"
      break;
#line 1401 "inst_match.m"
    }
#line 1397 "inst_match.m"
}

#line 1380 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_binding_5_p_0(
#line 1380 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1380 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1380 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1380 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1380 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1380 "inst_match.m"
{
#line 1384 "inst_match.m"
  while (MR_TRUE)
#line 1384 "inst_match.m"
    {
#line 1384 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1384 "inst_match.m"
      {
#line 1384 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1384 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1384 "inst_match.m"
          {
#line 1384 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1384 "inst_match.m"
              {
#line 1384 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1384 "inst_match.m"
                  {
#line 1384 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1384 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1384 "inst_match.m"
                  }
#line 1384 "inst_match.m"
              }
#line 1384 "inst_match.m"
          }
#line 1384 "inst_match.m"
        else
#line 1386 "inst_match.m"
          {
#line 1386 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1386 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1386 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgB_11;
#line 1386 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsB_12;
#line 1386 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 1386 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 1386 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1386 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1386 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1386 "inst_match.m"
              {
#line 1386 "inst_match.m"
                check_hlds__inst_match__ArgB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1386 "inst_match.m"
                check_hlds__inst_match__ArgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1386 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1386 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1386 "inst_match.m"
                  {
#line 1386 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 1386 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 1387 "inst_match.m"
                    {
#line 1387 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__ArgA_9, check_hlds__inst_match__ArgB_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 1386 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1388 "inst_match.m"
                      {
#line 1388 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1388 "inst_match.m"
                        {
#line 1388 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ArgsA_10;
#line 1388 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ArgsB_12;
#line 1388 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 1388 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1388 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1388 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 1388 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1388 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1388 "inst_match.m"
                        }
#line 1388 "inst_match.m"
                        continue;
#line 1388 "inst_match.m"
                      }
#line 1386 "inst_match.m"
                  }
#line 1386 "inst_match.m"
              }
#line 1386 "inst_match.m"
          }
#line 1384 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1384 "inst_match.m"
      }
#line 1384 "inst_match.m"
      break;
#line 1384 "inst_match.m"
    }
#line 1380 "inst_match.m"
}

#line 1360 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(
#line 1360 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_5,
#line 1360 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_6,
#line 1360 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 1360 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 1360 "inst_match.m"
{
#line 1366 "inst_match.m"
  {
#line 1366 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1366 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1366 "inst_match.m"
      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1366 "inst_match.m"
    else
#line 1366 "inst_match.m"
      {
#line 1366 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_6), (MR_Integer) 1);

#line 1366 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1368 "inst_match.m"
          {
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_18_18;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_2_71;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_87;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 1368 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_13;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_14;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__Info0_59;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__V_61_61;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__V_62_62;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__V_63_63;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__V_64_64;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__V_70_70;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_78;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_79;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_81;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_82;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_84;
#line 1368 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_85_85;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__V_88_88;
#line 1368 "inst_match.m"
            MR_Word check_hlds__inst_match__V_89_89;
#line 1370 "inst_match.m"
            MR_Word check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 1370 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 900 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_80;
#line 901 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_83;
#line 903 "inst_match.m"
            MR_Word check_hlds__inst_match__V_60_60;

#line 1370 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_15_15 == (MR_Integer) 1);
#line 1368 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1368 "inst_match.m"
              {
#line 10804 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1371 "inst_match.m"
                {
#line 1371 "inst_match.m"
                  check_hlds__inst_match__Arity_13 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_18_18, check_hlds__inst_match__ArgModes_10);
                }
#line 1372 "inst_match.m"
                {
#line 1372 "inst_match.m"
                  check_hlds__inst_match__PredInstA_14 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_match__Arity_13);
                }
#line 883 "inst_match.m"
                check_hlds__inst_match__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 883 "inst_match.m"
                check_hlds__inst_match__V_62_62 = (MR_Integer) 2;
#line 883 "inst_match.m"
                check_hlds__inst_match__V_63_63 = (MR_Integer) 0;
#line 883 "inst_match.m"
                check_hlds__inst_match__V_64_64 = (MR_Integer) 1;
#line 10824 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_2_71 = (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;
#line 360 "inst_match.m"
                {
#line 360 "inst_match.m"
                  check_hlds__inst_match__V_70_70 = mercury__set_tree234__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_2_71);
                }
#line 900 "inst_match.m"
                check_hlds__inst_match__PredOrFunc_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 0)));
#line 900 "inst_match.m"
                check_hlds__inst_match__ModesA_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 1)));
#line 900 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsA_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 2)));
#line 900 "inst_match.m"
                check_hlds__inst_match__Det_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_14, (MR_Integer) 3)));
#line 901 "inst_match.m"
                check_hlds__inst_match__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 901 "inst_match.m"
                check_hlds__inst_match__ModesB_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 901 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsB_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 901 "inst_match.m"
                check_hlds__inst_match__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 901 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_78 == check_hlds__inst_match__V_88_88);
#line 1368 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1368 "inst_match.m"
                  {
#line 901 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_81 == check_hlds__inst_match__V_89_89);
#line 1368 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1368 "inst_match.m"
                      {
#line 10859 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_21_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 434 "inst_match.m"
                        {
#line 434 "inst_match.m"
                          check_hlds__inst_match__Info0_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_59, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 434 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_59, 1) = ((MR_Box) (check_hlds__inst_match__V_70_70));
#line 434 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_59, 2) = ((MR_Box) (check_hlds__inst_match__V_61_61));
#line 434 "inst_match.m"
                          MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_59, 3) = ((MR_Box) ((check_hlds__inst_match__V_62_62 | ((((check_hlds__inst_match__V_63_63 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_64_64 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
                        }
#line 902 "inst_match.m"
                        {
#line 902 "inst_match.m"
                          check_hlds__inst_match__V_85_85 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_87, check_hlds__inst_match__ModesA_79);
                        }
#line 902 "inst_match.m"
                        {
#line 902 "inst_match.m"
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__V_85_85, &check_hlds__inst_match__MaybeTypes_84);
                        }
#line 903 "inst_match.m"
                        {
#line 903 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_79, check_hlds__inst_match__ModesB_82, check_hlds__inst_match__MaybeTypes_84, check_hlds__inst_match__Info0_59, &check_hlds__inst_match__V_60_60);
                        }
#line 1368 "inst_match.m"
                      }
#line 1368 "inst_match.m"
                  }
#line 1368 "inst_match.m"
              }
#line 1368 "inst_match.m"
          }
#line 1366 "inst_match.m"
        else
#line 1375 "inst_match.m"
          {
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_52;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_17 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_5), (MR_Integer) 1);
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__Info0_24;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__V_35_35;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_43;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_44;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_46;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_47;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_49;
#line 1375 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_50_50;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__V_53_53;
#line 1375 "inst_match.m"
            MR_Word check_hlds__inst_match__V_54_54;
#line 900 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_45;
#line 901 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_48;
#line 903 "inst_match.m"
            MR_Word check_hlds__inst_match__V_25_25;

#line 360 "inst_match.m"
            {
#line 360 "inst_match.m"
              check_hlds__inst_match__V_35_35 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
            }
#line 900 "inst_match.m"
            check_hlds__inst_match__PredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 0)));
#line 900 "inst_match.m"
            check_hlds__inst_match__ModesA_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 1)));
#line 900 "inst_match.m"
            check_hlds__inst_match___MaybeArgRegsA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 2)));
#line 900 "inst_match.m"
            check_hlds__inst_match__Det_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_17, (MR_Integer) 3)));
#line 901 "inst_match.m"
            check_hlds__inst_match__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 0)));
#line 901 "inst_match.m"
            check_hlds__inst_match__ModesB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 1)));
#line 901 "inst_match.m"
            check_hlds__inst_match___MaybeArgRegsB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 2)));
#line 901 "inst_match.m"
            check_hlds__inst_match__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_19_19, (MR_Integer) 3)));
#line 901 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_43 == check_hlds__inst_match__V_53_53);
#line 1375 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1375 "inst_match.m"
              {
#line 901 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_46 == check_hlds__inst_match__V_54_54);
#line 1375 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1375 "inst_match.m"
                  {
#line 10966 "check_hlds.inst_match.c"
                    check_hlds__inst_match__TypeCtorInfo_21_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 434 "inst_match.m"
                    {
#line 434 "inst_match.m"
                      check_hlds__inst_match__Info0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 434 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 1) = ((MR_Box) (check_hlds__inst_match__V_35_35));
#line 434 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
                      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_24, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
                    }
#line 902 "inst_match.m"
                    {
#line 902 "inst_match.m"
                      check_hlds__inst_match__V_50_50 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_52, check_hlds__inst_match__ModesA_44);
                    }
#line 902 "inst_match.m"
                    {
#line 902 "inst_match.m"
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_7, check_hlds__inst_match__V_50_50, &check_hlds__inst_match__MaybeTypes_49);
                    }
#line 903 "inst_match.m"
                    {
#line 903 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_44, check_hlds__inst_match__ModesB_47, check_hlds__inst_match__MaybeTypes_49, check_hlds__inst_match__Info0_24, &check_hlds__inst_match__V_25_25);
                    }
#line 1375 "inst_match.m"
                  }
#line 1375 "inst_match.m"
              }
#line 1375 "inst_match.m"
          }
#line 1366 "inst_match.m"
      }
#line 1366 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1366 "inst_match.m"
  }
#line 1360 "inst_match.m"
}

#line 1268 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_3_5_p_0(
#line 1268 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1268 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1268 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1268 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_41,
#line 1268 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_42)
#line 1268 "inst_match.m"
{
#line 1273 "inst_match.m"
  {
#line 1273 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1273 "inst_match.m"
    if ((check_hlds__inst_match__InstA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1273 "inst_match.m"
      {
#line 1274 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1273 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1273 "inst_match.m"
          {
#line 1274 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1274 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1273 "inst_match.m"
          }
#line 1273 "inst_match.m"
      }
#line 1273 "inst_match.m"
    else
#line 1273 "inst_match.m"
      if ((check_hlds__inst_match__InstA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1357 "inst_match.m"
        {
#line 1357 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1357 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1357 "inst_match.m"
        }
#line 1273 "inst_match.m"
      else
#line 1273 "inst_match.m"
        if (((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 2))))
#line 1273 "inst_match.m"
          {
#line 1273 "inst_match.m"
            MR_Word check_hlds__inst_match__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1273 "inst_match.m"
            MR_Word check_hlds__inst_match__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));
#line 1273 "inst_match.m"
            MR_Word check_hlds__inst_match__V_159_159 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1273 "inst_match.m"
            MR_Word check_hlds__inst_match__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1281 "inst_match.m"
            MR_Word check_hlds__inst_match__V_160_160 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1281 "inst_match.m"
            MR_Word check_hlds__inst_match__V_161_161 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1281 "inst_match.m"
            MR_Word check_hlds__inst_match__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1281 "inst_match.m"
            MR_Word check_hlds__inst_match__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));

#line 1273 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1276 "inst_match.m"
              {
#line 1276 "inst_match.m"
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1276 "inst_match.m"
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1286 "inst_match.m"
                if ((check_hlds__inst_match__V_159_159 == (MR_Integer) 0))
#line 1287 "inst_match.m"
                  {
#line 1287 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_15;
#line 1287 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstB_16;
#line 1287 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_62_62;
#line 1290 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_103_103;
#line 1290 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_104_104;
#line 1290 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_105_105;
#line 1290 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_106_106;
#line 1290 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_107_107;

#line 1288 "inst_match.m"
                    {
#line 1288 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_164_164, check_hlds__inst_match__V_153_153, check_hlds__inst_match__V_152_152, &check_hlds__inst_match__NextInstA_15);
                    }
#line 1287 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1287 "inst_match.m"
                      {
#line 1290 "inst_match.m"
                        check_hlds__inst_match__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1290 "inst_match.m"
                        check_hlds__inst_match__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1290 "inst_match.m"
                        check_hlds__inst_match__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1290 "inst_match.m"
                        check_hlds__inst_match__V_105_105 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1290 "inst_match.m"
                        check_hlds__inst_match__V_106_106 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1290 "inst_match.m"
                        check_hlds__inst_match__V_107_107 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1290 "inst_match.m"
                        {
#line 1290 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_62_62, check_hlds__inst_match__UniqB_12, check_hlds__inst_match__HOInstInfoB_13, &check_hlds__inst_match__NextInstB_16);
                        }
#line 1287 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1292 "inst_match.m"
                          {
#line 1292 "inst_match.m"
                            return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_15, check_hlds__inst_match__NextInstB_16, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                          }
#line 1287 "inst_match.m"
                      }
#line 1287 "inst_match.m"
                  }
#line 1286 "inst_match.m"
                else
#line 1283 "inst_match.m"
                  {
#line 1283 "inst_match.m"
                    return check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_152_152, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                  }
#line 1276 "inst_match.m"
              }
#line 1273 "inst_match.m"
            else
#line 1273 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1301 "inst_match.m"
                {
#line 1301 "inst_match.m"
                  MR_Word check_hlds__inst_match__NextInstA_70;

#line 1303 "inst_match.m"
                  {
#line 1303 "inst_match.m"
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_164_164, check_hlds__inst_match__V_153_153, check_hlds__inst_match__V_152_152, &check_hlds__inst_match__NextInstA_70);
                  }
#line 1301 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1305 "inst_match.m"
                    {
#line 1305 "inst_match.m"
                      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_70, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                    }
#line 1301 "inst_match.m"
                }
#line 1273 "inst_match.m"
              else
#line 1273 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1295 "inst_match.m"
                  {
#line 1295 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_67;

#line 1297 "inst_match.m"
                    {
#line 1297 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_164_164, check_hlds__inst_match__V_153_153, check_hlds__inst_match__V_152_152, &check_hlds__inst_match__NextInstA_67);
                    }
#line 1295 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1299 "inst_match.m"
                      {
#line 1299 "inst_match.m"
                        return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__NextInstA_67, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1295 "inst_match.m"
                  }
#line 1273 "inst_match.m"
                else
#line 1273 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1273 "inst_match.m"
          }
#line 1273 "inst_match.m"
        else
#line 1273 "inst_match.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1351 "inst_match.m"
            {
#line 1351 "inst_match.m"
              MR_Word check_hlds__inst_match__TypeCtorInfo_149_149;
#line 1351 "inst_match.m"
              MR_Word check_hlds__inst_match__TypeInfo_150_150;
#line 1351 "inst_match.m"
              MR_Word check_hlds__inst_match__Name_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1351 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgsA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1351 "inst_match.m"
              MR_Word check_hlds__inst_match__ArgsB_39;
#line 1351 "inst_match.m"
              MR_Word check_hlds__inst_match__MaybeTypes_40;
#line 1351 "inst_match.m"
              MR_Integer check_hlds__inst_match__V_43_43;
#line 1351 "inst_match.m"
              MR_Word check_hlds__inst_match__V_44_44;
#line 1351 "inst_match.m"
              MR_Word check_hlds__inst_match__V_151_151;

#line 1352 "inst_match.m"
              check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1352 "inst_match.m"
              if (check_hlds__inst_match__succeeded)
#line 1352 "inst_match.m"
                {
#line 1352 "inst_match.m"
                  check_hlds__inst_match__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1352 "inst_match.m"
                  check_hlds__inst_match__ArgsB_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1352 "inst_match.m"
                  {
#line 1352 "inst_match.m"
                    check_hlds__inst_match__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__inst_match__Name_37, check_hlds__inst_match__V_151_151);
                  }
#line 1351 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1351 "inst_match.m"
                    {
#line 11257 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1353 "inst_match.m"
                      {
#line 1353 "inst_match.m"
                        check_hlds__inst_match__V_43_43 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_149_149, check_hlds__inst_match__ArgsA_38);
                      }
#line 1353 "inst_match.m"
                      check_hlds__inst_match__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11266 "check_hlds.inst_match.c"
                      check_hlds__inst_match__TypeInfo_150_150 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 1353 "inst_match.m"
                      {
#line 1353 "inst_match.m"
                        mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_150_150, check_hlds__inst_match__V_43_43, ((MR_Box) (check_hlds__inst_match__V_44_44)), &check_hlds__inst_match__MaybeTypes_40);
                      }
#line 1355 "inst_match.m"
                      {
#line 1355 "inst_match.m"
                        return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_binding_5_p_0(check_hlds__inst_match__ArgsA_38, check_hlds__inst_match__ArgsB_39, check_hlds__inst_match__MaybeTypes_40, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1351 "inst_match.m"
                    }
#line 1352 "inst_match.m"
                }
#line 1351 "inst_match.m"
            }
#line 1273 "inst_match.m"
          else
#line 1273 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1273 "inst_match.m"
              {
#line 1273 "inst_match.m"
                MR_Word check_hlds__inst_match__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 1273 "inst_match.m"
                MR_Word check_hlds__inst_match__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1313 "inst_match.m"
                MR_Word check_hlds__inst_match__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 1273 "inst_match.m"
                if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1313 "inst_match.m"
                  {
#line 1313 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1313 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1313 "inst_match.m"
                    MR_Word check_hlds__inst_match__HOInstInfoB_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1313 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstB_76;
#line 1315 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1315 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1315 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_125_125 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1315 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_126_126 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1315 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_127_127 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1315 "inst_match.m"
                    {
#line 1315 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_53_53, check_hlds__inst_match__UniqB_74, check_hlds__inst_match__HOInstInfoB_75, &check_hlds__inst_match__NextInstB_76);
                    }
#line 1313 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1317 "inst_match.m"
                      {
#line 1317 "inst_match.m"
                        return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__NextInstB_76, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1313 "inst_match.m"
                  }
#line 1273 "inst_match.m"
                else
#line 1273 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1319 "inst_match.m"
                    {
#line 1319 "inst_match.m"
                      MR_Word check_hlds__inst_match__BoundInstsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1320 "inst_match.m"
                      MR_Word check_hlds__inst_match___UniqB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1320 "inst_match.m"
                      MR_Word check_hlds__inst_match___InstResultB_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 1321 "inst_match.m"
                      {
#line 1321 "inst_match.m"
                        return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_binding_5_p_0(check_hlds__inst_match__V_154_154, check_hlds__inst_match__BoundInstsB_32, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                      }
#line 1319 "inst_match.m"
                    }
#line 1273 "inst_match.m"
                  else
#line 1273 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1324 "inst_match.m"
                      {
#line 1324 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1324 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_51_51;
#line 1325 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1326 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_128_128;
#line 1326 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_129_129;
#line 1326 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_130_130;
#line 1326 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_131_131;
#line 1326 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_132_132;

#line 1325 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1324 "inst_match.m"
                          {
#line 1326 "inst_match.m"
                            check_hlds__inst_match__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1326 "inst_match.m"
                            check_hlds__inst_match__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1326 "inst_match.m"
                            check_hlds__inst_match__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1326 "inst_match.m"
                            check_hlds__inst_match__V_130_130 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1326 "inst_match.m"
                            check_hlds__inst_match__V_131_131 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1326 "inst_match.m"
                            check_hlds__inst_match__V_132_132 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1326 "inst_match.m"
                            {
#line 1326 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_155_155, check_hlds__inst_match__V_154_154, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_51_51);
                            }
#line 1324 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1324 "inst_match.m"
                              {
#line 1326 "inst_match.m"
                                *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1326 "inst_match.m"
                                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1324 "inst_match.m"
                              }
#line 1324 "inst_match.m"
                          }
#line 1324 "inst_match.m"
                      }
#line 1273 "inst_match.m"
                    else
#line 1273 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 1273 "inst_match.m"
              }
#line 1273 "inst_match.m"
            else
#line 1273 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1273 "inst_match.m"
                {
#line 1273 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1273 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1307 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1309 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1309 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_166_166 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1309 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_167_167 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1309 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1309 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));

#line 1273 "inst_match.m"
                  if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1307 "inst_match.m"
                    {
#line 1307 "inst_match.m"
                      MR_Word check_hlds__inst_match__UniqB_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1307 "inst_match.m"
                      MR_Word check_hlds__inst_match__HOInstInfoB_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1307 "inst_match.m"
                      MR_Word check_hlds__inst_match__NextInstB_73;

#line 1309 "inst_match.m"
                      {
#line 1309 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_170_170, check_hlds__inst_match__UniqB_71, check_hlds__inst_match__HOInstInfoB_72, &check_hlds__inst_match__NextInstB_73);
                      }
#line 1307 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1311 "inst_match.m"
                        {
#line 1311 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__NextInstB_73, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_41, check_hlds__inst_match__STATE_VARIABLE_Info_42);
                        }
#line 1307 "inst_match.m"
                    }
#line 1273 "inst_match.m"
                  else
#line 1273 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1329 "inst_match.m"
                      {
#line 1329 "inst_match.m"
                        MR_Word check_hlds__inst_match__InstResultsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1329 "inst_match.m"
                        MR_Word check_hlds__inst_match__BoundInstsB_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1330 "inst_match.m"
                        MR_Word check_hlds__inst_match___UniqB_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1331 "inst_match.m"
                        {
#line 1331 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__InstResultsB_35, check_hlds__inst_match__BoundInstsB_86, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_170_170);
                        }
#line 1329 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1329 "inst_match.m"
                          {
#line 1334 "inst_match.m"
                            {
#line 1334 "inst_match.m"
                              MR_Word check_hlds__inst_match__TypeCtorInfo_148_148;
#line 1334 "inst_match.m"
                              MR_Word check_hlds__inst_match__Type_36;
#line 1334 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_48_48;
#line 1334 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_49_49;
#line 1336 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_138_138;
#line 1336 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_139_139;
#line 1336 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_140_140;
#line 1336 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_141_141;
#line 1336 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_142_142;

#line 1334 "inst_match.m"
                              check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 1334 "inst_match.m"
                              if (check_hlds__inst_match__succeeded)
#line 1334 "inst_match.m"
                                {
#line 1334 "inst_match.m"
                                  check_hlds__inst_match__Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 11519 "check_hlds.inst_match.c"
                                  check_hlds__inst_match__TypeCtorInfo_148_148 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1336 "inst_match.m"
                                  {
#line 1336 "inst_match.m"
                                    check_hlds__inst_match__V_48_48 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_148_148);
                                  }
#line 1336 "inst_match.m"
                                  check_hlds__inst_match__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
#line 1336 "inst_match.m"
                                  check_hlds__inst_match__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
#line 1336 "inst_match.m"
                                  check_hlds__inst_match__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
#line 1336 "inst_match.m"
                                  check_hlds__inst_match__V_140_140 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1336 "inst_match.m"
                                  check_hlds__inst_match__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1336 "inst_match.m"
                                  check_hlds__inst_match__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1336 "inst_match.m"
                                  {
#line 1336 "inst_match.m"
                                    check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_48_48, check_hlds__inst_match__V_49_49, check_hlds__inst_match__BoundInstsB_86, check_hlds__inst_match__Type_36);
                                  }
#line 1334 "inst_match.m"
                                }
#line 1334 "inst_match.m"
                            }
#line 1338 "inst_match.m"
                            if (!(check_hlds__inst_match__succeeded))
#line 1339 "inst_match.m"
                              {
#line 1339 "inst_match.m"
                              }
#line 1339 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1339 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1329 "inst_match.m"
                          }
#line 1329 "inst_match.m"
                      }
#line 1273 "inst_match.m"
                    else
#line 1273 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1346 "inst_match.m"
                        {
#line 1346 "inst_match.m"
                          MR_Word check_hlds__inst_match__HOInstInfoB_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1347 "inst_match.m"
                          MR_Word check_hlds__inst_match___UniqB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1348 "inst_match.m"
                          {
#line 1348 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_binding_4_p_0(check_hlds__inst_match__V_157_157, check_hlds__inst_match__HOInstInfoB_90, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_170_170);
                          }
#line 1346 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 1346 "inst_match.m"
                            {
#line 1348 "inst_match.m"
                              *check_hlds__inst_match__STATE_VARIABLE_Info_42 = check_hlds__inst_match__STATE_VARIABLE_Info_0_41;
#line 1348 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1346 "inst_match.m"
                            }
#line 1346 "inst_match.m"
                        }
#line 1273 "inst_match.m"
                      else
#line 1273 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_FALSE;
#line 1273 "inst_match.m"
                }
#line 1273 "inst_match.m"
              else
#line 1273 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 1273 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1273 "inst_match.m"
  }
#line 1268 "inst_match.m"
}

#line 1251 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_binding_mt_5_p_0(
#line 1251 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1251 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1251 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1251 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 1251 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 1251 "inst_match.m"
{
#line 1254 "inst_match.m"
  {
#line 1254 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1254 "inst_match.m"
    MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 1254 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1256 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1256 "inst_match.m"
    MR_Word check_hlds__inst_match__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1256 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1256 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1256 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1264 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions_12;

#line 1255 "inst_match.m"
    {
#line 1255 "inst_match.m"
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 1255 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 1255 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 1255 "inst_match.m"
    }
#line 367 "inst_match.m"
    {
#line 367 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
    }
#line 1264 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 1258 "inst_match.m"
      {
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19;
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1258 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1261 "inst_match.m"
        MR_Word check_hlds__inst_match__V_37_37;
#line 1261 "inst_match.m"
        MR_Word check_hlds__inst_match__V_38_38;
#line 1261 "inst_match.m"
        MR_Word check_hlds__inst_match__V_39_39;
#line 1261 "inst_match.m"
        MR_Word check_hlds__inst_match__V_40_40;
#line 1261 "inst_match.m"
        MR_Word check_hlds__inst_match__V_41_41;

#line 1258 "inst_match.m"
        {
#line 1258 "inst_match.m"
          check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_26_26));
#line 1258 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 1258 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_28_28));
#line 1258 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_29_29 | ((((check_hlds__inst_match__V_30_30 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_31_31 << (MR_Integer) 3)))))));
#line 1258 "inst_match.m"
        }
#line 1259 "inst_match.m"
        {
#line 1259 "inst_match.m"
          check_hlds__inst_match__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__V_26_26, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
        }
#line 1261 "inst_match.m"
        check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 1261 "inst_match.m"
        check_hlds__inst_match__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 1261 "inst_match.m"
        check_hlds__inst_match__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 1261 "inst_match.m"
        check_hlds__inst_match__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1261 "inst_match.m"
        check_hlds__inst_match__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1261 "inst_match.m"
        check_hlds__inst_match__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1261 "inst_match.m"
        {
#line 1261 "inst_match.m"
          check_hlds__inst_match__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
        }
#line 1263 "inst_match.m"
        {
#line 1263 "inst_match.m"
          return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_3_5_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 1258 "inst_match.m"
      }
#line 1264 "inst_match.m"
    else
#line 1263 "inst_match.m"
      {
#line 1263 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 1263 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1263 "inst_match.m"
      }
#line 1254 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1254 "inst_match.m"
  }
#line 1251 "inst_match.m"
}

#line 1217 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(
#line 1217 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1217 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1217 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1217 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1217 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1217 "inst_match.m"
{
#line 1221 "inst_match.m"
  while (MR_TRUE)
#line 1221 "inst_match.m"
    {
#line 1221 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1221 "inst_match.m"
      {
#line 1221 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1221 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "inst_match.m"
          {
#line 1221 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1221 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1221 "inst_match.m"
          }
#line 1221 "inst_match.m"
        else
#line 1222 "inst_match.m"
          {
#line 1222 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1222 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1222 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 1222 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 1222 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 1222 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 1222 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 1222 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 1222 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1222 "inst_match.m"
              {
#line 1222 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1222 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1223 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 1223 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 1224 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 1224 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 1225 "inst_match.m"
                {
#line 1225 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 1230 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1227 "inst_match.m"
                  {
#line 1227 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 1227 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1227 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 1227 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 1226 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1226 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1226 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1226 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1226 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1226 "inst_match.m"
                    {
#line 1226 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 1226 "inst_match.m"
                    {
#line 1226 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 1228 "inst_match.m"
                    {
#line 1228 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 1227 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1229 "inst_match.m"
                      {
#line 1229 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1229 "inst_match.m"
                        {
#line 1229 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 1229 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 1229 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 1229 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1229 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1229 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1229 "inst_match.m"
                        }
#line 1229 "inst_match.m"
                        continue;
#line 1229 "inst_match.m"
                      }
#line 1227 "inst_match.m"
                  }
#line 1230 "inst_match.m"
                else
#line 1231 "inst_match.m"
                  {
#line 846 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_38;
#line 846 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_39;
#line 846 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_41;
#line 846 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_42;
#line 830 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_40_40;
#line 831 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_43_43;

#line 830 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 830 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 830 "inst_match.m"
                      {
#line 830 "inst_match.m"
                        check_hlds__inst_match__QNameA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 830 "inst_match.m"
                        check_hlds__inst_match__ArityA_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 830 "inst_match.m"
                        check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 831 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 831 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 831 "inst_match.m"
                          {
#line 831 "inst_match.m"
                            check_hlds__inst_match__QNameB_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 831 "inst_match.m"
                            check_hlds__inst_match__ArityB_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 831 "inst_match.m"
                            check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 831 "inst_match.m"
                          }
#line 830 "inst_match.m"
                      }
#line 846 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 835 "inst_match.m"
                      {
#line 835 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_44;
#line 835 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_46;
#line 835 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_48;

#line 834 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_38)) == (MR_mktag((MR_Integer) 1))))
#line 834 "inst_match.m"
                          {
#line 834 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_38, (MR_Integer) 0)));

#line 834 "inst_match.m"
                            check_hlds__inst_match__NameA_44 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_38, (MR_Integer) 1)));
#line 834 "inst_match.m"
                          }
#line 834 "inst_match.m"
                        else
#line 833 "inst_match.m"
                          check_hlds__inst_match__NameA_44 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_38, (MR_Integer) 0)));
#line 837 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_41)) == (MR_mktag((MR_Integer) 1))))
#line 837 "inst_match.m"
                          {
#line 837 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_41, (MR_Integer) 0)));

#line 837 "inst_match.m"
                            check_hlds__inst_match__NameB_46 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_41, (MR_Integer) 1)));
#line 837 "inst_match.m"
                          }
#line 837 "inst_match.m"
                        else
#line 836 "inst_match.m"
                          check_hlds__inst_match__NameB_46 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_41, (MR_Integer) 0)));
#line 839 "inst_match.m"
                        {
#line 839 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_48, check_hlds__inst_match__NameA_44, check_hlds__inst_match__NameB_46);
                        }
#line 842 "inst_match.m"
                        if ((check_hlds__inst_match__O_48 == (MR_Integer) 0))
#line 844 "inst_match.m"
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_39 > check_hlds__inst_match__ArityB_42);
#line 842 "inst_match.m"
                        else
#line 842 "inst_match.m"
                          if ((check_hlds__inst_match__O_48 == (MR_Integer) 2))
#line 841 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 842 "inst_match.m"
                          else
#line 842 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 835 "inst_match.m"
                      }
#line 846 "inst_match.m"
                    else
#line 847 "inst_match.m"
                      {
#line 847 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_52_52;

#line 847 "inst_match.m"
                        {
#line 847 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_52_52, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 847 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_52_52);
#line 847 "inst_match.m"
                      }
#line 1231 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1236 "inst_match.m"
                      {
#line 1236 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1236 "inst_match.m"
                        {
#line 1236 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 1236 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1236 "inst_match.m"
                        }
#line 1236 "inst_match.m"
                        continue;
#line 1236 "inst_match.m"
                      }
#line 1231 "inst_match.m"
                  }
#line 1222 "inst_match.m"
              }
#line 1222 "inst_match.m"
          }
#line 1221 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1221 "inst_match.m"
      }
#line 1221 "inst_match.m"
      break;
#line 1221 "inst_match.m"
    }
#line 1217 "inst_match.m"
}

#line 1200 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_final_5_p_0(
#line 1200 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1200 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1200 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1200 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1200 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1200 "inst_match.m"
{
#line 1204 "inst_match.m"
  while (MR_TRUE)
#line 1204 "inst_match.m"
    {
#line 1204 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1204 "inst_match.m"
      {
#line 1204 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1204 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "inst_match.m"
          {
#line 1204 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1204 "inst_match.m"
              {
#line 1204 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1204 "inst_match.m"
                  {
#line 1204 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1204 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1204 "inst_match.m"
                  }
#line 1204 "inst_match.m"
              }
#line 1204 "inst_match.m"
          }
#line 1204 "inst_match.m"
        else
#line 1206 "inst_match.m"
          {
#line 1206 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1206 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1206 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgB_11;
#line 1206 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsB_12;
#line 1206 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 1206 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 1206 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1206 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1206 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1206 "inst_match.m"
              {
#line 1206 "inst_match.m"
                check_hlds__inst_match__ArgB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1206 "inst_match.m"
                check_hlds__inst_match__ArgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1206 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1206 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1206 "inst_match.m"
                  {
#line 1206 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 1206 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 1207 "inst_match.m"
                    {
#line 1207 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__ArgA_9, check_hlds__inst_match__ArgB_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 1206 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1208 "inst_match.m"
                      {
#line 1208 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1208 "inst_match.m"
                        {
#line 1208 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ArgsA_10;
#line 1208 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ArgsB_12;
#line 1208 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 1208 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1208 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1208 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 1208 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1208 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1208 "inst_match.m"
                        }
#line 1208 "inst_match.m"
                        continue;
#line 1208 "inst_match.m"
                      }
#line 1206 "inst_match.m"
                  }
#line 1206 "inst_match.m"
              }
#line 1206 "inst_match.m"
          }
#line 1204 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1204 "inst_match.m"
      }
#line 1204 "inst_match.m"
      break;
#line 1204 "inst_match.m"
    }
#line 1200 "inst_match.m"
}

#line 1179 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(
#line 1179 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 1179 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 1179 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1179 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 1179 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 1179 "inst_match.m"
{
#line 1184 "inst_match.m"
  {
#line 1184 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1184 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1184 "inst_match.m"
      {
#line 1185 "inst_match.m"
        MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1185 "inst_match.m"
        MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 1185 "inst_match.m"
        MR_Word check_hlds__inst_match__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1185 "inst_match.m"
        MR_Word check_hlds__inst_match__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1185 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1185 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1185 "inst_match.m"
        {
#line 1185 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_match__V_21_21, check_hlds__inst_match__HOInstInfoA_6);
        }
#line 1185 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 1184 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1184 "inst_match.m"
          {
#line 1185 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_17 = check_hlds__inst_match__STATE_VARIABLE_Info_0_16;
#line 1185 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1184 "inst_match.m"
          }
#line 1184 "inst_match.m"
      }
#line 1184 "inst_match.m"
    else
#line 1184 "inst_match.m"
      {
#line 1184 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_7), (MR_Integer) 1);

#line 1184 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "inst_match.m"
          {
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_29_29;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_64;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 1)));
#line 1188 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_14;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_15;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 0)));
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_55;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_56;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_58;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_59;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_61;
#line 1188 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_62_62;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__V_65_65;
#line 1188 "inst_match.m"
            MR_Word check_hlds__inst_match__V_66_66;
#line 1190 "inst_match.m"
            MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 2)));
#line 1190 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 3)));
#line 900 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_57;
#line 901 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_60;

#line 1190 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 1);
#line 1188 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1188 "inst_match.m"
              {
#line 12314 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1191 "inst_match.m"
                {
#line 1191 "inst_match.m"
                  check_hlds__inst_match__Arity_14 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_29_29, check_hlds__inst_match__ArgModes_11);
                }
#line 1192 "inst_match.m"
                {
#line 1192 "inst_match.m"
                  check_hlds__inst_match__PredInstA_15 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_match__Arity_14);
                }
#line 900 "inst_match.m"
                check_hlds__inst_match__PredOrFunc_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 0)));
#line 900 "inst_match.m"
                check_hlds__inst_match__ModesA_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 1)));
#line 900 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsA_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 2)));
#line 900 "inst_match.m"
                check_hlds__inst_match__Det_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 3)));
#line 901 "inst_match.m"
                check_hlds__inst_match__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 0)));
#line 901 "inst_match.m"
                check_hlds__inst_match__ModesB_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 1)));
#line 901 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsB_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 2)));
#line 901 "inst_match.m"
                check_hlds__inst_match__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 3)));
#line 901 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_55 == check_hlds__inst_match__V_65_65);
#line 1188 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1188 "inst_match.m"
                  {
#line 901 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_58 == check_hlds__inst_match__V_66_66);
#line 1188 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1188 "inst_match.m"
                      {
#line 12354 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_21_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 902 "inst_match.m"
                        {
#line 902 "inst_match.m"
                          check_hlds__inst_match__V_62_62 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_64, check_hlds__inst_match__ModesA_56);
                        }
#line 902 "inst_match.m"
                        {
#line 902 "inst_match.m"
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_62_62, &check_hlds__inst_match__MaybeTypes_61);
                        }
#line 903 "inst_match.m"
                        {
#line 903 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_56, check_hlds__inst_match__ModesB_59, check_hlds__inst_match__MaybeTypes_61, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                        }
#line 1188 "inst_match.m"
                      }
#line 1188 "inst_match.m"
                  }
#line 1188 "inst_match.m"
              }
#line 1188 "inst_match.m"
          }
#line 1184 "inst_match.m"
        else
#line 1195 "inst_match.m"
          {
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_46;
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 0)));
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 1)));
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 3)));
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 1)));
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_43;
#line 1195 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_44_44;
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 0)));
#line 1195 "inst_match.m"
            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 3)));
#line 900 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 2)));
#line 901 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 2)));

#line 901 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_37 == check_hlds__inst_match__V_47_47);
#line 1195 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1195 "inst_match.m"
              {
#line 901 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_40 == check_hlds__inst_match__V_48_48);
#line 1195 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1195 "inst_match.m"
                  {
#line 12420 "check_hlds.inst_match.c"
                    check_hlds__inst_match__TypeCtorInfo_21_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 902 "inst_match.m"
                    {
#line 902 "inst_match.m"
                      check_hlds__inst_match__V_44_44 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_46, check_hlds__inst_match__ModesA_38);
                    }
#line 902 "inst_match.m"
                    {
#line 902 "inst_match.m"
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_44_44, &check_hlds__inst_match__MaybeTypes_43);
                    }
#line 903 "inst_match.m"
                    {
#line 903 "inst_match.m"
                      return check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_38, check_hlds__inst_match__ModesB_41, check_hlds__inst_match__MaybeTypes_43, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                    }
#line 1195 "inst_match.m"
                  }
#line 1195 "inst_match.m"
              }
#line 1195 "inst_match.m"
          }
#line 1184 "inst_match.m"
      }
#line 1184 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1184 "inst_match.m"
  }
#line 1179 "inst_match.m"
}

#line 1067 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_5_p_0(
#line 1067 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1067 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1067 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1067 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_40,
#line 1067 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_41)
#line 1067 "inst_match.m"
{
#line 1072 "inst_match.m"
  {
#line 1072 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 1072 "inst_match.m"
    if ((check_hlds__inst_match__InstA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "inst_match.m"
      if ((check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1097 "inst_match.m"
        {
#line 1097 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_41 = check_hlds__inst_match__STATE_VARIABLE_Info_0_40;
#line 1097 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1097 "inst_match.m"
        }
#line 1072 "inst_match.m"
      else
#line 1072 "inst_match.m"
        if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1089 "inst_match.m"
          {
#line 1089 "inst_match.m"
            MR_Word check_hlds__inst_match__Uniq_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1090 "inst_match.m"
            MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1095 "inst_match.m"
            if ((check_hlds__inst_match__Uniq_20 == (MR_Integer) 3))
#line 1095 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1095 "inst_match.m"
            else
#line 1095 "inst_match.m"
              if ((check_hlds__inst_match__Uniq_20 == (MR_Integer) 4))
#line 1095 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1095 "inst_match.m"
              else
#line 1095 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 1089 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1089 "inst_match.m"
              {
#line 1095 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Info_41 = check_hlds__inst_match__STATE_VARIABLE_Info_0_40;
#line 1095 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1089 "inst_match.m"
              }
#line 1089 "inst_match.m"
          }
#line 1072 "inst_match.m"
        else
#line 1072 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_FALSE;
#line 1072 "inst_match.m"
    else
#line 1072 "inst_match.m"
      if ((check_hlds__inst_match__InstA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1166 "inst_match.m"
        {
#line 1166 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_41 = check_hlds__inst_match__STATE_VARIABLE_Info_0_40;
#line 1166 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1166 "inst_match.m"
        }
#line 1072 "inst_match.m"
      else
#line 1072 "inst_match.m"
        if (((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 2))))
#line 1072 "inst_match.m"
          {
#line 1072 "inst_match.m"
            MR_Word check_hlds__inst_match__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1072 "inst_match.m"
            MR_Word check_hlds__inst_match__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));

#line 1072 "inst_match.m"
            if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1072 "inst_match.m"
              {
#line 1072 "inst_match.m"
                MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1072 "inst_match.m"
                MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1074 "inst_match.m"
                {
#line 1074 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_132_132, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                }
#line 1072 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1075 "inst_match.m"
                  {
#line 1075 "inst_match.m"
                    return check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_133_133, check_hlds__inst_match__UniqB_12);
                  }
#line 1072 "inst_match.m"
              }
#line 1072 "inst_match.m"
            else
#line 1072 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1083 "inst_match.m"
                {
#line 1083 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 1083 "inst_match.m"
                  MR_Word check_hlds__inst_match__NextInstA_68;
#line 1085 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 1085 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 1085 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_97_97 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1085 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_98_98 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1085 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_99_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1085 "inst_match.m"
                  {
#line 1085 "inst_match.m"
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_59_59, check_hlds__inst_match__V_133_133, check_hlds__inst_match__V_132_132, &check_hlds__inst_match__NextInstA_68);
                  }
#line 1083 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1087 "inst_match.m"
                    {
#line 1087 "inst_match.m"
                      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__NextInstA_68, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                    }
#line 1083 "inst_match.m"
                }
#line 1072 "inst_match.m"
              else
#line 1072 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1077 "inst_match.m"
                  {
#line 1077 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_16;
#line 1077 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 1079 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 1079 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 1079 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_92_92 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1079 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_93_93 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1079 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_94_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1079 "inst_match.m"
                    {
#line 1079 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_61_61, check_hlds__inst_match__V_133_133, check_hlds__inst_match__V_132_132, &check_hlds__inst_match__NextInstA_16);
                    }
#line 1077 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1081 "inst_match.m"
                      {
#line 1081 "inst_match.m"
                        return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__NextInstA_16, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                      }
#line 1077 "inst_match.m"
                  }
#line 1072 "inst_match.m"
                else
#line 1072 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1072 "inst_match.m"
          }
#line 1072 "inst_match.m"
        else
#line 1072 "inst_match.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1072 "inst_match.m"
            {
#line 1072 "inst_match.m"
              MR_Word check_hlds__inst_match__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1072 "inst_match.m"
              MR_Word check_hlds__inst_match__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 1072 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1157 "inst_match.m"
                {
#line 1157 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1157 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1158 "inst_match.m"
                  check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_47_47 == (MR_Integer) 0);
#line 1157 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1157 "inst_match.m"
                    {
#line 1158 "inst_match.m"
                      check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1157 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1157 "inst_match.m"
                        {
#line 1158 "inst_match.m"
                          *check_hlds__inst_match__STATE_VARIABLE_Info_41 = check_hlds__inst_match__STATE_VARIABLE_Info_0_40;
#line 1158 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1157 "inst_match.m"
                        }
#line 1157 "inst_match.m"
                    }
#line 1157 "inst_match.m"
                }
#line 1072 "inst_match.m"
              else
#line 1072 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1160 "inst_match.m"
                  {
#line 1160 "inst_match.m"
                    MR_Word check_hlds__inst_match__TypeCtorInfo_126_126;
#line 1160 "inst_match.m"
                    MR_Word check_hlds__inst_match__TypeInfo_127_127;
#line 1160 "inst_match.m"
                    MR_Word check_hlds__inst_match__ArgsB_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1160 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_35;
#line 1160 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_44_44;
#line 1160 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_45_45;
#line 1160 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1161 "inst_match.m"
                    {
#line 1161 "inst_match.m"
                      check_hlds__inst_match__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__inst_match__V_131_131, check_hlds__inst_match__V_129_129);
                    }
#line 1160 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1160 "inst_match.m"
                      {
#line 12719 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_126_126 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1162 "inst_match.m"
                        {
#line 1162 "inst_match.m"
                          check_hlds__inst_match__V_44_44 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_126_126, check_hlds__inst_match__V_130_130);
                        }
#line 1162 "inst_match.m"
                        check_hlds__inst_match__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12728 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeInfo_127_127 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 1162 "inst_match.m"
                        {
#line 1162 "inst_match.m"
                          mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_127_127, check_hlds__inst_match__V_44_44, ((MR_Box) (check_hlds__inst_match__V_45_45)), &check_hlds__inst_match__MaybeTypes_35);
                        }
#line 1164 "inst_match.m"
                        {
#line 1164 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_final_5_p_0(check_hlds__inst_match__V_130_130, check_hlds__inst_match__ArgsB_34, check_hlds__inst_match__MaybeTypes_35, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                        }
#line 1160 "inst_match.m"
                      }
#line 1160 "inst_match.m"
                  }
#line 1072 "inst_match.m"
                else
#line 1072 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1072 "inst_match.m"
            }
#line 1072 "inst_match.m"
          else
#line 1072 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1072 "inst_match.m"
              {
#line 1072 "inst_match.m"
                MR_Word check_hlds__inst_match__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 1072 "inst_match.m"
                MR_Word check_hlds__inst_match__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1072 "inst_match.m"
                MR_Word check_hlds__inst_match__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 1072 "inst_match.m"
                if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1100 "inst_match.m"
                  {
#line 1100 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1100 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_57_57;
#line 1100 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_58_58;
#line 1100 "inst_match.m"
                    MR_Word check_hlds__inst_match__UniqB_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1103 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_100_100;
#line 1103 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_101_101;
#line 1103 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_102_102;
#line 1103 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_103_103;
#line 1103 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_104_104;
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_105_105;
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_106_106;
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_107_107;
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_108_108;
#line 1108 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_109_109;

#line 1101 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1100 "inst_match.m"
                      {
#line 1102 "inst_match.m"
                        {
#line 1102 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_136_136, check_hlds__inst_match__UniqB_70);
                        }
#line 1100 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1100 "inst_match.m"
                          {
#line 1103 "inst_match.m"
                            check_hlds__inst_match__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 1103 "inst_match.m"
                            check_hlds__inst_match__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 1103 "inst_match.m"
                            check_hlds__inst_match__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 1103 "inst_match.m"
                            check_hlds__inst_match__V_102_102 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1103 "inst_match.m"
                            check_hlds__inst_match__V_103_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1103 "inst_match.m"
                            check_hlds__inst_match__V_104_104 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1103 "inst_match.m"
                            {
#line 1103 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(check_hlds__inst_match__V_134_134, check_hlds__inst_match__UniqB_70, check_hlds__inst_match__V_57_57);
                            }
#line 1100 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1100 "inst_match.m"
                              {
#line 1108 "inst_match.m"
                                check_hlds__inst_match__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 1108 "inst_match.m"
                                check_hlds__inst_match__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 1108 "inst_match.m"
                                check_hlds__inst_match__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 1108 "inst_match.m"
                                check_hlds__inst_match__V_107_107 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1108 "inst_match.m"
                                check_hlds__inst_match__V_108_108 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1108 "inst_match.m"
                                check_hlds__inst_match__V_109_109 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1108 "inst_match.m"
                                {
#line 1108 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_or_any_3_p_0(check_hlds__inst_match__V_135_135, check_hlds__inst_match__V_134_134, check_hlds__inst_match__V_58_58);
                                }
#line 1100 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 1100 "inst_match.m"
                                  {
#line 1108 "inst_match.m"
                                    *check_hlds__inst_match__STATE_VARIABLE_Info_41 = check_hlds__inst_match__STATE_VARIABLE_Info_0_40;
#line 1108 "inst_match.m"
                                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1100 "inst_match.m"
                                  }
#line 1100 "inst_match.m"
                              }
#line 1100 "inst_match.m"
                          }
#line 1100 "inst_match.m"
                      }
#line 1100 "inst_match.m"
                  }
#line 1072 "inst_match.m"
                else
#line 1072 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1111 "inst_match.m"
                    {
#line 1111 "inst_match.m"
                      MR_Word check_hlds__inst_match__BoundInstsB_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1111 "inst_match.m"
                      MR_Word check_hlds__inst_match__UniqB_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1112 "inst_match.m"
                      MR_Word check_hlds__inst_match___InstResultsB_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 1113 "inst_match.m"
                      {
#line 1113 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_136_136, check_hlds__inst_match__UniqB_72);
                      }
#line 1111 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1114 "inst_match.m"
                        {
#line 1114 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_final_5_p_0(check_hlds__inst_match__V_134_134, check_hlds__inst_match__BoundInstsB_26, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                        }
#line 1111 "inst_match.m"
                    }
#line 1072 "inst_match.m"
                  else
#line 1072 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1117 "inst_match.m"
                      {
#line 1117 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1117 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_53_53;
#line 1117 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_54_54;
#line 1117 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1120 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_110_110;
#line 1120 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_111_111;
#line 1120 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_112_112;
#line 1120 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_113_113;
#line 1120 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_114_114;
#line 1122 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_115_115;
#line 1122 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_116_116;
#line 1122 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_117_117;
#line 1122 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_118_118;
#line 1122 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_119_119;

#line 1118 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1117 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1117 "inst_match.m"
                          {
#line 1119 "inst_match.m"
                            {
#line 1119 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_136_136, check_hlds__inst_match__UniqB_75);
                            }
#line 1117 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1117 "inst_match.m"
                              {
#line 1120 "inst_match.m"
                                check_hlds__inst_match__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 1120 "inst_match.m"
                                check_hlds__inst_match__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 1120 "inst_match.m"
                                check_hlds__inst_match__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 1120 "inst_match.m"
                                check_hlds__inst_match__V_112_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1120 "inst_match.m"
                                check_hlds__inst_match__V_113_113 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1120 "inst_match.m"
                                check_hlds__inst_match__V_114_114 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1120 "inst_match.m"
                                {
#line 1120 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_135_135, check_hlds__inst_match__V_134_134, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_53_53);
                                }
#line 1117 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 1117 "inst_match.m"
                                  {
#line 1122 "inst_match.m"
                                    check_hlds__inst_match__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 1122 "inst_match.m"
                                    check_hlds__inst_match__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 1122 "inst_match.m"
                                    check_hlds__inst_match__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 1122 "inst_match.m"
                                    check_hlds__inst_match__V_117_117 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1122 "inst_match.m"
                                    check_hlds__inst_match__V_118_118 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1122 "inst_match.m"
                                    check_hlds__inst_match__V_119_119 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1122 "inst_match.m"
                                    {
#line 1122 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(check_hlds__inst_match__V_134_134, check_hlds__inst_match__UniqB_75, check_hlds__inst_match__V_54_54);
                                    }
#line 1117 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 1117 "inst_match.m"
                                      {
#line 1122 "inst_match.m"
                                        *check_hlds__inst_match__STATE_VARIABLE_Info_41 = check_hlds__inst_match__STATE_VARIABLE_Info_0_40;
#line 1122 "inst_match.m"
                                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1117 "inst_match.m"
                                      }
#line 1117 "inst_match.m"
                                  }
#line 1117 "inst_match.m"
                              }
#line 1117 "inst_match.m"
                          }
#line 1117 "inst_match.m"
                      }
#line 1072 "inst_match.m"
                    else
#line 1072 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_FALSE;
#line 1072 "inst_match.m"
              }
#line 1072 "inst_match.m"
            else
#line 1072 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1168 "inst_match.m"
                {
#line 1168 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstVarsA_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 1168 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstA_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1174 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstVarsB_38;
#line 1174 "inst_match.m"
                  MR_Word check_hlds__inst_match__SubInstB_39;

#line 1169 "inst_match.m"
                  check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1169 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 1169 "inst_match.m"
                    {
#line 1169 "inst_match.m"
                      check_hlds__inst_match__InstVarsB_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1169 "inst_match.m"
                      check_hlds__inst_match__SubInstB_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1172 "inst_match.m"
                      {
#line 1172 "inst_match.m"
                        check_hlds__inst_match__succeeded = mercury__set__subset_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], check_hlds__inst_match__InstVarsB_38, check_hlds__inst_match__InstVarsA_36);
                      }
#line 1172 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 1173 "inst_match.m"
                        {
#line 1173 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_37, check_hlds__inst_match__SubInstB_39, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                        }
#line 1169 "inst_match.m"
                    }
#line 1169 "inst_match.m"
                  else
#line 1175 "inst_match.m"
                    {
#line 1175 "inst_match.m"
                      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__SubInstA_37, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                    }
#line 1168 "inst_match.m"
                }
#line 1072 "inst_match.m"
              else
#line 1072 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1072 "inst_match.m"
                  {
#line 1072 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 1072 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 1072 "inst_match.m"
                    if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 1125 "inst_match.m"
                      {
#line 1125 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_80 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 1125 "inst_match.m"
                        MR_Word check_hlds__inst_match__HOInstInfoB_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 1127 "inst_match.m"
                        {
#line 1127 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_137_137, check_hlds__inst_match__HOInstInfoB_81, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                        }
#line 1125 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 1128 "inst_match.m"
                          {
#line 1128 "inst_match.m"
                            return check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_138_138, check_hlds__inst_match__UniqB_80);
                          }
#line 1125 "inst_match.m"
                      }
#line 1072 "inst_match.m"
                    else
#line 1072 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1130 "inst_match.m"
                        {
#line 1130 "inst_match.m"
                          MR_Word check_hlds__inst_match__InstResultsB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 1130 "inst_match.m"
                          MR_Word check_hlds__inst_match__ModuleInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 0)));
#line 1130 "inst_match.m"
                          MR_Word check_hlds__inst_match__UniqB_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1130 "inst_match.m"
                          MR_Word check_hlds__inst_match__BoundInstsB_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 1132 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 1)));
#line 1132 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 2)));
#line 1132 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_122_122 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1132 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1132 "inst_match.m"
                          MR_Word check_hlds__inst_match__V_124_124 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_40, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1133 "inst_match.m"
                          {
#line 1133 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_match__ModuleInfo_28, check_hlds__inst_match__V_137_137);
                          }
#line 1133 "inst_match.m"
                          check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 1130 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 1130 "inst_match.m"
                            {
#line 1134 "inst_match.m"
                              {
#line 1134 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_138_138, check_hlds__inst_match__UniqB_84);
                              }
#line 1130 "inst_match.m"
                              if (check_hlds__inst_match__succeeded)
#line 1130 "inst_match.m"
                                {
#line 1135 "inst_match.m"
                                  {
#line 1135 "inst_match.m"
                                    check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__InstResultsB_27, check_hlds__inst_match__BoundInstsB_85, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__ModuleInfo_28);
                                  }
#line 1130 "inst_match.m"
                                  if (check_hlds__inst_match__succeeded)
#line 1130 "inst_match.m"
                                    {
#line 1137 "inst_match.m"
                                      {
#line 1137 "inst_match.m"
                                        check_hlds__inst_match__succeeded = check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(check_hlds__inst_match__V_138_138, check_hlds__inst_match__BoundInstsB_85, check_hlds__inst_match__ModuleInfo_28);
                                      }
#line 1130 "inst_match.m"
                                      if (check_hlds__inst_match__succeeded)
#line 1130 "inst_match.m"
                                        {
#line 1139 "inst_match.m"
                                          {
#line 1139 "inst_match.m"
                                            MR_Word check_hlds__inst_match__TypeCtorInfo_125_125;
#line 1139 "inst_match.m"
                                            MR_Word check_hlds__inst_match__Type_29;
#line 1139 "inst_match.m"
                                            MR_Word check_hlds__inst_match__V_50_50;

#line 1139 "inst_match.m"
                                            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 1139 "inst_match.m"
                                            if (check_hlds__inst_match__succeeded)
#line 1139 "inst_match.m"
                                              {
#line 1139 "inst_match.m"
                                                check_hlds__inst_match__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 13168 "check_hlds.inst_match.c"
                                                check_hlds__inst_match__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 1141 "inst_match.m"
                                                {
#line 1141 "inst_match.m"
                                                  check_hlds__inst_match__V_50_50 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_125_125);
                                                }
#line 1141 "inst_match.m"
                                                {
#line 1141 "inst_match.m"
                                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_50_50, check_hlds__inst_match__ModuleInfo_28, check_hlds__inst_match__BoundInstsB_85, check_hlds__inst_match__Type_29);
                                                }
#line 1139 "inst_match.m"
                                              }
#line 1139 "inst_match.m"
                                          }
#line 1144 "inst_match.m"
                                          if (!(check_hlds__inst_match__succeeded))
#line 1145 "inst_match.m"
                                            {
#line 1145 "inst_match.m"
                                            }
#line 1145 "inst_match.m"
                                          *check_hlds__inst_match__STATE_VARIABLE_Info_41 = check_hlds__inst_match__STATE_VARIABLE_Info_0_40;
#line 1145 "inst_match.m"
                                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1130 "inst_match.m"
                                        }
#line 1130 "inst_match.m"
                                    }
#line 1130 "inst_match.m"
                                }
#line 1130 "inst_match.m"
                            }
#line 1130 "inst_match.m"
                        }
#line 1072 "inst_match.m"
                      else
#line 1072 "inst_match.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1152 "inst_match.m"
                          {
#line 1152 "inst_match.m"
                            MR_Word check_hlds__inst_match__UniqB_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 1152 "inst_match.m"
                            MR_Word check_hlds__inst_match__HOInstInfoB_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 1154 "inst_match.m"
                            {
#line 1154 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_final_5_p_0(check_hlds__inst_match__V_137_137, check_hlds__inst_match__HOInstInfoB_89, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_40, check_hlds__inst_match__STATE_VARIABLE_Info_41);
                            }
#line 1152 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 1155 "inst_match.m"
                              {
#line 1155 "inst_match.m"
                                return check_hlds__inst_match__succeeded = check_hlds__inst_match__unique_matches_final_2_p_0(check_hlds__inst_match__V_138_138, check_hlds__inst_match__UniqB_88);
                              }
#line 1152 "inst_match.m"
                          }
#line 1072 "inst_match.m"
                        else
#line 1072 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_FALSE;
#line 1072 "inst_match.m"
                  }
#line 1072 "inst_match.m"
                else
#line 1072 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1072 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1072 "inst_match.m"
  }
#line 1067 "inst_match.m"
}

#line 1046 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_mt_5_p_0(
#line 1046 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 1046 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 1046 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 1046 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 1046 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 1046 "inst_match.m"
{
#line 1049 "inst_match.m"
  {
#line 1049 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1049 "inst_match.m"
    MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 1049 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1051 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1051 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1051 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1051 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1051 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1050 "inst_match.m"
    {
#line 1050 "inst_match.m"
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1050 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 1050 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 1050 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 1050 "inst_match.m"
    }
#line 1052 "inst_match.m"
    {
#line 1052 "inst_match.m"
      check_hlds__inst_match__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7);
    }
#line 1054 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 1052 "inst_match.m"
      {
#line 1052 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 1052 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1052 "inst_match.m"
      }
#line 1054 "inst_match.m"
    else
#line 1055 "inst_match.m"
      {
#line 1055 "inst_match.m"
        MR_Word check_hlds__inst_match__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1055 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1055 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1055 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1055 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1055 "inst_match.m"
        MR_Word check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1062 "inst_match.m"
        MR_Word check_hlds__inst_match__Expansions_12;
#line 367 "inst_match.m"
        MR_Word check_hlds__inst_match__TypeCtorInfo_7_65;

#line 1055 "inst_match.m"
        {
#line 1055 "inst_match.m"
          check_hlds__inst_match__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[2], ((MR_Box) (check_hlds__inst_match__Expansions0_11)), ((MR_Box) (check_hlds__inst_match__V_59_59)));
        }
#line 1055 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1055 "inst_match.m"
          {
#line 13337 "check_hlds.inst_match.c"
            check_hlds__inst_match__TypeCtorInfo_7_65 = (MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0;
#line 367 "inst_match.m"
            {
#line 367 "inst_match.m"
              check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0(check_hlds__inst_match__TypeCtorInfo_7_65, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
            }
#line 1062 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1057 "inst_match.m"
              {
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__V_19_19;
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1057 "inst_match.m"
                MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1059 "inst_match.m"
                MR_Word check_hlds__inst_match__V_44_44;
#line 1059 "inst_match.m"
                MR_Word check_hlds__inst_match__V_45_45;
#line 1059 "inst_match.m"
                MR_Word check_hlds__inst_match__V_46_46;
#line 1059 "inst_match.m"
                MR_Word check_hlds__inst_match__V_47_47;
#line 1059 "inst_match.m"
                MR_Word check_hlds__inst_match__V_48_48;

#line 1057 "inst_match.m"
                {
#line 1057 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_33_33));
#line 1057 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 1057 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_35_35));
#line 1057 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_36_36 | ((((check_hlds__inst_match__V_37_37 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_38_38 << (MR_Integer) 3)))))));
#line 1057 "inst_match.m"
                }
#line 1058 "inst_match.m"
                {
#line 1058 "inst_match.m"
                  check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_match__V_33_33, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
                }
#line 1059 "inst_match.m"
                check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 1059 "inst_match.m"
                check_hlds__inst_match__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 1059 "inst_match.m"
                check_hlds__inst_match__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 1059 "inst_match.m"
                check_hlds__inst_match__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1059 "inst_match.m"
                check_hlds__inst_match__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1059 "inst_match.m"
                check_hlds__inst_match__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1059 "inst_match.m"
                {
#line 1059 "inst_match.m"
                  check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
                }
#line 1060 "inst_match.m"
                {
#line 1060 "inst_match.m"
                  return check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs__ho1_7_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
                }
#line 1057 "inst_match.m"
              }
#line 1062 "inst_match.m"
            else
#line 1060 "inst_match.m"
              {
#line 1060 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 1060 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1060 "inst_match.m"
              }
#line 1055 "inst_match.m"
          }
#line 1055 "inst_match.m"
      }
#line 1049 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1049 "inst_match.m"
  }
#line 1046 "inst_match.m"
}

#line 1026 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(
#line 1026 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1026 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1026 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 1026 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1026 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1026 "inst_match.m"
{
#line 1030 "inst_match.m"
  while (MR_TRUE)
#line 1030 "inst_match.m"
    {
#line 1030 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1030 "inst_match.m"
      {
#line 1030 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1030 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1030 "inst_match.m"
          {
#line 1030 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1030 "inst_match.m"
              {
#line 1030 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1030 "inst_match.m"
                  {
#line 1030 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1030 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1030 "inst_match.m"
                  }
#line 1030 "inst_match.m"
              }
#line 1030 "inst_match.m"
          }
#line 1030 "inst_match.m"
        else
#line 1032 "inst_match.m"
          {
#line 1032 "inst_match.m"
            MR_Word check_hlds__inst_match__X_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1032 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1032 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_11;
#line 1032 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_12;
#line 1032 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 1032 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 1032 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1032 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1032 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1032 "inst_match.m"
              {
#line 1032 "inst_match.m"
                check_hlds__inst_match__Y_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1032 "inst_match.m"
                check_hlds__inst_match__Ys_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1032 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1032 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1032 "inst_match.m"
                  {
#line 1032 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 1032 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 1033 "inst_match.m"
                    {
#line 1033 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__X_9, check_hlds__inst_match__Y_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_18_18);
                    }
#line 1032 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1034 "inst_match.m"
                      {
#line 1034 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1034 "inst_match.m"
                        {
#line 1034 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_10;
#line 1034 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_12;
#line 1034 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 1034 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_18_18;

#line 1034 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1034 "inst_match.m"
                          check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 1034 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1034 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1034 "inst_match.m"
                        }
#line 1034 "inst_match.m"
                        continue;
#line 1034 "inst_match.m"
                      }
#line 1032 "inst_match.m"
                  }
#line 1032 "inst_match.m"
              }
#line 1032 "inst_match.m"
          }
#line 1030 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1030 "inst_match.m"
      }
#line 1030 "inst_match.m"
      break;
#line 1030 "inst_match.m"
    }
#line 1026 "inst_match.m"
}

#line 1004 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(
#line 1004 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 1004 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 1004 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 1004 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 1004 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 1004 "inst_match.m"
{
#line 1008 "inst_match.m"
  while (MR_TRUE)
#line 1008 "inst_match.m"
    {
#line 1008 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1008 "inst_match.m"
      {
#line 1008 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1008 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "inst_match.m"
          {
#line 1008 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 1008 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1008 "inst_match.m"
          }
#line 1008 "inst_match.m"
        else
#line 1009 "inst_match.m"
          {
#line 1009 "inst_match.m"
            MR_Word check_hlds__inst_match__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 1009 "inst_match.m"
            MR_Word check_hlds__inst_match__Xs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 1009 "inst_match.m"
            MR_Word check_hlds__inst_match__Y_13;
#line 1009 "inst_match.m"
            MR_Word check_hlds__inst_match__Ys_14;
#line 1009 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdX_17;
#line 1009 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsX_18;
#line 1009 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsIdY_19;
#line 1009 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgsY_20;

#line 1009 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1009 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1009 "inst_match.m"
              {
#line 1009 "inst_match.m"
                check_hlds__inst_match__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 1009 "inst_match.m"
                check_hlds__inst_match__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 1010 "inst_match.m"
                check_hlds__inst_match__ConsIdX_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 0)));
#line 1010 "inst_match.m"
                check_hlds__inst_match__ArgsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__X_11, (MR_Integer) 1)));
#line 1011 "inst_match.m"
                check_hlds__inst_match__ConsIdY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 0)));
#line 1011 "inst_match.m"
                check_hlds__inst_match__ArgsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Y_13, (MR_Integer) 1)));
#line 1012 "inst_match.m"
                {
#line 1012 "inst_match.m"
                  check_hlds__inst_match__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0(check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                }
#line 1017 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 1014 "inst_match.m"
                  {
#line 1014 "inst_match.m"
                    MR_Word check_hlds__inst_match__MaybeTypes_21;
#line 1014 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1014 "inst_match.m"
                    MR_Integer check_hlds__inst_match__V_25_25;
#line 1014 "inst_match.m"
                    MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_26_26;
#line 1013 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1013 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1013 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 1013 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1013 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1013 "inst_match.m"
                    {
#line 1013 "inst_match.m"
                      check_hlds__inst_match__V_25_25 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__ArgsX_18);
                    }
#line 1013 "inst_match.m"
                    {
#line 1013 "inst_match.m"
                      check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_24_24, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__V_25_25, &check_hlds__inst_match__MaybeTypes_21);
                    }
#line 1015 "inst_match.m"
                    {
#line 1015 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__ArgsX_18, check_hlds__inst_match__ArgsY_20, check_hlds__inst_match__MaybeTypes_21, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_26_26);
                    }
#line 1014 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1016 "inst_match.m"
                      {
#line 1016 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1016 "inst_match.m"
                        {
#line 1016 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Xs_12;
#line 1016 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;
#line 1016 "inst_match.m"
                          MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_26_26;

#line 1016 "inst_match.m"
                          check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1016 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1016 "inst_match.m"
                          check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 1016 "inst_match.m"
                        }
#line 1016 "inst_match.m"
                        continue;
#line 1016 "inst_match.m"
                      }
#line 1014 "inst_match.m"
                  }
#line 1017 "inst_match.m"
                else
#line 1018 "inst_match.m"
                  {
#line 846 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameA_38;
#line 846 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityA_39;
#line 846 "inst_match.m"
                    MR_Word check_hlds__inst_match__QNameB_41;
#line 846 "inst_match.m"
                    MR_Integer check_hlds__inst_match__ArityB_42;
#line 830 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_40_40;
#line 831 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_43_43;

#line 830 "inst_match.m"
                    check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdX_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 830 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 830 "inst_match.m"
                      {
#line 830 "inst_match.m"
                        check_hlds__inst_match__QNameA_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 1)));
#line 830 "inst_match.m"
                        check_hlds__inst_match__ArityA_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 2)));
#line 830 "inst_match.m"
                        check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdX_17, (MR_Integer) 3)));
#line 831 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__ConsIdY_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 831 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 831 "inst_match.m"
                          {
#line 831 "inst_match.m"
                            check_hlds__inst_match__QNameB_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 1)));
#line 831 "inst_match.m"
                            check_hlds__inst_match__ArityB_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 2)));
#line 831 "inst_match.m"
                            check_hlds__inst_match__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__ConsIdY_19, (MR_Integer) 3)));
#line 831 "inst_match.m"
                          }
#line 830 "inst_match.m"
                      }
#line 846 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 835 "inst_match.m"
                      {
#line 835 "inst_match.m"
                        MR_String check_hlds__inst_match__NameA_44;
#line 835 "inst_match.m"
                        MR_String check_hlds__inst_match__NameB_46;
#line 835 "inst_match.m"
                        MR_Word check_hlds__inst_match__O_48;

#line 834 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameA_38)) == (MR_mktag((MR_Integer) 1))))
#line 834 "inst_match.m"
                          {
#line 834 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_38, (MR_Integer) 0)));

#line 834 "inst_match.m"
                            check_hlds__inst_match__NameA_44 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameA_38, (MR_Integer) 1)));
#line 834 "inst_match.m"
                          }
#line 834 "inst_match.m"
                        else
#line 833 "inst_match.m"
                          check_hlds__inst_match__NameA_44 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameA_38, (MR_Integer) 0)));
#line 837 "inst_match.m"
                        if (((MR_tag((MR_Word) check_hlds__inst_match__QNameB_41)) == (MR_mktag((MR_Integer) 1))))
#line 837 "inst_match.m"
                          {
#line 837 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_41, (MR_Integer) 0)));

#line 837 "inst_match.m"
                            check_hlds__inst_match__NameB_46 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__QNameB_41, (MR_Integer) 1)));
#line 837 "inst_match.m"
                          }
#line 837 "inst_match.m"
                        else
#line 836 "inst_match.m"
                          check_hlds__inst_match__NameB_46 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__QNameB_41, (MR_Integer) 0)));
#line 839 "inst_match.m"
                        {
#line 839 "inst_match.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_match__O_48, check_hlds__inst_match__NameA_44, check_hlds__inst_match__NameB_46);
                        }
#line 842 "inst_match.m"
                        if ((check_hlds__inst_match__O_48 == (MR_Integer) 0))
#line 844 "inst_match.m"
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__ArityA_39 > check_hlds__inst_match__ArityB_42);
#line 842 "inst_match.m"
                        else
#line 842 "inst_match.m"
                          if ((check_hlds__inst_match__O_48 == (MR_Integer) 2))
#line 841 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 842 "inst_match.m"
                          else
#line 842 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 835 "inst_match.m"
                      }
#line 846 "inst_match.m"
                    else
#line 847 "inst_match.m"
                      {
#line 847 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_52_52;

#line 847 "inst_match.m"
                        {
#line 847 "inst_match.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__inst_match__V_52_52, check_hlds__inst_match__ConsIdX_17, check_hlds__inst_match__ConsIdY_19);
                        }
#line 847 "inst_match.m"
                        check_hlds__inst_match__succeeded = ((MR_Integer) 2 == check_hlds__inst_match__V_52_52);
#line 847 "inst_match.m"
                      }
#line 1018 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 1023 "inst_match.m"
                      {
#line 1023 "inst_match.m"
                        /* direct tailcall eliminated */
#line 1023 "inst_match.m"
                        {
#line 1023 "inst_match.m"
                          MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Ys_14;

#line 1023 "inst_match.m"
                          check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 1023 "inst_match.m"
                        }
#line 1023 "inst_match.m"
                        continue;
#line 1023 "inst_match.m"
                      }
#line 1018 "inst_match.m"
                  }
#line 1009 "inst_match.m"
              }
#line 1009 "inst_match.m"
          }
#line 1008 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1008 "inst_match.m"
      }
#line 1008 "inst_match.m"
      break;
#line 1008 "inst_match.m"
    }
#line 1004 "inst_match.m"
}

#line 984 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__uniq_matches_bound_inst_list_3_p_0(
#line 984 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_4,
#line 984 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_5,
#line 984 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 984 "inst_match.m"
{
#line 990 "inst_match.m"
  {
#line 990 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_4 == (MR_Integer) 0);

#line 990 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 989 "inst_match.m"
      {
#line 989 "inst_match.m"
        return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
      }
#line 990 "inst_match.m"
    else
#line 992 "inst_match.m"
      {
#line 990 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_4 == (MR_Integer) 2);
#line 992 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 991 "inst_match.m"
          {
#line 991 "inst_match.m"
            return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__BoundInsts_5, check_hlds__inst_match__ModuleInfo_6);
          }
#line 992 "inst_match.m"
        else
#line 993 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 992 "inst_match.m"
      }
#line 990 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 990 "inst_match.m"
  }
#line 984 "inst_match.m"
}

#line 972 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_matches_uniq_3_p_0(
#line 972 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_4,
#line 972 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_5,
#line 972 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 972 "inst_match.m"
{
#line 978 "inst_match.m"
  {
#line 978 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_5 == (MR_Integer) 1);

#line 978 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 977 "inst_match.m"
      {
#line 977 "inst_match.m"
        return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__BoundInsts_4, check_hlds__inst_match__ModuleInfo_6);
      }
#line 978 "inst_match.m"
    else
#line 980 "inst_match.m"
      {
#line 978 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_5 == (MR_Integer) 2);
#line 980 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 979 "inst_match.m"
          {
#line 979 "inst_match.m"
            return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__BoundInsts_4, check_hlds__inst_match__ModuleInfo_6);
          }
#line 980 "inst_match.m"
        else
#line 981 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 980 "inst_match.m"
      }
#line 978 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 978 "inst_match.m"
  }
#line 972 "inst_match.m"
}

#line 964 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(
#line 964 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 964 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_2,
#line 964 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_3,
#line 964 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4)
#line 964 "inst_match.m"
{
#line 967 "inst_match.m"
  {
#line 967 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 967 "inst_match.m"
    if ((check_hlds__inst_match__HeadVar__1_1 == (MR_Integer) 1))
#line 990 "inst_match.m"
      {
#line 988 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 0);
#line 990 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 989 "inst_match.m"
          {
#line 989 "inst_match.m"
            return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
          }
#line 990 "inst_match.m"
        else
#line 992 "inst_match.m"
          {
#line 990 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 2);
#line 992 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 991 "inst_match.m"
              {
#line 991 "inst_match.m"
                return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
              }
#line 992 "inst_match.m"
            else
#line 993 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 992 "inst_match.m"
          }
#line 990 "inst_match.m"
      }
#line 967 "inst_match.m"
    else
#line 978 "inst_match.m"
      {
#line 976 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 1);
#line 978 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 977 "inst_match.m"
          {
#line 977 "inst_match.m"
            return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
          }
#line 978 "inst_match.m"
        else
#line 980 "inst_match.m"
          {
#line 978 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__Uniq_3 == (MR_Integer) 2);
#line 980 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 979 "inst_match.m"
              {
#line 979 "inst_match.m"
                return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__BoundInsts_2, check_hlds__inst_match__ModuleInfo_4);
              }
#line 980 "inst_match.m"
            else
#line 981 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 980 "inst_match.m"
          }
#line 978 "inst_match.m"
      }
#line 967 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 967 "inst_match.m"
  }
#line 964 "inst_match.m"
}

#line 939 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__compare_uniqueness_3_p_0(
#line 939 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 939 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_2,
#line 939 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_3)
#line 939 "inst_match.m"
{
#line 942 "inst_match.m"
  {
#line 942 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 942 "inst_match.m"
    if ((check_hlds__inst_match__HeadVar__1_1 == (MR_Integer) 1))
#line 947 "inst_match.m"
      if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 3))
#line 957 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstA_2 == (MR_Integer) 3);
#line 947 "inst_match.m"
      else
#line 947 "inst_match.m"
        if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 4))
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 3))
#line 956 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 4))
#line 955 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
        else
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 2))
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 3))
#line 951 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 4))
#line 950 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
              else
#line 947 "inst_match.m"
                if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 2))
#line 948 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                else
#line 947 "inst_match.m"
                  if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 0))
#line 949 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                  else
#line 947 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 0))
#line 947 "inst_match.m"
              if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 3))
#line 954 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
              else
#line 947 "inst_match.m"
                if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 4))
#line 953 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                else
#line 947 "inst_match.m"
                  if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 0))
#line 952 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                  else
#line 947 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 942 "inst_match.m"
    else
#line 947 "inst_match.m"
      if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 3))
#line 957 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_3 == (MR_Integer) 3);
#line 947 "inst_match.m"
      else
#line 947 "inst_match.m"
        if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 4))
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 3))
#line 956 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 4))
#line 955 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
        else
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 2))
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 3))
#line 951 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 4))
#line 950 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
              else
#line 947 "inst_match.m"
                if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 2))
#line 948 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                else
#line 947 "inst_match.m"
                  if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 0))
#line 949 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                  else
#line 947 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__InstA_2 == (MR_Integer) 0))
#line 947 "inst_match.m"
              if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 3))
#line 954 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
              else
#line 947 "inst_match.m"
                if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 4))
#line 953 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                else
#line 947 "inst_match.m"
                  if ((check_hlds__inst_match__InstB_3 == (MR_Integer) 0))
#line 952 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                  else
#line 947 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 942 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 942 "inst_match.m"
  }
#line 939 "inst_match.m"
}

#line 917 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(
#line 917 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 917 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 917 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 917 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 917 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 917 "inst_match.m"
{
#line 921 "inst_match.m"
  while (MR_TRUE)
#line 921 "inst_match.m"
    {
#line 921 "inst_match.m"
      /* tailcall optimized into a loop */
#line 921 "inst_match.m"
      {
#line 921 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 921 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "inst_match.m"
          {
#line 921 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 921 "inst_match.m"
              {
#line 921 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 921 "inst_match.m"
                  {
#line 921 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 921 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 921 "inst_match.m"
                  }
#line 921 "inst_match.m"
              }
#line 921 "inst_match.m"
          }
#line 921 "inst_match.m"
        else
#line 923 "inst_match.m"
          {
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeA_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeAs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeB_11;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__ModeBs_12;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo_16;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__InitialA_17;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__FinalA_18;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__InitialB_19;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__FinalB_20;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_24_24;
#line 923 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_25_25;
#line 924 "inst_match.m"
            MR_Word check_hlds__inst_match__V_27_27;
#line 924 "inst_match.m"
            MR_Word check_hlds__inst_match__V_28_28;
#line 924 "inst_match.m"
            MR_Word check_hlds__inst_match__V_29_29;
#line 924 "inst_match.m"
            MR_Word check_hlds__inst_match__V_30_30;
#line 924 "inst_match.m"
            MR_Word check_hlds__inst_match__V_31_31;

#line 923 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 923 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 923 "inst_match.m"
              {
#line 923 "inst_match.m"
                check_hlds__inst_match__ModeB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 923 "inst_match.m"
                check_hlds__inst_match__ModeBs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 923 "inst_match.m"
                check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 923 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 923 "inst_match.m"
                  {
#line 923 "inst_match.m"
                    check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 923 "inst_match.m"
                    check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 924 "inst_match.m"
                    check_hlds__inst_match__ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 924 "inst_match.m"
                    check_hlds__inst_match__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 924 "inst_match.m"
                    check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 924 "inst_match.m"
                    check_hlds__inst_match__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 924 "inst_match.m"
                    check_hlds__inst_match__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 924 "inst_match.m"
                    check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 925 "inst_match.m"
                    {
#line 925 "inst_match.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__inst_match__ModuleInfo_16, check_hlds__inst_match__ModeA_9, &check_hlds__inst_match__InitialA_17, &check_hlds__inst_match__FinalA_18);
                    }
#line 926 "inst_match.m"
                    {
#line 926 "inst_match.m"
                      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__inst_match__ModuleInfo_16, check_hlds__inst_match__ModeB_11, &check_hlds__inst_match__InitialB_19, &check_hlds__inst_match__FinalB_20);
                    }
#line 927 "inst_match.m"
                    {
#line 927 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_119_97_112_95_115_117_98_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(check_hlds__inst_match__InitialB_19, check_hlds__inst_match__InitialA_17, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_24_24);
                    }
#line 923 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 923 "inst_match.m"
                      {
#line 928 "inst_match.m"
                        {
#line 928 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__FinalA_18, check_hlds__inst_match__FinalB_20, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_24_24, &check_hlds__inst_match__STATE_VARIABLE_Info_25_25);
                        }
#line 923 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 929 "inst_match.m"
                          {
#line 929 "inst_match.m"
                            /* direct tailcall eliminated */
#line 929 "inst_match.m"
                            {
#line 929 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__ModeAs_10;
#line 929 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__ModeBs_12;
#line 929 "inst_match.m"
                              MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 929 "inst_match.m"
                              MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_25_25;

#line 929 "inst_match.m"
                              check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 929 "inst_match.m"
                              check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 929 "inst_match.m"
                              check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 929 "inst_match.m"
                              check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 929 "inst_match.m"
                            }
#line 929 "inst_match.m"
                            continue;
#line 929 "inst_match.m"
                          }
#line 923 "inst_match.m"
                      }
#line 923 "inst_match.m"
                  }
#line 923 "inst_match.m"
              }
#line 923 "inst_match.m"
          }
#line 921 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 921 "inst_match.m"
      }
#line 921 "inst_match.m"
      break;
#line 921 "inst_match.m"
    }
#line 917 "inst_match.m"
}

#line 855 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(
#line 855 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoA_6,
#line 855 "inst_match.m"
  MR_Word check_hlds__inst_match__HOInstInfoB_7,
#line 855 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 855 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 855 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 855 "inst_match.m"
{
#line 860 "inst_match.m"
  {
#line 860 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 860 "inst_match.m"
    if ((check_hlds__inst_match__HOInstInfoB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "inst_match.m"
      {
#line 861 "inst_match.m"
        MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 861 "inst_match.m"
        MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 861 "inst_match.m"
        MR_Word check_hlds__inst_match__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 861 "inst_match.m"
        MR_Word check_hlds__inst_match__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 861 "inst_match.m"
        MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 861 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 861 "inst_match.m"
        {
#line 861 "inst_match.m"
          check_hlds__inst_match__succeeded = check_hlds__inst_util__ho_inst_info_is_nonstandard_func_mode_2_p_0(check_hlds__inst_match__V_21_21, check_hlds__inst_match__HOInstInfoA_6);
        }
#line 861 "inst_match.m"
        check_hlds__inst_match__succeeded = !(check_hlds__inst_match__succeeded);
#line 860 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 860 "inst_match.m"
          {
#line 861 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_17 = check_hlds__inst_match__STATE_VARIABLE_Info_0_16;
#line 861 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 860 "inst_match.m"
          }
#line 860 "inst_match.m"
      }
#line 860 "inst_match.m"
    else
#line 860 "inst_match.m"
      {
#line 860 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoB_7), (MR_Integer) 1);

#line 860 "inst_match.m"
        if ((check_hlds__inst_match__HOInstInfoA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "inst_match.m"
          {
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_29_29;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_64;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 1)));
#line 864 "inst_match.m"
            MR_Integer check_hlds__inst_match__Arity_14;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_15;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 0)));
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_55;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_56;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_58;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_59;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_61;
#line 864 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_62_62;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__V_65_65;
#line 864 "inst_match.m"
            MR_Word check_hlds__inst_match__V_66_66;
#line 866 "inst_match.m"
            MR_Word check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 2)));
#line 866 "inst_match.m"
            MR_Word check_hlds__inst_match___Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 3)));
#line 900 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_57;
#line 901 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_60;

#line 866 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_19_19 == (MR_Integer) 1);
#line 864 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 864 "inst_match.m"
              {
#line 14580 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 867 "inst_match.m"
                {
#line 867 "inst_match.m"
                  check_hlds__inst_match__Arity_14 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_29_29, check_hlds__inst_match__ArgModes_11);
                }
#line 868 "inst_match.m"
                {
#line 868 "inst_match.m"
                  check_hlds__inst_match__PredInstA_15 = check_hlds__inst_util__pred_inst_info_standard_func_mode_1_f_0(check_hlds__inst_match__Arity_14);
                }
#line 900 "inst_match.m"
                check_hlds__inst_match__PredOrFunc_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 0)));
#line 900 "inst_match.m"
                check_hlds__inst_match__ModesA_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 1)));
#line 900 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsA_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 2)));
#line 900 "inst_match.m"
                check_hlds__inst_match__Det_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_15, (MR_Integer) 3)));
#line 901 "inst_match.m"
                check_hlds__inst_match__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 0)));
#line 901 "inst_match.m"
                check_hlds__inst_match__ModesB_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 1)));
#line 901 "inst_match.m"
                check_hlds__inst_match___MaybeArgRegsB_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 2)));
#line 901 "inst_match.m"
                check_hlds__inst_match__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 3)));
#line 901 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_55 == check_hlds__inst_match__V_65_65);
#line 864 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 864 "inst_match.m"
                  {
#line 901 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_58 == check_hlds__inst_match__V_66_66);
#line 864 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 864 "inst_match.m"
                      {
#line 14620 "check_hlds.inst_match.c"
                        check_hlds__inst_match__TypeCtorInfo_21_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 902 "inst_match.m"
                        {
#line 902 "inst_match.m"
                          check_hlds__inst_match__V_62_62 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_64, check_hlds__inst_match__ModesA_56);
                        }
#line 902 "inst_match.m"
                        {
#line 902 "inst_match.m"
                          check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_62_62, &check_hlds__inst_match__MaybeTypes_61);
                        }
#line 903 "inst_match.m"
                        {
#line 903 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_56, check_hlds__inst_match__ModesB_59, check_hlds__inst_match__MaybeTypes_61, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                        }
#line 864 "inst_match.m"
                      }
#line 864 "inst_match.m"
                  }
#line 864 "inst_match.m"
              }
#line 864 "inst_match.m"
          }
#line 860 "inst_match.m"
        else
#line 871 "inst_match.m"
          {
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_21_46;
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__PredInstA_23 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_match__HOInstInfoA_6), (MR_Integer) 1);
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 0)));
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesA_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 1)));
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__Det_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 3)));
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__ModesB_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 1)));
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_43;
#line 871 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_44_44;
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 0)));
#line 871 "inst_match.m"
            MR_Word check_hlds__inst_match__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 3)));
#line 900 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsA_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_23, (MR_Integer) 2)));
#line 901 "inst_match.m"
            MR_Word check_hlds__inst_match___MaybeArgRegsB_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__V_30_30, (MR_Integer) 2)));

#line 901 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_37 == check_hlds__inst_match__V_47_47);
#line 871 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 871 "inst_match.m"
              {
#line 901 "inst_match.m"
                check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_40 == check_hlds__inst_match__V_48_48);
#line 871 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 871 "inst_match.m"
                  {
#line 14686 "check_hlds.inst_match.c"
                    check_hlds__inst_match__TypeCtorInfo_21_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 902 "inst_match.m"
                    {
#line 902 "inst_match.m"
                      check_hlds__inst_match__V_44_44 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_46, check_hlds__inst_match__ModesA_38);
                    }
#line 902 "inst_match.m"
                    {
#line 902 "inst_match.m"
                      check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_44_44, &check_hlds__inst_match__MaybeTypes_43);
                    }
#line 903 "inst_match.m"
                    {
#line 903 "inst_match.m"
                      return check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_38, check_hlds__inst_match__ModesB_41, check_hlds__inst_match__MaybeTypes_43, check_hlds__inst_match__STATE_VARIABLE_Info_0_16, check_hlds__inst_match__STATE_VARIABLE_Info_17);
                    }
#line 871 "inst_match.m"
                  }
#line 871 "inst_match.m"
              }
#line 871 "inst_match.m"
          }
#line 860 "inst_match.m"
      }
#line 860 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 860 "inst_match.m"
  }
#line 855 "inst_match.m"
}

#line 797 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8(
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 797 "inst_match.m"
{
#line 797 "inst_match.m"
  {
#line 797 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 797 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;

#line 797 "inst_match.m"
    {
#line 797 "inst_match.m"
      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 797 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 797 "inst_match.m"
  }
#line 797 "inst_match.m"
}

#line 780 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1(
#line 780 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 780 "inst_match.m"
{
#line 780 "inst_match.m"
  {
#line 780 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 780 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0, 1);
#line 780 "inst_match.m"
  }
#line 780 "inst_match.m"
}

#line 780 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(
#line 780 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 780 "inst_match.m"
{
#line 780 "inst_match.m"
  {
#line 780 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 780 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
#line 780 "inst_match.m"
      {
#line 780 "inst_match.m"
        {
#line 780 "inst_match.m"
          MR_Word check_hlds__inst_match__V_21_21;
#line 780 "inst_match.m"
          MR_Word check_hlds__inst_match__V_22_22;

#line 780 "inst_match.m"
          {
#line 780 "inst_match.m"
            check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &check_hlds__inst_match__V_21_21, &check_hlds__inst_match__V_22_22, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_1, check_hlds__inst_match__env_ptr);
          }
#line 780 "inst_match.m"
        }
#line 780 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 780 "inst_match.m"
      }
#line 780 "inst_match.m"
    else
#line 780 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 780 "inst_match.m"
  }
#line 780 "inst_match.m"
}

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 788 "inst_match.m"
{
#line 788 "inst_match.m"
  {
#line 788 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 788 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1, 1);
#line 788 "inst_match.m"
  }
#line 788 "inst_match.m"
}

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 792 "inst_match.m"
{
#line 792 "inst_match.m"
  {
#line 792 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2, 1);
#line 792 "inst_match.m"
  }
#line 792 "inst_match.m"
}

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 792 "inst_match.m"
{
#line 792 "inst_match.m"
  {
#line 792 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27);
#line 792 "inst_match.m"
    {
#line 792 "inst_match.m"
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(check_hlds__inst_match__env_ptr);
#line 792 "inst_match.m"
      return;
    }
#line 792 "inst_match.m"
  }
#line 792 "inst_match.m"
}

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_6(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 792 "inst_match.m"
{
#line 792 "inst_match.m"
  {
#line 792 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27, (MR_Integer) 0)));
#line 792 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_27_27, (MR_Integer) 1)));
#line 796 "inst_match.m"
    {
#line 796 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId0_25, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23);
    }
#line 792 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 792 "inst_match.m"
      {
#line 14899 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 14901 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 797 "inst_match.m"
        {
#line 797 "inst_match.m"
          MR_Word base;
#line 797 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 797 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28 = base;
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__inst_is_complete_for_type_4_p_0_8));
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5));
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
#line 797 "inst_match.m"
        }
#line 797 "inst_match.m"
        {
#line 797 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_32, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_33, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__V_28_28, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgInsts_26, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24);
        }
#line 797 "inst_match.m"
        if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 797 "inst_match.m"
          {
#line 797 "inst_match.m"
            check_hlds__inst_match__inst_is_complete_for_type_4_p_0_5(check_hlds__inst_match__env_ptr);
#line 797 "inst_match.m"
            return;
          }
#line 792 "inst_match.m"
      }
#line 792 "inst_match.m"
  }
#line 792 "inst_match.m"
}

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 792 "inst_match.m"
{
#line 792 "inst_match.m"
  {
#line 792 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
#line 792 "inst_match.m"
      {
#line 792 "inst_match.m"
        {
#line 792 "inst_match.m"
          {
#line 792 "inst_match.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__conv0_V_27_27, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_7, check_hlds__inst_match__env_ptr);
          }
#line 792 "inst_match.m"
        }
#line 792 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 792 "inst_match.m"
      }
#line 792 "inst_match.m"
    else
#line 792 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 792 "inst_match.m"
  }
#line 792 "inst_match.m"
}

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 788 "inst_match.m"
{
#line 788 "inst_match.m"
  {
#line 788 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    {
#line 792 "inst_match.m"
      check_hlds__inst_match__inst_is_complete_for_type_4_p_0_9(check_hlds__inst_match__env_ptr);
    }
#line 790 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 790 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 790 "inst_match.m"
      {
#line 790 "inst_match.m"
        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_3(check_hlds__inst_match__env_ptr);
#line 790 "inst_match.m"
        return;
      }
#line 788 "inst_match.m"
  }
#line 788 "inst_match.m"
}

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 788 "inst_match.m"
{
#line 788 "inst_match.m"
  {
#line 788 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 788 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
#line 788 "inst_match.m"
      {
#line 789 "inst_match.m"
        {
#line 789 "inst_match.m"
          check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ConsId_23, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ArgTypes_24, check_hlds__inst_match__inst_is_complete_for_type_4_p_0_4, check_hlds__inst_match__env_ptr);
        }
#line 788 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 788 "inst_match.m"
      }
#line 788 "inst_match.m"
    else
#line 788 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 788 "inst_match.m"
  }
#line 788 "inst_match.m"
}

#line 802 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_is_complete_for_type_4_p_0(
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_7,
#line 802 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8)
#line 802 "inst_match.m"
{
#line 802 "inst_match.m"
  {
#line 802 "inst_match.m"
    struct check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0_s check_hlds__inst_match__env;

#line 802 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions_5;
#line 802 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = check_hlds__inst_match__ModuleInfo_6;
#line 802 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Type_8 = check_hlds__inst_match__Type_8;
#line 815 "inst_match.m"
    while (MR_TRUE)
#line 815 "inst_match.m"
      {
#line 815 "inst_match.m"
        /* tailcall optimized into a loop */
#line 815 "inst_match.m"
        {
#line 815 "inst_match.m"
          MR_Word check_hlds__inst_match__Name_9;

#line 807 "inst_match.m"
          (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 807 "inst_match.m"
          if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 807 "inst_match.m"
            {
#line 807 "inst_match.m"
              check_hlds__inst_match__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));
#line 808 "inst_match.m"
              {
#line 808 "inst_match.m"
                (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_match__Name_9)), (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5);
              }
#line 810 "inst_match.m"
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 809 "inst_match.m"
                (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 810 "inst_match.m"
              else
#line 811 "inst_match.m"
                {
#line 811 "inst_match.m"
                  MR_Word check_hlds__inst_match__ExpandedInst_10;
#line 811 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_14_14;

#line 811 "inst_match.m"
                  {
#line 811 "inst_match.m"
                    check_hlds__mode_util__inst_lookup_3_p_0((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, check_hlds__inst_match__Name_9, &check_hlds__inst_match__ExpandedInst_10);
                  }
#line 812 "inst_match.m"
                  {
#line 812 "inst_match.m"
                    check_hlds__inst_match__V_14_14 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5, ((MR_Box) (check_hlds__inst_match__Name_9)));
                  }
#line 812 "inst_match.m"
                  /* direct tailcall eliminated */
#line 812 "inst_match.m"
                  {
#line 812 "inst_match.m"
                    MR_Word check_hlds__inst_match__Expansions__tmp_copy_5 = check_hlds__inst_match__V_14_14;
#line 812 "inst_match.m"
                    MR_Word check_hlds__inst_match__Inst__tmp_copy_7 = check_hlds__inst_match__ExpandedInst_10;

#line 812 "inst_match.m"
                    check_hlds__inst_match__Inst_7 = check_hlds__inst_match__Inst__tmp_copy_7;
#line 812 "inst_match.m"
                    (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions__tmp_copy_5;
#line 812 "inst_match.m"
                  }
#line 812 "inst_match.m"
                  continue;
#line 811 "inst_match.m"
                }
#line 807 "inst_match.m"
            }
#line 807 "inst_match.m"
          else
#line 818 "inst_match.m"
            {
#line 815 "inst_match.m"
              MR_Word check_hlds__inst_match__V_11_11;
#line 815 "inst_match.m"
              MR_Word check_hlds__inst_match__V_12_12;

#line 815 "inst_match.m"
              (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__Inst_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 815 "inst_match.m"
              if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 815 "inst_match.m"
                {
#line 815 "inst_match.m"
                  check_hlds__inst_match__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 1)));
#line 815 "inst_match.m"
                  check_hlds__inst_match__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 2)));
#line 815 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_7, (MR_Integer) 3)));
#line 780 "inst_match.m"
                  {
#line 780 "inst_match.m"
                    check_hlds__inst_match__inst_is_complete_for_type_4_p_0_2(&check_hlds__inst_match__env);
                  }
#line 778 "inst_match.m"
                  if ((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded)
#line 778 "inst_match.m"
                    {
#line 788 "inst_match.m"
                      {
#line 788 "inst_match.m"
                        check_hlds__inst_match__inst_is_complete_for_type_4_p_0_10(&check_hlds__inst_match__env);
                      }
#line 788 "inst_match.m"
                      (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 778 "inst_match.m"
                    }
#line 815 "inst_match.m"
                }
#line 815 "inst_match.m"
              else
#line 819 "inst_match.m"
                {
#line 819 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = (check_hlds__inst_match__Inst_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 819 "inst_match.m"
                  (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded);
#line 819 "inst_match.m"
                }
#line 818 "inst_match.m"
            }
#line 815 "inst_match.m"
          return (check_hlds__inst_match__env).check_hlds__inst_match__inst_is_complete_for_type_4_p_0_env_0__succeeded;
#line 815 "inst_match.m"
        }
#line 815 "inst_match.m"
        break;
#line 815 "inst_match.m"
      }
#line 802 "inst_match.m"
  }
#line 802 "inst_match.m"
}

#line 797 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8(
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__closure_arg,
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_1,
#line 797 "inst_match.m"
  MR_Box check_hlds__inst_match__wrapper_arg_2)
#line 797 "inst_match.m"
{
#line 797 "inst_match.m"
  {
#line 797 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 797 "inst_match.m"
    MR_Box check_hlds__inst_match__closure = check_hlds__inst_match__closure_arg;

#line 797 "inst_match.m"
    {
#line 797 "inst_match.m"
      return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_complete_for_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__inst_match__wrapper_arg_1), ((MR_Word) check_hlds__inst_match__wrapper_arg_2));
    }
#line 797 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 797 "inst_match.m"
  }
#line 797 "inst_match.m"
}

#line 780 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1(
#line 780 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 780 "inst_match.m"
{
#line 780 "inst_match.m"
  {
#line 780 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 780 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0, 1);
#line 780 "inst_match.m"
  }
#line 780 "inst_match.m"
}

#line 780 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(
#line 780 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 780 "inst_match.m"
{
#line 780 "inst_match.m"
  {
#line 780 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 780 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_0) == 0)
#line 780 "inst_match.m"
      {
#line 780 "inst_match.m"
        {
#line 780 "inst_match.m"
          MR_Word check_hlds__inst_match__V_9_9;
#line 780 "inst_match.m"
          MR_Word check_hlds__inst_match__V_10_10;

#line 780 "inst_match.m"
          {
#line 780 "inst_match.m"
            check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &check_hlds__inst_match__V_9_9, &check_hlds__inst_match__V_10_10, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_1, check_hlds__inst_match__env_ptr);
          }
#line 780 "inst_match.m"
        }
#line 780 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 780 "inst_match.m"
      }
#line 780 "inst_match.m"
    else
#line 780 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 780 "inst_match.m"
  }
#line 780 "inst_match.m"
}

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 788 "inst_match.m"
{
#line 788 "inst_match.m"
  {
#line 788 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 788 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1, 1);
#line 788 "inst_match.m"
  }
#line 788 "inst_match.m"
}

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 792 "inst_match.m"
{
#line 792 "inst_match.m"
  {
#line 792 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    MR_builtin_longjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2, 1);
#line 792 "inst_match.m"
  }
#line 792 "inst_match.m"
}

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 792 "inst_match.m"
{
#line 792 "inst_match.m"
  {
#line 792 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15 = ((MR_Word) (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15);
#line 792 "inst_match.m"
    {
#line 792 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(check_hlds__inst_match__env_ptr);
#line 792 "inst_match.m"
      return;
    }
#line 792 "inst_match.m"
  }
#line 792 "inst_match.m"
}

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_6(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 792 "inst_match.m"
{
#line 792 "inst_match.m"
  {
#line 792 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15, (MR_Integer) 0)));
#line 792 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_15_15, (MR_Integer) 1)));
#line 796 "inst_match.m"
    {
#line 796 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = parse_tree__prog_data__equivalent_cons_ids_2_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId0_13, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11);
    }
#line 792 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 792 "inst_match.m"
      {
#line 15388 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 15390 "check_hlds.inst_match.c"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 797 "inst_match.m"
        {
#line 797 "inst_match.m"
          MR_Word base;
#line 797 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 797 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16 = base;
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_match_scalar_common_3[1]));
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_8));
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5));
#line 797 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6));
#line 797 "inst_match.m"
        }
#line 797 "inst_match.m"
        {
#line 797 "inst_match.m"
          (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = mercury__list__map_3_p_5((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_20_20, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__TypeCtorInfo_21_21, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__V_16_16, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgInsts_14, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12);
        }
#line 797 "inst_match.m"
        if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 797 "inst_match.m"
          {
#line 797 "inst_match.m"
            check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_5(check_hlds__inst_match__env_ptr);
#line 797 "inst_match.m"
            return;
          }
#line 792 "inst_match.m"
      }
#line 792 "inst_match.m"
  }
#line 792 "inst_match.m"
}

#line 792 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(
#line 792 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 792 "inst_match.m"
{
#line 792 "inst_match.m"
  {
#line 792 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_2) == 0)
#line 792 "inst_match.m"
      {
#line 792 "inst_match.m"
        {
#line 792 "inst_match.m"
          {
#line 792 "inst_match.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__conv0_V_15_15, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_7, check_hlds__inst_match__env_ptr);
          }
#line 792 "inst_match.m"
        }
#line 792 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 792 "inst_match.m"
      }
#line 792 "inst_match.m"
    else
#line 792 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 792 "inst_match.m"
  }
#line 792 "inst_match.m"
}

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 788 "inst_match.m"
{
#line 788 "inst_match.m"
  {
#line 788 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 792 "inst_match.m"
    {
#line 792 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_9(check_hlds__inst_match__env_ptr);
    }
#line 790 "inst_match.m"
    (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
#line 790 "inst_match.m"
    if ((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 790 "inst_match.m"
      {
#line 790 "inst_match.m"
        check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_3(check_hlds__inst_match__env_ptr);
#line 790 "inst_match.m"
        return;
      }
#line 788 "inst_match.m"
  }
#line 788 "inst_match.m"
}

#line 788 "inst_match.m"
static void MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(
#line 788 "inst_match.m"
  void * check_hlds__inst_match__env_ptr_arg)
#line 788 "inst_match.m"
{
#line 788 "inst_match.m"
  {
#line 788 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s * check_hlds__inst_match__env_ptr = (struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s *) check_hlds__inst_match__env_ptr_arg;

#line 788 "inst_match.m"
    if (MR_builtin_setjmp((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__commit_1) == 0)
#line 788 "inst_match.m"
      {
#line 789 "inst_match.m"
        {
#line 789 "inst_match.m"
          check_hlds__type_util__cons_id_arg_types_4_p_0((check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6, (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ConsId_11, &(check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ArgTypes_12, check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_4, check_hlds__inst_match__env_ptr);
        }
#line 788 "inst_match.m"
        (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_FALSE;
#line 788 "inst_match.m"
      }
#line 788 "inst_match.m"
    else
#line 788 "inst_match.m"
      (check_hlds__inst_match__env_ptr)->check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = MR_TRUE;
#line 788 "inst_match.m"
  }
#line 788 "inst_match.m"
}

#line 774 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__Expansions_5,
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6,
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_7,
#line 774 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_8)
#line 774 "inst_match.m"
{
#line 774 "inst_match.m"
  {
#line 774 "inst_match.m"
    struct check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0_s check_hlds__inst_match__env;

#line 774 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Expansions_5 = check_hlds__inst_match__Expansions_5;
#line 774 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__ModuleInfo_6 = check_hlds__inst_match__ModuleInfo_6;
#line 774 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__BoundInsts_7 = check_hlds__inst_match__BoundInsts_7;
#line 774 "inst_match.m"
    (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__Type_8 = check_hlds__inst_match__Type_8;
#line 780 "inst_match.m"
    {
#line 780 "inst_match.m"
      check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_2(&check_hlds__inst_match__env);
    }
#line 778 "inst_match.m"
    if ((check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded)
#line 778 "inst_match.m"
      {
#line 788 "inst_match.m"
        {
#line 788 "inst_match.m"
          check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_10(&check_hlds__inst_match__env);
        }
#line 788 "inst_match.m"
        (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded = !((check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded);
#line 778 "inst_match.m"
      }
#line 778 "inst_match.m"
    return (check_hlds__inst_match__env).check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0_env_0__succeeded;
#line 774 "inst_match.m"
  }
#line 774 "inst_match.m"
}

#line 758 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(
#line 758 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 758 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 758 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__3_3,
#line 758 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 758 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 758 "inst_match.m"
{
#line 762 "inst_match.m"
  while (MR_TRUE)
#line 762 "inst_match.m"
    {
#line 762 "inst_match.m"
      /* tailcall optimized into a loop */
#line 762 "inst_match.m"
      {
#line 762 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 762 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 762 "inst_match.m"
          {
#line 762 "inst_match.m"
            check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 762 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 762 "inst_match.m"
              {
#line 762 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 762 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 762 "inst_match.m"
              }
#line 762 "inst_match.m"
          }
#line 762 "inst_match.m"
        else
#line 764 "inst_match.m"
          {
#line 764 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 764 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 764 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeType_13;
#line 764 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_14;
#line 764 "inst_match.m"
            MR_Word check_hlds__inst_match__V_18_18;
#line 764 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_19_19;
#line 764 "inst_match.m"
            MR_Word check_hlds__inst_match__V_20_20;

#line 764 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 764 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 764 "inst_match.m"
              {
#line 764 "inst_match.m"
                check_hlds__inst_match__MaybeType_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 0)));
#line 764 "inst_match.m"
                check_hlds__inst_match__MaybeTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__3_3, (MR_Integer) 1)));
#line 765 "inst_match.m"
                check_hlds__inst_match__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "inst_match.m"
                {
#line 765 "inst_match.m"
                  check_hlds__inst_match__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 765 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 765 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__V_18_18, 1) = ((MR_Box) (check_hlds__inst_match__Uniq_1));
#line 765 "inst_match.m"
                  MR_hl_field(MR_mktag(3), check_hlds__inst_match__V_18_18, 2) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 765 "inst_match.m"
                }
#line 765 "inst_match.m"
                {
#line 765 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__V_18_18, check_hlds__inst_match__Inst_11, check_hlds__inst_match__MaybeType_13, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_19_19);
                }
#line 764 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 766 "inst_match.m"
                  {
#line 766 "inst_match.m"
                    /* direct tailcall eliminated */
#line 766 "inst_match.m"
                    {
#line 766 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Insts_12;
#line 766 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__3__tmp_copy_3 = check_hlds__inst_match__MaybeTypes_14;
#line 766 "inst_match.m"
                      MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_19_19;

#line 766 "inst_match.m"
                      check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 766 "inst_match.m"
                      check_hlds__inst_match__HeadVar__3_3 = check_hlds__inst_match__HeadVar__3__tmp_copy_3;
#line 766 "inst_match.m"
                      check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 766 "inst_match.m"
                    }
#line 766 "inst_match.m"
                    continue;
#line 766 "inst_match.m"
                  }
#line 764 "inst_match.m"
              }
#line 764 "inst_match.m"
          }
#line 762 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 762 "inst_match.m"
      }
#line 762 "inst_match.m"
      break;
#line 762 "inst_match.m"
    }
#line 758 "inst_match.m"
}

#line 745 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(
#line 745 "inst_match.m"
  MR_Word check_hlds__inst_match__Uniq_1,
#line 745 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 745 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_3,
#line 745 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_4,
#line 745 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_5)
#line 745 "inst_match.m"
{
#line 749 "inst_match.m"
  while (MR_TRUE)
#line 749 "inst_match.m"
    {
#line 749 "inst_match.m"
      /* tailcall optimized into a loop */
#line 749 "inst_match.m"
      {
#line 749 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 749 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "inst_match.m"
          {
#line 749 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_5 = check_hlds__inst_match__STATE_VARIABLE_Info_0_4;
#line 749 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 749 "inst_match.m"
          }
#line 749 "inst_match.m"
        else
#line 751 "inst_match.m"
          {
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 0)));
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_12, (MR_Integer) 1)));
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match__MaybeTypes_18;
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 751 "inst_match.m"
            MR_Integer check_hlds__inst_match__V_22_22;
#line 751 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_23_23;
#line 753 "inst_match.m"
            MR_Word check_hlds__inst_match__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 753 "inst_match.m"
            MR_Word check_hlds__inst_match__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 753 "inst_match.m"
            MR_Word check_hlds__inst_match__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 753 "inst_match.m"
            MR_Word check_hlds__inst_match__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 753 "inst_match.m"
            MR_Word check_hlds__inst_match__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 753 "inst_match.m"
            {
#line 753 "inst_match.m"
              check_hlds__inst_match__V_22_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__Args_17);
            }
#line 753 "inst_match.m"
            {
#line 753 "inst_match.m"
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_match__V_21_21, check_hlds__inst_match__MaybeType_3, check_hlds__inst_match__ConsId_16, check_hlds__inst_match__V_22_22, &check_hlds__inst_match__MaybeTypes_18);
            }
#line 755 "inst_match.m"
            {
#line 755 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__ground_matches_initial_inst_list_5_p_0(check_hlds__inst_match__Uniq_1, check_hlds__inst_match__Args_17, check_hlds__inst_match__MaybeTypes_18, check_hlds__inst_match__STATE_VARIABLE_Info_0_4, &check_hlds__inst_match__STATE_VARIABLE_Info_23_23);
            }
#line 751 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 756 "inst_match.m"
              {
#line 756 "inst_match.m"
                /* direct tailcall eliminated */
#line 756 "inst_match.m"
                {
#line 756 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__BoundInsts_13;
#line 756 "inst_match.m"
                  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__inst_match__STATE_VARIABLE_Info_23_23;

#line 756 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_0_4 = check_hlds__inst_match__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 756 "inst_match.m"
                  check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 756 "inst_match.m"
                }
#line 756 "inst_match.m"
                continue;
#line 756 "inst_match.m"
              }
#line 751 "inst_match.m"
          }
#line 749 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 749 "inst_match.m"
      }
#line 749 "inst_match.m"
      break;
#line 749 "inst_match.m"
    }
#line 745 "inst_match.m"
}

#line 613 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_5_p_0(
#line 613 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 613 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 613 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 613 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_50,
#line 613 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_51)
#line 613 "inst_match.m"
{
#line 623 "inst_match.m"
  {
#line 623 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 623 "inst_match.m"
    if ((check_hlds__inst_match__InstA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "inst_match.m"
      {
#line 646 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 645 "inst_match.m"
          {
#line 646 "inst_match.m"
            *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 646 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 645 "inst_match.m"
          }
#line 645 "inst_match.m"
      }
#line 623 "inst_match.m"
    else
#line 623 "inst_match.m"
      if ((check_hlds__inst_match__InstA_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 737 "inst_match.m"
        {
#line 737 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 737 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 737 "inst_match.m"
        }
#line 623 "inst_match.m"
      else
#line 623 "inst_match.m"
        if (((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 2))))
#line 623 "inst_match.m"
          {
#line 623 "inst_match.m"
            MR_Word check_hlds__inst_match__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));
#line 623 "inst_match.m"
            MR_Word check_hlds__inst_match__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstA_6, (MR_Integer) 0)));

#line 623 "inst_match.m"
            if ((check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "inst_match.m"
              {
#line 630 "inst_match.m"
                *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 630 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 630 "inst_match.m"
              }
#line 623 "inst_match.m"
            else
#line 623 "inst_match.m"
              if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 623 "inst_match.m"
                {
#line 623 "inst_match.m"
                  MR_Word check_hlds__inst_match__UniqB_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 623 "inst_match.m"
                  MR_Word check_hlds__inst_match__HOInstInfoB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 623 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 623 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_130_130 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 625 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 625 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 625 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_129_129 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);

#line 625 "inst_match.m"
                  check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_91_91 == (MR_Integer) 1);
#line 623 "inst_match.m"
                  if (check_hlds__inst_match__succeeded)
#line 623 "inst_match.m"
                    {
#line 626 "inst_match.m"
                      {
#line 626 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_130_130, check_hlds__inst_match__V_233_233, check_hlds__inst_match__UniqB_12);
                      }
#line 623 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 627 "inst_match.m"
                        {
#line 627 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_232_232, check_hlds__inst_match__HOInstInfoB_13, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                        }
#line 623 "inst_match.m"
                    }
#line 623 "inst_match.m"
                }
#line 623 "inst_match.m"
              else
#line 623 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 639 "inst_match.m"
                  {
#line 639 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 639 "inst_match.m"
                    MR_Word check_hlds__inst_match__NextInstA_98;
#line 641 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 641 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 641 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_143_143 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 641 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_144_144 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 641 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 641 "inst_match.m"
                    {
#line 641 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_87_87, check_hlds__inst_match__V_233_233, check_hlds__inst_match__V_232_232, &check_hlds__inst_match__NextInstA_98);
                    }
#line 639 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 643 "inst_match.m"
                      {
#line 643 "inst_match.m"
                        return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__NextInstA_98, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                      }
#line 639 "inst_match.m"
                  }
#line 623 "inst_match.m"
                else
#line 623 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 633 "inst_match.m"
                    {
#line 633 "inst_match.m"
                      MR_Word check_hlds__inst_match__NextInstA_18;
#line 633 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 635 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 635 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 635 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_138_138 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 635 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 635 "inst_match.m"
                      {
#line 635 "inst_match.m"
                        check_hlds__inst_match__succeeded = check_hlds__inst_match__maybe_any_to_bound_5_p_0(check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_89_89, check_hlds__inst_match__V_233_233, check_hlds__inst_match__V_232_232, &check_hlds__inst_match__NextInstA_18);
                      }
#line 633 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 637 "inst_match.m"
                        {
#line 637 "inst_match.m"
                          return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__NextInstA_18, check_hlds__inst_match__InstB_7, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                        }
#line 633 "inst_match.m"
                    }
#line 623 "inst_match.m"
                  else
#line 623 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 623 "inst_match.m"
          }
#line 623 "inst_match.m"
        else
#line 623 "inst_match.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 623 "inst_match.m"
            {
#line 623 "inst_match.m"
              MR_Word check_hlds__inst_match__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 623 "inst_match.m"
              MR_Word check_hlds__inst_match__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 623 "inst_match.m"
              if ((check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "inst_match.m"
                {
#line 728 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 728 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 728 "inst_match.m"
                }
#line 623 "inst_match.m"
              else
#line 623 "inst_match.m"
                if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 725 "inst_match.m"
                  {
#line 725 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 725 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 726 "inst_match.m"
                    check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_55_55 == (MR_Integer) 0);
#line 725 "inst_match.m"
                    if (check_hlds__inst_match__succeeded)
#line 725 "inst_match.m"
                      {
#line 726 "inst_match.m"
                        check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 725 "inst_match.m"
                          {
#line 726 "inst_match.m"
                            *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 726 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 725 "inst_match.m"
                          }
#line 725 "inst_match.m"
                      }
#line 725 "inst_match.m"
                  }
#line 623 "inst_match.m"
                else
#line 623 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 731 "inst_match.m"
                    {
#line 731 "inst_match.m"
                      MR_Word check_hlds__inst_match__TypeCtorInfo_227_227;
#line 731 "inst_match.m"
                      MR_Word check_hlds__inst_match__TypeInfo_228_228;
#line 731 "inst_match.m"
                      MR_Word check_hlds__inst_match__ArgsB_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 731 "inst_match.m"
                      MR_Word check_hlds__inst_match__MaybeTypes_49;
#line 731 "inst_match.m"
                      MR_Integer check_hlds__inst_match__V_52_52;
#line 731 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_53_53;
#line 731 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));

#line 732 "inst_match.m"
                      {
#line 732 "inst_match.m"
                        check_hlds__inst_match__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__inst_match__V_231_231, check_hlds__inst_match__V_229_229);
                      }
#line 731 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 731 "inst_match.m"
                        {
#line 16117 "check_hlds.inst_match.c"
                          check_hlds__inst_match__TypeCtorInfo_227_227 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 733 "inst_match.m"
                          {
#line 733 "inst_match.m"
                            check_hlds__inst_match__V_52_52 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_227_227, check_hlds__inst_match__V_230_230);
                          }
#line 733 "inst_match.m"
                          check_hlds__inst_match__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 16126 "check_hlds.inst_match.c"
                          check_hlds__inst_match__TypeInfo_228_228 = (MR_Word) &check_hlds__inst_match_scalar_common_1[1];
#line 733 "inst_match.m"
                          {
#line 733 "inst_match.m"
                            mercury__list__duplicate_3_p_0(check_hlds__inst_match__TypeInfo_228_228, check_hlds__inst_match__V_52_52, ((MR_Box) (check_hlds__inst_match__V_53_53)), &check_hlds__inst_match__MaybeTypes_49);
                          }
#line 735 "inst_match.m"
                          {
#line 735 "inst_match.m"
                            return check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__V_230_230, check_hlds__inst_match__ArgsB_48, check_hlds__inst_match__MaybeTypes_49, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                          }
#line 731 "inst_match.m"
                        }
#line 731 "inst_match.m"
                    }
#line 623 "inst_match.m"
                  else
#line 623 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 623 "inst_match.m"
            }
#line 623 "inst_match.m"
          else
#line 623 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 623 "inst_match.m"
              {
#line 623 "inst_match.m"
                MR_Word check_hlds__inst_match__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 3)));
#line 623 "inst_match.m"
                MR_Word check_hlds__inst_match__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 623 "inst_match.m"
                MR_Word check_hlds__inst_match__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 623 "inst_match.m"
                if ((check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 654 "inst_match.m"
                  {
#line 654 "inst_match.m"
                    *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 654 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 654 "inst_match.m"
                  }
#line 623 "inst_match.m"
                else
#line 623 "inst_match.m"
                  if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 648 "inst_match.m"
                    {
#line 648 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 648 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_84_84;
#line 648 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_85_85;
#line 648 "inst_match.m"
                      MR_Word check_hlds__inst_match__UniqB_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 648 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_151_151;
#line 650 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_146_146;
#line 650 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_147_147;
#line 650 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_148_148;
#line 650 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_149_149;
#line 650 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_150_150;
#line 651 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_152_152;
#line 651 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_153_153;
#line 651 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_154_154;
#line 651 "inst_match.m"
                      MR_Word check_hlds__inst_match__V_155_155;

#line 649 "inst_match.m"
                      check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "inst_match.m"
                      if (check_hlds__inst_match__succeeded)
#line 648 "inst_match.m"
                        {
#line 650 "inst_match.m"
                          check_hlds__inst_match__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 650 "inst_match.m"
                          check_hlds__inst_match__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 650 "inst_match.m"
                          check_hlds__inst_match__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 650 "inst_match.m"
                          check_hlds__inst_match__V_149_149 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 650 "inst_match.m"
                          check_hlds__inst_match__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 650 "inst_match.m"
                          check_hlds__inst_match__V_150_150 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 650 "inst_match.m"
                          {
#line 650 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_84_84, check_hlds__inst_match__V_236_236, check_hlds__inst_match__UniqB_100);
                          }
#line 648 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 648 "inst_match.m"
                            {
#line 651 "inst_match.m"
                              check_hlds__inst_match__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 651 "inst_match.m"
                              check_hlds__inst_match__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 651 "inst_match.m"
                              check_hlds__inst_match__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 651 "inst_match.m"
                              check_hlds__inst_match__V_154_154 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 651 "inst_match.m"
                              check_hlds__inst_match__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 651 "inst_match.m"
                              check_hlds__inst_match__V_155_155 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 651 "inst_match.m"
                              {
#line 651 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(check_hlds__inst_match__V_85_85, check_hlds__inst_match__V_234_234, check_hlds__inst_match__UniqB_100, check_hlds__inst_match__V_151_151);
                              }
#line 648 "inst_match.m"
                              if (check_hlds__inst_match__succeeded)
#line 648 "inst_match.m"
                                {
#line 651 "inst_match.m"
                                  *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 651 "inst_match.m"
                                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 648 "inst_match.m"
                                }
#line 648 "inst_match.m"
                            }
#line 648 "inst_match.m"
                        }
#line 648 "inst_match.m"
                    }
#line 623 "inst_match.m"
                  else
#line 623 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 623 "inst_match.m"
                      {
#line 623 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 682 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_241_241 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 682 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_242_242 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 682 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_243_243 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 682 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 682 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));

#line 623 "inst_match.m"
                        if ((check_hlds__inst_match__V_236_236 == (MR_Integer) 2))
#line 686 "inst_match.m"
                          {
#line 686 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_72_72;
#line 691 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_201_201;
#line 691 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_202_202;
#line 691 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_203_203;
#line 691 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_204_204;
#line 691 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_205_205;

#line 689 "inst_match.m"
                            {
#line 689 "inst_match.m"
                              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_235_235, check_hlds__inst_match__V_234_234, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__V_246_246);
                            }
#line 686 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 686 "inst_match.m"
                              {
#line 691 "inst_match.m"
                                check_hlds__inst_match__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 691 "inst_match.m"
                                check_hlds__inst_match__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 691 "inst_match.m"
                                check_hlds__inst_match__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 691 "inst_match.m"
                                check_hlds__inst_match__V_203_203 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 691 "inst_match.m"
                                check_hlds__inst_match__V_204_204 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 691 "inst_match.m"
                                check_hlds__inst_match__V_205_205 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 691 "inst_match.m"
                                {
#line 691 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__V_234_234, check_hlds__inst_match__V_72_72);
                                }
#line 686 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 686 "inst_match.m"
                                  {
#line 691 "inst_match.m"
                                    *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 691 "inst_match.m"
                                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 686 "inst_match.m"
                                  }
#line 686 "inst_match.m"
                              }
#line 686 "inst_match.m"
                          }
#line 623 "inst_match.m"
                        else
#line 623 "inst_match.m"
                          if ((check_hlds__inst_match__V_236_236 == (MR_Integer) 1))
#line 679 "inst_match.m"
                            {
#line 679 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_75_75;
#line 684 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_191_191;
#line 684 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_192_192;
#line 684 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_193_193;
#line 684 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_194_194;
#line 684 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_195_195;

#line 682 "inst_match.m"
                              {
#line 682 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_235_235, check_hlds__inst_match__V_234_234, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__V_246_246);
                              }
#line 679 "inst_match.m"
                              if (check_hlds__inst_match__succeeded)
#line 679 "inst_match.m"
                                {
#line 684 "inst_match.m"
                                  check_hlds__inst_match__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 684 "inst_match.m"
                                  check_hlds__inst_match__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 684 "inst_match.m"
                                  check_hlds__inst_match__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 684 "inst_match.m"
                                  check_hlds__inst_match__V_193_193 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 684 "inst_match.m"
                                  check_hlds__inst_match__V_194_194 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 684 "inst_match.m"
                                  check_hlds__inst_match__V_195_195 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 684 "inst_match.m"
                                  {
#line 684 "inst_match.m"
                                    check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_unique_2_p_0(check_hlds__inst_match__V_234_234, check_hlds__inst_match__V_75_75);
                                  }
#line 679 "inst_match.m"
                                  if (check_hlds__inst_match__succeeded)
#line 679 "inst_match.m"
                                    {
#line 684 "inst_match.m"
                                      *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 684 "inst_match.m"
                                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 679 "inst_match.m"
                                    }
#line 679 "inst_match.m"
                                }
#line 679 "inst_match.m"
                            }
#line 623 "inst_match.m"
                          else
#line 623 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 623 "inst_match.m"
                      }
#line 623 "inst_match.m"
                    else
#line 623 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 657 "inst_match.m"
                        {
#line 657 "inst_match.m"
                          MR_Word check_hlds__inst_match__BoundInstsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 657 "inst_match.m"
                          MR_Word check_hlds__inst_match__UniqB_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 658 "inst_match.m"
                          MR_Word check_hlds__inst_match___InstResultsB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));

#line 660 "inst_match.m"
                          {
#line 660 "inst_match.m"
                            check_hlds__inst_match__succeeded = check_hlds__inst_match__same_addr_insts_2_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_7);
                          }
#line 660 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 661 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_235_235 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 664 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 661 "inst_match.m"
                            {
#line 661 "inst_match.m"
                              *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 661 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_TRUE;
#line 661 "inst_match.m"
                            }
#line 664 "inst_match.m"
                          else
#line 666 "inst_match.m"
                            {
#line 666 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 665 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 665 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 665 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 665 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_164_164 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 665 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_165_165 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 665 "inst_match.m"
                              {
#line 665 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_81_81, check_hlds__inst_match__V_236_236, check_hlds__inst_match__UniqB_102);
                              }
#line 666 "inst_match.m"
                              if (check_hlds__inst_match__succeeded)
#line 667 "inst_match.m"
                                {
#line 667 "inst_match.m"
                                  return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_matches_initial_mt_5_p_0(check_hlds__inst_match__V_234_234, check_hlds__inst_match__BoundInstsB_29, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                                }
#line 666 "inst_match.m"
                            }
#line 657 "inst_match.m"
                        }
#line 623 "inst_match.m"
                      else
#line 623 "inst_match.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 671 "inst_match.m"
                          {
#line 671 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 671 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_77_77;
#line 671 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_78_78;
#line 671 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_79_79;
#line 671 "inst_match.m"
                            MR_Word check_hlds__inst_match__UniqB_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 671 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_176_176;
#line 673 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_166_166;
#line 673 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_167_167;
#line 673 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_168_168;
#line 673 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_169_169;
#line 673 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_170_170;
#line 674 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_171_171;
#line 674 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_172_172;
#line 674 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_173_173;
#line 674 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_174_174;
#line 674 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_175_175;
#line 676 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_177_177;
#line 676 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_178_178;
#line 676 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_179_179;
#line 676 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_180_180;

#line 672 "inst_match.m"
                            check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 671 "inst_match.m"
                              {
#line 673 "inst_match.m"
                                check_hlds__inst_match__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 673 "inst_match.m"
                                check_hlds__inst_match__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 673 "inst_match.m"
                                check_hlds__inst_match__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 673 "inst_match.m"
                                check_hlds__inst_match__V_169_169 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 673 "inst_match.m"
                                check_hlds__inst_match__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 673 "inst_match.m"
                                check_hlds__inst_match__V_170_170 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 673 "inst_match.m"
                                {
#line 673 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_77_77, check_hlds__inst_match__V_236_236, check_hlds__inst_match__UniqB_105);
                                }
#line 671 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 671 "inst_match.m"
                                  {
#line 674 "inst_match.m"
                                    check_hlds__inst_match__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 674 "inst_match.m"
                                    check_hlds__inst_match__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 674 "inst_match.m"
                                    check_hlds__inst_match__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 674 "inst_match.m"
                                    check_hlds__inst_match__V_173_173 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 674 "inst_match.m"
                                    check_hlds__inst_match__V_174_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 674 "inst_match.m"
                                    check_hlds__inst_match__V_175_175 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 674 "inst_match.m"
                                    {
#line 674 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_results_bound_inst_list_is_ground_mt_4_p_0(check_hlds__inst_match__V_235_235, check_hlds__inst_match__V_234_234, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__V_78_78);
                                    }
#line 671 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 671 "inst_match.m"
                                      {
#line 676 "inst_match.m"
                                        check_hlds__inst_match__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 676 "inst_match.m"
                                        check_hlds__inst_match__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 676 "inst_match.m"
                                        check_hlds__inst_match__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 676 "inst_match.m"
                                        check_hlds__inst_match__V_179_179 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 676 "inst_match.m"
                                        check_hlds__inst_match__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 676 "inst_match.m"
                                        check_hlds__inst_match__V_180_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 676 "inst_match.m"
                                        {
#line 676 "inst_match.m"
                                          check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_bound_inst_list_uniq_4_p_0(check_hlds__inst_match__V_79_79, check_hlds__inst_match__V_234_234, check_hlds__inst_match__UniqB_105, check_hlds__inst_match__V_176_176);
                                        }
#line 671 "inst_match.m"
                                        if (check_hlds__inst_match__succeeded)
#line 671 "inst_match.m"
                                          {
#line 676 "inst_match.m"
                                            *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 676 "inst_match.m"
                                            check_hlds__inst_match__succeeded = MR_TRUE;
#line 671 "inst_match.m"
                                          }
#line 671 "inst_match.m"
                                      }
#line 671 "inst_match.m"
                                  }
#line 671 "inst_match.m"
                              }
#line 671 "inst_match.m"
                          }
#line 623 "inst_match.m"
                        else
#line 623 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_FALSE;
#line 623 "inst_match.m"
              }
#line 623 "inst_match.m"
            else
#line 623 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__InstA_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 623 "inst_match.m"
                {
#line 623 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 2)));
#line 623 "inst_match.m"
                  MR_Word check_hlds__inst_match__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstA_6, (MR_Integer) 1)));

#line 623 "inst_match.m"
                  if ((check_hlds__inst_match__InstB_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "inst_match.m"
                    {
#line 699 "inst_match.m"
                      *check_hlds__inst_match__STATE_VARIABLE_Info_51 = check_hlds__inst_match__STATE_VARIABLE_Info_0_50;
#line 699 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 699 "inst_match.m"
                    }
#line 623 "inst_match.m"
                  else
#line 623 "inst_match.m"
                    if (((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 2))))
#line 693 "inst_match.m"
                      {
#line 693 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 693 "inst_match.m"
                        MR_Word check_hlds__inst_match__UniqB_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 0)));
#line 693 "inst_match.m"
                        MR_Word check_hlds__inst_match__HOInstInfoB_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 695 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 695 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 695 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 695 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_209_209 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 695 "inst_match.m"
                        MR_Word check_hlds__inst_match__V_210_210 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 695 "inst_match.m"
                        {
#line 695 "inst_match.m"
                          check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_68_68, check_hlds__inst_match__V_238_238, check_hlds__inst_match__UniqB_115);
                        }
#line 693 "inst_match.m"
                        if (check_hlds__inst_match__succeeded)
#line 696 "inst_match.m"
                          {
#line 696 "inst_match.m"
                            return check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_237_237, check_hlds__inst_match__HOInstInfoB_116, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                          }
#line 693 "inst_match.m"
                      }
#line 623 "inst_match.m"
                    else
#line 623 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 718 "inst_match.m"
                        {
#line 718 "inst_match.m"
                          MR_String check_hlds__inst_match__V_58_58;
#line 718 "inst_match.m"
                          MR_String check_hlds__inst_match__V_59_59;
#line 718 "inst_match.m"
                          MR_String check_hlds__inst_match__V_60_60;

#line 718 "inst_match.m"
                          check_hlds__inst_match__succeeded = (check_hlds__inst_match__V_237_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "inst_match.m"
                          if (check_hlds__inst_match__succeeded)
#line 718 "inst_match.m"
                            {
#line 722 "inst_match.m"
                              check_hlds__inst_match__V_58_58 = (MR_String) "check_hlds.inst_match";
#line 722 "inst_match.m"
                              check_hlds__inst_match__V_59_59 = (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_4\'/5";
#line 722 "inst_match.m"
                              check_hlds__inst_match__V_60_60 = (MR_String) "inst_matches_initial(ground, abstract_inst) == \?\?";
#line 722 "inst_match.m"
                              {
#line 722 "inst_match.m"
                                mercury__require__unexpected_3_p_0(check_hlds__inst_match__V_58_58, check_hlds__inst_match__V_59_59, check_hlds__inst_match__V_60_60);
                              }
#line 722 "inst_match.m"
                              check_hlds__inst_match__succeeded = MR_TRUE;
#line 718 "inst_match.m"
                            }
#line 718 "inst_match.m"
                        }
#line 623 "inst_match.m"
                      else
#line 623 "inst_match.m"
                        if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 702 "inst_match.m"
                          {
#line 702 "inst_match.m"
                            MR_Word check_hlds__inst_match__TypeCtorInfo_226_226;
#line 702 "inst_match.m"
                            MR_Word check_hlds__inst_match__Type_38;
#line 702 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_63_63;
#line 702 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_64_64;
#line 702 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_65_65;
#line 702 "inst_match.m"
                            MR_Word check_hlds__inst_match__UniqB_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 702 "inst_match.m"
                            MR_Word check_hlds__inst_match__BoundInstsB_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 3)));
#line 703 "inst_match.m"
                            MR_Word check_hlds__inst_match___InstResultsB_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 706 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_211_211;
#line 706 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_212_212;
#line 706 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_213_213;
#line 706 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_214_214;
#line 706 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_215_215;
#line 707 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_216_216;
#line 707 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_217_217;
#line 707 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_218_218;
#line 707 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_219_219;
#line 707 "inst_match.m"
                            MR_Word check_hlds__inst_match__V_220_220;

#line 704 "inst_match.m"
                            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__MaybeType_8)) == (MR_mktag((MR_Integer) 1)));
#line 704 "inst_match.m"
                            if (check_hlds__inst_match__succeeded)
#line 704 "inst_match.m"
                              {
#line 704 "inst_match.m"
                                check_hlds__inst_match__Type_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeType_8, (MR_Integer) 0)));
#line 706 "inst_match.m"
                                check_hlds__inst_match__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 706 "inst_match.m"
                                check_hlds__inst_match__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 706 "inst_match.m"
                                check_hlds__inst_match__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 706 "inst_match.m"
                                check_hlds__inst_match__V_214_214 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 706 "inst_match.m"
                                check_hlds__inst_match__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 706 "inst_match.m"
                                check_hlds__inst_match__V_215_215 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 706 "inst_match.m"
                                {
#line 706 "inst_match.m"
                                  check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_63_63, check_hlds__inst_match__V_238_238, check_hlds__inst_match__UniqB_119);
                                }
#line 702 "inst_match.m"
                                if (check_hlds__inst_match__succeeded)
#line 702 "inst_match.m"
                                  {
#line 16774 "check_hlds.inst_match.c"
                                    check_hlds__inst_match__TypeCtorInfo_226_226 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0;
#line 707 "inst_match.m"
                                    {
#line 707 "inst_match.m"
                                      check_hlds__inst_match__V_64_64 = mercury__set__init_0_f_0(check_hlds__inst_match__TypeCtorInfo_226_226);
                                    }
#line 707 "inst_match.m"
                                    check_hlds__inst_match__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 707 "inst_match.m"
                                    check_hlds__inst_match__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 707 "inst_match.m"
                                    check_hlds__inst_match__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 707 "inst_match.m"
                                    check_hlds__inst_match__V_218_218 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 707 "inst_match.m"
                                    check_hlds__inst_match__V_219_219 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "inst_match.m"
                                    check_hlds__inst_match__V_220_220 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 707 "inst_match.m"
                                    {
#line 707 "inst_match.m"
                                      check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_complete_for_type_4_p_0(check_hlds__inst_match__V_64_64, check_hlds__inst_match__V_65_65, check_hlds__inst_match__BoundInstsB_121, check_hlds__inst_match__Type_38);
                                    }
#line 702 "inst_match.m"
                                    if (check_hlds__inst_match__succeeded)
#line 709 "inst_match.m"
                                      {
#line 709 "inst_match.m"
                                        return check_hlds__inst_match__succeeded = check_hlds__inst_match__ground_matches_initial_bound_inst_list_5_p_0(check_hlds__inst_match__V_238_238, check_hlds__inst_match__BoundInstsB_121, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                                      }
#line 702 "inst_match.m"
                                  }
#line 704 "inst_match.m"
                              }
#line 702 "inst_match.m"
                          }
#line 623 "inst_match.m"
                        else
#line 623 "inst_match.m"
                          if (((((MR_tag((MR_Word) check_hlds__inst_match__InstB_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 712 "inst_match.m"
                            {
#line 712 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 712 "inst_match.m"
                              MR_Word check_hlds__inst_match__UniqB_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 1)));
#line 712 "inst_match.m"
                              MR_Word check_hlds__inst_match__HOInstInfoB_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__InstB_7, (MR_Integer) 2)));
#line 714 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 0)));
#line 714 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 1)));
#line 714 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 2)));
#line 714 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_224_224 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 714 "inst_match.m"
                              MR_Word check_hlds__inst_match__V_225_225 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_50, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 714 "inst_match.m"
                              {
#line 714 "inst_match.m"
                                check_hlds__inst_match__succeeded = check_hlds__inst_match__compare_uniqueness_3_p_0(check_hlds__inst_match__V_61_61, check_hlds__inst_match__V_238_238, check_hlds__inst_match__UniqB_124);
                              }
#line 712 "inst_match.m"
                              if (check_hlds__inst_match__succeeded)
#line 715 "inst_match.m"
                                {
#line 715 "inst_match.m"
                                  return check_hlds__inst_match__succeeded = check_hlds__inst_match__ho_inst_info_matches_initial_5_p_0(check_hlds__inst_match__V_237_237, check_hlds__inst_match__HOInstInfoB_125, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_0_50, check_hlds__inst_match__STATE_VARIABLE_Info_51);
                                }
#line 712 "inst_match.m"
                            }
#line 623 "inst_match.m"
                          else
#line 623 "inst_match.m"
                            check_hlds__inst_match__succeeded = MR_FALSE;
#line 623 "inst_match.m"
                }
#line 623 "inst_match.m"
              else
#line 623 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 623 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 623 "inst_match.m"
  }
#line 613 "inst_match.m"
}

#line 597 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_mt_5_p_0(
#line 597 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 597 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_7,
#line 597 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_8,
#line 597 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_15,
#line 597 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_16)
#line 597 "inst_match.m"
{
#line 600 "inst_match.m"
  {
#line 600 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 600 "inst_match.m"
    MR_Word check_hlds__inst_match__ThisExpansion_10;
#line 600 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 602 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 602 "inst_match.m"
    MR_Word check_hlds__inst_match__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 602 "inst_match.m"
    MR_Word check_hlds__inst_match__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 602 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 602 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 609 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions_12;

#line 601 "inst_match.m"
    {
#line 601 "inst_match.m"
      check_hlds__inst_match__ThisExpansion_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 601 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 0) = ((MR_Box) (check_hlds__inst_match__InstA_6));
#line 601 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 1) = ((MR_Box) (check_hlds__inst_match__InstB_7));
#line 601 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__ThisExpansion_10, 2) = ((MR_Box) (check_hlds__inst_match__MaybeType_8));
#line 601 "inst_match.m"
    }
#line 367 "inst_match.m"
    {
#line 367 "inst_match.m"
      check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0, ((MR_Box) (check_hlds__inst_match__ThisExpansion_10)), check_hlds__inst_match__Expansions0_11, &check_hlds__inst_match__Expansions_12);
    }
#line 609 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 604 "inst_match.m"
      {
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstA_13;
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__ExpandedInstB_14;
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_17_17;
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__V_19_19;
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 604 "inst_match.m"
        MR_Word check_hlds__inst_match__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 606 "inst_match.m"
        MR_Word check_hlds__inst_match__V_39_39;
#line 606 "inst_match.m"
        MR_Word check_hlds__inst_match__V_40_40;
#line 606 "inst_match.m"
        MR_Word check_hlds__inst_match__V_41_41;
#line 606 "inst_match.m"
        MR_Word check_hlds__inst_match__V_42_42;
#line 606 "inst_match.m"
        MR_Word check_hlds__inst_match__V_43_43;

#line 604 "inst_match.m"
        {
#line 604 "inst_match.m"
          check_hlds__inst_match__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 604 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (check_hlds__inst_match__V_28_28));
#line 604 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (check_hlds__inst_match__Expansions_12));
#line 604 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 2) = ((MR_Box) (check_hlds__inst_match__V_30_30));
#line 604 "inst_match.m"
          MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, 3) = ((MR_Box) ((check_hlds__inst_match__V_31_31 | ((((check_hlds__inst_match__V_32_32 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_33_33 << (MR_Integer) 3)))))));
#line 604 "inst_match.m"
        }
#line 605 "inst_match.m"
        {
#line 605 "inst_match.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_match__V_28_28, check_hlds__inst_match__InstA_6, &check_hlds__inst_match__ExpandedInstA_13);
        }
#line 606 "inst_match.m"
        check_hlds__inst_match__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 0)));
#line 606 "inst_match.m"
        check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 1)));
#line 606 "inst_match.m"
        check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 2)));
#line 606 "inst_match.m"
        check_hlds__inst_match__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 606 "inst_match.m"
        check_hlds__inst_match__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 606 "inst_match.m"
        check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_17_17, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 606 "inst_match.m"
        {
#line 606 "inst_match.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_match__V_19_19, check_hlds__inst_match__InstB_7, &check_hlds__inst_match__ExpandedInstB_14);
        }
#line 607 "inst_match.m"
        {
#line 607 "inst_match.m"
          return check_hlds__inst_match__succeeded = check_hlds__inst_match__handle_inst_var_subs__ho3_7_p_0(check_hlds__inst_match__ExpandedInstA_13, check_hlds__inst_match__ExpandedInstB_14, check_hlds__inst_match__MaybeType_8, check_hlds__inst_match__STATE_VARIABLE_Info_17_17, check_hlds__inst_match__STATE_VARIABLE_Info_16);
        }
#line 604 "inst_match.m"
      }
#line 609 "inst_match.m"
    else
#line 607 "inst_match.m"
      {
#line 607 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_Info_16 = check_hlds__inst_match__STATE_VARIABLE_Info_0_15;
#line 607 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 607 "inst_match.m"
      }
#line 600 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 600 "inst_match.m"
  }
#line 597 "inst_match.m"
}

#line 533 "inst_match.m"
static MR_bool MR_CALL 
check_hlds__inst_match__update_inst_var_sub_2_5_p_0(
#line 533 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_6,
#line 533 "inst_match.m"
  MR_Word check_hlds__inst_match__MaybeType_7,
#line 533 "inst_match.m"
  MR_Word check_hlds__inst_match__InstVar_8,
#line 533 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_0_16,
#line 533 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Info_17)
#line 533 "inst_match.m"
{
#line 538 "inst_match.m"
  {
#line 538 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 538 "inst_match.m"
    MR_Word check_hlds__inst_match__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 538 "inst_match.m"
    MR_Word check_hlds__inst_match__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 538 "inst_match.m"
    MR_Word check_hlds__inst_match__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 538 "inst_match.m"
    MR_Word check_hlds__inst_match__V_78_78 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 538 "inst_match.m"
    MR_Word check_hlds__inst_match__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 538 "inst_match.m"
    MR_Word check_hlds__inst_match__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));

#line 538 "inst_match.m"
    if ((check_hlds__inst_match__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "inst_match.m"
      {
#line 554 "inst_match.m"
        MR_Word check_hlds__inst_match__V_20_20;
#line 554 "inst_match.m"
        MR_Word check_hlds__inst_match__InstVarSub_28;
#line 556 "inst_match.m"
        MR_Word check_hlds__inst_match__V_62_62;
#line 556 "inst_match.m"
        MR_Word check_hlds__inst_match__V_63_63;
#line 556 "inst_match.m"
        MR_Word check_hlds__inst_match__V_65_65;
#line 556 "inst_match.m"
        MR_Word check_hlds__inst_match__V_66_66;
#line 556 "inst_match.m"
        MR_Word check_hlds__inst_match__V_67_67;
#line 556 "inst_match.m"
        MR_Word check_hlds__inst_match__V_64_64;

#line 555 "inst_match.m"
        {
#line 555 "inst_match.m"
          check_hlds__inst_match__InstVarSub_28 = mercury__map__singleton_2_f_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__InstA_6)));
        }
#line 556 "inst_match.m"
        {
#line 556 "inst_match.m"
          check_hlds__inst_match__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "inst_match.m"
          MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_20_20, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_28));
#line 556 "inst_match.m"
        }
#line 556 "inst_match.m"
        check_hlds__inst_match__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 556 "inst_match.m"
        check_hlds__inst_match__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 556 "inst_match.m"
        check_hlds__inst_match__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 556 "inst_match.m"
        check_hlds__inst_match__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 556 "inst_match.m"
        check_hlds__inst_match__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 556 "inst_match.m"
        check_hlds__inst_match__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 556 "inst_match.m"
        {
#line 556 "inst_match.m"
          MR_Word base;
#line 556 "inst_match.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 556 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 556 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_62_62));
#line 556 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_63_63));
#line 556 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_20_20));
#line 556 "inst_match.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_65_65 | ((((check_hlds__inst_match__V_66_66 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_67_67 << (MR_Integer) 3)))))));
#line 556 "inst_match.m"
        }
#line 554 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 554 "inst_match.m"
      }
#line 538 "inst_match.m"
    else
#line 538 "inst_match.m"
      {
#line 538 "inst_match.m"
        MR_Word check_hlds__inst_match__InstVarSub0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_79_79, (MR_Integer) 0)));
#line 549 "inst_match.m"
        MR_Word check_hlds__inst_match__InstB_11;
#line 539 "inst_match.m"
        MR_Box check_hlds__inst_match__conv0_InstB_11;

#line 539 "inst_match.m"
        {
#line 539 "inst_match.m"
          check_hlds__inst_match__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__InstVarSub0_10, ((MR_Box) (check_hlds__inst_match__InstVar_8)), &check_hlds__inst_match__conv0_InstB_11);
        }
#line 539 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 539 "inst_match.m"
          {
#line 539 "inst_match.m"
            check_hlds__inst_match__InstB_11 = ((MR_Word) check_hlds__inst_match__conv0_InstB_11);
#line 539 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 539 "inst_match.m"
          }
#line 549 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 543 "inst_match.m"
          {
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeInfo_70_70;
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__TypeCtorInfo_71_71;
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_13;
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__ModuleInfo_14;
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__InstVarSub_15;
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Info_22_22;
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__V_24_24;
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 543 "inst_match.m"
            MR_Word check_hlds__inst_match__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 546 "inst_match.m"
            MR_Word check_hlds__inst_match__V_40_40;
#line 546 "inst_match.m"
            MR_Word check_hlds__inst_match__V_41_41;
#line 546 "inst_match.m"
            MR_Word check_hlds__inst_match__V_42_42;
#line 546 "inst_match.m"
            MR_Word check_hlds__inst_match__V_43_43;
#line 546 "inst_match.m"
            MR_Word check_hlds__inst_match__V_44_44;
#line 546 "inst_match.m"
            MR_Word check_hlds__inst_match__V_39_39;
#line 548 "inst_match.m"
            MR_Word check_hlds__inst_match__V_45_45;
#line 548 "inst_match.m"
            MR_Word check_hlds__inst_match__V_46_46;
#line 548 "inst_match.m"
            MR_Word check_hlds__inst_match__V_48_48;
#line 548 "inst_match.m"
            MR_Word check_hlds__inst_match__V_49_49;
#line 548 "inst_match.m"
            MR_Word check_hlds__inst_match__V_50_50;
#line 548 "inst_match.m"
            MR_Word check_hlds__inst_match__V_47_47;

#line 544 "inst_match.m"
            {
#line 544 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_util__inst_merge_6_p_0(check_hlds__inst_match__InstA_6, check_hlds__inst_match__InstB_11, check_hlds__inst_match__MaybeType_7, &check_hlds__inst_match__Inst_13, check_hlds__inst_match__ModuleInfo0_12, &check_hlds__inst_match__ModuleInfo_14);
            }
#line 543 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 543 "inst_match.m"
              {
#line 546 "inst_match.m"
                check_hlds__inst_match__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 546 "inst_match.m"
                check_hlds__inst_match__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 546 "inst_match.m"
                check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 546 "inst_match.m"
                check_hlds__inst_match__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 546 "inst_match.m"
                check_hlds__inst_match__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 546 "inst_match.m"
                check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 546 "inst_match.m"
                {
#line 546 "inst_match.m"
                  check_hlds__inst_match__STATE_VARIABLE_Info_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 546 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_14));
#line 546 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 1) = ((MR_Box) (check_hlds__inst_match__V_40_40));
#line 546 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 2) = ((MR_Box) (check_hlds__inst_match__V_41_41));
#line 546 "inst_match.m"
                  MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, 3) = ((MR_Box) ((check_hlds__inst_match__V_42_42 | ((((check_hlds__inst_match__V_43_43 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_44_44 << (MR_Integer) 3)))))));
#line 546 "inst_match.m"
                }
#line 17229 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeInfo_70_70 = (MR_Word) &check_hlds__inst_match_scalar_common_1[0];
#line 17231 "check_hlds.inst_match.c"
                check_hlds__inst_match__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 547 "inst_match.m"
                {
#line 547 "inst_match.m"
                  mercury__map__det_update_4_p_0(check_hlds__inst_match__TypeInfo_70_70, check_hlds__inst_match__TypeCtorInfo_71_71, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__Inst_13)), check_hlds__inst_match__InstVarSub0_10, &check_hlds__inst_match__InstVarSub_15);
                }
#line 548 "inst_match.m"
                {
#line 548 "inst_match.m"
                  check_hlds__inst_match__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 548 "inst_match.m"
                  MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_24_24, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_15));
#line 548 "inst_match.m"
                }
#line 548 "inst_match.m"
                check_hlds__inst_match__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 548 "inst_match.m"
                check_hlds__inst_match__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 548 "inst_match.m"
                check_hlds__inst_match__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 548 "inst_match.m"
                check_hlds__inst_match__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 548 "inst_match.m"
                check_hlds__inst_match__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 548 "inst_match.m"
                check_hlds__inst_match__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 548 "inst_match.m"
                {
#line 548 "inst_match.m"
                  MR_Word base;
#line 548 "inst_match.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "inst_match.m"
                  *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 548 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_45_45));
#line 548 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_46_46));
#line 548 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_24_24));
#line 548 "inst_match.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_48_48 | ((((check_hlds__inst_match__V_49_49 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_50_50 << (MR_Integer) 3)))))));
#line 548 "inst_match.m"
                }
#line 548 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 543 "inst_match.m"
              }
#line 543 "inst_match.m"
          }
#line 549 "inst_match.m"
        else
#line 550 "inst_match.m"
          {
#line 550 "inst_match.m"
            MR_Word check_hlds__inst_match__V_26_26;
#line 550 "inst_match.m"
            MR_Word check_hlds__inst_match__InstVarSub_27;
#line 551 "inst_match.m"
            MR_Word check_hlds__inst_match__V_51_51;
#line 551 "inst_match.m"
            MR_Word check_hlds__inst_match__V_52_52;
#line 551 "inst_match.m"
            MR_Word check_hlds__inst_match__V_54_54;
#line 551 "inst_match.m"
            MR_Word check_hlds__inst_match__V_55_55;
#line 551 "inst_match.m"
            MR_Word check_hlds__inst_match__V_56_56;
#line 551 "inst_match.m"
            MR_Word check_hlds__inst_match__V_53_53;

#line 550 "inst_match.m"
            {
#line 550 "inst_match.m"
              mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__inst_match_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__InstVar_8)), ((MR_Box) (check_hlds__inst_match__InstA_6)), check_hlds__inst_match__InstVarSub0_10, &check_hlds__inst_match__InstVarSub_27);
            }
#line 551 "inst_match.m"
            {
#line 551 "inst_match.m"
              check_hlds__inst_match__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 551 "inst_match.m"
              MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_26_26, 0) = ((MR_Box) (check_hlds__inst_match__InstVarSub_27));
#line 551 "inst_match.m"
            }
#line 551 "inst_match.m"
            check_hlds__inst_match__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 551 "inst_match.m"
            check_hlds__inst_match__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 551 "inst_match.m"
            check_hlds__inst_match__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 551 "inst_match.m"
            check_hlds__inst_match__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 551 "inst_match.m"
            check_hlds__inst_match__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 551 "inst_match.m"
            check_hlds__inst_match__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 551 "inst_match.m"
            {
#line 551 "inst_match.m"
              MR_Word base;
#line 551 "inst_match.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 551 "inst_match.m"
              *check_hlds__inst_match__STATE_VARIABLE_Info_17 = base;
#line 551 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_match__V_51_51));
#line 551 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_match__V_52_52));
#line 551 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_match__V_26_26));
#line 551 "inst_match.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((check_hlds__inst_match__V_54_54 | ((((check_hlds__inst_match__V_55_55 << (MR_Integer) 2)) | ((check_hlds__inst_match__V_56_56 << (MR_Integer) 3)))))));
#line 551 "inst_match.m"
            }
#line 550 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 550 "inst_match.m"
          }
#line 538 "inst_match.m"
      }
#line 538 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 538 "inst_match.m"
  }
#line 533 "inst_match.m"
}

#line 319 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_or_any_or_dead_3_p_0(
#line 319 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 319 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 319 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3)
#line 319 "inst_match.m"
{
#line 2371 "inst_match.m"
  while (MR_TRUE)
#line 2371 "inst_match.m"
    {
#line 2371 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2371 "inst_match.m"
      {
#line 2371 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2371 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2371 "inst_match.m"
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2371 "inst_match.m"
        else
#line 2373 "inst_match.m"
          {
#line 2373 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2373 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2373 "inst_match.m"
            MR_Word check_hlds__inst_match__Live_7;
#line 2373 "inst_match.m"
            MR_Word check_hlds__inst_match__Lives_8;

#line 2373 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2373 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2373 "inst_match.m"
              {
#line 2373 "inst_match.m"
                check_hlds__inst_match__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 2373 "inst_match.m"
                check_hlds__inst_match__Lives_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 2377 "inst_match.m"
                if ((check_hlds__inst_match__Live_7 == (MR_Integer) 1))
#line 2378 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 2377 "inst_match.m"
                else
#line 1766 "inst_match.m"
                  {
#line 1766 "inst_match.m"
                    MR_Word check_hlds__inst_match__Expansions0_12;
#line 1768 "inst_match.m"
                    MR_Word check_hlds__inst_match___Expansions_13;

#line 1767 "inst_match.m"
                    {
#line 1767 "inst_match.m"
                      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_12);
                    }
#line 1768 "inst_match.m"
                    {
#line 1768 "inst_match.m"
                      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__Inst_5, check_hlds__inst_match__Expansions0_12, &check_hlds__inst_match___Expansions_13);
                    }
#line 1766 "inst_match.m"
                  }
#line 2373 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 2380 "inst_match.m"
                  {
#line 2380 "inst_match.m"
                    /* direct tailcall eliminated */
#line 2380 "inst_match.m"
                    {
#line 2380 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_6;
#line 2380 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Lives_8;

#line 2380 "inst_match.m"
                      check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 2380 "inst_match.m"
                      check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2380 "inst_match.m"
                    }
#line 2380 "inst_match.m"
                    continue;
#line 2380 "inst_match.m"
                  }
#line 2373 "inst_match.m"
              }
#line 2373 "inst_match.m"
          }
#line 2371 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2371 "inst_match.m"
      }
#line 2371 "inst_match.m"
      break;
#line 2371 "inst_match.m"
    }
#line 319 "inst_match.m"
}

#line 311 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_or_dead_3_p_0(
#line 311 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 311 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__2_2,
#line 311 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3)
#line 311 "inst_match.m"
{
#line 2361 "inst_match.m"
  while (MR_TRUE)
#line 2361 "inst_match.m"
    {
#line 2361 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2361 "inst_match.m"
      {
#line 2361 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2361 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2361 "inst_match.m"
          check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2361 "inst_match.m"
        else
#line 2362 "inst_match.m"
          {
#line 2362 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2362 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2362 "inst_match.m"
            MR_Word check_hlds__inst_match__Live_7;
#line 2362 "inst_match.m"
            MR_Word check_hlds__inst_match__Lives_8;

#line 2362 "inst_match.m"
            check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2362 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2362 "inst_match.m"
              {
#line 2362 "inst_match.m"
                check_hlds__inst_match__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 0)));
#line 2362 "inst_match.m"
                check_hlds__inst_match__Lives_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__2_2, (MR_Integer) 1)));
#line 2366 "inst_match.m"
                if ((check_hlds__inst_match__Live_7 == (MR_Integer) 1))
#line 2367 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 2366 "inst_match.m"
                else
#line 2365 "inst_match.m"
                  {
#line 2365 "inst_match.m"
                    check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__Inst_5);
                  }
#line 2362 "inst_match.m"
                if (check_hlds__inst_match__succeeded)
#line 2369 "inst_match.m"
                  {
#line 2369 "inst_match.m"
                    /* direct tailcall eliminated */
#line 2369 "inst_match.m"
                    {
#line 2369 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_6;
#line 2369 "inst_match.m"
                      MR_Word check_hlds__inst_match__HeadVar__2__tmp_copy_2 = check_hlds__inst_match__Lives_8;

#line 2369 "inst_match.m"
                      check_hlds__inst_match__HeadVar__2_2 = check_hlds__inst_match__HeadVar__2__tmp_copy_2;
#line 2369 "inst_match.m"
                      check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2369 "inst_match.m"
                    }
#line 2369 "inst_match.m"
                    continue;
#line 2369 "inst_match.m"
                  }
#line 2362 "inst_match.m"
              }
#line 2362 "inst_match.m"
          }
#line 2361 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2361 "inst_match.m"
      }
#line 2361 "inst_match.m"
      break;
#line 2361 "inst_match.m"
    }
#line 311 "inst_match.m"
}

#line 304 "inst_match.m"
void MR_CALL 
check_hlds__inst_match__mode_list_contains_inst_var_3_p_0(
#line 304 "inst_match.m"
  MR_Word check_hlds__inst_match__Modes_4,
#line 304 "inst_match.m"
  MR_Word check_hlds__inst_match___ModuleInfo_5,
#line 304 "inst_match.m"
  MR_Word * check_hlds__inst_match__InstVar_6,
#line 304 "inst_match.m"
  MR_Cont check_hlds__inst_match__cont,
#line 304 "inst_match.m"
  void * check_hlds__inst_match__cont_env_ptr)
#line 304 "inst_match.m"
{
#line 2596 "inst_match.m"
  {
#line 2596 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2596 "inst_match.m"
    {
#line 2596 "inst_match.m"
      check_hlds__inst_match__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_108_105_115_116_95_99_111_110_116_97_105_110_115_95_105_110_115_116_95_118_97_114_95_95_91_50_93_95_48_3_p_0(check_hlds__inst_match__Modes_4, check_hlds__inst_match__InstVar_6, check_hlds__inst_match__cont, check_hlds__inst_match__cont_env_ptr);
#line 2596 "inst_match.m"
      return;
    }
#line 2596 "inst_match.m"
  }
#line 304 "inst_match.m"
}

#line 298 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_contains_instname_3_p_0(
#line 298 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4,
#line 298 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_5,
#line 298 "inst_match.m"
  MR_Word check_hlds__inst_match__InstName_6)
#line 298 "inst_match.m"
{
#line 2385 "inst_match.m"
  {
#line 2385 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 2385 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_7;
#line 2385 "inst_match.m"
    MR_Word check_hlds__inst_match__V_11_11;
#line 2387 "inst_match.m"
    MR_Word check_hlds__inst_match___Expansions_8;

#line 2386 "inst_match.m"
    {
#line 2386 "inst_match.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_match__Expansions0_7);
    }
#line 2387 "inst_match.m"
    {
#line 2387 "inst_match.m"
      check_hlds__inst_match__inst_contains_instname_2_6_p_0(check_hlds__inst_match__Inst_4, check_hlds__inst_match__ModuleInfo_5, check_hlds__inst_match__InstName_6, &check_hlds__inst_match__V_11_11, check_hlds__inst_match__Expansions0_7, &check_hlds__inst_match___Expansions_8);
    }
#line 2387 "inst_match.m"
    check_hlds__inst_match__succeeded = ((MR_Integer) 1 == check_hlds__inst_match__V_11_11);
#line 2385 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2385 "inst_match.m"
  }
#line 298 "inst_match.m"
}

#line 290 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(
#line 290 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4,
#line 290 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_5,
#line 290 "inst_match.m"
  MR_Word * check_hlds__inst_match__Functors_6)
#line 290 "inst_match.m"
{
#line 1535 "inst_match.m"
  while (MR_TRUE)
#line 1535 "inst_match.m"
    {
#line 1535 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1535 "inst_match.m"
      {
#line 1535 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1535 "inst_match.m"
        if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1534 "inst_match.m"
          {
#line 1534 "inst_match.m"
            MR_Word check_hlds__inst_match___Uniq_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 1)));
#line 1534 "inst_match.m"
            MR_Word check_hlds__inst_match___InstResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 2)));

#line 1534 "inst_match.m"
            *check_hlds__inst_match__Functors_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 3)));
#line 1534 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1534 "inst_match.m"
          }
#line 1535 "inst_match.m"
        else
#line 1535 "inst_match.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1539 "inst_match.m"
            {
#line 1539 "inst_match.m"
              MR_Word check_hlds__inst_match__SubInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 2)));
#line 1539 "inst_match.m"
              MR_Word check_hlds__inst_match__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 1)));

#line 1540 "inst_match.m"
              /* direct tailcall eliminated */
#line 1540 "inst_match.m"
              {
#line 1540 "inst_match.m"
                MR_Word check_hlds__inst_match__Inst__tmp_copy_5 = check_hlds__inst_match__SubInst_11;

#line 1540 "inst_match.m"
                check_hlds__inst_match__Inst_5 = check_hlds__inst_match__Inst__tmp_copy_5;
#line 1540 "inst_match.m"
              }
#line 1540 "inst_match.m"
              continue;
#line 1539 "inst_match.m"
            }
#line 1535 "inst_match.m"
          else
#line 1535 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1542 "inst_match.m"
              {
#line 1542 "inst_match.m"
                MR_Word check_hlds__inst_match__InstName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 1)));
#line 1542 "inst_match.m"
                MR_Word check_hlds__inst_match__NextInst_13;

#line 1543 "inst_match.m"
                {
#line 1543 "inst_match.m"
                  check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_4, check_hlds__inst_match__InstName_12, &check_hlds__inst_match__NextInst_13);
                }
#line 1544 "inst_match.m"
                /* direct tailcall eliminated */
#line 1544 "inst_match.m"
                {
#line 1544 "inst_match.m"
                  MR_Word check_hlds__inst_match__Inst__tmp_copy_5 = check_hlds__inst_match__NextInst_13;

#line 1544 "inst_match.m"
                  check_hlds__inst_match__Inst_5 = check_hlds__inst_match__Inst__tmp_copy_5;
#line 1544 "inst_match.m"
                }
#line 1544 "inst_match.m"
                continue;
#line 1542 "inst_match.m"
              }
#line 1535 "inst_match.m"
            else
#line 1535 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1536 "inst_match.m"
                {
#line 1537 "inst_match.m"
                  {
#line 1537 "inst_match.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_bound_to_functors\'/3", (MR_String) "uninstantiated inst parameter");
                  }
#line 1536 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 1536 "inst_match.m"
                }
#line 1535 "inst_match.m"
              else
#line 1535 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 1535 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1535 "inst_match.m"
      }
#line 1535 "inst_match.m"
      break;
#line 1535 "inst_match.m"
    }
#line 290 "inst_match.m"
}

#line 288 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_bound_2_p_0(
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 288 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 288 "inst_match.m"
{
#line 1510 "inst_match.m"
  while (MR_TRUE)
#line 1510 "inst_match.m"
    {
#line 1510 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1510 "inst_match.m"
      {
#line 1510 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1510 "inst_match.m"
        if ((check_hlds__inst_match__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1508 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1510 "inst_match.m"
        else
#line 1510 "inst_match.m"
          if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1506 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1510 "inst_match.m"
          else
#line 1510 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1507 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1510 "inst_match.m"
            else
#line 1510 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1505 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1510 "inst_match.m"
              else
#line 1510 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1519 "inst_match.m"
                  {
#line 1519 "inst_match.m"
                    MR_Word check_hlds__inst_match__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 2)));
#line 1519 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));

#line 1520 "inst_match.m"
                    /* direct tailcall eliminated */
#line 1520 "inst_match.m"
                    {
#line 1520 "inst_match.m"
                      MR_Word check_hlds__inst_match__Inst__tmp_copy_4 = check_hlds__inst_match__SubInst_17;

#line 1520 "inst_match.m"
                      check_hlds__inst_match__Inst_4 = check_hlds__inst_match__Inst__tmp_copy_4;
#line 1520 "inst_match.m"
                    }
#line 1520 "inst_match.m"
                    continue;
#line 1519 "inst_match.m"
                  }
#line 1510 "inst_match.m"
                else
#line 1510 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1522 "inst_match.m"
                    {
#line 1522 "inst_match.m"
                      MR_Word check_hlds__inst_match__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));
#line 1522 "inst_match.m"
                      MR_Word check_hlds__inst_match__NextInst_19;

#line 1523 "inst_match.m"
                      {
#line 1523 "inst_match.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__InstName_18, &check_hlds__inst_match__NextInst_19);
                      }
#line 1524 "inst_match.m"
                      /* direct tailcall eliminated */
#line 1524 "inst_match.m"
                      {
#line 1524 "inst_match.m"
                        MR_Word check_hlds__inst_match__Inst__tmp_copy_4 = check_hlds__inst_match__NextInst_19;

#line 1524 "inst_match.m"
                        check_hlds__inst_match__Inst_4 = check_hlds__inst_match__Inst__tmp_copy_4;
#line 1524 "inst_match.m"
                      }
#line 1524 "inst_match.m"
                      continue;
#line 1522 "inst_match.m"
                    }
#line 1510 "inst_match.m"
                  else
#line 1510 "inst_match.m"
                    if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1504 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1510 "inst_match.m"
                    else
#line 1510 "inst_match.m"
                      if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1516 "inst_match.m"
                        {
#line 1517 "inst_match.m"
                          {
#line 1517 "inst_match.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_bound\'/2", (MR_String) "uninstantiated inst parameter");
                          }
#line 1516 "inst_match.m"
                          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1516 "inst_match.m"
                        }
#line 1510 "inst_match.m"
                      else
#line 1510 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_FALSE;
#line 1510 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1510 "inst_match.m"
      }
#line 1510 "inst_match.m"
      break;
#line 1510 "inst_match.m"
    }
#line 288 "inst_match.m"
}

#line 281 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_free_2_p_0(
#line 281 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 281 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 281 "inst_match.m"
{
#line 2348 "inst_match.m"
  while (MR_TRUE)
#line 2348 "inst_match.m"
    {
#line 2348 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2348 "inst_match.m"
      {
#line 2348 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2348 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2348 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2348 "inst_match.m"
        else
#line 2349 "inst_match.m"
          {
#line 2349 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2349 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2349 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 1)));
#line 2350 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 0)));

#line 2351 "inst_match.m"
            {
#line 2351 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_free_2_p_0(check_hlds__inst_match__Args_8, check_hlds__inst_match__ModuleInfo_2);
            }
#line 2349 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2352 "inst_match.m"
              {
#line 2352 "inst_match.m"
                /* direct tailcall eliminated */
#line 2352 "inst_match.m"
                {
#line 2352 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_5;

#line 2352 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2352 "inst_match.m"
                }
#line 2352 "inst_match.m"
                continue;
#line 2352 "inst_match.m"
              }
#line 2349 "inst_match.m"
          }
#line 2348 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2348 "inst_match.m"
      }
#line 2348 "inst_match.m"
      break;
#line 2348 "inst_match.m"
    }
#line 281 "inst_match.m"
}

#line 279 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_free_2_p_0(
#line 279 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 279 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 279 "inst_match.m"
{
#line 2354 "inst_match.m"
  while (MR_TRUE)
#line 2354 "inst_match.m"
    {
#line 2354 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2354 "inst_match.m"
      {
#line 2354 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2354 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2354 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2354 "inst_match.m"
        else
#line 2355 "inst_match.m"
          {
#line 2355 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2355 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));

#line 2356 "inst_match.m"
            {
#line 2356 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_4);
            }
#line 2355 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2357 "inst_match.m"
              {
#line 2357 "inst_match.m"
                /* direct tailcall eliminated */
#line 2357 "inst_match.m"
                {
#line 2357 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_5;

#line 2357 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2357 "inst_match.m"
                }
#line 2357 "inst_match.m"
                continue;
#line 2357 "inst_match.m"
              }
#line 2355 "inst_match.m"
          }
#line 2354 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2354 "inst_match.m"
      }
#line 2354 "inst_match.m"
      break;
#line 2354 "inst_match.m"
    }
#line 279 "inst_match.m"
}

#line 277 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_any_2_p_0(
#line 277 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 277 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 277 "inst_match.m"
{
#line 1480 "inst_match.m"
  while (MR_TRUE)
#line 1480 "inst_match.m"
    {
#line 1480 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1480 "inst_match.m"
      {
#line 1480 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1480 "inst_match.m"
        if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1479 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1480 "inst_match.m"
        else
#line 1480 "inst_match.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1493 "inst_match.m"
            {
#line 1493 "inst_match.m"
              MR_Word check_hlds__inst_match__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 2)));
#line 1493 "inst_match.m"
              MR_Word check_hlds__inst_match__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));

#line 1494 "inst_match.m"
              /* direct tailcall eliminated */
#line 1494 "inst_match.m"
              {
#line 1494 "inst_match.m"
                MR_Word check_hlds__inst_match__Inst__tmp_copy_4 = check_hlds__inst_match__SubInst_17;

#line 1494 "inst_match.m"
                check_hlds__inst_match__Inst_4 = check_hlds__inst_match__Inst__tmp_copy_4;
#line 1494 "inst_match.m"
              }
#line 1494 "inst_match.m"
              continue;
#line 1493 "inst_match.m"
            }
#line 1480 "inst_match.m"
          else
#line 1480 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1496 "inst_match.m"
              {
#line 1496 "inst_match.m"
                MR_Word check_hlds__inst_match__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));
#line 1496 "inst_match.m"
                MR_Word check_hlds__inst_match__NextInst_19;

#line 1497 "inst_match.m"
                {
#line 1497 "inst_match.m"
                  check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__InstName_18, &check_hlds__inst_match__NextInst_19);
                }
#line 1498 "inst_match.m"
                /* direct tailcall eliminated */
#line 1498 "inst_match.m"
                {
#line 1498 "inst_match.m"
                  MR_Word check_hlds__inst_match__Inst__tmp_copy_4 = check_hlds__inst_match__NextInst_19;

#line 1498 "inst_match.m"
                  check_hlds__inst_match__Inst_4 = check_hlds__inst_match__Inst__tmp_copy_4;
#line 1498 "inst_match.m"
                }
#line 1498 "inst_match.m"
                continue;
#line 1496 "inst_match.m"
              }
#line 1480 "inst_match.m"
            else
#line 1480 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1490 "inst_match.m"
                {
#line 1491 "inst_match.m"
                  {
#line 1491 "inst_match.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_any\'/2", (MR_String) "uninstantiated inst parameter");
                  }
#line 1490 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 1490 "inst_match.m"
                }
#line 1480 "inst_match.m"
              else
#line 1480 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 1480 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1480 "inst_match.m"
      }
#line 1480 "inst_match.m"
      break;
#line 1480 "inst_match.m"
    }
#line 277 "inst_match.m"
}

#line 275 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_free_2_p_0(
#line 275 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 275 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 275 "inst_match.m"
{
#line 1456 "inst_match.m"
  while (MR_TRUE)
#line 1456 "inst_match.m"
    {
#line 1456 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1456 "inst_match.m"
      {
#line 1456 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1456 "inst_match.m"
        if ((check_hlds__inst_match__Inst_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1453 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 1456 "inst_match.m"
        else
#line 1456 "inst_match.m"
          if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 1))))
#line 1454 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1456 "inst_match.m"
          else
#line 1456 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1468 "inst_match.m"
              {
#line 1468 "inst_match.m"
                MR_Word check_hlds__inst_match__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 2)));
#line 1468 "inst_match.m"
                MR_Word check_hlds__inst_match__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));

#line 1469 "inst_match.m"
                /* direct tailcall eliminated */
#line 1469 "inst_match.m"
                {
#line 1469 "inst_match.m"
                  MR_Word check_hlds__inst_match__Inst__tmp_copy_4 = check_hlds__inst_match__SubInst_17;

#line 1469 "inst_match.m"
                  check_hlds__inst_match__Inst_4 = check_hlds__inst_match__Inst__tmp_copy_4;
#line 1469 "inst_match.m"
                }
#line 1469 "inst_match.m"
                continue;
#line 1468 "inst_match.m"
              }
#line 1456 "inst_match.m"
            else
#line 1456 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1471 "inst_match.m"
                {
#line 1471 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));
#line 1471 "inst_match.m"
                  MR_Word check_hlds__inst_match__NextInst_19;

#line 1472 "inst_match.m"
                  {
#line 1472 "inst_match.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__InstName_18, &check_hlds__inst_match__NextInst_19);
                  }
#line 1473 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1473 "inst_match.m"
                  {
#line 1473 "inst_match.m"
                    MR_Word check_hlds__inst_match__Inst__tmp_copy_4 = check_hlds__inst_match__NextInst_19;

#line 1473 "inst_match.m"
                    check_hlds__inst_match__Inst_4 = check_hlds__inst_match__Inst__tmp_copy_4;
#line 1473 "inst_match.m"
                  }
#line 1473 "inst_match.m"
                  continue;
#line 1471 "inst_match.m"
                }
#line 1456 "inst_match.m"
              else
#line 1456 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1465 "inst_match.m"
                  {
#line 1466 "inst_match.m"
                    {
#line 1466 "inst_match.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_free\'/2", (MR_String) "uninstantiated inst parameter");
                    }
#line 1465 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_TRUE;
#line 1465 "inst_match.m"
                  }
#line 1456 "inst_match.m"
                else
#line 1456 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1456 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1456 "inst_match.m"
      }
#line 1456 "inst_match.m"
      break;
#line 1456 "inst_match.m"
    }
#line 275 "inst_match.m"
}

#line 268 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_not_fully_unique_2_p_0(
#line 268 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 268 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 268 "inst_match.m"
{
#line 2121 "inst_match.m"
  while (MR_TRUE)
#line 2121 "inst_match.m"
    {
#line 2121 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2121 "inst_match.m"
      {
#line 2121 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2121 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2121 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2121 "inst_match.m"
        else
#line 2122 "inst_match.m"
          {
#line 2122 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2122 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2122 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 1)));
#line 2123 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 0)));

#line 2124 "inst_match.m"
            {
#line 2124 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_match__Args_8, check_hlds__inst_match__ModuleInfo_2);
            }
#line 2122 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2125 "inst_match.m"
              {
#line 2125 "inst_match.m"
                /* direct tailcall eliminated */
#line 2125 "inst_match.m"
                {
#line 2125 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_5;

#line 2125 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2125 "inst_match.m"
                }
#line 2125 "inst_match.m"
                continue;
#line 2125 "inst_match.m"
              }
#line 2122 "inst_match.m"
          }
#line 2121 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2121 "inst_match.m"
      }
#line 2121 "inst_match.m"
      break;
#line 2121 "inst_match.m"
    }
#line 268 "inst_match.m"
}

#line 265 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_not_partly_unique_2_p_0(
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 265 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 265 "inst_match.m"
{
#line 2115 "inst_match.m"
  while (MR_TRUE)
#line 2115 "inst_match.m"
    {
#line 2115 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2115 "inst_match.m"
      {
#line 2115 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2115 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2115 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2115 "inst_match.m"
        else
#line 2116 "inst_match.m"
          {
#line 2116 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2116 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2116 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 1)));
#line 2117 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 0)));

#line 2118 "inst_match.m"
            {
#line 2118 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_match__Args_8, check_hlds__inst_match__ModuleInfo_2);
            }
#line 2116 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2119 "inst_match.m"
              {
#line 2119 "inst_match.m"
                /* direct tailcall eliminated */
#line 2119 "inst_match.m"
                {
#line 2119 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_5;

#line 2119 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2119 "inst_match.m"
                }
#line 2119 "inst_match.m"
                continue;
#line 2119 "inst_match.m"
              }
#line 2116 "inst_match.m"
          }
#line 2115 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2115 "inst_match.m"
      }
#line 2115 "inst_match.m"
      break;
#line 2115 "inst_match.m"
    }
#line 265 "inst_match.m"
}

#line 262 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_mostly_unique_2_p_0(
#line 262 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 262 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 262 "inst_match.m"
{
#line 2109 "inst_match.m"
  while (MR_TRUE)
#line 2109 "inst_match.m"
    {
#line 2109 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2109 "inst_match.m"
      {
#line 2109 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2109 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2109 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2109 "inst_match.m"
        else
#line 2110 "inst_match.m"
          {
#line 2110 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2110 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2110 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 1)));
#line 2111 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 0)));

#line 2112 "inst_match.m"
            {
#line 2112 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_mostly_unique_2_p_0(check_hlds__inst_match__Args_8, check_hlds__inst_match__ModuleInfo_2);
            }
#line 2110 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2113 "inst_match.m"
              {
#line 2113 "inst_match.m"
                /* direct tailcall eliminated */
#line 2113 "inst_match.m"
                {
#line 2113 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_5;

#line 2113 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2113 "inst_match.m"
                }
#line 2113 "inst_match.m"
                continue;
#line 2113 "inst_match.m"
              }
#line 2110 "inst_match.m"
          }
#line 2109 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2109 "inst_match.m"
      }
#line 2109 "inst_match.m"
      break;
#line 2109 "inst_match.m"
    }
#line 262 "inst_match.m"
}

#line 259 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_unique_2_p_0(
#line 259 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 259 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 259 "inst_match.m"
{
#line 2103 "inst_match.m"
  while (MR_TRUE)
#line 2103 "inst_match.m"
    {
#line 2103 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2103 "inst_match.m"
      {
#line 2103 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2103 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2103 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2103 "inst_match.m"
        else
#line 2104 "inst_match.m"
          {
#line 2104 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2104 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2104 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 1)));
#line 2105 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 0)));

#line 2106 "inst_match.m"
            {
#line 2106 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_unique_2_p_0(check_hlds__inst_match__Args_8, check_hlds__inst_match__ModuleInfo_2);
            }
#line 2104 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2107 "inst_match.m"
              {
#line 2107 "inst_match.m"
                /* direct tailcall eliminated */
#line 2107 "inst_match.m"
                {
#line 2107 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_5;

#line 2107 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2107 "inst_match.m"
                }
#line 2107 "inst_match.m"
                continue;
#line 2107 "inst_match.m"
              }
#line 2104 "inst_match.m"
          }
#line 2103 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2103 "inst_match.m"
      }
#line 2103 "inst_match.m"
      break;
#line 2103 "inst_match.m"
    }
#line 259 "inst_match.m"
}

#line 256 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_ground_or_any_2_p_0(
#line 256 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 256 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 256 "inst_match.m"
{
#line 2097 "inst_match.m"
  while (MR_TRUE)
#line 2097 "inst_match.m"
    {
#line 2097 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2097 "inst_match.m"
      {
#line 2097 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2097 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2097 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2097 "inst_match.m"
        else
#line 2098 "inst_match.m"
          {
#line 2098 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2098 "inst_match.m"
            MR_Word check_hlds__inst_match__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2098 "inst_match.m"
            MR_Word check_hlds__inst_match__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 1)));
#line 2099 "inst_match.m"
            MR_Word check_hlds__inst_match___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__BoundInst_4, (MR_Integer) 0)));

#line 2100 "inst_match.m"
            {
#line 2100 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_list_is_ground_or_any_2_p_0(check_hlds__inst_match__Args_8, check_hlds__inst_match__ModuleInfo_2);
            }
#line 2098 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2101 "inst_match.m"
              {
#line 2101 "inst_match.m"
                /* direct tailcall eliminated */
#line 2101 "inst_match.m"
                {
#line 2101 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__BoundInsts_5;

#line 2101 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2101 "inst_match.m"
                }
#line 2101 "inst_match.m"
                continue;
#line 2101 "inst_match.m"
              }
#line 2098 "inst_match.m"
          }
#line 2097 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2097 "inst_match.m"
      }
#line 2097 "inst_match.m"
      break;
#line 2097 "inst_match.m"
    }
#line 256 "inst_match.m"
}

#line 253 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__bound_inst_list_is_ground_2_p_0(
#line 253 "inst_match.m"
  MR_Word check_hlds__inst_match__BoundInsts_3,
#line 253 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4)
#line 253 "inst_match.m"
{
#line 2032 "inst_match.m"
  {
#line 2032 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 2033 "inst_match.m"
    {
#line 2033 "inst_match.m"
      return check_hlds__inst_match__succeeded = check_hlds__inst_match__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_match__BoundInsts_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__ModuleInfo_4);
    }
#line 2032 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 2032 "inst_match.m"
  }
#line 253 "inst_match.m"
}

#line 250 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_not_fully_unique_2_p_0(
#line 250 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 250 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 250 "inst_match.m"
{
#line 2285 "inst_match.m"
  while (MR_TRUE)
#line 2285 "inst_match.m"
    {
#line 2285 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2285 "inst_match.m"
      {
#line 2285 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2285 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2285 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2285 "inst_match.m"
        else
#line 2286 "inst_match.m"
          {
#line 2286 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2286 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2286 "inst_match.m"
            MR_Word check_hlds__inst_match__Expansions0_9;
#line 1975 "inst_match.m"
            MR_Word check_hlds__inst_match___Expansions_10;

#line 1974 "inst_match.m"
            {
#line 1974 "inst_match.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_9);
            }
#line 1975 "inst_match.m"
            {
#line 1975 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_9, &check_hlds__inst_match___Expansions_10);
            }
#line 2286 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2288 "inst_match.m"
              {
#line 2288 "inst_match.m"
                /* direct tailcall eliminated */
#line 2288 "inst_match.m"
                {
#line 2288 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_5;

#line 2288 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2288 "inst_match.m"
                }
#line 2288 "inst_match.m"
                continue;
#line 2288 "inst_match.m"
              }
#line 2286 "inst_match.m"
          }
#line 2285 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2285 "inst_match.m"
      }
#line 2285 "inst_match.m"
      break;
#line 2285 "inst_match.m"
    }
#line 250 "inst_match.m"
}

#line 247 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_not_partly_unique_2_p_0(
#line 247 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 247 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 247 "inst_match.m"
{
#line 2280 "inst_match.m"
  while (MR_TRUE)
#line 2280 "inst_match.m"
    {
#line 2280 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2280 "inst_match.m"
      {
#line 2280 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2280 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2280 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2280 "inst_match.m"
        else
#line 2281 "inst_match.m"
          {
#line 2281 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2281 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2281 "inst_match.m"
            MR_Word check_hlds__inst_match__Expansions0_9;
#line 1919 "inst_match.m"
            MR_Word check_hlds__inst_match___Expansions_10;

#line 1918 "inst_match.m"
            {
#line 1918 "inst_match.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_9);
            }
#line 1919 "inst_match.m"
            {
#line 1919 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_9, &check_hlds__inst_match___Expansions_10);
            }
#line 2281 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2283 "inst_match.m"
              {
#line 2283 "inst_match.m"
                /* direct tailcall eliminated */
#line 2283 "inst_match.m"
                {
#line 2283 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_5;

#line 2283 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2283 "inst_match.m"
                }
#line 2283 "inst_match.m"
                continue;
#line 2283 "inst_match.m"
              }
#line 2281 "inst_match.m"
          }
#line 2280 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2280 "inst_match.m"
      }
#line 2280 "inst_match.m"
      break;
#line 2280 "inst_match.m"
    }
#line 247 "inst_match.m"
}

#line 244 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_mostly_unique_2_p_0(
#line 244 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 244 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 244 "inst_match.m"
{
#line 2275 "inst_match.m"
  while (MR_TRUE)
#line 2275 "inst_match.m"
    {
#line 2275 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2275 "inst_match.m"
      {
#line 2275 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2275 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2275 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2275 "inst_match.m"
        else
#line 2276 "inst_match.m"
          {
#line 2276 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2276 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2276 "inst_match.m"
            MR_Word check_hlds__inst_match__Expansions0_9;
#line 1861 "inst_match.m"
            MR_Word check_hlds__inst_match___Expansions_10;

#line 1860 "inst_match.m"
            {
#line 1860 "inst_match.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_9);
            }
#line 1861 "inst_match.m"
            {
#line 1861 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_9, &check_hlds__inst_match___Expansions_10);
            }
#line 2276 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2278 "inst_match.m"
              {
#line 2278 "inst_match.m"
                /* direct tailcall eliminated */
#line 2278 "inst_match.m"
                {
#line 2278 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_5;

#line 2278 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2278 "inst_match.m"
                }
#line 2278 "inst_match.m"
                continue;
#line 2278 "inst_match.m"
              }
#line 2276 "inst_match.m"
          }
#line 2275 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2275 "inst_match.m"
      }
#line 2275 "inst_match.m"
      break;
#line 2275 "inst_match.m"
    }
#line 244 "inst_match.m"
}

#line 242 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_unique_2_p_0(
#line 242 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 242 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 242 "inst_match.m"
{
#line 2270 "inst_match.m"
  while (MR_TRUE)
#line 2270 "inst_match.m"
    {
#line 2270 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2270 "inst_match.m"
      {
#line 2270 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2270 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2270 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2270 "inst_match.m"
        else
#line 2271 "inst_match.m"
          {
#line 2271 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2271 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2271 "inst_match.m"
            MR_Word check_hlds__inst_match__Expansions0_9;
#line 1811 "inst_match.m"
            MR_Word check_hlds__inst_match___Expansions_10;

#line 1810 "inst_match.m"
            {
#line 1810 "inst_match.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_9);
            }
#line 1811 "inst_match.m"
            {
#line 1811 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_9, &check_hlds__inst_match___Expansions_10);
            }
#line 2271 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2273 "inst_match.m"
              {
#line 2273 "inst_match.m"
                /* direct tailcall eliminated */
#line 2273 "inst_match.m"
                {
#line 2273 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_5;

#line 2273 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2273 "inst_match.m"
                }
#line 2273 "inst_match.m"
                continue;
#line 2273 "inst_match.m"
              }
#line 2271 "inst_match.m"
          }
#line 2270 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2270 "inst_match.m"
      }
#line 2270 "inst_match.m"
      break;
#line 2270 "inst_match.m"
    }
#line 242 "inst_match.m"
}

#line 239 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_or_any_2_p_0(
#line 239 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 239 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 239 "inst_match.m"
{
#line 2265 "inst_match.m"
  while (MR_TRUE)
#line 2265 "inst_match.m"
    {
#line 2265 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2265 "inst_match.m"
      {
#line 2265 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2265 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2265 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2265 "inst_match.m"
        else
#line 2266 "inst_match.m"
          {
#line 2266 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2266 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));
#line 2266 "inst_match.m"
            MR_Word check_hlds__inst_match__Expansions0_9;
#line 1768 "inst_match.m"
            MR_Word check_hlds__inst_match___Expansions_10;

#line 1767 "inst_match.m"
            {
#line 1767 "inst_match.m"
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_9);
            }
#line 1768 "inst_match.m"
            {
#line 1768 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_9, &check_hlds__inst_match___Expansions_10);
            }
#line 2266 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2268 "inst_match.m"
              {
#line 2268 "inst_match.m"
                /* direct tailcall eliminated */
#line 2268 "inst_match.m"
                {
#line 2268 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_5;

#line 2268 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2268 "inst_match.m"
                }
#line 2268 "inst_match.m"
                continue;
#line 2268 "inst_match.m"
              }
#line 2266 "inst_match.m"
          }
#line 2265 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2265 "inst_match.m"
      }
#line 2265 "inst_match.m"
      break;
#line 2265 "inst_match.m"
    }
#line 239 "inst_match.m"
}

#line 237 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_list_is_ground_2_p_0(
#line 237 "inst_match.m"
  MR_Word check_hlds__inst_match__HeadVar__1_1,
#line 237 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_2)
#line 237 "inst_match.m"
{
#line 2260 "inst_match.m"
  while (MR_TRUE)
#line 2260 "inst_match.m"
    {
#line 2260 "inst_match.m"
      /* tailcall optimized into a loop */
#line 2260 "inst_match.m"
      {
#line 2260 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 2260 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2260 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 2260 "inst_match.m"
        else
#line 2261 "inst_match.m"
          {
#line 2261 "inst_match.m"
            MR_Word check_hlds__inst_match__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 0)));
#line 2261 "inst_match.m"
            MR_Word check_hlds__inst_match__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__HeadVar__1_1, (MR_Integer) 1)));

#line 2262 "inst_match.m"
            {
#line 2262 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_2_p_0(check_hlds__inst_match__ModuleInfo_2, check_hlds__inst_match__Inst_4);
            }
#line 2261 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 2263 "inst_match.m"
              {
#line 2263 "inst_match.m"
                /* direct tailcall eliminated */
#line 2263 "inst_match.m"
                {
#line 2263 "inst_match.m"
                  MR_Word check_hlds__inst_match__HeadVar__1__tmp_copy_1 = check_hlds__inst_match__Insts_5;

#line 2263 "inst_match.m"
                  check_hlds__inst_match__HeadVar__1_1 = check_hlds__inst_match__HeadVar__1__tmp_copy_1;
#line 2263 "inst_match.m"
                }
#line 2263 "inst_match.m"
                continue;
#line 2263 "inst_match.m"
              }
#line 2261 "inst_match.m"
          }
#line 2260 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 2260 "inst_match.m"
      }
#line 2260 "inst_match.m"
      break;
#line 2260 "inst_match.m"
    }
#line 237 "inst_match.m"
}

#line 235 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_clobbered_2_p_0(
#line 235 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 235 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 235 "inst_match.m"
{
#line 1430 "inst_match.m"
  while (MR_TRUE)
#line 1430 "inst_match.m"
    {
#line 1430 "inst_match.m"
      /* tailcall optimized into a loop */
#line 1430 "inst_match.m"
      {
#line 1430 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded;

#line 1430 "inst_match.m"
        if (((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 2))))
#line 1430 "inst_match.m"
          {
#line 1430 "inst_match.m"
            MR_Word check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_4, (MR_Integer) 0)));
#line 1431 "inst_match.m"
            MR_Word check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));

#line 1430 "inst_match.m"
            if ((check_hlds__inst_match__V_31_31 == (MR_Integer) 3))
#line 1432 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1430 "inst_match.m"
            else
#line 1430 "inst_match.m"
              if ((check_hlds__inst_match__V_31_31 == (MR_Integer) 4))
#line 1431 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1430 "inst_match.m"
              else
#line 1430 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_FALSE;
#line 1430 "inst_match.m"
          }
#line 1430 "inst_match.m"
        else
#line 1430 "inst_match.m"
          if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1430 "inst_match.m"
            {
#line 1430 "inst_match.m"
              MR_Word check_hlds__inst_match__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));
#line 1435 "inst_match.m"
              MR_Word check_hlds__inst_match__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 3)));
#line 1435 "inst_match.m"
              MR_Word check_hlds__inst_match__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 2)));

#line 1430 "inst_match.m"
              if ((check_hlds__inst_match__V_34_34 == (MR_Integer) 3))
#line 1435 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 1430 "inst_match.m"
              else
#line 1430 "inst_match.m"
                if ((check_hlds__inst_match__V_34_34 == (MR_Integer) 4))
#line 1436 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 1430 "inst_match.m"
                else
#line 1430 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 1430 "inst_match.m"
            }
#line 1430 "inst_match.m"
          else
#line 1430 "inst_match.m"
            if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1442 "inst_match.m"
              {
#line 1442 "inst_match.m"
                MR_Word check_hlds__inst_match__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 2)));
#line 1442 "inst_match.m"
                MR_Word check_hlds__inst_match__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));

#line 1443 "inst_match.m"
                /* direct tailcall eliminated */
#line 1443 "inst_match.m"
                {
#line 1443 "inst_match.m"
                  MR_Word check_hlds__inst_match__Inst__tmp_copy_4 = check_hlds__inst_match__SubInst_18;

#line 1443 "inst_match.m"
                  check_hlds__inst_match__Inst_4 = check_hlds__inst_match__Inst__tmp_copy_4;
#line 1443 "inst_match.m"
                }
#line 1443 "inst_match.m"
                continue;
#line 1442 "inst_match.m"
              }
#line 1430 "inst_match.m"
            else
#line 1430 "inst_match.m"
              if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1445 "inst_match.m"
                {
#line 1445 "inst_match.m"
                  MR_Word check_hlds__inst_match__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));
#line 1445 "inst_match.m"
                  MR_Word check_hlds__inst_match__NextInst_20;

#line 1446 "inst_match.m"
                  {
#line 1446 "inst_match.m"
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__InstName_19, &check_hlds__inst_match__NextInst_20);
                  }
#line 1447 "inst_match.m"
                  /* direct tailcall eliminated */
#line 1447 "inst_match.m"
                  {
#line 1447 "inst_match.m"
                    MR_Word check_hlds__inst_match__Inst__tmp_copy_4 = check_hlds__inst_match__NextInst_20;

#line 1447 "inst_match.m"
                    check_hlds__inst_match__Inst_4 = check_hlds__inst_match__Inst__tmp_copy_4;
#line 1447 "inst_match.m"
                  }
#line 1447 "inst_match.m"
                  continue;
#line 1445 "inst_match.m"
                }
#line 1430 "inst_match.m"
              else
#line 1430 "inst_match.m"
                if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1430 "inst_match.m"
                  {
#line 1430 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));
#line 1433 "inst_match.m"
                    MR_Word check_hlds__inst_match__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 2)));

#line 1430 "inst_match.m"
                    if ((check_hlds__inst_match__V_36_36 == (MR_Integer) 3))
#line 1433 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1430 "inst_match.m"
                    else
#line 1430 "inst_match.m"
                      if ((check_hlds__inst_match__V_36_36 == (MR_Integer) 4))
#line 1434 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_TRUE;
#line 1430 "inst_match.m"
                      else
#line 1430 "inst_match.m"
                        check_hlds__inst_match__succeeded = MR_FALSE;
#line 1430 "inst_match.m"
                  }
#line 1430 "inst_match.m"
                else
#line 1430 "inst_match.m"
                  if (((((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__Inst_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1439 "inst_match.m"
                    {
#line 1440 "inst_match.m"
                      {
#line 1440 "inst_match.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_is_clobbered\'/2", (MR_String) "uninstantiated inst parameter");
                      }
#line 1439 "inst_match.m"
                      check_hlds__inst_match__succeeded = MR_TRUE;
#line 1439 "inst_match.m"
                    }
#line 1430 "inst_match.m"
                  else
#line 1430 "inst_match.m"
                    check_hlds__inst_match__succeeded = MR_FALSE;
#line 1430 "inst_match.m"
        return check_hlds__inst_match__succeeded;
#line 1430 "inst_match.m"
      }
#line 1430 "inst_match.m"
      break;
#line 1430 "inst_match.m"
    }
#line 235 "inst_match.m"
}

#line 229 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_not_fully_unique_2_p_0(
#line 229 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 229 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 229 "inst_match.m"
{
#line 1973 "inst_match.m"
  {
#line 1973 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1973 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_5;
#line 1975 "inst_match.m"
    MR_Word check_hlds__inst_match___Expansions_6;

#line 1974 "inst_match.m"
    {
#line 1974 "inst_match.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_5);
    }
#line 1975 "inst_match.m"
    {
#line 1975 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_5, &check_hlds__inst_match___Expansions_6);
    }
#line 1973 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1973 "inst_match.m"
  }
#line 229 "inst_match.m"
}

#line 225 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(
#line 225 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 225 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 225 "inst_match.m"
{
#line 1917 "inst_match.m"
  {
#line 1917 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1917 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_5;
#line 1919 "inst_match.m"
    MR_Word check_hlds__inst_match___Expansions_6;

#line 1918 "inst_match.m"
    {
#line 1918 "inst_match.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_5);
    }
#line 1919 "inst_match.m"
    {
#line 1919 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_5, &check_hlds__inst_match___Expansions_6);
    }
#line 1917 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1917 "inst_match.m"
  }
#line 225 "inst_match.m"
}

#line 221 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_unique_2_p_0(
#line 221 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 221 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 221 "inst_match.m"
{
#line 1809 "inst_match.m"
  {
#line 1809 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1809 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_5;
#line 1811 "inst_match.m"
    MR_Word check_hlds__inst_match___Expansions_6;

#line 1810 "inst_match.m"
    {
#line 1810 "inst_match.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_5);
    }
#line 1811 "inst_match.m"
    {
#line 1811 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_5, &check_hlds__inst_match___Expansions_6);
    }
#line 1809 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1809 "inst_match.m"
  }
#line 221 "inst_match.m"
}

#line 213 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_mostly_unique_2_p_0(
#line 213 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 213 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 213 "inst_match.m"
{
#line 1859 "inst_match.m"
  {
#line 1859 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1859 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_5;
#line 1861 "inst_match.m"
    MR_Word check_hlds__inst_match___Expansions_6;

#line 1860 "inst_match.m"
    {
#line 1860 "inst_match.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_5);
    }
#line 1861 "inst_match.m"
    {
#line 1861 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_5, &check_hlds__inst_match___Expansions_6);
    }
#line 1859 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1859 "inst_match.m"
  }
#line 213 "inst_match.m"
}

#line 204 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_ground_or_any_2_p_0(
#line 204 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 204 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 204 "inst_match.m"
{
#line 1766 "inst_match.m"
  {
#line 1766 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1766 "inst_match.m"
    MR_Word check_hlds__inst_match__Expansions0_5;
#line 1768 "inst_match.m"
    MR_Word check_hlds__inst_match___Expansions_6;

#line 1767 "inst_match.m"
    {
#line 1767 "inst_match.m"
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_match__Expansions0_5);
    }
#line 1768 "inst_match.m"
    {
#line 1768 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_5, &check_hlds__inst_match___Expansions_6);
    }
#line 1766 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1766 "inst_match.m"
  }
#line 204 "inst_match.m"
}

#line 196 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_is_ground_2_p_0(
#line 196 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_3,
#line 196 "inst_match.m"
  MR_Word check_hlds__inst_match__Inst_4)
#line 196 "inst_match.m"
{
#line 1562 "inst_match.m"
  {
#line 1562 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1563 "inst_match.m"
    MR_Word check_hlds__inst_match__Found_5;
#line 1563 "inst_match.m"
    MR_Word check_hlds__inst_match__OldIsGround_6;

#line 1650 "inst_match.m"
{
#define MR_PROC_LABEL check_hlds__inst_match__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Inst =  check_hlds__inst_match__Inst_4 ;
		{
#line 1650 "inst_match.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (inst_is_ground_cache[hash].iig_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
    }

#line 19540 "check_hlds.inst_match.c"

		;}
#undef MR_PROC_LABEL
	 check_hlds__inst_match__Found_5  = Found;
	 check_hlds__inst_match__OldIsGround_6  = IsGround;
#line 1650 "inst_match.m"
}
#line 1571 "inst_match.m"
    if ((check_hlds__inst_match__Found_5 == (MR_Integer) 0))
#line 1579 "inst_match.m"
      {
#line 1576 "inst_match.m"
        MR_Word check_hlds__inst_match__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1576 "inst_match.m"
        MR_Word check_hlds__inst_match__Expansions0_21;
#line 1709 "inst_match.m"
        MR_Word check_hlds__inst_match__V_30_30;
#line 1709 "inst_match.m"
        MR_Word check_hlds__inst_match__V_31_31;

#line 1695 "inst_match.m"
        {
#line 1695 "inst_match.m"
          check_hlds__inst_match__Expansions0_21 = mercury__set_tree234__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 1709 "inst_match.m"
        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__Inst_4)) == (MR_mktag((MR_Integer) 2)));
#line 1709 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1709 "inst_match.m"
          {
#line 1709 "inst_match.m"
            check_hlds__inst_match__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_4, (MR_Integer) 0)));
#line 1709 "inst_match.m"
            check_hlds__inst_match__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_match__Inst_4, (MR_Integer) 1)));
#line 1710 "inst_match.m"
            {
#line 1710 "inst_match.m"
              check_hlds__inst_match__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_match__Expansions0_21, ((MR_Box) (check_hlds__inst_match__Inst_4)));
            }
#line 1712 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1710 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1712 "inst_match.m"
            else
#line 1713 "inst_match.m"
              {
#line 1713 "inst_match.m"
                MR_Word check_hlds__inst_match___Expansions_37;

#line 1713 "inst_match.m"
                {
#line 1713 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_mt_2_5_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__V_11_11, check_hlds__inst_match__Inst_4, check_hlds__inst_match__Expansions0_21, &check_hlds__inst_match___Expansions_37);
                }
#line 1713 "inst_match.m"
              }
#line 1709 "inst_match.m"
          }
#line 1709 "inst_match.m"
        else
#line 1720 "inst_match.m"
          {
#line 1720 "inst_match.m"
            MR_Word check_hlds__inst_match__STATE_VARIABLE_Expansions_15_33;

#line 1717 "inst_match.m"
            {
#line 1717 "inst_match.m"
              check_hlds__inst_match__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_match__Inst_4)), check_hlds__inst_match__Expansions0_21, &check_hlds__inst_match__STATE_VARIABLE_Expansions_15_33);
            }
#line 1720 "inst_match.m"
            if (check_hlds__inst_match__succeeded)
#line 1719 "inst_match.m"
              {
#line 1719 "inst_match.m"
                MR_Word check_hlds__inst_match___Expansions_38;

#line 1719 "inst_match.m"
                {
#line 1719 "inst_match.m"
                  check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_is_ground_mt_2_5_p_0(check_hlds__inst_match__ModuleInfo_3, check_hlds__inst_match__V_11_11, check_hlds__inst_match__Inst_4, check_hlds__inst_match__STATE_VARIABLE_Expansions_15_33, &check_hlds__inst_match___Expansions_38);
                }
#line 1719 "inst_match.m"
              }
#line 1720 "inst_match.m"
            else
#line 1719 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 1720 "inst_match.m"
          }
#line 1579 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 1577 "inst_match.m"
          {
#line 1675 "inst_match.m"
{
#define MR_PROC_LABEL check_hlds__inst_match__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_match__Inst_4 ;
	IsGround =  (MR_Integer) 1 ;
		{
#line 1675 "inst_match.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;

#line 19658 "check_hlds.inst_match.c"

		;}
#undef MR_PROC_LABEL
#line 1675 "inst_match.m"
}
#line 1577 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 1577 "inst_match.m"
          }
#line 1579 "inst_match.m"
        else
#line 1580 "inst_match.m"
          {
#line 1675 "inst_match.m"
{
#define MR_PROC_LABEL check_hlds__inst_match__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_match__Inst_4 ;
	IsGround =  (MR_Integer) 0 ;
		{
#line 1675 "inst_match.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;

#line 19693 "check_hlds.inst_match.c"

		;}
#undef MR_PROC_LABEL
#line 1675 "inst_match.m"
}
#line 1581 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 1580 "inst_match.m"
          }
#line 1579 "inst_match.m"
      }
#line 1571 "inst_match.m"
    else
#line 1570 "inst_match.m"
      check_hlds__inst_match__succeeded = (check_hlds__inst_match__OldIsGround_6 == (MR_Integer) 1);
#line 1562 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1562 "inst_match.m"
  }
#line 196 "inst_match.m"
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
#line 876 "inst_match.m"
  {
#line 876 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__TypeCtorInfo_21_40;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_12;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__PredOrFunc_31;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__ModesA_32;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__Det_34;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__ModesB_35;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__MaybeTypes_37;
#line 876 "inst_match.m"
    MR_Integer check_hlds__inst_match__V_38_38;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__V_41_41;
#line 876 "inst_match.m"
    MR_Word check_hlds__inst_match__V_42_42;
#line 900 "inst_match.m"
    MR_Word check_hlds__inst_match___MaybeArgRegsA_33;
#line 901 "inst_match.m"
    MR_Word check_hlds__inst_match___MaybeArgRegsB_36;
#line 903 "inst_match.m"
    MR_Word check_hlds__inst_match__V_13_13;

#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_23_23 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 900 "inst_match.m"
    check_hlds__inst_match__PredOrFunc_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 0)));
#line 900 "inst_match.m"
    check_hlds__inst_match__ModesA_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 1)));
#line 900 "inst_match.m"
    check_hlds__inst_match___MaybeArgRegsA_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 2)));
#line 900 "inst_match.m"
    check_hlds__inst_match__Det_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstA_4, (MR_Integer) 3)));
#line 901 "inst_match.m"
    check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 0)));
#line 901 "inst_match.m"
    check_hlds__inst_match__ModesB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 1)));
#line 901 "inst_match.m"
    check_hlds__inst_match___MaybeArgRegsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 2)));
#line 901 "inst_match.m"
    check_hlds__inst_match__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__PredInstB_5, (MR_Integer) 3)));
#line 901 "inst_match.m"
    check_hlds__inst_match__succeeded = (check_hlds__inst_match__PredOrFunc_31 == check_hlds__inst_match__V_41_41);
#line 876 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 876 "inst_match.m"
      {
#line 901 "inst_match.m"
        check_hlds__inst_match__succeeded = (check_hlds__inst_match__Det_34 == check_hlds__inst_match__V_42_42);
#line 876 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 876 "inst_match.m"
          {
#line 19793 "check_hlds.inst_match.c"
            check_hlds__inst_match__TypeCtorInfo_21_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 434 "inst_match.m"
            {
#line 434 "inst_match.m"
              check_hlds__inst_match__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_6));
#line 434 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 1) = ((MR_Box) (check_hlds__inst_match__V_23_23));
#line 434 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
              MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_12, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
            }
#line 902 "inst_match.m"
            {
#line 902 "inst_match.m"
              check_hlds__inst_match__V_38_38 = mercury__list__length_1_f_0(check_hlds__inst_match__TypeCtorInfo_21_40, check_hlds__inst_match__ModesA_32);
            }
#line 902 "inst_match.m"
            {
#line 902 "inst_match.m"
              check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__V_38_38, &check_hlds__inst_match__MaybeTypes_37);
            }
#line 903 "inst_match.m"
            {
#line 903 "inst_match.m"
              check_hlds__inst_match__succeeded = check_hlds__inst_match__pred_inst_argmodes_matches_5_p_0(check_hlds__inst_match__ModesA_32, check_hlds__inst_match__ModesB_35, check_hlds__inst_match__MaybeTypes_37, check_hlds__inst_match__Info0_12, &check_hlds__inst_match__V_13_13);
            }
#line 876 "inst_match.m"
          }
#line 876 "inst_match.m"
      }
#line 876 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 876 "inst_match.m"
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
#line 1247 "inst_match.m"
  {
#line 1247 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1247 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1247 "inst_match.m"
    MR_Word check_hlds__inst_match__V_15_15;
#line 1247 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21;
#line 1249 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_21_21 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 1249 "inst_match.m"
    {
#line 1249 "inst_match.m"
      check_hlds__inst_match__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1249 "inst_match.m"
    }
#line 1249 "inst_match.m"
    {
#line 1249 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_15_15, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1247 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1247 "inst_match.m"
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
#line 1243 "inst_match.m"
  {
#line 1243 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1243 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1243 "inst_match.m"
    MR_Word check_hlds__inst_match__V_15_15;
#line 1243 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21;
#line 1245 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_21_21 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 1245 "inst_match.m"
    {
#line 1245 "inst_match.m"
      check_hlds__inst_match__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1245 "inst_match.m"
    }
#line 1245 "inst_match.m"
    {
#line 1245 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_binding_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_15_15, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1243 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1243 "inst_match.m"
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
#line 947 "inst_match.m"
  {
#line 947 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 947 "inst_match.m"
    if ((check_hlds__inst_match__A_3 == (MR_Integer) 3))
#line 957 "inst_match.m"
      check_hlds__inst_match__succeeded = (check_hlds__inst_match__B_4 == (MR_Integer) 3);
#line 947 "inst_match.m"
    else
#line 947 "inst_match.m"
      if ((check_hlds__inst_match__A_3 == (MR_Integer) 4))
#line 947 "inst_match.m"
        if ((check_hlds__inst_match__B_4 == (MR_Integer) 3))
#line 956 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
        else
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__B_4 == (MR_Integer) 4))
#line 955 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
      else
#line 947 "inst_match.m"
        if ((check_hlds__inst_match__A_3 == (MR_Integer) 2))
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__B_4 == (MR_Integer) 3))
#line 951 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__B_4 == (MR_Integer) 4))
#line 950 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              if ((check_hlds__inst_match__B_4 == (MR_Integer) 2))
#line 948 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
              else
#line 947 "inst_match.m"
                if ((check_hlds__inst_match__B_4 == (MR_Integer) 0))
#line 949 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                else
#line 947 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
        else
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__A_3 == (MR_Integer) 0))
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__B_4 == (MR_Integer) 3))
#line 954 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              if ((check_hlds__inst_match__B_4 == (MR_Integer) 4))
#line 953 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
              else
#line 947 "inst_match.m"
                if ((check_hlds__inst_match__B_4 == (MR_Integer) 0))
#line 952 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                else
#line 947 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 947 "inst_match.m"
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
#line 947 "inst_match.m"
  {
#line 947 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;

#line 947 "inst_match.m"
    if ((check_hlds__inst_match__HeadVar__1_1 == (MR_Integer) 3))
#line 957 "inst_match.m"
      check_hlds__inst_match__succeeded = (check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 3);
#line 947 "inst_match.m"
    else
#line 947 "inst_match.m"
      if ((check_hlds__inst_match__HeadVar__1_1 == (MR_Integer) 4))
#line 947 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 3))
#line 956 "inst_match.m"
          check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
        else
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 4))
#line 955 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
      else
#line 947 "inst_match.m"
        if ((check_hlds__inst_match__HeadVar__1_1 == (MR_Integer) 2))
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 3))
#line 951 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 4))
#line 950 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 2))
#line 948 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
              else
#line 947 "inst_match.m"
                if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 0))
#line 949 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                else
#line 947 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
        else
#line 947 "inst_match.m"
          if ((check_hlds__inst_match__HeadVar__1_1 == (MR_Integer) 0))
#line 947 "inst_match.m"
            if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 3))
#line 954 "inst_match.m"
              check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
            else
#line 947 "inst_match.m"
              if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 4))
#line 953 "inst_match.m"
                check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
              else
#line 947 "inst_match.m"
                if ((check_hlds__inst_match__HeadVar__2_2 == (MR_Integer) 0))
#line 952 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
                else
#line 947 "inst_match.m"
                  check_hlds__inst_match__succeeded = MR_FALSE;
#line 947 "inst_match.m"
          else
#line 947 "inst_match.m"
            check_hlds__inst_match__succeeded = MR_TRUE;
#line 947 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 947 "inst_match.m"
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
#line 1239 "inst_match.m"
  {
#line 1239 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1239 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1239 "inst_match.m"
    MR_Word check_hlds__inst_match__V_15_15;
#line 1239 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21;
#line 1241 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_21_21 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 1241 "inst_match.m"
    {
#line 1241 "inst_match.m"
      check_hlds__inst_match__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1241 "inst_match.m"
    }
#line 1241 "inst_match.m"
    {
#line 1241 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_15_15, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1239 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1239 "inst_match.m"
  }
#line 141 "inst_match.m"
}

#line 117 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_typed_4_p_0(
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 117 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 117 "inst_match.m"
{
#line 1042 "inst_match.m"
  {
#line 1042 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1042 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 1042 "inst_match.m"
    MR_Word check_hlds__inst_match__V_15_15;
#line 1042 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21;
#line 1044 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_21_21 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 1044 "inst_match.m"
    {
#line 1044 "inst_match.m"
      check_hlds__inst_match__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 1044 "inst_match.m"
    }
#line 1044 "inst_match.m"
    {
#line 1044 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_15_15, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 1042 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1042 "inst_match.m"
  }
#line 117 "inst_match.m"
}

#line 108 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_final_3_p_0(
#line 108 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_4,
#line 108 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_5,
#line 108 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_6)
#line 108 "inst_match.m"
{
#line 1038 "inst_match.m"
  {
#line 1038 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 1038 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_7;
#line 1038 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19;
#line 1040 "inst_match.m"
    MR_Word check_hlds__inst_match__V_8_8;

#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_19_19 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_6));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 1) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_7, 3) = ((MR_Box) (((MR_Integer) 2 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 1040 "inst_match.m"
    {
#line 1040 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_4, check_hlds__inst_match__InstB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_match__Info0_7, &check_hlds__inst_match__V_8_8);
    }
#line 1038 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 1038 "inst_match.m"
  }
#line 108 "inst_match.m"
}

#line 96 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(
#line 96 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 96 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 96 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 96 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_15,
#line 96 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_16,
#line 96 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Sub_0_17,
#line 96 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Sub_18)
#line 96 "inst_match.m"
{
#line 579 "inst_match.m"
  {
#line 579 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 579 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_13;
#line 579 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_14;
#line 579 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19;
#line 579 "inst_match.m"
    MR_Word check_hlds__inst_match__V_23_23;
#line 579 "inst_match.m"
    MR_Word check_hlds__inst_match__V_28_28;
#line 579 "inst_match.m"
    MR_Word check_hlds__inst_match__V_42_42;
#line 583 "inst_match.m"
    MR_Word check_hlds__inst_match__V_27_27;
#line 583 "inst_match.m"
    MR_Word check_hlds__inst_match__V_29_29;
#line 583 "inst_match.m"
    MR_Word check_hlds__inst_match__V_30_30;
#line 583 "inst_match.m"
    MR_Word check_hlds__inst_match__V_31_31;

#line 580 "inst_match.m"
    {
#line 580 "inst_match.m"
      check_hlds__inst_match__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 580 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_19_19, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Sub_0_17));
#line 580 "inst_match.m"
    }
#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_42_42 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_15));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 1) = ((MR_Box) (check_hlds__inst_match__V_42_42));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 2) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_13, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 582 "inst_match.m"
    {
#line 582 "inst_match.m"
      check_hlds__inst_match__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 582 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_23_23, 0) = ((MR_Box) (check_hlds__inst_match__Type_10));
#line 582 "inst_match.m"
    }
#line 582 "inst_match.m"
    {
#line 582 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_8, check_hlds__inst_match__InstB_9, check_hlds__inst_match__V_23_23, check_hlds__inst_match__Info0_13, &check_hlds__inst_match__Info_14);
    }
#line 579 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 579 "inst_match.m"
      {
#line 583 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 0)));
#line 583 "inst_match.m"
        check_hlds__inst_match__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 1)));
#line 583 "inst_match.m"
        check_hlds__inst_match__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 2)));
#line 583 "inst_match.m"
        check_hlds__inst_match__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 583 "inst_match.m"
        check_hlds__inst_match__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "inst_match.m"
        check_hlds__inst_match__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_14, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 584 "inst_match.m"
        check_hlds__inst_match__succeeded = ((MR_tag((MR_Word) check_hlds__inst_match__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 584 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 584 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Sub_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_28_28, (MR_Integer) 0)));
#line 579 "inst_match.m"
      }
#line 579 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 579 "inst_match.m"
  }
#line 96 "inst_match.m"
}

#line 91 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_no_implied_modes_4_p_0(
#line 91 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 91 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 91 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 91 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 91 "inst_match.m"
{
#line 574 "inst_match.m"
  {
#line 574 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 574 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_9;
#line 574 "inst_match.m"
    MR_Word check_hlds__inst_match__V_15_15;
#line 574 "inst_match.m"
    MR_Word check_hlds__inst_match__V_21_21;
#line 576 "inst_match.m"
    MR_Word check_hlds__inst_match__V_10_10;

#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_21_21 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 1) = ((MR_Box) (check_hlds__inst_match__V_21_21));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_9, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 576 "inst_match.m"
    {
#line 576 "inst_match.m"
      check_hlds__inst_match__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 576 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_15_15, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 576 "inst_match.m"
    }
#line 576 "inst_match.m"
    {
#line 576 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_final_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_15_15, check_hlds__inst_match__Info0_9, &check_hlds__inst_match__V_10_10);
    }
#line 574 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 574 "inst_match.m"
  }
#line 91 "inst_match.m"
}

#line 83 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_sub_7_p_0(
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_8,
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_9,
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_10,
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_14,
#line 83 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_15,
#line 83 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Sub_0_16,
#line 83 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Sub_17)
#line 83 "inst_match.m"
{
#line 564 "inst_match.m"
  {
#line 564 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 564 "inst_match.m"
    MR_Word check_hlds__inst_match__MaybeSub_13;
#line 564 "inst_match.m"
    MR_Word check_hlds__inst_match__V_19_19;
#line 564 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_33;
#line 564 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_34;
#line 564 "inst_match.m"
    MR_Word check_hlds__inst_match__V_38_38;
#line 564 "inst_match.m"
    MR_Word check_hlds__inst_match__V_56_56;
#line 594 "inst_match.m"
    MR_Word check_hlds__inst_match__V_41_41;
#line 594 "inst_match.m"
    MR_Word check_hlds__inst_match__V_43_43;
#line 594 "inst_match.m"
    MR_Word check_hlds__inst_match__V_44_44;
#line 594 "inst_match.m"
    MR_Word check_hlds__inst_match__V_45_45;

#line 565 "inst_match.m"
    {
#line 565 "inst_match.m"
      check_hlds__inst_match__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_19_19, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_Sub_0_16));
#line 565 "inst_match.m"
    }
#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_56_56 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 0) = ((MR_Box) (check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_0_14));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 1) = ((MR_Box) (check_hlds__inst_match__V_56_56));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 2) = ((MR_Box) (check_hlds__inst_match__V_19_19));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_33, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 593 "inst_match.m"
    {
#line 593 "inst_match.m"
      check_hlds__inst_match__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_38_38, 0) = ((MR_Box) (check_hlds__inst_match__Type_10));
#line 593 "inst_match.m"
    }
#line 593 "inst_match.m"
    {
#line 593 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_8, check_hlds__inst_match__InstB_9, check_hlds__inst_match__V_38_38, check_hlds__inst_match__Info0_33, &check_hlds__inst_match__Info_34);
    }
#line 564 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 564 "inst_match.m"
      {
#line 594 "inst_match.m"
        *check_hlds__inst_match__STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 0)));
#line 594 "inst_match.m"
        check_hlds__inst_match__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 1)));
#line 594 "inst_match.m"
        check_hlds__inst_match__MaybeSub_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 2)));
#line 594 "inst_match.m"
        check_hlds__inst_match__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 594 "inst_match.m"
        check_hlds__inst_match__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 594 "inst_match.m"
        check_hlds__inst_match__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info_34, (MR_Integer) 3)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 569 "inst_match.m"
        if ((check_hlds__inst_match__MaybeSub_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "inst_match.m"
          {
#line 571 "inst_match.m"
            {
#line 571 "inst_match.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_match", (MR_String) "predicate \140check_hlds.inst_match.inst_matches_initial_sub\'/7", (MR_String) "missing inst_var_sub");
            }
#line 570 "inst_match.m"
          }
#line 569 "inst_match.m"
        else
#line 568 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Sub_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_match__MaybeSub_13, (MR_Integer) 0)));
#line 569 "inst_match.m"
        check_hlds__inst_match__succeeded = MR_TRUE;
#line 564 "inst_match.m"
      }
#line 564 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 564 "inst_match.m"
  }
#line 83 "inst_match.m"
}

#line 76 "inst_match.m"
MR_bool MR_CALL 
check_hlds__inst_match__inst_matches_initial_4_p_0(
#line 76 "inst_match.m"
  MR_Word check_hlds__inst_match__InstA_5,
#line 76 "inst_match.m"
  MR_Word check_hlds__inst_match__InstB_6,
#line 76 "inst_match.m"
  MR_Word check_hlds__inst_match__Type_7,
#line 76 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_8)
#line 76 "inst_match.m"
{
#line 561 "inst_match.m"
  {
#line 561 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded;
#line 561 "inst_match.m"
    MR_Word check_hlds__inst_match__Info0_21;
#line 561 "inst_match.m"
    MR_Word check_hlds__inst_match__V_26_26;
#line 561 "inst_match.m"
    MR_Word check_hlds__inst_match__V_44_44;
#line 593 "inst_match.m"
    MR_Word check_hlds__inst_match__Info_22;

#line 360 "inst_match.m"
    {
#line 360 "inst_match.m"
      check_hlds__inst_match__V_44_44 = mercury__set_tree234__init_0_f_0((MR_Word) &check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
    }
#line 434 "inst_match.m"
    {
#line 434 "inst_match.m"
      check_hlds__inst_match__Info0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 0) = ((MR_Box) (check_hlds__inst_match__ModuleInfo_8));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 1) = ((MR_Box) (check_hlds__inst_match__V_44_44));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "inst_match.m"
      MR_hl_field(MR_mktag(0), check_hlds__inst_match__Info0_21, 3) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 434 "inst_match.m"
    }
#line 593 "inst_match.m"
    {
#line 593 "inst_match.m"
      check_hlds__inst_match__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "inst_match.m"
      MR_hl_field(MR_mktag(1), check_hlds__inst_match__V_26_26, 0) = ((MR_Box) (check_hlds__inst_match__Type_7));
#line 593 "inst_match.m"
    }
#line 593 "inst_match.m"
    {
#line 593 "inst_match.m"
      check_hlds__inst_match__succeeded = check_hlds__inst_match__inst_matches_initial_mt_5_p_0(check_hlds__inst_match__InstA_5, check_hlds__inst_match__InstB_6, check_hlds__inst_match__V_26_26, check_hlds__inst_match__Info0_21, &check_hlds__inst_match__Info_22);
    }
#line 561 "inst_match.m"
    return check_hlds__inst_match__succeeded;
#line 561 "inst_match.m"
  }
#line 76 "inst_match.m"
}

#line 61 "inst_match.m"
void MR_CALL 
check_hlds__inst_match__inst_expand_and_remove_constrained_inst_vars_3_p_0(
#line 61 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4,
#line 61 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Inst_0_8,
#line 61 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Inst_9)
#line 61 "inst_match.m"
{
#line 383 "inst_match.m"
  {
#line 383 "inst_match.m"
    MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__STATE_VARIABLE_Inst_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 383 "inst_match.m"
    MR_Word check_hlds__inst_match__InstName_6;

#line 380 "inst_match.m"
    if (check_hlds__inst_match__succeeded)
#line 380 "inst_match.m"
      {
#line 380 "inst_match.m"
        check_hlds__inst_match__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__STATE_VARIABLE_Inst_0_8, (MR_Integer) 1)));
#line 381 "inst_match.m"
        {
#line 381 "inst_match.m"
          MR_Word check_hlds__inst_match__STATE_VARIABLE_Inst_10_10;

#line 381 "inst_match.m"
          {
#line 381 "inst_match.m"
            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_4, check_hlds__inst_match__InstName_6, &check_hlds__inst_match__STATE_VARIABLE_Inst_10_10);
          }
#line 382 "inst_match.m"
          {
#line 382 "inst_match.m"
            check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_match__ModuleInfo_4, check_hlds__inst_match__STATE_VARIABLE_Inst_10_10, check_hlds__inst_match__STATE_VARIABLE_Inst_9);
#line 382 "inst_match.m"
            return;
          }
#line 381 "inst_match.m"
        }
#line 380 "inst_match.m"
      }
#line 380 "inst_match.m"
    else
#line 385 "inst_match.m"
      {
#line 385 "inst_match.m"
        MR_Word check_hlds__inst_match__STATE_VARIABLE_Inst_12_12;
#line 383 "inst_match.m"
        MR_Word check_hlds__inst_match__V_7_7;

#line 383 "inst_match.m"
        check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__STATE_VARIABLE_Inst_0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__STATE_VARIABLE_Inst_0_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 383 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 383 "inst_match.m"
          {
#line 383 "inst_match.m"
            check_hlds__inst_match__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__STATE_VARIABLE_Inst_0_8, (MR_Integer) 1)));
#line 383 "inst_match.m"
            check_hlds__inst_match__STATE_VARIABLE_Inst_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__STATE_VARIABLE_Inst_0_8, (MR_Integer) 2)));
#line 384 "inst_match.m"
            {
#line 384 "inst_match.m"
              check_hlds__inst_match__inst_expand_3_p_0(check_hlds__inst_match__ModuleInfo_4, check_hlds__inst_match__STATE_VARIABLE_Inst_12_12, check_hlds__inst_match__STATE_VARIABLE_Inst_9);
#line 384 "inst_match.m"
              return;
            }
#line 383 "inst_match.m"
          }
#line 383 "inst_match.m"
        else
#line 384 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Inst_9 = check_hlds__inst_match__STATE_VARIABLE_Inst_0_8;
#line 385 "inst_match.m"
      }
#line 383 "inst_match.m"
  }
#line 61 "inst_match.m"
}

#line 55 "inst_match.m"
void MR_CALL 
check_hlds__inst_match__inst_expand_3_p_0(
#line 55 "inst_match.m"
  MR_Word check_hlds__inst_match__ModuleInfo_4,
#line 55 "inst_match.m"
  MR_Word check_hlds__inst_match__STATE_VARIABLE_Inst_0_7,
#line 55 "inst_match.m"
  MR_Word * check_hlds__inst_match__STATE_VARIABLE_Inst_8)
#line 55 "inst_match.m"
{
#line 375 "inst_match.m"
  while (MR_TRUE)
#line 375 "inst_match.m"
    {
#line 375 "inst_match.m"
      /* tailcall optimized into a loop */
#line 375 "inst_match.m"
      {
#line 375 "inst_match.m"
        MR_bool check_hlds__inst_match__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_match__STATE_VARIABLE_Inst_0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__STATE_VARIABLE_Inst_0_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 375 "inst_match.m"
        MR_Word check_hlds__inst_match__InstName_6;

#line 372 "inst_match.m"
        if (check_hlds__inst_match__succeeded)
#line 372 "inst_match.m"
          {
#line 372 "inst_match.m"
            check_hlds__inst_match__InstName_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_match__STATE_VARIABLE_Inst_0_7, (MR_Integer) 1)));
#line 373 "inst_match.m"
            {
#line 373 "inst_match.m"
              MR_Word check_hlds__inst_match__STATE_VARIABLE_Inst_9_9;

#line 373 "inst_match.m"
              {
#line 373 "inst_match.m"
                check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_match__ModuleInfo_4, check_hlds__inst_match__InstName_6, &check_hlds__inst_match__STATE_VARIABLE_Inst_9_9);
              }
#line 374 "inst_match.m"
              /* direct tailcall eliminated */
#line 374 "inst_match.m"
              {
#line 374 "inst_match.m"
                MR_Word check_hlds__inst_match__STATE_VARIABLE_Inst_0__tmp_copy_7 = check_hlds__inst_match__STATE_VARIABLE_Inst_9_9;

#line 374 "inst_match.m"
                check_hlds__inst_match__STATE_VARIABLE_Inst_0_7 = check_hlds__inst_match__STATE_VARIABLE_Inst_0__tmp_copy_7;
#line 374 "inst_match.m"
              }
#line 374 "inst_match.m"
              continue;
#line 373 "inst_match.m"
            }
#line 372 "inst_match.m"
          }
#line 372 "inst_match.m"
        else
#line 374 "inst_match.m"
          *check_hlds__inst_match__STATE_VARIABLE_Inst_8 = check_hlds__inst_match__STATE_VARIABLE_Inst_0_7;
#line 375 "inst_match.m"
      }
#line 375 "inst_match.m"
      break;
#line 375 "inst_match.m"
    }
#line 55 "inst_match.m"
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
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_info_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_match_inputs_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_matches_pred_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_inst_names_0);
	MR_register_type_ctor_info(&check_hlds__inst_match__check_hlds__inst_match__type_ctor_info_uniqueness_comparison_0);
}

void mercury__check_hlds__inst_match__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_match. */
