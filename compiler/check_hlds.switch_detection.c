/*
** Automatically generated from `switch_detection.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module check_hlds.switch_detection. */
/* :- implementation. */

/*
INIT mercury__check_hlds__switch_detection__init
ENDINIT
*/

#include "check_hlds.switch_detection.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.passes_aux.mih"
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




#line 147 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 150 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

#line 153 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0;

#line 156 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 159 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 162 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 165 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 171 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

#line 174 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_again_0_0[3];

#line 177 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_again_0_0;

#line 180 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_again_0_0[1];

#line 183 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_again_0[1];

#line 186 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_again_0[1];

#line 189 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_again_0[1];

#line 192 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0;

#line 195 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1;

#line 198 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0[2];

#line 201 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0[2];

#line 204 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0[2];

#line 207 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2];

#line 210 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0;

#line 213 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 216 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3];

#line 219 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1;

#line 222 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1];

#line 225 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1];

#line 228 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0[2];

#line 231 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0[2];

#line 234 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0[2];

#line 237 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;

#line 240 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 243 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2];

#line 246 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2];

#line 249 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0;

#line 252 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1];

#line 255 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1];

#line 258 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0[1];

#line 261 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0[1];

#line 264 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0;

#line 267 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2];

#line 270 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2];

#line 273 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0;

#line 276 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1];

#line 279 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1];

#line 282 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1];

#line 285 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1];

#line 288 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0;

#line 291 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1;

#line 294 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2;

#line 297 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0[3];

#line 300 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3];

#line 303 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3];

#line 306 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0;

#line 309 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1;

#line 312 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2;

#line 315 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0[3];

#line 318 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0[3];

#line 321 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0[3];

#line 324 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0;

#line 327 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1;

#line 330 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0[2];

#line 333 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0[2];

#line 336 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0[2];

#line 339 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 342 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[4];

#line 345 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[4];

#line 348 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0;

#line 351 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1];

#line 354 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1];

#line 357 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1];

#line 360 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1];

#line 363 "check_hlds.switch_detection.c"
static const MR_VA_PseudoTypeInfo_Struct7 check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2;

#line 366 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0[2];

#line 369 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0[2];

#line 372 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0;

#line 375 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0[1];

#line 378 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0[1];

#line 381 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0[1];

#line 384 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1];

#line 387 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____again_0_0_10001(
#line 390 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 392 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 395 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____again_0_0_10001(
#line 398 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 400 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 402 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 405 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001(
#line 408 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 410 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 413 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001(
#line 416 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 418 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 420 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 423 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
#line 426 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 428 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 431 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
#line 434 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 436 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 438 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 441 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
#line 444 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 446 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 449 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
#line 452 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 454 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 456 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 459 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
#line 462 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 464 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 467 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
#line 470 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 472 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 474 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 477 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
#line 480 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 482 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 485 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
#line 488 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 490 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 492 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 495 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001(
#line 498 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 500 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 503 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001(
#line 506 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 508 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 510 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 513 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001(
#line 516 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 518 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 521 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001(
#line 524 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 526 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 528 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 531 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
#line 534 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 536 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 539 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
#line 542 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 544 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 546 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 549 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0_10001(
#line 552 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 554 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 556 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3,
#line 558 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4);

#line 561 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0_10001(
#line 564 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 566 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 568 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 570 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 572 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_5);

#line 575 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
#line 578 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 580 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2);

#line 583 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
#line 586 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 588 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 590 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3);

#line 1030 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(
#line 1030 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 1030 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_2,
#line 1030 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 1030 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4,
#line 1030 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_0_5,
#line 1030 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Subst_6,
#line 1030 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_7,
#line 1030 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_8,
#line 1030 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_9,
#line 1030 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_10,
#line 1030 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__11_11);

#line 919 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
#line 919 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_12,
#line 919 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_13,
#line 919 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_14,
#line 919 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_15,
#line 919 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87,
#line 919 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Subst_88,
#line 919 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_89,
#line 919 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_90,
#line 919 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_91,
#line 919 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_92,
#line 919 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__FoundDeconstruct_19);

#line 863 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection__SwitchVar_8,
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_9,
#line 863 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goals_10,
#line 863 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Result_12);

#line 1121 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1121__1_3_p_0(
#line 1121 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_20,
#line 1121 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_21,
#line 1121 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_22);

#line 491 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__491__1_2_p_0(
#line 491 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConflictConsIds_9,
#line 491 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_90);

#line 456 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__456__1_2_p_0(
#line 456 "switch_detection.m"
  MR_Word check_hlds__switch_detection__IsMember_18,
#line 456 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_61);

#line 465 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__465__1_2_p_0(
#line 465 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_53,
#line 465 "switch_detection.m"
  MR_Word check_hlds__switch_detection__IsMember_65);

#line 448 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__448__1_2_p_0(
#line 448 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_38,
#line 448 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_94);

#line 227 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
#line 227 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 227 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 227 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 227 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(
#line 227 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 227 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 914 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0(
#line 914 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 914 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 914 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 914 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0(
#line 914 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 914 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 414 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
#line 414 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 414 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 414 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 414 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
#line 414 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 414 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 419 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
#line 419 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 419 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 419 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 419 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
#line 419 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 419 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 425 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
#line 425 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 425 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 425 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 425 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
#line 425 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 425 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 410 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
#line 410 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 410 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 410 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 410 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
#line 410 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 410 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 99 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0(
#line 99 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 99 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 99 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 99 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0(
#line 99 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 99 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 596 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____again_0_0(
#line 596 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 596 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 596 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3);

#line 596 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____again_0_0(
#line 596 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 596 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2);

#line 1136 "switch_detection.m"
static MR_Integer MR_CALL 
check_hlds__switch_detection__count_covered_cons_ids_1_f_0(
#line 1136 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1);

#line 1121 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0_1(
#line 1121 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 1121 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 1121 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 1121 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3);

#line 1114 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0(
#line 1114 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 1114 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2,
#line 1114 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_3);

#line 1056 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__cases_to_switch_6_p_0(
#line 1056 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_7,
#line 1056 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Cases0_8,
#line 1056 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_9,
#line 1056 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__GoalExpr_10,
#line 1056 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25,
#line 1056 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_26);

#line 863 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection__SwitchVar_8,
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_9,
#line 863 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goals_10,
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection___Result0_11,
#line 863 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Result_12);

#line 901 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0_1(
#line 904 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 906 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 908 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 910 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 912 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 914 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5,
#line 916 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_6,
#line 918 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_7);

#line 846 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0(
#line 846 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 846 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 846 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Left_0_3,
#line 846 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Left_4,
#line 846 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5,
#line 846 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_6);

#line 833 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__create_expanded_conjunction_5_p_0(
#line 833 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Unifies_6,
#line 833 "switch_detection.m"
  MR_Word check_hlds__switch_detection__LaterGoals_7,
#line 833 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 833 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjunct_9,
#line 833 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_10);

#line 822 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
#line 822 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 822 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 822 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3);

#line 813 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2(
#line 813 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 813 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 813 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_2);

#line 564 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1(
#line 564 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 564 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 564 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 564 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3);

#line 768 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__AllowMulti_8,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_9,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConjGoals_10,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_12,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_37,
#line 768 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_38);

#line 744 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disjs_5_p_0(
#line 744 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 744 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 744 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 744 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4,
#line 744 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_5);

#line 436 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_2(
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5);

#line 436 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_1(
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5);

#line 710 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0(
#line 710 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjuncts0_8,
#line 710 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_9,
#line 710 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_10,
#line 710 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Left_11,
#line 710 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Cases_12,
#line 710 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21,
#line 710 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22);

#line 678 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__select_best_switch_3_p_0(
#line 678 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 678 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 678 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__BestAgain_3);

#line 605 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_disj_9_p_0(
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_1,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__AllVars_2,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjuncts0_3,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__4_4,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_5,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__AgainList0_6,
#line 605 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__7_7,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8,
#line 605 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);

#line 567 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__add_multi_entry_for_cons_id_4_p_0(
#line 567 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Arm_5,
#line 567 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConsId_6,
#line 567 "switch_detection.m"
  MR_Word check_hlds__switch_detection__CasesTable0_7,
#line 567 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__CasesTable_8);

#line 516 "switch_detection.m"
static MR_Word MR_CALL 
check_hlds__switch_detection__project_single_arm_goal_1_f_0(
#line 516 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1);

#line 511 "switch_detection.m"
static MR_Word MR_CALL 
check_hlds__switch_detection__project_arm_goal_1_f_0(
#line 511 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1);

#line 491 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_6(
#line 491 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 491 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1);

#line 458 "switch_detection.m"
static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_5(
#line 458 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 458 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1);

#line 456 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_4(
#line 456 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg);

#line 467 "switch_detection.m"
static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_3(
#line 467 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 467 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1);

#line 465 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_2(
#line 465 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg);

#line 448 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_1(
#line 448 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg);

#line 440 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0(
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConflictConsIds_9,
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Cases_0_30,
#line 440 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Cases_31,
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_32,
#line 440 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_33);

#line 436 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0_1(
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5);

#line 431 "switch_detection.m"
static MR_Word MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0(
#line 431 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_4,
#line 431 "switch_detection.m"
  MR_Word check_hlds__switch_detection__CasesTable_5);

#line 398 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(
#line 398 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_1,
#line 398 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 398 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 398 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 398 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);

#line 387 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_conj_5_p_0(
#line 387 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_1,
#line 387 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 387 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 387 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 387 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);

#line 369 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_cases_6_p_0(
#line 369 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_1,
#line 369 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_2,
#line 369 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 369 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4,
#line 369 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5,
#line 369 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_6);

#line 359 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(
#line 359 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_1,
#line 359 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 359 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 359 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 359 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);

#line 262 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_expr_6_p_0(
#line 262 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_7,
#line 262 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 262 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalExpr0_9,
#line 262 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__GoalExpr_10,
#line 262 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89,
#line 262 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);

#line 249 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(
#line 249 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_InstMap_0_14,
#line 249 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_InstMap_15,
#line 249 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_8,
#line 249 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_9,
#line 249 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_16,
#line 249 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_17);

#line 238 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_5_p_0(
#line 238 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_6,
#line 238 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Goal_0_10,
#line 238 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Goal_11,
#line 238 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_12,
#line 238 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_13);

#line 186 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_procs_4_p_0(
#line 186 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 186 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 186 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 186 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4);

#line 143 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_4_p_0(
#line 143 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Info_1,
#line 143 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ValidPredIdSet_2,
#line 143 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 143 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4);


static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[2][10];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[4][5];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[1][6];




static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[2])),
    ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[2])),
    ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[1])),
    ((MR_Box) (check_hlds__switch_detection__partition_disj_trial_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__switch_detection_scalar_common_7[0])),
    ((MR_Box) (check_hlds__switch_detection__delete_covered_functors_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_3[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0)),
    ((MR_Box) (&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__switch_detection_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1551 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1559 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__switch_detection__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0
  }
};

#line 1568 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1576 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1584 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1592 "check_hlds.switch_detection.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__switch_detection__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1600 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1608 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 1616 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0
  }
};

#line 1624 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_again_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0
};

#line 1631 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_again_0_0 = {
  (MR_String) "again",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_again_0_0,
  NULL,
  NULL,
  NULL
};

#line 1646 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_again_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_again_0_0
};

#line 1651 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_again_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_again_0_0
  }
};

#line 1660 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_again_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_again_0_0
};

#line 1665 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_again_0[1] = {
  (MR_Integer) 0
};

#line 1670 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_again_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____again_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____again_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "again",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_again_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_again_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_again_0
};

#line 1687 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0 = {
  (MR_String) "allow_multi_arm",
  (MR_Integer) 0
};

#line 1693 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1 = {
  (MR_String) "dont_allow_multi_arm",
  (MR_Integer) 1
};

#line 1699 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1
};

#line 1705 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_allow_multi_arm_0_1
};

#line 1711 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1717 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "allow_multi_arm",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_allow_multi_arm_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_allow_multi_arm_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_allow_multi_arm_0
};

#line 1734 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1740 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0 = {
  (MR_String) "single_cons_id_arm",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_0,
  NULL,
  NULL,
  NULL
};

#line 1755 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1763 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1[3] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 1770 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1 = {
  (MR_String) "multi_cons_id_arm",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_case_arm_0_1,
  NULL,
  NULL,
  NULL
};

#line 1785 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

#line 1790 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1
};

#line 1795 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_case_arm_0_1
  }
};

#line 1809 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_case_arm_0_0
};

#line 1815 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1821 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____case_arm_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____case_arm_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "case_arm",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_case_arm_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_case_arm_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_case_arm_0
};

#line 1838 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0
  }
};

#line 1847 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1855 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0check_hlds__switch_detection__type_ctor_info_cons_id_entry_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 1861 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0[2] = {
  (MR_String) "cases_map",
  (MR_String) "conflict_cons_ids"
};

#line 1867 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0 = {
  (MR_String) "cases_table",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_cases_table_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_cases_table_0_0,
  NULL,
  NULL
};

#line 1882 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0
};

#line 1887 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cases_table_0_0
  }
};

#line 1896 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cases_table_0_0
};

#line 1901 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0[1] = {
  (MR_Integer) 0
};

#line 1906 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cases_table_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cases_table_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cases_table",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cases_table_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cases_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cases_table_0
};

#line 1923 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0
  }
};

#line 1931 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__cord__ti_cord_1check_hlds__switch_detection__type_ctor_info_case_arm_0
};

#line 1937 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0[2] = {
  (MR_String) "cons_id_state",
  (MR_String) "cons_id_arms"
};

#line 1943 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0 = {
  (MR_String) "cons_id_entry",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_cons_id_entry_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_cons_id_entry_0_0,
  NULL,
  NULL
};

#line 1958 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0
};

#line 1963 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_cons_id_entry_0_0
  }
};

#line 1972 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_cons_id_entry_0_0
};

#line 1977 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0[1] = {
  (MR_Integer) 0
};

#line 1982 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_entry",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_cons_id_entry_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_cons_id_entry_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_entry_0
};

#line 1999 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0 = {
  (MR_String) "cons_id_has_all_singles",
  (MR_Integer) 0
};

#line 2005 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1 = {
  (MR_String) "cons_id_has_one_multi",
  (MR_Integer) 1
};

#line 2011 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2 = {
  (MR_String) "cons_id_has_conflict",
  (MR_Integer) 2
};

#line 2017 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2
};

#line 2024 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_2,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_cons_id_state_0_1
};

#line 2031 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2038 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____cons_id_state_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____cons_id_state_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "cons_id_state",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_cons_id_state_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_cons_id_state_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_cons_id_state_0
};

#line 2055 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0 = {
  (MR_String) "before_deconstruct",
  (MR_Integer) 0
};

#line 2061 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1 = {
  (MR_String) "found_deconstruct",
  (MR_Integer) 1
};

#line 2067 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2 = {
  (MR_String) "given_up_search",
  (MR_Integer) 2
};

#line 2073 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2
};

#line 2080 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0[3] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_1,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_deconstruct_search_0_2
};

#line 2087 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2094 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_deconstruct_search_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "deconstruct_search",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_deconstruct_search_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_deconstruct_search_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_deconstruct_search_0
};

#line 2111 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0 = {
  (MR_String) "did_find_deconstruct",
  (MR_Integer) 0
};

#line 2117 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1 = {
  (MR_String) "did_not_find_deconstruct",
  (MR_Integer) 1
};

#line 2123 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1
};

#line 2129 "check_hlds.switch_detection.c"
static const MR_EnumFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0[2] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_0,
  &check_hlds__switch_detection__check_hlds__switch_detection__enum_functor_desc_found_deconstruct_0_1
};

#line 2135 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2141 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_found_deconstruct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "found_deconstruct",
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_name_ordered_found_deconstruct_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__enum_value_ordered_found_deconstruct_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_found_deconstruct_0
};

#line 2158 "check_hlds.switch_detection.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2167 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0
};

#line 2175 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0[4] = {
  (MR_String) "lsdi_module_info",
  (MR_String) "lsdi_allow_multi_arm",
  (MR_String) "lsdi_vartypes",
  (MR_String) "lsdi_requant"
};

#line 2183 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0 = {
  (MR_String) "local_switch_detect_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_local_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_local_switch_detect_info_0_0,
  NULL,
  NULL
};

#line 2198 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0
};

#line 2203 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_local_switch_detect_info_0_0
  }
};

#line 2212 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_local_switch_detect_info_0_0
};

#line 2217 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0[1] = {
  (MR_Integer) 0
};

#line 2222 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "local_switch_detect_info",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_local_switch_detect_info_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_local_switch_detect_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_local_switch_detect_info_0
};

#line 2239 "check_hlds.switch_detection.c"
static const MR_VA_PseudoTypeInfo_Struct7 check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 7,
  {
    (MR_PseudoTypeInfo) &check_hlds__switch_detection__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &check_hlds__switch_detection__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2254 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_process_unify_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (check_hlds__switch_detection____Unify____process_unify_2_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____process_unify_2_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "process_unify",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__switch_detection____vpti_pred_7__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0__pseudo_1__pseudo_1__pseudo_2__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2271 "check_hlds.switch_detection.c"
static const MR_PseudoTypeInfo check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0
};

#line 2277 "check_hlds.switch_detection.c"
static const MR_ConstString check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0[2] = {
  (MR_String) "sdi_module_info",
  (MR_String) "sdi_allow_multi_arm"
};

#line 2283 "check_hlds.switch_detection.c"
static const MR_DuFunctorDesc check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0 = {
  (MR_String) "switch_detect_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_types_switch_detect_info_0_0,
  check_hlds__switch_detection__check_hlds__switch_detection__field_names_switch_detect_info_0_0,
  NULL,
  NULL
};

#line 2298 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0
};

#line 2303 "check_hlds.switch_detection.c"
static const MR_DuPtagLayout check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__switch_detection__check_hlds__switch_detection__du_stag_ordered_switch_detect_info_0_0
  }
};

#line 2312 "check_hlds.switch_detection.c"
static const MR_DuFunctorDescPtr check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0[1] = {
  &check_hlds__switch_detection__check_hlds__switch_detection__du_functor_desc_switch_detect_info_0_0
};

#line 2317 "check_hlds.switch_detection.c"
static const MR_Integer check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0[1] = {
  (MR_Integer) 0
};

#line 2322 "check_hlds.switch_detection.c"
const MR_TypeCtorInfo_Struct check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_switch_detect_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001)),
  ((MR_Box) (check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001)),
  (MR_String) "check_hlds.switch_detection",
  (MR_String) "switch_detect_info",
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_name_ordered_switch_detect_info_0 },
  {     check_hlds__switch_detection__check_hlds__switch_detection__du_ptag_ordered_switch_detect_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__switch_detection__check_hlds__switch_detection__functor_number_map_switch_detect_info_0
};

#line 2339 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____again_0_0_10001(
#line 2342 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2344 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2346 "check_hlds.switch_detection.c"
{
#line 2348 "check_hlds.switch_detection.c"
  {
#line 2350 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2353 "check_hlds.switch_detection.c"
    {
#line 2355 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____again_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2358 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2360 "check_hlds.switch_detection.c"
  }
#line 2362 "check_hlds.switch_detection.c"
}

#line 2365 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____again_0_0_10001(
#line 2368 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2370 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2372 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2374 "check_hlds.switch_detection.c"
{
#line 2376 "check_hlds.switch_detection.c"
  {
#line 2378 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2381 "check_hlds.switch_detection.c"
    {
#line 2383 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____again_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2386 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2388 "check_hlds.switch_detection.c"
  }
#line 2390 "check_hlds.switch_detection.c"
}

#line 2393 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0_10001(
#line 2396 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2398 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2400 "check_hlds.switch_detection.c"
{
#line 2402 "check_hlds.switch_detection.c"
  {
#line 2404 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2407 "check_hlds.switch_detection.c"
    {
#line 2409 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____allow_multi_arm_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2412 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2414 "check_hlds.switch_detection.c"
  }
#line 2416 "check_hlds.switch_detection.c"
}

#line 2419 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0_10001(
#line 2422 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2424 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2426 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2428 "check_hlds.switch_detection.c"
{
#line 2430 "check_hlds.switch_detection.c"
  {
#line 2432 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2435 "check_hlds.switch_detection.c"
    {
#line 2437 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____allow_multi_arm_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2440 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2442 "check_hlds.switch_detection.c"
  }
#line 2444 "check_hlds.switch_detection.c"
}

#line 2447 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0_10001(
#line 2450 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2452 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2454 "check_hlds.switch_detection.c"
{
#line 2456 "check_hlds.switch_detection.c"
  {
#line 2458 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2461 "check_hlds.switch_detection.c"
    {
#line 2463 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____case_arm_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2466 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2468 "check_hlds.switch_detection.c"
  }
#line 2470 "check_hlds.switch_detection.c"
}

#line 2473 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0_10001(
#line 2476 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2478 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2480 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2482 "check_hlds.switch_detection.c"
{
#line 2484 "check_hlds.switch_detection.c"
  {
#line 2486 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2489 "check_hlds.switch_detection.c"
    {
#line 2491 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____case_arm_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2494 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2496 "check_hlds.switch_detection.c"
  }
#line 2498 "check_hlds.switch_detection.c"
}

#line 2501 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0_10001(
#line 2504 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2506 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2508 "check_hlds.switch_detection.c"
{
#line 2510 "check_hlds.switch_detection.c"
  {
#line 2512 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2515 "check_hlds.switch_detection.c"
    {
#line 2517 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____cases_table_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2520 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2522 "check_hlds.switch_detection.c"
  }
#line 2524 "check_hlds.switch_detection.c"
}

#line 2527 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0_10001(
#line 2530 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2532 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2534 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2536 "check_hlds.switch_detection.c"
{
#line 2538 "check_hlds.switch_detection.c"
  {
#line 2540 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2543 "check_hlds.switch_detection.c"
    {
#line 2545 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____cases_table_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2548 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2550 "check_hlds.switch_detection.c"
  }
#line 2552 "check_hlds.switch_detection.c"
}

#line 2555 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0_10001(
#line 2558 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2560 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2562 "check_hlds.switch_detection.c"
{
#line 2564 "check_hlds.switch_detection.c"
  {
#line 2566 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2569 "check_hlds.switch_detection.c"
    {
#line 2571 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____cons_id_entry_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2574 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2576 "check_hlds.switch_detection.c"
  }
#line 2578 "check_hlds.switch_detection.c"
}

#line 2581 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0_10001(
#line 2584 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2586 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2588 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2590 "check_hlds.switch_detection.c"
{
#line 2592 "check_hlds.switch_detection.c"
  {
#line 2594 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2597 "check_hlds.switch_detection.c"
    {
#line 2599 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____cons_id_entry_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2602 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2604 "check_hlds.switch_detection.c"
  }
#line 2606 "check_hlds.switch_detection.c"
}

#line 2609 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0_10001(
#line 2612 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2614 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2616 "check_hlds.switch_detection.c"
{
#line 2618 "check_hlds.switch_detection.c"
  {
#line 2620 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2623 "check_hlds.switch_detection.c"
    {
#line 2625 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____cons_id_state_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2628 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2630 "check_hlds.switch_detection.c"
  }
#line 2632 "check_hlds.switch_detection.c"
}

#line 2635 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0_10001(
#line 2638 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2640 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2642 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2644 "check_hlds.switch_detection.c"
{
#line 2646 "check_hlds.switch_detection.c"
  {
#line 2648 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2651 "check_hlds.switch_detection.c"
    {
#line 2653 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____cons_id_state_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2656 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2658 "check_hlds.switch_detection.c"
  }
#line 2660 "check_hlds.switch_detection.c"
}

#line 2663 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0_10001(
#line 2666 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2668 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2670 "check_hlds.switch_detection.c"
{
#line 2672 "check_hlds.switch_detection.c"
  {
#line 2674 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2677 "check_hlds.switch_detection.c"
    {
#line 2679 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____deconstruct_search_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2682 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2684 "check_hlds.switch_detection.c"
  }
#line 2686 "check_hlds.switch_detection.c"
}

#line 2689 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0_10001(
#line 2692 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2694 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2696 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2698 "check_hlds.switch_detection.c"
{
#line 2700 "check_hlds.switch_detection.c"
  {
#line 2702 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2705 "check_hlds.switch_detection.c"
    {
#line 2707 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____deconstruct_search_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2710 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2712 "check_hlds.switch_detection.c"
  }
#line 2714 "check_hlds.switch_detection.c"
}

#line 2717 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0_10001(
#line 2720 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2722 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2724 "check_hlds.switch_detection.c"
{
#line 2726 "check_hlds.switch_detection.c"
  {
#line 2728 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2731 "check_hlds.switch_detection.c"
    {
#line 2733 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____found_deconstruct_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2736 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2738 "check_hlds.switch_detection.c"
  }
#line 2740 "check_hlds.switch_detection.c"
}

#line 2743 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0_10001(
#line 2746 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2748 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2750 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2752 "check_hlds.switch_detection.c"
{
#line 2754 "check_hlds.switch_detection.c"
  {
#line 2756 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2759 "check_hlds.switch_detection.c"
    {
#line 2761 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____found_deconstruct_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2764 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2766 "check_hlds.switch_detection.c"
  }
#line 2768 "check_hlds.switch_detection.c"
}

#line 2771 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0_10001(
#line 2774 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2776 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2778 "check_hlds.switch_detection.c"
{
#line 2780 "check_hlds.switch_detection.c"
  {
#line 2782 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2785 "check_hlds.switch_detection.c"
    {
#line 2787 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2790 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2792 "check_hlds.switch_detection.c"
  }
#line 2794 "check_hlds.switch_detection.c"
}

#line 2797 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0_10001(
#line 2800 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2802 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2804 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2806 "check_hlds.switch_detection.c"
{
#line 2808 "check_hlds.switch_detection.c"
  {
#line 2810 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2813 "check_hlds.switch_detection.c"
    {
#line 2815 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2818 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2820 "check_hlds.switch_detection.c"
  }
#line 2822 "check_hlds.switch_detection.c"
}

#line 2825 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0_10001(
#line 2828 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2830 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2832 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3,
#line 2834 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4)
#line 2836 "check_hlds.switch_detection.c"
{
#line 2838 "check_hlds.switch_detection.c"
  {
#line 2840 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2843 "check_hlds.switch_detection.c"
    {
#line 2845 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____process_unify_2_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3), ((MR_Word) check_hlds__switch_detection__wrapper_arg_4));
    }
#line 2848 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2850 "check_hlds.switch_detection.c"
  }
#line 2852 "check_hlds.switch_detection.c"
}

#line 2855 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0_10001(
#line 2858 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2860 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2862 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 2864 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 2866 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_5)
#line 2868 "check_hlds.switch_detection.c"
{
#line 2870 "check_hlds.switch_detection.c"
  {
#line 2872 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2875 "check_hlds.switch_detection.c"
    {
#line 2877 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____process_unify_2_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), ((MR_Word) check_hlds__switch_detection__wrapper_arg_5));
    }
#line 2880 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2882 "check_hlds.switch_detection.c"
  }
#line 2884 "check_hlds.switch_detection.c"
}

#line 2887 "check_hlds.switch_detection.c"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0_10001(
#line 2890 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 2892 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2)
#line 2894 "check_hlds.switch_detection.c"
{
#line 2896 "check_hlds.switch_detection.c"
  {
#line 2898 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded;

#line 2901 "check_hlds.switch_detection.c"
    {
#line 2903 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__succeeded = check_hlds__switch_detection____Unify____switch_detect_info_0_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2));
    }
#line 2906 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 2908 "check_hlds.switch_detection.c"
  }
#line 2910 "check_hlds.switch_detection.c"
}

#line 2913 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0_10001(
#line 2916 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_1,
#line 2918 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 2920 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_3)
#line 2922 "check_hlds.switch_detection.c"
{
#line 2924 "check_hlds.switch_detection.c"
  {
#line 2926 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__1_1;

#line 2929 "check_hlds.switch_detection.c"
    {
#line 2931 "check_hlds.switch_detection.c"
      check_hlds__switch_detection____Compare____switch_detect_info_0_0(&check_hlds__switch_detection__conv0_HeadVar__1_1, ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), ((MR_Word) check_hlds__switch_detection__wrapper_arg_3));
    }
#line 2934 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_1 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__1_1));
#line 2936 "check_hlds.switch_detection.c"
  }
#line 2938 "check_hlds.switch_detection.c"
}

#line 1030 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(
#line 1030 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 1030 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_2,
#line 1030 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 1030 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4,
#line 1030 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_0_5,
#line 1030 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Subst_6,
#line 1030 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_7,
#line 1030 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_8,
#line 1030 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_9,
#line 1030 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_10,
#line 1030 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__11_11)
#line 1030 "switch_detection.m"
{
#line 1036 "switch_detection.m"
  {
#line 1036 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 1036 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1036 "switch_detection.m"
      {
#line 1036 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1037 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__11_11 = (MR_Integer) 0;
#line 1036 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_Info_10 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_9;
#line 1036 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_Result_8 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_7;
#line 1036 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_Subst_6 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_5;
#line 1036 "switch_detection.m"
      }
#line 1036 "switch_detection.m"
    else
#line 1039 "switch_detection.m"
      {
#line 1039 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 1039 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 1039 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_27;
#line 1039 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_28;
#line 1039 "switch_detection.m"
        MR_Word check_hlds__switch_detection__FoundDeconstruct1_33;
#line 1039 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_40_40;
#line 1039 "switch_detection.m"
        MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_41_41;
#line 1039 "switch_detection.m"
        MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_42_42;

#line 1040 "switch_detection.m"
        {
#line 1040 "switch_detection.m"
          check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__ProcessUnify_2, check_hlds__switch_detection__Goal0_25, &check_hlds__switch_detection__Goal_27, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_5, &check_hlds__switch_detection__STATE_VARIABLE_Subst_40_40, check_hlds__switch_detection__STATE_VARIABLE_Result_0_7, &check_hlds__switch_detection__STATE_VARIABLE_Result_41_41, check_hlds__switch_detection__STATE_VARIABLE_Info_0_9, &check_hlds__switch_detection__STATE_VARIABLE_Info_42_42, &check_hlds__switch_detection__FoundDeconstruct1_33);
        }
#line 1046 "switch_detection.m"
#line 1046 "switch_detection.m"
        switch (check_hlds__switch_detection__FoundDeconstruct1_33) {
#line 1046 "switch_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1046 "switch_detection.m"
          case (MR_Integer) 0:
#line 1044 "switch_detection.m"
            {
#line 1044 "switch_detection.m"
              check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__ProcessUnify_2, check_hlds__switch_detection__Goals0_26, &check_hlds__switch_detection__Goals_28, check_hlds__switch_detection__STATE_VARIABLE_Subst_40_40, check_hlds__switch_detection__STATE_VARIABLE_Subst_6, check_hlds__switch_detection__STATE_VARIABLE_Result_41_41, check_hlds__switch_detection__STATE_VARIABLE_Result_8, check_hlds__switch_detection__STATE_VARIABLE_Info_42_42, check_hlds__switch_detection__STATE_VARIABLE_Info_10, check_hlds__switch_detection__HeadVar__11_11);
            }
#line 1046 "switch_detection.m"
            break;
#line 1046 "switch_detection.m"
          case (MR_Integer) 1:
#line 1046 "switch_detection.m"
          case (MR_Integer) 2:
#line 1049 "switch_detection.m"
            {
#line 1050 "switch_detection.m"
              *check_hlds__switch_detection__HeadVar__11_11 = check_hlds__switch_detection__FoundDeconstruct1_33;
#line 1051 "switch_detection.m"
              check_hlds__switch_detection__Goals_28 = check_hlds__switch_detection__Goals0_26;
#line 1049 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_6 = check_hlds__switch_detection__STATE_VARIABLE_Subst_40_40;
#line 1049 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Result_8 = check_hlds__switch_detection__STATE_VARIABLE_Result_41_41;
#line 1049 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Info_10 = check_hlds__switch_detection__STATE_VARIABLE_Info_42_42;
#line 1049 "switch_detection.m"
            }
#line 1046 "switch_detection.m"
            break;
#line 1046 "switch_detection.m"
        }
#line 1038 "switch_detection.m"
        {
#line 1038 "switch_detection.m"
          MR_Word base;
#line 1038 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__4_4 = base;
#line 1038 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_27));
#line 1038 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Goals_28));
#line 1038 "switch_detection.m"
        }
#line 1039 "switch_detection.m"
      }
#line 1036 "switch_detection.m"
  }
#line 1030 "switch_detection.m"
}

#line 919 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(
#line 919 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_12,
#line 919 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_13,
#line 919 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_14,
#line 919 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_15,
#line 919 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87,
#line 919 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Subst_88,
#line 919 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_89,
#line 919 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_90,
#line 919 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_91,
#line 919 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_92,
#line 919 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__FoundDeconstruct_19)
#line 919 "switch_detection.m"
{
#line 926 "switch_detection.m"
  {
#line 926 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 926 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_14, (MR_Integer) 0)));
#line 926 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_14, (MR_Integer) 1)));

#line 952 "switch_detection.m"
#line 952 "switch_detection.m"
    switch (MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_20)) {
#line 952 "switch_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 952 "switch_detection.m"
      case (MR_Integer) 0:
#line 1007 "switch_detection.m"
        {
#line 1008 "switch_detection.m"
          *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 1009 "switch_detection.m"
          {
#line 1009 "switch_detection.m"
            check_hlds__switch_detection__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__switch_detection__GoalInfo_21, (MR_Integer) 1);
          }
#line 1011 "switch_detection.m"
          if (check_hlds__switch_detection__succeeded)
#line 1010 "switch_detection.m"
            *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 1011 "switch_detection.m"
          else
#line 1012 "switch_detection.m"
            *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 1007 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 1007 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 1007 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 1007 "switch_detection.m"
        }
#line 952 "switch_detection.m"
        break;
#line 952 "switch_detection.m"
      case (MR_Integer) 1:
#line 972 "switch_detection.m"
        {
#line 972 "switch_detection.m"
          MR_Word check_hlds__switch_detection__LHS_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 0)));
#line 972 "switch_detection.m"
          MR_Word check_hlds__switch_detection__RHS_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 1)));
#line 972 "switch_detection.m"
          MR_Word check_hlds__switch_detection__UnifyInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 3)));
#line 972 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 2)));
#line 972 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 4)));
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__TypeCtorInfo_120_120;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__TypeInfo_125_125;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__UnifyVar_37;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__SubstVar_43;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__SubstUnifyVar_44;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_97_97;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_98_98;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_99_99;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_100_100;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_101_101;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_102_102;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_103_103;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_104_104;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_121_121;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_122_122;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_38_38;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_39_39;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_40_40;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_41_41;
#line 976 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_42_42;

#line 976 "switch_detection.m"
          check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__UnifyInfo0_35)) == (MR_mktag((MR_Integer) 1)));
#line 976 "switch_detection.m"
          if (check_hlds__switch_detection__succeeded)
#line 976 "switch_detection.m"
            {
#line 976 "switch_detection.m"
              check_hlds__switch_detection__UnifyVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 0)));
#line 976 "switch_detection.m"
              check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 1)));
#line 976 "switch_detection.m"
              check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 2)));
#line 976 "switch_detection.m"
              check_hlds__switch_detection__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 3)));
#line 976 "switch_detection.m"
              check_hlds__switch_detection__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 4)));
#line 976 "switch_detection.m"
              check_hlds__switch_detection__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_35, (MR_Integer) 5)));
#line 978 "switch_detection.m"
              {
#line 978 "switch_detection.m"
                check_hlds__switch_detection__V_99_99 = mercury__term__context_init_0_f_0();
              }
#line 978 "switch_detection.m"
              {
#line 978 "switch_detection.m"
                check_hlds__switch_detection__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "switch_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_97_97, 0) = ((MR_Box) (check_hlds__switch_detection__Var_12));
#line 978 "switch_detection.m"
                MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_97_97, 1) = ((MR_Box) (check_hlds__switch_detection__V_99_99));
#line 978 "switch_detection.m"
              }
#line 979 "switch_detection.m"
              {
#line 979 "switch_detection.m"
                check_hlds__switch_detection__V_100_100 = mercury__term__context_init_0_f_0();
              }
#line 3235 "check_hlds.switch_detection.c"
              check_hlds__switch_detection__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 977 "switch_detection.m"
              {
#line 977 "switch_detection.m"
                mercury__term__apply_rec_substitution_in_term_3_p_0(check_hlds__switch_detection__TypeCtorInfo_120_120, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, check_hlds__switch_detection__V_97_97, &check_hlds__switch_detection__V_98_98);
              }
#line 979 "switch_detection.m"
              check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__V_98_98)) == (MR_mktag((MR_Integer) 1)));
#line 979 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 979 "switch_detection.m"
                {
#line 979 "switch_detection.m"
                  check_hlds__switch_detection__SubstVar_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_98_98, (MR_Integer) 0)));
#line 979 "switch_detection.m"
                  check_hlds__switch_detection__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_98_98, (MR_Integer) 1)));
#line 979 "switch_detection.m"
                  {
#line 979 "switch_detection.m"
                    check_hlds__switch_detection__succeeded = mercury__term____Unify____context_0_0(check_hlds__switch_detection__V_100_100, check_hlds__switch_detection__V_121_121);
                  }
#line 976 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 976 "switch_detection.m"
                    {
#line 981 "switch_detection.m"
                      {
#line 981 "switch_detection.m"
                        check_hlds__switch_detection__V_103_103 = mercury__term__context_init_0_f_0();
                      }
#line 981 "switch_detection.m"
                      {
#line 981 "switch_detection.m"
                        check_hlds__switch_detection__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "switch_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_101_101, 0) = ((MR_Box) (check_hlds__switch_detection__UnifyVar_37));
#line 981 "switch_detection.m"
                        MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_101_101, 1) = ((MR_Box) (check_hlds__switch_detection__V_103_103));
#line 981 "switch_detection.m"
                      }
#line 982 "switch_detection.m"
                      {
#line 982 "switch_detection.m"
                        check_hlds__switch_detection__V_104_104 = mercury__term__context_init_0_f_0();
                      }
#line 980 "switch_detection.m"
                      {
#line 980 "switch_detection.m"
                        mercury__term__apply_rec_substitution_in_term_3_p_0(check_hlds__switch_detection__TypeCtorInfo_120_120, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, check_hlds__switch_detection__V_101_101, &check_hlds__switch_detection__V_102_102);
                      }
#line 982 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__V_102_102)) == (MR_mktag((MR_Integer) 1)));
#line 982 "switch_detection.m"
                      if (check_hlds__switch_detection__succeeded)
#line 982 "switch_detection.m"
                        {
#line 982 "switch_detection.m"
                          check_hlds__switch_detection__SubstUnifyVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_102_102, (MR_Integer) 0)));
#line 982 "switch_detection.m"
                          check_hlds__switch_detection__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_102_102, (MR_Integer) 1)));
#line 982 "switch_detection.m"
                          {
#line 982 "switch_detection.m"
                            check_hlds__switch_detection__succeeded = mercury__term____Unify____context_0_0(check_hlds__switch_detection__V_104_104, check_hlds__switch_detection__V_122_122);
                          }
#line 976 "switch_detection.m"
                          if (check_hlds__switch_detection__succeeded)
#line 976 "switch_detection.m"
                            {
#line 3305 "check_hlds.switch_detection.c"
                              check_hlds__switch_detection__TypeInfo_125_125 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
#line 983 "switch_detection.m"
                              {
#line 983 "switch_detection.m"
                                check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_125_125, ((MR_Box) (check_hlds__switch_detection__SubstVar_43)), ((MR_Box) (check_hlds__switch_detection__SubstUnifyVar_44)));
                              }
#line 976 "switch_detection.m"
                            }
#line 982 "switch_detection.m"
                        }
#line 976 "switch_detection.m"
                    }
#line 979 "switch_detection.m"
                }
#line 976 "switch_detection.m"
            }
#line 988 "switch_detection.m"
          if (check_hlds__switch_detection__succeeded)
#line 985 "switch_detection.m"
            {
#line 985 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Goals_45;
#line 985 "switch_detection.m"
              void MR_CALL (* check_hlds__switch_detection__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcessUnify_13, (MR_Integer) 1)));
#line 985 "switch_detection.m"
              MR_Box check_hlds__switch_detection__conv1_Goals_45;

#line 985 "switch_detection.m"
              {
#line 985 "switch_detection.m"
                check_hlds__switch_detection__func_0(((MR_Box) check_hlds__switch_detection__ProcessUnify_13), ((MR_Box) (check_hlds__switch_detection__Var_12)), ((MR_Box) (check_hlds__switch_detection__Goal0_14)), &check_hlds__switch_detection__conv1_Goals_45, check_hlds__switch_detection__STATE_VARIABLE_Result_0_89, check_hlds__switch_detection__STATE_VARIABLE_Result_90, check_hlds__switch_detection__STATE_VARIABLE_Info_0_91, check_hlds__switch_detection__STATE_VARIABLE_Info_92);
              }
#line 985 "switch_detection.m"
              check_hlds__switch_detection__Goals_45 = ((MR_Word) check_hlds__switch_detection__conv1_Goals_45);
#line 986 "switch_detection.m"
              {
#line 986 "switch_detection.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__switch_detection__Goals_45, check_hlds__switch_detection__GoalInfo_21, check_hlds__switch_detection__Goal_15);
              }
#line 987 "switch_detection.m"
              *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 1;
#line 985 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 985 "switch_detection.m"
            }
#line 988 "switch_detection.m"
          else
#line 989 "switch_detection.m"
            {
#line 994 "switch_detection.m"
              MR_Word check_hlds__switch_detection__NewSubst_46;

#line 989 "switch_detection.m"
              *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 990 "switch_detection.m"
              *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 992 "switch_detection.m"
              {
#line 992 "switch_detection.m"
                check_hlds__switch_detection__succeeded = check_hlds__det_util__interpret_unify_4_p_0(check_hlds__switch_detection__LHS_32, check_hlds__switch_detection__RHS_33, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, &check_hlds__switch_detection__NewSubst_46);
              }
#line 994 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 993 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__NewSubst_46;
#line 994 "switch_detection.m"
              else
#line 994 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 989 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 989 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 989 "switch_detection.m"
            }
#line 972 "switch_detection.m"
        }
#line 952 "switch_detection.m"
        break;
#line 952 "switch_detection.m"
      case (MR_Integer) 2:
#line 1007 "switch_detection.m"
        {
#line 1008 "switch_detection.m"
          *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 1009 "switch_detection.m"
          {
#line 1009 "switch_detection.m"
            check_hlds__switch_detection__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__switch_detection__GoalInfo_21, (MR_Integer) 1);
          }
#line 1011 "switch_detection.m"
          if (check_hlds__switch_detection__succeeded)
#line 1010 "switch_detection.m"
            *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 1011 "switch_detection.m"
          else
#line 1012 "switch_detection.m"
            *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 1007 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 1007 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 1007 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 1007 "switch_detection.m"
        }
#line 952 "switch_detection.m"
        break;
#line 952 "switch_detection.m"
      case (MR_Integer) 3:
#line 952 "switch_detection.m"
#line 952 "switch_detection.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 0)))) {
#line 952 "switch_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 952 "switch_detection.m"
          case (MR_Integer) 0:
#line 952 "switch_detection.m"
          case (MR_Integer) 1:
#line 952 "switch_detection.m"
          case (MR_Integer) 3:
#line 952 "switch_detection.m"
          case (MR_Integer) 4:
#line 952 "switch_detection.m"
          case (MR_Integer) 6:
#line 1007 "switch_detection.m"
            {
#line 1008 "switch_detection.m"
              *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 1009 "switch_detection.m"
              {
#line 1009 "switch_detection.m"
                check_hlds__switch_detection__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__switch_detection__GoalInfo_21, (MR_Integer) 1);
              }
#line 1011 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 1010 "switch_detection.m"
                *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 1011 "switch_detection.m"
              else
#line 1012 "switch_detection.m"
                *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 1007 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 1007 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 1007 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 1007 "switch_detection.m"
            }
#line 952 "switch_detection.m"
            break;
#line 952 "switch_detection.m"
          case (MR_Integer) 2:
#line 953 "switch_detection.m"
            {
#line 953 "switch_detection.m"
              MR_Word check_hlds__switch_detection__ConjType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 1)));
#line 953 "switch_detection.m"
              MR_Word check_hlds__switch_detection__SubGoals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 2)));

#line 966 "switch_detection.m"
#line 966 "switch_detection.m"
              switch (check_hlds__switch_detection__ConjType_27) {
#line 966 "switch_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 966 "switch_detection.m"
                case (MR_Integer) 1:
#line 967 "switch_detection.m"
                  {
#line 968 "switch_detection.m"
                    *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 969 "switch_detection.m"
                    *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 967 "switch_detection.m"
                    *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 967 "switch_detection.m"
                    *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 967 "switch_detection.m"
                    *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 967 "switch_detection.m"
                  }
#line 966 "switch_detection.m"
                  break;
#line 966 "switch_detection.m"
                case (MR_Integer) 0:
#line 960 "switch_detection.m"
                  if ((check_hlds__switch_detection__SubGoals0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "switch_detection.m"
                    {
#line 958 "switch_detection.m"
                      *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 959 "switch_detection.m"
                      *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 957 "switch_detection.m"
                      *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 957 "switch_detection.m"
                      *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 957 "switch_detection.m"
                      *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 957 "switch_detection.m"
                    }
#line 960 "switch_detection.m"
                  else
#line 961 "switch_detection.m"
                    {
#line 961 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__SubGoals_31;
#line 961 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__V_111_111;

#line 962 "switch_detection.m"
                      {
#line 962 "switch_detection.m"
                        check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_106_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__Var_12, check_hlds__switch_detection__ProcessUnify_13, check_hlds__switch_detection__SubGoals0_28, &check_hlds__switch_detection__SubGoals_31, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, check_hlds__switch_detection__STATE_VARIABLE_Subst_88, check_hlds__switch_detection__STATE_VARIABLE_Result_0_89, check_hlds__switch_detection__STATE_VARIABLE_Result_90, check_hlds__switch_detection__STATE_VARIABLE_Info_0_91, check_hlds__switch_detection__STATE_VARIABLE_Info_92, check_hlds__switch_detection__FoundDeconstruct_19);
                      }
#line 964 "switch_detection.m"
                      {
#line 964 "switch_detection.m"
                        check_hlds__switch_detection__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 964 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 964 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_111_111, 1) = ((MR_Box) (check_hlds__switch_detection__ConjType_27));
#line 964 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_111_111, 2) = ((MR_Box) (check_hlds__switch_detection__SubGoals_31));
#line 964 "switch_detection.m"
                      }
#line 964 "switch_detection.m"
                      {
#line 964 "switch_detection.m"
                        MR_Word base;
#line 964 "switch_detection.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 964 "switch_detection.m"
                        *check_hlds__switch_detection__Goal_15 = base;
#line 964 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_111_111));
#line 964 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_21));
#line 964 "switch_detection.m"
                      }
#line 961 "switch_detection.m"
                    }
#line 966 "switch_detection.m"
                  break;
#line 966 "switch_detection.m"
              }
#line 953 "switch_detection.m"
            }
#line 952 "switch_detection.m"
            break;
#line 952 "switch_detection.m"
          case (MR_Integer) 5:
#line 929 "switch_detection.m"
            {
#line 929 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Reason0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 1)));
#line 929 "switch_detection.m"
              MR_Word check_hlds__switch_detection__SubGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 2)));
#line 930 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_112_112;
#line 930 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_24_24;

#line 930 "switch_detection.m"
              check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__Reason0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 930 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 930 "switch_detection.m"
                {
#line 930 "switch_detection.m"
                  check_hlds__switch_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 1)));
#line 930 "switch_detection.m"
                  check_hlds__switch_detection__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 2)));
#line 930 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_112_112 == (MR_Integer) 1);
#line 930 "switch_detection.m"
                }
#line 938 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 932 "switch_detection.m"
                {
#line 932 "switch_detection.m"
                  *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 937 "switch_detection.m"
                  *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 0;
#line 932 "switch_detection.m"
                  *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 932 "switch_detection.m"
                  *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 932 "switch_detection.m"
                  *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 932 "switch_detection.m"
                }
#line 938 "switch_detection.m"
              else
#line 940 "switch_detection.m"
                {
#line 940 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__SubGoal_25;
#line 942 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_116_116;
#line 943 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_26_26;

#line 939 "switch_detection.m"
                  {
#line 939 "switch_detection.m"
                    check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__Var_12, check_hlds__switch_detection__ProcessUnify_13, check_hlds__switch_detection__SubGoal0_23, &check_hlds__switch_detection__SubGoal_25, check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87, check_hlds__switch_detection__STATE_VARIABLE_Subst_88, check_hlds__switch_detection__STATE_VARIABLE_Result_0_89, check_hlds__switch_detection__STATE_VARIABLE_Result_90, check_hlds__switch_detection__STATE_VARIABLE_Info_0_91, check_hlds__switch_detection__STATE_VARIABLE_Info_92, check_hlds__switch_detection__FoundDeconstruct_19);
                  }
#line 942 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = (*check_hlds__switch_detection__FoundDeconstruct_19 == (MR_Integer) 1);
#line 942 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 942 "switch_detection.m"
                    {
#line 943 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__Reason0_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 943 "switch_detection.m"
                      if (check_hlds__switch_detection__succeeded)
#line 943 "switch_detection.m"
                        {
#line 943 "switch_detection.m"
                          check_hlds__switch_detection__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 1)));
#line 943 "switch_detection.m"
                          check_hlds__switch_detection__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason0_22, (MR_Integer) 2)));
#line 943 "switch_detection.m"
                          check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_116_116 == (MR_Integer) 2);
#line 943 "switch_detection.m"
                        }
#line 942 "switch_detection.m"
                    }
#line 948 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 947 "switch_detection.m"
                    *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__SubGoal_25;
#line 948 "switch_detection.m"
                  else
#line 949 "switch_detection.m"
                    {
#line 949 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__V_117_117;

#line 949 "switch_detection.m"
                      {
#line 949 "switch_detection.m"
                        check_hlds__switch_detection__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 949 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 949 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_117_117, 1) = ((MR_Box) (check_hlds__switch_detection__Reason0_22));
#line 949 "switch_detection.m"
                        MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_117_117, 2) = ((MR_Box) (check_hlds__switch_detection__SubGoal_25));
#line 949 "switch_detection.m"
                      }
#line 949 "switch_detection.m"
                      {
#line 949 "switch_detection.m"
                        MR_Word base;
#line 949 "switch_detection.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 949 "switch_detection.m"
                        *check_hlds__switch_detection__Goal_15 = base;
#line 949 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_117_117));
#line 949 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_21));
#line 949 "switch_detection.m"
                      }
#line 949 "switch_detection.m"
                    }
#line 940 "switch_detection.m"
                }
#line 929 "switch_detection.m"
            }
#line 952 "switch_detection.m"
            break;
#line 952 "switch_detection.m"
          case (MR_Integer) 7:
#line 1015 "switch_detection.m"
            {
#line 1015 "switch_detection.m"
              MR_Word check_hlds__switch_detection__ShortHand0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_20, (MR_Integer) 1)));

#line 1020 "switch_detection.m"
#line 1020 "switch_detection.m"
              switch (MR_tag((MR_Word) check_hlds__switch_detection__ShortHand0_74)) {
#line 1020 "switch_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1020 "switch_detection.m"
                case (MR_Integer) 0:
#line 1025 "switch_detection.m"
                  {
#line 1026 "switch_detection.m"
                    {
#line 1026 "switch_detection.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.find_bind_var_2\'/11", (MR_String) "bi_implication");
#line 1026 "switch_detection.m"
                      return;
                    }
#line 1025 "switch_detection.m"
                  }
#line 1020 "switch_detection.m"
                  break;
#line 1020 "switch_detection.m"
                case (MR_Integer) 1:
#line 1017 "switch_detection.m"
                  {
#line 1018 "switch_detection.m"
                    *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 1019 "switch_detection.m"
                    *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 1017 "switch_detection.m"
                  }
#line 1020 "switch_detection.m"
                  break;
#line 1020 "switch_detection.m"
                case (MR_Integer) 2:
#line 1021 "switch_detection.m"
                  {
#line 1022 "switch_detection.m"
                    *check_hlds__switch_detection__Goal_15 = check_hlds__switch_detection__Goal0_14;
#line 1023 "switch_detection.m"
                    *check_hlds__switch_detection__FoundDeconstruct_19 = (MR_Integer) 2;
#line 1021 "switch_detection.m"
                  }
#line 1020 "switch_detection.m"
                  break;
#line 1020 "switch_detection.m"
              }
#line 1015 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Subst_88 = check_hlds__switch_detection__STATE_VARIABLE_Subst_0_87;
#line 1015 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Result_90 = check_hlds__switch_detection__STATE_VARIABLE_Result_0_89;
#line 1015 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_Info_92 = check_hlds__switch_detection__STATE_VARIABLE_Info_0_91;
#line 1015 "switch_detection.m"
            }
#line 952 "switch_detection.m"
            break;
#line 952 "switch_detection.m"
        }
#line 952 "switch_detection.m"
        break;
#line 952 "switch_detection.m"
    }
#line 926 "switch_detection.m"
  }
#line 919 "switch_detection.m"
}

#line 863 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection__SwitchVar_8,
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_9,
#line 863 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goals_10,
#line 863 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Result_12)
#line 863 "switch_detection.m"
{
#line 868 "switch_detection.m"
  {
#line 868 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 893 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalExpr0_14;
#line 893 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalInfo_15;
#line 893 "switch_detection.m"
    MR_Word check_hlds__switch_detection__UnifyInfo0_16;
#line 893 "switch_detection.m"
    MR_Word check_hlds__switch_detection__UnifyVar_17;
#line 893 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Functor_18;
#line 893 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ArgVars_19;
#line 871 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_31_31;
#line 871 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_32_32;
#line 871 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_33_33;
#line 871 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_34_34;
#line 872 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_20_20;
#line 872 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_21_21;
#line 872 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_22_22;

#line 868 "switch_detection.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 870 "switch_detection.m"
    check_hlds__switch_detection__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_9, (MR_Integer) 0)));
#line 870 "switch_detection.m"
    check_hlds__switch_detection__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_9, (MR_Integer) 1)));
#line 871 "switch_detection.m"
    check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_14)) == (MR_mktag((MR_Integer) 1)));
#line 871 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 871 "switch_detection.m"
      {
#line 871 "switch_detection.m"
        check_hlds__switch_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 0)));
#line 871 "switch_detection.m"
        check_hlds__switch_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 1)));
#line 871 "switch_detection.m"
        check_hlds__switch_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 2)));
#line 871 "switch_detection.m"
        check_hlds__switch_detection__UnifyInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 3)));
#line 871 "switch_detection.m"
        check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 4)));
#line 872 "switch_detection.m"
        check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__UnifyInfo0_16)) == (MR_mktag((MR_Integer) 1)));
#line 872 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 872 "switch_detection.m"
          {
#line 872 "switch_detection.m"
            check_hlds__switch_detection__UnifyVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 0)));
#line 872 "switch_detection.m"
            check_hlds__switch_detection__Functor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 1)));
#line 872 "switch_detection.m"
            check_hlds__switch_detection__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 2)));
#line 872 "switch_detection.m"
            check_hlds__switch_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 3)));
#line 872 "switch_detection.m"
            check_hlds__switch_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 4)));
#line 872 "switch_detection.m"
            check_hlds__switch_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 5)));
#line 872 "switch_detection.m"
          }
#line 871 "switch_detection.m"
      }
#line 893 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 874 "switch_detection.m"
      {
#line 876 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_46_46;

#line 874 "switch_detection.m"
        {
#line 874 "switch_detection.m"
          MR_Word base;
#line 874 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 874 "switch_detection.m"
          *check_hlds__switch_detection__Result_12 = base;
#line 874 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Functor_18));
#line 874 "switch_detection.m"
        }
#line 876 "switch_detection.m"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__ArgVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 876 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 876 "switch_detection.m"
          {
#line 3871 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_46_46 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
#line 877 "switch_detection.m"
            {
#line 877 "switch_detection.m"
              check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_46_46, ((MR_Box) (check_hlds__switch_detection__SwitchVar_8)), ((MR_Box) (check_hlds__switch_detection__UnifyVar_17)));
            }
#line 876 "switch_detection.m"
          }
#line 885 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 884 "switch_detection.m"
          *check_hlds__switch_detection__Goals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 885 "switch_detection.m"
        else
#line 888 "switch_detection.m"
          {
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__UnifyInfo_23;
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__GoalExpr_24;
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Goal_25;
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 0)));
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 1)));
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 2)));
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 3)));
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 5)));
#line 888 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_16, (MR_Integer) 4)));
#line 889 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_41_41;
#line 889 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_42_42;
#line 889 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_43_43;
#line 889 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_45_45;
#line 889 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_44_44;

#line 888 "switch_detection.m"
            {
#line 888 "switch_detection.m"
              check_hlds__switch_detection__UnifyInfo_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 888 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 0) = ((MR_Box) (check_hlds__switch_detection__V_35_35));
#line 888 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 1) = ((MR_Box) (check_hlds__switch_detection__V_36_36));
#line 888 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 2) = ((MR_Box) (check_hlds__switch_detection__V_37_37));
#line 888 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 3) = ((MR_Box) (check_hlds__switch_detection__V_38_38));
#line 888 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 4) = ((MR_Box) ((MR_Integer) 1));
#line 888 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo_23, 5) = ((MR_Box) (check_hlds__switch_detection__V_40_40));
#line 888 "switch_detection.m"
            }
#line 889 "switch_detection.m"
            check_hlds__switch_detection__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 0)));
#line 889 "switch_detection.m"
            check_hlds__switch_detection__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 1)));
#line 889 "switch_detection.m"
            check_hlds__switch_detection__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 2)));
#line 889 "switch_detection.m"
            check_hlds__switch_detection__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 3)));
#line 889 "switch_detection.m"
            check_hlds__switch_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_14, (MR_Integer) 4)));
#line 889 "switch_detection.m"
            {
#line 889 "switch_detection.m"
              check_hlds__switch_detection__GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 889 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 0) = ((MR_Box) (check_hlds__switch_detection__V_41_41));
#line 889 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 1) = ((MR_Box) (check_hlds__switch_detection__V_42_42));
#line 889 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 2) = ((MR_Box) (check_hlds__switch_detection__V_43_43));
#line 889 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 3) = ((MR_Box) (check_hlds__switch_detection__UnifyInfo_23));
#line 889 "switch_detection.m"
              MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_24, 4) = ((MR_Box) (check_hlds__switch_detection__V_45_45));
#line 889 "switch_detection.m"
            }
#line 890 "switch_detection.m"
            {
#line 890 "switch_detection.m"
              check_hlds__switch_detection__Goal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_25, 0) = ((MR_Box) (check_hlds__switch_detection__GoalExpr_24));
#line 890 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_25, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_15));
#line 890 "switch_detection.m"
            }
#line 891 "switch_detection.m"
            {
#line 891 "switch_detection.m"
              MR_Word base;
#line 891 "switch_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "switch_detection.m"
              *check_hlds__switch_detection__Goals_10 = base;
#line 891 "switch_detection.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_25));
#line 891 "switch_detection.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 891 "switch_detection.m"
            }
#line 888 "switch_detection.m"
          }
#line 874 "switch_detection.m"
      }
#line 893 "switch_detection.m"
    else
#line 894 "switch_detection.m"
      {
#line 894 "switch_detection.m"
        {
#line 894 "switch_detection.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.find_bind_var_for_switch_in_deconstruct\'/7", (MR_String) "condition failed");
#line 894 "switch_detection.m"
          return;
        }
#line 894 "switch_detection.m"
      }
#line 868 "switch_detection.m"
  }
#line 863 "switch_detection.m"
}

#line 1121 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1121__1_3_p_0(
#line 1121 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_20,
#line 1121 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_21,
#line 1121 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_22)
#line 1121 "switch_detection.m"
{
#line 1121 "switch_detection.m"
  {
#line 1121 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 1121 "switch_detection.m"
    {
#line 1121 "switch_detection.m"
      mercury__set_tree234__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__switch_detection__HeadVar__1_20)), check_hlds__switch_detection__HeadVar__2_21, check_hlds__switch_detection__HeadVar__3_22);
#line 1121 "switch_detection.m"
      return;
    }
#line 1121 "switch_detection.m"
  }
#line 1121 "switch_detection.m"
}

#line 491 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__491__1_2_p_0(
#line 491 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConflictConsIds_9,
#line 491 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_90)
#line 491 "switch_detection.m"
{
#line 491 "switch_detection.m"
  {
#line 491 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 491 "switch_detection.m"
    {
#line 491 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__ConflictConsIds_9, ((MR_Box) (check_hlds__switch_detection__HeadVar__2_90)));
    }
#line 491 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 491 "switch_detection.m"
  }
#line 491 "switch_detection.m"
}

#line 456 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__456__1_2_p_0(
#line 456 "switch_detection.m"
  MR_Word check_hlds__switch_detection__IsMember_18,
#line 456 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_61)
#line 456 "switch_detection.m"
{
#line 456 "switch_detection.m"
  {
#line 456 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__IsMember_18 == check_hlds__switch_detection__HeadVar__2_61);

#line 456 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 456 "switch_detection.m"
  }
#line 456 "switch_detection.m"
}

#line 465 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__465__1_2_p_0(
#line 465 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_53,
#line 465 "switch_detection.m"
  MR_Word check_hlds__switch_detection__IsMember_65)
#line 465 "switch_detection.m"
{
#line 465 "switch_detection.m"
  {
#line 465 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__IsMember_65 == check_hlds__switch_detection__HeadVar__1_53);

#line 465 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 465 "switch_detection.m"
  }
#line 465 "switch_detection.m"
}

#line 448 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__IntroducedFrom__pred__convert_case__448__1_2_p_0(
#line 448 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_38,
#line 448 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_94)
#line 448 "switch_detection.m"
{
#line 448 "switch_detection.m"
  {
#line 448 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_94 == check_hlds__switch_detection__HeadVar__1_38);

#line 448 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 448 "switch_detection.m"
  }
#line 448 "switch_detection.m"
}

#line 103 "switch_detection.m"
void MR_CALL 
check_hlds__switch_detection____Compare____switch_detect_info_0_0(
#line 103 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 103 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 103 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 103 "switch_detection.m"
{
#line 103 "switch_detection.m"
  {
#line 103 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 103 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_9 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 103 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_10 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 103 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_9 == check_hlds__switch_detection__CastY_10);
#line 103 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4148 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 103 "switch_detection.m"
    else
#line 103 "switch_detection.m"
      {
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8;

#line 103 "switch_detection.m"
        {
#line 103 "switch_detection.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__switch_detection__V_8_8, check_hlds__switch_detection__V_4_4, check_hlds__switch_detection__V_6_6);
        }
#line 4170 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_8_8 == (MR_Integer) 0);
#line 103 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 103 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 103 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_8_8;
#line 103 "switch_detection.m"
        else
#line 103 "switch_detection.m"
          {
#line 103 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_13_13 = (MR_Integer) check_hlds__switch_detection__V_5_5;
#line 103 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_14_14 = (MR_Integer) check_hlds__switch_detection__V_7_7;

#line 103 "switch_detection.m"
            {
#line 103 "switch_detection.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__V_13_13, check_hlds__switch_detection__V_14_14);
#line 103 "switch_detection.m"
              return;
            }
#line 103 "switch_detection.m"
          }
#line 103 "switch_detection.m"
      }
#line 103 "switch_detection.m"
  }
#line 103 "switch_detection.m"
}

#line 103 "switch_detection.m"
MR_bool MR_CALL 
check_hlds__switch_detection____Unify____switch_detect_info_0_0(
#line 103 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 103 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 103 "switch_detection.m"
{
#line 103 "switch_detection.m"
  {
#line 103 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 103 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_7 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 103 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_8 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 103 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_7 == check_hlds__switch_detection__CastY_8);
#line 103 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 103 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 103 "switch_detection.m"
    else
#line 103 "switch_detection.m"
      {
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 103 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));

#line 4240 "check_hlds.switch_detection.c"
        {
#line 4242 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__switch_detection__V_3_3, check_hlds__switch_detection__V_5_5);
        }
#line 103 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 4247 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_4_4 == check_hlds__switch_detection__V_6_6);
#line 103 "switch_detection.m"
      }
#line 103 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 103 "switch_detection.m"
  }
#line 103 "switch_detection.m"
}

#line 61 "switch_detection.m"
void MR_CALL 
check_hlds__switch_detection____Compare____process_unify_2_0(
#line 61 "switch_detection.m"
  MR_Word check_hlds__switch_detection__TypeInfo_for_Result_6,
#line 61 "switch_detection.m"
  MR_Word check_hlds__switch_detection__TypeInfo_for_Info_7,
#line 61 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 61 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 61 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 61 "switch_detection.m"
{
#line 61 "switch_detection.m"
  {
#line 61 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 61 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cast_HeadVar1_4 = check_hlds__switch_detection__HeadVar__2_2;
#line 61 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cast_HeadVar2_5 = check_hlds__switch_detection__HeadVar__3_3;

#line 61 "switch_detection.m"
    {
#line 61 "switch_detection.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(check_hlds__switch_detection__HeadVar__1_1, (MR_Word) check_hlds__switch_detection__Cast_HeadVar1_4, (MR_Word) check_hlds__switch_detection__Cast_HeadVar2_5);
#line 61 "switch_detection.m"
      return;
    }
#line 61 "switch_detection.m"
  }
#line 61 "switch_detection.m"
}

#line 61 "switch_detection.m"
MR_bool MR_CALL 
check_hlds__switch_detection____Unify____process_unify_2_0(
#line 61 "switch_detection.m"
  MR_Word check_hlds__switch_detection__TypeInfo_for_Result_5,
#line 61 "switch_detection.m"
  MR_Word check_hlds__switch_detection__TypeInfo_for_Info_6,
#line 61 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 61 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 61 "switch_detection.m"
{
#line 61 "switch_detection.m"
  {
#line 61 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 61 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cast_HeadVar1_3 = check_hlds__switch_detection__HeadVar__1_1;
#line 61 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cast_HeadVar2_4 = check_hlds__switch_detection__HeadVar__2_2;

#line 61 "switch_detection.m"
    {
#line 61 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) check_hlds__switch_detection__Cast_HeadVar1_3, (MR_Word) check_hlds__switch_detection__Cast_HeadVar2_4);
    }
#line 61 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 61 "switch_detection.m"
  }
#line 61 "switch_detection.m"
}

#line 227 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____local_switch_detect_info_0_0(
#line 227 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 227 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 227 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 227 "switch_detection.m"
{
#line 227 "switch_detection.m"
  {
#line 227 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 227 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_15 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 227 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_16 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 227 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_15 == check_hlds__switch_detection__CastY_16);
#line 227 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4352 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 227 "switch_detection.m"
    else
#line 227 "switch_detection.m"
      {
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 3)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 3)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_12_12;

#line 227 "switch_detection.m"
        {
#line 227 "switch_detection.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__switch_detection__V_12_12, check_hlds__switch_detection__V_4_4, check_hlds__switch_detection__V_8_8);
        }
#line 4382 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_12_12 == (MR_Integer) 0);
#line 227 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 227 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 227 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_12_12;
#line 227 "switch_detection.m"
        else
#line 227 "switch_detection.m"
          {
#line 227 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_13_13;
#line 227 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_21_21 = (MR_Integer) check_hlds__switch_detection__V_5_5;
#line 227 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_22_22 = (MR_Integer) check_hlds__switch_detection__V_9_9;

#line 227 "switch_detection.m"
            {
#line 227 "switch_detection.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__switch_detection__V_13_13, check_hlds__switch_detection__V_21_21, check_hlds__switch_detection__V_22_22);
            }
#line 4406 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_13_13 == (MR_Integer) 0);
#line 227 "switch_detection.m"
            check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 227 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 227 "switch_detection.m"
              *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_13_13;
#line 227 "switch_detection.m"
            else
#line 227 "switch_detection.m"
              {
#line 227 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_14_14;

#line 227 "switch_detection.m"
                {
#line 227 "switch_detection.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[2], &check_hlds__switch_detection__V_14_14, ((MR_Box) (check_hlds__switch_detection__V_6_6)), ((MR_Box) (check_hlds__switch_detection__V_10_10)));
                }
#line 4426 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_14_14 == (MR_Integer) 0);
#line 227 "switch_detection.m"
                check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 227 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 227 "switch_detection.m"
                  *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_14_14;
#line 227 "switch_detection.m"
                else
#line 227 "switch_detection.m"
                  {
#line 227 "switch_detection.m"
                    MR_Integer check_hlds__switch_detection__V_23_23 = (MR_Integer) check_hlds__switch_detection__V_7_7;
#line 227 "switch_detection.m"
                    MR_Integer check_hlds__switch_detection__V_24_24 = (MR_Integer) check_hlds__switch_detection__V_11_11;

#line 227 "switch_detection.m"
                    {
#line 227 "switch_detection.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__V_23_23, check_hlds__switch_detection__V_24_24);
#line 227 "switch_detection.m"
                      return;
                    }
#line 227 "switch_detection.m"
                  }
#line 227 "switch_detection.m"
              }
#line 227 "switch_detection.m"
          }
#line 227 "switch_detection.m"
      }
#line 227 "switch_detection.m"
  }
#line 227 "switch_detection.m"
}

#line 227 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____local_switch_detect_info_0_0(
#line 227 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 227 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 227 "switch_detection.m"
{
#line 227 "switch_detection.m"
  {
#line 227 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 227 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_11 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 227 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_12 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 227 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_11 == check_hlds__switch_detection__CastY_12);
#line 227 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 227 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 227 "switch_detection.m"
    else
#line 227 "switch_detection.m"
      {
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_14_14;
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 3)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 227 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 3)));

#line 4510 "check_hlds.switch_detection.c"
        {
#line 4512 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__switch_detection__V_3_3, check_hlds__switch_detection__V_7_7);
        }
#line 227 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 227 "switch_detection.m"
          {
#line 4519 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_4_4 == check_hlds__switch_detection__V_8_8);
#line 227 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 227 "switch_detection.m"
              {
#line 4525 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_14_14 = (MR_Word) &check_hlds__switch_detection_scalar_common_2[2];
#line 4527 "check_hlds.switch_detection.c"
                {
#line 4529 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_14_14, ((MR_Box) (check_hlds__switch_detection__V_5_5)), ((MR_Box) (check_hlds__switch_detection__V_9_9)));
                }
#line 227 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 4534 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_6_6 == check_hlds__switch_detection__V_10_10);
#line 227 "switch_detection.m"
              }
#line 227 "switch_detection.m"
          }
#line 227 "switch_detection.m"
      }
#line 227 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 227 "switch_detection.m"
  }
#line 227 "switch_detection.m"
}

#line 41 "switch_detection.m"
void MR_CALL 
check_hlds__switch_detection____Compare____found_deconstruct_0_0(
#line 41 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 41 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 41 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 41 "switch_detection.m"
{
#line 41 "switch_detection.m"
  {
#line 41 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 41 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar1_4 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 41 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar2_5 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 41 "switch_detection.m"
    {
#line 41 "switch_detection.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Cast_HeadVar1_4, check_hlds__switch_detection__Cast_HeadVar2_5);
#line 41 "switch_detection.m"
      return;
    }
#line 41 "switch_detection.m"
  }
#line 41 "switch_detection.m"
}

#line 41 "switch_detection.m"
MR_bool MR_CALL 
check_hlds__switch_detection____Unify____found_deconstruct_0_0(
#line 41 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 41 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 41 "switch_detection.m"
{
#line 4590 "check_hlds.switch_detection.c"
  {
#line 4592 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_1 == check_hlds__switch_detection__HeadVar__2_2);

#line 4595 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 4597 "check_hlds.switch_detection.c"
  }
#line 41 "switch_detection.m"
}

#line 914 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____deconstruct_search_0_0(
#line 914 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 914 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 914 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 914 "switch_detection.m"
{
#line 914 "switch_detection.m"
  {
#line 914 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 914 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar1_4 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 914 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar2_5 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 914 "switch_detection.m"
    {
#line 914 "switch_detection.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Cast_HeadVar1_4, check_hlds__switch_detection__Cast_HeadVar2_5);
#line 914 "switch_detection.m"
      return;
    }
#line 914 "switch_detection.m"
  }
#line 914 "switch_detection.m"
}

#line 914 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____deconstruct_search_0_0(
#line 914 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 914 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 914 "switch_detection.m"
{
#line 4643 "check_hlds.switch_detection.c"
  {
#line 4645 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_1 == check_hlds__switch_detection__HeadVar__2_2);

#line 4648 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 4650 "check_hlds.switch_detection.c"
  }
#line 914 "switch_detection.m"
}

#line 414 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_state_0_0(
#line 414 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 414 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 414 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 414 "switch_detection.m"
{
#line 414 "switch_detection.m"
  {
#line 414 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 414 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar1_4 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 414 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar2_5 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 414 "switch_detection.m"
    {
#line 414 "switch_detection.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Cast_HeadVar1_4, check_hlds__switch_detection__Cast_HeadVar2_5);
#line 414 "switch_detection.m"
      return;
    }
#line 414 "switch_detection.m"
  }
#line 414 "switch_detection.m"
}

#line 414 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_state_0_0(
#line 414 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 414 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 414 "switch_detection.m"
{
#line 4696 "check_hlds.switch_detection.c"
  {
#line 4698 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_1 == check_hlds__switch_detection__HeadVar__2_2);

#line 4701 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 4703 "check_hlds.switch_detection.c"
  }
#line 414 "switch_detection.m"
}

#line 419 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cons_id_entry_0_0(
#line 419 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 419 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 419 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 419 "switch_detection.m"
{
#line 419 "switch_detection.m"
  {
#line 419 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 419 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_9 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 419 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_10 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 419 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_9 == check_hlds__switch_detection__CastY_10);
#line 419 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4732 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 419 "switch_detection.m"
    else
#line 419 "switch_detection.m"
      {
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8;
#line 419 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__V_13_13 = (MR_Integer) check_hlds__switch_detection__V_4_4;
#line 419 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__V_14_14 = (MR_Integer) check_hlds__switch_detection__V_6_6;

#line 419 "switch_detection.m"
        {
#line 419 "switch_detection.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__switch_detection__V_8_8, check_hlds__switch_detection__V_13_13, check_hlds__switch_detection__V_14_14);
        }
#line 4758 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_8_8 == (MR_Integer) 0);
#line 419 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 419 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 419 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_8_8;
#line 419 "switch_detection.m"
        else
#line 419 "switch_detection.m"
          {
#line 419 "switch_detection.m"
            {
#line 419 "switch_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[6], check_hlds__switch_detection__HeadVar__1_1, ((MR_Box) (check_hlds__switch_detection__V_5_5)), ((MR_Box) (check_hlds__switch_detection__V_7_7)));
#line 419 "switch_detection.m"
              return;
            }
#line 419 "switch_detection.m"
          }
#line 419 "switch_detection.m"
      }
#line 419 "switch_detection.m"
  }
#line 419 "switch_detection.m"
}

#line 419 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cons_id_entry_0_0(
#line 419 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 419 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 419 "switch_detection.m"
{
#line 419 "switch_detection.m"
  {
#line 419 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 419 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_7 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 419 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_8 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 419 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_7 == check_hlds__switch_detection__CastY_8);
#line 419 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 419 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 419 "switch_detection.m"
    else
#line 419 "switch_detection.m"
      {
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_9_9;
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 419 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));

#line 4825 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_3_3 == check_hlds__switch_detection__V_5_5);
#line 419 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 419 "switch_detection.m"
          {
#line 4831 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_9_9 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[6];
#line 4833 "check_hlds.switch_detection.c"
            {
#line 4835 "check_hlds.switch_detection.c"
              return check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_9_9, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_6_6)));
            }
#line 419 "switch_detection.m"
          }
#line 419 "switch_detection.m"
      }
#line 419 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 419 "switch_detection.m"
  }
#line 419 "switch_detection.m"
}

#line 425 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____cases_table_0_0(
#line 425 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 425 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 425 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 425 "switch_detection.m"
{
#line 425 "switch_detection.m"
  {
#line 425 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 425 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_9 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 425 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_10 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 425 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_9 == check_hlds__switch_detection__CastY_10);
#line 425 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 4873 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 425 "switch_detection.m"
    else
#line 425 "switch_detection.m"
      {
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8;

#line 425 "switch_detection.m"
        {
#line 425 "switch_detection.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[1], &check_hlds__switch_detection__V_8_8, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_6_6)));
        }
#line 4895 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_8_8 == (MR_Integer) 0);
#line 425 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 425 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 425 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_8_8;
#line 425 "switch_detection.m"
        else
#line 425 "switch_detection.m"
          {
#line 425 "switch_detection.m"
            {
#line 425 "switch_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[3], check_hlds__switch_detection__HeadVar__1_1, ((MR_Box) (check_hlds__switch_detection__V_5_5)), ((MR_Box) (check_hlds__switch_detection__V_7_7)));
#line 425 "switch_detection.m"
              return;
            }
#line 425 "switch_detection.m"
          }
#line 425 "switch_detection.m"
      }
#line 425 "switch_detection.m"
  }
#line 425 "switch_detection.m"
}

#line 425 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____cases_table_0_0(
#line 425 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 425 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 425 "switch_detection.m"
{
#line 425 "switch_detection.m"
  {
#line 425 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 425 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_7 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 425 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_8 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 425 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_7 == check_hlds__switch_detection__CastY_8);
#line 425 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 425 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 425 "switch_detection.m"
    else
#line 425 "switch_detection.m"
      {
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_10_10;
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 425 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));

#line 4962 "check_hlds.switch_detection.c"
        {
#line 4964 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[1], ((MR_Box) (check_hlds__switch_detection__V_3_3)), ((MR_Box) (check_hlds__switch_detection__V_5_5)));
        }
#line 425 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 425 "switch_detection.m"
          {
#line 4971 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_10_10 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
#line 4973 "check_hlds.switch_detection.c"
            {
#line 4975 "check_hlds.switch_detection.c"
              return check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_10_10, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_6_6)));
            }
#line 425 "switch_detection.m"
          }
#line 425 "switch_detection.m"
      }
#line 425 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 425 "switch_detection.m"
  }
#line 425 "switch_detection.m"
}

#line 410 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____case_arm_0_0(
#line 410 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 410 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 410 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 410 "switch_detection.m"
{
#line 410 "switch_detection.m"
  {
#line 410 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 410 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_27 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 410 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_28 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 410 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_27 == check_hlds__switch_detection__CastY_28);
#line 410 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 5013 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 410 "switch_detection.m"
    else
#line 410 "switch_detection.m"
    if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 410 "switch_detection.m"
      {
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));

#line 410 "switch_detection.m"
        if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 410 "switch_detection.m"
          {
#line 410 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 410 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 410 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 410 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_25_25;

#line 410 "switch_detection.m"
            {
#line 410 "switch_detection.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__switch_detection__V_25_25, check_hlds__switch_detection__V_36_36, check_hlds__switch_detection__V_22_22);
            }
#line 5046 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_25_25 == (MR_Integer) 0);
#line 410 "switch_detection.m"
            check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 410 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 410 "switch_detection.m"
              *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_25_25;
#line 410 "switch_detection.m"
            else
#line 410 "switch_detection.m"
              {
#line 410 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_26_26;

#line 410 "switch_detection.m"
                {
#line 410 "switch_detection.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[5], &check_hlds__switch_detection__V_26_26, ((MR_Box) (check_hlds__switch_detection__V_35_35)), ((MR_Box) (check_hlds__switch_detection__V_23_23)));
                }
#line 5066 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_26_26 == (MR_Integer) 0);
#line 410 "switch_detection.m"
                check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 410 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 410 "switch_detection.m"
                  *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_26_26;
#line 410 "switch_detection.m"
                else
#line 410 "switch_detection.m"
                  {
#line 410 "switch_detection.m"
                    hlds__hlds_goal____Compare____hlds_goal_0_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__V_34_34, check_hlds__switch_detection__V_24_24);
#line 410 "switch_detection.m"
                    return;
                  }
#line 410 "switch_detection.m"
              }
#line 410 "switch_detection.m"
          }
#line 410 "switch_detection.m"
        else
#line 5089 "check_hlds.switch_detection.c"
          *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 2;
#line 410 "switch_detection.m"
      }
#line 410 "switch_detection.m"
    else
#line 410 "switch_detection.m"
      {
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));

#line 410 "switch_detection.m"
        if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5104 "check_hlds.switch_detection.c"
          *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 1;
#line 410 "switch_detection.m"
        else
#line 410 "switch_detection.m"
          {
#line 410 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 410 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 410 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_8_8;

#line 410 "switch_detection.m"
            {
#line 410 "switch_detection.m"
              parse_tree__prog_data____Compare____cons_id_0_0(&check_hlds__switch_detection__V_8_8, check_hlds__switch_detection__V_38_38, check_hlds__switch_detection__V_6_6);
            }
#line 5122 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_8_8 == (MR_Integer) 0);
#line 410 "switch_detection.m"
            check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 410 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 410 "switch_detection.m"
              *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_8_8;
#line 410 "switch_detection.m"
            else
#line 410 "switch_detection.m"
              {
#line 410 "switch_detection.m"
                hlds__hlds_goal____Compare____hlds_goal_0_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__V_37_37, check_hlds__switch_detection__V_7_7);
#line 410 "switch_detection.m"
                return;
              }
#line 410 "switch_detection.m"
          }
#line 410 "switch_detection.m"
      }
#line 410 "switch_detection.m"
  }
#line 410 "switch_detection.m"
}

#line 410 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____case_arm_0_0(
#line 410 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 410 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 410 "switch_detection.m"
{
#line 410 "switch_detection.m"
  {
#line 410 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 410 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_13 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 410 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_14 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 410 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_13 == check_hlds__switch_detection__CastY_14);
#line 410 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 410 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 410 "switch_detection.m"
    else
#line 410 "switch_detection.m"
    if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 410 "switch_detection.m"
      {
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_16_16;
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_10_10;
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_11_11;
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_12_12;

#line 410 "switch_detection.m"
        check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 410 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 410 "switch_detection.m"
          {
#line 410 "switch_detection.m"
            check_hlds__switch_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 410 "switch_detection.m"
            check_hlds__switch_detection__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 410 "switch_detection.m"
            check_hlds__switch_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 5205 "check_hlds.switch_detection.c"
            {
#line 5207 "check_hlds.switch_detection.c"
              check_hlds__switch_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__switch_detection__V_7_7, check_hlds__switch_detection__V_10_10);
            }
#line 410 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 410 "switch_detection.m"
              {
#line 5214 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_16_16 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[5];
#line 5216 "check_hlds.switch_detection.c"
                {
#line 5218 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_16_16, ((MR_Box) (check_hlds__switch_detection__V_8_8)), ((MR_Box) (check_hlds__switch_detection__V_11_11)));
                }
#line 410 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 5223 "check_hlds.switch_detection.c"
                  {
#line 5225 "check_hlds.switch_detection.c"
                    return check_hlds__switch_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__switch_detection__V_9_9, check_hlds__switch_detection__V_12_12);
                  }
#line 410 "switch_detection.m"
              }
#line 410 "switch_detection.m"
          }
#line 410 "switch_detection.m"
      }
#line 410 "switch_detection.m"
    else
#line 410 "switch_detection.m"
      {
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5;
#line 410 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6;

#line 410 "switch_detection.m"
        check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 410 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 410 "switch_detection.m"
          {
#line 410 "switch_detection.m"
            check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 410 "switch_detection.m"
            check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 5257 "check_hlds.switch_detection.c"
            {
#line 5259 "check_hlds.switch_detection.c"
              check_hlds__switch_detection__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__switch_detection__V_3_3, check_hlds__switch_detection__V_5_5);
            }
#line 410 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 5264 "check_hlds.switch_detection.c"
              {
#line 5266 "check_hlds.switch_detection.c"
                return check_hlds__switch_detection__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__switch_detection__V_4_4, check_hlds__switch_detection__V_6_6);
              }
#line 410 "switch_detection.m"
          }
#line 410 "switch_detection.m"
      }
#line 410 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 410 "switch_detection.m"
  }
#line 410 "switch_detection.m"
}

#line 99 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____allow_multi_arm_0_0(
#line 99 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 99 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 99 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 99 "switch_detection.m"
{
#line 99 "switch_detection.m"
  {
#line 99 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 99 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar1_4 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 99 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__Cast_HeadVar2_5 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 99 "switch_detection.m"
    {
#line 99 "switch_detection.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Cast_HeadVar1_4, check_hlds__switch_detection__Cast_HeadVar2_5);
#line 99 "switch_detection.m"
      return;
    }
#line 99 "switch_detection.m"
  }
#line 99 "switch_detection.m"
}

#line 99 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____allow_multi_arm_0_0(
#line 99 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_1,
#line 99 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 99 "switch_detection.m"
{
#line 5321 "check_hlds.switch_detection.c"
  {
#line 5323 "check_hlds.switch_detection.c"
    MR_bool check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__HeadVar__2_1 == check_hlds__switch_detection__HeadVar__2_2);

#line 5326 "check_hlds.switch_detection.c"
    return check_hlds__switch_detection__succeeded;
#line 5328 "check_hlds.switch_detection.c"
  }
#line 99 "switch_detection.m"
}

#line 596 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection____Compare____again_0_0(
#line 596 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__1_1,
#line 596 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 596 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3)
#line 596 "switch_detection.m"
{
#line 596 "switch_detection.m"
  {
#line 596 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 596 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_12 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;
#line 596 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_13 = (MR_Integer) check_hlds__switch_detection__HeadVar__3_3;

#line 596 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_12 == check_hlds__switch_detection__CastY_13);
#line 596 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 5357 "check_hlds.switch_detection.c"
      *check_hlds__switch_detection__HeadVar__1_1 = (MR_Integer) 0;
#line 596 "switch_detection.m"
    else
#line 596 "switch_detection.m"
      {
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 2)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_10_10;

#line 596 "switch_detection.m"
        {
#line 596 "switch_detection.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], &check_hlds__switch_detection__V_10_10, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_7_7)));
        }
#line 5383 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_10_10 == (MR_Integer) 0);
#line 596 "switch_detection.m"
        check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 596 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 596 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_10_10;
#line 596 "switch_detection.m"
        else
#line 596 "switch_detection.m"
          {
#line 596 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_11_11;

#line 596 "switch_detection.m"
            {
#line 596 "switch_detection.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[4], &check_hlds__switch_detection__V_11_11, ((MR_Box) (check_hlds__switch_detection__V_5_5)), ((MR_Box) (check_hlds__switch_detection__V_8_8)));
            }
#line 5403 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_11_11 == (MR_Integer) 0);
#line 596 "switch_detection.m"
            check_hlds__switch_detection__succeeded = !(check_hlds__switch_detection__succeeded);
#line 596 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 596 "switch_detection.m"
              *check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__V_11_11;
#line 596 "switch_detection.m"
            else
#line 596 "switch_detection.m"
              {
#line 596 "switch_detection.m"
                {
#line 596 "switch_detection.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[2], check_hlds__switch_detection__HeadVar__1_1, ((MR_Box) (check_hlds__switch_detection__V_6_6)), ((MR_Box) (check_hlds__switch_detection__V_9_9)));
#line 596 "switch_detection.m"
                  return;
                }
#line 596 "switch_detection.m"
              }
#line 596 "switch_detection.m"
          }
#line 596 "switch_detection.m"
      }
#line 596 "switch_detection.m"
  }
#line 596 "switch_detection.m"
}

#line 596 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection____Unify____again_0_0(
#line 596 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 596 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2)
#line 596 "switch_detection.m"
{
#line 596 "switch_detection.m"
  {
#line 596 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 596 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastX_9 = (MR_Integer) check_hlds__switch_detection__HeadVar__1_1;
#line 596 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__CastY_10 = (MR_Integer) check_hlds__switch_detection__HeadVar__2_2;

#line 596 "switch_detection.m"
    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__CastX_9 == check_hlds__switch_detection__CastY_10);
#line 596 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 596 "switch_detection.m"
      check_hlds__switch_detection__succeeded = MR_TRUE;
#line 596 "switch_detection.m"
    else
#line 596 "switch_detection.m"
      {
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_12_12;
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_13_13;
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 596 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));

#line 5478 "check_hlds.switch_detection.c"
        {
#line 5480 "check_hlds.switch_detection.c"
          check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], ((MR_Box) (check_hlds__switch_detection__V_3_3)), ((MR_Box) (check_hlds__switch_detection__V_6_6)));
        }
#line 596 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 596 "switch_detection.m"
          {
#line 5487 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_12_12 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[4];
#line 5489 "check_hlds.switch_detection.c"
            {
#line 5491 "check_hlds.switch_detection.c"
              check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_12_12, ((MR_Box) (check_hlds__switch_detection__V_4_4)), ((MR_Box) (check_hlds__switch_detection__V_7_7)));
            }
#line 596 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 596 "switch_detection.m"
              {
#line 5498 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_13_13 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
#line 5500 "check_hlds.switch_detection.c"
                {
#line 5502 "check_hlds.switch_detection.c"
                  return check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_13_13, ((MR_Box) (check_hlds__switch_detection__V_5_5)), ((MR_Box) (check_hlds__switch_detection__V_8_8)));
                }
#line 596 "switch_detection.m"
              }
#line 596 "switch_detection.m"
          }
#line 596 "switch_detection.m"
      }
#line 596 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 596 "switch_detection.m"
  }
#line 596 "switch_detection.m"
}

#line 1136 "switch_detection.m"
static MR_Integer MR_CALL 
check_hlds__switch_detection__count_covered_cons_ids_1_f_0(
#line 1136 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1)
#line 1136 "switch_detection.m"
{
#line 1138 "switch_detection.m"
  {
#line 1138 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 1138 "switch_detection.m"
    MR_Integer check_hlds__switch_detection__HeadVar__2_2;

#line 1138 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "switch_detection.m"
      check_hlds__switch_detection__HeadVar__2_2 = (MR_Integer) 0;
#line 1138 "switch_detection.m"
    else
#line 1139 "switch_detection.m"
      {
#line 1139 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Case_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 1139 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Cases_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 1139 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__CaseCount_5;
#line 1139 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__CasesCount_6;
#line 1139 "switch_detection.m"
        MR_Word check_hlds__switch_detection__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_3, (MR_Integer) 1)));
#line 1139 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__V_11_11;
#line 1140 "switch_detection.m"
        MR_Word check_hlds__switch_detection___MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_3, (MR_Integer) 0)));
#line 1140 "switch_detection.m"
        MR_Word check_hlds__switch_detection___Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_3, (MR_Integer) 2)));

#line 1141 "switch_detection.m"
        {
#line 1141 "switch_detection.m"
          check_hlds__switch_detection__V_11_11 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__OtherConsIds_8);
        }
#line 1141 "switch_detection.m"
        check_hlds__switch_detection__CaseCount_5 = ((MR_Integer) 1 + check_hlds__switch_detection__V_11_11);
#line 1142 "switch_detection.m"
        {
#line 1142 "switch_detection.m"
          check_hlds__switch_detection__CasesCount_6 = check_hlds__switch_detection__count_covered_cons_ids_1_f_0(check_hlds__switch_detection__Cases_4);
        }
#line 1139 "switch_detection.m"
        check_hlds__switch_detection__HeadVar__2_2 = (check_hlds__switch_detection__CaseCount_5 + check_hlds__switch_detection__CasesCount_6);
#line 1139 "switch_detection.m"
      }
#line 1138 "switch_detection.m"
    return check_hlds__switch_detection__HeadVar__2_2;
#line 1138 "switch_detection.m"
  }
#line 1136 "switch_detection.m"
}

#line 1121 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0_1(
#line 1121 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 1121 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 1121 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 1121 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3)
#line 1121 "switch_detection.m"
{
#line 1121 "switch_detection.m"
  {
#line 1121 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 1121 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_HeadVar__3_22;

#line 1121 "switch_detection.m"
    {
#line 1121 "switch_detection.m"
      check_hlds__switch_detection__IntroducedFrom__pred__delete_covered_functors__1121__1_3_p_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv0_HeadVar__3_22);
    }
#line 1121 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv0_HeadVar__3_22));
#line 1121 "switch_detection.m"
  }
#line 1121 "switch_detection.m"
}

#line 1114 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__delete_covered_functors_3_p_0(
#line 1114 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 1114 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2,
#line 1114 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_3)
#line 1114 "switch_detection.m"
{
#line 1117 "switch_detection.m"
  while (MR_TRUE)
#line 1117 "switch_detection.m"
    {
#line 1117 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 1117 "switch_detection.m"
      {
#line 1117 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 1117 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1117 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_3 = check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2;
#line 1117 "switch_detection.m"
        else
#line 1118 "switch_detection.m"
          {
#line 1118 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1118 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 1118 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 1118 "switch_detection.m"
            MR_Word check_hlds__switch_detection__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_7, (MR_Integer) 0)));
#line 1118 "switch_detection.m"
            MR_Word check_hlds__switch_detection__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_7, (MR_Integer) 1)));
#line 1118 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_15_15;
#line 1118 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_17_17;
#line 1119 "switch_detection.m"
            MR_Word check_hlds__switch_detection___Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_7, (MR_Integer) 2)));
#line 1121 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv1_STATE_VARIABLE_UncoveredConsIds_17_17;

#line 1120 "switch_detection.m"
            {
#line 1120 "switch_detection.m"
              mercury__set_tree234__delete_3_p_0(check_hlds__switch_detection__TypeCtorInfo_19_19, ((MR_Box) (check_hlds__switch_detection__MainConsId_10)), check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2, &check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_15_15);
            }
#line 1121 "switch_detection.m"
            {
#line 1121 "switch_detection.m"
              mercury__list__foldl_4_p_0(check_hlds__switch_detection__TypeCtorInfo_19_19, (MR_Word) &check_hlds__switch_detection_scalar_common_1[3], (MR_Word) &check_hlds__switch_detection_scalar_common_2[6], check_hlds__switch_detection__OtherConsIds_11, ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_15_15)), &check_hlds__switch_detection__conv1_STATE_VARIABLE_UncoveredConsIds_17_17);
            }
#line 1121 "switch_detection.m"
            check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_17_17 = ((MR_Word) check_hlds__switch_detection__conv1_STATE_VARIABLE_UncoveredConsIds_17_17);
#line 1122 "switch_detection.m"
            /* direct tailcall eliminated */
#line 1122 "switch_detection.m"
            {
#line 1122 "switch_detection.m"
              MR_Word check_hlds__switch_detection__HeadVar__1__tmp_copy_1 = check_hlds__switch_detection__Cases_8;
#line 1122 "switch_detection.m"
              MR_Word check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0__tmp_copy_2 = check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_17_17;

#line 1122 "switch_detection.m"
              check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0_2 = check_hlds__switch_detection__STATE_VARIABLE_UncoveredConsIds_0__tmp_copy_2;
#line 1122 "switch_detection.m"
              check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__HeadVar__1__tmp_copy_1;
#line 1122 "switch_detection.m"
            }
#line 1122 "switch_detection.m"
            continue;
#line 1118 "switch_detection.m"
          }
#line 1117 "switch_detection.m"
      }
#line 1117 "switch_detection.m"
      break;
#line 1117 "switch_detection.m"
    }
#line 1114 "switch_detection.m"
}

#line 1056 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__cases_to_switch_6_p_0(
#line 1056 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_7,
#line 1056 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Cases0_8,
#line 1056 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_9,
#line 1056 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__GoalExpr_10,
#line 1056 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25,
#line 1056 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_26)
#line 1056 "switch_detection.m"
{
#line 1060 "switch_detection.m"
  {
#line 1060 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 1060 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, (MR_Integer) 0)));
#line 1060 "switch_detection.m"
    MR_Word check_hlds__switch_detection__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, (MR_Integer) 2)));
#line 1060 "switch_detection.m"
    MR_Word check_hlds__switch_detection__VarInst_14;
#line 1060 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Type_15;
#line 1060 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cases1_19;
#line 1060 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CanFail_20;
#line 1060 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cases_22;
#line 1061 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, (MR_Integer) 1)));
#line 1061 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, (MR_Integer) 3)));
#line 1070 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Functors_16;

#line 1063 "switch_detection.m"
    {
#line 1063 "switch_detection.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__switch_detection__InstMap_9, check_hlds__switch_detection__Var_7, &check_hlds__switch_detection__VarInst_14);
    }
#line 1064 "switch_detection.m"
    {
#line 1064 "switch_detection.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__switch_detection__VarTypes_13, check_hlds__switch_detection__Var_7, &check_hlds__switch_detection__Type_15);
    }
#line 1065 "switch_detection.m"
    {
#line 1065 "switch_detection.m"
      check_hlds__switch_detection__succeeded = check_hlds__inst_match__inst_is_bound_to_functors_3_p_0(check_hlds__switch_detection__ModuleInfo_12, check_hlds__switch_detection__VarInst_14, &check_hlds__switch_detection__Functors_16);
    }
#line 1070 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 1066 "switch_detection.m"
      {
#line 1066 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_9_40;
#line 1066 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtor_17;
#line 1066 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ConsIds_18;
#line 1066 "switch_detection.m"
        MR_Word check_hlds__switch_detection__UncoveredFunctors0_38;
#line 1066 "switch_detection.m"
        MR_Word check_hlds__switch_detection__UncoveredFunctors_39;

#line 1066 "switch_detection.m"
        {
#line 1066 "switch_detection.m"
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__switch_detection__Type_15, &check_hlds__switch_detection__TypeCtor_17);
        }
#line 1067 "switch_detection.m"
        {
#line 1067 "switch_detection.m"
          parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(check_hlds__switch_detection__TypeCtor_17, check_hlds__switch_detection__Functors_16, &check_hlds__switch_detection__ConsIds_18);
        }
#line 1068 "switch_detection.m"
        {
#line 1068 "switch_detection.m"
          check_hlds__det_util__delete_unreachable_cases_3_p_0(check_hlds__switch_detection__Cases0_8, check_hlds__switch_detection__ConsIds_18, &check_hlds__switch_detection__Cases1_19);
        }
#line 5788 "check_hlds.switch_detection.c"
        check_hlds__switch_detection__TypeCtorInfo_9_40 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1104 "switch_detection.m"
        {
#line 1104 "switch_detection.m"
          check_hlds__switch_detection__UncoveredFunctors0_38 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__switch_detection__TypeCtorInfo_9_40, check_hlds__switch_detection__ConsIds_18);
        }
#line 1105 "switch_detection.m"
        {
#line 1105 "switch_detection.m"
          check_hlds__switch_detection__delete_covered_functors_3_p_0(check_hlds__switch_detection__Cases1_19, check_hlds__switch_detection__UncoveredFunctors0_38, &check_hlds__switch_detection__UncoveredFunctors_39);
        }
#line 1106 "switch_detection.m"
        {
#line 1106 "switch_detection.m"
          check_hlds__switch_detection__succeeded = mercury__set_tree234__empty_1_p_0(check_hlds__switch_detection__TypeCtorInfo_9_40, check_hlds__switch_detection__UncoveredFunctors_39);
        }
#line 1108 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 1107 "switch_detection.m"
          check_hlds__switch_detection__CanFail_20 = (MR_Integer) 1;
#line 1108 "switch_detection.m"
        else
#line 1109 "switch_detection.m"
          check_hlds__switch_detection__CanFail_20 = (MR_Integer) 0;
#line 1066 "switch_detection.m"
      }
#line 1070 "switch_detection.m"
    else
#line 1071 "switch_detection.m"
      {
#line 1079 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__NumFunctors_21;

#line 1071 "switch_detection.m"
        check_hlds__switch_detection__Cases1_19 = check_hlds__switch_detection__Cases0_8;
#line 1072 "switch_detection.m"
        {
#line 1072 "switch_detection.m"
          check_hlds__switch_detection__succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(check_hlds__switch_detection__ModuleInfo_12, check_hlds__switch_detection__Type_15, &check_hlds__switch_detection__NumFunctors_21);
        }
#line 1079 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 1128 "switch_detection.m"
          {
#line 1128 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__NumCoveredConsIds_44;

#line 1129 "switch_detection.m"
            {
#line 1129 "switch_detection.m"
              check_hlds__switch_detection__NumCoveredConsIds_44 = check_hlds__switch_detection__count_covered_cons_ids_1_f_0(check_hlds__switch_detection__Cases1_19);
            }
#line 1130 "switch_detection.m"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__NumCoveredConsIds_44 == check_hlds__switch_detection__NumFunctors_21);
#line 1132 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 1131 "switch_detection.m"
              check_hlds__switch_detection__CanFail_20 = (MR_Integer) 1;
#line 1132 "switch_detection.m"
            else
#line 1133 "switch_detection.m"
              check_hlds__switch_detection__CanFail_20 = (MR_Integer) 0;
#line 1128 "switch_detection.m"
          }
#line 1079 "switch_detection.m"
        else
#line 1082 "switch_detection.m"
          check_hlds__switch_detection__CanFail_20 = (MR_Integer) 0;
#line 1071 "switch_detection.m"
      }
#line 1085 "switch_detection.m"
    {
#line 1085 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_cases_6_p_0(check_hlds__switch_detection__Var_7, check_hlds__switch_detection__InstMap_9, check_hlds__switch_detection__Cases1_19, &check_hlds__switch_detection__Cases_22, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_25, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_26);
    }
#line 1096 "switch_detection.m"
    if ((check_hlds__switch_detection__Cases_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1094 "switch_detection.m"
      {
#line 1095 "switch_detection.m"
        *check_hlds__switch_detection__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__switch_detection_scalar_common_1[7]);
#line 1094 "switch_detection.m"
      }
#line 1096 "switch_detection.m"
    else
#line 1098 "switch_detection.m"
      {
#line 1098 "switch_detection.m"
        MR_Word base;
#line 1098 "switch_detection.m"
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "switch_detection.m"
        *check_hlds__switch_detection__GoalExpr_10 = base;
#line 1098 "switch_detection.m"
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1098 "switch_detection.m"
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Var_7));
#line 1098 "switch_detection.m"
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__CanFail_20));
#line 1098 "switch_detection.m"
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__switch_detection__Cases_22));
#line 1098 "switch_detection.m"
      }
#line 1060 "switch_detection.m"
  }
#line 1056 "switch_detection.m"
}

#line 863 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection__SwitchVar_8,
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_9,
#line 863 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goals_10,
#line 863 "switch_detection.m"
  MR_Word check_hlds__switch_detection___Result0_11,
#line 863 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Result_12)
#line 863 "switch_detection.m"
{
#line 868 "switch_detection.m"
  {
#line 868 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 868 "switch_detection.m"
    {
#line 868 "switch_detection.m"
      check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_102_111_114_95_115_119_105_116_99_104_95_105_110_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_52_44_32_54_93_95_48_7_p_0(check_hlds__switch_detection__SwitchVar_8, check_hlds__switch_detection__Goal0_9, check_hlds__switch_detection__Goals_10, check_hlds__switch_detection__Result_12);
#line 868 "switch_detection.m"
      return;
    }
#line 868 "switch_detection.m"
  }
#line 863 "switch_detection.m"
}

#line 5929 "check_hlds.switch_detection.c"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0_1(
#line 5932 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 5934 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 5936 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 5938 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 5940 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 5942 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5,
#line 5944 "check_hlds.switch_detection.c"
  MR_Box check_hlds__switch_detection__wrapper_arg_6,
#line 5946 "check_hlds.switch_detection.c"
  MR_Box * check_hlds__switch_detection__wrapper_arg_7)
#line 5948 "check_hlds.switch_detection.c"
{
#line 5950 "check_hlds.switch_detection.c"
  {
#line 5952 "check_hlds.switch_detection.c"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 5954 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv1_Goals_10;
#line 5956 "check_hlds.switch_detection.c"
    MR_Word check_hlds__switch_detection__conv0_Result_12;

#line 5959 "check_hlds.switch_detection.c"
    {
#line 5961 "check_hlds.switch_detection.c"
      check_hlds__switch_detection__find_bind_var_for_switch_in_deconstruct_7_p_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv1_Goals_10, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), &check_hlds__switch_detection__conv0_Result_12);
    }
#line 5964 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv1_Goals_10));
#line 5966 "check_hlds.switch_detection.c"
    *check_hlds__switch_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__switch_detection__conv0_Result_12));
#line 5968 "check_hlds.switch_detection.c"
  }
#line 5970 "check_hlds.switch_detection.c"
}

#line 846 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_trial_6_p_0(
#line 846 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 846 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 846 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Left_0_3,
#line 846 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Left_4,
#line 846 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5,
#line 846 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_6)
#line 846 "switch_detection.m"
{
#line 850 "switch_detection.m"
  while (MR_TRUE)
#line 850 "switch_detection.m"
    {
#line 850 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 850 "switch_detection.m"
      {
#line 850 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 850 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "switch_detection.m"
          {
#line 850 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_CasesTable_6 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5;
#line 850 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_Left_4 = check_hlds__switch_detection__STATE_VARIABLE_Left_0_3;
#line 850 "switch_detection.m"
          }
#line 850 "switch_detection.m"
        else
#line 851 "switch_detection.m"
          {
#line 851 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjunct0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 851 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjuncts0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 851 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjunct_19;
#line 851 "switch_detection.m"
            MR_Word check_hlds__switch_detection__MaybeConsId_20;
#line 851 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_Left_31_31;
#line 851 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32;
#line 851 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Subst_57;
#line 901 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_58_58;
#line 901 "switch_detection.m"
            MR_Word check_hlds__switch_detection__DeconstructSearch_59;
#line 901 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv3_MaybeConsId_20;
#line 901 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv2_V_21_21;

#line 853 "switch_detection.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 900 "switch_detection.m"
            {
#line 900 "switch_detection.m"
              mercury__map__init_1_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[1], &check_hlds__switch_detection__Subst_57);
            }
#line 901 "switch_detection.m"
            {
#line 901 "switch_detection.m"
              check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__HeadVar__2_2, (MR_Word) &check_hlds__switch_detection_scalar_common_2[5], check_hlds__switch_detection__Disjunct0_14, &check_hlds__switch_detection__Disjunct_19, check_hlds__switch_detection__Subst_57, &check_hlds__switch_detection__V_58_58, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__switch_detection__conv3_MaybeConsId_20, ((MR_Box) ((MR_Integer) 0)), &check_hlds__switch_detection__conv2_V_21_21, &check_hlds__switch_detection__DeconstructSearch_59);
            }
#line 901 "switch_detection.m"
            check_hlds__switch_detection__MaybeConsId_20 = ((MR_Word) check_hlds__switch_detection__conv3_MaybeConsId_20);
#line 857 "switch_detection.m"
            if ((check_hlds__switch_detection__MaybeConsId_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "switch_detection.m"
              {
#line 859 "switch_detection.m"
                {
#line 859 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_Left_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__STATE_VARIABLE_Left_31_31, 0) = ((MR_Box) (check_hlds__switch_detection__Disjunct0_14));
#line 859 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__STATE_VARIABLE_Left_31_31, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_Left_0_3));
#line 859 "switch_detection.m"
                }
#line 858 "switch_detection.m"
                check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5;
#line 858 "switch_detection.m"
              }
#line 857 "switch_detection.m"
            else
#line 855 "switch_detection.m"
              {
#line 855 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ConsId_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__MaybeConsId_20, (MR_Integer) 0)));
#line 855 "switch_detection.m"
                MR_Word check_hlds__switch_detection__CasesMap0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5, (MR_Integer) 0)));
#line 855 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ConflictConsIds0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5, (MR_Integer) 1)));
#line 855 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Arm_73;
#line 855 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ConflictConsIds_78;
#line 855 "switch_detection.m"
                MR_Word check_hlds__switch_detection__CasesMap_81;
#line 550 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Entry0_74;
#line 532 "switch_detection.m"
                MR_Box check_hlds__switch_detection__conv4_Entry0_74;

#line 531 "switch_detection.m"
                {
#line 531 "switch_detection.m"
                  check_hlds__switch_detection__Arm_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 531 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Arm_73, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_23));
#line 531 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Arm_73, 1) = ((MR_Box) (check_hlds__switch_detection__Disjunct_19));
#line 531 "switch_detection.m"
                }
#line 532 "switch_detection.m"
                {
#line 532 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, check_hlds__switch_detection__CasesMap0_71, ((MR_Box) (check_hlds__switch_detection__ConsId_23)), &check_hlds__switch_detection__conv4_Entry0_74);
                }
#line 532 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 532 "switch_detection.m"
                  {
#line 532 "switch_detection.m"
                    check_hlds__switch_detection__Entry0_74 = ((MR_Word) check_hlds__switch_detection__conv4_Entry0_74);
#line 532 "switch_detection.m"
                    check_hlds__switch_detection__succeeded = MR_TRUE;
#line 532 "switch_detection.m"
                  }
#line 550 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 533 "switch_detection.m"
                  {
#line 533 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__State0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry0_74, (MR_Integer) 0)));
#line 533 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__Arms0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry0_74, (MR_Integer) 1)));
#line 533 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__State_77;
#line 533 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__Arms_79;
#line 533 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__Entry_80;

#line 538 "switch_detection.m"
#line 538 "switch_detection.m"
                    switch (check_hlds__switch_detection__State0_75) {
#line 538 "switch_detection.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 538 "switch_detection.m"
                      case (MR_Integer) 0:
#line 535 "switch_detection.m"
                        {
#line 536 "switch_detection.m"
                          check_hlds__switch_detection__State_77 = (MR_Integer) 0;
#line 537 "switch_detection.m"
                          check_hlds__switch_detection__ConflictConsIds_78 = check_hlds__switch_detection__ConflictConsIds0_72;
#line 535 "switch_detection.m"
                        }
#line 538 "switch_detection.m"
                        break;
#line 538 "switch_detection.m"
                      case (MR_Integer) 2:
#line 543 "switch_detection.m"
                        {
#line 544 "switch_detection.m"
                          check_hlds__switch_detection__State_77 = (MR_Integer) 2;
#line 545 "switch_detection.m"
                          check_hlds__switch_detection__ConflictConsIds_78 = check_hlds__switch_detection__ConflictConsIds0_72;
#line 543 "switch_detection.m"
                        }
#line 538 "switch_detection.m"
                        break;
#line 538 "switch_detection.m"
                      case (MR_Integer) 1:
#line 539 "switch_detection.m"
                        {
#line 540 "switch_detection.m"
                          check_hlds__switch_detection__State_77 = (MR_Integer) 2;
#line 541 "switch_detection.m"
                          {
#line 541 "switch_detection.m"
                            mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__switch_detection__ConsId_23)), check_hlds__switch_detection__ConflictConsIds0_72, &check_hlds__switch_detection__ConflictConsIds_78);
                          }
#line 539 "switch_detection.m"
                        }
#line 538 "switch_detection.m"
                        break;
#line 538 "switch_detection.m"
                    }
#line 547 "switch_detection.m"
                    {
#line 547 "switch_detection.m"
                      check_hlds__switch_detection__Arms_79 = mercury__cord__snoc_2_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0, check_hlds__switch_detection__Arms0_76, ((MR_Box) (check_hlds__switch_detection__Arm_73)));
                    }
#line 548 "switch_detection.m"
                    {
#line 548 "switch_detection.m"
                      check_hlds__switch_detection__Entry_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 548 "switch_detection.m"
                      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_80, 0) = ((MR_Box) (check_hlds__switch_detection__State_77));
#line 548 "switch_detection.m"
                      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_80, 1) = ((MR_Box) (check_hlds__switch_detection__Arms_79));
#line 548 "switch_detection.m"
                    }
#line 549 "switch_detection.m"
                    {
#line 549 "switch_detection.m"
                      mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, ((MR_Box) (check_hlds__switch_detection__ConsId_23)), ((MR_Box) (check_hlds__switch_detection__Entry_80)), check_hlds__switch_detection__CasesMap0_71, &check_hlds__switch_detection__CasesMap_81);
                    }
#line 533 "switch_detection.m"
                  }
#line 550 "switch_detection.m"
                else
#line 551 "switch_detection.m"
                  {
#line 551 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__Arms_83;
#line 551 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__Entry_84;

#line 552 "switch_detection.m"
                    {
#line 552 "switch_detection.m"
                      check_hlds__switch_detection__Arms_83 = mercury__cord__singleton_1_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0, ((MR_Box) (check_hlds__switch_detection__Arm_73)));
                    }
#line 553 "switch_detection.m"
                    {
#line 553 "switch_detection.m"
                      check_hlds__switch_detection__Entry_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "switch_detection.m"
                      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_84, 0) = ((MR_Box) ((MR_Integer) 0));
#line 553 "switch_detection.m"
                      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_84, 1) = ((MR_Box) (check_hlds__switch_detection__Arms_83));
#line 553 "switch_detection.m"
                    }
#line 554 "switch_detection.m"
                    {
#line 554 "switch_detection.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, ((MR_Box) (check_hlds__switch_detection__ConsId_23)), ((MR_Box) (check_hlds__switch_detection__Entry_84)), check_hlds__switch_detection__CasesMap0_71, &check_hlds__switch_detection__CasesMap_81);
                    }
#line 555 "switch_detection.m"
                    check_hlds__switch_detection__ConflictConsIds_78 = check_hlds__switch_detection__ConflictConsIds0_72;
#line 551 "switch_detection.m"
                  }
#line 557 "switch_detection.m"
                {
#line 557 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32, 0) = ((MR_Box) (check_hlds__switch_detection__CasesMap_81));
#line 557 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32, 1) = ((MR_Box) (check_hlds__switch_detection__ConflictConsIds_78));
#line 557 "switch_detection.m"
                }
#line 855 "switch_detection.m"
                check_hlds__switch_detection__STATE_VARIABLE_Left_31_31 = check_hlds__switch_detection__STATE_VARIABLE_Left_0_3;
#line 855 "switch_detection.m"
              }
#line 861 "switch_detection.m"
            /* direct tailcall eliminated */
#line 861 "switch_detection.m"
            {
#line 861 "switch_detection.m"
              MR_Word check_hlds__switch_detection__HeadVar__1__tmp_copy_1 = check_hlds__switch_detection__Disjuncts0_15;
#line 861 "switch_detection.m"
              MR_Word check_hlds__switch_detection__STATE_VARIABLE_Left_0__tmp_copy_3 = check_hlds__switch_detection__STATE_VARIABLE_Left_31_31;
#line 861 "switch_detection.m"
              MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0__tmp_copy_5 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_32_32;

#line 861 "switch_detection.m"
              check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_5 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0__tmp_copy_5;
#line 861 "switch_detection.m"
              check_hlds__switch_detection__STATE_VARIABLE_Left_0_3 = check_hlds__switch_detection__STATE_VARIABLE_Left_0__tmp_copy_3;
#line 861 "switch_detection.m"
              check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__HeadVar__1__tmp_copy_1;
#line 861 "switch_detection.m"
            }
#line 861 "switch_detection.m"
            continue;
#line 851 "switch_detection.m"
          }
#line 850 "switch_detection.m"
      }
#line 850 "switch_detection.m"
      break;
#line 850 "switch_detection.m"
    }
#line 846 "switch_detection.m"
}

#line 833 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__create_expanded_conjunction_5_p_0(
#line 833 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Unifies_6,
#line 833 "switch_detection.m"
  MR_Word check_hlds__switch_detection__LaterGoals_7,
#line 833 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 833 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjunct_9,
#line 833 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_10)
#line 833 "switch_detection.m"
{
#line 836 "switch_detection.m"
  {
#line 836 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 836 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Conjuncts_13;
#line 836 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_20_20;
#line 839 "switch_detection.m"
    MR_Word check_hlds__switch_detection__DisjunctGoals_11;
#line 837 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Disjunct_9, (MR_Integer) 0)));
#line 837 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_15_15;
#line 837 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Disjunct_9, (MR_Integer) 1)));

#line 837 "switch_detection.m"
    check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 837 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 837 "switch_detection.m"
      {
#line 837 "switch_detection.m"
        check_hlds__switch_detection__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_14_14, (MR_Integer) 1)));
#line 837 "switch_detection.m"
        check_hlds__switch_detection__DisjunctGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_14_14, (MR_Integer) 2)));
#line 837 "switch_detection.m"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_15_15 == (MR_Integer) 0);
#line 837 "switch_detection.m"
      }
#line 839 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 838 "switch_detection.m"
      {
#line 838 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 838 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_16_16;

#line 838 "switch_detection.m"
        {
#line 838 "switch_detection.m"
          check_hlds__switch_detection__V_16_16 = mercury__list__f_43_43_2_f_0(check_hlds__switch_detection__TypeCtorInfo_22_22, check_hlds__switch_detection__DisjunctGoals_11, check_hlds__switch_detection__LaterGoals_7);
        }
#line 838 "switch_detection.m"
        {
#line 838 "switch_detection.m"
          check_hlds__switch_detection__Conjuncts_13 = mercury__list__f_43_43_2_f_0(check_hlds__switch_detection__TypeCtorInfo_22_22, check_hlds__switch_detection__Unifies_6, check_hlds__switch_detection__V_16_16);
        }
#line 838 "switch_detection.m"
      }
#line 839 "switch_detection.m"
    else
#line 840 "switch_detection.m"
      {
#line 840 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 840 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_17_17;
#line 840 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_18_18;

#line 840 "switch_detection.m"
        {
#line 840 "switch_detection.m"
          check_hlds__switch_detection__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "switch_detection.m"
          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_18_18, 0) = ((MR_Box) (check_hlds__switch_detection__Disjunct_9));
#line 840 "switch_detection.m"
          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "switch_detection.m"
        }
#line 840 "switch_detection.m"
        {
#line 840 "switch_detection.m"
          check_hlds__switch_detection__V_17_17 = mercury__list__f_43_43_2_f_0(check_hlds__switch_detection__TypeCtorInfo_23_23, check_hlds__switch_detection__V_18_18, check_hlds__switch_detection__LaterGoals_7);
        }
#line 840 "switch_detection.m"
        {
#line 840 "switch_detection.m"
          check_hlds__switch_detection__Conjuncts_13 = mercury__list__f_43_43_2_f_0(check_hlds__switch_detection__TypeCtorInfo_23_23, check_hlds__switch_detection__Unifies_6, check_hlds__switch_detection__V_17_17);
        }
#line 840 "switch_detection.m"
      }
#line 842 "switch_detection.m"
    {
#line 842 "switch_detection.m"
      check_hlds__switch_detection__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 842 "switch_detection.m"
      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 842 "switch_detection.m"
      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_20_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 842 "switch_detection.m"
      MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_20_20, 2) = ((MR_Box) (check_hlds__switch_detection__Conjuncts_13));
#line 842 "switch_detection.m"
    }
#line 842 "switch_detection.m"
    {
#line 842 "switch_detection.m"
      MR_Word base;
#line 842 "switch_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "switch_detection.m"
      *check_hlds__switch_detection__Goal_10 = base;
#line 842 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_20_20));
#line 842 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_8));
#line 842 "switch_detection.m"
    }
#line 836 "switch_detection.m"
  }
#line 833 "switch_detection.m"
}

#line 822 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(
#line 822 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 822 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 822 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3)
#line 822 "switch_detection.m"
{
#line 825 "switch_detection.m"
  {
#line 825 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 825 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "switch_detection.m"
      {
#line 825 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 825 "switch_detection.m"
        check_hlds__switch_detection__succeeded = MR_TRUE;
#line 825 "switch_detection.m"
      }
#line 825 "switch_detection.m"
    else
#line 827 "switch_detection.m"
      {
#line 827 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_22_22;
#line 827 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 827 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 827 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ConsId_8;
#line 827 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ConsIds_9;
#line 827 "switch_detection.m"
        MR_Word check_hlds__switch_detection__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_6, (MR_Integer) 0)));
#line 827 "switch_detection.m"
        MR_Word check_hlds__switch_detection__UnifyInfo0_15;
#line 827 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_21_21;
#line 828 "switch_detection.m"
        MR_Word check_hlds__switch_detection___GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_6, (MR_Integer) 1)));
#line 829 "switch_detection.m"
        MR_Word check_hlds__switch_detection___LHS_12;
#line 829 "switch_detection.m"
        MR_Word check_hlds__switch_detection___RHS_13;
#line 829 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_14_14;
#line 829 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_16_16;
#line 830 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_17_17;
#line 830 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_18_18;
#line 830 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_19_19;
#line 830 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_20_20;

#line 829 "switch_detection.m"
        check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr_10)) == (MR_mktag((MR_Integer) 1)));
#line 829 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 829 "switch_detection.m"
          {
#line 829 "switch_detection.m"
            check_hlds__switch_detection___LHS_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 0)));
#line 829 "switch_detection.m"
            check_hlds__switch_detection___RHS_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 1)));
#line 829 "switch_detection.m"
            check_hlds__switch_detection__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 2)));
#line 829 "switch_detection.m"
            check_hlds__switch_detection__UnifyInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 3)));
#line 829 "switch_detection.m"
            check_hlds__switch_detection__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_10, (MR_Integer) 4)));
#line 830 "switch_detection.m"
            check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__UnifyInfo0_15)) == (MR_mktag((MR_Integer) 1)));
#line 830 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 830 "switch_detection.m"
              {
#line 830 "switch_detection.m"
                check_hlds__switch_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 0)));
#line 830 "switch_detection.m"
                check_hlds__switch_detection__ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 1)));
#line 830 "switch_detection.m"
                check_hlds__switch_detection__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 2)));
#line 830 "switch_detection.m"
                check_hlds__switch_detection__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 3)));
#line 830 "switch_detection.m"
                check_hlds__switch_detection__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 4)));
#line 830 "switch_detection.m"
                check_hlds__switch_detection__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_15, (MR_Integer) 5)));
#line 6508 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_22_22 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
#line 830 "switch_detection.m"
                {
#line 830 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_22_22, ((MR_Box) (check_hlds__switch_detection__HeadVar__1_1)), ((MR_Box) (check_hlds__switch_detection__V_21_21)));
                }
#line 827 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 827 "switch_detection.m"
                  {
#line 831 "switch_detection.m"
                    {
#line 831 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__Goals_7, &check_hlds__switch_detection__ConsIds_9);
                    }
#line 827 "switch_detection.m"
                    if (check_hlds__switch_detection__succeeded)
#line 827 "switch_detection.m"
                      {
#line 827 "switch_detection.m"
                        {
#line 827 "switch_detection.m"
                          MR_Word base;
#line 827 "switch_detection.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "switch_detection.m"
                          *check_hlds__switch_detection__HeadVar__3_3 = base;
#line 827 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_8));
#line 827 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__ConsIds_9));
#line 827 "switch_detection.m"
                        }
#line 827 "switch_detection.m"
                        check_hlds__switch_detection__succeeded = MR_TRUE;
#line 827 "switch_detection.m"
                      }
#line 827 "switch_detection.m"
                  }
#line 830 "switch_detection.m"
              }
#line 829 "switch_detection.m"
          }
#line 827 "switch_detection.m"
      }
#line 825 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 825 "switch_detection.m"
  }
#line 822 "switch_detection.m"
}

#line 813 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2(
#line 813 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 813 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 813 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_2)
#line 813 "switch_detection.m"
{
#line 813 "switch_detection.m"
  {
#line 813 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 813 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv2_Goal_10;

#line 813 "switch_detection.m"
    {
#line 813 "switch_detection.m"
      check_hlds__switch_detection__create_expanded_conjunction_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), &check_hlds__switch_detection__conv2_Goal_10);
    }
#line 813 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_2 = ((MR_Box) (check_hlds__switch_detection__conv2_Goal_10));
#line 813 "switch_detection.m"
  }
#line 813 "switch_detection.m"
}

#line 564 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1(
#line 564 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 564 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 564 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 564 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3)
#line 564 "switch_detection.m"
{
#line 564 "switch_detection.m"
  {
#line 564 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 564 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_CasesTable_8;

#line 564 "switch_detection.m"
    {
#line 564 "switch_detection.m"
      check_hlds__switch_detection__add_multi_entry_for_cons_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv0_CasesTable_8);
    }
#line 564 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv0_CasesTable_8));
#line 564 "switch_detection.m"
  }
#line 564 "switch_detection.m"
}

#line 768 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__AllowMulti_8,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_9,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConjGoals_10,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_12,
#line 768 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_37,
#line 768 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_38)
#line 768 "switch_detection.m"
{
#line 6642 "check_hlds.switch_detection.c"
  while (MR_TRUE)
#line 6644 "check_hlds.switch_detection.c"
    {
#line 6646 "check_hlds.switch_detection.c"
      /* tailcall optimized into a loop */
#line 6648 "check_hlds.switch_detection.c"
      {
#line 6650 "check_hlds.switch_detection.c"
        MR_bool check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__ConjGoals_10)) == (MR_mktag((MR_Integer) 1)));
#line 6652 "check_hlds.switch_detection.c"
        MR_Word check_hlds__switch_detection__FirstGoal_14;
#line 6654 "check_hlds.switch_detection.c"
        MR_Word check_hlds__switch_detection__LaterGoals_15;
#line 6656 "check_hlds.switch_detection.c"
        MR_Word check_hlds__switch_detection__FirstGoalExpr_16;
#line 6658 "check_hlds.switch_detection.c"
        MR_Word check_hlds__switch_detection__FirstGoalInfo_17;

#line 6661 "check_hlds.switch_detection.c"
        if (check_hlds__switch_detection__succeeded)
#line 6663 "check_hlds.switch_detection.c"
          {
#line 6665 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__FirstGoal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ConjGoals_10, (MR_Integer) 0)));
#line 6667 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__LaterGoals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ConjGoals_10, (MR_Integer) 1)));
#line 779 "switch_detection.m"
            check_hlds__switch_detection__FirstGoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__FirstGoal_14, (MR_Integer) 0)));
#line 779 "switch_detection.m"
            check_hlds__switch_detection__FirstGoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__FirstGoal_14, (MR_Integer) 1)));
#line 785 "switch_detection.m"
            if (((MR_tag((MR_Word) check_hlds__switch_detection__FirstGoalExpr_16)) == (MR_mktag((MR_Integer) 1))))
#line 781 "switch_detection.m"
              {
#line 781 "switch_detection.m"
                MR_Word check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47;

#line 782 "switch_detection.m"
                {
#line 782 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47, 0) = ((MR_Box) (check_hlds__switch_detection__FirstGoal_14));
#line 782 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36));
#line 782 "switch_detection.m"
                }
#line 783 "switch_detection.m"
                /* direct tailcall eliminated */
#line 783 "switch_detection.m"
                {
#line 783 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__ConjGoals__tmp_copy_10 = check_hlds__switch_detection__LaterGoals_15;
#line 783 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0__tmp_copy_36 = check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_45_47;

#line 783 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36 = check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0__tmp_copy_36;
#line 783 "switch_detection.m"
                  check_hlds__switch_detection__ConjGoals_10 = check_hlds__switch_detection__ConjGoals__tmp_copy_10;
#line 783 "switch_detection.m"
                }
#line 783 "switch_detection.m"
                continue;
#line 781 "switch_detection.m"
              }
#line 785 "switch_detection.m"
            else
#line 785 "switch_detection.m"
            if (((((MR_tag((MR_Word) check_hlds__switch_detection__FirstGoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__FirstGoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 786 "switch_detection.m"
              {
#line 786 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Disjuncts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__FirstGoalExpr_16, (MR_Integer) 1)));
#line 787 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_24_24;
#line 787 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_25_25;
#line 810 "switch_detection.m"
                MR_Word check_hlds__switch_detection__SortedDisjConsIds_29;
#line 810 "switch_detection.m"
                MR_Word check_hlds__switch_detection__MainConsId_30;
#line 810 "switch_detection.m"
                MR_Word check_hlds__switch_detection__OtherConsIds_31;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__TypeCtorInfo_52_52;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__TypeCtorInfo_53_53;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__TypeInfo_22_90;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__NonLocals_26;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__OtherNonLocals_27;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__DisjConsIds_28;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Goal_74;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Goals_75;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ConsId_76;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ConsIds_77;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__GoalExpr_78;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__UnifyInfo0_83;
#line 789 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_89_89;
#line 828 "switch_detection.m"
                MR_Word check_hlds__switch_detection___GoalInfo_79;
#line 829 "switch_detection.m"
                MR_Word check_hlds__switch_detection___LHS_80;
#line 829 "switch_detection.m"
                MR_Word check_hlds__switch_detection___RHS_81;
#line 829 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_82_82;
#line 829 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_84_84;
#line 830 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_85_85;
#line 830 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_86_86;
#line 830 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_87_87;
#line 830 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_88_88;

#line 787 "switch_detection.m"
                check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__Disjuncts_23)) == (MR_mktag((MR_Integer) 1)));
#line 787 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 787 "switch_detection.m"
                  {
#line 787 "switch_detection.m"
                    check_hlds__switch_detection__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_23, (MR_Integer) 0)));
#line 787 "switch_detection.m"
                    check_hlds__switch_detection__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_23, (MR_Integer) 1)));
#line 789 "switch_detection.m"
                    check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__AllowMulti_8 == (MR_Integer) 0);
#line 789 "switch_detection.m"
                    if (check_hlds__switch_detection__succeeded)
#line 789 "switch_detection.m"
                      {
#line 790 "switch_detection.m"
                        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "switch_detection.m"
                        if (check_hlds__switch_detection__succeeded)
#line 789 "switch_detection.m"
                          {
#line 798 "switch_detection.m"
                            {
#line 798 "switch_detection.m"
                              check_hlds__switch_detection__NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__switch_detection__FirstGoalInfo_17);
                            }
#line 6799 "check_hlds.switch_detection.c"
                            check_hlds__switch_detection__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 799 "switch_detection.m"
                            {
#line 799 "switch_detection.m"
                              parse_tree__set_of_var__delete_3_p_0(check_hlds__switch_detection__TypeCtorInfo_52_52, check_hlds__switch_detection__Var_9, check_hlds__switch_detection__NonLocals_26, &check_hlds__switch_detection__OtherNonLocals_27);
                            }
#line 800 "switch_detection.m"
                            {
#line 800 "switch_detection.m"
                              check_hlds__switch_detection__succeeded = parse_tree__set_of_var__is_empty_1_p_0(check_hlds__switch_detection__TypeCtorInfo_52_52, check_hlds__switch_detection__OtherNonLocals_27);
                            }
#line 789 "switch_detection.m"
                            if (check_hlds__switch_detection__succeeded)
#line 789 "switch_detection.m"
                              {
#line 826 "switch_detection.m"
                                check_hlds__switch_detection__Goal_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_23, (MR_Integer) 0)));
#line 826 "switch_detection.m"
                                check_hlds__switch_detection__Goals_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_23, (MR_Integer) 1)));
#line 828 "switch_detection.m"
                                check_hlds__switch_detection__GoalExpr_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_74, (MR_Integer) 0)));
#line 828 "switch_detection.m"
                                check_hlds__switch_detection___GoalInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_74, (MR_Integer) 1)));
#line 829 "switch_detection.m"
                                check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr_78)) == (MR_mktag((MR_Integer) 1)));
#line 829 "switch_detection.m"
                                if (check_hlds__switch_detection__succeeded)
#line 829 "switch_detection.m"
                                  {
#line 829 "switch_detection.m"
                                    check_hlds__switch_detection___LHS_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 0)));
#line 829 "switch_detection.m"
                                    check_hlds__switch_detection___RHS_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 1)));
#line 829 "switch_detection.m"
                                    check_hlds__switch_detection__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 2)));
#line 829 "switch_detection.m"
                                    check_hlds__switch_detection__UnifyInfo0_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 3)));
#line 829 "switch_detection.m"
                                    check_hlds__switch_detection__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr_78, (MR_Integer) 4)));
#line 830 "switch_detection.m"
                                    check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__UnifyInfo0_83)) == (MR_mktag((MR_Integer) 1)));
#line 830 "switch_detection.m"
                                    if (check_hlds__switch_detection__succeeded)
#line 830 "switch_detection.m"
                                      {
#line 830 "switch_detection.m"
                                        check_hlds__switch_detection__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 0)));
#line 830 "switch_detection.m"
                                        check_hlds__switch_detection__ConsId_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 1)));
#line 830 "switch_detection.m"
                                        check_hlds__switch_detection__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 2)));
#line 830 "switch_detection.m"
                                        check_hlds__switch_detection__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 3)));
#line 830 "switch_detection.m"
                                        check_hlds__switch_detection__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 4)));
#line 830 "switch_detection.m"
                                        check_hlds__switch_detection__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__UnifyInfo0_83, (MR_Integer) 5)));
#line 6857 "check_hlds.switch_detection.c"
                                        check_hlds__switch_detection__TypeInfo_22_90 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[0];
#line 830 "switch_detection.m"
                                        {
#line 830 "switch_detection.m"
                                          check_hlds__switch_detection__succeeded = mercury__builtin__unify_2_p_0(check_hlds__switch_detection__TypeInfo_22_90, ((MR_Box) (check_hlds__switch_detection__Var_9)), ((MR_Box) (check_hlds__switch_detection__V_89_89)));
                                        }
#line 789 "switch_detection.m"
                                        if (check_hlds__switch_detection__succeeded)
#line 789 "switch_detection.m"
                                          {
#line 831 "switch_detection.m"
                                            {
#line 831 "switch_detection.m"
                                              check_hlds__switch_detection__succeeded = check_hlds__switch_detection__all_disjuncts_are_switch_var_unifies_3_p_0(check_hlds__switch_detection__Var_9, check_hlds__switch_detection__Goals_75, &check_hlds__switch_detection__ConsIds_77);
                                            }
#line 789 "switch_detection.m"
                                            if (check_hlds__switch_detection__succeeded)
#line 789 "switch_detection.m"
                                              {
#line 6877 "check_hlds.switch_detection.c"
                                                check_hlds__switch_detection__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 827 "switch_detection.m"
                                                {
#line 827 "switch_detection.m"
                                                  check_hlds__switch_detection__DisjConsIds_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "switch_detection.m"
                                                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__DisjConsIds_28, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_76));
#line 827 "switch_detection.m"
                                                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__DisjConsIds_28, 1) = ((MR_Box) (check_hlds__switch_detection__ConsIds_77));
#line 827 "switch_detection.m"
                                                }
#line 804 "switch_detection.m"
                                                {
#line 804 "switch_detection.m"
                                                  mercury__list__sort_2_p_0(check_hlds__switch_detection__TypeCtorInfo_53_53, check_hlds__switch_detection__DisjConsIds_28, &check_hlds__switch_detection__SortedDisjConsIds_29);
                                                }
#line 805 "switch_detection.m"
                                                check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__SortedDisjConsIds_29)) == (MR_mktag((MR_Integer) 1)));
#line 805 "switch_detection.m"
                                                if (check_hlds__switch_detection__succeeded)
#line 805 "switch_detection.m"
                                                  {
#line 805 "switch_detection.m"
                                                    check_hlds__switch_detection__MainConsId_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__SortedDisjConsIds_29, (MR_Integer) 0)));
#line 805 "switch_detection.m"
                                                    check_hlds__switch_detection__OtherConsIds_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__SortedDisjConsIds_29, (MR_Integer) 1)));
#line 805 "switch_detection.m"
                                                  }
#line 789 "switch_detection.m"
                                              }
#line 789 "switch_detection.m"
                                          }
#line 830 "switch_detection.m"
                                      }
#line 829 "switch_detection.m"
                                  }
#line 789 "switch_detection.m"
                              }
#line 789 "switch_detection.m"
                          }
#line 789 "switch_detection.m"
                      }
#line 810 "switch_detection.m"
                    if (check_hlds__switch_detection__succeeded)
#line 807 "switch_detection.m"
                      {
#line 807 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__SharedGoal_32;
#line 807 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__V_39_39;
#line 807 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__Arm_64;
#line 807 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__V_65_65;
#line 564 "switch_detection.m"
                        MR_Box check_hlds__switch_detection__conv1_STATE_VARIABLE_CasesTable_38;

#line 807 "switch_detection.m"
                        {
#line 807 "switch_detection.m"
                          check_hlds__switch_detection__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 807 "switch_detection.m"
                          MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 807 "switch_detection.m"
                          MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 807 "switch_detection.m"
                          MR_hl_field(MR_mktag(3), check_hlds__switch_detection__V_39_39, 2) = ((MR_Box) (check_hlds__switch_detection__LaterGoals_15));
#line 807 "switch_detection.m"
                        }
#line 807 "switch_detection.m"
                        {
#line 807 "switch_detection.m"
                          check_hlds__switch_detection__SharedGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 807 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__SharedGoal_32, 0) = ((MR_Box) (check_hlds__switch_detection__V_39_39));
#line 807 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__SharedGoal_32, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_12));
#line 807 "switch_detection.m"
                        }
#line 563 "switch_detection.m"
                        {
#line 563 "switch_detection.m"
                          check_hlds__switch_detection__Arm_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 563 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arm_64, 0) = ((MR_Box) (check_hlds__switch_detection__MainConsId_30));
#line 563 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arm_64, 1) = ((MR_Box) (check_hlds__switch_detection__OtherConsIds_31));
#line 563 "switch_detection.m"
                          MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arm_64, 2) = ((MR_Box) (check_hlds__switch_detection__SharedGoal_32));
#line 563 "switch_detection.m"
                        }
#line 564 "switch_detection.m"
                        {
#line 564 "switch_detection.m"
                          check_hlds__switch_detection__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 564 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_65_65, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_5[0]));
#line 564 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_65_65, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_1));
#line 564 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 564 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_65_65, 3) = ((MR_Box) (check_hlds__switch_detection__Arm_64));
#line 564 "switch_detection.m"
                        }
#line 564 "switch_detection.m"
                        {
#line 564 "switch_detection.m"
                          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0, check_hlds__switch_detection__V_65_65, check_hlds__switch_detection__SortedDisjConsIds_29, ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_37)), &check_hlds__switch_detection__conv1_STATE_VARIABLE_CasesTable_38);
                        }
#line 564 "switch_detection.m"
                        *check_hlds__switch_detection__STATE_VARIABLE_CasesTable_38 = ((MR_Word) check_hlds__switch_detection__conv1_STATE_VARIABLE_CasesTable_38);
#line 807 "switch_detection.m"
                        check_hlds__switch_detection__succeeded = MR_TRUE;
#line 807 "switch_detection.m"
                      }
#line 810 "switch_detection.m"
                    else
#line 811 "switch_detection.m"
                      {
#line 811 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 811 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__Unifies_33;
#line 811 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__ExpandedConjunctions_34;
#line 811 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__Left_35;
#line 811 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__V_42_42;

#line 811 "switch_detection.m"
                        {
#line 811 "switch_detection.m"
                          mercury__list__reverse_2_p_0(check_hlds__switch_detection__TypeCtorInfo_54_54, check_hlds__switch_detection__STATE_VARIABLE_RevUnifies_0_36, &check_hlds__switch_detection__Unifies_33);
                        }
#line 813 "switch_detection.m"
                        {
#line 813 "switch_detection.m"
                          check_hlds__switch_detection__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 813 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_6[0]));
#line 813 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 1) = ((MR_Box) (check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0_2));
#line 813 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 813 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 3) = ((MR_Box) (check_hlds__switch_detection__Unifies_33));
#line 813 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 4) = ((MR_Box) (check_hlds__switch_detection__LaterGoals_15));
#line 813 "switch_detection.m"
                          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_42_42, 5) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_12));
#line 813 "switch_detection.m"
                        }
#line 812 "switch_detection.m"
                        {
#line 812 "switch_detection.m"
                          mercury__list__map_3_p_0(check_hlds__switch_detection__TypeCtorInfo_54_54, check_hlds__switch_detection__TypeCtorInfo_54_54, check_hlds__switch_detection__V_42_42, check_hlds__switch_detection__Disjuncts_23, &check_hlds__switch_detection__ExpandedConjunctions_34);
                        }
#line 815 "switch_detection.m"
                        {
#line 815 "switch_detection.m"
                          check_hlds__switch_detection__partition_disj_trial_6_p_0(check_hlds__switch_detection__ExpandedConjunctions_34, check_hlds__switch_detection__Var_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__switch_detection__Left_35, check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_37, check_hlds__switch_detection__STATE_VARIABLE_CasesTable_38);
                        }
#line 817 "switch_detection.m"
                        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__Left_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "switch_detection.m"
                      }
#line 787 "switch_detection.m"
                  }
#line 786 "switch_detection.m"
              }
#line 785 "switch_detection.m"
            else
#line 785 "switch_detection.m"
              check_hlds__switch_detection__succeeded = MR_FALSE;
#line 7054 "check_hlds.switch_detection.c"
          }
#line 7056 "check_hlds.switch_detection.c"
        return check_hlds__switch_detection__succeeded;
#line 7058 "check_hlds.switch_detection.c"
      }
#line 7060 "check_hlds.switch_detection.c"
      break;
#line 7062 "check_hlds.switch_detection.c"
    }
#line 768 "switch_detection.m"
}

#line 744 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__expand_sub_disjs_5_p_0(
#line 744 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 744 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 744 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 744 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4,
#line 744 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_CasesTable_5)
#line 744 "switch_detection.m"
{
#line 747 "switch_detection.m"
  while (MR_TRUE)
#line 747 "switch_detection.m"
    {
#line 747 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 747 "switch_detection.m"
      {
#line 747 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 747 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "switch_detection.m"
          {
#line 747 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_CasesTable_5 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4;
#line 747 "switch_detection.m"
            check_hlds__switch_detection__succeeded = MR_TRUE;
#line 747 "switch_detection.m"
          }
#line 747 "switch_detection.m"
        else
#line 748 "switch_detection.m"
          {
#line 748 "switch_detection.m"
            MR_Word check_hlds__switch_detection__LeftGoal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 748 "switch_detection.m"
            MR_Word check_hlds__switch_detection__LeftGoals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 748 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_18_18;
#line 748 "switch_detection.m"
            MR_Word check_hlds__switch_detection__GoalExpr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LeftGoal_13, (MR_Integer) 0)));
#line 748 "switch_detection.m"
            MR_Word check_hlds__switch_detection__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LeftGoal_13, (MR_Integer) 1)));
#line 748 "switch_detection.m"
            MR_Word check_hlds__switch_detection__GoalInfo_28;
#line 761 "switch_detection.m"
            MR_Word check_hlds__switch_detection__SubGoals_29;
#line 758 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_32_32;

#line 757 "switch_detection.m"
            {
#line 757 "switch_detection.m"
              hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 13, check_hlds__switch_detection__GoalInfo0_27, &check_hlds__switch_detection__GoalInfo_28);
            }
#line 758 "switch_detection.m"
            check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 758 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 758 "switch_detection.m"
              {
#line 758 "switch_detection.m"
                check_hlds__switch_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 1)));
#line 758 "switch_detection.m"
                check_hlds__switch_detection__SubGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 2)));
#line 758 "switch_detection.m"
                check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_32_32 == (MR_Integer) 0);
#line 758 "switch_detection.m"
              }
#line 761 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 759 "switch_detection.m"
              {
#line 759 "switch_detection.m"
                {
#line 759 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__HeadVar__2_2, check_hlds__switch_detection__SubGoals_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__switch_detection__GoalInfo_28, check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4, &check_hlds__switch_detection__STATE_VARIABLE_CasesTable_18_18);
                }
#line 759 "switch_detection.m"
              }
#line 761 "switch_detection.m"
            else
#line 764 "switch_detection.m"
              {
#line 764 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_35_35;
#line 764 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_36_36;
#line 764 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_38_38;
#line 761 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_30_30;

#line 761 "switch_detection.m"
                check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 761 "switch_detection.m"
                if (check_hlds__switch_detection__succeeded)
#line 761 "switch_detection.m"
                  {
#line 761 "switch_detection.m"
                    check_hlds__switch_detection__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr_26, (MR_Integer) 1)));
#line 762 "switch_detection.m"
                    check_hlds__switch_detection__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "switch_detection.m"
                    check_hlds__switch_detection__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "switch_detection.m"
                    {
#line 762 "switch_detection.m"
                      check_hlds__switch_detection__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_35_35, 0) = ((MR_Box) (check_hlds__switch_detection__LeftGoal_13));
#line 762 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__V_35_35, 1) = ((MR_Box) (check_hlds__switch_detection__V_38_38));
#line 762 "switch_detection.m"
                    }
#line 762 "switch_detection.m"
                    {
#line 762 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = check_hlds__switch_detection__expand_sub_disj_process_conj_7_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__HeadVar__2_2, check_hlds__switch_detection__V_35_35, check_hlds__switch_detection__V_36_36, check_hlds__switch_detection__GoalInfo_28, check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4, &check_hlds__switch_detection__STATE_VARIABLE_CasesTable_18_18);
                    }
#line 761 "switch_detection.m"
                  }
#line 764 "switch_detection.m"
              }
#line 748 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 750 "switch_detection.m"
              {
#line 750 "switch_detection.m"
                /* direct tailcall eliminated */
#line 750 "switch_detection.m"
                {
#line 750 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__HeadVar__3__tmp_copy_3 = check_hlds__switch_detection__LeftGoals_14;
#line 750 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0__tmp_copy_4 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_18_18;

#line 750 "switch_detection.m"
                  check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0_4 = check_hlds__switch_detection__STATE_VARIABLE_CasesTable_0__tmp_copy_4;
#line 750 "switch_detection.m"
                  check_hlds__switch_detection__HeadVar__3_3 = check_hlds__switch_detection__HeadVar__3__tmp_copy_3;
#line 750 "switch_detection.m"
                }
#line 750 "switch_detection.m"
                continue;
#line 750 "switch_detection.m"
              }
#line 748 "switch_detection.m"
          }
#line 747 "switch_detection.m"
        return check_hlds__switch_detection__succeeded;
#line 747 "switch_detection.m"
      }
#line 747 "switch_detection.m"
      break;
#line 747 "switch_detection.m"
    }
#line 744 "switch_detection.m"
}

#line 436 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_2(
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5)
#line 436 "switch_detection.m"
{
#line 436 "switch_detection.m"
  {
#line 436 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv5_STATE_VARIABLE_Cases_31;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv4_STATE_VARIABLE_AlreadyHandledConsIds_33;

#line 436 "switch_detection.m"
    {
#line 436 "switch_detection.m"
      check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv5_STATE_VARIABLE_Cases_31, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), &check_hlds__switch_detection__conv4_STATE_VARIABLE_AlreadyHandledConsIds_33);
    }
#line 436 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv5_STATE_VARIABLE_Cases_31));
#line 436 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__switch_detection__conv4_STATE_VARIABLE_AlreadyHandledConsIds_33));
#line 436 "switch_detection.m"
  }
#line 436 "switch_detection.m"
}

#line 436 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0_1(
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5)
#line 436 "switch_detection.m"
{
#line 436 "switch_detection.m"
  {
#line 436 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_31;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_33;

#line 436 "switch_detection.m"
    {
#line 436 "switch_detection.m"
      check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_31, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), &check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_33);
    }
#line 436 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_31));
#line 436 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_33));
#line 436 "switch_detection.m"
  }
#line 436 "switch_detection.m"
}

#line 710 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__partition_disj_7_p_0(
#line 710 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjuncts0_8,
#line 710 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_9,
#line 710 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_10,
#line 710 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Left_11,
#line 710 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Cases_12,
#line 710 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21,
#line 710 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22)
#line 710 "switch_detection.m"
{
#line 714 "switch_detection.m"
  {
#line 714 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 714 "switch_detection.m"
    MR_Word check_hlds__switch_detection__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 714 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesTable0_14;
#line 714 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Left1_15;
#line 714 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesTable1_16;
#line 714 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_23_23;
#line 714 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_24_24;

#line 715 "switch_detection.m"
    {
#line 715 "switch_detection.m"
      check_hlds__switch_detection__V_23_23 = mercury__map__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_39_39, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
    }
#line 715 "switch_detection.m"
    {
#line 715 "switch_detection.m"
      check_hlds__switch_detection__V_24_24 = mercury__set_tree234__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_39_39);
    }
#line 715 "switch_detection.m"
    {
#line 715 "switch_detection.m"
      check_hlds__switch_detection__CasesTable0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 715 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable0_14, 0) = ((MR_Box) (check_hlds__switch_detection__V_23_23));
#line 715 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable0_14, 1) = ((MR_Box) (check_hlds__switch_detection__V_24_24));
#line 715 "switch_detection.m"
    }
#line 716 "switch_detection.m"
    {
#line 716 "switch_detection.m"
      check_hlds__switch_detection__partition_disj_trial_6_p_0(check_hlds__switch_detection__Disjuncts0_8, check_hlds__switch_detection__Var_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__switch_detection__Left1_15, check_hlds__switch_detection__CasesTable0_14, &check_hlds__switch_detection__CasesTable1_16);
    }
#line 723 "switch_detection.m"
    if ((check_hlds__switch_detection__Left1_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "switch_detection.m"
      {
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_15_56;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_16_57;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_22_63;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_23_64;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeInfo_24_65;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_25_66;
#line 718 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__V_30_30;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__CasesMap_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable1_16, (MR_Integer) 0)));
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__CasesMap_48;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ConflictIds_49;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__CasesAssocList_50;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Cases_51;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_53_53;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_54_54;
#line 718 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_55_55;
#line 524 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable1_16, (MR_Integer) 1)));
#line 436 "switch_detection.m"
        MR_Word check_hlds__switch_detection___AlreadyHandledConsIds_52;
#line 436 "switch_detection.m"
        MR_Box check_hlds__switch_detection__conv3_Cases_51;
#line 436 "switch_detection.m"
        MR_Box check_hlds__switch_detection__conv2__AlreadyHandledConsIds_52;

#line 524 "switch_detection.m"
        {
#line 524 "switch_detection.m"
          check_hlds__switch_detection__V_30_30 = mercury__map__count_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, check_hlds__switch_detection__CasesMap_41);
        }
#line 720 "switch_detection.m"
        check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_30_30 >= (MR_Integer) 1);
#line 718 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 718 "switch_detection.m"
          {
#line 721 "switch_detection.m"
            *check_hlds__switch_detection__Left_11 = check_hlds__switch_detection__Left1_15;
#line 434 "switch_detection.m"
            check_hlds__switch_detection__CasesMap_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable1_16, (MR_Integer) 0)));
#line 434 "switch_detection.m"
            check_hlds__switch_detection__ConflictIds_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable1_16, (MR_Integer) 1)));
#line 7435 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeCtorInfo_15_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7437 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeCtorInfo_16_57 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;
#line 435 "switch_detection.m"
            {
#line 435 "switch_detection.m"
              mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_15_56, check_hlds__switch_detection__TypeCtorInfo_16_57, check_hlds__switch_detection__CasesMap_48, &check_hlds__switch_detection__CasesAssocList_50);
            }
#line 436 "switch_detection.m"
            check_hlds__switch_detection__V_54_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "switch_detection.m"
            {
#line 436 "switch_detection.m"
              check_hlds__switch_detection__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 436 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0]));
#line 436 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_1));
#line 436 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 436 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 3) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_10));
#line 436 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_53_53, 4) = ((MR_Box) (check_hlds__switch_detection__ConflictIds_49));
#line 436 "switch_detection.m"
            }
#line 437 "switch_detection.m"
            {
#line 437 "switch_detection.m"
              check_hlds__switch_detection__V_55_55 = mercury__set_tree234__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_15_56);
            }
#line 7467 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_22_63 = (MR_Word) &check_hlds__switch_detection_scalar_common_2[0];
#line 7469 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_23_64 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
#line 7471 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeInfo_24_65 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
#line 436 "switch_detection.m"
            {
#line 436 "switch_detection.m"
              mercury__list__foldl2_6_p_0(check_hlds__switch_detection__TypeInfo_22_63, check_hlds__switch_detection__TypeInfo_23_64, check_hlds__switch_detection__TypeInfo_24_65, check_hlds__switch_detection__V_53_53, check_hlds__switch_detection__CasesAssocList_50, ((MR_Box) (check_hlds__switch_detection__V_54_54)), &check_hlds__switch_detection__conv3_Cases_51, ((MR_Box) (check_hlds__switch_detection__V_55_55)), &check_hlds__switch_detection__conv2__AlreadyHandledConsIds_52);
            }
#line 436 "switch_detection.m"
            check_hlds__switch_detection__Cases_51 = ((MR_Word) check_hlds__switch_detection__conv3_Cases_51);
#line 436 "switch_detection.m"
            check_hlds__switch_detection___AlreadyHandledConsIds_52 = ((MR_Word) check_hlds__switch_detection__conv2__AlreadyHandledConsIds_52);
#line 7482 "check_hlds.switch_detection.c"
            check_hlds__switch_detection__TypeCtorInfo_25_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 438 "switch_detection.m"
            {
#line 438 "switch_detection.m"
              mercury__list__sort_2_p_0(check_hlds__switch_detection__TypeCtorInfo_25_66, check_hlds__switch_detection__Cases_51, check_hlds__switch_detection__Cases_12);
            }
#line 718 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21;
#line 718 "switch_detection.m"
            check_hlds__switch_detection__succeeded = MR_TRUE;
#line 718 "switch_detection.m"
          }
#line 718 "switch_detection.m"
      }
#line 723 "switch_detection.m"
    else
#line 724 "switch_detection.m"
      {
#line 724 "switch_detection.m"
        MR_Word check_hlds__switch_detection__AllowMulti_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 1)));
#line 728 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 0)));
#line 728 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 2)));
#line 728 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 3)));
#line 736 "switch_detection.m"
        MR_Word check_hlds__switch_detection__CasesTable_20;

#line 730 "switch_detection.m"
        {
#line 730 "switch_detection.m"
          check_hlds__switch_detection__succeeded = check_hlds__switch_detection__expand_sub_disjs_5_p_0(check_hlds__switch_detection__AllowMulti_19, check_hlds__switch_detection__Var_9, check_hlds__switch_detection__Left1_15, check_hlds__switch_detection__CasesTable1_16, &check_hlds__switch_detection__CasesTable_20);
        }
#line 736 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 732 "switch_detection.m"
          {
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_15_82;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_16_83;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeInfo_22_89;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeInfo_23_90;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeInfo_24_91;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_25_92;
#line 732 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__V_26_26;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_29_29;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesMap_67;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesMap_74;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__ConflictIds_75;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesAssocList_76;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Cases_77;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_79_79;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_80_80;
#line 732 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_81_81;
#line 524 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_68_68;
#line 436 "switch_detection.m"
            MR_Word check_hlds__switch_detection___AlreadyHandledConsIds_78;
#line 436 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv7_Cases_77;
#line 436 "switch_detection.m"
            MR_Box check_hlds__switch_detection__conv6__AlreadyHandledConsIds_78;
#line 735 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_35_35;
#line 735 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_36_36;
#line 735 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_37_37;
#line 735 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_38_38;

#line 732 "switch_detection.m"
            *check_hlds__switch_detection__Left_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "switch_detection.m"
            check_hlds__switch_detection__CasesMap_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_20, (MR_Integer) 0)));
#line 524 "switch_detection.m"
            check_hlds__switch_detection__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_20, (MR_Integer) 1)));
#line 524 "switch_detection.m"
            {
#line 524 "switch_detection.m"
              check_hlds__switch_detection__V_26_26 = mercury__map__count_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, check_hlds__switch_detection__CasesMap_67);
            }
#line 733 "switch_detection.m"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_26_26 >= (MR_Integer) 1);
#line 732 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 732 "switch_detection.m"
              {
#line 434 "switch_detection.m"
                check_hlds__switch_detection__CasesMap_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_20, (MR_Integer) 0)));
#line 434 "switch_detection.m"
                check_hlds__switch_detection__ConflictIds_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_20, (MR_Integer) 1)));
#line 7591 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_15_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7593 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_16_83 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0;
#line 435 "switch_detection.m"
                {
#line 435 "switch_detection.m"
                  mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_15_82, check_hlds__switch_detection__TypeCtorInfo_16_83, check_hlds__switch_detection__CasesMap_74, &check_hlds__switch_detection__CasesAssocList_76);
                }
#line 436 "switch_detection.m"
                check_hlds__switch_detection__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "switch_detection.m"
                {
#line 436 "switch_detection.m"
                  check_hlds__switch_detection__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 436 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0]));
#line 436 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 1) = ((MR_Box) (check_hlds__switch_detection__partition_disj_7_p_0_2));
#line 436 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 436 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 3) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_10));
#line 436 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_79_79, 4) = ((MR_Box) (check_hlds__switch_detection__ConflictIds_75));
#line 436 "switch_detection.m"
                }
#line 437 "switch_detection.m"
                {
#line 437 "switch_detection.m"
                  check_hlds__switch_detection__V_81_81 = mercury__set_tree234__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_15_82);
                }
#line 7623 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_22_89 = (MR_Word) &check_hlds__switch_detection_scalar_common_2[0];
#line 7625 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_23_90 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[2];
#line 7627 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeInfo_24_91 = (MR_Word) &check_hlds__switch_detection_scalar_common_1[3];
#line 436 "switch_detection.m"
                {
#line 436 "switch_detection.m"
                  mercury__list__foldl2_6_p_0(check_hlds__switch_detection__TypeInfo_22_89, check_hlds__switch_detection__TypeInfo_23_90, check_hlds__switch_detection__TypeInfo_24_91, check_hlds__switch_detection__V_79_79, check_hlds__switch_detection__CasesAssocList_76, ((MR_Box) (check_hlds__switch_detection__V_80_80)), &check_hlds__switch_detection__conv7_Cases_77, ((MR_Box) (check_hlds__switch_detection__V_81_81)), &check_hlds__switch_detection__conv6__AlreadyHandledConsIds_78);
                }
#line 436 "switch_detection.m"
                check_hlds__switch_detection__Cases_77 = ((MR_Word) check_hlds__switch_detection__conv7_Cases_77);
#line 436 "switch_detection.m"
                check_hlds__switch_detection___AlreadyHandledConsIds_78 = ((MR_Word) check_hlds__switch_detection__conv6__AlreadyHandledConsIds_78);
#line 7638 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_25_92 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 438 "switch_detection.m"
                {
#line 438 "switch_detection.m"
                  mercury__list__sort_2_p_0(check_hlds__switch_detection__TypeCtorInfo_25_92, check_hlds__switch_detection__Cases_77, check_hlds__switch_detection__Cases_12);
                }
#line 735 "switch_detection.m"
                check_hlds__switch_detection__V_29_29 = (MR_Integer) 0;
#line 735 "switch_detection.m"
                check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 0)));
#line 735 "switch_detection.m"
                check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 1)));
#line 735 "switch_detection.m"
                check_hlds__switch_detection__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 2)));
#line 735 "switch_detection.m"
                check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21, (MR_Integer) 3)));
#line 735 "switch_detection.m"
                {
#line 735 "switch_detection.m"
                  MR_Word base;
#line 735 "switch_detection.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 735 "switch_detection.m"
                  *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22 = base;
#line 735 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_35_35));
#line 735 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__V_36_36));
#line 735 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__switch_detection__V_37_37));
#line 735 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__switch_detection__V_29_29));
#line 735 "switch_detection.m"
                }
#line 735 "switch_detection.m"
                check_hlds__switch_detection__succeeded = MR_TRUE;
#line 732 "switch_detection.m"
              }
#line 732 "switch_detection.m"
          }
#line 736 "switch_detection.m"
        else
#line 737 "switch_detection.m"
          {
#line 737 "switch_detection.m"
            *check_hlds__switch_detection__Left_11 = check_hlds__switch_detection__Left1_15;
#line 738 "switch_detection.m"
            {
#line 738 "switch_detection.m"
              *check_hlds__switch_detection__Cases_12 = check_hlds__switch_detection__convert_cases_table_2_f_0(check_hlds__switch_detection__GoalInfo_10, check_hlds__switch_detection__CasesTable1_16);
            }
#line 737 "switch_detection.m"
            *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_22 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_21;
#line 737 "switch_detection.m"
            check_hlds__switch_detection__succeeded = MR_TRUE;
#line 737 "switch_detection.m"
          }
#line 724 "switch_detection.m"
      }
#line 714 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 714 "switch_detection.m"
  }
#line 710 "switch_detection.m"
}

#line 678 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__select_best_switch_3_p_0(
#line 678 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 678 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 678 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__BestAgain_3)
#line 678 "switch_detection.m"
{
#line 680 "switch_detection.m"
  while (MR_TRUE)
#line 680 "switch_detection.m"
    {
#line 680 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 680 "switch_detection.m"
      {
#line 680 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 680 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "switch_detection.m"
          *check_hlds__switch_detection__BestAgain_3 = check_hlds__switch_detection__HeadVar__2_2;
#line 680 "switch_detection.m"
        else
#line 681 "switch_detection.m"
          {
#line 681 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Again_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 681 "switch_detection.m"
            MR_Word check_hlds__switch_detection__AgainList_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 681 "switch_detection.m"
            MR_Word check_hlds__switch_detection__BestAgain1_17;
#line 683 "switch_detection.m"
            MR_Word check_hlds__switch_detection__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 683 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesList_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Again_5, (MR_Integer) 2)));
#line 683 "switch_detection.m"
            MR_Word check_hlds__switch_detection__BestCasesList_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 2)));
#line 683 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__Length_15;
#line 683 "switch_detection.m"
            MR_Integer check_hlds__switch_detection__BestLength_16;
#line 683 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Again_5, (MR_Integer) 0)));
#line 683 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Again_5, (MR_Integer) 1)));
#line 684 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 684 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));

#line 685 "switch_detection.m"
            {
#line 685 "switch_detection.m"
              mercury__list__length_2_p_0(check_hlds__switch_detection__TypeCtorInfo_18_18, check_hlds__switch_detection__CasesList_11, &check_hlds__switch_detection__Length_15);
            }
#line 686 "switch_detection.m"
            {
#line 686 "switch_detection.m"
              mercury__list__length_2_p_0(check_hlds__switch_detection__TypeCtorInfo_18_18, check_hlds__switch_detection__BestCasesList_14, &check_hlds__switch_detection__BestLength_16);
            }
#line 687 "switch_detection.m"
            check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__Length_15 < check_hlds__switch_detection__BestLength_16);
#line 690 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 689 "switch_detection.m"
              check_hlds__switch_detection__BestAgain1_17 = check_hlds__switch_detection__HeadVar__2_2;
#line 690 "switch_detection.m"
            else
#line 691 "switch_detection.m"
              check_hlds__switch_detection__BestAgain1_17 = check_hlds__switch_detection__Again_5;
#line 693 "switch_detection.m"
            /* direct tailcall eliminated */
#line 693 "switch_detection.m"
            {
#line 693 "switch_detection.m"
              MR_Word check_hlds__switch_detection__HeadVar__1__tmp_copy_1 = check_hlds__switch_detection__AgainList_6;
#line 693 "switch_detection.m"
              MR_Word check_hlds__switch_detection__HeadVar__2__tmp_copy_2 = check_hlds__switch_detection__BestAgain1_17;

#line 693 "switch_detection.m"
              check_hlds__switch_detection__HeadVar__2_2 = check_hlds__switch_detection__HeadVar__2__tmp_copy_2;
#line 693 "switch_detection.m"
              check_hlds__switch_detection__HeadVar__1_1 = check_hlds__switch_detection__HeadVar__1__tmp_copy_1;
#line 693 "switch_detection.m"
            }
#line 693 "switch_detection.m"
            continue;
#line 681 "switch_detection.m"
          }
#line 680 "switch_detection.m"
      }
#line 680 "switch_detection.m"
      break;
#line 680 "switch_detection.m"
    }
#line 678 "switch_detection.m"
}

#line 605 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_disj_9_p_0(
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_1,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__AllVars_2,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Disjuncts0_3,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__4_4,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_5,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__AgainList0_6,
#line 605 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__7_7,
#line 605 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8,
#line 605 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9)
#line 605 "switch_detection.m"
{
#line 611 "switch_detection.m"
  while (MR_TRUE)
#line 611 "switch_detection.m"
    {
#line 611 "switch_detection.m"
      /* tailcall optimized into a loop */
#line 611 "switch_detection.m"
      {
#line 611 "switch_detection.m"
        MR_bool check_hlds__switch_detection__succeeded;

#line 611 "switch_detection.m"
        if ((check_hlds__switch_detection__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 663 "switch_detection.m"
          {
#line 663 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Disjuncts_52;

#line 667 "switch_detection.m"
            if ((check_hlds__switch_detection__AgainList0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "switch_detection.m"
              {
#line 665 "switch_detection.m"
                check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__Disjuncts0_3, &check_hlds__switch_detection__Disjuncts_52, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
              }
#line 667 "switch_detection.m"
            else
#line 668 "switch_detection.m"
              {
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Again_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AgainList0_6, (MR_Integer) 0)));
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__AgainList1_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AgainList0_6, (MR_Integer) 1)));
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__BestAgain_56;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Var_57;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Left0_58;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__CasesList_59;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__SwitchGoalExpr_60;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Left_61;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__LeftList_62;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_65_65;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_69_69;
#line 668 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_70_70;

#line 669 "switch_detection.m"
                {
#line 669 "switch_detection.m"
                  check_hlds__switch_detection__select_best_switch_3_p_0(check_hlds__switch_detection__AgainList1_55, check_hlds__switch_detection__Again_54, &check_hlds__switch_detection__BestAgain_56);
                }
#line 670 "switch_detection.m"
                check_hlds__switch_detection__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__BestAgain_56, (MR_Integer) 0)));
#line 670 "switch_detection.m"
                check_hlds__switch_detection__Left0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__BestAgain_56, (MR_Integer) 1)));
#line 670 "switch_detection.m"
                check_hlds__switch_detection__CasesList_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__BestAgain_56, (MR_Integer) 2)));
#line 671 "switch_detection.m"
                {
#line 671 "switch_detection.m"
                  check_hlds__switch_detection__cases_to_switch_6_p_0(check_hlds__switch_detection__Var_57, check_hlds__switch_detection__CasesList_59, check_hlds__switch_detection__InstMap_5, &check_hlds__switch_detection__SwitchGoalExpr_60, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_65_65);
                }
#line 672 "switch_detection.m"
                {
#line 672 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_disj_9_p_0(check_hlds__switch_detection__GoalInfo_1, check_hlds__switch_detection__AllVars_2, check_hlds__switch_detection__Left0_58, check_hlds__switch_detection__AllVars_2, check_hlds__switch_detection__InstMap_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__switch_detection__Left_61, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_65_65, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
                }
#line 674 "switch_detection.m"
                {
#line 674 "switch_detection.m"
                  check_hlds__switch_detection__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_69_69, 0) = ((MR_Box) (check_hlds__switch_detection__Left_61));
#line 674 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_69_69, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_1));
#line 674 "switch_detection.m"
                }
#line 674 "switch_detection.m"
                {
#line 674 "switch_detection.m"
                  hlds__hlds_goal__goal_to_disj_list_2_p_0(check_hlds__switch_detection__V_69_69, &check_hlds__switch_detection__LeftList_62);
                }
#line 675 "switch_detection.m"
                {
#line 675 "switch_detection.m"
                  check_hlds__switch_detection__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_70_70, 0) = ((MR_Box) (check_hlds__switch_detection__SwitchGoalExpr_60));
#line 675 "switch_detection.m"
                  MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_70_70, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_1));
#line 675 "switch_detection.m"
                }
#line 675 "switch_detection.m"
                {
#line 675 "switch_detection.m"
                  check_hlds__switch_detection__Disjuncts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_52, 0) = ((MR_Box) (check_hlds__switch_detection__V_70_70));
#line 675 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Disjuncts_52, 1) = ((MR_Box) (check_hlds__switch_detection__LeftList_62));
#line 675 "switch_detection.m"
                }
#line 668 "switch_detection.m"
              }
#line 663 "switch_detection.m"
            {
#line 663 "switch_detection.m"
              MR_Word base;
#line 663 "switch_detection.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "switch_detection.m"
              *check_hlds__switch_detection__HeadVar__7_7 = base;
#line 663 "switch_detection.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 663 "switch_detection.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Disjuncts_52));
#line 663 "switch_detection.m"
            }
#line 663 "switch_detection.m"
          }
#line 611 "switch_detection.m"
        else
#line 611 "switch_detection.m"
          {
#line 611 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__4_4, (MR_Integer) 0)));
#line 611 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__4_4, (MR_Integer) 1)));
#line 611 "switch_detection.m"
            MR_Word check_hlds__switch_detection__ModuleInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 0)));
#line 611 "switch_detection.m"
            MR_Word check_hlds__switch_detection__VarInst0_20;
#line 613 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 1)));
#line 613 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 2)));
#line 613 "switch_detection.m"
            MR_Word check_hlds__switch_detection__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, (MR_Integer) 3)));
#line 658 "switch_detection.m"
            MR_Word check_hlds__switch_detection__Left_21;
#line 658 "switch_detection.m"
            MR_Word check_hlds__switch_detection__CasesList_22;
#line 658 "switch_detection.m"
            MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_37_37;

#line 614 "switch_detection.m"
            {
#line 614 "switch_detection.m"
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__Var_13, &check_hlds__switch_detection__VarInst0_20);
            }
#line 616 "switch_detection.m"
            {
#line 616 "switch_detection.m"
              check_hlds__switch_detection__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__switch_detection__ModuleInfo_19, check_hlds__switch_detection__VarInst0_20);
            }
#line 616 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 617 "switch_detection.m"
              {
#line 617 "switch_detection.m"
                check_hlds__switch_detection__succeeded = check_hlds__switch_detection__partition_disj_7_p_0(check_hlds__switch_detection__Disjuncts0_3, check_hlds__switch_detection__Var_13, check_hlds__switch_detection__GoalInfo_1, &check_hlds__switch_detection__Left_21, &check_hlds__switch_detection__CasesList_22, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_37_37);
              }
#line 658 "switch_detection.m"
            if (check_hlds__switch_detection__succeeded)
#line 640 "switch_detection.m"
              if ((check_hlds__switch_detection__Left_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 628 "switch_detection.m"
                if ((check_hlds__switch_detection__CasesList_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "switch_detection.m"
                  {
#line 635 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__Disjuncts_27;

#line 636 "switch_detection.m"
                    {
#line 636 "switch_detection.m"
                      check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__Disjuncts0_3, &check_hlds__switch_detection__Disjuncts_27, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_37_37, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
                    }
#line 638 "switch_detection.m"
                    {
#line 638 "switch_detection.m"
                      MR_Word base;
#line 638 "switch_detection.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "switch_detection.m"
                      *check_hlds__switch_detection__HeadVar__7_7 = base;
#line 638 "switch_detection.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 638 "switch_detection.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Disjuncts_27));
#line 638 "switch_detection.m"
                    }
#line 635 "switch_detection.m"
                  }
#line 628 "switch_detection.m"
                else
#line 632 "switch_detection.m"
                  {
#line 632 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__CasesList_22, (MR_Integer) 1)));
#line 630 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__CasesList_22, (MR_Integer) 0)));

#line 632 "switch_detection.m"
                    if ((check_hlds__switch_detection__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "switch_detection.m"
                      {
#line 635 "switch_detection.m"
                        MR_Word check_hlds__switch_detection__Disjuncts_75;

#line 636 "switch_detection.m"
                        {
#line 636 "switch_detection.m"
                          check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__Disjuncts0_3, &check_hlds__switch_detection__Disjuncts_75, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_37_37, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
                        }
#line 638 "switch_detection.m"
                        {
#line 638 "switch_detection.m"
                          MR_Word base;
#line 638 "switch_detection.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "switch_detection.m"
                          *check_hlds__switch_detection__HeadVar__7_7 = base;
#line 638 "switch_detection.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 638 "switch_detection.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Disjuncts_75));
#line 638 "switch_detection.m"
                        }
#line 635 "switch_detection.m"
                      }
#line 632 "switch_detection.m"
                    else
#line 631 "switch_detection.m"
                      {
#line 631 "switch_detection.m"
                        check_hlds__switch_detection__cases_to_switch_6_p_0(check_hlds__switch_detection__Var_13, check_hlds__switch_detection__CasesList_22, check_hlds__switch_detection__InstMap_5, check_hlds__switch_detection__HeadVar__7_7, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_37_37, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_9);
#line 631 "switch_detection.m"
                        return;
                      }
#line 632 "switch_detection.m"
                  }
#line 640 "switch_detection.m"
              else
#line 642 "switch_detection.m"
                {
#line 642 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__AgainList1_33;

#line 648 "switch_detection.m"
                  if ((check_hlds__switch_detection__CasesList_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "switch_detection.m"
                    check_hlds__switch_detection__AgainList1_33 = check_hlds__switch_detection__AgainList0_6;
#line 648 "switch_detection.m"
                  else
#line 648 "switch_detection.m"
                    {
#line 648 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__CasesList_22, (MR_Integer) 1)));
#line 646 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__CasesList_22, (MR_Integer) 0)));

#line 648 "switch_detection.m"
                      if ((check_hlds__switch_detection__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "switch_detection.m"
                        check_hlds__switch_detection__AgainList1_33 = check_hlds__switch_detection__AgainList0_6;
#line 648 "switch_detection.m"
                      else
#line 646 "switch_detection.m"
                        {
#line 646 "switch_detection.m"
                          MR_Word check_hlds__switch_detection__V_40_40;

#line 647 "switch_detection.m"
                          {
#line 647 "switch_detection.m"
                            check_hlds__switch_detection__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 647 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_40_40, 0) = ((MR_Box) (check_hlds__switch_detection__Var_13));
#line 647 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_40_40, 1) = ((MR_Box) (check_hlds__switch_detection__Left_21));
#line 647 "switch_detection.m"
                            MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_40_40, 2) = ((MR_Box) (check_hlds__switch_detection__CasesList_22));
#line 647 "switch_detection.m"
                          }
#line 647 "switch_detection.m"
                          {
#line 647 "switch_detection.m"
                            check_hlds__switch_detection__AgainList1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "switch_detection.m"
                            MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AgainList1_33, 0) = ((MR_Box) (check_hlds__switch_detection__V_40_40));
#line 647 "switch_detection.m"
                            MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AgainList1_33, 1) = ((MR_Box) (check_hlds__switch_detection__AgainList0_6));
#line 647 "switch_detection.m"
                          }
#line 646 "switch_detection.m"
                        }
#line 648 "switch_detection.m"
                    }
#line 655 "switch_detection.m"
                  /* direct tailcall eliminated */
#line 655 "switch_detection.m"
                  {
#line 655 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__HeadVar__4__tmp_copy_4 = check_hlds__switch_detection__Vars_14;
#line 655 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__AgainList0__tmp_copy_6 = check_hlds__switch_detection__AgainList1_33;
#line 655 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0__tmp_copy_8 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_37_37;

#line 655 "switch_detection.m"
                    check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_8 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0__tmp_copy_8;
#line 655 "switch_detection.m"
                    check_hlds__switch_detection__AgainList0_6 = check_hlds__switch_detection__AgainList0__tmp_copy_6;
#line 655 "switch_detection.m"
                    check_hlds__switch_detection__HeadVar__4_4 = check_hlds__switch_detection__HeadVar__4__tmp_copy_4;
#line 655 "switch_detection.m"
                  }
#line 655 "switch_detection.m"
                  continue;
#line 642 "switch_detection.m"
                }
#line 658 "switch_detection.m"
            else
#line 659 "switch_detection.m"
              {
#line 659 "switch_detection.m"
                /* direct tailcall eliminated */
#line 659 "switch_detection.m"
                {
#line 659 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__HeadVar__4__tmp_copy_4 = check_hlds__switch_detection__Vars_14;

#line 659 "switch_detection.m"
                  check_hlds__switch_detection__HeadVar__4_4 = check_hlds__switch_detection__HeadVar__4__tmp_copy_4;
#line 659 "switch_detection.m"
                }
#line 659 "switch_detection.m"
                continue;
#line 659 "switch_detection.m"
              }
#line 611 "switch_detection.m"
          }
#line 611 "switch_detection.m"
      }
#line 611 "switch_detection.m"
      break;
#line 611 "switch_detection.m"
    }
#line 605 "switch_detection.m"
}

#line 567 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__add_multi_entry_for_cons_id_4_p_0(
#line 567 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Arm_5,
#line 567 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConsId_6,
#line 567 "switch_detection.m"
  MR_Word check_hlds__switch_detection__CasesTable0_7,
#line 567 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__CasesTable_8)
#line 567 "switch_detection.m"
{
#line 570 "switch_detection.m"
  {
#line 570 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 570 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable0_7, (MR_Integer) 0)));
#line 570 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ConflictConsIds0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable0_7, (MR_Integer) 1)));
#line 570 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ConflictConsIds_14;
#line 570 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesMap_18;
#line 587 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Entry0_11;
#line 572 "switch_detection.m"
    MR_Box check_hlds__switch_detection__conv0_Entry0_11;

#line 572 "switch_detection.m"
    {
#line 572 "switch_detection.m"
      check_hlds__switch_detection__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, check_hlds__switch_detection__CasesMap0_9, ((MR_Box) (check_hlds__switch_detection__ConsId_6)), &check_hlds__switch_detection__conv0_Entry0_11);
    }
#line 572 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 572 "switch_detection.m"
      {
#line 572 "switch_detection.m"
        check_hlds__switch_detection__Entry0_11 = ((MR_Word) check_hlds__switch_detection__conv0_Entry0_11);
#line 572 "switch_detection.m"
        check_hlds__switch_detection__succeeded = MR_TRUE;
#line 572 "switch_detection.m"
      }
#line 587 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 573 "switch_detection.m"
      {
#line 573 "switch_detection.m"
        MR_Word check_hlds__switch_detection__State0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry0_11, (MR_Integer) 0)));
#line 573 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Arms0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry0_11, (MR_Integer) 1)));
#line 573 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Arms_16;
#line 573 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Entry_17;

#line 579 "switch_detection.m"
#line 579 "switch_detection.m"
        switch (check_hlds__switch_detection__State0_12) {
#line 579 "switch_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 579 "switch_detection.m"
          case (MR_Integer) 0:
#line 579 "switch_detection.m"
          case (MR_Integer) 1:
#line 577 "switch_detection.m"
            {
#line 578 "switch_detection.m"
              {
#line 578 "switch_detection.m"
                mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__switch_detection__ConsId_6)), check_hlds__switch_detection__ConflictConsIds0_10, &check_hlds__switch_detection__ConflictConsIds_14);
              }
#line 577 "switch_detection.m"
            }
#line 579 "switch_detection.m"
            break;
#line 579 "switch_detection.m"
          case (MR_Integer) 2:
#line 581 "switch_detection.m"
            check_hlds__switch_detection__ConflictConsIds_14 = check_hlds__switch_detection__ConflictConsIds0_10;
#line 579 "switch_detection.m"
            break;
#line 579 "switch_detection.m"
        }
#line 584 "switch_detection.m"
        {
#line 584 "switch_detection.m"
          check_hlds__switch_detection__Arms_16 = mercury__cord__snoc_2_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0, check_hlds__switch_detection__Arms0_13, ((MR_Box) (check_hlds__switch_detection__Arm_5)));
        }
#line 585 "switch_detection.m"
        {
#line 585 "switch_detection.m"
          check_hlds__switch_detection__Entry_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_17, 0) = ((MR_Box) ((MR_Integer) 2));
#line 585 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_17, 1) = ((MR_Box) (check_hlds__switch_detection__Arms_16));
#line 585 "switch_detection.m"
        }
#line 586 "switch_detection.m"
        {
#line 586 "switch_detection.m"
          mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, ((MR_Box) (check_hlds__switch_detection__ConsId_6)), ((MR_Box) (check_hlds__switch_detection__Entry_17)), check_hlds__switch_detection__CasesMap0_9, &check_hlds__switch_detection__CasesMap_18);
        }
#line 573 "switch_detection.m"
      }
#line 587 "switch_detection.m"
    else
#line 588 "switch_detection.m"
      {
#line 588 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Arms_20;
#line 588 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Entry_21;

#line 589 "switch_detection.m"
        {
#line 589 "switch_detection.m"
          check_hlds__switch_detection__Arms_20 = mercury__cord__singleton_1_f_0((MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0, ((MR_Box) (check_hlds__switch_detection__Arm_5)));
        }
#line 590 "switch_detection.m"
        {
#line 590 "switch_detection.m"
          check_hlds__switch_detection__Entry_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_21, 0) = ((MR_Box) ((MR_Integer) 1));
#line 590 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_21, 1) = ((MR_Box) (check_hlds__switch_detection__Arms_20));
#line 590 "switch_detection.m"
        }
#line 591 "switch_detection.m"
        {
#line 591 "switch_detection.m"
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, ((MR_Box) (check_hlds__switch_detection__ConsId_6)), ((MR_Box) (check_hlds__switch_detection__Entry_21)), check_hlds__switch_detection__CasesMap0_9, &check_hlds__switch_detection__CasesMap_18);
        }
#line 592 "switch_detection.m"
        check_hlds__switch_detection__ConflictConsIds_14 = check_hlds__switch_detection__ConflictConsIds0_10;
#line 588 "switch_detection.m"
      }
#line 594 "switch_detection.m"
    {
#line 594 "switch_detection.m"
      MR_Word base;
#line 594 "switch_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "switch_detection.m"
      *check_hlds__switch_detection__CasesTable_8 = base;
#line 594 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__CasesMap_18));
#line 594 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__ConflictConsIds_14));
#line 594 "switch_detection.m"
    }
#line 570 "switch_detection.m"
  }
#line 567 "switch_detection.m"
}

#line 516 "switch_detection.m"
static MR_Word MR_CALL 
check_hlds__switch_detection__project_single_arm_goal_1_f_0(
#line 516 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1)
#line 516 "switch_detection.m"
{
#line 518 "switch_detection.m"
  {
#line 518 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 518 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Goal_2;

#line 518 "switch_detection.m"
    if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 519 "switch_detection.m"
      {
#line 520 "switch_detection.m"
        {
#line 520 "switch_detection.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "function \140check_hlds.switch_detection.project_single_arm_goal\'/1", (MR_String) "multi arm");
        }
#line 519 "switch_detection.m"
      }
#line 518 "switch_detection.m"
    else
#line 518 "switch_detection.m"
      {
#line 518 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));

#line 518 "switch_detection.m"
        check_hlds__switch_detection__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "switch_detection.m"
      }
#line 518 "switch_detection.m"
    return check_hlds__switch_detection__Goal_2;
#line 518 "switch_detection.m"
  }
#line 516 "switch_detection.m"
}

#line 511 "switch_detection.m"
static MR_Word MR_CALL 
check_hlds__switch_detection__project_arm_goal_1_f_0(
#line 511 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1)
#line 511 "switch_detection.m"
{
#line 513 "switch_detection.m"
  {
#line 513 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 513 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Goal_2;

#line 513 "switch_detection.m"
    if (((MR_tag((MR_Word) check_hlds__switch_detection__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 514 "switch_detection.m"
      {
#line 514 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));
#line 514 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));

#line 514 "switch_detection.m"
        check_hlds__switch_detection__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 2)));
#line 514 "switch_detection.m"
      }
#line 513 "switch_detection.m"
    else
#line 513 "switch_detection.m"
      {
#line 513 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 0)));

#line 513 "switch_detection.m"
        check_hlds__switch_detection__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__1_1, (MR_Integer) 1)));
#line 513 "switch_detection.m"
      }
#line 513 "switch_detection.m"
    return check_hlds__switch_detection__Goal_2;
#line 513 "switch_detection.m"
  }
#line 511 "switch_detection.m"
}

#line 491 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_6(
#line 491 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 491 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1)
#line 491 "switch_detection.m"
{
#line 491 "switch_detection.m"
  {
#line 491 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 491 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;

#line 491 "switch_detection.m"
    {
#line 491 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__491__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1));
    }
#line 491 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 491 "switch_detection.m"
  }
#line 491 "switch_detection.m"
}

#line 458 "switch_detection.m"
static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_5(
#line 458 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 458 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1)
#line 458 "switch_detection.m"
{
#line 458 "switch_detection.m"
  {
#line 458 "switch_detection.m"
    MR_Box check_hlds__switch_detection__wrapper_arg_2;
#line 458 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 458 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv1_Goal_2;

#line 458 "switch_detection.m"
    {
#line 458 "switch_detection.m"
      check_hlds__switch_detection__conv1_Goal_2 = check_hlds__switch_detection__project_arm_goal_1_f_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1));
    }
#line 458 "switch_detection.m"
    check_hlds__switch_detection__wrapper_arg_2 = ((MR_Box) (check_hlds__switch_detection__conv1_Goal_2));
#line 458 "switch_detection.m"
    return check_hlds__switch_detection__wrapper_arg_2;
#line 458 "switch_detection.m"
  }
#line 458 "switch_detection.m"
}

#line 456 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_4(
#line 456 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg)
#line 456 "switch_detection.m"
{
#line 456 "switch_detection.m"
  {
#line 456 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 456 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;

#line 456 "switch_detection.m"
    {
#line 456 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__456__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))));
    }
#line 456 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 456 "switch_detection.m"
  }
#line 456 "switch_detection.m"
}

#line 467 "switch_detection.m"
static MR_Box MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_3(
#line 467 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 467 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1)
#line 467 "switch_detection.m"
{
#line 467 "switch_detection.m"
  {
#line 467 "switch_detection.m"
    MR_Box check_hlds__switch_detection__wrapper_arg_2;
#line 467 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 467 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_Goal_2;

#line 467 "switch_detection.m"
    {
#line 467 "switch_detection.m"
      check_hlds__switch_detection__conv0_Goal_2 = check_hlds__switch_detection__project_single_arm_goal_1_f_0(((MR_Word) check_hlds__switch_detection__wrapper_arg_1));
    }
#line 467 "switch_detection.m"
    check_hlds__switch_detection__wrapper_arg_2 = ((MR_Box) (check_hlds__switch_detection__conv0_Goal_2));
#line 467 "switch_detection.m"
    return check_hlds__switch_detection__wrapper_arg_2;
#line 467 "switch_detection.m"
  }
#line 467 "switch_detection.m"
}

#line 465 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_2(
#line 465 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg)
#line 465 "switch_detection.m"
{
#line 465 "switch_detection.m"
  {
#line 465 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 465 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;

#line 465 "switch_detection.m"
    {
#line 465 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__465__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))));
    }
#line 465 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 465 "switch_detection.m"
  }
#line 465 "switch_detection.m"
}

#line 448 "switch_detection.m"
static MR_bool MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0_1(
#line 448 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg)
#line 448 "switch_detection.m"
{
#line 448 "switch_detection.m"
  {
#line 448 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 448 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;

#line 448 "switch_detection.m"
    {
#line 448 "switch_detection.m"
      return check_hlds__switch_detection__succeeded = check_hlds__switch_detection__IntroducedFrom__pred__convert_case__448__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))));
    }
#line 448 "switch_detection.m"
    return check_hlds__switch_detection__succeeded;
#line 448 "switch_detection.m"
  }
#line 448 "switch_detection.m"
}

#line 440 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__convert_case_7_p_0(
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ConflictConsIds_9,
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Cases_0_30,
#line 440 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Cases_31,
#line 440 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_32,
#line 440 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_33)
#line 440 "switch_detection.m"
{
#line 445 "switch_detection.m"
  {
#line 445 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 445 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 445 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Entry_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 445 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_11, (MR_Integer) 1)));
#line 445 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Entry_11, (MR_Integer) 0)));

#line 446 "switch_detection.m"
    {
#line 446 "switch_detection.m"
      check_hlds__switch_detection__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_32, ((MR_Box) (check_hlds__switch_detection__ConsId_10)));
    }
#line 450 "switch_detection.m"
    if (check_hlds__switch_detection__succeeded)
#line 447 "switch_detection.m"
      {
#line 447 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_34_34;

#line 448 "switch_detection.m"
        {
#line 448 "switch_detection.m"
          check_hlds__switch_detection__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 448 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_34_34, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[0]));
#line 448 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_34_34, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_1));
#line 448 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 448 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_34_34, 3) = ((MR_Box) ((MR_Integer) 1));
#line 448 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_34_34, 4) = ((MR_Box) (check_hlds__switch_detection__V_94_94));
#line 448 "switch_detection.m"
        }
#line 448 "switch_detection.m"
        {
#line 448 "switch_detection.m"
          mercury__require__expect_4_p_0(check_hlds__switch_detection__V_34_34, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "already handled but not cons_id_has_one_multi");
        }
#line 447 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_33 = check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_32;
#line 447 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_Cases_31 = check_hlds__switch_detection__STATE_VARIABLE_Cases_0_30;
#line 447 "switch_detection.m"
      }
#line 450 "switch_detection.m"
    else
#line 451 "switch_detection.m"
      {
#line 451 "switch_detection.m"
        MR_Word check_hlds__switch_detection__TypeCtorInfo_79_79 = (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0;
#line 451 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Arms_17;

#line 452 "switch_detection.m"
        {
#line 452 "switch_detection.m"
          check_hlds__switch_detection__Arms_17 = mercury__cord__list_1_f_0(check_hlds__switch_detection__TypeCtorInfo_79_79, check_hlds__switch_detection__V_93_93);
        }
#line 462 "switch_detection.m"
#line 462 "switch_detection.m"
        switch (check_hlds__switch_detection__V_94_94) {
#line 462 "switch_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 462 "switch_detection.m"
          case (MR_Integer) 0:
#line 463 "switch_detection.m"
            {
#line 463 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_49_49;
#line 463 "switch_detection.m"
              MR_Word check_hlds__switch_detection__IsMember_65;
#line 463 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Disjuncts_66;
#line 463 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Goal_67;
#line 463 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Case_68;

#line 464 "switch_detection.m"
              {
#line 464 "switch_detection.m"
                mercury__set_tree234__is_member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__ConflictConsIds_9, ((MR_Box) (check_hlds__switch_detection__ConsId_10)), &check_hlds__switch_detection__IsMember_65);
              }
#line 465 "switch_detection.m"
              {
#line 465 "switch_detection.m"
                check_hlds__switch_detection__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 465 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[1]));
#line 465 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_2));
#line 465 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 465 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 3) = ((MR_Box) ((MR_Integer) 0));
#line 465 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_49_49, 4) = ((MR_Box) (check_hlds__switch_detection__IsMember_65));
#line 465 "switch_detection.m"
              }
#line 465 "switch_detection.m"
              {
#line 465 "switch_detection.m"
                mercury__require__expect_4_p_0(check_hlds__switch_detection__V_49_49, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "singles status but in ConflictConsIds");
              }
#line 467 "switch_detection.m"
              {
#line 467 "switch_detection.m"
                check_hlds__switch_detection__Disjuncts_66 = mercury__list__map_2_f_0(check_hlds__switch_detection__TypeCtorInfo_79_79, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__switch_detection_scalar_common_2[3], check_hlds__switch_detection__Arms_17);
              }
#line 468 "switch_detection.m"
              {
#line 468 "switch_detection.m"
                hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__switch_detection__Disjuncts_66, check_hlds__switch_detection__GoalInfo_8, &check_hlds__switch_detection__Goal_67);
              }
#line 469 "switch_detection.m"
              {
#line 469 "switch_detection.m"
                check_hlds__switch_detection__Case_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 469 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_68, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_10));
#line 469 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 469 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_68, 2) = ((MR_Box) (check_hlds__switch_detection__Goal_67));
#line 469 "switch_detection.m"
              }
#line 470 "switch_detection.m"
              {
#line 470 "switch_detection.m"
                MR_Word base;
#line 470 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Cases_31 = base;
#line 470 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Case_68));
#line 470 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_Cases_0_30));
#line 470 "switch_detection.m"
              }
#line 463 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_33 = check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_32;
#line 463 "switch_detection.m"
            }
#line 462 "switch_detection.m"
            break;
#line 462 "switch_detection.m"
          case (MR_Integer) 2:
#line 454 "switch_detection.m"
            {
#line 454 "switch_detection.m"
              MR_Word check_hlds__switch_detection__IsMember_18;
#line 454 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Disjuncts_19;
#line 454 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Goal_20;
#line 454 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Case_21;
#line 454 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_57_57;

#line 455 "switch_detection.m"
              {
#line 455 "switch_detection.m"
                mercury__set_tree234__is_member_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__switch_detection__ConflictConsIds_9, ((MR_Box) (check_hlds__switch_detection__ConsId_10)), &check_hlds__switch_detection__IsMember_18);
              }
#line 456 "switch_detection.m"
              {
#line 456 "switch_detection.m"
                check_hlds__switch_detection__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 456 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[1]));
#line 456 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_4));
#line 456 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 456 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 3) = ((MR_Box) (check_hlds__switch_detection__IsMember_18));
#line 456 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_57_57, 4) = ((MR_Box) ((MR_Integer) 1));
#line 456 "switch_detection.m"
              }
#line 456 "switch_detection.m"
              {
#line 456 "switch_detection.m"
                mercury__require__expect_4_p_0(check_hlds__switch_detection__V_57_57, (MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "conflict status but not in ConflictConsIds");
              }
#line 458 "switch_detection.m"
              {
#line 458 "switch_detection.m"
                check_hlds__switch_detection__Disjuncts_19 = mercury__list__map_2_f_0(check_hlds__switch_detection__TypeCtorInfo_79_79, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__switch_detection_scalar_common_2[4], check_hlds__switch_detection__Arms_17);
              }
#line 459 "switch_detection.m"
              {
#line 459 "switch_detection.m"
                hlds__hlds_goal__disj_list_to_goal_3_p_0(check_hlds__switch_detection__Disjuncts_19, check_hlds__switch_detection__GoalInfo_8, &check_hlds__switch_detection__Goal_20);
              }
#line 460 "switch_detection.m"
              {
#line 460 "switch_detection.m"
                check_hlds__switch_detection__Case_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 460 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_21, 0) = ((MR_Box) (check_hlds__switch_detection__ConsId_10));
#line 460 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "switch_detection.m"
                MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_21, 2) = ((MR_Box) (check_hlds__switch_detection__Goal_20));
#line 460 "switch_detection.m"
              }
#line 461 "switch_detection.m"
              {
#line 461 "switch_detection.m"
                MR_Word base;
#line 461 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_Cases_31 = base;
#line 461 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Case_21));
#line 461 "switch_detection.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_Cases_0_30));
#line 461 "switch_detection.m"
              }
#line 454 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_33 = check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_32;
#line 454 "switch_detection.m"
            }
#line 462 "switch_detection.m"
            break;
#line 462 "switch_detection.m"
          case (MR_Integer) 1:
#line 472 "switch_detection.m"
            {
#line 472 "switch_detection.m"
              MR_Word check_hlds__switch_detection__MainConsId0_23;
#line 472 "switch_detection.m"
              MR_Word check_hlds__switch_detection__OtherConsIds0_24;
#line 472 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Goal_72;
#line 474 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Arm_22;
#line 474 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_39_39;

#line 474 "switch_detection.m"
              check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__Arms_17)) == (MR_mktag((MR_Integer) 1)));
#line 474 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 474 "switch_detection.m"
                {
#line 474 "switch_detection.m"
                  check_hlds__switch_detection__Arm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arms_17, (MR_Integer) 0)));
#line 474 "switch_detection.m"
                  check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arms_17, (MR_Integer) 1)));
#line 474 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "switch_detection.m"
                  if (check_hlds__switch_detection__succeeded)
#line 474 "switch_detection.m"
                    {
#line 475 "switch_detection.m"
                      check_hlds__switch_detection__succeeded = ((MR_tag((MR_Word) check_hlds__switch_detection__Arm_22)) == (MR_mktag((MR_Integer) 1)));
#line 475 "switch_detection.m"
                      if (check_hlds__switch_detection__succeeded)
#line 475 "switch_detection.m"
                        {
#line 475 "switch_detection.m"
                          check_hlds__switch_detection__MainConsId0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arm_22, (MR_Integer) 0)));
#line 475 "switch_detection.m"
                          check_hlds__switch_detection__OtherConsIds0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arm_22, (MR_Integer) 1)));
#line 475 "switch_detection.m"
                          check_hlds__switch_detection__Goal_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__Arm_22, (MR_Integer) 2)));
#line 475 "switch_detection.m"
                        }
#line 474 "switch_detection.m"
                    }
#line 474 "switch_detection.m"
                }
#line 472 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 489 "switch_detection.m"
                {
#line 489 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__TypeCtorInfo_92_92;
#line 489 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__AllConsIds0_25;
#line 489 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__AllConsIds_27;
#line 489 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_40_40;
#line 491 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__V_26_26;

#line 489 "switch_detection.m"
                  {
#line 489 "switch_detection.m"
                    check_hlds__switch_detection__AllConsIds0_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "switch_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AllConsIds0_25, 0) = ((MR_Box) (check_hlds__switch_detection__MainConsId0_23));
#line 489 "switch_detection.m"
                    MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AllConsIds0_25, 1) = ((MR_Box) (check_hlds__switch_detection__OtherConsIds0_24));
#line 489 "switch_detection.m"
                  }
#line 491 "switch_detection.m"
                  {
#line 491 "switch_detection.m"
                    check_hlds__switch_detection__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 491 "switch_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_40_40, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_4[3]));
#line 491 "switch_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_40_40, 1) = ((MR_Box) (check_hlds__switch_detection__convert_case_7_p_0_6));
#line 491 "switch_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 491 "switch_detection.m"
                    MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_40_40, 3) = ((MR_Box) (check_hlds__switch_detection__ConflictConsIds_9));
#line 491 "switch_detection.m"
                  }
#line 8953 "check_hlds.switch_detection.c"
                  check_hlds__switch_detection__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 491 "switch_detection.m"
                  {
#line 491 "switch_detection.m"
                    mercury__list__filter_4_p_0(check_hlds__switch_detection__TypeCtorInfo_92_92, check_hlds__switch_detection__V_40_40, check_hlds__switch_detection__AllConsIds0_25, &check_hlds__switch_detection__V_26_26, &check_hlds__switch_detection__AllConsIds_27);
                  }
#line 499 "switch_detection.m"
                  if ((check_hlds__switch_detection__AllConsIds_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "switch_detection.m"
                    {
#line 502 "switch_detection.m"
                      {
#line 502 "switch_detection.m"
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "cons_id_has_one_multi: AllConsIds = []");
#line 502 "switch_detection.m"
                        return;
                      }
#line 500 "switch_detection.m"
                    }
#line 499 "switch_detection.m"
                  else
#line 494 "switch_detection.m"
                    {
#line 494 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__MainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AllConsIds_27, (MR_Integer) 0)));
#line 494 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__OtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__AllConsIds_27, (MR_Integer) 1)));
#line 494 "switch_detection.m"
                      MR_Word check_hlds__switch_detection__Case_69;

#line 495 "switch_detection.m"
                      {
#line 495 "switch_detection.m"
                        check_hlds__switch_detection__Case_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 495 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_69, 0) = ((MR_Box) (check_hlds__switch_detection__MainConsId_28));
#line 495 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_69, 1) = ((MR_Box) (check_hlds__switch_detection__OtherConsIds_29));
#line 495 "switch_detection.m"
                        MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_69, 2) = ((MR_Box) (check_hlds__switch_detection__Goal_72));
#line 495 "switch_detection.m"
                      }
#line 496 "switch_detection.m"
                      {
#line 496 "switch_detection.m"
                        mercury__set_tree234__insert_list_3_p_0(check_hlds__switch_detection__TypeCtorInfo_92_92, check_hlds__switch_detection__OtherConsIds_29, check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_0_32, check_hlds__switch_detection__STATE_VARIABLE_AlreadyHandledConsIds_33);
                      }
#line 498 "switch_detection.m"
                      {
#line 498 "switch_detection.m"
                        MR_Word base;
#line 498 "switch_detection.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "switch_detection.m"
                        *check_hlds__switch_detection__STATE_VARIABLE_Cases_31 = base;
#line 498 "switch_detection.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Case_69));
#line 498 "switch_detection.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_Cases_0_30));
#line 498 "switch_detection.m"
                      }
#line 494 "switch_detection.m"
                    }
#line 489 "switch_detection.m"
                }
#line 472 "switch_detection.m"
              else
#line 506 "switch_detection.m"
                {
#line 506 "switch_detection.m"
                  {
#line 506 "switch_detection.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.convert_case\'/7", (MR_String) "misleading cons_id_has_one_multi");
#line 506 "switch_detection.m"
                    return;
                  }
#line 506 "switch_detection.m"
                }
#line 472 "switch_detection.m"
            }
#line 462 "switch_detection.m"
            break;
#line 462 "switch_detection.m"
        }
#line 451 "switch_detection.m"
      }
#line 445 "switch_detection.m"
  }
#line 440 "switch_detection.m"
}

#line 436 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0_1(
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__closure_arg,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_1,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_2,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_3,
#line 436 "switch_detection.m"
  MR_Box check_hlds__switch_detection__wrapper_arg_4,
#line 436 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__wrapper_arg_5)
#line 436 "switch_detection.m"
{
#line 436 "switch_detection.m"
  {
#line 436 "switch_detection.m"
    MR_Box check_hlds__switch_detection__closure = check_hlds__switch_detection__closure_arg;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_31;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_33;

#line 436 "switch_detection.m"
    {
#line 436 "switch_detection.m"
      check_hlds__switch_detection__convert_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__switch_detection__wrapper_arg_1), ((MR_Word) check_hlds__switch_detection__wrapper_arg_2), &check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_31, ((MR_Word) check_hlds__switch_detection__wrapper_arg_4), &check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_33);
    }
#line 436 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_3 = ((MR_Box) (check_hlds__switch_detection__conv1_STATE_VARIABLE_Cases_31));
#line 436 "switch_detection.m"
    *check_hlds__switch_detection__wrapper_arg_5 = ((MR_Box) (check_hlds__switch_detection__conv0_STATE_VARIABLE_AlreadyHandledConsIds_33));
#line 436 "switch_detection.m"
  }
#line 436 "switch_detection.m"
}

#line 431 "switch_detection.m"
static MR_Word MR_CALL 
check_hlds__switch_detection__convert_cases_table_2_f_0(
#line 431 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_4,
#line 431 "switch_detection.m"
  MR_Word check_hlds__switch_detection__CasesTable_5)
#line 431 "switch_detection.m"
{
#line 433 "switch_detection.m"
  {
#line 433 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 433 "switch_detection.m"
    MR_Word check_hlds__switch_detection__SortedCases_6;
#line 433 "switch_detection.m"
    MR_Word check_hlds__switch_detection__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 433 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_5, (MR_Integer) 0)));
#line 433 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ConflictIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__CasesTable_5, (MR_Integer) 1)));
#line 433 "switch_detection.m"
    MR_Word check_hlds__switch_detection__CasesAssocList_9;
#line 433 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Cases_10;
#line 433 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_12_12;
#line 433 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_14_14;
#line 436 "switch_detection.m"
    MR_Word check_hlds__switch_detection___AlreadyHandledConsIds_11;
#line 436 "switch_detection.m"
    MR_Box check_hlds__switch_detection__conv3_Cases_10;
#line 436 "switch_detection.m"
    MR_Box check_hlds__switch_detection__conv2__AlreadyHandledConsIds_11;

#line 435 "switch_detection.m"
    {
#line 435 "switch_detection.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_15_15, (MR_Word) &check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0, check_hlds__switch_detection__CasesMap_7, &check_hlds__switch_detection__CasesAssocList_9);
    }
#line 436 "switch_detection.m"
    {
#line 436 "switch_detection.m"
      check_hlds__switch_detection__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 436 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 0) = ((MR_Box) (&check_hlds__switch_detection_scalar_common_3[0]));
#line 436 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 1) = ((MR_Box) (check_hlds__switch_detection__convert_cases_table_2_f_0_1));
#line 436 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 436 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 3) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_4));
#line 436 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__V_12_12, 4) = ((MR_Box) (check_hlds__switch_detection__ConflictIds_8));
#line 436 "switch_detection.m"
    }
#line 437 "switch_detection.m"
    {
#line 437 "switch_detection.m"
      check_hlds__switch_detection__V_14_14 = mercury__set_tree234__init_0_f_0(check_hlds__switch_detection__TypeCtorInfo_15_15);
    }
#line 436 "switch_detection.m"
    {
#line 436 "switch_detection.m"
      mercury__list__foldl2_6_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_2[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[2], (MR_Word) &check_hlds__switch_detection_scalar_common_1[3], check_hlds__switch_detection__V_12_12, check_hlds__switch_detection__CasesAssocList_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__switch_detection__conv3_Cases_10, ((MR_Box) (check_hlds__switch_detection__V_14_14)), &check_hlds__switch_detection__conv2__AlreadyHandledConsIds_11);
    }
#line 436 "switch_detection.m"
    check_hlds__switch_detection__Cases_10 = ((MR_Word) check_hlds__switch_detection__conv3_Cases_10);
#line 436 "switch_detection.m"
    check_hlds__switch_detection___AlreadyHandledConsIds_11 = ((MR_Word) check_hlds__switch_detection__conv2__AlreadyHandledConsIds_11);
#line 438 "switch_detection.m"
    {
#line 438 "switch_detection.m"
      mercury__list__sort_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, check_hlds__switch_detection__Cases_10, &check_hlds__switch_detection__SortedCases_6);
    }
#line 433 "switch_detection.m"
    return check_hlds__switch_detection__SortedCases_6;
#line 433 "switch_detection.m"
  }
#line 431 "switch_detection.m"
}

#line 398 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(
#line 398 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_1,
#line 398 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 398 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 398 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 398 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5)
#line 398 "switch_detection.m"
{
#line 402 "switch_detection.m"
  {
#line 402 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 402 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 402 "switch_detection.m"
      {
#line 402 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 402 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4;
#line 402 "switch_detection.m"
      }
#line 402 "switch_detection.m"
    else
#line 404 "switch_detection.m"
      {
#line 404 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 404 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_13;
#line 404 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_14;
#line 404 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18;
#line 242 "switch_detection.m"
        MR_Word check_hlds__switch_detection___InstMap_27;

#line 242 "switch_detection.m"
        {
#line 242 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap_1, &check_hlds__switch_detection___InstMap_27, check_hlds__switch_detection__Goal0_11, &check_hlds__switch_detection__Goal_13, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18);
        }
#line 406 "switch_detection.m"
        {
#line 406 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(check_hlds__switch_detection__InstMap_1, check_hlds__switch_detection__Goals0_12, &check_hlds__switch_detection__Goals_14, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);
        }
#line 403 "switch_detection.m"
        {
#line 403 "switch_detection.m"
          MR_Word base;
#line 403 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__3_3 = base;
#line 403 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_13));
#line 403 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Goals_14));
#line 403 "switch_detection.m"
        }
#line 404 "switch_detection.m"
      }
#line 402 "switch_detection.m"
  }
#line 398 "switch_detection.m"
}

#line 387 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_conj_5_p_0(
#line 387 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_1,
#line 387 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 387 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 387 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 387 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5)
#line 387 "switch_detection.m"
{
#line 391 "switch_detection.m"
  {
#line 391 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 391 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "switch_detection.m"
      {
#line 391 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4;
#line 391 "switch_detection.m"
      }
#line 391 "switch_detection.m"
    else
#line 393 "switch_detection.m"
      {
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_13;
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_14;
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__InstMap1_16;
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_19_19;
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__GoalExpr0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_11, (MR_Integer) 0)));
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_11, (MR_Integer) 1)));
#line 393 "switch_detection.m"
        MR_Word check_hlds__switch_detection__GoalExpr_31;

#line 255 "switch_detection.m"
        {
#line 255 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_expr_6_p_0(check_hlds__switch_detection__InstMap0_1, check_hlds__switch_detection__GoalInfo_30, check_hlds__switch_detection__GoalExpr0_29, &check_hlds__switch_detection__GoalExpr_31, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_19_19);
        }
#line 257 "switch_detection.m"
        {
#line 257 "switch_detection.m"
          check_hlds__switch_detection__Goal_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_13, 0) = ((MR_Box) (check_hlds__switch_detection__GoalExpr_31));
#line 257 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal_13, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_30));
#line 257 "switch_detection.m"
        }
#line 258 "switch_detection.m"
        {
#line 258 "switch_detection.m"
          hlds__goal_util__update_instmap_3_p_0(check_hlds__switch_detection__Goal0_11, check_hlds__switch_detection__InstMap0_1, &check_hlds__switch_detection__InstMap1_16);
        }
#line 396 "switch_detection.m"
        {
#line 396 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_conj_5_p_0(check_hlds__switch_detection__InstMap1_16, check_hlds__switch_detection__Goals0_12, &check_hlds__switch_detection__Goals_14, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_19_19, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);
        }
#line 393 "switch_detection.m"
        {
#line 393 "switch_detection.m"
          MR_Word base;
#line 393 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__3_3 = base;
#line 393 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_13));
#line 393 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Goals_14));
#line 393 "switch_detection.m"
        }
#line 393 "switch_detection.m"
      }
#line 391 "switch_detection.m"
  }
#line 387 "switch_detection.m"
}

#line 369 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_cases_6_p_0(
#line 369 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_1,
#line 369 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_2,
#line 369 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 369 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4,
#line 369 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5,
#line 369 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_6)
#line 369 "switch_detection.m"
{
#line 373 "switch_detection.m"
  {
#line 373 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 373 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "switch_detection.m"
      {
#line 373 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 373 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_6 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5;
#line 373 "switch_detection.m"
      }
#line 373 "switch_detection.m"
    else
#line 375 "switch_detection.m"
      {
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Case_16;
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Cases_17;
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case0_14, (MR_Integer) 0)));
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case0_14, (MR_Integer) 1)));
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case0_14, (MR_Integer) 2)));
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__VarTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 2)));
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ModuleInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 0)));
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__VarType_24;
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__InstMap1_25;
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ModuleInfo_26;
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_27;
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30;
#line 375 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_31_31;
#line 377 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 1)));
#line 377 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 3)));
#line 382 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_40_40;
#line 382 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_41_41;
#line 382 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_42_42;
#line 382 "switch_detection.m"
        MR_Word check_hlds__switch_detection__V_39_39;
#line 242 "switch_detection.m"
        MR_Word check_hlds__switch_detection___InstMap_50;

#line 379 "switch_detection.m"
        {
#line 379 "switch_detection.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__switch_detection__VarTypes_22, check_hlds__switch_detection__Var_1, &check_hlds__switch_detection__VarType_24);
        }
#line 380 "switch_detection.m"
        {
#line 380 "switch_detection.m"
          hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__switch_detection__Var_1, check_hlds__switch_detection__VarType_24, check_hlds__switch_detection__MainConsId_19, check_hlds__switch_detection__OtherConsIds_20, check_hlds__switch_detection__InstMap0_2, &check_hlds__switch_detection__InstMap1_25, check_hlds__switch_detection__ModuleInfo0_23, &check_hlds__switch_detection__ModuleInfo_26);
        }
#line 382 "switch_detection.m"
        check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 0)));
#line 382 "switch_detection.m"
        check_hlds__switch_detection__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 1)));
#line 382 "switch_detection.m"
        check_hlds__switch_detection__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 2)));
#line 382 "switch_detection.m"
        check_hlds__switch_detection__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_5, (MR_Integer) 3)));
#line 382 "switch_detection.m"
        {
#line 382 "switch_detection.m"
          check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 382 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, 0) = ((MR_Box) (check_hlds__switch_detection__ModuleInfo_26));
#line 382 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, 1) = ((MR_Box) (check_hlds__switch_detection__V_40_40));
#line 382 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, 2) = ((MR_Box) (check_hlds__switch_detection__V_41_41));
#line 382 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, 3) = ((MR_Box) (check_hlds__switch_detection__V_42_42));
#line 382 "switch_detection.m"
        }
#line 242 "switch_detection.m"
        {
#line 242 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap1_25, &check_hlds__switch_detection___InstMap_50, check_hlds__switch_detection__Goal0_21, &check_hlds__switch_detection__Goal_27, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_30_30, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_31_31);
        }
#line 384 "switch_detection.m"
        {
#line 384 "switch_detection.m"
          check_hlds__switch_detection__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 384 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_16, 0) = ((MR_Box) (check_hlds__switch_detection__MainConsId_19));
#line 384 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_16, 1) = ((MR_Box) (check_hlds__switch_detection__OtherConsIds_20));
#line 384 "switch_detection.m"
          MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Case_16, 2) = ((MR_Box) (check_hlds__switch_detection__Goal_27));
#line 384 "switch_detection.m"
        }
#line 385 "switch_detection.m"
        {
#line 385 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_cases_6_p_0(check_hlds__switch_detection__Var_1, check_hlds__switch_detection__InstMap0_2, check_hlds__switch_detection__Cases0_15, &check_hlds__switch_detection__Cases_17, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_31_31, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_6);
        }
#line 374 "switch_detection.m"
        {
#line 374 "switch_detection.m"
          MR_Word base;
#line 374 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__4_4 = base;
#line 374 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Case_16));
#line 374 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Cases_17));
#line 374 "switch_detection.m"
        }
#line 375 "switch_detection.m"
      }
#line 373 "switch_detection.m"
  }
#line 369 "switch_detection.m"
}

#line 359 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(
#line 359 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap_1,
#line 359 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 359 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__3_3,
#line 359 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4,
#line 359 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5)
#line 359 "switch_detection.m"
{
#line 363 "switch_detection.m"
  {
#line 363 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 363 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "switch_detection.m"
      {
#line 363 "switch_detection.m"
        *check_hlds__switch_detection__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 363 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4;
#line 363 "switch_detection.m"
      }
#line 363 "switch_detection.m"
    else
#line 365 "switch_detection.m"
      {
#line 365 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goal_13;
#line 365 "switch_detection.m"
        MR_Word check_hlds__switch_detection__Goals_14;
#line 365 "switch_detection.m"
        MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18;
#line 242 "switch_detection.m"
        MR_Word check_hlds__switch_detection___InstMap_27;

#line 242 "switch_detection.m"
        {
#line 242 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap_1, &check_hlds__switch_detection___InstMap_27, check_hlds__switch_detection__Goal0_11, &check_hlds__switch_detection__Goal_13, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_4, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18);
        }
#line 367 "switch_detection.m"
        {
#line 367 "switch_detection.m"
          check_hlds__switch_detection__detect_sub_switches_in_disj_5_p_0(check_hlds__switch_detection__InstMap_1, check_hlds__switch_detection__Goals0_12, &check_hlds__switch_detection__Goals_14, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_18_18, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_5);
        }
#line 364 "switch_detection.m"
        {
#line 364 "switch_detection.m"
          MR_Word base;
#line 364 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__3_3 = base;
#line 364 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__Goal_13));
#line 364 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__Goals_14));
#line 364 "switch_detection.m"
        }
#line 365 "switch_detection.m"
      }
#line 363 "switch_detection.m"
  }
#line 359 "switch_detection.m"
}

#line 262 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_expr_6_p_0(
#line 262 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_7,
#line 262 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalInfo_8,
#line 262 "switch_detection.m"
  MR_Word check_hlds__switch_detection__GoalExpr0_9,
#line 262 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__GoalExpr_10,
#line 262 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89,
#line 262 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90)
#line 262 "switch_detection.m"
{
#line 269 "switch_detection.m"
  {
#line 269 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 269 "switch_detection.m"
#line 269 "switch_detection.m"
    switch (MR_tag((MR_Word) check_hlds__switch_detection__GoalExpr0_9)) {
#line 269 "switch_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 269 "switch_detection.m"
      case (MR_Integer) 0:
#line 285 "switch_detection.m"
        {
#line 285 "switch_detection.m"
          MR_Word check_hlds__switch_detection__SubGoal0_20 = (MR_Word) MR_body(((MR_Word) check_hlds__switch_detection__GoalExpr0_9), (MR_Integer) 0);
#line 285 "switch_detection.m"
          MR_Word check_hlds__switch_detection__SubGoal_21;

#line 286 "switch_detection.m"
          {
#line 286 "switch_detection.m"
            check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__SubGoal0_20, &check_hlds__switch_detection__SubGoal_21, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
          }
#line 287 "switch_detection.m"
          *check_hlds__switch_detection__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__switch_detection__SubGoal_21);
#line 285 "switch_detection.m"
        }
#line 269 "switch_detection.m"
        break;
#line 269 "switch_detection.m"
      case (MR_Integer) 1:
#line 313 "switch_detection.m"
        {
#line 313 "switch_detection.m"
          MR_Word check_hlds__switch_detection__RHS0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 313 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)));
#line 313 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 313 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 3)));
#line 313 "switch_detection.m"
          MR_Word check_hlds__switch_detection__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 4)));

#line 325 "switch_detection.m"
#line 325 "switch_detection.m"
          switch (MR_tag((MR_Word) check_hlds__switch_detection__RHS0_37)) {
#line 325 "switch_detection.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 325 "switch_detection.m"
            case (MR_Integer) 0:
#line 325 "switch_detection.m"
            case (MR_Integer) 1:
#line 328 "switch_detection.m"
              {
#line 329 "switch_detection.m"
                *check_hlds__switch_detection__GoalExpr_10 = check_hlds__switch_detection__GoalExpr0_9;
#line 328 "switch_detection.m"
                *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 328 "switch_detection.m"
              }
#line 325 "switch_detection.m"
              break;
#line 325 "switch_detection.m"
            case (MR_Integer) 2:
#line 315 "switch_detection.m"
              {
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Modes_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 4)));
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__LambdaGoal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 6)));
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ModuleInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, (MR_Integer) 0)));
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__LambdaGoal_50;
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__RHS_51;
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__Vars_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 3)));
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__InstMap1_113;
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 2)));
#line 315 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 5)));
#line 318 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, (MR_Integer) 1)));
#line 318 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, (MR_Integer) 2)));
#line 318 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, (MR_Integer) 3)));
#line 323 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_127_127;
#line 323 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_128_128;
#line 323 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_129_129;
#line 323 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_131_131;
#line 323 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_132_132;
#line 323 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_133_133;
#line 323 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_134_134;
#line 323 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_135_135;
#line 324 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_136_136;
#line 324 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_138_138;
#line 324 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_139_139;
#line 324 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_140_140;
#line 324 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_137_137;

#line 319 "switch_detection.m"
                {
#line 319 "switch_detection.m"
                  hlds__instmap__pre_lambda_update_5_p_0(check_hlds__switch_detection__ModuleInfo_49, check_hlds__switch_detection__Vars_112, check_hlds__switch_detection__Modes_46, check_hlds__switch_detection__InstMap0_7, &check_hlds__switch_detection__InstMap1_113);
                }
#line 321 "switch_detection.m"
                {
#line 321 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap1_113, check_hlds__switch_detection__LambdaGoal0_48, &check_hlds__switch_detection__LambdaGoal_50, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                }
#line 323 "switch_detection.m"
                check_hlds__switch_detection__V_127_127 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 323 "switch_detection.m"
                check_hlds__switch_detection__V_128_128 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 323 "switch_detection.m"
                check_hlds__switch_detection__V_129_129 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 323 "switch_detection.m"
                check_hlds__switch_detection__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 2)));
#line 323 "switch_detection.m"
                check_hlds__switch_detection__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 3)));
#line 323 "switch_detection.m"
                check_hlds__switch_detection__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 4)));
#line 323 "switch_detection.m"
                check_hlds__switch_detection__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 5)));
#line 323 "switch_detection.m"
                check_hlds__switch_detection__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS0_37, (MR_Integer) 6)));
#line 323 "switch_detection.m"
                {
#line 323 "switch_detection.m"
                  check_hlds__switch_detection__RHS_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 323 "switch_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 0) = ((MR_Box) ((check_hlds__switch_detection__V_127_127 | ((((check_hlds__switch_detection__V_128_128 << (MR_Integer) 2)) | ((check_hlds__switch_detection__V_129_129 << (MR_Integer) 3)))))));
#line 323 "switch_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 1) = (MR_Integer) 0;
#line 323 "switch_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 2) = ((MR_Box) (check_hlds__switch_detection__V_131_131));
#line 323 "switch_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 3) = ((MR_Box) (check_hlds__switch_detection__V_132_132));
#line 323 "switch_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 4) = ((MR_Box) (check_hlds__switch_detection__V_133_133));
#line 323 "switch_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 5) = ((MR_Box) (check_hlds__switch_detection__V_134_134));
#line 323 "switch_detection.m"
                  MR_hl_field(MR_mktag(2), check_hlds__switch_detection__RHS_51, 6) = ((MR_Box) (check_hlds__switch_detection__LambdaGoal_50));
#line 323 "switch_detection.m"
                }
#line 324 "switch_detection.m"
                check_hlds__switch_detection__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)));
#line 324 "switch_detection.m"
                check_hlds__switch_detection__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 324 "switch_detection.m"
                check_hlds__switch_detection__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 324 "switch_detection.m"
                check_hlds__switch_detection__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 3)));
#line 324 "switch_detection.m"
                check_hlds__switch_detection__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 4)));
#line 324 "switch_detection.m"
                {
#line 324 "switch_detection.m"
                  MR_Word base;
#line 324 "switch_detection.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 324 "switch_detection.m"
                  *check_hlds__switch_detection__GoalExpr_10 = base;
#line 324 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__V_136_136));
#line 324 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__RHS_51));
#line 324 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__switch_detection__V_138_138));
#line 324 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__switch_detection__V_139_139));
#line 324 "switch_detection.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__switch_detection__V_140_140));
#line 324 "switch_detection.m"
                }
#line 315 "switch_detection.m"
              }
#line 325 "switch_detection.m"
              break;
#line 325 "switch_detection.m"
          }
#line 313 "switch_detection.m"
        }
#line 269 "switch_detection.m"
        break;
#line 269 "switch_detection.m"
      case (MR_Integer) 2:
#line 335 "switch_detection.m"
        {
#line 336 "switch_detection.m"
          *check_hlds__switch_detection__GoalExpr_10 = check_hlds__switch_detection__GoalExpr0_9;
#line 335 "switch_detection.m"
          *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 335 "switch_detection.m"
        }
#line 269 "switch_detection.m"
        break;
#line 269 "switch_detection.m"
      case (MR_Integer) 3:
#line 269 "switch_detection.m"
#line 269 "switch_detection.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 0)))) {
#line 269 "switch_detection.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 269 "switch_detection.m"
          case (MR_Integer) 0:
#line 269 "switch_detection.m"
          case (MR_Integer) 1:
#line 335 "switch_detection.m"
            {
#line 336 "switch_detection.m"
              *check_hlds__switch_detection__GoalExpr_10 = check_hlds__switch_detection__GoalExpr0_9;
#line 335 "switch_detection.m"
              *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 335 "switch_detection.m"
            }
#line 269 "switch_detection.m"
            break;
#line 269 "switch_detection.m"
          case (MR_Integer) 2:
#line 281 "switch_detection.m"
            {
#line 281 "switch_detection.m"
              MR_Word check_hlds__switch_detection__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 281 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 281 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Goals_19;

#line 282 "switch_detection.m"
              {
#line 282 "switch_detection.m"
                check_hlds__switch_detection__detect_switches_in_conj_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__Goals0_18, &check_hlds__switch_detection__Goals_19, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
              }
#line 283 "switch_detection.m"
              {
#line 283 "switch_detection.m"
                MR_Word base;
#line 283 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 283 "switch_detection.m"
                *check_hlds__switch_detection__GoalExpr_10 = base;
#line 283 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 283 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__ConjType_17));
#line 283 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__Goals_19));
#line 283 "switch_detection.m"
              }
#line 281 "switch_detection.m"
            }
#line 269 "switch_detection.m"
            break;
#line 269 "switch_detection.m"
          case (MR_Integer) 3:
#line 269 "switch_detection.m"
            {
#line 269 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Disjuncts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));

#line 273 "switch_detection.m"
              if ((check_hlds__switch_detection__Disjuncts0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 271 "switch_detection.m"
                {
#line 272 "switch_detection.m"
                  *check_hlds__switch_detection__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__switch_detection_scalar_common_1[7]);
#line 271 "switch_detection.m"
                  *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 271 "switch_detection.m"
                }
#line 273 "switch_detection.m"
              else
#line 274 "switch_detection.m"
                {
#line 274 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__NonLocals_15;
#line 274 "switch_detection.m"
                  MR_Word check_hlds__switch_detection__NonLocalsList_16;

#line 275 "switch_detection.m"
                  {
#line 275 "switch_detection.m"
                    check_hlds__switch_detection__NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__switch_detection__GoalInfo_8);
                  }
#line 276 "switch_detection.m"
                  {
#line 276 "switch_detection.m"
                    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__switch_detection__NonLocals_15, &check_hlds__switch_detection__NonLocalsList_16);
                  }
#line 277 "switch_detection.m"
                  {
#line 277 "switch_detection.m"
                    check_hlds__switch_detection__detect_switches_in_disj_9_p_0(check_hlds__switch_detection__GoalInfo_8, check_hlds__switch_detection__NonLocalsList_16, check_hlds__switch_detection__Disjuncts0_12, check_hlds__switch_detection__NonLocalsList_16, check_hlds__switch_detection__InstMap0_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__switch_detection__GoalExpr_10, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
#line 277 "switch_detection.m"
                    return;
                  }
#line 274 "switch_detection.m"
                }
#line 269 "switch_detection.m"
            }
#line 269 "switch_detection.m"
            break;
#line 269 "switch_detection.m"
          case (MR_Integer) 4:
#line 296 "switch_detection.m"
            {
#line 296 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 296 "switch_detection.m"
              MR_Word check_hlds__switch_detection__CanFail_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 296 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Cases0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 3)));
#line 296 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Cases_33;

#line 297 "switch_detection.m"
              {
#line 297 "switch_detection.m"
                check_hlds__switch_detection__detect_switches_in_cases_6_p_0(check_hlds__switch_detection__Var_30, check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__Cases0_32, &check_hlds__switch_detection__Cases_33, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
              }
#line 298 "switch_detection.m"
              {
#line 298 "switch_detection.m"
                MR_Word base;
#line 298 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 298 "switch_detection.m"
                *check_hlds__switch_detection__GoalExpr_10 = base;
#line 298 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 298 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Var_30));
#line 298 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__CanFail_31));
#line 298 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__switch_detection__Cases_33));
#line 298 "switch_detection.m"
              }
#line 296 "switch_detection.m"
            }
#line 269 "switch_detection.m"
            break;
#line 269 "switch_detection.m"
          case (MR_Integer) 5:
#line 300 "switch_detection.m"
            {
#line 300 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Reason_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 300 "switch_detection.m"
              MR_Word check_hlds__switch_detection__SubGoal0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 300 "switch_detection.m"
              MR_Word check_hlds__switch_detection__SubGoal_111;
#line 301 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_98_98;
#line 301 "switch_detection.m"
              MR_Word check_hlds__switch_detection__V_35_35;

#line 301 "switch_detection.m"
              check_hlds__switch_detection__succeeded = ((((MR_tag((MR_Word) check_hlds__switch_detection__Reason_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason_34, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 301 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 301 "switch_detection.m"
                {
#line 301 "switch_detection.m"
                  check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason_34, (MR_Integer) 1)));
#line 301 "switch_detection.m"
                  check_hlds__switch_detection__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__Reason_34, (MR_Integer) 2)));
#line 301 "switch_detection.m"
                  check_hlds__switch_detection__succeeded = (check_hlds__switch_detection__V_98_98 == (MR_Integer) 1);
#line 301 "switch_detection.m"
                }
#line 305 "switch_detection.m"
              if (check_hlds__switch_detection__succeeded)
#line 304 "switch_detection.m"
                {
#line 304 "switch_detection.m"
                  check_hlds__switch_detection__SubGoal_111 = check_hlds__switch_detection__SubGoal0_110;
#line 304 "switch_detection.m"
                  *check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90 = check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89;
#line 304 "switch_detection.m"
                }
#line 305 "switch_detection.m"
              else
#line 309 "switch_detection.m"
                {
#line 309 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__SubGoal0_110, &check_hlds__switch_detection__SubGoal_111, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                }
#line 311 "switch_detection.m"
              {
#line 311 "switch_detection.m"
                MR_Word base;
#line 311 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "switch_detection.m"
                *check_hlds__switch_detection__GoalExpr_10 = base;
#line 311 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 311 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Reason_34));
#line 311 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__SubGoal_111));
#line 311 "switch_detection.m"
              }
#line 300 "switch_detection.m"
            }
#line 269 "switch_detection.m"
            break;
#line 269 "switch_detection.m"
          case (MR_Integer) 6:
#line 289 "switch_detection.m"
            {
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Cond0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 2)));
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Then0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 3)));
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Else0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 4)));
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__InstMap1_26;
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Cond_27;
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Then_28;
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__Else_29;
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_101_101;
#line 289 "switch_detection.m"
              MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_102_102;

#line 290 "switch_detection.m"
              {
#line 290 "switch_detection.m"
                check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap0_7, &check_hlds__switch_detection__InstMap1_26, check_hlds__switch_detection__Cond0_23, &check_hlds__switch_detection__Cond_27, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_101_101);
              }
#line 292 "switch_detection.m"
              {
#line 292 "switch_detection.m"
                check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap1_26, check_hlds__switch_detection__Then0_24, &check_hlds__switch_detection__Then_28, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_101_101, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_102_102);
              }
#line 293 "switch_detection.m"
              {
#line 293 "switch_detection.m"
                check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__Else0_25, &check_hlds__switch_detection__Else_29, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_102_102, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
              }
#line 294 "switch_detection.m"
              {
#line 294 "switch_detection.m"
                MR_Word base;
#line 294 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 294 "switch_detection.m"
                *check_hlds__switch_detection__GoalExpr_10 = base;
#line 294 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 294 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__Vars_22));
#line 294 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__switch_detection__Cond_27));
#line 294 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__switch_detection__Then_28));
#line 294 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__switch_detection__Else_29));
#line 294 "switch_detection.m"
              }
#line 289 "switch_detection.m"
            }
#line 269 "switch_detection.m"
            break;
#line 269 "switch_detection.m"
          case (MR_Integer) 7:
#line 338 "switch_detection.m"
            {
#line 338 "switch_detection.m"
              MR_Word check_hlds__switch_detection__ShortHand0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__switch_detection__GoalExpr0_9, (MR_Integer) 1)));
#line 338 "switch_detection.m"
              MR_Word check_hlds__switch_detection__ShortHand_84;

#line 347 "switch_detection.m"
#line 347 "switch_detection.m"
              switch (MR_tag((MR_Word) check_hlds__switch_detection__ShortHand0_74)) {
#line 347 "switch_detection.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 347 "switch_detection.m"
                case (MR_Integer) 0:
#line 352 "switch_detection.m"
                  {
#line 354 "switch_detection.m"
                    {
#line 354 "switch_detection.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.switch_detection", (MR_String) "predicate \140check_hlds.switch_detection.detect_switches_in_goal_expr\'/6", (MR_String) "bi_implication");
#line 354 "switch_detection.m"
                      return;
                    }
#line 352 "switch_detection.m"
                  }
#line 347 "switch_detection.m"
                  break;
#line 347 "switch_detection.m"
                case (MR_Integer) 1:
#line 341 "switch_detection.m"
                  {
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__GoalType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 0)));
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__Outer_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 1)));
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__Inner_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 2)));
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__MaybeOutputVars_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 3)));
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__MainGoal0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 4)));
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__OrElseGoals0_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 5)));
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__OrElseInners_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 6)));
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__MainGoal_82;
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__OrElseGoals_83;
#line 341 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_95_95;

#line 342 "switch_detection.m"
                    {
#line 342 "switch_detection.m"
                      check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__MainGoal0_79, &check_hlds__switch_detection__MainGoal_82, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, &check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_95_95);
                    }
#line 343 "switch_detection.m"
                    {
#line 343 "switch_detection.m"
                      check_hlds__switch_detection__detect_switches_in_orelse_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__OrElseGoals0_80, &check_hlds__switch_detection__OrElseGoals_83, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_95_95, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                    }
#line 345 "switch_detection.m"
                    {
#line 345 "switch_detection.m"
                      check_hlds__switch_detection__ShortHand_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 345 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 0) = ((MR_Box) (check_hlds__switch_detection__GoalType_75));
#line 345 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 1) = ((MR_Box) (check_hlds__switch_detection__Outer_76));
#line 345 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 2) = ((MR_Box) (check_hlds__switch_detection__Inner_77));
#line 345 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 3) = ((MR_Box) (check_hlds__switch_detection__MaybeOutputVars_78));
#line 345 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 4) = ((MR_Box) (check_hlds__switch_detection__MainGoal_82));
#line 345 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 5) = ((MR_Box) (check_hlds__switch_detection__OrElseGoals_83));
#line 345 "switch_detection.m"
                      MR_hl_field(MR_mktag(1), check_hlds__switch_detection__ShortHand_84, 6) = ((MR_Box) (check_hlds__switch_detection__OrElseInners_81));
#line 345 "switch_detection.m"
                    }
#line 341 "switch_detection.m"
                  }
#line 347 "switch_detection.m"
                  break;
#line 347 "switch_detection.m"
                case (MR_Integer) 2:
#line 348 "switch_detection.m"
                  {
#line 348 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__MaybeIO_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 0)));
#line 348 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__ResultVar_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 1)));
#line 348 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__SubGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand0_74, (MR_Integer) 2)));
#line 348 "switch_detection.m"
                    MR_Word check_hlds__switch_detection__SubGoal_119;

#line 349 "switch_detection.m"
                    {
#line 349 "switch_detection.m"
                      check_hlds__switch_detection__detect_switches_in_goal_5_p_0(check_hlds__switch_detection__InstMap0_7, check_hlds__switch_detection__SubGoal0_118, &check_hlds__switch_detection__SubGoal_119, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_89, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_90);
                    }
#line 350 "switch_detection.m"
                    {
#line 350 "switch_detection.m"
                      check_hlds__switch_detection__ShortHand_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 350 "switch_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand_84, 0) = ((MR_Box) (check_hlds__switch_detection__MaybeIO_85));
#line 350 "switch_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand_84, 1) = ((MR_Box) (check_hlds__switch_detection__ResultVar_86));
#line 350 "switch_detection.m"
                      MR_hl_field(MR_mktag(2), check_hlds__switch_detection__ShortHand_84, 2) = ((MR_Box) (check_hlds__switch_detection__SubGoal_119));
#line 350 "switch_detection.m"
                    }
#line 348 "switch_detection.m"
                  }
#line 347 "switch_detection.m"
                  break;
#line 347 "switch_detection.m"
              }
#line 356 "switch_detection.m"
              {
#line 356 "switch_detection.m"
                MR_Word base;
#line 356 "switch_detection.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "switch_detection.m"
                *check_hlds__switch_detection__GoalExpr_10 = base;
#line 356 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 356 "switch_detection.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__switch_detection__ShortHand_84));
#line 356 "switch_detection.m"
              }
#line 338 "switch_detection.m"
            }
#line 269 "switch_detection.m"
            break;
#line 269 "switch_detection.m"
        }
#line 269 "switch_detection.m"
        break;
#line 269 "switch_detection.m"
    }
#line 269 "switch_detection.m"
  }
#line 262 "switch_detection.m"
}

#line 249 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(
#line 249 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_InstMap_0_14,
#line 249 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_InstMap_15,
#line 249 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Goal0_8,
#line 249 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__Goal_9,
#line 249 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_16,
#line 249 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_17)
#line 249 "switch_detection.m"
{
#line 253 "switch_detection.m"
  {
#line 253 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 253 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalExpr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_8, (MR_Integer) 0)));
#line 253 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Goal0_8, (MR_Integer) 1)));
#line 253 "switch_detection.m"
    MR_Word check_hlds__switch_detection__GoalExpr_13;

#line 255 "switch_detection.m"
    {
#line 255 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_goal_expr_6_p_0(check_hlds__switch_detection__STATE_VARIABLE_InstMap_0_14, check_hlds__switch_detection__GoalInfo_12, check_hlds__switch_detection__GoalExpr0_11, &check_hlds__switch_detection__GoalExpr_13, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_16, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_17);
    }
#line 257 "switch_detection.m"
    {
#line 257 "switch_detection.m"
      MR_Word base;
#line 257 "switch_detection.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "switch_detection.m"
      *check_hlds__switch_detection__Goal_9 = base;
#line 257 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__switch_detection__GoalExpr_13));
#line 257 "switch_detection.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__switch_detection__GoalInfo_12));
#line 257 "switch_detection.m"
    }
#line 258 "switch_detection.m"
    {
#line 258 "switch_detection.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__switch_detection__Goal0_8, check_hlds__switch_detection__STATE_VARIABLE_InstMap_0_14, check_hlds__switch_detection__STATE_VARIABLE_InstMap_15);
#line 258 "switch_detection.m"
      return;
    }
#line 253 "switch_detection.m"
  }
#line 249 "switch_detection.m"
}

#line 238 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_goal_5_p_0(
#line 238 "switch_detection.m"
  MR_Word check_hlds__switch_detection__InstMap0_6,
#line 238 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Goal_0_10,
#line 238 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Goal_11,
#line 238 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_12,
#line 238 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_13)
#line 238 "switch_detection.m"
{
#line 242 "switch_detection.m"
  {
#line 242 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 242 "switch_detection.m"
    MR_Word check_hlds__switch_detection___InstMap_9;

#line 242 "switch_detection.m"
    {
#line 242 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap0_6, &check_hlds__switch_detection___InstMap_9, check_hlds__switch_detection__STATE_VARIABLE_Goal_0_10, check_hlds__switch_detection__STATE_VARIABLE_Goal_11, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_0_12, check_hlds__switch_detection__STATE_VARIABLE_LocalInfo_13);
    }
#line 242 "switch_detection.m"
  }
#line 238 "switch_detection.m"
}

#line 186 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_procs_4_p_0(
#line 186 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__1_1,
#line 186 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__2_2,
#line 186 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 186 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4)
#line 186 "switch_detection.m"
{
#line 190 "switch_detection.m"
  {
#line 190 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 190 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "switch_detection.m"
      *check_hlds__switch_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "switch_detection.m"
    else
#line 192 "switch_detection.m"
      {
#line 192 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 192 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 192 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcIdInfo_11;
#line 192 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcIdsInfos_12;
#line 192 "switch_detection.m"
        MR_Integer check_hlds__switch_detection__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcIdInfo0_9, (MR_Integer) 0)));
#line 192 "switch_detection.m"
        MR_Word check_hlds__switch_detection__ProcInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcIdInfo0_9, (MR_Integer) 1)));

#line 194 "switch_detection.m"
        {
#line 194 "switch_detection.m"
          check_hlds__switch_detection__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__switch_detection__ProcId_13)), check_hlds__switch_detection__HeadVar__2_2);
        }
#line 197 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 195 "switch_detection.m"
          {
#line 195 "switch_detection.m"
            MR_Word check_hlds__switch_detection__ProcInfo_15;

#line 195 "switch_detection.m"
            {
#line 195 "switch_detection.m"
              check_hlds__switch_detection__detect_switches_in_proc_3_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__ProcInfo0_14, &check_hlds__switch_detection__ProcInfo_15);
            }
#line 196 "switch_detection.m"
            {
#line 196 "switch_detection.m"
              check_hlds__switch_detection__ProcIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcIdInfo_11, 0) = ((MR_Box) (check_hlds__switch_detection__ProcId_13));
#line 196 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__ProcIdInfo_11, 1) = ((MR_Box) (check_hlds__switch_detection__ProcInfo_15));
#line 196 "switch_detection.m"
            }
#line 195 "switch_detection.m"
          }
#line 197 "switch_detection.m"
        else
#line 198 "switch_detection.m"
          check_hlds__switch_detection__ProcIdInfo_11 = check_hlds__switch_detection__ProcIdInfo0_9;
#line 200 "switch_detection.m"
        {
#line 200 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_procs_4_p_0(check_hlds__switch_detection__HeadVar__1_1, check_hlds__switch_detection__HeadVar__2_2, check_hlds__switch_detection__ProcIdsInfos0_10, &check_hlds__switch_detection__ProcIdsInfos_12);
        }
#line 192 "switch_detection.m"
        {
#line 192 "switch_detection.m"
          MR_Word base;
#line 192 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__4_4 = base;
#line 192 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__ProcIdInfo_11));
#line 192 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__ProcIdsInfos_12));
#line 192 "switch_detection.m"
        }
#line 192 "switch_detection.m"
      }
#line 190 "switch_detection.m"
  }
#line 186 "switch_detection.m"
}

#line 143 "switch_detection.m"
static void MR_CALL 
check_hlds__switch_detection__detect_switches_in_preds_4_p_0(
#line 143 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Info_1,
#line 143 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ValidPredIdSet_2,
#line 143 "switch_detection.m"
  MR_Word check_hlds__switch_detection__HeadVar__3_3,
#line 143 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__HeadVar__4_4)
#line 143 "switch_detection.m"
{
#line 148 "switch_detection.m"
  {
#line 148 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;

#line 148 "switch_detection.m"
    if ((check_hlds__switch_detection__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "switch_detection.m"
      *check_hlds__switch_detection__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "switch_detection.m"
    else
#line 150 "switch_detection.m"
      {
#line 150 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__switch_detection__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredIdInfo_11;
#line 150 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredIdsInfos_12;
#line 150 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__PredIdInfo0_9, (MR_Integer) 0)));
#line 150 "switch_detection.m"
        MR_Word check_hlds__switch_detection__PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__PredIdInfo0_9, (MR_Integer) 1)));

#line 152 "switch_detection.m"
        {
#line 152 "switch_detection.m"
          check_hlds__switch_detection__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__switch_detection__ValidPredIdSet_2, ((MR_Box) (check_hlds__switch_detection__PredId_13)));
        }
#line 155 "switch_detection.m"
        if (check_hlds__switch_detection__succeeded)
#line 153 "switch_detection.m"
          {
#line 153 "switch_detection.m"
            MR_Word check_hlds__switch_detection__PredInfo_15;
#line 153 "switch_detection.m"
            MR_Word check_hlds__switch_detection__NonImportedProcIds_22;

#line 165 "switch_detection.m"
            {
#line 165 "switch_detection.m"
              check_hlds__switch_detection__NonImportedProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__switch_detection__PredInfo0_14);
            }
#line 182 "switch_detection.m"
            if ((check_hlds__switch_detection__NonImportedProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "switch_detection.m"
              check_hlds__switch_detection__PredInfo_15 = check_hlds__switch_detection__PredInfo0_14;
#line 182 "switch_detection.m"
            else
#line 167 "switch_detection.m"
              {
#line 167 "switch_detection.m"
                MR_Word check_hlds__switch_detection__TypeCtorInfo_24_36;
#line 167 "switch_detection.m"
                MR_Word check_hlds__switch_detection__TypeCtorInfo_25_37;
#line 167 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ProcTable0_27;
#line 167 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ProcList0_28;
#line 167 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ProcList_29;
#line 167 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ProcTable_30;
#line 168 "switch_detection.m"
                MR_Word check_hlds__switch_detection__ModuleInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_1, (MR_Integer) 0)));
#line 169 "switch_detection.m"
                MR_Word check_hlds__switch_detection__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_1, (MR_Integer) 1)));

#line 170 "switch_detection.m"
                {
#line 170 "switch_detection.m"
                  hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Detecting switches in ", check_hlds__switch_detection__PredId_13, check_hlds__switch_detection__ModuleInfo_26);
                }
#line 173 "switch_detection.m"
                {
#line 173 "switch_detection.m"
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__switch_detection__PredInfo0_14, &check_hlds__switch_detection__ProcTable0_27);
                }
#line 10530 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_24_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10532 "check_hlds.switch_detection.c"
                check_hlds__switch_detection__TypeCtorInfo_25_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 174 "switch_detection.m"
                {
#line 174 "switch_detection.m"
                  mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_24_36, check_hlds__switch_detection__TypeCtorInfo_25_37, check_hlds__switch_detection__ProcTable0_27, &check_hlds__switch_detection__ProcList0_28);
                }
#line 175 "switch_detection.m"
                {
#line 175 "switch_detection.m"
                  check_hlds__switch_detection__detect_switches_in_procs_4_p_0(check_hlds__switch_detection__Info_1, check_hlds__switch_detection__NonImportedProcIds_22, check_hlds__switch_detection__ProcList0_28, &check_hlds__switch_detection__ProcList_29);
                }
#line 177 "switch_detection.m"
                {
#line 177 "switch_detection.m"
                  mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_24_36, check_hlds__switch_detection__TypeCtorInfo_25_37, check_hlds__switch_detection__ProcList_29, &check_hlds__switch_detection__ProcTable_30);
                }
#line 178 "switch_detection.m"
                {
#line 178 "switch_detection.m"
                  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__switch_detection__ProcTable_30, check_hlds__switch_detection__PredInfo0_14, &check_hlds__switch_detection__PredInfo_15);
                }
#line 167 "switch_detection.m"
              }
#line 154 "switch_detection.m"
            {
#line 154 "switch_detection.m"
              check_hlds__switch_detection__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 154 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__switch_detection__PredId_13));
#line 154 "switch_detection.m"
              MR_hl_field(MR_mktag(0), check_hlds__switch_detection__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__switch_detection__PredInfo_15));
#line 154 "switch_detection.m"
            }
#line 153 "switch_detection.m"
          }
#line 155 "switch_detection.m"
        else
#line 156 "switch_detection.m"
          check_hlds__switch_detection__PredIdInfo_11 = check_hlds__switch_detection__PredIdInfo0_9;
#line 158 "switch_detection.m"
        {
#line 158 "switch_detection.m"
          check_hlds__switch_detection__detect_switches_in_preds_4_p_0(check_hlds__switch_detection__Info_1, check_hlds__switch_detection__ValidPredIdSet_2, check_hlds__switch_detection__PredIdsInfos0_10, &check_hlds__switch_detection__PredIdsInfos_12);
        }
#line 150 "switch_detection.m"
        {
#line 150 "switch_detection.m"
          MR_Word base;
#line 150 "switch_detection.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "switch_detection.m"
          *check_hlds__switch_detection__HeadVar__4_4 = base;
#line 150 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__switch_detection__PredIdInfo_11));
#line 150 "switch_detection.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__switch_detection__PredIdsInfos_12));
#line 150 "switch_detection.m"
        }
#line 150 "switch_detection.m"
      }
#line 148 "switch_detection.m"
  }
#line 143 "switch_detection.m"
}

#line 56 "switch_detection.m"
void MR_CALL 
check_hlds__switch_detection__find_bind_var_9_p_0(
#line 56 "switch_detection.m"
  MR_Word check_hlds__switch_detection__TypeInfo_for_Result_28,
#line 56 "switch_detection.m"
  MR_Word check_hlds__switch_detection__TypeInfo_for_Info_29,
#line 56 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Var_10,
#line 56 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ProcessUnify_11,
#line 56 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_Goal_0_19,
#line 56 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_Goal_20,
#line 56 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Result_0_21,
#line 56 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Result_22,
#line 56 "switch_detection.m"
  MR_Box check_hlds__switch_detection__STATE_VARIABLE_Info_0_23,
#line 56 "switch_detection.m"
  MR_Box * check_hlds__switch_detection__STATE_VARIABLE_Info_24,
#line 56 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__FoundDeconstruct_15)
#line 56 "switch_detection.m"
{
#line 899 "switch_detection.m"
  {
#line 899 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 899 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Subst_16;
#line 899 "switch_detection.m"
    MR_Word check_hlds__switch_detection__DeconstructSearch_18;
#line 901 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_17_17;

#line 900 "switch_detection.m"
    {
#line 900 "switch_detection.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__switch_detection_scalar_common_1[0], (MR_Word) &check_hlds__switch_detection_scalar_common_1[1], &check_hlds__switch_detection__Subst_16);
    }
#line 901 "switch_detection.m"
    {
#line 901 "switch_detection.m"
      check_hlds__switch_detection__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_98_105_110_100_95_118_97_114_95_50_95_95_91_49_44_32_50_93_95_48_11_p_0(check_hlds__switch_detection__Var_10, check_hlds__switch_detection__ProcessUnify_11, check_hlds__switch_detection__STATE_VARIABLE_Goal_0_19, check_hlds__switch_detection__STATE_VARIABLE_Goal_20, check_hlds__switch_detection__Subst_16, &check_hlds__switch_detection__V_17_17, check_hlds__switch_detection__STATE_VARIABLE_Result_0_21, check_hlds__switch_detection__STATE_VARIABLE_Result_22, check_hlds__switch_detection__STATE_VARIABLE_Info_0_23, check_hlds__switch_detection__STATE_VARIABLE_Info_24, &check_hlds__switch_detection__DeconstructSearch_18);
    }
#line 906 "switch_detection.m"
#line 906 "switch_detection.m"
    switch (check_hlds__switch_detection__DeconstructSearch_18) {
#line 906 "switch_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 906 "switch_detection.m"
      case (MR_Integer) 0:
#line 905 "switch_detection.m"
        *check_hlds__switch_detection__FoundDeconstruct_15 = (MR_Integer) 1;
#line 906 "switch_detection.m"
        break;
#line 906 "switch_detection.m"
      case (MR_Integer) 1:
#line 908 "switch_detection.m"
        *check_hlds__switch_detection__FoundDeconstruct_15 = (MR_Integer) 0;
#line 906 "switch_detection.m"
        break;
#line 906 "switch_detection.m"
      case (MR_Integer) 2:
#line 911 "switch_detection.m"
        *check_hlds__switch_detection__FoundDeconstruct_15 = (MR_Integer) 1;
#line 906 "switch_detection.m"
        break;
#line 906 "switch_detection.m"
    }
#line 899 "switch_detection.m"
  }
#line 56 "switch_detection.m"
}

#line 38 "switch_detection.m"
void MR_CALL 
check_hlds__switch_detection__detect_switches_in_proc_3_p_0(
#line 38 "switch_detection.m"
  MR_Word check_hlds__switch_detection__Info_4,
#line 38 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15,
#line 38 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_16)
#line 38 "switch_detection.m"
{
#line 203 "switch_detection.m"
  {
#line 203 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, (MR_Integer) 0)));
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__AllowMulti_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, (MR_Integer) 1)));
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__VarTypes_8;
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__LocalInfo0_9;
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Goal0_10;
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__InstMap0_11;
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Goal_12;
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__LocalInfo_13;
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Requant_14;
#line 203 "switch_detection.m"
    MR_Word check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_18_18;
#line 242 "switch_detection.m"
    MR_Word check_hlds__switch_detection___InstMap_31;
#line 217 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_21_21;
#line 217 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_22_22;
#line 217 "switch_detection.m"
    MR_Word check_hlds__switch_detection__V_23_23;

#line 208 "switch_detection.m"
    {
#line 208 "switch_detection.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15, &check_hlds__switch_detection__VarTypes_8);
    }
#line 209 "switch_detection.m"
    {
#line 209 "switch_detection.m"
      check_hlds__switch_detection__LocalInfo0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 209 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo0_9, 0) = ((MR_Box) (check_hlds__switch_detection__ModuleInfo_6));
#line 209 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo0_9, 1) = ((MR_Box) (check_hlds__switch_detection__AllowMulti_7));
#line 209 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo0_9, 2) = ((MR_Box) (check_hlds__switch_detection__VarTypes_8));
#line 209 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo0_9, 3) = ((MR_Box) ((MR_Integer) 1));
#line 209 "switch_detection.m"
    }
#line 212 "switch_detection.m"
    {
#line 212 "switch_detection.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15, &check_hlds__switch_detection__Goal0_10);
    }
#line 213 "switch_detection.m"
    {
#line 213 "switch_detection.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15, check_hlds__switch_detection__ModuleInfo_6, &check_hlds__switch_detection__InstMap0_11);
    }
#line 242 "switch_detection.m"
    {
#line 242 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_goal_update_instmap_6_p_0(check_hlds__switch_detection__InstMap0_11, &check_hlds__switch_detection___InstMap_31, check_hlds__switch_detection__Goal0_10, &check_hlds__switch_detection__Goal_12, check_hlds__switch_detection__LocalInfo0_9, &check_hlds__switch_detection__LocalInfo_13);
    }
#line 216 "switch_detection.m"
    {
#line 216 "switch_detection.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__switch_detection__Goal_12, check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_0_15, &check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_18_18);
    }
#line 217 "switch_detection.m"
    check_hlds__switch_detection__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo_13, (MR_Integer) 0)));
#line 217 "switch_detection.m"
    check_hlds__switch_detection__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo_13, (MR_Integer) 1)));
#line 217 "switch_detection.m"
    check_hlds__switch_detection__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo_13, (MR_Integer) 2)));
#line 217 "switch_detection.m"
    check_hlds__switch_detection__Requant_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__switch_detection__LocalInfo_13, (MR_Integer) 3)));
#line 221 "switch_detection.m"
#line 221 "switch_detection.m"
    switch (check_hlds__switch_detection__Requant_14) {
#line 221 "switch_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 221 "switch_detection.m"
      case (MR_Integer) 1:
#line 222 "switch_detection.m"
        *check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_16 = check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_18_18;
#line 221 "switch_detection.m"
        break;
#line 221 "switch_detection.m"
      case (MR_Integer) 0:
#line 219 "switch_detection.m"
        {
#line 220 "switch_detection.m"
          {
#line 220 "switch_detection.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_18_18, check_hlds__switch_detection__STATE_VARIABLE_ProcInfo_16);
#line 220 "switch_detection.m"
            return;
          }
#line 219 "switch_detection.m"
        }
#line 221 "switch_detection.m"
        break;
#line 221 "switch_detection.m"
    }
#line 203 "switch_detection.m"
  }
#line 38 "switch_detection.m"
}

#line 36 "switch_detection.m"
MR_Word MR_CALL 
check_hlds__switch_detection__init_switch_detect_info_1_f_0(
#line 36 "switch_detection.m"
  MR_Word check_hlds__switch_detection__ModuleInfo_3)
#line 36 "switch_detection.m"
{
#line 122 "switch_detection.m"
  {
#line 122 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 122 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Info_4;
#line 122 "switch_detection.m"
    MR_Word check_hlds__switch_detection__AllowMulti_5;
#line 122 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Globals_8;
#line 122 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Allow_9;

#line 112 "switch_detection.m"
    {
#line 112 "switch_detection.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__switch_detection__ModuleInfo_3, &check_hlds__switch_detection__Globals_8);
    }
#line 113 "switch_detection.m"
    {
#line 113 "switch_detection.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__switch_detection__Globals_8, (MR_Integer) 292, &check_hlds__switch_detection__Allow_9);
    }
#line 117 "switch_detection.m"
#line 117 "switch_detection.m"
    switch (check_hlds__switch_detection__Allow_9) {
#line 117 "switch_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 117 "switch_detection.m"
      case (MR_Integer) 0:
#line 119 "switch_detection.m"
        check_hlds__switch_detection__AllowMulti_5 = (MR_Integer) 1;
#line 117 "switch_detection.m"
        break;
#line 117 "switch_detection.m"
      case (MR_Integer) 1:
#line 116 "switch_detection.m"
        check_hlds__switch_detection__AllowMulti_5 = (MR_Integer) 0;
#line 117 "switch_detection.m"
        break;
#line 117 "switch_detection.m"
    }
#line 124 "switch_detection.m"
    {
#line 124 "switch_detection.m"
      check_hlds__switch_detection__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 124 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, 0) = ((MR_Box) (check_hlds__switch_detection__ModuleInfo_3));
#line 124 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, 1) = ((MR_Box) (check_hlds__switch_detection__AllowMulti_5));
#line 124 "switch_detection.m"
    }
#line 122 "switch_detection.m"
    return check_hlds__switch_detection__Info_4;
#line 122 "switch_detection.m"
  }
#line 36 "switch_detection.m"
}

#line 32 "switch_detection.m"
void MR_CALL 
check_hlds__switch_detection__detect_switches_in_module_2_p_0(
#line 32 "switch_detection.m"
  MR_Word check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11,
#line 32 "switch_detection.m"
  MR_Word * check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_12)
#line 32 "switch_detection.m"
{
#line 128 "switch_detection.m"
  {
#line 128 "switch_detection.m"
    MR_bool check_hlds__switch_detection__succeeded;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__TypeCtorInfo_14_14;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__TypeCtorInfo_15_15;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Info_4;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ValidPredIds_5;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__ValidPredIdSet_6;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__PredMap0_7;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__PredIdsInfos0_8;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__PredIdsInfos_9;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__PredMap_10;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__AllowMulti_18;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Globals_21;
#line 128 "switch_detection.m"
    MR_Word check_hlds__switch_detection__Allow_22;

#line 112 "switch_detection.m"
    {
#line 112 "switch_detection.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__switch_detection__Globals_21);
    }
#line 113 "switch_detection.m"
    {
#line 113 "switch_detection.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__switch_detection__Globals_21, (MR_Integer) 292, &check_hlds__switch_detection__Allow_22);
    }
#line 117 "switch_detection.m"
#line 117 "switch_detection.m"
    switch (check_hlds__switch_detection__Allow_22) {
#line 117 "switch_detection.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 117 "switch_detection.m"
      case (MR_Integer) 0:
#line 119 "switch_detection.m"
        check_hlds__switch_detection__AllowMulti_18 = (MR_Integer) 1;
#line 117 "switch_detection.m"
        break;
#line 117 "switch_detection.m"
      case (MR_Integer) 1:
#line 116 "switch_detection.m"
        check_hlds__switch_detection__AllowMulti_18 = (MR_Integer) 0;
#line 117 "switch_detection.m"
        break;
#line 117 "switch_detection.m"
    }
#line 124 "switch_detection.m"
    {
#line 124 "switch_detection.m"
      check_hlds__switch_detection__Info_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 124 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, 0) = ((MR_Box) (check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11));
#line 124 "switch_detection.m"
      MR_hl_field(MR_mktag(0), check_hlds__switch_detection__Info_4, 1) = ((MR_Box) (check_hlds__switch_detection__AllowMulti_18));
#line 124 "switch_detection.m"
    }
#line 132 "switch_detection.m"
    {
#line 132 "switch_detection.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__switch_detection__ValidPredIds_5);
    }
#line 10948 "check_hlds.switch_detection.c"
    check_hlds__switch_detection__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 133 "switch_detection.m"
    {
#line 133 "switch_detection.m"
      check_hlds__switch_detection__ValidPredIdSet_6 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__switch_detection__TypeCtorInfo_14_14, check_hlds__switch_detection__ValidPredIds_5);
    }
#line 135 "switch_detection.m"
    {
#line 135 "switch_detection.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__switch_detection__PredMap0_7);
    }
#line 10960 "check_hlds.switch_detection.c"
    check_hlds__switch_detection__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 136 "switch_detection.m"
    {
#line 136 "switch_detection.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_14_14, check_hlds__switch_detection__TypeCtorInfo_15_15, check_hlds__switch_detection__PredMap0_7, &check_hlds__switch_detection__PredIdsInfos0_8);
    }
#line 138 "switch_detection.m"
    {
#line 138 "switch_detection.m"
      check_hlds__switch_detection__detect_switches_in_preds_4_p_0(check_hlds__switch_detection__Info_4, check_hlds__switch_detection__ValidPredIdSet_6, check_hlds__switch_detection__PredIdsInfos0_8, &check_hlds__switch_detection__PredIdsInfos_9);
    }
#line 140 "switch_detection.m"
    {
#line 140 "switch_detection.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__switch_detection__TypeCtorInfo_14_14, check_hlds__switch_detection__TypeCtorInfo_15_15, check_hlds__switch_detection__PredIdsInfos_9, &check_hlds__switch_detection__PredMap_10);
    }
#line 141 "switch_detection.m"
    {
#line 141 "switch_detection.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__switch_detection__PredMap_10, check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_0_11, check_hlds__switch_detection__STATE_VARIABLE_ModuleInfo_12);
#line 141 "switch_detection.m"
      return;
    }
#line 128 "switch_detection.m"
  }
#line 32 "switch_detection.m"
}

void mercury__check_hlds__switch_detection__init(void)
{
}

void mercury__check_hlds__switch_detection__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_again_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_allow_multi_arm_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_case_arm_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cases_table_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_entry_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_cons_id_state_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_deconstruct_search_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_found_deconstruct_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_local_switch_detect_info_0);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_process_unify_2);
	MR_register_type_ctor_info(&check_hlds__switch_detection__check_hlds__switch_detection__type_ctor_info_switch_detect_info_0);
}

void mercury__check_hlds__switch_detection__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.switch_detection. */
